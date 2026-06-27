`timescale 1ns/1ps

import axi4_lite_pkg::*;

module axi_register_slave_tb;

    logic clk;
    logic rst_n;

    axi4_lite_if axi (
        .ACLK(clk),
        .ARESETn(rst_n)
    );

    axi_register_slave dut (
        .clk(clk),
        .rst(rst_n),
        .axi(axi)
    );

    // Clock generation
    initial clk = 0;
    always #5 clk = ~clk;

    // Tasks for AXI Write and Read
    task automatic axi_write(
        input [31:0] addr,
        input [31:0] data
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
        output [31:0] data
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
                if (r_match) data = axi.RDATA;
                #1;
                if (r_match) begin
                    axi.RREADY = 1'b0;
                    break;
                end
            end
        end
    endtask

    int errors;
    logic [31:0] rdata;
    int i;
    logic [31:0] rand_addr, rand_data;

    initial begin
        $display("TB Start");
        rst_n = 0;
        axi.AWADDR = '0; axi.AWVALID = 0;
        axi.WDATA = '0; axi.WSTRB = '0; axi.WVALID = 0;
        axi.BREADY = 0;
        axi.ARADDR = '0; axi.ARVALID = 0;
        axi.RREADY = 0;

        #20;
        rst_n = 1;
        #20;

        errors = 0;
        $display("Starting AXI Register Slave Tests...\n");

        // Test 1: Reset Values
        axi_read(REG_CTRL, rdata);
        if (rdata !== 32'h0) begin $display("FAIL: Reset CTRL (Expected 0, Got %h)", rdata); errors++; end
        
        axi_read(REG_STATUS, rdata);
        if (rdata !== 32'h1) begin $display("FAIL: Reset STATUS (Expected 1, Got %h)", rdata); errors++; end
        
        axi_read(REG_CONFIG, rdata);
        if (rdata !== 32'h10) begin $display("FAIL: Reset CONFIG (Expected 10, Got %h)", rdata); errors++; end
        
        if (errors == 0) $display("PASS: Reset Values");

        // Test 2: Single Register Write/Read
        axi_write(REG_SCRATCH, 32'hDEADBEEF);
        axi_read(REG_SCRATCH, rdata);
        if (rdata === 32'hDEADBEEF) $display("PASS: Single Register Write/Read");
        else begin $display("FAIL: Single Register Write/Read (Expected DEADBEEF, Got %h)", rdata); errors++; end

        // Test 3: All Registers
        for (i = 0; i < 8; i++) begin
            axi_write(i*4, 32'h1000 + i);
        end
        for (i = 0; i < 8; i++) begin
            axi_read(i*4, rdata);
            if (rdata !== (32'h1000 + i)) begin
                $display("FAIL: All Registers Test at %h (Expected %h, Got %h)", i*4, 32'h1000 + i, rdata);
                errors++;
            end
        end
        if (errors == 0) $display("PASS: All Registers");

        // Test 4: Reset Recovery
        rst_n = 0;
        #20;
        rst_n = 1;
        #20;
        
        axi_read(REG_STATUS, rdata);
        if (rdata === 32'h1) $display("PASS: Reset Recovery");
        else begin $display("FAIL: Reset Recovery (Expected 1, Got %h)", rdata); errors++; end

        // Test 5: Random Regression (100 Writes/Reads)
        for (i = 0; i < 100; i++) begin
            rand_addr = ($urandom_range(0, 7)) * 4;
            rand_data = $urandom();
            
            axi_write(rand_addr, rand_data);
            axi_read(rand_addr, rdata);
            
            if (rdata !== rand_data) begin
                $display("FAIL: Random Regression at %h (Expected %h, Got %h)", rand_addr, rand_data, rdata);
                errors++;
            end
        end
        if (errors == 0) $display("PASS: Random Regression (100)");

        $display("\n--------------------------------");
        if (errors == 0) $display("ALL TESTS PASSED");
        else $display("SOME TESTS FAILED");
        $display("--------------------------------");
        $finish;
    end

endmodule
