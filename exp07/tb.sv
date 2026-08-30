`timescale 1ns/1ps

module tb;

    logic A, B, Cin;

    logic HA_Sum, HA_Carry;
    logic FA_Sum, FA_Cout;

    // Half Adder
    half_adder HA (
        .A(A),
        .B(B),
        .Sum(HA_Sum),
        .Carry(HA_Carry)
    );

    // Full Adder
    full_adder FA (
        .A(A),
        .B(B),
        .Cin(Cin),
        .Sum(FA_Sum),
        .Cout(FA_Cout)
    );

    initial begin

        // Generate waveform
        $dumpfile("wave.vcd");
        $dumpvars(0, tb);

        // -------------------------
        // HALF ADDER
        // -------------------------

        $display("\nHALF ADDER");

        A = 0; B = 0;
        #10;
        $display("A=%b B=%b Sum=%b Carry=%b",
                 A, B, HA_Sum, HA_Carry);

        A = 0; B = 1;
        #10;
        $display("A=%b B=%b Sum=%b Carry=%b",
                 A, B, HA_Sum, HA_Carry);

        A = 1; B = 0;
        #10;
        $display("A=%b B=%b Sum=%b Carry=%b",
                 A, B, HA_Sum, HA_Carry);

        A = 1; B = 1;
        #10;
        $display("A=%b B=%b Sum=%b Carry=%b",
                 A, B, HA_Sum, HA_Carry);


        // -------------------------
        // FULL ADDER
        // -------------------------

        $display("\nFULL ADDER");

        A = 0; B = 0; Cin = 0;
        #10;
        $display("A=%b B=%b Cin=%b Sum=%b Cout=%b",
                 A, B, Cin, FA_Sum, FA_Cout);

        A = 0; B = 0; Cin = 1;
        #10;
        $display("A=%b B=%b Cin=%b Sum=%b Cout=%b",
                 A, B, Cin, FA_Sum, FA_Cout);

        A = 0; B = 1; Cin = 0;
        #10;
        $display("A=%b B=%b Cin=%b Sum=%b Cout=%b",
                 A, B, Cin, FA_Sum, FA_Cout);

        A = 0; B = 1; Cin = 1;
        #10;
        $display("A=%b B=%b Cin=%b Sum=%b Cout=%b",
                 A, B, Cin, FA_Sum, FA_Cout);

        A = 1; B = 0; Cin = 0;
        #10;
        $display("A=%b B=%b Cin=%b Sum=%b Cout=%b",
                 A, B, Cin, FA_Sum, FA_Cout);

        A = 1; B = 0; Cin = 1;
        #10;
        $display("A=%b B=%b Cin=%b Sum=%b Cout=%b",
                 A, B, Cin, FA_Sum, FA_Cout);

        A = 1; B = 1; Cin = 0;
        #10;
        $display("A=%b B=%b Cin=%b Sum=%b Cout=%b",
                 A, B, Cin, FA_Sum, FA_Cout);

        A = 1; B = 1; Cin = 1;
        #10;
        $display("A=%b B=%b Cin=%b Sum=%b Cout=%b",
                 A, B, Cin, FA_Sum, FA_Cout);

        $finish;

    end

endmodule
