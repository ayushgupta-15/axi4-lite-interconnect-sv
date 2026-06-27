`timescale 1ns/1ps
import axi4_lite_pkg::*;

module axi_error_slave (
    input logic clk, rst,
    axi4_lite_if axi
);
    logic aw_done, w_done, ar_done;
    
    assign axi.AWREADY = ~aw_done && ~axi.BVALID;
    assign axi.WREADY  = ~w_done && ~axi.BVALID;
    assign axi.ARREADY = ~ar_done && ~axi.RVALID;

    always_ff @(posedge clk or negedge rst) begin
        if (!rst) aw_done <= 0;
        else if (axi.AWVALID && axi.AWREADY) aw_done <= 1;
        else if (axi.BVALID && axi.BREADY) aw_done <= 0;
    end
    always_ff @(posedge clk or negedge rst) begin
        if (!rst) w_done <= 0;
        else if (axi.WVALID && axi.WREADY) w_done <= 1;
        else if (axi.BVALID && axi.BREADY) w_done <= 0;
    end
    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            axi.BVALID <= 0;
            axi.BRESP <= RESP_OKAY;
        end else if (aw_done && w_done && !axi.BVALID) begin
            axi.BVALID <= 1;
            axi.BRESP <= RESP_SLVERR;
        end else if (axi.BVALID && axi.BREADY) axi.BVALID <= 0;
    end
    always_ff @(posedge clk or negedge rst) begin
        if (!rst) ar_done <= 0;
        else if (axi.ARVALID && axi.ARREADY) ar_done <= 1;
        else if (axi.RVALID && axi.RREADY) ar_done <= 0;
    end
    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            axi.RVALID <= 0;
            axi.RDATA <= 0;
            axi.RRESP <= RESP_OKAY;
        end else if (ar_done && !axi.RVALID) begin
            axi.RVALID <= 1;
            axi.RDATA <= 0;
            axi.RRESP <= RESP_SLVERR;
        end else if (axi.RVALID && axi.RREADY) axi.RVALID <= 0;
    end
endmodule
