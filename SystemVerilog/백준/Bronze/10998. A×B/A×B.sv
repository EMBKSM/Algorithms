module main;
    logic[3:0] a, b;
    logic[7:0] c;

    multiplicand U1(.a, .b, .c);

    initial begin
        integer code;
        code = $fscanf(32'h8000_0000, "%d %d", a, b);
        #1 $display("%0d", c);
        $finish;
    end
endmodule

module multiplicand(
    input logic[3:0] a,
    input logic[3:0] b,
    output logic[7:0] c
);
    assign c = a * b;
endmodule