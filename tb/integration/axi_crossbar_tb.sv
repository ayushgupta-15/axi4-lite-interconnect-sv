`timescale 1ns/1ps
import axi4_lite_pkg::*;

module axi_crossbar_tb;

    logic clk;
    logic rst_n;

    axi4_lite_if axi (.ACLK(clk), .ARESETn(rst_n));

    axi_crossbar_1m3s dut (
        .clk(clk),
        .rst(rst_n),
        .axi_m(axi)
    );

    initial clk = 0;
    always #5 clk = ~clk;

    // Tasks for AXI Write and Read
    task automatic axi_write(
        input [31:0] addr,
        input [31:0] data,
        output [1:0] resp
    );
        logic aw_done = 0;
        logic w_done = 0;
        logic aw_match, w_match, b_match;
        begin
            @(posedge clk);
            #1;
            axi.AWADDR = addr;
            axi.AWVALID = 1'b1;
            
            axi.WDATA = data;
            axi.WSTRB = 4'hF;
            axi.WVALID = 1'b1;
            
            axi.BREADY = 1'b1;

            while (!aw_done || !w_done) begin
                @(posedge clk);
                aw_match = axi.AWVALID && axi.AWREADY;
                w_match = axi.WVALID && axi.WREADY;
                #1;
                if (aw_match) begin
                    axi.AWVALID = 1'b0;
                    aw_done = 1;
                end
                if (w_match) begin
                    axi.WVALID = 1'b0;
                    w_done = 1;
                end
            end

            while (1) begin
                @(posedge clk);
                b_match = axi.BVALID && axi.BREADY;
                if (b_match) resp = axi.BRESP;
                #1;
                if (b_match) begin
                    axi.BREADY = 1'b0;
                    break;
                end
            end
        end
    endtask

    task automatic axi_read(
        input [31:0] addr,
        output [31:0] data,
        output [1:0]  resp
    );
        logic ar_done = 0;
        logic ar_match, r_match;
        begin
            @(posedge clk);
            #1;
            axi.ARADDR = addr;
            axi.ARVALID = 1'b1;
            axi.RREADY = 1'b1;

            while (!ar_done) begin
                @(posedge clk);
                ar_match = axi.ARVALID && axi.ARREADY;
                #1;
                if (ar_match) begin
                    axi.ARVALID = 1'b0;
                    ar_done = 1;
                end
            end

            while (1) begin
                @(posedge clk);
                r_match = axi.RVALID && axi.RREADY;
                if (r_match) begin
                    data = axi.RDATA;
                    resp = axi.RRESP;
                end
                #1;
                if (r_match) begin
                    axi.RREADY = 1'b0;
                    break;
                end
            end
        end
    endtask

    int errors = 0;
    logic [31:0] rdata;
    logic [1:0] resp;
    int i;
    logic [31:0] rand_addr, rand_data;

    // Emulated software model for Random Regression
    logic [31:0] mem_ref [0:255];
    logic [31:0] reg_ref [0:7];
    logic [31:0] uart_ref;

    initial begin
        $display("Starting Crossbar Tests...\n");
        rst_n = 0;
        axi.AWADDR = '0; axi.AWVALID = 0;
        axi.WDATA = '0; axi.WSTRB = '0; axi.WVALID = 0;
        axi.BREADY = 0;
        axi.ARADDR = '0; axi.ARVALID = 0;
        axi.RREADY = 0;

        #20;
        rst_n = 1;
        #20;

        // Init software model
        for (i = 0; i < 256; i++) mem_ref[i] = 0;
        reg_ref[0] = 32'h0; reg_ref[1] = 32'h1; reg_ref[2] = 32'h0; reg_ref[3] = 32'h0;
        reg_ref[4] = 32'h10; reg_ref[5] = 32'h0; reg_ref[6] = 32'h0; reg_ref[7] = 32'h0;
        uart_ref = 0;

        // Test 1: Memory Routing
        axi_write(32'h0000_0100, 32'h11223344, resp);
        mem_ref[(32'h0000_0100 - 32'h0000_0000) >> 2] = 32'h11223344;
        if (resp !== RESP_OKAY) begin $display("FAIL: Mem Write Resp %b", resp); errors++; end
        
        axi_read(32'h0000_0100, rdata, resp);
        if (rdata !== 32'h11223344 || resp !== RESP_OKAY) begin
            $display("FAIL: Mem Read (Expected 11223344 OK, Got %h %b)", rdata, resp); errors++;
        end else begin
            $display("PASS: Memory Routing");
        end

        // Test 2: Register Routing
        axi_write(32'h0000_101C, 32'hAABBCCDD, resp); // SCRATCH
        reg_ref[(32'h0000_101C - 32'h0000_1000) >> 2] = 32'hAABBCCDD;
        axi_read(32'h0000_101C, rdata, resp);
        if (rdata !== 32'hAABBCCDD || resp !== RESP_OKAY) begin
            $display("FAIL: Reg Read (Expected AABBCCDD OK, Got %h %b)", rdata, resp); errors++;
        end else begin
            $display("PASS: Register Routing");
        end
        
        // Ensure memory wasn't affected
        axi_read(32'h0000_001C, rdata, resp);
        if (rdata !== 32'h0) begin $display("FAIL: Reg write leaked to Mem"); errors++; end

        // Test 3: UART Routing
        axi_write(32'h0000_2004, 32'hDEADC0DE, resp);
        uart_ref = 32'hDEADC0DE;
        axi_read(32'h0000_2004, rdata, resp);
        if (rdata !== 32'hDEADC0DE || resp !== RESP_OKAY) begin
            $display("FAIL: UART Read (Expected DEADC0DE OK, Got %h %b)", rdata, resp); errors++;
        end else begin
            $display("PASS: UART Routing");
        end

        // Test 4: Illegal Address
        axi_write(32'h0000_3000, 32'hFFFFFFFF, resp);
        if (resp !== RESP_SLVERR) begin
            $display("FAIL: Illegal Write (Expected SLVERR, Got %b)", resp); errors++;
        end
        
        axi_read(32'h0000_F000, rdata, resp);
        if (resp !== RESP_SLVERR) begin
            $display("FAIL: Illegal Read (Expected SLVERR, Got %b)", resp); errors++;
        end else begin
            $display("PASS: Invalid Address");
        end

        // Test 5: Random Regression (1000 tx)
        for (i = 0; i < 1000; i++) begin
            int unsigned target = $urandom_range(0, 3);
            logic write = $urandom_range(0, 1) ? 1'b1 : 1'b0;
            rand_data = $urandom();
            
            case (target)
                0: rand_addr = 32'h0000_0000 + ($urandom_range(0, 255) * 4); // Mem
                1: rand_addr = 32'h0000_1000 + ($urandom_range(0, 7) * 4);   // Reg
                2: rand_addr = 32'h0000_2000 + ($urandom_range(0, 15) * 4);  // UART (just maps to single reg anyway)
                3: rand_addr = 32'h0000_5000 + ($urandom_range(0, 100) * 4); // Invalid
                default: rand_addr = '0;
            endcase
            
            if (write) begin
                axi_write(rand_addr, rand_data, resp);
                if (target == 3 && resp !== RESP_SLVERR) begin $display("FAIL WRITE T3: Expected SLVERR, Got %b", resp); errors++; end
                else if (target != 3 && resp !== RESP_OKAY) begin $display("FAIL WRITE T%0d: Expected OKAY, Got %b", target, resp); errors++; end
                
                if (resp == RESP_OKAY) begin
                    if (target == 0) mem_ref[(rand_addr - 32'h0000_0000) >> 2] = rand_data;
                    if (target == 1) reg_ref[(rand_addr - 32'h0000_1000) >> 2] = rand_data;
                    if (target == 2) uart_ref = rand_data;
                end
            end else begin
                axi_read(rand_addr, rdata, resp);
                if (target == 3 && resp !== RESP_SLVERR) begin $display("FAIL READ T3: Expected SLVERR, Got %b", resp); errors++; end
                else if (target != 3 && resp !== RESP_OKAY) begin $display("FAIL READ T%0d: Expected OKAY, Got %b", target, resp); errors++; end
                
                if (resp == RESP_OKAY) begin
                    if (target == 0 && rdata !== mem_ref[(rand_addr - 32'h0000_0000) >> 2]) begin $display("FAIL Mem Mismatch at %h: Exp %h, Got %h", rand_addr, mem_ref[(rand_addr - 32'h0000_0000) >> 2], rdata); errors++; end
                    if (target == 1 && rdata !== reg_ref[(rand_addr - 32'h0000_1000) >> 2]) begin $display("FAIL Reg Mismatch at %h: Exp %h, Got %h", rand_addr, reg_ref[(rand_addr - 32'h0000_1000) >> 2], rdata); errors++; end
                    if (target == 2 && rdata !== uart_ref) begin $display("FAIL UART Mismatch at %h: Exp %h, Got %h", rand_addr, uart_ref, rdata); errors++; end
                end
            end
            
            if (errors > 0 && i < 10) begin
                $display("Random failure at cycle %d, addr %h, target %d", i, rand_addr, target);
                break;
            end
        end
        
        if (errors == 0) $display("PASS: Random Regression (1000)");

        $display("\n-----------------------------");
        if (errors == 0) $display("ALL TESTS PASSED");
        else $display("SOME TESTS FAILED: %d errors", errors);
        $display("-----------------------------");
        $finish;
    end

endmodule
