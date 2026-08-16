`timescale 1ns/1ps

module tb_full_adder;

    // =================================================
    // DUT SIGNALS
    // =================================================

    logic a;
    logic b;
    logic cin;

    logic sum;
    logic cout;


    // =================================================
    // DUT
    // =================================================

    full_adder dut (
        .a(a),
        .b(b),
        .cin(cin),
        .sum(sum),
        .cout(cout)
    );


    // =================================================
    // TRANSACTION CLASS
    // =================================================

    class transaction;

        rand bit a;
        rand bit b;
        rand bit cin;

        bit sum;
        bit cout;


        function void display();

            $display(
                "A=%0d B=%0d Cin=%0d | Sum=%0d Cout=%0d",
                a,
                b,
                cin,
                sum,
                cout
            );

        endfunction

    endclass


    // =================================================
    // MAILBOXES
    // =================================================

    mailbox #(transaction) gen2drv;

    mailbox #(transaction) mon2scb;


    // =================================================
    // MANUAL FUNCTIONAL COVERAGE
    // =================================================

    bit coverage[8];

    integer coverage_count;


    // =================================================
    // GENERATOR CLASS
    // =================================================

    class generator;

        transaction tr;

        mailbox #(transaction) gen2drv;


        function new(mailbox #(transaction) gen2drv);

            this.gen2drv = gen2drv;

        endfunction


        task run();

            for (int i = 0; i < 8; i++) begin

                tr = new();

                if (tr.randomize() != 0) begin

                    $display(
                        "[GENERATOR] Transaction %0d generated",
                        i + 1
                    );

                    tr.display();

                    gen2drv.put(tr);

                end

            end

        endtask

    endclass


    // =================================================
    // DRIVER CLASS
    // =================================================

    class driver;

        transaction tr;

        mailbox #(transaction) gen2drv;


        function new(mailbox #(transaction) gen2drv);

            this.gen2drv = gen2drv;

        endfunction


        task run();

            repeat (8) begin

                gen2drv.get(tr);

                a   = tr.a;
                b   = tr.b;
                cin = tr.cin;

                #10;

                $display(
                    "[DRIVER] A=%0d B=%0d Cin=%0d",
                    a,
                    b,
                    cin
                );

            end

        endtask

    endclass


    // =================================================
    // MONITOR CLASS
    // =================================================

    class monitor;

        transaction tr;

        mailbox #(transaction) mon2scb;


        function new(mailbox #(transaction) mon2scb);

            this.mon2scb = mon2scb;

        endfunction


        task run();

            repeat (8) begin

                #1;

                tr = new();

                // Capture DUT inputs

                tr.a   = a;
                tr.b   = b;
                tr.cin = cin;


                // Capture DUT outputs

                tr.sum  = sum;
                tr.cout = cout;


                // -------------------------------------
                // MANUAL COVERAGE
                // -------------------------------------

                coverage[
                    tr.a * 4 +
                    tr.b * 2 +
                    tr.cin
                ] = 1'b1;


                $display(
                    "[MONITOR] A=%0d B=%0d Cin=%0d | Sum=%0d Cout=%0d",
                    tr.a,
                    tr.b,
                    tr.cin,
                    tr.sum,
                    tr.cout
                );


                // Send transaction to scoreboard

                mon2scb.put(tr);

                #9;

            end

        endtask

    endclass


    // =================================================
    // SCOREBOARD CLASS
    // =================================================

    class scoreboard;

        transaction tr;

        mailbox #(transaction) mon2scb;

        integer pass_count;
        integer fail_count;

        bit expected_sum;
        bit expected_cout;


        function new(mailbox #(transaction) mon2scb);

            this.mon2scb = mon2scb;

            pass_count = 0;

            fail_count = 0;

        endfunction


        task run();

            repeat (8) begin

                // Get transaction from monitor

                mon2scb.get(tr);


                // -------------------------------------
                // CALCULATE EXPECTED OUTPUT
                // -------------------------------------

                expected_sum =
                    tr.a ^ tr.b ^ tr.cin;


                expected_cout =
                    (tr.a & tr.b) |
                    (tr.b & tr.cin) |
                    (tr.a & tr.cin);


                // -------------------------------------
                // COMPARE ACTUAL VS EXPECTED
                // -------------------------------------

                if (
                    (tr.sum == expected_sum) &&
                    (tr.cout == expected_cout)
                ) begin

                    $display(
                        "[SCOREBOARD] PASS"
                    );

                    pass_count++;

                end

                else begin

                    $display(
                        "[SCOREBOARD] FAIL"
                    );

                    $display(
                        "  Expected: SUM=%0d COUT=%0d",
                        expected_sum,
                        expected_cout
                    );

                    $display(
                        "  Actual:   SUM=%0d COUT=%0d",
                        tr.sum,
                        tr.cout
                    );

                    fail_count++;

                end

            end

        endtask

    endclass


    // =================================================
    // ENVIRONMENT CLASS
    // =================================================

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


    // =================================================
    // ENVIRONMENT OBJECT
    // =================================================

    environment env;


    // =================================================
    // MAIN TEST
    // =================================================

    initial begin

        // Initialize DUT inputs

        a   = 0;
        b   = 0;
        cin = 0;


        // Initialize coverage

        for (int i = 0; i < 8; i++) begin

            coverage[i] = 1'b0;

        end


        $display("");
        $display("==========================================");
        $display(" EXPERIMENT 6");
        $display(" MONITOR + SCOREBOARD + COVERAGE");
        $display(" DUT : FULL ADDER");
        $display("==========================================");
        $display("");


        // Create environment

        env = new();


        // Start verification

        env.run();


        // =================================================
        // TEST SUMMARY
        // =================================================

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


        // =================================================
        // CALCULATE COVERAGE
        // =================================================

        coverage_count = 0;


        for (int i = 0; i < 8; i++) begin

            if (coverage[i]) begin

                coverage_count++;

            end

        end


        $display("");

        $display("==========================================");

        $display(" FUNCTIONAL COVERAGE");

        $display("==========================================");


        $display(
            "Covered combinations = %0d / 8",
            coverage_count
        );


        $display(
            "Coverage = %0.2f%%",
            (coverage_count * 100.0) / 8.0
        );


        // =================================================
        // DISPLAY COVERAGE TABLE
        // =================================================

        $display("");

        $display("Coverage Table:");

        $display("");

        $display("A B Cin | Covered");

        $display("------------------");


        for (int i = 0; i < 8; i++) begin

            $display(
                "%0d %0d  %0d  |   %0d",
                (i >> 2) & 1,
                (i >> 1) & 1,
                i & 1,
                coverage[i]
            );

        end


        $display("");

        $display("==========================================");

        $display(" VERIFICATION COMPLETED");

        $display("==========================================");

        $display("");


        $finish;

    end

endmodule
