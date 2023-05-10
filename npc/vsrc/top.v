module top (
	input clk,
	input rst,
	input [31:0]instr,

	output [63:0]fetchAddr,
	output [63:0] outresult,

	output [63:0]rs2data
);

wire [63:0] pcOut;
//-------------------Construction of PC

wire [4:0]rs1addr;
wire [4:0]rs2addr;
wire [4:0]rdaddr;
wire [63:0]outCome;
wire [63:0]line2CU;
wire [63:0]rs1data;
wire [63:0]immsOut;
wire [63:0] out;

assign outresult = out;



pc addiPC(
	clk,
	rst,
	1'b1,
	pcOut[63:0]
);


 ifu addiIFU(
	pcOut[63:0],
 	instr[31:0],
 	fetchAddr[63:0],
 	rs1addr[4:0],
 	rs2addr[4:0],
 	rdaddr[4:0],
 	line2CU[31:0]
 );

Register CSR(
	clk,
	rs1addr[4:0],
	rs2addr[4:0],
	rdaddr[4:0],
	out[63:0],
	rs1data[63:0],
	rs2data[63:0]
);

 SEXT signextension(
	instr[31:20],
 	immsOut[63:0]
 );

alu addialu(
	rs1data[63:0],
	immsOut[63:0],
	out[63:0]
);



endmodule
