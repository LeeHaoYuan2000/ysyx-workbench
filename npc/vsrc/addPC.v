module addPC (
    input rst,
    input  [63:0] PC,
    input  [2:0]  adder,
    output reg [63:0] out
);

reg [63:0] outReg;

/* verilator lint_off WIDTH */
assign outReg[63:0] = rst ? 64'h0:PC[63:0] + adder[2:0];


endmodule
