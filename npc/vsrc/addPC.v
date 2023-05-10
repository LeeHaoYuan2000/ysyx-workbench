module addPC (
    input rst,
    input  [63:0] PC,
    input  [2:0]  adder,
    output reg [63:0] out
);

//reg [63:0] outReg;

/* verilator lint_off WIDTH */
assign out[63:0] = rst ? 64'h0000_0000_8000_0000:PC[63:0] + adder[2:0];


endmodule
