`timescale 1ns/1ps

module round_robin_arbiter_tb;

    parameter int NUM_MASTERS = 2;

    logic clk;
    logic rst_n;
    logic [NUM_MASTERS-1:0] req;
    logic [NUM_MASTERS-1:0] grant;

    round_robin_arbiter #(
        .NUM_MASTERS(NUM_MASTERS)
    ) dut (
        .clk(clk),
        .rst(rst_n),
        .req(req),
        .grant(grant)
    );

    initial clk = 0;
    always #5 clk = ~clk;

    int errors = 0;
    int i;
    logic [NUM_MASTERS-1:0] last_grant;

    initial begin
        $display("TB Start");
        rst_n = 0;
        req = '0;
        
        #20;
        rst_n = 1;
        #20;

        $display("Starting Round Robin Arbiter Tests...\n");

        // Test 1: No Request
        @(negedge clk);
        req = 2'b00;
        @(posedge clk);
        #1;
        if (grant !== 2'b00) begin
            $display("FAIL: No Request (Expected 00, Got %b)", grant);
            errors++;
        end else begin
            $display("PASS: No Request");
        end

        // Test 2: Single Request M0
        @(negedge clk);
        req = 2'b01;
        @(posedge clk);
        #1;
        if (grant !== 2'b01) begin
            $display("FAIL: Single Request M0 (Expected 01, Got %b)", grant);
            errors++;
        end else begin
            $display("PASS: Single Request M0");
        end

        // Test 3: Single Request M1
        @(negedge clk);
        req = 2'b10;
        @(posedge clk);
        #1;
        if (grant !== 2'b10) begin
            $display("FAIL: Single Request M1 (Expected 10, Got %b)", grant);
            errors++;
        end else begin
            $display("PASS: Single Request M1");
        end

        // Test 4: Both request continuously
        @(negedge clk);
        req = 2'b11;
        
        // Cycle 1
        @(posedge clk); #1;
        if (grant !== 2'b01) begin $display("FAIL: Both Request Cycle 1 (Expected 01, Got %b)", grant); errors++; end
        // Cycle 2
        @(posedge clk); #1;
        if (grant !== 2'b10) begin $display("FAIL: Both Request Cycle 2 (Expected 10, Got %b)", grant); errors++; end
        // Cycle 3
        @(posedge clk); #1;
        if (grant !== 2'b01) begin $display("FAIL: Both Request Cycle 3 (Expected 01, Got %b)", grant); errors++; end
        // Cycle 4
        @(posedge clk); #1;
        if (grant !== 2'b10) begin $display("FAIL: Both Request Cycle 4 (Expected 10, Got %b)", grant); errors++; end
        
        if (errors == 0) $display("PASS: Alternating Arbitration");

        // Test 5: Random Regression (1000)
        req = 2'b00;
        @(negedge clk);
        
        for (i = 0; i < 1000; i++) begin
            @(negedge clk);
            req = $urandom_range(0, 3);
            
            @(posedge clk);
            #1;
            
            // Assert mutual exclusion (only 1 bit set)
            if (grant != 2'b00 && grant != 2'b01 && grant != 2'b10) begin
                $display("FAIL: Mutual Exclusion violated at cycle %0d: grant=%b", i, grant);
                errors++;
            end
            
            // Assert progress (if req != 0, grant != 0)
            if (req != 2'b00 && grant == 2'b00) begin
                $display("FAIL: Progress violated at cycle %0d: req=%b, grant=%b", i, req, grant);
                errors++;
            end
            
            // If request only has one bit, it must be granted
            if (req == 2'b01 && grant != 2'b01) begin
                $display("FAIL: Single req M0 violated at cycle %0d: grant=%b", i, grant);
                errors++;
            end
            if (req == 2'b10 && grant != 2'b10) begin
                $display("FAIL: Single req M1 violated at cycle %0d: grant=%b", i, grant);
                errors++;
            end
            
            last_grant = grant;
        end
        if (errors == 0) $display("PASS: Random Regression (1000)");

        $display("\n--------------------------------");
        if (errors == 0) $display("ALL TESTS PASSED");
        else $display("SOME TESTS FAILED");
        $display("--------------------------------");
        $finish;
    end

endmodule
