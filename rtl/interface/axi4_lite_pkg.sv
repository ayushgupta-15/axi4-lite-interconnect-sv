`timescale 1ns/1ps
package axi4_lite_pkg;
    // AXI Response Codes
    localparam logic [1:0] RESP_OKAY   = 2'b00;
    localparam logic [1:0] RESP_EXOKAY = 2'b01;
    localparam logic [1:0] RESP_SLVERR = 2'b10;
    localparam logic [1:0] RESP_DECERR = 2'b11;

    // Register Offsets
    localparam logic [31:0] REG_CTRL       = 32'h00;
    localparam logic [31:0] REG_STATUS     = 32'h04;
    localparam logic [31:0] REG_TX_DATA    = 32'h08;
    localparam logic [31:0] REG_RX_DATA    = 32'h0C;
    localparam logic [31:0] REG_CONFIG     = 32'h10;
    localparam logic [31:0] REG_IRQ_ENABLE = 32'h14;
    localparam logic [31:0] REG_IRQ_STATUS = 32'h18;
    localparam logic [31:0] REG_SCRATCH    = 32'h1C;
endpackage
