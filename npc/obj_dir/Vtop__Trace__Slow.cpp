// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1048,"clk", false,-1);
        tracep->declBit(c+1049,"rst", false,-1);
        tracep->declBus(c+1050,"instr_in", false,-1, 31,0);
        tracep->declQuad(c+1051,"SEXT_result", false,-1, 63,0);
        tracep->declQuad(c+1053,"PC_Test", false,-1, 63,0);
        tracep->declBus(c+1055,"SEXT_Control_out", false,-1, 2,0);
        tracep->declQuad(c+1056,"RS1_OUTPUT", false,-1, 63,0);
        tracep->declQuad(c+1058,"RS2_OUTPUT", false,-1, 63,0);
        tracep->declQuad(c+1060,"ALU_Result", false,-1, 63,0);
        tracep->declBit(c+1062,"WriteBack_Enable_result", false,-1);
        tracep->declBit(c+1063,"C_RS1_PC_Connector_result", false,-1);
        tracep->declBit(c+1064,"C_RS2_imm_Connector_result", false,-1);
        tracep->declBit(c+1065,"C_ALU_MEM_Connector_result", false,-1);
        tracep->declBit(c+1066,"C_ALU_NPC_In_Connector_result", false,-1);
        tracep->declBus(c+1067,"C_NPC_Branch_Jump_Connector_result", false,-1, 1,0);
        tracep->declBit(c+1048,"top clk", false,-1);
        tracep->declBit(c+1049,"top rst", false,-1);
        tracep->declBus(c+1050,"top instr_in", false,-1, 31,0);
        tracep->declQuad(c+1051,"top SEXT_result", false,-1, 63,0);
        tracep->declQuad(c+1053,"top PC_Test", false,-1, 63,0);
        tracep->declBus(c+1055,"top SEXT_Control_out", false,-1, 2,0);
        tracep->declQuad(c+1056,"top RS1_OUTPUT", false,-1, 63,0);
        tracep->declQuad(c+1058,"top RS2_OUTPUT", false,-1, 63,0);
        tracep->declQuad(c+1060,"top ALU_Result", false,-1, 63,0);
        tracep->declBit(c+1062,"top WriteBack_Enable_result", false,-1);
        tracep->declBit(c+1063,"top C_RS1_PC_Connector_result", false,-1);
        tracep->declBit(c+1064,"top C_RS2_imm_Connector_result", false,-1);
        tracep->declBit(c+1065,"top C_ALU_MEM_Connector_result", false,-1);
        tracep->declBit(c+1066,"top C_ALU_NPC_In_Connector_result", false,-1);
        tracep->declBus(c+1067,"top C_NPC_Branch_Jump_Connector_result", false,-1, 1,0);
        tracep->declBus(c+1107,"top MUX_Output_RS1", false,-1, 0,0);
        tracep->declBus(c+1108,"top MUX_Output_PC", false,-1, 0,0);
        tracep->declBus(c+1107,"top MUX_Output_RS2", false,-1, 0,0);
        tracep->declBus(c+1108,"top MUX_Output_imm", false,-1, 0,0);
        tracep->declQuad(c+458,"top PC_Wire", false,-1, 63,0);
        tracep->declQuad(c+460,"top PC_Next_Wire", false,-1, 63,0);
        tracep->declBus(c+1050,"top instruction", false,-1, 31,0);
        tracep->declBus(c+67,"top SEXT_Control", false,-1, 2,0);
        tracep->declBus(c+68,"top ALU_Control_wire", false,-1, 3,0);
        tracep->declQuad(c+69,"top SEXT_Connector", false,-1, 63,0);
        tracep->declQuad(c+71,"top RS1_Connector", false,-1, 63,0);
        tracep->declQuad(c+73,"top RS2_Connector", false,-1, 63,0);
        tracep->declQuad(c+75,"top MUX_Reg_PC_2ALU_Result", false,-1, 63,0);
        tracep->declQuad(c+77,"top MUX_Reg_imm_2ALU_Result", false,-1, 63,0);
        tracep->declBit(c+1068,"top WriteBack_Enable", false,-1);
        tracep->declBit(c+1069,"top C_RS1_PC_Connector", false,-1);
        tracep->declBit(c+1070,"top C_RS2_imm_Connector", false,-1);
        tracep->declBit(c+79,"top C_ALU_MEM_Connector", false,-1);
        tracep->declBit(c+1071,"top C_ALU_NPC_In_Connector", false,-1);
        tracep->declBus(c+80,"top C_NPC_Branch_Jump_Connector", false,-1, 1,0);
        tracep->declQuad(c+81,"top ALU_Result_Connector", false,-1, 63,0);
        tracep->declBus(c+83,"top Insider_Control_Connector", false,-1, 3,0);
        tracep->declQuad(c+458,"top pc_adder PC", false,-1, 63,0);
        tracep->declQuad(c+460,"top pc_adder PC_Next", false,-1, 63,0);
        tracep->declBit(c+1048,"top pc_reg clk", false,-1);
        tracep->declBit(c+1049,"top pc_reg rst", false,-1);
        tracep->declQuad(c+460,"top pc_reg PC_Next", false,-1, 63,0);
        tracep->declQuad(c+458,"top pc_reg PC", false,-1, 63,0);
        tracep->declBus(c+1109,"top pc_reg pc_reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1110,"top pc_reg pc_reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1048,"top pc_reg pc_reg clk", false,-1);
        tracep->declBit(c+1049,"top pc_reg pc_reg rst", false,-1);
        tracep->declQuad(c+460,"top pc_reg pc_reg din", false,-1, 63,0);
        tracep->declQuad(c+458,"top pc_reg pc_reg dout", false,-1, 63,0);
        tracep->declBit(c+1112,"top pc_reg pc_reg wen", false,-1);
        tracep->declQuad(c+458,"top IFU_Lee PC_IN", false,-1, 63,0);
        tracep->declBus(c+1050,"top IFU_Lee Instr_IN", false,-1, 31,0);
        tracep->declQuad(c+1053,"top IFU_Lee PC_OUT", false,-1, 63,0);
        tracep->declBus(c+1050,"top IFU_Lee Instr_OUT", false,-1, 31,0);
        tracep->declBus(c+1050,"top HY_CU instr", false,-1, 31,0);
        tracep->declBit(c+84,"top HY_CU Branch_Yes_No", false,-1);
        tracep->declBus(c+68,"top HY_CU ALU_Control", false,-1, 3,0);
        tracep->declBus(c+83,"top HY_CU Inside_Control", false,-1, 3,0);
        tracep->declBus(c+67,"top HY_CU SEXT_Control", false,-1, 2,0);
        tracep->declBit(c+1068,"top HY_CU RegWriteEnable", false,-1);
        tracep->declBit(c+1069,"top HY_CU C_RS1_PC", false,-1);
        tracep->declBit(c+1070,"top HY_CU C_RS2_imm", false,-1);
        tracep->declBit(c+79,"top HY_CU C_ALU_MEM", false,-1);
        tracep->declBit(c+1071,"top HY_CU C_ALU_NPC_In", false,-1);
        tracep->declBus(c+80,"top HY_CU C_NPC_Branch_Jump", false,-1, 1,0);
        tracep->declBus(c+1072,"top HY_CU instr_6_0", false,-1, 6,0);
        tracep->declBus(c+1073,"top HY_CU instr_14_12", false,-1, 2,0);
        tracep->declBus(c+1074,"top HY_CU instr_31_25", false,-1, 6,0);
        tracep->declBus(c+1075,"top HY_CU instr_31_26", false,-1, 5,0);
        tracep->declBit(c+1076,"top HY_CU Match_6_0_0010011", false,-1);
        tracep->declBit(c+1077,"top HY_CU Match_6_0_0111011", false,-1);
        tracep->declBit(c+1078,"top HY_CU Match_6_0_0110011", false,-1);
        tracep->declBit(c+1079,"top HY_CU Match_6_0_0011011", false,-1);
        tracep->declBit(c+1080,"top HY_CU Match_6_0_0000011", false,-1);
        tracep->declBit(c+1081,"top HY_CU Match_6_0_0100011", false,-1);
        tracep->declBit(c+1082,"top HY_CU Match_6_0_1100011", false,-1);
        tracep->declBit(c+1083,"top HY_CU Match_6_0_1101111", false,-1);
        tracep->declBit(c+1084,"top HY_CU Match_6_0_1100111", false,-1);
        tracep->declBit(c+1069,"top HY_CU Match_6_0_0010111", false,-1);
        tracep->declBit(c+1085,"top HY_CU Match_6_0_0110111", false,-1);
        tracep->declBit(c+1086,"top HY_CU Match_6_0_1110011", false,-1);
        tracep->declBit(c+1087,"top HY_CU Match_14_12_000", false,-1);
        tracep->declBit(c+1088,"top HY_CU Match_14_12_100", false,-1);
        tracep->declBit(c+1089,"top HY_CU Match_14_12_110", false,-1);
        tracep->declBit(c+1090,"top HY_CU Match_14_12_011", false,-1);
        tracep->declBit(c+1091,"top HY_CU Match_14_12_010", false,-1);
        tracep->declBit(c+1092,"top HY_CU Match_14_12_101", false,-1);
        tracep->declBit(c+1093,"top HY_CU Match_14_12_001", false,-1);
        tracep->declBit(c+1094,"top HY_CU Match_14_12_111", false,-1);
        tracep->declBit(c+1095,"top HY_CU Match_31_25_0000000", false,-1);
        tracep->declBit(c+85,"top HY_CU Match_31_25_0100000", false,-1);
        tracep->declBit(c+1096,"top HY_CU Match_31_25_0000001", false,-1);
        tracep->declBit(c+1097,"top HY_CU Match_31_26_000000", false,-1);
        tracep->declBit(c+1098,"top HY_CU Match_31_26_010000", false,-1);
        tracep->declBit(c+86,"top HY_CU addi", false,-1);
        tracep->declBit(c+87,"top HY_CU addiw", false,-1);
        tracep->declBit(c+88,"top HY_CU addw", false,-1);
        tracep->declBit(c+89,"top HY_CU subw", false,-1);
        tracep->declBit(c+90,"top HY_CU add", false,-1);
        tracep->declBit(c+91,"top HY_CU sub", false,-1);
        tracep->declBit(c+92,"top HY_CU mulw", false,-1);
        tracep->declBit(c+93,"top HY_CU divw", false,-1);
        tracep->declBit(c+94,"top HY_CU mul", false,-1);
        tracep->declBit(c+95,"top HY_CU remw", false,-1);
        tracep->declBit(c+96,"top HY_CU sltiu", false,-1);
        tracep->declBit(c+97,"top HY_CU sltu", false,-1);
        tracep->declBit(c+98,"top HY_CU slt", false,-1);
        tracep->declBit(c+99,"top HY_CU sraw", false,-1);
        tracep->declBit(c+100,"top HY_CU sllw", false,-1);
        tracep->declBit(c+101,"top HY_CU srlw", false,-1);
        tracep->declBit(c+102,"top HY_CU slli", false,-1);
        tracep->declBit(c+103,"top HY_CU srli", false,-1);
        tracep->declBit(c+104,"top HY_CU srai", false,-1);
        tracep->declBit(c+105,"top HY_CU srliw", false,-1);
        tracep->declBit(c+106,"top HY_CU slliw", false,-1);
        tracep->declBit(c+107,"top HY_CU sraiw", false,-1);
        tracep->declBit(c+108,"top HY_CU ld", false,-1);
        tracep->declBit(c+109,"top HY_CU lw", false,-1);
        tracep->declBit(c+110,"top HY_CU lbu", false,-1);
        tracep->declBit(c+111,"top HY_CU lh", false,-1);
        tracep->declBit(c+112,"top HY_CU lhu", false,-1);
        tracep->declBit(c+113,"top HY_CU sd", false,-1);
        tracep->declBit(c+114,"top HY_CU sw", false,-1);
        tracep->declBit(c+115,"top HY_CU sb", false,-1);
        tracep->declBit(c+116,"top HY_CU sh", false,-1);
        tracep->declBit(c+117,"top HY_CU andi", false,-1);
        tracep->declBit(c+118,"top HY_CU xori", false,-1);
        tracep->declBit(c+119,"top HY_CU bne", false,-1);
        tracep->declBit(c+120,"top HY_CU beq", false,-1);
        tracep->declBit(c+121,"top HY_CU bge", false,-1);
        tracep->declBit(c+122,"top HY_CU blt", false,-1);
        tracep->declBit(c+123,"top HY_CU bltu", false,-1);
        tracep->declBit(c+1083,"top HY_CU jal", false,-1);
        tracep->declBit(c+124,"top HY_CU jalr", false,-1);
        tracep->declBit(c+1069,"top HY_CU auipc", false,-1);
        tracep->declBit(c+1085,"top HY_CU lui", false,-1);
        tracep->declBit(c+1099,"top HY_CU ebreak", false,-1);
        tracep->declBit(c+125,"top HY_CU TypeI", false,-1);
        tracep->declBit(c+1100,"top HY_CU TypeU", false,-1);
        tracep->declBit(c+126,"top HY_CU TypeS", false,-1);
        tracep->declBit(c+1083,"top HY_CU TypeJ", false,-1);
        tracep->declBit(c+127,"top HY_CU TypeB", false,-1);
        tracep->declBit(c+128,"top HY_CU TypeR", false,-1);
        tracep->declBit(c+129,"top HY_CU ALU_Adder", false,-1);
        tracep->declBit(c+130,"top HY_CU ALU_Mul", false,-1);
        tracep->declBit(c+131,"top HY_CU ALU_Div", false,-1);
        tracep->declBit(c+132,"top HY_CU ALU_Compare", false,-1);
        tracep->declBit(c+133,"top HY_CU ALU_Shift", false,-1);
        tracep->declBit(c+79,"top HY_CU ALU_LS", false,-1);
        tracep->declBit(c+134,"top HY_CU ALU_LogicOpt", false,-1);
        tracep->declBit(c+127,"top HY_CU ALU_Branch", false,-1);
        tracep->declBit(c+1071,"top HY_CU ALU_Jump", false,-1);
        tracep->declBit(c+1069,"top HY_CU ALU_auipc", false,-1);
        tracep->declBit(c+1085,"top HY_CU ALU_lui", false,-1);
        tracep->declBit(c+1101,"top HY_CU ALUInternal_Control_0", false,-1);
        tracep->declBit(c+135,"top HY_CU ALUInternal_Control_1", false,-1);
        tracep->declBit(c+136,"top HY_CU ALUInternal_Control_2", false,-1);
        tracep->declBit(c+137,"top HY_CU ALUInternal_Control_3", false,-1);
        tracep->declBit(c+138,"top HY_CU ALUInternal_Control_4", false,-1);
        tracep->declBit(c+104,"top HY_CU ALUInternal_Control_5", false,-1);
        tracep->declBit(c+1070,"top HY_CU ALU_Choose_imm", false,-1);
        tracep->declBit(c+1069,"top HY_CU ALU_Choose_PC", false,-1);
        tracep->declBus(c+139,"top HY_CU func_signal", false,-1, 10,0);
        tracep->declBus(c+140,"top HY_CU ALU_inside_signal", false,-1, 5,0);
        tracep->declBus(c+1113,"top HY_CU IMMI", false,-1, 2,0);
        tracep->declBus(c+1114,"top HY_CU IMMU", false,-1, 2,0);
        tracep->declBus(c+1115,"top HY_CU IMMS", false,-1, 2,0);
        tracep->declBus(c+1116,"top HY_CU IMMJ", false,-1, 2,0);
        tracep->declBus(c+1117,"top HY_CU IMMB", false,-1, 2,0);
        tracep->declBus(c+1118,"top HY_CU MUX_Adder", false,-1, 3,0);
        tracep->declBus(c+1119,"top HY_CU MUX_Shift", false,-1, 3,0);
        tracep->declBus(c+1120,"top HY_CU MUX_Compare", false,-1, 3,0);
        tracep->declBus(c+1121,"top HY_CU MUX_DIV", false,-1, 3,0);
        tracep->declBus(c+1122,"top HY_CU MUX_Logic", false,-1, 3,0);
        tracep->declBus(c+1123,"top HY_CU MUX_MUL", false,-1, 3,0);
        tracep->declBus(c+1118,"top HY_CU Inside_0", false,-1, 3,0);
        tracep->declBus(c+1119,"top HY_CU Inside_1", false,-1, 3,0);
        tracep->declBus(c+1120,"top HY_CU Inside_2", false,-1, 3,0);
        tracep->declBus(c+1121,"top HY_CU Inside_3", false,-1, 3,0);
        tracep->declBus(c+1122,"top HY_CU Inside_4", false,-1, 3,0);
        tracep->declBus(c+1123,"top HY_CU Inside_5", false,-1, 3,0);
        tracep->declBus(c+1124,"top HY_CU ALU_Inside_choose NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1124,"top HY_CU ALU_Inside_choose KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1125,"top HY_CU ALU_Inside_choose DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+83,"top HY_CU ALU_Inside_choose out", false,-1, 3,0);
        tracep->declBus(c+140,"top HY_CU ALU_Inside_choose key", false,-1, 5,0);
        tracep->declBus(c+1126,"top HY_CU ALU_Inside_choose default_out", false,-1, 3,0);
        tracep->declQuad(c+1127,"top HY_CU ALU_Inside_choose lut", false,-1, 59,0);
        tracep->declBus(c+1124,"top HY_CU ALU_Inside_choose i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1124,"top HY_CU ALU_Inside_choose i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1125,"top HY_CU ALU_Inside_choose i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1129,"top HY_CU ALU_Inside_choose i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+83,"top HY_CU ALU_Inside_choose i0 out", false,-1, 3,0);
        tracep->declBus(c+140,"top HY_CU ALU_Inside_choose i0 key", false,-1, 5,0);
        tracep->declBus(c+1126,"top HY_CU ALU_Inside_choose i0 default_out", false,-1, 3,0);
        tracep->declQuad(c+1127,"top HY_CU ALU_Inside_choose i0 lut", false,-1, 59,0);
        tracep->declBus(c+1130,"top HY_CU ALU_Inside_choose i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+1+i*1,"top HY_CU ALU_Inside_choose i0 pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+7+i*1,"top HY_CU ALU_Inside_choose i0 key_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+13+i*1,"top HY_CU ALU_Inside_choose i0 data_list", true,(i+0), 3,0);}}
        tracep->declBus(c+141,"top HY_CU ALU_Inside_choose i0 lut_out", false,-1, 3,0);
        tracep->declBit(c+142,"top HY_CU ALU_Inside_choose i0 hit", false,-1);
        tracep->declBus(c+1131,"top HY_CU ALU_Inside_choose i0 i", false,-1, 31,0);
        tracep->declBus(c+1132,"top HY_CU func_choose NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1132,"top HY_CU func_choose KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1125,"top HY_CU func_choose DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+68,"top HY_CU func_choose out", false,-1, 3,0);
        tracep->declBus(c+139,"top HY_CU func_choose key", false,-1, 10,0);
        tracep->declBus(c+1126,"top HY_CU func_choose default_out", false,-1, 3,0);
        tracep->declArray(c+1133,"top HY_CU func_choose lut", false,-1, 164,0);
        tracep->declBus(c+1132,"top HY_CU func_choose i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1132,"top HY_CU func_choose i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1125,"top HY_CU func_choose i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1129,"top HY_CU func_choose i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+68,"top HY_CU func_choose i0 out", false,-1, 3,0);
        tracep->declBus(c+139,"top HY_CU func_choose i0 key", false,-1, 10,0);
        tracep->declBus(c+1126,"top HY_CU func_choose i0 default_out", false,-1, 3,0);
        tracep->declArray(c+1133,"top HY_CU func_choose i0 lut", false,-1, 164,0);
        tracep->declBus(c+1139,"top HY_CU func_choose i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+19+i*1,"top HY_CU func_choose i0 pair_list", true,(i+0), 14,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+30+i*1,"top HY_CU func_choose i0 key_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+41+i*1,"top HY_CU func_choose i0 data_list", true,(i+0), 3,0);}}
        tracep->declBus(c+143,"top HY_CU func_choose i0 lut_out", false,-1, 3,0);
        tracep->declBit(c+144,"top HY_CU func_choose i0 hit", false,-1);
        tracep->declBus(c+1140,"top HY_CU func_choose i0 i", false,-1, 31,0);
        tracep->declBus(c+1141,"top HY_CU CU_ImmType NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1141,"top HY_CU CU_ImmType KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1142,"top HY_CU CU_ImmType DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+67,"top HY_CU CU_ImmType out", false,-1, 2,0);
        tracep->declBus(c+145,"top HY_CU CU_ImmType key", false,-1, 4,0);
        tracep->declBus(c+1113,"top HY_CU CU_ImmType default_out", false,-1, 2,0);
        tracep->declQuad(c+1143,"top HY_CU CU_ImmType lut", false,-1, 39,0);
        tracep->declBus(c+1141,"top HY_CU CU_ImmType i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1141,"top HY_CU CU_ImmType i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1142,"top HY_CU CU_ImmType i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1129,"top HY_CU CU_ImmType i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+67,"top HY_CU CU_ImmType i0 out", false,-1, 2,0);
        tracep->declBus(c+145,"top HY_CU CU_ImmType i0 key", false,-1, 4,0);
        tracep->declBus(c+1113,"top HY_CU CU_ImmType i0 default_out", false,-1, 2,0);
        tracep->declQuad(c+1143,"top HY_CU CU_ImmType i0 lut", false,-1, 39,0);
        tracep->declBus(c+1145,"top HY_CU CU_ImmType i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+52+i*1,"top HY_CU CU_ImmType i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+57+i*1,"top HY_CU CU_ImmType i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+62+i*1,"top HY_CU CU_ImmType i0 data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+146,"top HY_CU CU_ImmType i0 lut_out", false,-1, 2,0);
        tracep->declBit(c+147,"top HY_CU CU_ImmType i0 hit", false,-1);
        tracep->declBus(c+1146,"top HY_CU CU_ImmType i0 i", false,-1, 31,0);
        tracep->declBus(c+1050,"top Sign_Extend Instr", false,-1, 31,0);
        tracep->declBus(c+67,"top Sign_Extend ControlUnit", false,-1, 2,0);
        tracep->declQuad(c+69,"top Sign_Extend SEXT_Out", false,-1, 63,0);
        tracep->declBus(c+1102,"top Sign_Extend immI", false,-1, 11,0);
        tracep->declBus(c+1103,"top Sign_Extend immU", false,-1, 31,0);
        tracep->declBus(c+148,"top Sign_Extend immS", false,-1, 11,0);
        tracep->declBus(c+149,"top Sign_Extend immJ", false,-1, 20,0);
        tracep->declBus(c+150,"top Sign_Extend immB", false,-1, 12,0);
        tracep->declBus(c+1141,"top Sign_Extend SEXT NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1142,"top Sign_Extend SEXT KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top Sign_Extend SEXT DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+69,"top Sign_Extend SEXT out", false,-1, 63,0);
        tracep->declBus(c+67,"top Sign_Extend SEXT key", false,-1, 2,0);
        tracep->declQuad(c+1147,"top Sign_Extend SEXT default_out", false,-1, 63,0);
        tracep->declArray(c+151,"top Sign_Extend SEXT lut", false,-1, 334,0);
        tracep->declBus(c+1141,"top Sign_Extend SEXT i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1142,"top Sign_Extend SEXT i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top Sign_Extend SEXT i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1129,"top Sign_Extend SEXT i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+69,"top Sign_Extend SEXT i0 out", false,-1, 63,0);
        tracep->declBus(c+67,"top Sign_Extend SEXT i0 key", false,-1, 2,0);
        tracep->declQuad(c+1147,"top Sign_Extend SEXT i0 default_out", false,-1, 63,0);
        tracep->declArray(c+151,"top Sign_Extend SEXT i0 lut", false,-1, 334,0);
        tracep->declBus(c+1149,"top Sign_Extend SEXT i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+162+i*3,"top Sign_Extend SEXT i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+177+i*1,"top Sign_Extend SEXT i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+182+i*2,"top Sign_Extend SEXT i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+192,"top Sign_Extend SEXT i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+194,"top Sign_Extend SEXT i0 hit", false,-1);
        tracep->declBus(c+1146,"top Sign_Extend SEXT i0 i", false,-1, 31,0);
        tracep->declBit(c+1048,"top HY_RegFile clk", false,-1);
        tracep->declBit(c+1049,"top HY_RegFile rst", false,-1);
        tracep->declBus(c+1104,"top HY_RegFile RS1", false,-1, 4,0);
        tracep->declBus(c+1105,"top HY_RegFile RS2", false,-1, 4,0);
        tracep->declBus(c+1106,"top HY_RegFile RD", false,-1, 4,0);
        tracep->declQuad(c+1150,"top HY_RegFile RD_Back", false,-1, 63,0);
        tracep->declBit(c+1152,"top HY_RegFile Enable_Control", false,-1);
        tracep->declQuad(c+71,"top HY_RegFile RS1_Reg", false,-1, 63,0);
        tracep->declQuad(c+73,"top HY_RegFile RS2_Reg", false,-1, 63,0);
        tracep->declQuad(c+462,"top HY_RegFile Zero", false,-1, 63,0);
        tracep->declQuad(c+464,"top HY_RegFile ra", false,-1, 63,0);
        tracep->declQuad(c+466,"top HY_RegFile sp", false,-1, 63,0);
        tracep->declQuad(c+468,"top HY_RegFile gp", false,-1, 63,0);
        tracep->declQuad(c+470,"top HY_RegFile tp", false,-1, 63,0);
        tracep->declQuad(c+472,"top HY_RegFile t0", false,-1, 63,0);
        tracep->declQuad(c+474,"top HY_RegFile t1", false,-1, 63,0);
        tracep->declQuad(c+476,"top HY_RegFile t2", false,-1, 63,0);
        tracep->declQuad(c+478,"top HY_RegFile s0", false,-1, 63,0);
        tracep->declQuad(c+480,"top HY_RegFile s1", false,-1, 63,0);
        tracep->declQuad(c+482,"top HY_RegFile a0", false,-1, 63,0);
        tracep->declQuad(c+484,"top HY_RegFile a1", false,-1, 63,0);
        tracep->declQuad(c+486,"top HY_RegFile a2", false,-1, 63,0);
        tracep->declQuad(c+488,"top HY_RegFile a3", false,-1, 63,0);
        tracep->declQuad(c+490,"top HY_RegFile a4", false,-1, 63,0);
        tracep->declQuad(c+492,"top HY_RegFile a5", false,-1, 63,0);
        tracep->declQuad(c+494,"top HY_RegFile a6", false,-1, 63,0);
        tracep->declQuad(c+496,"top HY_RegFile a7", false,-1, 63,0);
        tracep->declQuad(c+498,"top HY_RegFile s2", false,-1, 63,0);
        tracep->declQuad(c+500,"top HY_RegFile s3", false,-1, 63,0);
        tracep->declQuad(c+502,"top HY_RegFile s4", false,-1, 63,0);
        tracep->declQuad(c+504,"top HY_RegFile s5", false,-1, 63,0);
        tracep->declQuad(c+506,"top HY_RegFile s6", false,-1, 63,0);
        tracep->declQuad(c+508,"top HY_RegFile s7", false,-1, 63,0);
        tracep->declQuad(c+510,"top HY_RegFile s8", false,-1, 63,0);
        tracep->declQuad(c+512,"top HY_RegFile s9", false,-1, 63,0);
        tracep->declQuad(c+514,"top HY_RegFile s10", false,-1, 63,0);
        tracep->declQuad(c+516,"top HY_RegFile s11", false,-1, 63,0);
        tracep->declQuad(c+518,"top HY_RegFile t3", false,-1, 63,0);
        tracep->declQuad(c+520,"top HY_RegFile t4", false,-1, 63,0);
        tracep->declQuad(c+522,"top HY_RegFile t5", false,-1, 63,0);
        tracep->declQuad(c+524,"top HY_RegFile t6", false,-1, 63,0);
        tracep->declBus(c+1153,"top HY_RegFile RS1_Out NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1141,"top HY_RegFile RS1_Out KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top HY_RegFile RS1_Out DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+71,"top HY_RegFile RS1_Out out", false,-1, 63,0);
        tracep->declBus(c+1104,"top HY_RegFile RS1_Out key", false,-1, 4,0);
        tracep->declQuad(c+1147,"top HY_RegFile RS1_Out default_out", false,-1, 63,0);
        tracep->declArray(c+526,"top HY_RegFile RS1_Out lut", false,-1, 2207,0);
        tracep->declBus(c+1153,"top HY_RegFile RS1_Out i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1141,"top HY_RegFile RS1_Out i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top HY_RegFile RS1_Out i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1129,"top HY_RegFile RS1_Out i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+71,"top HY_RegFile RS1_Out i0 out", false,-1, 63,0);
        tracep->declBus(c+1104,"top HY_RegFile RS1_Out i0 key", false,-1, 4,0);
        tracep->declQuad(c+1147,"top HY_RegFile RS1_Out i0 default_out", false,-1, 63,0);
        tracep->declArray(c+526,"top HY_RegFile RS1_Out i0 lut", false,-1, 2207,0);
        tracep->declBus(c+1154,"top HY_RegFile RS1_Out i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declArray(c+595+i*3,"top HY_RegFile RS1_Out i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+691+i*1,"top HY_RegFile RS1_Out i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+723+i*2,"top HY_RegFile RS1_Out i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+195,"top HY_RegFile RS1_Out i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+197,"top HY_RegFile RS1_Out i0 hit", false,-1);
        tracep->declBus(c+1155,"top HY_RegFile RS1_Out i0 i", false,-1, 31,0);
        tracep->declBus(c+1153,"top HY_RegFile RS2_Out NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1141,"top HY_RegFile RS2_Out KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top HY_RegFile RS2_Out DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+73,"top HY_RegFile RS2_Out out", false,-1, 63,0);
        tracep->declBus(c+1105,"top HY_RegFile RS2_Out key", false,-1, 4,0);
        tracep->declQuad(c+1147,"top HY_RegFile RS2_Out default_out", false,-1, 63,0);
        tracep->declArray(c+787,"top HY_RegFile RS2_Out lut", false,-1, 2207,0);
        tracep->declBus(c+1153,"top HY_RegFile RS2_Out i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1141,"top HY_RegFile RS2_Out i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top HY_RegFile RS2_Out i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1129,"top HY_RegFile RS2_Out i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+73,"top HY_RegFile RS2_Out i0 out", false,-1, 63,0);
        tracep->declBus(c+1105,"top HY_RegFile RS2_Out i0 key", false,-1, 4,0);
        tracep->declQuad(c+1147,"top HY_RegFile RS2_Out i0 default_out", false,-1, 63,0);
        tracep->declArray(c+787,"top HY_RegFile RS2_Out i0 lut", false,-1, 2207,0);
        tracep->declBus(c+1154,"top HY_RegFile RS2_Out i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declArray(c+856+i*3,"top HY_RegFile RS2_Out i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+952+i*1,"top HY_RegFile RS2_Out i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+984+i*2,"top HY_RegFile RS2_Out i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+198,"top HY_RegFile RS2_Out i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+200,"top HY_RegFile RS2_Out i0 hit", false,-1);
        tracep->declBus(c+1155,"top HY_RegFile RS2_Out i0 i", false,-1, 31,0);
        tracep->declBus(c+1156,"top MUX_Reg_PC_2ALU NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1129,"top MUX_Reg_PC_2ALU KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top MUX_Reg_PC_2ALU DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+75,"top MUX_Reg_PC_2ALU out", false,-1, 63,0);
        tracep->declBus(c+1069,"top MUX_Reg_PC_2ALU key", false,-1, 0,0);
        tracep->declQuad(c+1147,"top MUX_Reg_PC_2ALU default_out", false,-1, 63,0);
        tracep->declArray(c+201,"top MUX_Reg_PC_2ALU lut", false,-1, 129,0);
        tracep->declBus(c+1156,"top MUX_Reg_PC_2ALU i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1129,"top MUX_Reg_PC_2ALU i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top MUX_Reg_PC_2ALU i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1129,"top MUX_Reg_PC_2ALU i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+75,"top MUX_Reg_PC_2ALU i0 out", false,-1, 63,0);
        tracep->declBus(c+1069,"top MUX_Reg_PC_2ALU i0 key", false,-1, 0,0);
        tracep->declQuad(c+1147,"top MUX_Reg_PC_2ALU i0 default_out", false,-1, 63,0);
        tracep->declArray(c+201,"top MUX_Reg_PC_2ALU i0 lut", false,-1, 129,0);
        tracep->declBus(c+1157,"top MUX_Reg_PC_2ALU i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+206+i*3,"top MUX_Reg_PC_2ALU i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+212+i*1,"top MUX_Reg_PC_2ALU i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+214+i*2,"top MUX_Reg_PC_2ALU i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+218,"top MUX_Reg_PC_2ALU i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+220,"top MUX_Reg_PC_2ALU i0 hit", false,-1);
        tracep->declBus(c+1158,"top MUX_Reg_PC_2ALU i0 i", false,-1, 31,0);
        tracep->declBus(c+1156,"top MUX_RS2_imm_2ALU NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1129,"top MUX_RS2_imm_2ALU KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top MUX_RS2_imm_2ALU DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+77,"top MUX_RS2_imm_2ALU out", false,-1, 63,0);
        tracep->declBus(c+1070,"top MUX_RS2_imm_2ALU key", false,-1, 0,0);
        tracep->declQuad(c+1147,"top MUX_RS2_imm_2ALU default_out", false,-1, 63,0);
        tracep->declArray(c+221,"top MUX_RS2_imm_2ALU lut", false,-1, 129,0);
        tracep->declBus(c+1156,"top MUX_RS2_imm_2ALU i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1129,"top MUX_RS2_imm_2ALU i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top MUX_RS2_imm_2ALU i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1129,"top MUX_RS2_imm_2ALU i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+77,"top MUX_RS2_imm_2ALU i0 out", false,-1, 63,0);
        tracep->declBus(c+1070,"top MUX_RS2_imm_2ALU i0 key", false,-1, 0,0);
        tracep->declQuad(c+1147,"top MUX_RS2_imm_2ALU i0 default_out", false,-1, 63,0);
        tracep->declArray(c+221,"top MUX_RS2_imm_2ALU i0 lut", false,-1, 129,0);
        tracep->declBus(c+1157,"top MUX_RS2_imm_2ALU i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+226+i*3,"top MUX_RS2_imm_2ALU i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+232+i*1,"top MUX_RS2_imm_2ALU i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+234+i*2,"top MUX_RS2_imm_2ALU i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+238,"top MUX_RS2_imm_2ALU i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+240,"top MUX_RS2_imm_2ALU i0 hit", false,-1);
        tracep->declBus(c+1158,"top MUX_RS2_imm_2ALU i0 i", false,-1, 31,0);
        tracep->declQuad(c+75,"top HY_ALU_top src1", false,-1, 63,0);
        tracep->declQuad(c+77,"top HY_ALU_top src2", false,-1, 63,0);
        tracep->declBus(c+68,"top HY_ALU_top func_control", false,-1, 3,0);
        tracep->declBus(c+83,"top HY_ALU_top inner_control", false,-1, 3,0);
        tracep->declQuad(c+81,"top HY_ALU_top result_out", false,-1, 63,0);
        tracep->declBus(c+1118,"top HY_ALU_top MUX_Adder", false,-1, 3,0);
        tracep->declBus(c+1119,"top HY_ALU_top MUX_Shift", false,-1, 3,0);
        tracep->declBus(c+1120,"top HY_ALU_top MUX_Compare", false,-1, 3,0);
        tracep->declBus(c+1121,"top HY_ALU_top MUX_DIV", false,-1, 3,0);
        tracep->declBus(c+1122,"top HY_ALU_top MUX_Logic", false,-1, 3,0);
        tracep->declBus(c+1123,"top HY_ALU_top MUX_MUL", false,-1, 3,0);
        tracep->declBus(c+1159,"top HY_ALU_top auipc", false,-1, 3,0);
        tracep->declBus(c+1160,"top HY_ALU_top lui", false,-1, 3,0);
        tracep->declQuad(c+241,"top HY_ALU_top Adder_out", false,-1, 63,0);
        tracep->declQuad(c+243,"top HY_ALU_top Shift_out", false,-1, 63,0);
        tracep->declQuad(c+245,"top HY_ALU_top Compare_out", false,-1, 63,0);
        tracep->declQuad(c+247,"top HY_ALU_top DIV_out", false,-1, 63,0);
        tracep->declQuad(c+249,"top HY_ALU_top Logic_out", false,-1, 63,0);
        tracep->declQuad(c+251,"top HY_ALU_top MUL_out", false,-1, 63,0);
        tracep->declQuad(c+75,"top HY_ALU_top ALU_adder src1", false,-1, 63,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_adder src2", false,-1, 63,0);
        tracep->declBus(c+83,"top HY_ALU_top ALU_adder control", false,-1, 3,0);
        tracep->declQuad(c+241,"top HY_ALU_top ALU_adder result_out", false,-1, 63,0);
        tracep->declQuad(c+253,"top HY_ALU_top ALU_adder resultAdd", false,-1, 63,0);
        tracep->declQuad(c+255,"top HY_ALU_top ALU_adder resultSub", false,-1, 63,0);
        tracep->declBus(c+1125,"top HY_ALU_top ALU_adder Adder_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1125,"top HY_ALU_top ALU_adder Adder_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top HY_ALU_top ALU_adder Adder_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+241,"top HY_ALU_top ALU_adder Adder_mux out", false,-1, 63,0);
        tracep->declBus(c+83,"top HY_ALU_top ALU_adder Adder_mux key", false,-1, 3,0);
        tracep->declQuad(c+253,"top HY_ALU_top ALU_adder Adder_mux default_out", false,-1, 63,0);
        tracep->declArray(c+257,"top HY_ALU_top ALU_adder Adder_mux lut", false,-1, 271,0);
        tracep->declBus(c+1125,"top HY_ALU_top ALU_adder Adder_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1125,"top HY_ALU_top ALU_adder Adder_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top HY_ALU_top ALU_adder Adder_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1129,"top HY_ALU_top ALU_adder Adder_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+241,"top HY_ALU_top ALU_adder Adder_mux i0 out", false,-1, 63,0);
        tracep->declBus(c+83,"top HY_ALU_top ALU_adder Adder_mux i0 key", false,-1, 3,0);
        tracep->declQuad(c+253,"top HY_ALU_top ALU_adder Adder_mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+257,"top HY_ALU_top ALU_adder Adder_mux i0 lut", false,-1, 271,0);
        tracep->declBus(c+1161,"top HY_ALU_top ALU_adder Adder_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+266+i*3,"top HY_ALU_top ALU_adder Adder_mux i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+278+i*1,"top HY_ALU_top ALU_adder Adder_mux i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+282+i*2,"top HY_ALU_top ALU_adder Adder_mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+290,"top HY_ALU_top ALU_adder Adder_mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+292,"top HY_ALU_top ALU_adder Adder_mux i0 hit", false,-1);
        tracep->declBus(c+1162,"top HY_ALU_top ALU_adder Adder_mux i0 i", false,-1, 31,0);
        tracep->declQuad(c+75,"top HY_ALU_top ALU_mul src1", false,-1, 63,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_mul src2", false,-1, 63,0);
        tracep->declBus(c+83,"top HY_ALU_top ALU_mul control", false,-1, 3,0);
        tracep->declQuad(c+251,"top HY_ALU_top ALU_mul result_out", false,-1, 63,0);
        tracep->declQuad(c+293,"top HY_ALU_top ALU_mul result", false,-1, 63,0);
        tracep->declBus(c+1156,"top HY_ALU_top ALU_mul MUX_mul NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1125,"top HY_ALU_top ALU_mul MUX_mul KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top HY_ALU_top ALU_mul MUX_mul DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+251,"top HY_ALU_top ALU_mul MUX_mul out", false,-1, 63,0);
        tracep->declBus(c+83,"top HY_ALU_top ALU_mul MUX_mul key", false,-1, 3,0);
        tracep->declQuad(c+1147,"top HY_ALU_top ALU_mul MUX_mul default_out", false,-1, 63,0);
        tracep->declArray(c+295,"top HY_ALU_top ALU_mul MUX_mul lut", false,-1, 135,0);
        tracep->declBus(c+1156,"top HY_ALU_top ALU_mul MUX_mul i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1125,"top HY_ALU_top ALU_mul MUX_mul i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top HY_ALU_top ALU_mul MUX_mul i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1129,"top HY_ALU_top ALU_mul MUX_mul i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+251,"top HY_ALU_top ALU_mul MUX_mul i0 out", false,-1, 63,0);
        tracep->declBus(c+83,"top HY_ALU_top ALU_mul MUX_mul i0 key", false,-1, 3,0);
        tracep->declQuad(c+1147,"top HY_ALU_top ALU_mul MUX_mul i0 default_out", false,-1, 63,0);
        tracep->declArray(c+295,"top HY_ALU_top ALU_mul MUX_mul i0 lut", false,-1, 135,0);
        tracep->declBus(c+1161,"top HY_ALU_top ALU_mul MUX_mul i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+300+i*3,"top HY_ALU_top ALU_mul MUX_mul i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+306+i*1,"top HY_ALU_top ALU_mul MUX_mul i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+308+i*2,"top HY_ALU_top ALU_mul MUX_mul i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+312,"top HY_ALU_top ALU_mul MUX_mul i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+314,"top HY_ALU_top ALU_mul MUX_mul i0 hit", false,-1);
        tracep->declBus(c+1158,"top HY_ALU_top ALU_mul MUX_mul i0 i", false,-1, 31,0);
        tracep->declQuad(c+75,"top HY_ALU_top ALU_Logic src1", false,-1, 63,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_Logic src2", false,-1, 63,0);
        tracep->declBus(c+83,"top HY_ALU_top ALU_Logic ControlOpt", false,-1, 3,0);
        tracep->declQuad(c+249,"top HY_ALU_top ALU_Logic result_out", false,-1, 63,0);
        tracep->declQuad(c+315,"top HY_ALU_top ALU_Logic result_and", false,-1, 63,0);
        tracep->declQuad(c+317,"top HY_ALU_top ALU_Logic result_xor", false,-1, 63,0);
        tracep->declQuad(c+319,"top HY_ALU_top ALU_Logic result_or", false,-1, 63,0);
        tracep->declBus(c+1142,"top HY_ALU_top ALU_Logic LogicOpt_Mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1125,"top HY_ALU_top ALU_Logic LogicOpt_Mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top HY_ALU_top ALU_Logic LogicOpt_Mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+249,"top HY_ALU_top ALU_Logic LogicOpt_Mux out", false,-1, 63,0);
        tracep->declBus(c+83,"top HY_ALU_top ALU_Logic LogicOpt_Mux key", false,-1, 3,0);
        tracep->declQuad(c+1147,"top HY_ALU_top ALU_Logic LogicOpt_Mux default_out", false,-1, 63,0);
        tracep->declArray(c+321,"top HY_ALU_top ALU_Logic LogicOpt_Mux lut", false,-1, 203,0);
        tracep->declBus(c+1142,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1125,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1129,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+249,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 out", false,-1, 63,0);
        tracep->declBus(c+83,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 key", false,-1, 3,0);
        tracep->declQuad(c+1147,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+321,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 lut", false,-1, 203,0);
        tracep->declBus(c+1161,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+328+i*3,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+337+i*1,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+340+i*2,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+346,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+348,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 hit", false,-1);
        tracep->declBus(c+1163,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 i", false,-1, 31,0);
        tracep->declQuad(c+75,"top HY_ALU_top ALU_Shift src1", false,-1, 63,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_Shift src2", false,-1, 63,0);
        tracep->declBus(c+83,"top HY_ALU_top ALU_Shift shift_control", false,-1, 3,0);
        tracep->declQuad(c+243,"top HY_ALU_top ALU_Shift shift_out", false,-1, 63,0);
        tracep->declBus(c+1118,"top HY_ALU_top ALU_Shift ArithRight32", false,-1, 3,0);
        tracep->declBus(c+1119,"top HY_ALU_top ALU_Shift LogicalRight32", false,-1, 3,0);
        tracep->declBus(c+1120,"top HY_ALU_top ALU_Shift LogicalLeft32", false,-1, 3,0);
        tracep->declBus(c+1121,"top HY_ALU_top ALU_Shift LogicalRight64", false,-1, 3,0);
        tracep->declBus(c+1122,"top HY_ALU_top ALU_Shift LogicalLeft64", false,-1, 3,0);
        tracep->declBus(c+1123,"top HY_ALU_top ALU_Shift ArithRight64", false,-1, 3,0);
        tracep->declQuad(c+349,"top HY_ALU_top ALU_Shift buffer", false,-1, 63,0);
        tracep->declQuad(c+351,"top HY_ALU_top ALU_Shift buffer1", false,-1, 63,0);
        tracep->declQuad(c+353,"top HY_ALU_top ALU_Shift buffer2", false,-1, 63,0);
        tracep->declQuad(c+355,"top HY_ALU_top ALU_Shift buffer3", false,-1, 63,0);
        tracep->declQuad(c+357,"top HY_ALU_top ALU_Shift buffer4", false,-1, 63,0);
        tracep->declQuad(c+359,"top HY_ALU_top ALU_Shift buffer5", false,-1, 63,0);
        tracep->declQuad(c+75,"top HY_ALU_top ALU_Compare src1", false,-1, 63,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_Compare src2", false,-1, 63,0);
        tracep->declBus(c+83,"top HY_ALU_top ALU_Compare Compare_Control", false,-1, 3,0);
        tracep->declQuad(c+245,"top HY_ALU_top ALU_Compare Compare_Result", false,-1, 63,0);
        tracep->declBus(c+1118,"top HY_ALU_top ALU_Compare MUX_neq_unsigned", false,-1, 3,0);
        tracep->declBus(c+1119,"top HY_ALU_top ALU_Compare MUX_eq_unsigned", false,-1, 3,0);
        tracep->declBus(c+1120,"top HY_ALU_top ALU_Compare MUX_more_eq_signed", false,-1, 3,0);
        tracep->declBus(c+1121,"top HY_ALU_top ALU_Compare MUX_less_signed", false,-1, 3,0);
        tracep->declBus(c+1122,"top HY_ALU_top ALU_Compare MUX_less_unsigned", false,-1, 3,0);
        tracep->declQuad(c+75,"top HY_ALU_top ALU_Compare S_src1", false,-1, 63,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_Compare S_src2", false,-1, 63,0);
        tracep->declBit(c+361,"top HY_ALU_top ALU_Compare non_eq_unsigned", false,-1);
        tracep->declBit(c+362,"top HY_ALU_top ALU_Compare eq_unsigned", false,-1);
        tracep->declBit(c+363,"top HY_ALU_top ALU_Compare more_eq_signed", false,-1);
        tracep->declBit(c+364,"top HY_ALU_top ALU_Compare less_signed", false,-1);
        tracep->declBit(c+365,"top HY_ALU_top ALU_Compare less_unsigned", false,-1);
        tracep->declQuad(c+75,"top HY_ALU_top ALU_DIV src1", false,-1, 63,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_DIV src2", false,-1, 63,0);
        tracep->declBus(c+83,"top HY_ALU_top ALU_DIV control", false,-1, 3,0);
        tracep->declQuad(c+247,"top HY_ALU_top ALU_DIV result_out", false,-1, 63,0);
        tracep->declBus(c+366,"top HY_ALU_top ALU_DIV S_src1", false,-1, 31,0);
        tracep->declBus(c+367,"top HY_ALU_top ALU_DIV S_src2", false,-1, 31,0);
        tracep->declBus(c+368,"top HY_ALU_top ALU_DIV divw", false,-1, 31,0);
        tracep->declBus(c+369,"top HY_ALU_top ALU_DIV remw", false,-1, 31,0);
        tracep->declBus(c+1156,"top HY_ALU_top ALU_DIV DIV NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1125,"top HY_ALU_top ALU_DIV DIV KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top HY_ALU_top ALU_DIV DIV DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+247,"top HY_ALU_top ALU_DIV DIV out", false,-1, 63,0);
        tracep->declBus(c+83,"top HY_ALU_top ALU_DIV DIV key", false,-1, 3,0);
        tracep->declQuad(c+1147,"top HY_ALU_top ALU_DIV DIV default_out", false,-1, 63,0);
        tracep->declArray(c+370,"top HY_ALU_top ALU_DIV DIV lut", false,-1, 135,0);
        tracep->declBus(c+1156,"top HY_ALU_top ALU_DIV DIV i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1125,"top HY_ALU_top ALU_DIV DIV i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top HY_ALU_top ALU_DIV DIV i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1129,"top HY_ALU_top ALU_DIV DIV i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+247,"top HY_ALU_top ALU_DIV DIV i0 out", false,-1, 63,0);
        tracep->declBus(c+83,"top HY_ALU_top ALU_DIV DIV i0 key", false,-1, 3,0);
        tracep->declQuad(c+1147,"top HY_ALU_top ALU_DIV DIV i0 default_out", false,-1, 63,0);
        tracep->declArray(c+370,"top HY_ALU_top ALU_DIV DIV i0 lut", false,-1, 135,0);
        tracep->declBus(c+1161,"top HY_ALU_top ALU_DIV DIV i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+375+i*3,"top HY_ALU_top ALU_DIV DIV i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+381+i*1,"top HY_ALU_top ALU_DIV DIV i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+383+i*2,"top HY_ALU_top ALU_DIV DIV i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+387,"top HY_ALU_top ALU_DIV DIV i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+389,"top HY_ALU_top ALU_DIV DIV i0 hit", false,-1);
        tracep->declBus(c+1158,"top HY_ALU_top ALU_DIV DIV i0 i", false,-1, 31,0);
        tracep->declBus(c+1145,"top HY_ALU_top Adder_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1125,"top HY_ALU_top Adder_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top HY_ALU_top Adder_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+81,"top HY_ALU_top Adder_mux out", false,-1, 63,0);
        tracep->declBus(c+68,"top HY_ALU_top Adder_mux key", false,-1, 3,0);
        tracep->declQuad(c+1147,"top HY_ALU_top Adder_mux default_out", false,-1, 63,0);
        tracep->declArray(c+390,"top HY_ALU_top Adder_mux lut", false,-1, 543,0);
        tracep->declBus(c+1145,"top HY_ALU_top Adder_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1125,"top HY_ALU_top Adder_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1109,"top HY_ALU_top Adder_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1129,"top HY_ALU_top Adder_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+81,"top HY_ALU_top Adder_mux i0 out", false,-1, 63,0);
        tracep->declBus(c+68,"top HY_ALU_top Adder_mux i0 key", false,-1, 3,0);
        tracep->declQuad(c+1147,"top HY_ALU_top Adder_mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+390,"top HY_ALU_top Adder_mux i0 lut", false,-1, 543,0);
        tracep->declBus(c+1161,"top HY_ALU_top Adder_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+407+i*3,"top HY_ALU_top Adder_mux i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+431+i*1,"top HY_ALU_top Adder_mux i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+439+i*2,"top HY_ALU_top Adder_mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+455,"top HY_ALU_top Adder_mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+457,"top HY_ALU_top Adder_mux i0 hit", false,-1);
        tracep->declBus(c+1164,"top HY_ALU_top Adder_mux i0 i", false,-1, 31,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<6>/*191:0*/ __Vtemp1673;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[0]),10);
        tracep->fullSData(oldp+2,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[1]),10);
        tracep->fullSData(oldp+3,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[2]),10);
        tracep->fullSData(oldp+4,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[3]),10);
        tracep->fullSData(oldp+5,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[4]),10);
        tracep->fullSData(oldp+6,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__pair_list[5]),10);
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[0]),6);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[1]),6);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[2]),6);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[3]),6);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[4]),6);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__key_list[5]),6);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[0]),4);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[1]),4);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[2]),4);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[3]),4);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[4]),4);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__data_list[5]),4);
        tracep->fullSData(oldp+19,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[0]),15);
        tracep->fullSData(oldp+20,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[1]),15);
        tracep->fullSData(oldp+21,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[2]),15);
        tracep->fullSData(oldp+22,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[3]),15);
        tracep->fullSData(oldp+23,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[4]),15);
        tracep->fullSData(oldp+24,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[5]),15);
        tracep->fullSData(oldp+25,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[6]),15);
        tracep->fullSData(oldp+26,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[7]),15);
        tracep->fullSData(oldp+27,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[8]),15);
        tracep->fullSData(oldp+28,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[9]),15);
        tracep->fullSData(oldp+29,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__pair_list[10]),15);
        tracep->fullSData(oldp+30,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[0]),11);
        tracep->fullSData(oldp+31,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[1]),11);
        tracep->fullSData(oldp+32,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[2]),11);
        tracep->fullSData(oldp+33,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[3]),11);
        tracep->fullSData(oldp+34,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[4]),11);
        tracep->fullSData(oldp+35,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[5]),11);
        tracep->fullSData(oldp+36,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[6]),11);
        tracep->fullSData(oldp+37,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[7]),11);
        tracep->fullSData(oldp+38,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[8]),11);
        tracep->fullSData(oldp+39,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[9]),11);
        tracep->fullSData(oldp+40,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__key_list[10]),11);
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[0]),4);
        tracep->fullCData(oldp+42,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[1]),4);
        tracep->fullCData(oldp+43,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[2]),4);
        tracep->fullCData(oldp+44,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[3]),4);
        tracep->fullCData(oldp+45,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[4]),4);
        tracep->fullCData(oldp+46,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[5]),4);
        tracep->fullCData(oldp+47,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[6]),4);
        tracep->fullCData(oldp+48,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[7]),4);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[8]),4);
        tracep->fullCData(oldp+50,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[9]),4);
        tracep->fullCData(oldp+51,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__data_list[10]),4);
        tracep->fullCData(oldp+52,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+53,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[1]),8);
        tracep->fullCData(oldp+54,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[2]),8);
        tracep->fullCData(oldp+55,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[3]),8);
        tracep->fullCData(oldp+56,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__pair_list[4]),8);
        tracep->fullCData(oldp+57,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+59,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+60,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+61,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+62,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[0]),3);
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[1]),3);
        tracep->fullCData(oldp+64,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[2]),3);
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[3]),3);
        tracep->fullCData(oldp+66,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__data_list[4]),3);
        tracep->fullCData(oldp+67,(vlSelf->top__DOT__SEXT_Control),3);
        tracep->fullCData(oldp+68,(vlSelf->top__DOT__ALU_Control_wire),4);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__SEXT_Connector),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__RS1_Connector),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__RS2_Connector),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result),64);
        tracep->fullBit(oldp+79,((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__ld) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__lbu)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__lh)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__lhu)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__sd)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))));
        tracep->fullCData(oldp+80,(vlSelf->top__DOT__C_NPC_Branch_Jump_Connector),2);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__ALU_Result_Connector),64);
        tracep->fullCData(oldp+83,(vlSelf->top__DOT__Insider_Control_Connector),4);
        tracep->fullBit(oldp+84,((1U & (IData)(vlSelf->top__DOT__ALU_Result_Connector))));
        tracep->fullBit(oldp+85,(vlSelf->top__DOT__HY_CU__DOT__Match_31_25_0100000));
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__HY_CU__DOT__addi));
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__HY_CU__DOT__addiw));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__HY_CU__DOT__addw));
        tracep->fullBit(oldp+89,(vlSelf->top__DOT__HY_CU__DOT__subw));
        tracep->fullBit(oldp+90,(vlSelf->top__DOT__HY_CU__DOT__add));
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__HY_CU__DOT__sub));
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__HY_CU__DOT__mulw));
        tracep->fullBit(oldp+93,(vlSelf->top__DOT__HY_CU__DOT__divw));
        tracep->fullBit(oldp+94,(vlSelf->top__DOT__HY_CU__DOT__mul));
        tracep->fullBit(oldp+95,(vlSelf->top__DOT__HY_CU__DOT__remw));
        tracep->fullBit(oldp+96,(vlSelf->top__DOT__HY_CU__DOT__sltiu));
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__HY_CU__DOT__sltu));
        tracep->fullBit(oldp+98,(vlSelf->top__DOT__HY_CU__DOT__slt));
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__HY_CU__DOT__sraw));
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__HY_CU__DOT__sllw));
        tracep->fullBit(oldp+101,(vlSelf->top__DOT__HY_CU__DOT__srlw));
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__HY_CU__DOT__slli));
        tracep->fullBit(oldp+103,(vlSelf->top__DOT__HY_CU__DOT__srli));
        tracep->fullBit(oldp+104,(vlSelf->top__DOT__HY_CU__DOT__srai));
        tracep->fullBit(oldp+105,(vlSelf->top__DOT__HY_CU__DOT__srliw));
        tracep->fullBit(oldp+106,(vlSelf->top__DOT__HY_CU__DOT__slliw));
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__HY_CU__DOT__sraiw));
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__HY_CU__DOT__ld));
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__HY_CU__DOT__lw));
        tracep->fullBit(oldp+110,(vlSelf->top__DOT__HY_CU__DOT__lbu));
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__HY_CU__DOT__lh));
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__HY_CU__DOT__lhu));
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__HY_CU__DOT__sd));
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__HY_CU__DOT__sw));
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__HY_CU__DOT__sb));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__HY_CU__DOT__sh));
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__HY_CU__DOT__andi));
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__HY_CU__DOT__xori));
        tracep->fullBit(oldp+119,(vlSelf->top__DOT__HY_CU__DOT__bne));
        tracep->fullBit(oldp+120,(vlSelf->top__DOT__HY_CU__DOT__beq));
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__HY_CU__DOT__bge));
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__HY_CU__DOT__blt));
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__HY_CU__DOT__bltu));
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__HY_CU__DOT__jalr));
        tracep->fullBit(oldp+125,((((((((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
                                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__addiw)) 
                                                 | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu)) 
                                                | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                               | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                              | (IData)(vlSelf->top__DOT__HY_CU__DOT__srai)) 
                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__srliw)) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraiw)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__ld)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__lbu)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__lh)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__lhu)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__andi)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr))));
        tracep->fullBit(oldp+126,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__sd) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))));
        tracep->fullBit(oldp+127,((((((IData)(vlSelf->top__DOT__HY_CU__DOT__bne) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__beq)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu))));
        tracep->fullBit(oldp+128,((((((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addw) 
                                                | (IData)(vlSelf->top__DOT__HY_CU__DOT__subw)) 
                                               | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                              | (IData)(vlSelf->top__DOT__HY_CU__DOT__sub)) 
                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__mulw)) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__divw)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__srlw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT___and))));
        tracep->fullBit(oldp+129,(((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__addiw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__addw)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__subw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sub))));
        tracep->fullBit(oldp+130,(((IData)(vlSelf->top__DOT__HY_CU__DOT__mulw) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul))));
        tracep->fullBit(oldp+131,(((IData)(vlSelf->top__DOT__HY_CU__DOT__divw) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw))));
        tracep->fullBit(oldp+132,((((IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt))));
        tracep->fullBit(oldp+133,((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sraw) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__srlw)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__srai)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__srliw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraiw))));
        tracep->fullBit(oldp+134,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__andi) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT___and))));
        tracep->fullBit(oldp+135,((((IData)(vlSelf->top__DOT__HY_CU__DOT__sub) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw))));
        tracep->fullBit(oldp+136,(((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addiw) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge))));
        tracep->fullBit(oldp+137,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__subw) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt))));
        tracep->fullBit(oldp+138,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu))));
        tracep->fullSData(oldp+139,(vlSelf->top__DOT__HY_CU__DOT__func_signal),11);
        tracep->fullCData(oldp+140,(vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal),6);
        tracep->fullCData(oldp+141,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out),4);
        tracep->fullBit(oldp+142,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+143,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out),4);
        tracep->fullBit(oldp+144,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+145,(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2),5);
        tracep->fullCData(oldp+146,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out),3);
        tracep->fullBit(oldp+147,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit));
        tracep->fullSData(oldp+148,(vlSelf->top__DOT__Sign_Extend__DOT__immS),12);
        tracep->fullIData(oldp+149,(vlSelf->top__DOT__Sign_Extend__DOT__immJ),21);
        tracep->fullSData(oldp+150,(vlSelf->top__DOT__Sign_Extend__DOT__immB),13);
        tracep->fullWData(oldp+151,(vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4),335);
        tracep->fullWData(oldp+162,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+165,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+168,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+171,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+174,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+177,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+178,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+179,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+180,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+181,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[4]),3);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+194,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+197,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+200,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+201,(vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4),130);
        tracep->fullWData(oldp+206,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+209,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+212,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+213,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+220,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+221,(vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4),130);
        tracep->fullWData(oldp+226,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+229,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+232,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+233,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+240,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_out),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__HY_ALU_top__DOT__Compare_out),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__HY_ALU_top__DOT__DIV_out),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__HY_ALU_top__DOT__Logic_out),64);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__HY_ALU_top__DOT__MUL_out),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd),64);
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub),64);
        tracep->fullWData(oldp+257,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4),272);
        tracep->fullWData(oldp+266,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+269,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+272,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+275,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullCData(oldp+278,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+279,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+280,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+281,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[3]),4);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+286,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+288,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+290,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+292,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+293,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__result),64);
        tracep->fullWData(oldp+295,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4),136);
        tracep->fullWData(oldp+300,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+303,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullCData(oldp+306,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+307,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[1]),4);
        tracep->fullQData(oldp+308,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+310,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+312,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+314,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+315,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                     & vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
        tracep->fullQData(oldp+317,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                     ^ vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
        tracep->fullQData(oldp+319,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                     | vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
        tracep->fullWData(oldp+321,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4),204);
        tracep->fullWData(oldp+328,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+331,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+334,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullCData(oldp+337,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+338,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+339,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[2]),4);
        tracep->fullQData(oldp+340,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+342,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+344,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+346,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+348,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+349,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer),64);
        tracep->fullQData(oldp+351,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1),64);
        tracep->fullQData(oldp+353,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2),64);
        tracep->fullQData(oldp+355,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3),64);
        tracep->fullQData(oldp+357,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4),64);
        tracep->fullQData(oldp+359,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer5),64);
        tracep->fullBit(oldp+361,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                   != vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
        tracep->fullBit(oldp+362,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                   == vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
        tracep->fullBit(oldp+363,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result, vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
        tracep->fullBit(oldp+364,(VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result, vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
        tracep->fullBit(oldp+365,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                   < vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
        tracep->fullIData(oldp+366,((IData)(vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result)),32);
        tracep->fullIData(oldp+367,((IData)(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),32);
        tracep->fullIData(oldp+368,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__divw),32);
        tracep->fullIData(oldp+369,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__remw),32);
        tracep->fullWData(oldp+370,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4),136);
        tracep->fullWData(oldp+375,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+378,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullCData(oldp+381,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+382,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[1]),4);
        tracep->fullQData(oldp+383,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+385,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+387,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+389,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+390,(vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4),544);
        tracep->fullWData(oldp+407,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+410,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+413,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+416,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+419,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[4]),68);
        tracep->fullWData(oldp+422,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[5]),68);
        tracep->fullWData(oldp+425,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[6]),68);
        tracep->fullWData(oldp+428,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[7]),68);
        tracep->fullCData(oldp+431,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+432,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+433,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+434,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+435,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+436,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+437,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+438,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[7]),4);
        tracep->fullQData(oldp+439,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+441,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+443,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+445,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+447,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+449,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+451,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+453,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+455,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+457,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+458,(vlSelf->top__DOT__PC_Wire),64);
        tracep->fullQData(oldp+460,((4ULL + vlSelf->top__DOT__PC_Wire)),64);
        tracep->fullQData(oldp+462,(vlSelf->top__DOT__HY_RegFile__DOT__Zero),64);
        tracep->fullQData(oldp+464,(vlSelf->top__DOT__HY_RegFile__DOT__ra),64);
        tracep->fullQData(oldp+466,(vlSelf->top__DOT__HY_RegFile__DOT__sp),64);
        tracep->fullQData(oldp+468,(vlSelf->top__DOT__HY_RegFile__DOT__gp),64);
        tracep->fullQData(oldp+470,(vlSelf->top__DOT__HY_RegFile__DOT__tp),64);
        tracep->fullQData(oldp+472,(vlSelf->top__DOT__HY_RegFile__DOT__t0),64);
        tracep->fullQData(oldp+474,(vlSelf->top__DOT__HY_RegFile__DOT__t1),64);
        tracep->fullQData(oldp+476,(vlSelf->top__DOT__HY_RegFile__DOT__t2),64);
        tracep->fullQData(oldp+478,(vlSelf->top__DOT__HY_RegFile__DOT__s0),64);
        tracep->fullQData(oldp+480,(vlSelf->top__DOT__HY_RegFile__DOT__s1),64);
        tracep->fullQData(oldp+482,(vlSelf->top__DOT__HY_RegFile__DOT__a0),64);
        tracep->fullQData(oldp+484,(vlSelf->top__DOT__HY_RegFile__DOT__a1),64);
        tracep->fullQData(oldp+486,(vlSelf->top__DOT__HY_RegFile__DOT__a2),64);
        tracep->fullQData(oldp+488,(vlSelf->top__DOT__HY_RegFile__DOT__a3),64);
        tracep->fullQData(oldp+490,(vlSelf->top__DOT__HY_RegFile__DOT__a4),64);
        tracep->fullQData(oldp+492,(vlSelf->top__DOT__HY_RegFile__DOT__a5),64);
        tracep->fullQData(oldp+494,(vlSelf->top__DOT__HY_RegFile__DOT__a6),64);
        tracep->fullQData(oldp+496,(vlSelf->top__DOT__HY_RegFile__DOT__a7),64);
        tracep->fullQData(oldp+498,(vlSelf->top__DOT__HY_RegFile__DOT__s2),64);
        tracep->fullQData(oldp+500,(vlSelf->top__DOT__HY_RegFile__DOT__s3),64);
        tracep->fullQData(oldp+502,(vlSelf->top__DOT__HY_RegFile__DOT__s4),64);
        tracep->fullQData(oldp+504,(vlSelf->top__DOT__HY_RegFile__DOT__s5),64);
        tracep->fullQData(oldp+506,(vlSelf->top__DOT__HY_RegFile__DOT__s6),64);
        tracep->fullQData(oldp+508,(vlSelf->top__DOT__HY_RegFile__DOT__s7),64);
        tracep->fullQData(oldp+510,(vlSelf->top__DOT__HY_RegFile__DOT__s8),64);
        tracep->fullQData(oldp+512,(vlSelf->top__DOT__HY_RegFile__DOT__s9),64);
        tracep->fullQData(oldp+514,(vlSelf->top__DOT__HY_RegFile__DOT__s10),64);
        tracep->fullQData(oldp+516,(vlSelf->top__DOT__HY_RegFile__DOT__s11),64);
        tracep->fullQData(oldp+518,(vlSelf->top__DOT__HY_RegFile__DOT__t3),64);
        tracep->fullQData(oldp+520,(vlSelf->top__DOT__HY_RegFile__DOT__t4),64);
        tracep->fullQData(oldp+522,(vlSelf->top__DOT__HY_RegFile__DOT__t5),64);
        tracep->fullQData(oldp+524,(vlSelf->top__DOT__HY_RegFile__DOT__t6),64);
        tracep->fullWData(oldp+526,(vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4),2208);
        tracep->fullWData(oldp+595,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+598,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+601,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+604,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+607,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+610,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+613,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+616,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+619,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+622,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+625,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+628,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+631,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+634,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+637,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+640,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+643,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+646,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+649,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+652,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+655,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+658,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+661,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+664,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+667,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+670,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+673,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+676,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+679,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+682,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+685,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullWData(oldp+688,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[31]),69);
        tracep->fullCData(oldp+691,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+692,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+693,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+694,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+695,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+696,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+697,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+698,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+699,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+700,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+701,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+702,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+703,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+704,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+705,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+706,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+707,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+708,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+709,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+710,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+711,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+712,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+713,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+714,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+715,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+716,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+717,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+718,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+719,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+720,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+721,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[30]),5);
        tracep->fullCData(oldp+722,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[31]),5);
        tracep->fullQData(oldp+723,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+725,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+727,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+729,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+731,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+733,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+735,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+737,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+739,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+741,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+743,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+745,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+747,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+749,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+751,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+753,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+755,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+757,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+759,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+761,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+763,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+765,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+767,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+769,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+771,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+773,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+775,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+777,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+779,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+781,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+783,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[30]),64);
        tracep->fullQData(oldp+785,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[31]),64);
        tracep->fullWData(oldp+787,(vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4),2208);
        tracep->fullWData(oldp+856,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+859,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+862,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+865,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+868,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+871,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+874,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+877,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+880,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+883,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+886,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+889,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+892,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+895,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+898,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+901,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+904,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+907,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+910,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+913,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+916,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+919,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+922,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+925,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+928,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+931,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+934,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+937,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+940,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+943,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+946,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullWData(oldp+949,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[31]),69);
        tracep->fullCData(oldp+952,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+953,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+954,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+955,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+956,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+957,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+958,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+959,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+960,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+961,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+962,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+963,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+964,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+965,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+966,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+967,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+968,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+969,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+970,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+971,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+972,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+973,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+974,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+975,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+976,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+977,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+978,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+979,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+980,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+981,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+982,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[30]),5);
        tracep->fullCData(oldp+983,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[31]),5);
        tracep->fullQData(oldp+984,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+986,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+988,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+990,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+992,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+994,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+996,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+998,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+1000,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+1002,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+1004,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+1006,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+1008,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+1010,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+1012,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+1014,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+1016,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+1018,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+1020,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+1022,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+1024,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+1026,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+1028,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+1030,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+1032,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+1034,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+1036,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+1038,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+1040,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+1042,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+1044,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[30]),64);
        tracep->fullQData(oldp+1046,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[31]),64);
        tracep->fullBit(oldp+1048,(vlSelf->clk));
        tracep->fullBit(oldp+1049,(vlSelf->rst));
        tracep->fullIData(oldp+1050,(vlSelf->instr_in),32);
        tracep->fullQData(oldp+1051,(vlSelf->SEXT_result),64);
        tracep->fullQData(oldp+1053,(vlSelf->PC_Test),64);
        tracep->fullCData(oldp+1055,(vlSelf->SEXT_Control_out),3);
        tracep->fullQData(oldp+1056,(vlSelf->RS1_OUTPUT),64);
        tracep->fullQData(oldp+1058,(vlSelf->RS2_OUTPUT),64);
        tracep->fullQData(oldp+1060,(vlSelf->ALU_Result),64);
        tracep->fullBit(oldp+1062,(vlSelf->WriteBack_Enable_result));
        tracep->fullBit(oldp+1063,(vlSelf->C_RS1_PC_Connector_result));
        tracep->fullBit(oldp+1064,(vlSelf->C_RS2_imm_Connector_result));
        tracep->fullBit(oldp+1065,(vlSelf->C_ALU_MEM_Connector_result));
        tracep->fullBit(oldp+1066,(vlSelf->C_ALU_NPC_In_Connector_result));
        tracep->fullCData(oldp+1067,(vlSelf->C_NPC_Branch_Jump_Connector_result),2);
        tracep->fullBit(oldp+1068,((1U & (~ ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->instr_in)) 
                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr))))));
        tracep->fullBit(oldp+1069,((0x17U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1070,(((((((((((((((((
                                                   ((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
                                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__addiw)) 
                                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu)) 
                                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__srai)) 
                                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__srliw)) 
                                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                                 | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraiw)) 
                                                | (IData)(vlSelf->top__DOT__HY_CU__DOT__ld)) 
                                               | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                              | (IData)(vlSelf->top__DOT__HY_CU__DOT__lbu)) 
                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__lh)) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__lhu)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__sd)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__andi)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori)) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelf->instr_in))) 
                                    | (0x37U == (0x7fU 
                                                 & vlSelf->instr_in)))));
        tracep->fullBit(oldp+1071,(((0x6fU == (0x7fU 
                                               & vlSelf->instr_in)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr))));
        tracep->fullCData(oldp+1072,((0x7fU & vlSelf->instr_in)),7);
        tracep->fullCData(oldp+1073,((7U & (vlSelf->instr_in 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+1074,((vlSelf->instr_in 
                                      >> 0x19U)),7);
        tracep->fullCData(oldp+1075,((vlSelf->instr_in 
                                      >> 0x1aU)),6);
        tracep->fullBit(oldp+1076,((0x13U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1077,((0x3bU == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1078,((0x33U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1079,((0x1bU == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1080,((3U == (0x7fU & vlSelf->instr_in))));
        tracep->fullBit(oldp+1081,((0x23U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1082,((0x63U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1083,((0x6fU == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1084,((0x67U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1085,((0x37U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1086,((0x73U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1087,((0U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1088,((4U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1089,((6U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1090,((3U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1091,((2U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1092,((5U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1093,((1U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1094,((7U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1095,((0U == (vlSelf->instr_in 
                                           >> 0x19U))));
        tracep->fullBit(oldp+1096,((1U == (vlSelf->instr_in 
                                           >> 0x19U))));
        tracep->fullBit(oldp+1097,((0U == (vlSelf->instr_in 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+1098,((0x10U == (vlSelf->instr_in 
                                              >> 0x1aU))));
        tracep->fullBit(oldp+1099,((0x100073U == vlSelf->instr_in)));
        tracep->fullBit(oldp+1100,(((0x17U == (0x7fU 
                                               & vlSelf->instr_in)) 
                                    | (0x37U == (0x7fU 
                                                 & vlSelf->instr_in)))));
        tracep->fullBit(oldp+1101,(((((((((((((((((
                                                   (((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
                                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__mulw)) 
                                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__divw)) 
                                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraw)) 
                                                 | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraiw)) 
                                                | (IData)(vlSelf->top__DOT__HY_CU__DOT__andi)) 
                                               | (IData)(vlSelf->top__DOT__HY_CU__DOT___and)) 
                                              | (IData)(vlSelf->top__DOT__HY_CU__DOT__bne)) 
                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__ld)) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__lbu)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__lh)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__lhu)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__sd)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh)) 
                                    | (0x17U == (0x7fU 
                                                 & vlSelf->instr_in)))));
        tracep->fullSData(oldp+1102,((vlSelf->instr_in 
                                      >> 0x14U)),12);
        tracep->fullIData(oldp+1103,((0xfffff000U & vlSelf->instr_in)),32);
        tracep->fullCData(oldp+1104,((0x1fU & (vlSelf->instr_in 
                                               >> 0xfU))),5);
        tracep->fullCData(oldp+1105,((0x1fU & (vlSelf->instr_in 
                                               >> 0x14U))),5);
        tracep->fullCData(oldp+1106,((0x1fU & (vlSelf->instr_in 
                                               >> 7U))),5);
        tracep->fullBit(oldp+1107,(0U));
        tracep->fullBit(oldp+1108,(1U));
        tracep->fullIData(oldp+1109,(0x40U),32);
        tracep->fullQData(oldp+1110,(0x80000000ULL),64);
        tracep->fullBit(oldp+1112,(1U));
        tracep->fullCData(oldp+1113,(1U),3);
        tracep->fullCData(oldp+1114,(2U),3);
        tracep->fullCData(oldp+1115,(3U),3);
        tracep->fullCData(oldp+1116,(4U),3);
        tracep->fullCData(oldp+1117,(5U),3);
        tracep->fullCData(oldp+1118,(0U),4);
        tracep->fullCData(oldp+1119,(1U),4);
        tracep->fullCData(oldp+1120,(2U),4);
        tracep->fullCData(oldp+1121,(3U),4);
        tracep->fullCData(oldp+1122,(4U),4);
        tracep->fullCData(oldp+1123,(5U),4);
        tracep->fullIData(oldp+1124,(6U),32);
        tracep->fullIData(oldp+1125,(4U),32);
        tracep->fullCData(oldp+1126,(0xfU),4);
        tracep->fullQData(oldp+1127,(0x801012084309015ULL),60);
        tracep->fullIData(oldp+1129,(1U),32);
        tracep->fullIData(oldp+1130,(0xaU),32);
        tracep->fullIData(oldp+1131,(6U),32);
        tracep->fullIData(oldp+1132,(0xbU),32);
        __Vtemp1673[0U] = 0x130017U;
        __Vtemp1673[1U] = 0x40104010U;
        __Vtemp1673[2U] = 0x4100010U;
        __Vtemp1673[3U] = 0x3100410U;
        __Vtemp1673[4U] = 0x100290U;
        __Vtemp1673[5U] = 0x10U;
        tracep->fullWData(oldp+1133,(__Vtemp1673),165);
        tracep->fullIData(oldp+1139,(0xfU),32);
        tracep->fullIData(oldp+1140,(0xbU),32);
        tracep->fullIData(oldp+1141,(5U),32);
        tracep->fullIData(oldp+1142,(3U),32);
        tracep->fullQData(oldp+1143,(0x814223140dULL),40);
        tracep->fullIData(oldp+1145,(8U),32);
        tracep->fullIData(oldp+1146,(5U),32);
        tracep->fullQData(oldp+1147,(0ULL),64);
        tracep->fullIData(oldp+1149,(0x43U),32);
        tracep->fullQData(oldp+1150,(1ULL),64);
        tracep->fullBit(oldp+1152,(0U));
        tracep->fullIData(oldp+1153,(0x20U),32);
        tracep->fullIData(oldp+1154,(0x45U),32);
        tracep->fullIData(oldp+1155,(0x20U),32);
        tracep->fullIData(oldp+1156,(2U),32);
        tracep->fullIData(oldp+1157,(0x41U),32);
        tracep->fullIData(oldp+1158,(2U),32);
        tracep->fullCData(oldp+1159,(6U),4);
        tracep->fullCData(oldp+1160,(7U),4);
        tracep->fullIData(oldp+1161,(0x44U),32);
        tracep->fullIData(oldp+1162,(4U),32);
        tracep->fullIData(oldp+1163,(3U),32);
        tracep->fullIData(oldp+1164,(8U),32);
    }
}
