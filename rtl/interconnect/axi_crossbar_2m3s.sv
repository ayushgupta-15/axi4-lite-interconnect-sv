`timescale 1ns/1ps
import axi4_lite_pkg::*;

module axi_crossbar_2m3s (
    input logic clk,
    input logic rst,
    axi4_lite_if axi_m0,
    axi4_lite_if axi_m1
);

    // Internal multiplexed interface
    axi4_lite_if axi_mux (.ACLK(clk), .ARESETn(rst));
    
    // Crossbar 1M3S instance
    axi_crossbar_1m3s xbar (
        .clk(clk),
        .rst(rst),
        .axi_m(axi_mux)
    );

    // --- Write Path Arbitration ---
    logic [1:0] aw_req, aw_grant;
    assign aw_req[0] = axi_m0.AWVALID;
    assign aw_req[1] = axi_m1.AWVALID;

    logic aw_update_en;
    assign aw_update_en = axi_mux.AWVALID && axi_mux.AWREADY;

    round_robin_arbiter #(.NUM_MASTERS(2)) aw_arbiter (
        .clk(clk),
        .rst(rst),
        .req(aw_req),
        .update_en(aw_update_en),
        .grant(aw_grant)
    );

    // Active Write Tracking
    logic [1:0] active_w_grant;
    logic w_busy;
    
    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            active_w_grant <= 0;
            w_busy <= 0;
        end else begin
            if (axi_mux.BVALID && axi_mux.BREADY) begin
                w_busy <= 0;
            end else if (axi_mux.AWVALID && axi_mux.AWREADY) begin
                w_busy <= 1;
                active_w_grant <= aw_grant;
            end
        end
    end
    
    logic [1:0] w_eff_grant;
    assign w_eff_grant = w_busy ? active_w_grant : aw_grant;

    // Write Multiplexing
    assign axi_mux.AWVALID = (w_eff_grant[0] & axi_m0.AWVALID) | (w_eff_grant[1] & axi_m1.AWVALID);
    assign axi_mux.AWADDR  = w_eff_grant[1] ? axi_m1.AWADDR : axi_m0.AWADDR;
    
    assign axi_m0.AWREADY = w_eff_grant[0] & axi_mux.AWREADY;
    assign axi_m1.AWREADY = w_eff_grant[1] & axi_mux.AWREADY;

    // Data Channel (W) Multiplexing
    assign axi_mux.WVALID = (w_eff_grant[0] & axi_m0.WVALID) | (w_eff_grant[1] & axi_m1.WVALID);
    assign axi_mux.WDATA  = w_eff_grant[1] ? axi_m1.WDATA : axi_m0.WDATA;
    assign axi_mux.WSTRB  = w_eff_grant[1] ? axi_m1.WSTRB : axi_m0.WSTRB;
    
    assign axi_m0.WREADY = w_eff_grant[0] & axi_mux.WREADY;
    assign axi_m1.WREADY = w_eff_grant[1] & axi_mux.WREADY;

    // Response Channel (B) Multiplexing
    assign axi_mux.BREADY = (w_eff_grant[0] & axi_m0.BREADY) | (w_eff_grant[1] & axi_m1.BREADY);
    
    assign axi_m0.BVALID = w_eff_grant[0] & axi_mux.BVALID;
    assign axi_m1.BVALID = w_eff_grant[1] & axi_mux.BVALID;
    assign axi_m0.BRESP  = axi_mux.BRESP;
    assign axi_m1.BRESP  = axi_mux.BRESP;


    // --- Read Path Arbitration ---
    logic [1:0] ar_req, ar_grant;
    assign ar_req[0] = axi_m0.ARVALID;
    assign ar_req[1] = axi_m1.ARVALID;

    logic ar_update_en;
    assign ar_update_en = axi_mux.ARVALID && axi_mux.ARREADY;

    round_robin_arbiter #(.NUM_MASTERS(2)) ar_arbiter (
        .clk(clk),
        .rst(rst),
        .req(ar_req),
        .update_en(ar_update_en),
        .grant(ar_grant)
    );

    // Active Read Tracking
    logic [1:0] active_r_grant;
    logic r_busy;
    
    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            active_r_grant <= 0;
            r_busy <= 0;
        end else begin
            if (axi_mux.RVALID && axi_mux.RREADY) begin
                r_busy <= 0;
            end else if (axi_mux.ARVALID && axi_mux.ARREADY) begin
                r_busy <= 1;
                active_r_grant <= ar_grant;
            end
        end
    end
    
    logic [1:0] r_eff_grant;
    assign r_eff_grant = r_busy ? active_r_grant : ar_grant;

    // Read Multiplexing
    assign axi_mux.ARVALID = (r_eff_grant[0] & axi_m0.ARVALID) | (r_eff_grant[1] & axi_m1.ARVALID);
    assign axi_mux.ARADDR  = r_eff_grant[1] ? axi_m1.ARADDR : axi_m0.ARADDR;
    
    assign axi_m0.ARREADY = r_eff_grant[0] & axi_mux.ARREADY;
    assign axi_m1.ARREADY = r_eff_grant[1] & axi_mux.ARREADY;

    // Read Response Channel (R) Multiplexing
    assign axi_mux.RREADY = (r_eff_grant[0] & axi_m0.RREADY) | (r_eff_grant[1] & axi_m1.RREADY);
    
    assign axi_m0.RVALID = r_eff_grant[0] & axi_mux.RVALID;
    assign axi_m1.RVALID = r_eff_grant[1] & axi_mux.RVALID;
    assign axi_m0.RDATA  = axi_mux.RDATA;
    assign axi_m1.RDATA  = axi_mux.RDATA;
    assign axi_m0.RRESP  = axi_mux.RRESP;
    assign axi_m1.RRESP  = axi_mux.RRESP;

endmodule
