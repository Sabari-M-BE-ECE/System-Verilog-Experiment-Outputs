`timescale 1ns/1ps

module tb_nbit_adder;

    // =========================================================
    // PARAMETERS
    // =========================================================

    parameter N = 4;


    // =========================================================
    // CLOCK
    // =========================================================

    logic clk;


    initial begin

        clk = 0;

        forever #5 clk = ~clk;

    end


    // =========================================================
    // DUT SIGNALS
    // =========================================================

    logic [N-1:0] A;
    logic [N-1:0] B;

    logic Cin;

    logic [N-1:0] Sum;

    logic Cout;


    // =========================================================
    // VCD
    // =========================================================

    initial begin

        $dumpfile("nbit_adder.vcd");

        $dumpvars(0, tb_nbit_adder);

    end


    // =========================================================
    // DUT
    // =========================================================

    nbit_adder #(
        .N(N)
    ) dut (

        .A(A),
        .B(B),
        .Cin(Cin),

        .Sum(Sum),
        .Cout(Cout)

    );


    // =========================================================
    // TRANSACTION CLASS
    // =========================================================

    class transaction;

        rand bit [N-1:0] A;

        rand bit [N-1:0] B;

        rand bit Cin;


        bit [N-1:0] Sum;

        bit Cout;


        function void display();

            $display(
                "A=%0d B=%0d Cin=%0d",
                A,
                B,
                Cin
            );

        endfunction

    endclass


    // =========================================================
    // MAILBOXES
    // =========================================================

    mailbox #(transaction) gen2drv;

    mailbox #(transaction) mon2scb;


    // =========================================================
    // GENERATOR
    // =========================================================

    class generator;

        transaction tr;

        mailbox #(transaction) gen2drv;


        function new(
            mailbox #(transaction) gen2drv
        );

            this.gen2drv = gen2drv;

        endfunction


        task run();

            for (int i = 0; i < 20; i++) begin

                tr = new();


                if (tr.randomize() != 0) begin

                    $display(
                        "[GENERATOR] Transaction %0d",
                        i + 1
                    );

                    tr.display();


                    gen2drv.put(tr);

                end

            end

        endtask

    endclass


    // =========================================================
    // DRIVER
    // =========================================================

    class driver;

        transaction tr;

        mailbox #(transaction) gen2drv;


        function new(
            mailbox #(transaction) gen2drv
        );

            this.gen2drv = gen2drv;

        endfunction


        task run();

            repeat (20) begin

                // Get transaction

                gen2drv.get(tr);


                // Synchronize with clock

                @(negedge clk);


                // Apply inputs

                A   = tr.A;

                B   = tr.B;

                Cin = tr.Cin;


                $display(
                    "[DRIVER] A=%0d B=%0d Cin=%0d",
                    A,
                    B,
                    Cin
                );

            end

        endtask

    endclass


    // =========================================================
    // MONITOR
    // =========================================================

    class monitor;

        transaction tr;

        mailbox #(transaction) mon2scb;


        function new(
            mailbox #(transaction) mon2scb
        );

            this.mon2scb = mon2scb;

        endfunction


        task run();

            repeat (20) begin

                // Wait for positive edge

                @(posedge clk);


                // Allow combinational output to settle

                #1;


                tr = new();


                // Capture inputs

                tr.A   = A;

                tr.B   = B;

                tr.Cin = Cin;


                // Capture outputs

                tr.Sum  = Sum;

                tr.Cout = Cout;


                $display(
                    "[MONITOR] A=%0d B=%0d Cin=%0d | Sum=%0d Cout=%0d",
                    tr.A,
                    tr.B,
                    tr.Cin,
                    tr.Sum,
                    tr.Cout
                );


                // Send to scoreboard

                mon2scb.put(tr);

            end

        endtask

    endclass


    // =========================================================
    // SCOREBOARD
    // =========================================================

    class scoreboard;

        transaction tr;

        mailbox #(transaction) mon2scb;


        integer pass_count;

        integer fail_count;


        logic [N:0] expected;


        function new(
            mailbox #(transaction) mon2scb
        );

            this.mon2scb = mon2scb;


            pass_count = 0;

            fail_count = 0;

        endfunction


        task run();

            repeat (20) begin

                // Get transaction

                mon2scb.get(tr);


                // =================================================
                // REFERENCE MODEL
                // =================================================

                expected =
                    tr.A + tr.B + tr.Cin;


                // =================================================
                // COMPARE
                // =================================================

                if (
                    ({tr.Cout, tr.Sum} == expected)
                ) begin

                    $display(
                        "[SCOREBOARD] PASS | Expected=%0d Actual=%0d",
                        expected,
                        {tr.Cout, tr.Sum}
                    );


                    pass_count++;

                end

                else begin

                    $display(
                        "[SCOREBOARD] FAIL | Expected=%0d Actual=%0d",
                        expected,
                        {tr.Cout, tr.Sum}
                    );


                    fail_count++;

                end

            end

        endtask

    endclass


    // =========================================================
    // ENVIRONMENT
    // =========================================================

    class environment;

        generator gen;

        driver drv;

        monitor mon;

        scoreboard scb;


        function new();

            // Create mailboxes

            gen2drv = new();

            mon2scb = new();


            // Create components

            gen = new(gen2drv);

            drv = new(gen2drv);

            mon = new(mon2scb);

            scb = new(mon2scb);

        endfunction


        task run();

            fork

                gen.run();

                drv.run();

                mon.run();

                scb.run();

            join

        endtask

    endclass


    // =========================================================
    // ENVIRONMENT OBJECT
    // =========================================================

    environment env;


    // =========================================================
    // MAIN TEST
    // =========================================================

    initial begin

        // Initialize

        A   = 0;

        B   = 0;

        Cin = 0;


        $display("");

        $display("==========================================");

        $display(" EXPERIMENT 8");

        $display(" N-BIT ADDER VERIFICATION");

        $display(" N = %0d", N);

        $display("==========================================");

        $display("");


        // Create environment

        env = new();


        // Start verification

        env.run();


        // =====================================================
        // SUMMARY
        // =====================================================

        $display("");

        $display("==========================================");

        $display(" TEST SUMMARY");

        $display("==========================================");


        $display(
            "PASS = %0d",
            env.scb.pass_count
        );


        $display(
            "FAIL = %0d",
            env.scb.fail_count
        );


        $display("");


        if (env.scb.fail_count == 0) begin

            $display(
                "RESULT = ALL TESTS PASSED"
            );

        end

        else begin

            $display(
                "RESULT = SOME TESTS FAILED"
            );

        end


        $display("");

        $display("==========================================");

        $display(" SIMULATION COMPLETED");

        $display("==========================================");

        $display("");


        $finish;

    end

endmodule
