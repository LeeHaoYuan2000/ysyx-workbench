module pc(
	input clk,
	input rst,
	input wen,
	output  [63:0] out
);

wire [63:0] pc2adder;
wire [63:0] adderData;

addPC adder (
	rst,
	pc2adder,
	3'd4,
	adderData
);

RegPC pc(
	clk,
	rst,
	adderData,
	pc2adder[63:0],
	wen
);

assign out[63:0] = pc2adder[63:0];



endmodule
