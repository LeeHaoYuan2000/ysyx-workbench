module ifu(
    input  [63:0] PCAddr,
    input  [31:0] instr,
    output [63:0] ramAddr, //将PC的地址传入存储器中
    output [4:0] rs1Addr,
    output [4:0] rs2Addr,
    output [4:0] rdAddr,
    output [31:0] instr2CU
);

assign ramAddr[63:0] = PCAddr[63:0]; //transmit the address to storage
assign instr2CU [31:0] = instr[31:0]; //return the
assign rs1Addr[4:0] = instr[19:15];
assign rs2Addr[4:0] = instr[24:20];
assign rdAddr[4:0] = instr[11:7];


endmodule
