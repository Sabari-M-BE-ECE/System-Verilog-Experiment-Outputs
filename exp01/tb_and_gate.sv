`timescale 1ns/1ps

module tb_and_gate;

    logic a;
    logic b;
    logic y;

    and_gate dut (
        .a(a),
        .b(b),
        .y(y)
    );

    initial begin

        $dumpfile("and_gate.vcd");
        $dumpvars(0, tb_and_gate);

        $display("A B | Y");
        $display("--------");

        a = 0; b = 0;
        #10;
        $display("%0d %0d | %0d", a, b, y);

        a = 0; b = 1;
        #10;
        $display("%0d %0d | %0d", a, b, y);

        a = 1; b = 0;
        #10;
        $display("%0d %0d | %0d", a, b, y);

        a = 1; b = 1;
        #10;
        $display("%0d %0d | %0d", a, b, y);

        $finish;

    end

endmodule
