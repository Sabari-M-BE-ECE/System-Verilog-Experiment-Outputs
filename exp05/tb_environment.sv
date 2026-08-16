`timescale 1ns/1ps

module tb_environment;

    // =================================================
    // INTERFACE
    // =================================================

    logic a;
    logic b;

    logic sum;
    logic carry;


    // =================================================
    // DUT
    // =================================================

    half_adder dut (
        .a(a),
        .b(b),
        .sum(sum),
        .carry(carry)
    );


    // =================================================
    // TRANSACTION CLASS
    // =================================================

    class transaction;

        rand bit a;
        rand bit b;

        function void display();

            $display(
                "[TRANSACTION] A=%0d B=%0d",
                a,
                b
            );

        endfunction

    endclass


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

            for (int i = 0; i < 10; i++) begin

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

            repeat (10) begin

                gen2drv.get(tr);

                a = tr.a;
                b = tr.b;

                #10;

                $display(
                    "[DRIVER] Applied A=%0d B=%0d",
                    a,
                    b
                );

                $display(
                    "[DRIVER] DUT Output SUM=%0d CARRY=%0d",
                    sum,
                    carry
                );

                $display("");

            end

        endtask

    endclass


    // =================================================
    // ENVIRONMENT CLASS
    // =================================================

    class environment;

        generator gen;
        driver drv;

        mailbox #(transaction) gen2drv;


        function new();

            gen2drv = new();

            gen = new(gen2drv);

            drv = new(gen2drv);

        endfunction


        task run();

            fork

                gen.run();

                drv.run();

            join

        endtask

    endclass


    // =================================================
    // MAIN TEST
    // =================================================

    environment env;


    initial begin

        // Initial values

        a = 0;
        b = 0;


        $display("");
        $display("============================================");
        $display(" EXPERIMENT 5");
        $display(" GENERATOR + DRIVER + ENVIRONMENT");
        $display("============================================");
        $display("");


        // Create environment

        env = new();


        // Run environment

        env.run();


        $display("");
        $display("============================================");
        $display(" TEST COMPLETED");
        $display("============================================");
        $display("");


        $finish;

    end


endmodule
