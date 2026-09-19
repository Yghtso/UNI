module testbench();
    reg a;
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars;
        a = 0; #10;
        a = 1; #10;

        $display("Ok.");
        $finish;
    end

endmodule
