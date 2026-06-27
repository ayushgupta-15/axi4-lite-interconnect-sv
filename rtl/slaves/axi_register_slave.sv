`timescale 1ns/1ps

import axi4_lite_pkg::*;

module axi_register_slave (
    input  logic clk,
    input  logic rst,
    axi4_lite_if axi
);

    logic [31:0] regs [0:7];

    logic aw_done, w_done, ar_done;
    logic [31:0] awaddr_q, wdata_q, araddr_q;

    // --- Write Channel ---
    assign axi.AWREADY = ~aw_done && ~axi.BVALID;
    assign axi.WREADY  = ~w_done && ~axi.BVALID;

    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            aw_done <= 1'b0;
            awaddr_q <= '0;
        end else begin
            if (axi.AWVALID && axi.AWREADY) begin
                aw_done <= 1'b1;
                awaddr_q <= axi.AWADDR;
            end else if (axi.BVALID && axi.BREADY) begin
                aw_done <= 1'b0;
            end
        end
    end

    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            w_done <= 1'b0;
            wdata_q <= '0;
        end else begin
            if (axi.WVALID && axi.WREADY) begin
                w_done <= 1'b1;
                wdata_q <= axi.WDATA;
            end else if (axi.BVALID && axi.BREADY) begin
                w_done <= 1'b0;
            end
        end
    end

    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            axi.BVALID <= 1'b0;
            axi.BRESP  <= RESP_OKAY;
            
            regs[0] <= 32'h0;        // CTRL
            regs[1] <= 32'h1;        // STATUS
            regs[2] <= 32'h0;        // TX_DATA
            regs[3] <= 32'h0;        // RX_DATA
            regs[4] <= 32'h10;       // CONFIG
            regs[5] <= 32'h0;        // IRQ_ENABLE
            regs[6] <= 32'h0;        // IRQ_STATUS
            regs[7] <= 32'h0;        // SCRATCH
        end else begin
            if (aw_done && w_done && !axi.BVALID) begin
                axi.BVALID <= 1'b1;
                axi.BRESP  <= RESP_OKAY;
                regs[awaddr_q[4:2]] <= wdata_q;
            end else if (axi.BVALID && axi.BREADY) begin
                axi.BVALID <= 1'b0;
            end
        end
    end

    // --- Read Channel ---
    assign axi.ARREADY = ~ar_done && ~axi.RVALID;

    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            ar_done <= 1'b0;
            araddr_q <= '0;
        end else begin
            if (axi.ARVALID && axi.ARREADY) begin
                ar_done <= 1'b1;
                araddr_q <= axi.ARADDR;
            end else if (axi.RVALID && axi.RREADY) begin
                ar_done <= 1'b0;
            end
        end
    end

    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            axi.RVALID <= 1'b0;
            axi.RDATA  <= '0;
            axi.RRESP  <= RESP_OKAY;
        end else begin
            if (ar_done && !axi.RVALID) begin
                axi.RVALID <= 1'b1;
                axi.RDATA  <= regs[araddr_q[4:2]];
                axi.RRESP  <= RESP_OKAY;
            end else if (axi.RVALID && axi.RREADY) begin
                axi.RVALID <= 1'b0;
            end
        end
    end

endmodule
