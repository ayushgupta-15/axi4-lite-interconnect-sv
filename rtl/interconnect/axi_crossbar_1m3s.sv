`timescale 1ns/1ps
import axi4_lite_pkg::*;

module axi_crossbar_1m3s (
    input logic clk,
    input logic rst,
    axi4_lite_if axi_m
);

    // Instantiate 3 interfaces for the slaves + 1 for error
    axi4_lite_if axi_s0 (.ACLK(clk), .ARESETn(rst)); // Memory
    axi4_lite_if axi_s1 (.ACLK(clk), .ARESETn(rst)); // Register
    axi4_lite_if axi_s2 (.ACLK(clk), .ARESETn(rst)); // UART
    axi4_lite_if axi_s_err (.ACLK(clk), .ARESETn(rst)); // Error

    // Instantiate Slaves
    axi_memory_slave mem_slave (.clk(clk), .rst(rst), .axi(axi_s0));
    axi_register_slave reg_slave (.clk(clk), .rst(rst), .axi(axi_s1));
    axi_uart_dummy uart_slave (.clk(clk), .rst(rst), .axi(axi_s2));
    axi_error_slave err_slave (.clk(clk), .rst(rst), .axi(axi_s_err));

    // Address Decoders
    logic [2:0] aw_slave_sel;
    logic [2:0] ar_slave_sel;

    axi_addr_decoder aw_dec (
        .addr(axi_m.AWADDR),
        .slave_sel(aw_slave_sel)
    );

    axi_addr_decoder ar_dec (
        .addr(axi_m.ARADDR),
        .slave_sel(ar_slave_sel)
    );

    // Decode to 1-hot for 4 targets: 0: err, 1: mem, 2: reg, 3: uart
    logic [3:0] aw_target_hot;
    assign aw_target_hot = (aw_slave_sel == 3'b001) ? 4'b0010 :
                           (aw_slave_sel == 3'b010) ? 4'b0100 :
                           (aw_slave_sel == 3'b100) ? 4'b1000 : 4'b0001;

    logic [3:0] ar_target_hot;
    assign ar_target_hot = (ar_slave_sel == 3'b001) ? 4'b0010 :
                           (ar_slave_sel == 3'b010) ? 4'b0100 :
                           (ar_slave_sel == 3'b100) ? 4'b1000 : 4'b0001;

    // Transaction tracking state
    logic b_pending, r_pending;
    logic [3:0] b_target_hot, r_target_hot;

    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            b_pending <= 0;
            b_target_hot <= 0;
        end else begin
            if (axi_m.BVALID && axi_m.BREADY) begin
                b_pending <= 0;
            end else if (axi_m.AWVALID && axi_m.AWREADY) begin
                b_pending <= 1;
                b_target_hot <= aw_target_hot;
            end
        end
    end
    
    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            r_pending <= 0;
            r_target_hot <= 0;
        end else begin
            if (axi_m.RVALID && axi_m.RREADY) begin
                r_pending <= 0;
            end else if (axi_m.ARVALID && axi_m.ARREADY) begin
                r_pending <= 1;
                r_target_hot <= ar_target_hot;
            end
        end
    end

    // Routing masks
    logic aw_allow = ~b_pending || (axi_m.BVALID && axi_m.BREADY);
    logic ar_allow = ~r_pending || (axi_m.RVALID && axi_m.RREADY);
    
    logic [3:0] w_target_hot;
    assign w_target_hot = b_pending ? b_target_hot : aw_target_hot;

    // --- Write Channel Routing ---
    // AW
    assign axi_s_err.AWADDR = axi_m.AWADDR;
    assign axi_s0.AWADDR = axi_m.AWADDR;
    assign axi_s1.AWADDR = axi_m.AWADDR;
    assign axi_s2.AWADDR = axi_m.AWADDR;

    assign axi_s_err.AWVALID = aw_allow && axi_m.AWVALID && aw_target_hot[0];
    assign axi_s0.AWVALID    = aw_allow && axi_m.AWVALID && aw_target_hot[1];
    assign axi_s1.AWVALID    = aw_allow && axi_m.AWVALID && aw_target_hot[2];
    assign axi_s2.AWVALID    = aw_allow && axi_m.AWVALID && aw_target_hot[3];
    
    assign axi_m.AWREADY = (aw_target_hot[0] & axi_s_err.AWREADY) |
                           (aw_target_hot[1] & axi_s0.AWREADY) |
                           (aw_target_hot[2] & axi_s1.AWREADY) |
                           (aw_target_hot[3] & axi_s2.AWREADY);

    // W
    assign axi_s_err.WDATA = axi_m.WDATA;
    assign axi_s0.WDATA = axi_m.WDATA;
    assign axi_s1.WDATA = axi_m.WDATA;
    assign axi_s2.WDATA = axi_m.WDATA;
    
    assign axi_s_err.WSTRB = axi_m.WSTRB;
    assign axi_s0.WSTRB = axi_m.WSTRB;
    assign axi_s1.WSTRB = axi_m.WSTRB;
    assign axi_s2.WSTRB = axi_m.WSTRB;

    assign axi_s_err.WVALID = axi_m.WVALID && w_target_hot[0];
    assign axi_s0.WVALID    = axi_m.WVALID && w_target_hot[1];
    assign axi_s1.WVALID    = axi_m.WVALID && w_target_hot[2];
    assign axi_s2.WVALID    = axi_m.WVALID && w_target_hot[3];
    
    assign axi_m.WREADY = (w_target_hot[0] & axi_s_err.WREADY) |
                          (w_target_hot[1] & axi_s0.WREADY) |
                          (w_target_hot[2] & axi_s1.WREADY) |
                          (w_target_hot[3] & axi_s2.WREADY);

    // B
    assign axi_s_err.BREADY = axi_m.BREADY && b_target_hot[0];
    assign axi_s0.BREADY    = axi_m.BREADY && b_target_hot[1];
    assign axi_s1.BREADY    = axi_m.BREADY && b_target_hot[2];
    assign axi_s2.BREADY    = axi_m.BREADY && b_target_hot[3];
    
    assign axi_m.BVALID = (b_target_hot[0] & axi_s_err.BVALID) |
                          (b_target_hot[1] & axi_s0.BVALID) |
                          (b_target_hot[2] & axi_s1.BVALID) |
                          (b_target_hot[3] & axi_s2.BVALID);
                          
    assign axi_m.BRESP  = (b_target_hot[0] ? axi_s_err.BRESP : 2'b00) |
                          (b_target_hot[1] ? axi_s0.BRESP : 2'b00) |
                          (b_target_hot[2] ? axi_s1.BRESP : 2'b00) |
                          (b_target_hot[3] ? axi_s2.BRESP : 2'b00);

    // --- Read Channel Routing ---
    // AR
    assign axi_s_err.ARADDR = axi_m.ARADDR;
    assign axi_s0.ARADDR = axi_m.ARADDR;
    assign axi_s1.ARADDR = axi_m.ARADDR;
    assign axi_s2.ARADDR = axi_m.ARADDR;

    assign axi_s_err.ARVALID = ar_allow && axi_m.ARVALID && ar_target_hot[0];
    assign axi_s0.ARVALID    = ar_allow && axi_m.ARVALID && ar_target_hot[1];
    assign axi_s1.ARVALID    = ar_allow && axi_m.ARVALID && ar_target_hot[2];
    assign axi_s2.ARVALID    = ar_allow && axi_m.ARVALID && ar_target_hot[3];
    
    assign axi_m.ARREADY = (ar_target_hot[0] & axi_s_err.ARREADY) |
                           (ar_target_hot[1] & axi_s0.ARREADY) |
                           (ar_target_hot[2] & axi_s1.ARREADY) |
                           (ar_target_hot[3] & axi_s2.ARREADY);

    // R
    assign axi_s_err.RREADY = axi_m.RREADY && r_target_hot[0];
    assign axi_s0.RREADY    = axi_m.RREADY && r_target_hot[1];
    assign axi_s1.RREADY    = axi_m.RREADY && r_target_hot[2];
    assign axi_s2.RREADY    = axi_m.RREADY && r_target_hot[3];
    
    assign axi_m.RVALID = (r_target_hot[0] & axi_s_err.RVALID) |
                          (r_target_hot[1] & axi_s0.RVALID) |
                          (r_target_hot[2] & axi_s1.RVALID) |
                          (r_target_hot[3] & axi_s2.RVALID);
                          
    assign axi_m.RRESP  = (r_target_hot[0] ? axi_s_err.RRESP : 2'b00) |
                          (r_target_hot[1] ? axi_s0.RRESP : 2'b00) |
                          (r_target_hot[2] ? axi_s1.RRESP : 2'b00) |
                          (r_target_hot[3] ? axi_s2.RRESP : 2'b00);
                          
    assign axi_m.RDATA  = (r_target_hot[0] ? axi_s_err.RDATA : 32'b0) |
                          (r_target_hot[1] ? axi_s0.RDATA : 32'b0) |
                          (r_target_hot[2] ? axi_s1.RDATA : 32'b0) |
                          (r_target_hot[3] ? axi_s2.RDATA : 32'b0);

endmodule
