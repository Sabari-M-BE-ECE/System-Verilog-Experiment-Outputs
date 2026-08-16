`timescale 1ns/1ps

module process_communication;

    // ==========================================
    // MAILBOX
    // ==========================================

    mailbox #(integer) mbx;


    // ==========================================
    // PRODUCER PROCESS
    // ==========================================

    task producer();

        begin

            $display("[%0t ns] Producer started", $time);

            #10;

            mbx.put(100);

            $display("[%0t ns] Producer sent data = 100",
                     $time);

            #10;

            mbx.put(200);

            $display("[%0t ns] Producer sent data = 200",
                     $time);

        end

    endtask


    // ==========================================
    // CONSUMER PROCESS
    // ==========================================

    task consumer();

        integer data;

        begin

            $display("[%0t ns] Consumer started", $time);

            mbx.get(data);

            $display("[%0t ns] Consumer received data = %0d",
                     $time,
                     data);

            mbx.get(data);

            $display("[%0t ns] Consumer received data = %0d",
                     $time,
                     data);

        end

    endtask


    // ==========================================
    // MAIN PROCESS
    // ==========================================

    initial begin

        // Create mailbox
        mbx = new();


        $display("");
        $display("====================================");
        $display(" PROCESS COMMUNICATION EXPERIMENT");
        $display("====================================");
        $display("");


        // Run producer and consumer
        // simultaneously

        fork

            producer();

            consumer();

        join


        $display("");
        $display("[%0t ns] Communication completed",
                 $time);

        $display("");


        $finish;

    end

endmodule
