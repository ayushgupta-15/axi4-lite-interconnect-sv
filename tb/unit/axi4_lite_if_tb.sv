`timescale 1ns/1ps

module axi4_lite_if_tb;

    logic clk;
    logic rst_n;

    // Clock generation (not strictly needed for compile test, but good practice)
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Instantiate the interface
    axi4_lite_if axi (
        .ACLK(clk),
        .ARESETn(rst_n)
    );

    initial begin
        $display("Interface compiled successfully.");
        $finish;
    end

endmodule
