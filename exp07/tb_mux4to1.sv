`timescale 1ns/1ps

module tb_mux4to1;

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

    logic i0;
    logic i1;
    logic i2;
    logic i3;

    logic s1;
    logic s0;

    logic y;


    // =========================================================
    // VCD WAVEFORM
    // =========================================================

    initial begin

        $dumpfile("mux4to1.vcd");

        $dumpvars(0, tb_mux4to1);

    end


    // =========================================================
    // DUT
    // =========================================================

    mux4to1 dut (

        .i0(i0),
        .i1(i1),
        .i2(i2),
        .i3(i3),

        .s1(s1),
        .s0(s0),

        .y(y)

    );


    // =========================================================
    // TRANSACTION CLASS
    // =========================================================

    class transaction;

        rand bit i0;
        rand bit i1;
        rand bit i2;
        rand bit i3;

        rand bit s1;
        rand bit s0;

        bit y;


        function void display();

            $display(
                "I0=%0d I1=%0d I2=%0d I3=%0d | S1=%0d S0=%0d",
                i0,
                i1,
                i2,
                i3,
                s1,
                s0
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


        function new(mailbox #(transaction) gen2drv);

            this.gen2drv = gen2drv;

        endfunction


        task run();

            for (int i = 0; i < 16; i++) begin

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


        function new(mailbox #(transaction) gen2drv);

            this.gen2drv = gen2drv;

        endfunction


        task run();

            repeat (16) begin

                // Get next transaction

                gen2drv.get(tr);


                // Wait for clock edge

                @(negedge clk);


                // Apply transaction to DUT

                i0 = tr.i0;

                i1 = tr.i1;

                i2 = tr.i2;

                i3 = tr.i3;

                s1 = tr.s1;

                s0 = tr.s0;


                $display(
                    "[DRIVER] I0=%0d I1=%0d I2=%0d I3=%0d | S1=%0d S0=%0d",
                    i0,
                    i1,
                    i2,
                    i3,
                    s1,
                    s0
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


        function new(mailbox #(transaction) mon2scb);

            this.mon2scb = mon2scb;

        endfunction


        task run();

            repeat (16) begin

                // Wait for positive clock edge

                @(posedge clk);


                // Small delay to allow DUT output
                // to settle after input sampling

                #1;


                tr = new();


                // Capture inputs

                tr.i0 = i0;

                tr.i1 = i1;

                tr.i2 = i2;

                tr.i3 = i3;

                tr.s1 = s1;

                tr.s0 = s0;


                // Capture DUT output

                tr.y = y;


                $display(
                    "[MONITOR] I0=%0d I1=%0d I2=%0d I3=%0d | S1=%0d S0=%0d | Y=%0d",
                    tr.i0,
                    tr.i1,
                    tr.i2,
                    tr.i3,
                    tr.s1,
                    tr.s0,
                    tr.y
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


        bit expected_y;


        function new(mailbox #(transaction) mon2scb);

            this.mon2scb = mon2scb;


            pass_count = 0;

            fail_count = 0;

        endfunction


        task run();

            repeat (16) begin

                // Get transaction from monitor

                mon2scb.get(tr);


                // =================================================
                // REFERENCE MODEL
                // =================================================

                case ({tr.s1, tr.s0})

                    2'b00:

                        expected_y = tr.i0;


                    2'b01:

                        expected_y = tr.i1;


                    2'b10:

                        expected_y = tr.i2;


                    2'b11:

                        expected_y = tr.i3;


                    default:

                        expected_y = 1'b0;

                endcase


                // =================================================
                // COMPARE
                // =================================================

                if (tr.y == expected_y) begin

                    $display(
                        "[SCOREBOARD] PASS | Expected=%0d Actual=%0d",
                        expected_y,
                        tr.y
                    );


                    pass_count++;

                end

                else begin

                    $display(
                        "[SCOREBOARD] FAIL | Expected=%0d Actual=%0d",
                        expected_y,
                        tr.y
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


            // Create verification components

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

        // Initialize inputs

        i0 = 0;

        i1 = 0;

        i2 = 0;

        i3 = 0;

        s1 = 0;

        s0 = 0;


        // Header

        $display("");

        $display("==========================================");

        $display(" EXPERIMENT 7");

        $display(" 4:1 MULTIPLEXER VERIFICATION");

        $display("==========================================");

        $display("");


        // Create environment

        env = new();


        // Run verification

        env.run();


        // =====================================================
        // TEST SUMMARY
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
