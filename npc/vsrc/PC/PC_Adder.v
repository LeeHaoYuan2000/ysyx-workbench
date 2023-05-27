/* verilator lint_off MODDUP */
module PC_Adder(
    input [63:0] PC,
    output [63:0] PC_Next
);
    assign PC_Next[63:0] = PC[63:0] + 4;

endmodule
