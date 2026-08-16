`timescale 1ns/1ps

module tb_half_adder;

    // =================================================
    // INPUTS
    // =================================================

    logic a;
    logic b;


    // =================================================
    // GATE-LEVEL OUTPUTS
    // =================================================

    logic sum_gate;
    logic carry_gate;


    // =================================================
    // DATAFLOW OUTPUTS
    // =================================================

    logic sum_data;
    logic carry_data;


    // =================================================
    // BEHAVIORAL OUTPUTS
    // =================================================

    logic sum_behavioral;
    logic carry_behavioral;


    // =================================================
    // GATE-LEVEL DUT
    // =================================================

    half_adder_gate gate_dut (
        .a(a),
        .b(b),
        .sum(sum_gate),
        .carry(carry_gate)
    );


    // =================================================
    // DATAFLOW DUT
    // =================================================

    half_adder_dataflow data_dut (
        .a(a),
        .b(b),
        .sum(sum_data),
        .carry(carry_data)
    );


    // =================================================
    // BEHAVIORAL DUT
    // =================================================

    half_adder_behavioral behavioral_dut (
        .a(a),
        .b(b),
        .sum(sum_behavioral),
        .carry(carry_behavioral)
    );


    // =================================================
    // TEST
    // =================================================

    initial begin

        // Create waveform
        $dumpfile("half_adder.vcd");
        $dumpvars(0, tb_half_adder);


        // Header
        $display("");
        $display("HALF ADDER VERIFICATION");
        $display("========================");

        $display("A B | Gate-S Gate-C | Data-S Data-C | Beh-S Beh-C");
        $display("--------------------------------------------------");


        // =================================================
        // TEST CASE 1
        // A=0, B=0
        // =================================================

        a = 0;
        b = 0;

        #10;

        $display(
            "%0d %0d |   %0d     %0d   |   %0d      %0d   |   %0d    %0d",
            a,
            b,
            sum_gate,
            carry_gate,
            sum_data,
            carry_data,
            sum_behavioral,
            carry_behavioral
        );


        // =================================================
        // TEST CASE 2
        // A=0, B=1
        // =================================================

        a = 0;
        b = 1;

        #10;

        $display(
            "%0d %0d |   %0d     %0d   |   %0d      %0d   |   %0d    %0d",
            a,
            b,
            sum_gate,
            carry_gate,
            sum_data,
            carry_data,
            sum_behavioral,
            carry_behavioral
        );


        // =================================================
        // TEST CASE 3
        // A=1, B=0
        // =================================================

        a = 1;
        b = 0;

        #10;

        $display(
            "%0d %0d |   %0d     %0d   |   %0d      %0d   |   %0d    %0d",
            a,
            b,
            sum_gate,
            carry_gate,
            sum_data,
            carry_data,
            sum_behavioral,
            carry_behavioral
        );


        // =================================================
        // TEST CASE 4
        // A=1, B=1
        // =================================================

        a = 1;
        b = 1;

        #10;

        $display(
            "%0d %0d |   %0d     %0d   |   %0d      %0d   |   %0d    %0d",
            a,
            b,
            sum_gate,
            carry_gate,
            sum_data,
            carry_data,
            sum_behavioral,
            carry_behavioral
        );


        // Finish simulation
        $finish;

    end

endmodule
