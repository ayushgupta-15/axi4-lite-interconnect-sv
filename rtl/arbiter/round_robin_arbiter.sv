`timescale 1ns/1ps

module round_robin_arbiter #(
    parameter int NUM_MASTERS = 2
) (
    input  logic clk,
    input  logic rst,
    input  logic [NUM_MASTERS-1:0] req,
    output logic [NUM_MASTERS-1:0] grant
);

    logic [$clog2(NUM_MASTERS)-1:0] priority_idx;
    logic [NUM_MASTERS-1:0] grant_comb;

    always_comb begin
        grant_comb = '0;
        for (int i = 0; i < NUM_MASTERS; i++) begin
            int idx = priority_idx + i;
            if (idx >= NUM_MASTERS) idx = idx - NUM_MASTERS;
            
            if (req[idx]) begin
                grant_comb[idx] = 1'b1;
                break;
            end
        end
    end

    assign grant = grant_comb;

    always_ff @(posedge clk or negedge rst) begin
        if (!rst) begin
            priority_idx <= '0;
        end else begin
            if (|grant) begin
                for (int i = 0; i < NUM_MASTERS; i++) begin
                    if (grant[i]) begin
                        priority_idx <= (i == NUM_MASTERS - 1) ? '0 : (i + 1);
                        break;
                    end
                end
            end
        end
    end

endmodule
