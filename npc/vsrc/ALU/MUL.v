module MUL(
    input [63:0] src1,
    input [63:0] src2,
    output [63:0] result_out
);

assign result_out = src1 * src2;

endmodule