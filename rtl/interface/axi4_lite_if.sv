`ifndef AXI4_LITE_IF_SV
`define AXI4_LITE_IF_SV

interface axi4_lite_if #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32
) (
    input logic ACLK,
    input logic ARESETn
);

    // Write Address Channel (AW)
    logic [ADDR_WIDTH-1:0] AWADDR;
    logic                  AWVALID;
    logic                  AWREADY;

    // Write Data Channel (W)
    logic [DATA_WIDTH-1:0] WDATA;
    logic [(DATA_WIDTH/8)-1:0] WSTRB;
    logic                  WVALID;
    logic                  WREADY;

    // Write Response Channel (B)
    logic [1:0]            BRESP;
    logic                  BVALID;
    logic                  BREADY;

    // Read Address Channel (AR)
    logic [ADDR_WIDTH-1:0] ARADDR;
    logic                  ARVALID;
    logic                  ARREADY;

    // Read Data Channel (R)
    logic [DATA_WIDTH-1:0] RDATA;
    logic [1:0]            RRESP;
    logic                  RVALID;
    logic                  RREADY;

    // Master modport
    modport master (
        output AWADDR, AWVALID, WDATA, WSTRB, WVALID, BREADY, ARADDR, ARVALID, RREADY,
        input  AWREADY, WREADY, BRESP, BVALID, ARREADY, RDATA, RRESP, RVALID
    );

    // Slave modport
    modport slave (
        input  AWADDR, AWVALID, WDATA, WSTRB, WVALID, BREADY, ARADDR, ARVALID, RREADY,
        output AWREADY, WREADY, BRESP, BVALID, ARREADY, RDATA, RRESP, RVALID
    );

// synthesis translate_off
`ifndef AXI_DISABLE_ASSERTIONS
    // --- Stability Assertions ---
    property p_awvalid_stable;
        @(posedge ACLK) disable iff (!ARESETn)
        ($past(AWVALID) && !$past(AWREADY)) |-> AWVALID && (AWADDR == $past(AWADDR));
    endproperty
    assert property(p_awvalid_stable) else $error("AWVALID/AWADDR unstable");

    property p_wvalid_stable;
        @(posedge ACLK) disable iff (!ARESETn)
        ($past(WVALID) && !$past(WREADY)) |-> WVALID && (WDATA == $past(WDATA)) && (WSTRB == $past(WSTRB));
    endproperty
    assert property(p_wvalid_stable) else $error("WVALID/WDATA/WSTRB unstable");

    property p_bvalid_stable;
        @(posedge ACLK) disable iff (!ARESETn)
        ($past(BVALID) && !$past(BREADY)) |-> BVALID && (BRESP == $past(BRESP));
    endproperty
    assert property(p_bvalid_stable) else $error("BVALID/BRESP unstable");

    property p_arvalid_stable;
        @(posedge ACLK) disable iff (!ARESETn)
        ($past(ARVALID) && !$past(ARREADY)) |-> ARVALID && (ARADDR == $past(ARADDR));
    endproperty
    assert property(p_arvalid_stable) else $error("ARVALID/ARADDR unstable");

    property p_rvalid_stable;
        @(posedge ACLK) disable iff (!ARESETn)
        ($past(RVALID) && !$past(RREADY)) |-> RVALID && (RDATA == $past(RDATA)) && (RRESP == $past(RRESP));
    endproperty
    assert property(p_rvalid_stable) else $error("RVALID/RDATA/RRESP unstable");

    // --- Outstanding Transaction Tracking ---
    int outstanding_writes = 0;
    int outstanding_reads = 0;

    always_ff @(posedge ACLK or negedge ARESETn) begin
        if (!ARESETn) begin
            outstanding_writes <= 0;
            outstanding_reads <= 0;
        end else begin
            if (AWVALID && AWREADY && !(BVALID && BREADY))
                outstanding_writes <= outstanding_writes + 1;
            else if (!(AWVALID && AWREADY) && (BVALID && BREADY))
                outstanding_writes <= outstanding_writes - 1;
                
            if (ARVALID && ARREADY && !(RVALID && RREADY))
                outstanding_reads <= outstanding_reads + 1;
            else if (!(ARVALID && ARREADY) && (RVALID && RREADY))
                outstanding_reads <= outstanding_reads - 1;
        end
    end

    property p_max_outstanding_writes;
        @(posedge ACLK) disable iff (!ARESETn)
        outstanding_writes <= 1;
    endproperty
    assert property(p_max_outstanding_writes) else $error("Exceeded max outstanding writes limit");

    property p_max_outstanding_reads;
        @(posedge ACLK) disable iff (!ARESETn)
        outstanding_reads <= 1;
    endproperty
    assert property(p_max_outstanding_reads) else $error("Exceeded max outstanding reads limit");

    property p_no_underflow_writes;
        @(posedge ACLK) disable iff (!ARESETn)
        outstanding_writes >= 0;
    endproperty
    assert property(p_no_underflow_writes) else $error("Write outstanding counter underflow");

    property p_no_underflow_reads;
        @(posedge ACLK) disable iff (!ARESETn)
        outstanding_reads >= 0;
    endproperty
    assert property(p_no_underflow_reads) else $error("Read outstanding counter underflow");

`endif
// synthesis translate_on

endinterface

`endif
