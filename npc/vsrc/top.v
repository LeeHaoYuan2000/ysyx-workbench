module top (
	input clk,
	input rst,
	input [31:0] instr,

	output [63:0] fetchAdddr,
	output [63:0] result
);

//-------------------Construction of PC
wire [63:0] pcOut;
wire [63:0] address;
pc addiPC(
	clk,
	rst,
	1'b1,
	pcOut[63:0]
);

addPC paAdder (
	rst,
	pcOut[63:0],
	3'd4,
	address [63:0]
);
//-------------------


//

endmodule
