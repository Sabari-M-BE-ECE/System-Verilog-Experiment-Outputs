`timescale 1ns/1ps

module mux4to1 (
    input  logic i0,
    input  logic i1,
    input  logic i2,
    input  logic i3,

    input  logic s1,
    input  logic s0,

    output logic y
);

    always_comb begin

        case ({s1, s0})

            2'b00:
                y = i0;

            2'b01:
                y = i1;

            2'b10:
                y = i2;

            2'b11:
                y = i3;

            default:
                y = 1'b0;

        endcase

    end

endmodule
