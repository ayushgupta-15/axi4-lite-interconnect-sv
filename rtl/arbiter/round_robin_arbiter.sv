`timescale 1ns/1ps

module round_robin_arbiter #(
    parameter int NUM_MASTERS = 2
) (
    input  logic clk,
    input  logic rst,
    input  logic [NUM_MASTERS-1:0] req,
    input  logic update_en,
    output logic [NUM_MASTERS-1:0] grant
);

    logic [$clog2(NUM_MASTERS)-1:0] priority_idx;
    logic [NUM_MASTERS-1:0] grant_comb;

    always_comb begin
        grant_comb = '0;
        for (int i = 0; i < NUM_MASTERS; i++) begin
            int unsigned current_pri = priority_idx;
            int unsigned idx = (current_pri + i) % NUM_MASTERS;
            
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
        end else if (update_en) begin
            for (int i = 0; i < NUM_MASTERS; i++) begin
                if (grant[i]) begin
                    priority_idx <= (i + 1) % NUM_MASTERS;
                end
            end
        end
    end

endmodule
