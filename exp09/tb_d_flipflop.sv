`timescale 1ns/1ps

module tb_d_flipflop;


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

    logic reset;

    logic d;

    logic q;


    // =========================================================
    // VCD
    // =========================================================

    initial begin

        $dumpfile("d_flipflop.vcd");

        $dumpvars(0, tb_d_flipflop);

    end


    // =========================================================
    // DUT
    // =========================================================

    d_flipflop dut (

        .clk   (clk),
        .reset (reset),
        .d     (d),

        .q     (q)

    );


    // =========================================================
    // TRANSACTION
    // =========================================================

    class transaction;

        rand bit reset;

        rand bit d;

        bit q;


        function void display();

            $display(
                "RESET=%0d D=%0d",
                reset,
                d
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

                gen2drv.get(tr);


                // Apply inputs before
                // the next positive clock edge

                @(negedge clk);


                reset = tr.reset;

                d = tr.d;


                $display(
                    "[DRIVER] RESET=%0d D=%0d",
                    reset,
                    d
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

                // Wait for active clock edge

                @(posedge clk);


                // Allow nonblocking assignment
                // in DUT to complete

                #1;


                tr = new();


                tr.reset = reset;

                tr.d = d;

                tr.q = q;


                $display(
                    "[MONITOR] RESET=%0d D=%0d | Q=%0d",
                    tr.reset,
                    tr.d,
                    tr.q
                );


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


        bit expected_q;


        function new(
            mailbox #(transaction) mon2scb
        );

            this.mon2scb = mon2scb;


            pass_count = 0;

            fail_count = 0;


            expected_q = 0;

        endfunction


        task run();

            repeat (20) begin

                mon2scb.get(tr);


                // =================================================
                // REFERENCE MODEL
                // =================================================

                if (tr.reset)

                    expected_q = 1'b0;

                else

                    expected_q = tr.d;


                // =================================================
                // COMPARE
                // =================================================

                if (tr.q == expected_q) begin

                    $display(
                        "[SCOREBOARD] PASS | Expected=%0d Actual=%0d",
                        expected_q,
                        tr.q
                    );


                    pass_count++;

                end

                else begin

                    $display(
                        "[SCOREBOARD] FAIL | Expected=%0d Actual=%0d",
                        expected_q,
                        tr.q
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

            gen2drv = new();

            mon2scb = new();


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

        reset = 1'b1;

        d = 1'b0;


        $display("");

        $display("==========================================");

        $display(" EXPERIMENT 9");

        $display(" D FLIP-FLOP VERIFICATION");

        $display("==========================================");

        $display("");


        // Create environment

        env = new();


        // Run verification

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
