`timescale 1ns/1ps

module counter #(
    parameter N = 4
)(
    input  logic         clk,
    input  logic         reset,

    output logic [N-1:0] count
);

    always_ff @(posedge clk) begin

        if (reset)

            count <= '0;

        else

            count <= count + 1'b1;

    end

endmodule

