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

endinterface

`endif
