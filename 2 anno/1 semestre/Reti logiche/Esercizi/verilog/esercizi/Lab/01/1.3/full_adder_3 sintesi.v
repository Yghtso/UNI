module full_adder_3(
    x, y, c_in,
    s, c_out
);

    // sintesi in quanto demando alla rete combinatoria del full_adder
    // le reti richieste saranno fornite in sede d' esame (full_adders)
    // "è una sintesi in quanto sò fare lo schema circuitale"

    input [2:0] x, y;
    input c_in;

    output [2:0] s;
    output c_out;

    wire c1;
    full_adder digit_1 (
        .x(x[0]), .y(y[0]), .c_in(c_in), // input
        .s(s[0]), .c_out(c1) // output
    );

    wire c2;
    full_adder digit_2 (
        .x(x[1]), .y(y[1]), .c_in(c1), // input
        .s(s[1]), .c_out(c2) // output
    );

    full_adder digit_3 (
        .x(x[2]), .y(y[2]), .c_in(c2), // input
        .s(s[2]), .c_out(c_out) // output
    );

endmodule

module full_adder(
    x, y, c_in,
    s, c_out
);
    input x, y;
    input c_in;
    output s;
    output c_out;

    assign #5 s = x ^ y ^ c_in;
    assign #5 c_out = ( x & y ) | ( y & c_in) | ( x & c_in );
endmodule