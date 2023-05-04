module alu(
    input [63:0]adder1,
    input [63:0]adder2,

    output [64:0]result
);

assign result [63:0] = adder1 + adder2;

endmodule