module full_adder(
    input x, y, c_in,
    output s, c_out
);
    assign #1 s     = x ^ y ^ c_in;
    assign #1 c_out = (x & y) | (x & c_in) | (y & c_in);
endmodule

module testbench;
    reg x, y, c_in;
    wire s, c_out;
    reg error;
    integer i;

    full_adder fa (
        .x(x), .y(y), .c_in(c_in),
        .s(s), .c_out(c_out)
    );

    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars;
        error = 0;
        for (i = 0; i < 8; i = i + 1) begin
            {x, y, c_in} = i;          // tutte le 8 combinazioni
            #10;                       // aspetto che la rete si stabilizzi
            if ({c_out, s} !== x + y + c_in) begin
                $display("Errore: x=%b y=%b c_in=%b -> c_out=%b s=%b",
                         x, y, c_in, c_out, s);
                error = 1; #1 error = 0;
            end
        end
        $display("Ok.");
        $finish;
    end
endmodule