import "DPI-C" function void check_ebreak(input logic [7:0] ebreak_reg[]);

module ControUnit(
    input  [31:0] instr,
    input  Branch_Yes_No, //1 for branch , 0 for npc

    output [3:0] ALU_Control,
    output [3:0] Inside_Control,
    output [2:0] SEXT_Control,

    output RegWriteEnable, //1 for enable ,0 for disable
    //数据通路控制
    output C_RS1_PC, //0 RS1  , 1 PC
    output C_RS2_imm, //0 Rs2  , 1 imm
    output C_ALU_MEM, //0 ALU  , 1 MEM
    output C_ALU_NPC_In, //0 ALU , 1 NPC
    output [1:0] C_NPC_Branch_Jump, // 0 is NPC, 1 is Branch and jal , 2 is jalr
    output [3:0] MEM_Ctrl,
    output MEM_Enable
);

initial begin
    check_ebreak(ebreak_reg);
end
reg [7:0] ebreak_reg;
always @(*) begin
    ebreak_reg = {8{ebreak}};
end

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

wire divu   = Match_6_0_0110011 & Match_14_12_101 & Match_31_25_0000001;
wire divuw  = Match_6_0_0111011 & Match_14_12_101 & Match_31_25_0000001;

//取余数指令
wire remw   = Match_6_0_0111011 & Match_14_12_110 & Match_31_25_0000001;

wire remu   = Match_6_0_0110011 & Match_14_12_111 & Match_31_25_0000001;
wire remuw  = Match_6_0_0111011 & Match_14_12_111 & Match_31_25_0000001;

//比较指令
wire sltiu  = Match_6_0_0010011 & Match_14_12_011;
wire sltu   = Match_6_0_0110011 & Match_14_12_011 & Match_31_25_0000000;
wire slt    = Match_6_0_0110011 & Match_14_12_010 & Match_31_25_0000000;

wire slti   = Match_6_0_0010011 & Match_14_12_010; 

//位移指令
wire sraw   = Match_6_0_0111011 & Match_14_12_101 & Match_31_25_0100000;
wire sllw   = Match_6_0_0111011 & Match_14_12_001 & Match_31_25_0000000;
wire srlw   = Match_6_0_0111011 & Match_14_12_101 & Match_31_25_0000000; 
wire slli   = Match_6_0_0010011 & Match_14_12_001 & Match_31_26_000000; 
wire srli   = Match_6_0_0010011 & Match_14_12_101 & Match_31_26_000000; 
wire srai   = Match_6_0_0010011 & Match_14_12_101 & Match_31_26_010000; 
wire srliw  = Match_6_0_0011011 & Match_14_12_101 & Match_31_26_000000;
wire slliw  = Match_6_0_0011011 & Match_14_12_001 & Match_31_26_000000;   
wire sraiw  = Match_6_0_0011011 & Match_14_12_101 & Match_31_26_010000;

wire sll    = Match_6_0_0110011 & Match_14_12_001 & Match_31_25_0000000;


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

wire lb    = Match_6_0_0000011 & Match_14_12_000;
wire lwu   = Match_6_0_0000011 & Match_14_12_110;

//逻辑运算指令
wire andi   = Match_6_0_0010011 & Match_14_12_111;
wire xori   = Match_6_0_0010011 & Match_14_12_100;
wire _or    = Match_6_0_0110011 & Match_14_12_110 & Match_31_25_0000000;  
wire _and   = Match_6_0_0110011 & Match_14_12_111 & Match_31_25_0000000;

wire _xor   = Match_6_0_0110011 & Match_14_12_100;
wire ori    = Match_6_0_0010011 & Match_14_12_110;

//分支指令
wire bne    = Match_6_0_1100011 & Match_14_12_001; 
wire beq    = Match_6_0_1100011 & Match_14_12_000; 
wire bge    = Match_6_0_1100011 & Match_14_12_101; 
wire blt    = Match_6_0_1100011 & Match_14_12_100; 
wire bltu   = Match_6_0_1100011 & Match_14_12_110;

wire bgeu   = Match_6_0_1100011 & Match_14_12_111;

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
            andi | xori | jalr | slti | lb |
            lwu  | ori);
            
wire TypeU = (auipc | lui);

wire TypeS = (sd | sw | sb | sh);

wire TypeJ = (jal);

wire TypeB = (bne | beq | bge | blt | bltu | bgeu);

wire TypeR = (addw | subw | add | sub |
             mulw | divw | mul | remw |
             sltu | slt | sraw | sllw |
             srlw | _or | _and | divu |
             divuw| remu| remuw| sll  |
             _xor );

wire ALU_Adder    = (addi | addiw | addw | subw | add | sub | jalr);
wire ALU_Mul      = (mulw | mul);
wire ALU_Div      = (divw | remw | divu | divuw | remu | remuw);
wire ALU_Compare  = (sltiu | sltu | slt | slti);
wire ALU_Shift    = (sraw | sllw | srlw | slli | srli | srai | srliw | slliw | sraiw | sll);
wire ALU_LS       = (ld | lw | lbu | lh | lhu | sd | sw | sb | sh | lb | lwu); 
wire ALU_LogicOpt = (andi | xori | _or | _and | _xor | ori);
wire ALU_Branch   = (bne | beq | bge | blt | bltu | bgeu);
wire ALU_Jump     = (jal );
wire ALU_auipc    = (auipc);
wire ALU_lui      = (lui);

