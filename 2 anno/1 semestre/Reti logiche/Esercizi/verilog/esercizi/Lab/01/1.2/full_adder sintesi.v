module full_adder(
    x, y, c_in,
    s, c_out
);
    input x, y;
    input c_in;
    output s;
    output c_out;

    // assign #1 {c_out, s} = x + y + c_in; sintesi con + gia presente in verilog
    // + = full adder in base 2

    // #1 perchè 1 livello di logica
    assign #1 s = x ^ y ^ c_in;

    // #2 perchè 2 livello di logica
    assign #2 c_out = ( x & y ) | ( y & c_in) | ( x & c_in );

endmodule