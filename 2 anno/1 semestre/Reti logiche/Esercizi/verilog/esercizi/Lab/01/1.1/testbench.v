module testbench();
    reg x_t, y_t; // input della RC
    wire z_t, w_t; // utilizzo per leggere i valori dalla RC

    RC rc (
        .x(x_t), .y(y_t),
        .z(z_t), .w(w_t)
    );

    initial begin   // al t = 0 della simulazione
                    // approccio procedurale non piu HDL
                    // viene eseguito in maniera procedurale
                    
        $dumpfile("waveform.vcd");  // setto il file di dump al file tra "" (utile per debugging)
        $dumpvars;                  // comando che esgue il dump

        x_t = 0; 
        y_t = 0;
        #10;
        if (z_t == 0 && w_t == 0)
            $display("0 0 -> 0 0 success");
        else
            $display("0 0 -> 0 0 fail");

        x_t = 0; 
        y_t = 1;
        #10;
        if (z_t == 0 && w_t == 1)
            $display("0 1 -> 0 1 success");
        else
            $display("0 1 -> 0 1 fail");

        x_t = 1; 
        y_t = 0;
        #10;
        if (z_t == 0 && w_t == 1)
            $display("1 0 -> 0 1 success");
        else
            $display("1 0 -> 0 1 fail");

        x_t = 1; 
        y_t = 1;
        #10;
        if (z_t == 1 && w_t == 1)
            $display("1 1 -> 1 1 success");
        else
            $display("1 1 -> 1 1 fail");

    end

endmodule