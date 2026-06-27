`timescale 1ns/1ps

module axi_memory_slave (
    input  logic clk,
    input  logic rst,
    axi4_lite_if axi
);

    logic [31:0] memory [0:255];

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
            axi.BRESP  <= 2'b00;
        end else begin
            if (aw_done && w_done && !axi.BVALID) begin
                axi.BVALID <= 1'b1;
                axi.BRESP  <= 2'b00;
                memory[awaddr_q[9:2]] <= wdata_q;
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
            axi.RRESP  <= 2'b00;
        end else begin
            if (ar_done && !axi.RVALID) begin
                axi.RVALID <= 1'b1;
                axi.RDATA  <= memory[araddr_q[9:2]];
                axi.RRESP  <= 2'b00;
            end else if (axi.RVALID && axi.RREADY) begin
                axi.RVALID <= 1'b0;
            end
        end
    end

endmodule
