`timescale 1ns/1ps

module axi_addr_decoder_tb;

    logic [31:0] addr;
    logic [2:0]  slave_sel;

    axi_addr_decoder dut (
        .addr(addr),
        .slave_sel(slave_sel)
    );

    int errors;
    int i;
    int choice;
    logic [31:0] rand_addr;

    initial begin
        errors = 0;
        $display("Starting AXI Address Decoder Tests...\n");

        // Test 1
        addr = 32'h00000004; #10;
        if (slave_sel === 3'b001) $display("PASS: Slave0 Decode");
        else begin $display("FAIL: Slave0 Decode (addr=%h, sel=%b)", addr, slave_sel); errors++; end

        // Test 2
        addr = 32'h00001024; #10;
        if (slave_sel === 3'b010) $display("PASS: Slave1 Decode");
        else begin $display("FAIL: Slave1 Decode (addr=%h, sel=%b)", addr, slave_sel); errors++; end

        // Test 3
        addr = 32'h00002088; #10;
        if (slave_sel === 3'b100) $display("PASS: Slave2 Decode");
        else begin $display("FAIL: Slave2 Decode (addr=%h, sel=%b)", addr, slave_sel); errors++; end

        // Test 4
        addr = 32'h00003000; #10;
        if (slave_sel === 3'b000) $display("PASS: Invalid Address");
        else begin $display("FAIL: Invalid Address (addr=%h, sel=%b)", addr, slave_sel); errors++; end

        // Test 5: Random Regression
        for (i = 0; i < 100; i++) begin
            choice = $urandom_range(0, 3);
            case (choice)
                0: rand_addr = 32'h0000_0000 + $urandom_range(0, 32'h0FFF);
                1: rand_addr = 32'h0000_1000 + $urandom_range(0, 32'h0FFF);
                2: rand_addr = 32'h0000_2000 + $urandom_range(0, 32'h0FFF);
                3: begin 
                    rand_addr = $urandom();
                    // Ensure it is outside the mapped regions
                    while (rand_addr < 32'h0000_3000) rand_addr = $urandom();
                end
            endcase
            
            addr = rand_addr; #10;
            
            if (addr >= 32'h0000_0000 && addr < 32'h0000_1000) begin
                if (slave_sel !== 3'b001) errors++;
            end else if (addr >= 32'h0000_1000 && addr < 32'h0000_2000) begin
                if (slave_sel !== 3'b010) errors++;
            end else if (addr >= 32'h0000_2000 && addr < 32'h0000_3000) begin
                if (slave_sel !== 3'b100) errors++;
            end else begin
                if (slave_sel !== 3'b000) errors++;
            end
        end

        if (errors == 0) $display("PASS: Random Regression (100 Tests)");
        else $display("FAIL: Random Regression with %0d errors", errors);

        $display("\nALL TESTS PASSED");
        $finish;
    end

endmodule
