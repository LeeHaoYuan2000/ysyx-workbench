module ControUnit(
    input [63:0] instr,
    output ALU_Control，
    output SEXT_Control
);
wire [6:0] instr_6_0;
wire [2:0] instr_14_12;
wire [6:0] instr_31_25;
wire [5:0] instr_31_26;

assign instr_6_0    = instr[6:0];
assign instr_14_12  = instr[14:12];
assign instr_31_25  = instr[31:25];
assign instr_31_26  = instr[31:26];

wire Match_6_0_0010011;
wire Match_6_0_0111011;
wire Match_6_0_0110011;

//Instructions
//加减法指令
wire addi;
wire addiw;
wire addw;
wire subw
wire add;
wire sub;

//乘除法指令
wire mulw;
wire divw;
wire mul;

//取余数指令
wire remw

//比较指令
wire sltiu;
wire sltu ;
wire slt;

//位移指令
wire sraw;
wire sllw;
wire srlw; 
wire srli; 
wire slli; 
wire srli; 
wire srai; 
wire srliw;
wire slliw;
wire sraiw;

//访存指令
wire ld; 
wire lw;
wire lbu;
wire lh;
wire lhu;
wire sd; 
wire sw; 
wire sb; 
wire sh;

//逻辑运算指令
wire andi;
wire xori;
wire _or;  
wire _and;

//分支指令
wire bne; 
wire beq; 
wire bge; 
wire blt; 
wire bltu;

//无条件跳转
wire jal; 
wire jalr;

wire auipc; 
wire lui;   
wire ebreak; 


endmodule
