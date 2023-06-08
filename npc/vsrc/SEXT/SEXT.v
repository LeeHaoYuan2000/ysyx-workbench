module SEXT(
    input [31:0] Instr,
    input [2:0] ControlUnit,
    output [63:0] SEXT_Out
);

wire [11:0]immI;
wire [31:0]immU;
wire [11:0]immS;
wire [20:0]immJ;
wire [12:0]immB;

assign immI[11:0] = Instr[31:20];
assign immU[31:0] = {Instr[31:12],12'b0000_0000_0000};
assign immS[11:0] = {Instr[31:25],Instr[11:7]};
assign immJ[20:0] = {Instr[31],Instr[19:12],Instr[20],Instr[30:21],1'b0};
assign immB[12:0] = {Instr[31],Instr[7],Instr[30:25],Instr[11:8],1'b0};

MuxKeyWithDefault #(5,3,64) SEXT (SEXT_Out,ControlUnit,64'd0,{
    3'd1,{{52{immI[11]}},immI[11:0]}, //immI
    3'd2,{{32{immU[31]}},immU[31:0]}, //immU
    3'd3,{{52{immS[11]}},immS[11:0]}, //immS
    3'd4,{{43{immJ[20]}},immJ[20:0]}, //immJ
    3'd5,{{51{immB[12]}},immB[12:0]}  //immB
}); 

endmodule
