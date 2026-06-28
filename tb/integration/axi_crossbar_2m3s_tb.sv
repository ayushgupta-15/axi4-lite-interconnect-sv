`timescale 1ns/1ps
import axi4_lite_pkg::*;

module axi_crossbar_2m3s_tb;

    logic clk;
    logic rst_n;

    axi4_lite_if axi_m0 (.ACLK(clk), .ARESETn(rst_n));
    axi4_lite_if axi_m1 (.ACLK(clk), .ARESETn(rst_n));

    axi_crossbar_2m3s dut (
        .clk(clk),
        .rst(rst_n),
        .axi_m0(axi_m0),
        .axi_m1(axi_m1)
    );

    initial clk = 0;
    always #5 clk = ~clk;

    // Sequence tracking for Test 3
    logic [1:0] grant_trace [0:3];
    int grant_idx = 0;
    
    always_ff @(posedge clk) begin
        if (rst_n && dut.axi_mux.AWVALID && dut.axi_mux.AWREADY) begin
            if (grant_idx < 4) begin
                grant_trace[grant_idx] = dut.aw_grant;
                grant_idx++;
            end
        end
    end

    // --- M0 Tasks ---
    task automatic m0_write(input [31:0] addr, input [31:0] data, output [1:0] resp);
        logic aw_done = 0, w_done = 0;
        logic aw_match, w_match, b_match;
        begin
            @(posedge clk); #1;
            axi_m0.AWADDR = addr; axi_m0.AWVALID = 1;
            axi_m0.WDATA = data; axi_m0.WSTRB = 4'hF; axi_m0.WVALID = 1;
            axi_m0.BREADY = 1;
            
            cov_m0_writes++;
            track_address_cov(addr);

            while (!aw_done || !w_done) begin
                @(posedge clk);
                aw_match = axi_m0.AWVALID && axi_m0.AWREADY;
                w_match = axi_m0.WVALID && axi_m0.WREADY;
                #1;
                if (!aw_done && aw_match) begin axi_m0.AWVALID = 0; aw_done = 1; end
                if (!w_done && w_match) begin axi_m0.WVALID = 0; w_done = 1; end
            end
            while (1) begin
                @(posedge clk);
                b_match = axi_m0.BVALID && axi_m0.BREADY;
                if (b_match) resp = axi_m0.BRESP;
                #1;
                if (b_match) begin
                    axi_m0.BREADY = 0; 
                    break;
                end
            end
        end
    endtask

    task automatic m0_read(input [31:0] addr, output [31:0] data, output [1:0] resp);
        logic ar_done = 0;
        logic ar_match, r_match;
        begin
            @(posedge clk); #1;
            axi_m0.ARADDR = addr; axi_m0.ARVALID = 1; axi_m0.RREADY = 1;
            
            cov_m0_reads++;
            track_address_cov(addr);
            
            while (!ar_done) begin
                @(posedge clk);
                ar_match = axi_m0.ARVALID && axi_m0.ARREADY;
                #1;
                if (ar_match) begin axi_m0.ARVALID = 0; ar_done = 1; end
            end
            while (1) begin
                @(posedge clk);
                r_match = axi_m0.RVALID && axi_m0.RREADY;
                if (r_match) begin data = axi_m0.RDATA; resp = axi_m0.RRESP; end
                #1;
                if (r_match) begin
                    axi_m0.RREADY = 0; break;
                end
            end
        end
    endtask

    // --- M1 Tasks ---
    task automatic m1_write(input [31:0] addr, input [31:0] data, output [1:0] resp);
        logic aw_done = 0, w_done = 0;
        logic aw_match, w_match, b_match;
        begin
            @(posedge clk); #1;
            axi_m1.AWADDR = addr; axi_m1.AWVALID = 1;
            axi_m1.WDATA = data; axi_m1.WSTRB = 4'hF; axi_m1.WVALID = 1;
            axi_m1.BREADY = 1;

            cov_m1_writes++;
            track_address_cov(addr);

            while (!aw_done || !w_done) begin
                @(posedge clk);
                aw_match = axi_m1.AWVALID && axi_m1.AWREADY;
                w_match = axi_m1.WVALID && axi_m1.WREADY;
                #1;
                if (!aw_done && aw_match) begin axi_m1.AWVALID = 0; aw_done = 1; end
                if (!w_done && w_match) begin axi_m1.WVALID = 0; w_done = 1; end
            end
            while (1) begin
                @(posedge clk);
                b_match = axi_m1.BVALID && axi_m1.BREADY;
                if (b_match) resp = axi_m1.BRESP;
                #1; 
                if (b_match) begin
                    axi_m1.BREADY = 0;
                    break;
                end
            end
        end
    endtask

    task automatic m1_read(input [31:0] addr, output [31:0] data, output [1:0] resp);
        logic ar_done = 0;
        logic ar_match, r_match;
        begin
            @(posedge clk); #1;
            axi_m1.ARADDR = addr; axi_m1.ARVALID = 1; axi_m1.RREADY = 1;

            cov_m1_reads++;
            track_address_cov(addr);

            while (!ar_done) begin
                @(posedge clk);
                ar_match = axi_m1.ARVALID && axi_m1.ARREADY;
                #1;
                if (ar_match) begin axi_m1.ARVALID = 0; ar_done = 1; end
            end
            while (1) begin
                @(posedge clk);
                r_match = axi_m1.RVALID && axi_m1.RREADY;
                if (r_match) begin data = axi_m1.RDATA; resp = axi_m1.RRESP; end
                #1; 
                if (r_match) begin
                    axi_m1.RREADY = 0; break;
                end
            end
        end
    endtask

    int errors = 0;
    logic [31:0] rdata0, rdata1;
    logic [1:0] resp0, resp1;
    
    logic [31:0] m0_mem_ref [0:127];
    logic [31:0] m1_mem_ref [128:255];

    initial begin
        $display("Starting Multi-Master Crossbar Tests...\n");
        rst_n = 0;
        axi_m0.AWVALID = 0; axi_m0.WVALID = 0; axi_m0.BREADY = 0; axi_m0.ARVALID = 0; axi_m0.RREADY = 0;
        axi_m1.AWVALID = 0; axi_m1.WVALID = 0; axi_m1.BREADY = 0; axi_m1.ARVALID = 0; axi_m1.RREADY = 0;

        #20;
        rst_n = 1;
        #20;

        // Test 1: Only M0 active
        m0_write(32'h0000_0000, 32'hAAAA_BBBB, resp0);
        m0_read(32'h0000_0000, rdata0, resp0);
        if (rdata0 !== 32'hAAAA_BBBB || resp0 !== RESP_OKAY) begin $display("FAIL: Test 1 M0 Mem"); errors++; end

        m0_write(32'h0000_2000, 32'h1234_5678, resp0); // UART
        m0_write(32'h0000_2004, 32'h9ABC_DEF0, resp0); // UART
        m0_read(32'h0000_2000, rdata0, resp0); // UART Read
        if (rdata0 !== 32'h9ABC_DEF0 || resp0 !== RESP_OKAY) begin $display("FAIL: Test 1 M0 UART"); errors++; end
        
        if (errors == 0) $display("PASS: Master0");

        // Test 2: Only M1 active
        m1_write(32'h0000_1004, 32'hCCCC_DDDD, resp1);
        m1_read(32'h0000_1004, rdata1, resp1);
        if (rdata1 !== 32'hCCCC_DDDD || resp1 !== RESP_OKAY) begin $display("FAIL: Test 2 M1 Reg"); errors++; end

        m1_write(32'h0000_3000, 32'hDEAD_BEEF, resp1); // Error slave
        if (resp1 !== RESP_SLVERR) begin $display("FAIL: M1 Error Write"); errors++; end

        m1_read(32'h0000_4000, rdata1, resp1); // Error slave (Out of bounds)
        if (resp1 !== RESP_SLVERR) begin $display("FAIL: M1 Error Read"); errors++; end
        
        if (errors == 0) $display("PASS: Master1");

        // Test 3: Both request simultaneously
        grant_idx = 0;
        fork
            begin
                m0_write(32'h0000_0004, 32'h1111_1111, resp0);
                m0_write(32'h0000_0008, 32'h2222_2222, resp0);
            end
            begin
                m1_write(32'h0000_000C, 32'h3333_3333, resp1);
                m1_write(32'h0000_0010, 32'h4444_4444, resp1);
            end
        join
        
        // Due to arbitrary start conditions, the sequence will alternate.
        // It should be 01, 10, 01, 10 OR 10, 01, 10, 01.
        if ((grant_trace[0] == 2'b01 && grant_trace[1] == 2'b10 && grant_trace[2] == 2'b01 && grant_trace[3] == 2'b10) ||
            (grant_trace[0] == 2'b10 && grant_trace[1] == 2'b01 && grant_trace[2] == 2'b10 && grant_trace[3] == 2'b01)) begin
            $display("PASS: Arbitration");
            $display("PASS: Fairness");
        end else begin
            $display("FAIL: Fairness/Arbitration sequence incorrect");
            errors++;
        end

        // Test 4: Random Regression
        for (int i=0; i<128; i++) begin m0_mem_ref[i] = 0; m1_mem_ref[i+128] = 0; end
        m0_mem_ref[0] = 32'hAAAA_BBBB;
        m0_mem_ref[1] = 32'h1111_1111;
        m0_mem_ref[2] = 32'h2222_2222;
        m0_mem_ref[3] = 32'h3333_3333;
        m0_mem_ref[4] = 32'h4444_4444;
        
        fork
            begin
                for (int i=0; i<500; i++) begin
                    // M0 Random
                    logic [2:0] m0_slave_sel;
                    logic [31:0] addr0;
                    logic [31:0] data0;

                    m0_slave_sel = $urandom_range(0, 3);
                    if (m0_slave_sel == 0) addr0 = 32'h0000_0000 + ($urandom_range(0, 127) * 4);
                    else if (m0_slave_sel == 1) addr0 = 32'h0000_1000 + ($urandom_range(0, 3) * 4);
                    else if (m0_slave_sel == 2) addr0 = 32'h0000_2000 + ($urandom_range(0, 3) * 4);
                    else addr0 = 32'h0000_3000 + ($urandom_range(0, 3) * 4);
                    
                    data0 = $urandom();
                    if ($urandom_range(0,1)) begin
                        m0_write(addr0, data0, resp0);
                        if (m0_slave_sel == 0 && resp0 == RESP_OKAY) m0_mem_ref[addr0 >> 2] = data0;
                    end else begin
                        m0_read(addr0, rdata0, resp0);
                        if (m0_slave_sel == 0 && resp0 == RESP_OKAY && rdata0 !== m0_mem_ref[addr0 >> 2]) begin
                            $display("FAIL: M0 Random Mismatch Addr=%h Expected=%h Got=%h", addr0, m0_mem_ref[addr0 >> 2], rdata0); errors++;
                        end
                    end
                end
            end
            begin
                for (int i=0; i<500; i++) begin
                    // M1 Random
                    logic [2:0] m1_slave_sel;
                    logic [31:0] addr1;
                    logic [31:0] data1;
                    
                    m1_slave_sel = $urandom_range(0, 3);
                    if (m1_slave_sel == 0) addr1 = 32'h0000_0000 + ($urandom_range(128, 255) * 4);
                    else if (m1_slave_sel == 1) addr1 = 32'h0000_1000 + ($urandom_range(4, 7) * 4);
                    else if (m1_slave_sel == 2) addr1 = 32'h0000_2000 + ($urandom_range(4, 7) * 4);
                    else addr1 = 32'h0000_3000 + ($urandom_range(4, 7) * 4);

                    data1 = $urandom();
                    if ($urandom_range(0,1)) begin
                        m1_write(addr1, data1, resp1);
                        if (m1_slave_sel == 0 && resp1 == RESP_OKAY) m1_mem_ref[addr1 >> 2] = data1;
                    end else begin
                        m1_read(addr1, rdata1, resp1);
                        if (m1_slave_sel == 0 && resp1 == RESP_OKAY && rdata1 !== m1_mem_ref[addr1 >> 2]) begin
                            $display("FAIL: M1 Random Mismatch Addr=%h Expected=%h Got=%h", addr1, m1_mem_ref[addr1 >> 2], rdata1); errors++;
                        end
                    end
                end
            end
        join
        
        if (errors == 0) $display("PASS: Random Regression");

        $display("\n-----------------------------");
        if (errors == 0) $display("ALL TESTS PASSED");
        else $display("SOME TESTS FAILED: %d errors", errors);
        $display("-----------------------------");
        
        print_coverage();
        
        $finish;
    end

    // --- Functional Coverage Tracking ---
    int cov_m0_writes = 0, cov_m1_writes = 0;
    int cov_m0_reads = 0,  cov_m1_reads = 0;
    int cov_write_contention = 0, cov_read_contention = 0;
    
    int cov_mem_hits = 0, cov_reg_hits = 0, cov_uart_hits = 0, cov_err_hits = 0;

    task automatic track_address_cov(input [31:0] addr);
        if (addr < 32'h1000) cov_mem_hits++;
        else if (addr < 32'h2000) cov_reg_hits++;
        else if (addr < 32'h3000) cov_uart_hits++;
        else cov_err_hits++;
    endtask

    always_ff @(posedge clk) begin
        if (rst_n) begin
            // Contention coverage (Cross coverage)
            if (axi_m0.AWVALID && axi_m1.AWVALID && !dut.w_busy) cov_write_contention++;
            if (axi_m0.ARVALID && axi_m1.ARVALID && !dut.r_busy) cov_read_contention++;
        end
    end

    task automatic print_coverage();
        $display("\n=============================================");
        $display("       AXI CROSSBAR FUNCTIONAL COVERAGE      ");
        $display("=============================================");
        $display(" Master Coverage:");
        $display("   M0 Writes : %d", cov_m0_writes);
        $display("   M1 Writes : %d", cov_m1_writes);
        $display("   M0 Reads  : %d", cov_m0_reads);
        $display("   M1 Reads  : %d", cov_m1_reads);
        $display("---------------------------------------------");
        $display(" Slave Address Coverage:");
        $display("   Memory   (0x0000 - 0x0FFF) : %d", cov_mem_hits);
        $display("   Register (0x1000 - 0x1FFF) : %d", cov_reg_hits);
        $display("   UART     (0x2000 - 0x2FFF) : %d", cov_uart_hits);
        $display("   Error    (0x3000 - 0xFFFF) : %d", cov_err_hits);
        $display("---------------------------------------------");
        $display(" Cross Coverage (Contention):");
        $display("   Simultaneous Write Reqs : %d", cov_write_contention);
        $display("   Simultaneous Read Reqs  : %d", cov_read_contention);
        $display("---------------------------------------------");
        $display(" Coverage Goals Achieved:");
        $display("   Memory     [%s]", cov_mem_hits > 0 ? "x" : " ");
        $display("   Register   [%s]", cov_reg_hits > 0 ? "x" : " ");
        $display("   UART       [%s]", cov_uart_hits > 0 ? "x" : " ");
        $display("   Error      [%s]", cov_err_hits > 0 ? "x" : " ");
        $display("   Read       [%s]", (cov_m0_reads > 0 && cov_m1_reads > 0) ? "x" : " ");
        $display("   Write      [%s]", (cov_m0_writes > 0 && cov_m1_writes > 0) ? "x" : " ");
        $display("   M0         [%s]", (cov_m0_reads > 0 && cov_m0_writes > 0) ? "x" : " ");
        $display("   M1         [%s]", (cov_m1_reads > 0 && cov_m1_writes > 0) ? "x" : " ");
        $display("   Contention [%s]", (cov_write_contention > 0 || cov_read_contention > 0) ? "x" : " ");
        $display("   SLVERR     [%s]", cov_err_hits > 0 ? "x" : " ");
        $display("=============================================\n");
    endtask

endmodule
