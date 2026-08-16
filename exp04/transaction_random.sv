`timescale 1ns/1ps

module transaction_random;

    // ==========================================
    // TRANSACTION CLASS
    // ==========================================

    class transaction;

        // Random variables
        rand bit a;
        rand bit b;
        rand bit cin;


        // Display transaction
        function void display();

            $display(
                "A = %0d | B = %0d | Cin = %0d",
                a,
                b,
                cin
            );

        endfunction

    endclass


    // ==========================================
    // MAIN PROCESS
    // ==========================================

    initial begin

        transaction tr;


        // Create transaction object
        tr = new();


        $display("");
        $display("====================================");
        $display(" TRANSACTION RANDOMIZATION");
        $display("====================================");
        $display("");


        // Generate 10 random transactions

        for (int i = 0; i < 10; i++) begin

            if (tr.randomize() != 0) begin

                $display("Transaction %0d:", i + 1);

                tr.display();

            end

            else begin

                $display("Randomization FAILED");

            end

        end


        $display("");
        $display("Randomization completed.");
        $display("");

        $finish;

    end

endmodule