// The Inner Control of the ALU
wire ALUInternal_Control_0 = (addi | add | mulw | divw | sraw | sraiw | andi | _and | bne |
                             ld | lw | lbu | lh | lhu | sd | sw | sb | sh | auipc | jal | lb | lwu);

wire ALUInternal_Control_1 = (sub  | mul | remw | xori | beq | srliw | srlw | _xor);
wire ALUInternal_Control_2 = (addiw | add | sllw | slliw | _or | bge | addw | divu | ori);
wire ALUInternal_Control_3 = (subw | slt | srli | blt | divuw | slti);
wire ALUInternal_Control_4 = (sltiu | sltu | slli | bltu | jalr | remu | sll);
wire ALUInternal_Control_5 = (srai | remuw | bgeu );


wire ALU_Choose_imm = (addi | addiw | sltiu | slli | srli | srai | srliw | slliw | sraiw |
                       ld | lw | lbu | lh | lhu | sd | sw | sb | sh | andi | xori | auipc | lui | jal |jalr |
                       slti | lb | lwu | ori);

wire ALU_Choose_PC  = (auipc | jal);


assign RegWriteEnable = ~(bne | beq | bge | blt | bltu | bgeu | sd | sw | sb | sh);//1 for enable ,0 for disable
assign C_ALU_MEM = (ld | lw | lbu | lh | lhu | lb | lwu | sd | sw | sb | sh);
assign C_ALU_NPC_In = (jal | jalr); //将NPC 写入到 寄存器中
assign C_RS2_imm = ALU_Choose_imm;
assign C_RS1_PC  = ALU_Choose_PC;

assign C_NPC_Branch_Jump[0] = ((bne | beq | bge | blt | bltu | bgeu) & Branch_Yes_No) | jal;
assign C_NPC_Branch_Jump[1] = (jalr);



wire [10:0]func_signal = {ALU_Adder    , ALU_Mul    , ALU_Div,
                          ALU_Compare  , ALU_Shift  , ALU_LS,
                          ALU_LogicOpt , ALU_Branch , ALU_Jump,
                          ALU_auipc    , ALU_lui};

wire [5:0] ALU_inside_signal = {ALUInternal_Control_0 , ALUInternal_Control_1,
                                ALUInternal_Control_2 , ALUInternal_Control_3,
                                ALUInternal_Control_4 , ALUInternal_Control_5};

wire [2:0] IMMI = 3'd1;   //SEXT Control Code 
wire [2:0] IMMU = 3'd2; 
wire [2:0] IMMS = 3'd3;
wire [2:0] IMMJ = 3'd4;
wire [2:0] IMMB = 3'd5;


wire [3:0] MUX_Adder    = 4'd0; //Alu Control code
wire [3:0] MUX_Shift    = 4'd1;
wire [3:0] MUX_Compare  = 4'd2;
wire [3:0] MUX_DIV      = 4'd3;
wire [3:0] MUX_Logic    = 4'd4;
wire [3:0] MUX_MUL      = 4'd5;
wire [3:0] _auipc        = 4'd6;
wire [3:0] _lui          = 4'd7; 

wire [3:0] Inside_0 = 4'd0;
wire [3:0] Inside_1 = 4'd1;
wire [3:0] Inside_2 = 4'd2;
wire [3:0] Inside_3 = 4'd3;
wire [3:0] Inside_4 = 4'd4;
wire [3:0] Inside_5 = 4'd5;

assign MEM_Ctrl[0]    = (lhu | lw | sw | sb | lwu);
assign MEM_Ctrl[1]    = (lbu | lw | sh | sb | lb );
assign MEM_Ctrl[2]    = (lh) | lwu;
assign MEM_Ctrl[3]    = (sd | sw | sb | sh);
assign MEM_Enable     = (ld |lhu | lw | sw | sb | lbu | lw | sh | lh | sd | sw | sb | sh);//when the instruction is load and store, enable the mem


MuxKeyWithDefault #(6,6,4) ALU_Inside_choose (Inside_Control,ALU_inside_signal,4'd15,{
    6'b10_0000,Inside_0,
    6'b01_0000,Inside_1,
    6'b00_1000,Inside_2,
    6'b00_0100,Inside_3,
    6'b00_0010,Inside_4,
    6'b00_0001,Inside_5
}); 

MuxKeyWithDefault #(11,11,4) func_choose (ALU_Control,func_signal,4'd15,{
    11'b1000_0000_000,MUX_Adder,
    11'b0100_0000_000,MUX_MUL,
    11'b0010_0000_000,MUX_DIV,
    11'b0001_0000_000,MUX_Compare,
    11'b0000_1000_000,MUX_Shift,
    11'b0000_0100_000,MUX_Adder,
    11'b0000_0010_000,MUX_Logic,
    11'b0000_0001_000,MUX_Compare,
    11'b0000_0000_100,MUX_Adder,
    11'b0000_0000_010,_auipc,
    11'b0000_0000_001,_lui
}); 
   

MuxKeyWithDefault #(5,5,3) CU_ImmType (SEXT_Control,{TypeI,TypeU,TypeS,TypeJ,TypeB},3'd1,{
    5'b10000,IMMI,
    5'b01000,IMMU,
    5'b00100,IMMS,
    5'b00010,IMMJ,
    5'b00001,IMMB
});

// MuxKeyWithDefault #(5,5,3) CU_ImmType (SEXT_Control,{TypeI,TypeU,TypeS,TypeJ,TypeB},3'd1,{
//     5'b10000,IMMI,
//     5'b01000,IMMU,
//     5'b00100,IMMS,
//     5'b00010,IMMJ,
//     5'b00001,IMMB
// });




endmodule
