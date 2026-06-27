module axi_addr_decoder #(
    parameter logic [31:0] S0_BASE = 32'h0000_0000,
    parameter logic [31:0] S0_SIZE = 32'h0000_1000,
    parameter logic [31:0] S1_BASE = 32'h0000_1000,
    parameter logic [31:0] S1_SIZE = 32'h0000_1000,
    parameter logic [31:0] S2_BASE = 32'h0000_2000,
    parameter logic [31:0] S2_SIZE = 32'h0000_1000
) (
    input  logic [31:0] addr,
    output logic [2:0]  slave_sel
);

    always_comb begin
        slave_sel = 3'b000;
        
        if ((addr >= S0_BASE) && (addr < (S0_BASE + S0_SIZE))) begin
            slave_sel = 3'b001;
        end else if ((addr >= S1_BASE) && (addr < (S1_BASE + S1_SIZE))) begin
            slave_sel = 3'b010;
        end else if ((addr >= S2_BASE) && (addr < (S2_BASE + S2_SIZE))) begin
            slave_sel = 3'b100;
        end
    end

endmodule
