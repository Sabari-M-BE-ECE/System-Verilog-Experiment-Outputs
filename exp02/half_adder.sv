`timescale 1ns/1ps

// =====================================================
// GATE-LEVEL MODEL
// =====================================================

module half_adder_gate (
    input  logic a,
    input  logic b,
    output logic sum,
    output logic carry
);

    xor (sum, a, b);
    and (carry, a, b);

endmodule


// =====================================================
// DATAFLOW MODEL
// =====================================================

module half_adder_dataflow (
    input  logic a,
    input  logic b,
    output logic sum,
    output logic carry
);

    assign sum   = a ^ b;
    assign carry = a & b;

endmodule


// =====================================================
// BEHAVIORAL MODEL
// =====================================================

module half_adder_behavioral (
    input  logic a,
    input  logic b,
    output logic sum,
    output logic carry
);

    always_comb begin
        sum   = a ^ b;
        carry = a & b;
    end

endmodule
