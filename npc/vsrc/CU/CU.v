`define IMMI 3'd1
`define IMMU 3'd2 
`define IMMS 3'd3
`define IMMJ 3'd4
`define IMMB 3'd5

// `define Alu_Adder 4'd0
// `define Alu_Mul   4'd1
// `define Alu_Div   4'd2   //for div and rem instructions
// `define Alu_Shift 4'd3
// `define Alu_LS    4'd4


module ControUnit(
    input [31:0] instr,
    output ALU_Control,
    output [2:0] SEXT_Control
);
wire [6:0] instr_6_0;
wire [2:0] instr_14_12;
wire [6:0] instr_31_25;
wire [5:0] instr_31_26;

assign instr_6_0    = instr[6:0];
assign instr_14_12  = instr[14:12];
assign instr_31_25  = instr[31:25];
assign instr_31_26  = instr[31:26];

wire Match_6_0_0010011 = (instr_6_0[6:0] == 7'b0010011);
wire Match_6_0_0111011 = (instr_6_0[6:0] == 7'b0111011);
wire Match_6_0_0110011 = (instr_6_0[6:0] == 7'b0110011);
wire Match_6_0_0011011 = (instr_6_0[6:0] == 7'b0011011);
wire Match_6_0_0000011 = (instr_6_0[6:0] == 7'b0000011);
wire Match_6_0_0100011 = (instr_6_0[6:0] == 7'b0100011);
wire Match_6_0_1100011 = (instr_6_0[6:0] == 7'b1100011);
wire Match_6_0_1101111 = (instr_6_0[6:0] == 7'b1101111);
wire Match_6_0_1100111 = (instr_6_0[6:0] == 7'b1100111);
wire Match_6_0_0010111 = (instr_6_0[6:0] == 7'b0010111);
wire Match_6_0_0110111 = (instr_6_0[6:0] == 7'b0110111);
wire Match_6_0_1110011 = (instr_6_0[6:0] == 7'b1110011);

wire Match_14_12_000 = (instr_14_12[2:0] == 3'b000);
wire Match_14_12_100 = (instr_14_12[2:0] == 3'b100);
wire Match_14_12_110 = (instr_14_12[2:0] == 3'b110);
wire Match_14_12_011 = (instr_14_12[2:0] == 3'b011);
wire Match_14_12_010 = (instr_14_12[2:0] == 3'b010);
wire Match_14_12_101 = (instr_14_12[2:0] == 3'b101);
wire Match_14_12_001 = (instr_14_12[2:0] == 3'b001);
wire Match_14_12_111 = (instr_14_12[2:0] == 3'b111);

wire Match_31_25_0000000 = (instr_31_25[6:0] == 7'b0000000);
wire Match_31_25_0100000 = (instr_31_25[6:0] == 7'b0100000);
wire Match_31_25_0000001 = (instr_31_25[6:0] == 7'b0000001);
wire Match_31_25_0100000 = (instr_31_25[6:0] == 7'b0100000);

wire Match_31_26_000000 = (instr_31_26[5:0] == 6'b000000) ;
wire Match_31_26_010000 = (instr_31_26[5:0] == 6'b010000) ;

//Instructions
//加减法指令
wire addi   = Match_6_0_0010011 & Match_14_12_000;
wire addiw  = Match_6_0_0011011 & Match_14_12_000;
wire addw   = Match_6_0_0111011 & Match_14_12_000 & Match_31_25_0000000;
wire subw   = Match_6_0_0111011 & Match_14_12_000 & Match_31_25_0100000;
wire add    = Match_6_0_0110011 & Match_14_12_000 & Match_31_25_0000000;   
wire sub    = Match_6_0_0110011 & Match_14_12_000 & Match_31_25_0100000;

//乘除法指令
wire mulw   = Match_6_0_0111011 & Match_14_12_000 & Match_31_25_0000001;
wire divw   = Match_6_0_0111011 & Match_14_12_100 & Match_31_25_0000001;
wire mul    = Match_6_0_0110011 & Match_14_12_000 & Match_31_25_0000001;

//取余数指令
wire remw   = Match_6_0_0111011 & Match_14_12_110 & Match_31_25_0000001;

//比较指令
wire sltiu  = Match_6_0_0010011 & Match_14_12_011;
wire sltu   = Match_6_0_0110011 & Match_14_12_011 & Match_31_25_0000000;
wire slt    = Match_6_0_0110011 & Match_14_12_010 & Match_31_25_0000000;

//位移指令
wire sraw   = Match_6_0_0111011 & Match_14_12_101 & Match_31_25_0100000;
wire sllw   = Match_6_0_0111011 & Match_14_12_001 & Match_31_25_0000000;
wire srlw   = Match_6_0_0111011 & Match_14_12_101 & Match_31_25_0000000; 
//wire srli   = Match_6_0_0010011 & Match_14_12_101 & Match_31_25_0000000; 
wire slli   = Match_6_0_0010011 & Match_14_12_001 & Match_31_26_000000; 
wire srli   = Match_6_0_0010011 & Match_14_12_101 & Match_31_26_000000; 
wire srai   = Match_6_0_0010011 & Match_14_12_101 & Match_31_26_010000; 
wire srliw  = Match_6_0_0011011 & Match_14_12_101 & Match_31_26_000000;
wire slliw  = Match_6_0_0011011 & Match_14_12_001 & Match_31_26_000000;   
wire sraiw  = Match_6_0_0011011 & Match_14_12_101 & Match_31_26_010000;

//访存指令
wire ld    = Match_6_0_0000011 & Match_14_12_011; 
wire lw    = Match_6_0_0000011 & Match_14_12_010;
wire lbu   = Match_6_0_0000011 & Match_14_12_100;
wire lh    = Match_6_0_0000011 & Match_14_12_001;
wire lhu   = Match_6_0_0000011 & Match_14_12_101;
wire sd    = Match_6_0_0100011 & Match_14_12_011; 
wire sw    = Match_6_0_0100011 & Match_14_12_010; 
wire sb    = Match_6_0_0100011 & Match_14_12_000; 
wire sh    = Match_6_0_0100011 & Match_14_12_001;

//逻辑运算指令
wire andi   = Match_6_0_0010011 & Match_14_12_111;
wire xori   = Match_6_0_0010011 & Match_14_12_100;
wire _or    = Match_6_0_0110011 & Match_14_12_110 & Match_31_25_0000000;  
wire _and   = Match_6_0_0110011 & Match_14_12_111 & Match_31_25_0000000;

//分支指令
wire bne    = Match_6_0_1100011 & Match_14_12_001; 
wire beq    = Match_6_0_1100011 & Match_14_12_000; 
wire bge    = Match_6_0_1100011 & Match_14_12_101; 
wire blt    = Match_6_0_1100011 & Match_14_12_100; 
wire bltu   = Match_6_0_1100011 & Match_14_12_110;

//无条件跳转
wire jal    = Match_6_0_1101111 ; 
wire jalr   = Match_6_0_1100111 & Match_14_12_000;

wire auipc  = Match_6_0_0010111; 
wire lui    = Match_6_0_0110111 ;   
wire ebreak = (instr[31:0] == 32'b0000000_00001_00000_000_00000_11100_11);


//Instruction types
wire TypeI = (addi | addiw | sltiu | slli |
            srli | srai | srliw | slliw |
            sraiw |ld |lw | lbu |lh |lhu|
            andi | xori | jal |jalr);
            
wire TypeU = (auipc | lui);

wire TypeS = (sd | sw | sb | sh);

wire TypeJ = (jal);

wire TypeB = (bne | beq | bge | blt | bltu);

wire TypeR = (addw | subw | add | sub |
             mulw | divw | mul | remw |
             sltu | slt | sraw | sllw |
             srlw | _or | _and );

wire ALU_Adder    = (addi | addiw | addw | subw | add | sub);
wire ALU_Mul      = (mulw | mul);
wire ALU_Div      = (divw | remw);
wire ALU_Compare  = (sltiu | sltu | slt);
wire ALU_Shift    = (sraw | sllw | srlw | slli | srli | srai | srliw | slliw | sraiw);
wire ALU_LS       = (ld | lw | lbu | lh | lhu | sd | sw | sb | sh); 
wire ALU_LogicOpt = (andi | xori | _or | _and);
wire ALU_Branch   = (bne | beq | bge | blt | bltu);
wire ALU_Jump     = (jal | jalr);



MuxKeyWithDefault #(5,5,3) CU_ImmType (SEXT_Control,{TypeI,TypeU,TypeS,TypeJ,TypeB},3'd1,{
    5'd10000,IMMI,
    5'd01000,IMMU,
    5'd00100,IMMS,
    5'd00010,IMMJ,
    5'd00001,IMMB
}); 




endmodule
