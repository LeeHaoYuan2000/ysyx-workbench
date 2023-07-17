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
        tracep->declBit(c+1141,"clk", false,-1);
        tracep->declBit(c+1142,"rst", false,-1);
        tracep->declBus(c+1143,"instr_in", false,-1, 31,0);
        tracep->declQuad(c+1144,"SEXT_result", false,-1, 63,0);
        tracep->declQuad(c+1146,"PC_Test", false,-1, 63,0);
        tracep->declBus(c+1148,"SEXT_Control_out", false,-1, 2,0);
        tracep->declQuad(c+1149,"RS1_OUTPUT", false,-1, 63,0);
        tracep->declQuad(c+1151,"RS2_OUTPUT", false,-1, 63,0);
        tracep->declQuad(c+1153,"ALU_Result", false,-1, 63,0);
        tracep->declBit(c+1155,"WriteBack_Enable_result", false,-1);
        tracep->declBit(c+1156,"C_RS1_PC_Connector_result", false,-1);
        tracep->declBit(c+1157,"C_RS2_imm_Connector_result", false,-1);
        tracep->declBit(c+1158,"C_ALU_MEM_Connector_result", false,-1);
        tracep->declBit(c+1159,"C_ALU_NPC_In_Connector_result", false,-1);
        tracep->declBus(c+1160,"C_NPC_Branch_Jump_Connector_result", false,-1, 1,0);
        tracep->declBit(c+1141,"top clk", false,-1);
        tracep->declBit(c+1142,"top rst", false,-1);
        tracep->declBus(c+1143,"top instr_in", false,-1, 31,0);
        tracep->declQuad(c+1144,"top SEXT_result", false,-1, 63,0);
        tracep->declQuad(c+1146,"top PC_Test", false,-1, 63,0);
        tracep->declBus(c+1148,"top SEXT_Control_out", false,-1, 2,0);
        tracep->declQuad(c+1149,"top RS1_OUTPUT", false,-1, 63,0);
        tracep->declQuad(c+1151,"top RS2_OUTPUT", false,-1, 63,0);
        tracep->declQuad(c+1153,"top ALU_Result", false,-1, 63,0);
        tracep->declBit(c+1155,"top WriteBack_Enable_result", false,-1);
        tracep->declBit(c+1156,"top C_RS1_PC_Connector_result", false,-1);
        tracep->declBit(c+1157,"top C_RS2_imm_Connector_result", false,-1);
        tracep->declBit(c+1158,"top C_ALU_MEM_Connector_result", false,-1);
        tracep->declBit(c+1159,"top C_ALU_NPC_In_Connector_result", false,-1);
        tracep->declBus(c+1160,"top C_NPC_Branch_Jump_Connector_result", false,-1, 1,0);
        tracep->declBus(c+1200,"top MUX_Output_RS1", false,-1, 0,0);
        tracep->declBus(c+1201,"top MUX_Output_PC", false,-1, 0,0);
        tracep->declBus(c+1200,"top MUX_Output_RS2", false,-1, 0,0);
        tracep->declBus(c+1201,"top MUX_Output_imm", false,-1, 0,0);
        tracep->declQuad(c+551,"top PC_Wire", false,-1, 63,0);
        tracep->declQuad(c+553,"top PC_Next_Wire", false,-1, 63,0);
        tracep->declQuad(c+67,"top PC_Next_Next", false,-1, 63,0);
        tracep->declBus(c+1143,"top instruction", false,-1, 31,0);
        tracep->declBus(c+69,"top SEXT_Control", false,-1, 2,0);
        tracep->declBus(c+70,"top ALU_Control_wire", false,-1, 3,0);
        tracep->declQuad(c+71,"top SEXT_Connector", false,-1, 63,0);
        tracep->declQuad(c+73,"top RS1_Connector", false,-1, 63,0);
        tracep->declQuad(c+75,"top RS2_Connector", false,-1, 63,0);
        tracep->declQuad(c+77,"top MUX_Reg_PC_2ALU_Result", false,-1, 63,0);
        tracep->declQuad(c+79,"top MUX_Reg_imm_2ALU_Result", false,-1, 63,0);
        tracep->declQuad(c+81,"top MUX_ALU_MEM_Result", false,-1, 63,0);
        tracep->declBit(c+83,"top MEM_Enable_Connector", false,-1);
        tracep->declBus(c+84,"top MEM_Ctrl_connector", false,-1, 3,0);
        tracep->declBit(c+85,"top WriteBack_Enable", false,-1);
        tracep->declBit(c+86,"top C_RS1_PC_Connector", false,-1);
        tracep->declBit(c+87,"top C_RS2_imm_Connector", false,-1);
        tracep->declBit(c+88,"top C_ALU_MEM_Connector", false,-1);
        tracep->declBit(c+89,"top C_ALU_NPC_In_Connector", false,-1);
        tracep->declBus(c+90,"top C_NPC_Branch_Jump_Connector", false,-1, 1,0);
        tracep->declBus(c+1200,"top MUX_Output_ALU", false,-1, 0,0);
        tracep->declBus(c+1201,"top MUX_Output_MEM", false,-1, 0,0);
        tracep->declBus(c+1202,"top MUX_NPC", false,-1, 1,0);
        tracep->declBus(c+1203,"top MUX_Branch", false,-1, 1,0);
        tracep->declBus(c+1204,"top MUX_Jump", false,-1, 1,0);
        tracep->declQuad(c+91,"top MEM_Result_Connector", false,-1, 63,0);
        tracep->declQuad(c+93,"top Write_Back_Reg", false,-1, 63,0);
        tracep->declQuad(c+1161,"top Branch_PC", false,-1, 63,0);
        tracep->declQuad(c+95,"top ALU_Result_Connector", false,-1, 63,0);
        tracep->declBus(c+97,"top Insider_Control_Connector", false,-1, 3,0);
        tracep->declQuad(c+551,"top pc_adder PC", false,-1, 63,0);
        tracep->declQuad(c+553,"top pc_adder PC_Next", false,-1, 63,0);
        tracep->declBit(c+1141,"top pc_reg clk", false,-1);
        tracep->declBit(c+1142,"top pc_reg rst", false,-1);
        tracep->declQuad(c+67,"top pc_reg PC_Next", false,-1, 63,0);
        tracep->declQuad(c+551,"top pc_reg PC", false,-1, 63,0);
        tracep->declBus(c+1205,"top pc_reg pc_reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1206,"top pc_reg pc_reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1141,"top pc_reg pc_reg clk", false,-1);
        tracep->declBit(c+1142,"top pc_reg pc_reg rst", false,-1);
        tracep->declQuad(c+67,"top pc_reg pc_reg din", false,-1, 63,0);
        tracep->declQuad(c+551,"top pc_reg pc_reg dout", false,-1, 63,0);
        tracep->declBit(c+1208,"top pc_reg pc_reg wen", false,-1);
        tracep->declQuad(c+551,"top IFU_Lee PC_IN", false,-1, 63,0);
        tracep->declBus(c+1143,"top IFU_Lee Instr_IN", false,-1, 31,0);
        tracep->declQuad(c+1146,"top IFU_Lee PC_OUT", false,-1, 63,0);
        tracep->declBus(c+1143,"top IFU_Lee Instr_OUT", false,-1, 31,0);
        tracep->declBus(c+1143,"top HY_CU instr", false,-1, 31,0);
        tracep->declBit(c+98,"top HY_CU Branch_Yes_No", false,-1);
        tracep->declBus(c+70,"top HY_CU ALU_Control", false,-1, 3,0);
        tracep->declBus(c+97,"top HY_CU Inside_Control", false,-1, 3,0);
        tracep->declBus(c+69,"top HY_CU SEXT_Control", false,-1, 2,0);
        tracep->declBit(c+85,"top HY_CU RegWriteEnable", false,-1);
        tracep->declBit(c+86,"top HY_CU C_RS1_PC", false,-1);
        tracep->declBit(c+87,"top HY_CU C_RS2_imm", false,-1);
        tracep->declBit(c+88,"top HY_CU C_ALU_MEM", false,-1);
        tracep->declBit(c+89,"top HY_CU C_ALU_NPC_In", false,-1);
        tracep->declBus(c+90,"top HY_CU C_NPC_Branch_Jump", false,-1, 1,0);
        tracep->declBus(c+84,"top HY_CU MEM_Ctrl", false,-1, 3,0);
        tracep->declBit(c+83,"top HY_CU MEM_Enable", false,-1);
        tracep->declBus(c+1163,"top HY_CU ebreak_reg", false,-1, 7,0);
        tracep->declBus(c+1164,"top HY_CU instr_6_0", false,-1, 6,0);
        tracep->declBus(c+1165,"top HY_CU instr_14_12", false,-1, 2,0);
        tracep->declBus(c+1166,"top HY_CU instr_31_25", false,-1, 6,0);
        tracep->declBus(c+1167,"top HY_CU instr_31_26", false,-1, 5,0);
        tracep->declBit(c+1168,"top HY_CU Match_6_0_0010011", false,-1);
        tracep->declBit(c+1169,"top HY_CU Match_6_0_0111011", false,-1);
        tracep->declBit(c+1170,"top HY_CU Match_6_0_0110011", false,-1);
        tracep->declBit(c+1171,"top HY_CU Match_6_0_0011011", false,-1);
        tracep->declBit(c+1172,"top HY_CU Match_6_0_0000011", false,-1);
        tracep->declBit(c+1173,"top HY_CU Match_6_0_0100011", false,-1);
        tracep->declBit(c+1174,"top HY_CU Match_6_0_1100011", false,-1);
        tracep->declBit(c+1175,"top HY_CU Match_6_0_1101111", false,-1);
        tracep->declBit(c+1176,"top HY_CU Match_6_0_1100111", false,-1);
        tracep->declBit(c+1177,"top HY_CU Match_6_0_0010111", false,-1);
        tracep->declBit(c+1178,"top HY_CU Match_6_0_0110111", false,-1);
        tracep->declBit(c+1179,"top HY_CU Match_6_0_1110011", false,-1);
        tracep->declBit(c+1180,"top HY_CU Match_14_12_000", false,-1);
        tracep->declBit(c+1181,"top HY_CU Match_14_12_100", false,-1);
        tracep->declBit(c+1182,"top HY_CU Match_14_12_110", false,-1);
        tracep->declBit(c+1183,"top HY_CU Match_14_12_011", false,-1);
        tracep->declBit(c+1184,"top HY_CU Match_14_12_010", false,-1);
        tracep->declBit(c+1185,"top HY_CU Match_14_12_101", false,-1);
        tracep->declBit(c+1186,"top HY_CU Match_14_12_001", false,-1);
        tracep->declBit(c+1187,"top HY_CU Match_14_12_111", false,-1);
        tracep->declBit(c+1188,"top HY_CU Match_31_25_0000000", false,-1);
        tracep->declBit(c+99,"top HY_CU Match_31_25_0100000", false,-1);
        tracep->declBit(c+1189,"top HY_CU Match_31_25_0000001", false,-1);
        tracep->declBit(c+1190,"top HY_CU Match_31_26_000000", false,-1);
        tracep->declBit(c+1191,"top HY_CU Match_31_26_010000", false,-1);
        tracep->declBit(c+100,"top HY_CU addi", false,-1);
        tracep->declBit(c+101,"top HY_CU addiw", false,-1);
        tracep->declBit(c+102,"top HY_CU addw", false,-1);
        tracep->declBit(c+103,"top HY_CU subw", false,-1);
        tracep->declBit(c+104,"top HY_CU add", false,-1);
        tracep->declBit(c+105,"top HY_CU sub", false,-1);
        tracep->declBit(c+106,"top HY_CU mulw", false,-1);
        tracep->declBit(c+107,"top HY_CU divw", false,-1);
        tracep->declBit(c+108,"top HY_CU mul", false,-1);
        tracep->declBit(c+109,"top HY_CU remw", false,-1);
        tracep->declBit(c+110,"top HY_CU sltiu", false,-1);
        tracep->declBit(c+111,"top HY_CU sltu", false,-1);
        tracep->declBit(c+112,"top HY_CU slt", false,-1);
        tracep->declBit(c+113,"top HY_CU sraw", false,-1);
        tracep->declBit(c+114,"top HY_CU sllw", false,-1);
        tracep->declBit(c+115,"top HY_CU srlw", false,-1);
        tracep->declBit(c+116,"top HY_CU slli", false,-1);
        tracep->declBit(c+117,"top HY_CU srli", false,-1);
        tracep->declBit(c+118,"top HY_CU srai", false,-1);
        tracep->declBit(c+119,"top HY_CU srliw", false,-1);
        tracep->declBit(c+120,"top HY_CU slliw", false,-1);
        tracep->declBit(c+121,"top HY_CU sraiw", false,-1);
        tracep->declBit(c+122,"top HY_CU ld", false,-1);
        tracep->declBit(c+123,"top HY_CU lw", false,-1);
        tracep->declBit(c+124,"top HY_CU lbu", false,-1);
        tracep->declBit(c+125,"top HY_CU lh", false,-1);
        tracep->declBit(c+126,"top HY_CU lhu", false,-1);
        tracep->declBit(c+127,"top HY_CU sd", false,-1);
        tracep->declBit(c+128,"top HY_CU sw", false,-1);
        tracep->declBit(c+129,"top HY_CU sb", false,-1);
        tracep->declBit(c+130,"top HY_CU sh", false,-1);
        tracep->declBit(c+131,"top HY_CU andi", false,-1);
        tracep->declBit(c+132,"top HY_CU xori", false,-1);
        tracep->declBit(c+133,"top HY_CU bne", false,-1);
        tracep->declBit(c+134,"top HY_CU beq", false,-1);
        tracep->declBit(c+135,"top HY_CU bge", false,-1);
        tracep->declBit(c+136,"top HY_CU blt", false,-1);
        tracep->declBit(c+137,"top HY_CU bltu", false,-1);
        tracep->declBit(c+1175,"top HY_CU jal", false,-1);
        tracep->declBit(c+138,"top HY_CU jalr", false,-1);
        tracep->declBit(c+1177,"top HY_CU auipc", false,-1);
        tracep->declBit(c+1178,"top HY_CU lui", false,-1);
        tracep->declBit(c+1192,"top HY_CU ebreak", false,-1);
        tracep->declBit(c+139,"top HY_CU TypeI", false,-1);
        tracep->declBit(c+1193,"top HY_CU TypeU", false,-1);
        tracep->declBit(c+140,"top HY_CU TypeS", false,-1);
        tracep->declBit(c+1175,"top HY_CU TypeJ", false,-1);
        tracep->declBit(c+141,"top HY_CU TypeB", false,-1);
        tracep->declBit(c+142,"top HY_CU TypeR", false,-1);
        tracep->declBit(c+143,"top HY_CU ALU_Adder", false,-1);
        tracep->declBit(c+144,"top HY_CU ALU_Mul", false,-1);
        tracep->declBit(c+145,"top HY_CU ALU_Div", false,-1);
        tracep->declBit(c+146,"top HY_CU ALU_Compare", false,-1);
        tracep->declBit(c+147,"top HY_CU ALU_Shift", false,-1);
        tracep->declBit(c+148,"top HY_CU ALU_LS", false,-1);
        tracep->declBit(c+149,"top HY_CU ALU_LogicOpt", false,-1);
        tracep->declBit(c+141,"top HY_CU ALU_Branch", false,-1);
        tracep->declBit(c+1175,"top HY_CU ALU_Jump", false,-1);
        tracep->declBit(c+1177,"top HY_CU ALU_auipc", false,-1);
        tracep->declBit(c+1178,"top HY_CU ALU_lui", false,-1);
        tracep->declBit(c+1194,"top HY_CU ALUInternal_Control_0", false,-1);
        tracep->declBit(c+150,"top HY_CU ALUInternal_Control_1", false,-1);
        tracep->declBit(c+151,"top HY_CU ALUInternal_Control_2", false,-1);
        tracep->declBit(c+152,"top HY_CU ALUInternal_Control_3", false,-1);
        tracep->declBit(c+153,"top HY_CU ALUInternal_Control_4", false,-1);
        tracep->declBit(c+118,"top HY_CU ALUInternal_Control_5", false,-1);
        tracep->declBit(c+87,"top HY_CU ALU_Choose_imm", false,-1);
        tracep->declBit(c+86,"top HY_CU ALU_Choose_PC", false,-1);
        tracep->declBus(c+154,"top HY_CU func_signal", false,-1, 10,0);
        tracep->declBus(c+155,"top HY_CU ALU_inside_signal", false,-1, 5,0);
        tracep->declBus(c+1209,"top HY_CU IMMI", false,-1, 2,0);
        tracep->declBus(c+1210,"top HY_CU IMMU", false,-1, 2,0);
        tracep->declBus(c+1211,"top HY_CU IMMS", false,-1, 2,0);
        tracep->declBus(c+1212,"top HY_CU IMMJ", false,-1, 2,0);
        tracep->declBus(c+1213,"top HY_CU IMMB", false,-1, 2,0);
        tracep->declBus(c+1214,"top HY_CU MUX_Adder", false,-1, 3,0);
        tracep->declBus(c+1215,"top HY_CU MUX_Shift", false,-1, 3,0);
        tracep->declBus(c+1216,"top HY_CU MUX_Compare", false,-1, 3,0);
        tracep->declBus(c+1217,"top HY_CU MUX_DIV", false,-1, 3,0);
        tracep->declBus(c+1218,"top HY_CU MUX_Logic", false,-1, 3,0);
        tracep->declBus(c+1219,"top HY_CU MUX_MUL", false,-1, 3,0);
        tracep->declBus(c+1214,"top HY_CU Inside_0", false,-1, 3,0);
        tracep->declBus(c+1215,"top HY_CU Inside_1", false,-1, 3,0);
        tracep->declBus(c+1216,"top HY_CU Inside_2", false,-1, 3,0);
        tracep->declBus(c+1217,"top HY_CU Inside_3", false,-1, 3,0);
        tracep->declBus(c+1218,"top HY_CU Inside_4", false,-1, 3,0);
        tracep->declBus(c+1219,"top HY_CU Inside_5", false,-1, 3,0);
        tracep->declBus(c+1220,"top HY_CU ALU_Inside_choose NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1220,"top HY_CU ALU_Inside_choose KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1221,"top HY_CU ALU_Inside_choose DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+97,"top HY_CU ALU_Inside_choose out", false,-1, 3,0);
        tracep->declBus(c+155,"top HY_CU ALU_Inside_choose key", false,-1, 5,0);
        tracep->declBus(c+1222,"top HY_CU ALU_Inside_choose default_out", false,-1, 3,0);
        tracep->declQuad(c+1223,"top HY_CU ALU_Inside_choose lut", false,-1, 59,0);
        tracep->declBus(c+1220,"top HY_CU ALU_Inside_choose i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1220,"top HY_CU ALU_Inside_choose i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1221,"top HY_CU ALU_Inside_choose i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1225,"top HY_CU ALU_Inside_choose i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+97,"top HY_CU ALU_Inside_choose i0 out", false,-1, 3,0);
        tracep->declBus(c+155,"top HY_CU ALU_Inside_choose i0 key", false,-1, 5,0);
        tracep->declBus(c+1222,"top HY_CU ALU_Inside_choose i0 default_out", false,-1, 3,0);
        tracep->declQuad(c+1223,"top HY_CU ALU_Inside_choose i0 lut", false,-1, 59,0);
        tracep->declBus(c+1226,"top HY_CU ALU_Inside_choose i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+1+i*1,"top HY_CU ALU_Inside_choose i0 pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+7+i*1,"top HY_CU ALU_Inside_choose i0 key_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+13+i*1,"top HY_CU ALU_Inside_choose i0 data_list", true,(i+0), 3,0);}}
        tracep->declBus(c+156,"top HY_CU ALU_Inside_choose i0 lut_out", false,-1, 3,0);
        tracep->declBit(c+157,"top HY_CU ALU_Inside_choose i0 hit", false,-1);
        tracep->declBus(c+1227,"top HY_CU ALU_Inside_choose i0 i", false,-1, 31,0);
        tracep->declBus(c+1228,"top HY_CU func_choose NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1228,"top HY_CU func_choose KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1221,"top HY_CU func_choose DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+70,"top HY_CU func_choose out", false,-1, 3,0);
        tracep->declBus(c+154,"top HY_CU func_choose key", false,-1, 10,0);
        tracep->declBus(c+1222,"top HY_CU func_choose default_out", false,-1, 3,0);
        tracep->declArray(c+1229,"top HY_CU func_choose lut", false,-1, 164,0);
        tracep->declBus(c+1228,"top HY_CU func_choose i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1228,"top HY_CU func_choose i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1221,"top HY_CU func_choose i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1225,"top HY_CU func_choose i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+70,"top HY_CU func_choose i0 out", false,-1, 3,0);
        tracep->declBus(c+154,"top HY_CU func_choose i0 key", false,-1, 10,0);
        tracep->declBus(c+1222,"top HY_CU func_choose i0 default_out", false,-1, 3,0);
        tracep->declArray(c+1229,"top HY_CU func_choose i0 lut", false,-1, 164,0);
        tracep->declBus(c+1235,"top HY_CU func_choose i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+19+i*1,"top HY_CU func_choose i0 pair_list", true,(i+0), 14,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+30+i*1,"top HY_CU func_choose i0 key_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+41+i*1,"top HY_CU func_choose i0 data_list", true,(i+0), 3,0);}}
        tracep->declBus(c+158,"top HY_CU func_choose i0 lut_out", false,-1, 3,0);
        tracep->declBit(c+159,"top HY_CU func_choose i0 hit", false,-1);
        tracep->declBus(c+1236,"top HY_CU func_choose i0 i", false,-1, 31,0);
        tracep->declBus(c+1237,"top HY_CU CU_ImmType NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1237,"top HY_CU CU_ImmType KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1238,"top HY_CU CU_ImmType DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+69,"top HY_CU CU_ImmType out", false,-1, 2,0);
        tracep->declBus(c+160,"top HY_CU CU_ImmType key", false,-1, 4,0);
        tracep->declBus(c+1209,"top HY_CU CU_ImmType default_out", false,-1, 2,0);
        tracep->declQuad(c+1239,"top HY_CU CU_ImmType lut", false,-1, 39,0);
        tracep->declBus(c+1237,"top HY_CU CU_ImmType i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1237,"top HY_CU CU_ImmType i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1238,"top HY_CU CU_ImmType i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1225,"top HY_CU CU_ImmType i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+69,"top HY_CU CU_ImmType i0 out", false,-1, 2,0);
        tracep->declBus(c+160,"top HY_CU CU_ImmType i0 key", false,-1, 4,0);
        tracep->declBus(c+1209,"top HY_CU CU_ImmType i0 default_out", false,-1, 2,0);
        tracep->declQuad(c+1239,"top HY_CU CU_ImmType i0 lut", false,-1, 39,0);
        tracep->declBus(c+1241,"top HY_CU CU_ImmType i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+52+i*1,"top HY_CU CU_ImmType i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+57+i*1,"top HY_CU CU_ImmType i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+62+i*1,"top HY_CU CU_ImmType i0 data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+161,"top HY_CU CU_ImmType i0 lut_out", false,-1, 2,0);
        tracep->declBit(c+162,"top HY_CU CU_ImmType i0 hit", false,-1);
        tracep->declBus(c+1242,"top HY_CU CU_ImmType i0 i", false,-1, 31,0);
        tracep->declBus(c+1143,"top Sign_Extend Instr", false,-1, 31,0);
        tracep->declBus(c+69,"top Sign_Extend ControlUnit", false,-1, 2,0);
        tracep->declQuad(c+71,"top Sign_Extend SEXT_Out", false,-1, 63,0);
        tracep->declBus(c+1195,"top Sign_Extend immI", false,-1, 11,0);
        tracep->declBus(c+1196,"top Sign_Extend immU", false,-1, 31,0);
        tracep->declBus(c+163,"top Sign_Extend immS", false,-1, 11,0);
        tracep->declBus(c+164,"top Sign_Extend immJ", false,-1, 20,0);
        tracep->declBus(c+165,"top Sign_Extend immB", false,-1, 12,0);
        tracep->declBus(c+1237,"top Sign_Extend SEXT NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1238,"top Sign_Extend SEXT KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top Sign_Extend SEXT DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+71,"top Sign_Extend SEXT out", false,-1, 63,0);
        tracep->declBus(c+69,"top Sign_Extend SEXT key", false,-1, 2,0);
        tracep->declQuad(c+1243,"top Sign_Extend SEXT default_out", false,-1, 63,0);
        tracep->declArray(c+166,"top Sign_Extend SEXT lut", false,-1, 334,0);
        tracep->declBus(c+1237,"top Sign_Extend SEXT i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1238,"top Sign_Extend SEXT i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top Sign_Extend SEXT i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1225,"top Sign_Extend SEXT i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+71,"top Sign_Extend SEXT i0 out", false,-1, 63,0);
        tracep->declBus(c+69,"top Sign_Extend SEXT i0 key", false,-1, 2,0);
        tracep->declQuad(c+1243,"top Sign_Extend SEXT i0 default_out", false,-1, 63,0);
        tracep->declArray(c+166,"top Sign_Extend SEXT i0 lut", false,-1, 334,0);
        tracep->declBus(c+1245,"top Sign_Extend SEXT i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+177+i*3,"top Sign_Extend SEXT i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+192+i*1,"top Sign_Extend SEXT i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+197+i*2,"top Sign_Extend SEXT i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+207,"top Sign_Extend SEXT i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+209,"top Sign_Extend SEXT i0 hit", false,-1);
        tracep->declBus(c+1242,"top Sign_Extend SEXT i0 i", false,-1, 31,0);
        tracep->declBit(c+1141,"top HY_RegFile clk", false,-1);
        tracep->declBit(c+1142,"top HY_RegFile rst", false,-1);
        tracep->declBus(c+1197,"top HY_RegFile RS1", false,-1, 4,0);
        tracep->declBus(c+1198,"top HY_RegFile RS2", false,-1, 4,0);
        tracep->declBus(c+1199,"top HY_RegFile RD", false,-1, 4,0);
        tracep->declQuad(c+93,"top HY_RegFile RD_Back", false,-1, 63,0);
        tracep->declBit(c+85,"top HY_RegFile Enable_Control", false,-1);
        tracep->declQuad(c+73,"top HY_RegFile RS1_Reg", false,-1, 63,0);
        tracep->declQuad(c+75,"top HY_RegFile RS2_Reg", false,-1, 63,0);
        tracep->declQuad(c+555,"top HY_RegFile Zero", false,-1, 63,0);
        tracep->declQuad(c+557,"top HY_RegFile ra", false,-1, 63,0);
        tracep->declQuad(c+559,"top HY_RegFile sp", false,-1, 63,0);
        tracep->declQuad(c+561,"top HY_RegFile gp", false,-1, 63,0);
        tracep->declQuad(c+563,"top HY_RegFile tp", false,-1, 63,0);
        tracep->declQuad(c+565,"top HY_RegFile t0", false,-1, 63,0);
        tracep->declQuad(c+567,"top HY_RegFile t1", false,-1, 63,0);
        tracep->declQuad(c+569,"top HY_RegFile t2", false,-1, 63,0);
        tracep->declQuad(c+571,"top HY_RegFile s0", false,-1, 63,0);
        tracep->declQuad(c+573,"top HY_RegFile s1", false,-1, 63,0);
        tracep->declQuad(c+575,"top HY_RegFile a0", false,-1, 63,0);
        tracep->declQuad(c+577,"top HY_RegFile a1", false,-1, 63,0);
        tracep->declQuad(c+579,"top HY_RegFile a2", false,-1, 63,0);
        tracep->declQuad(c+581,"top HY_RegFile a3", false,-1, 63,0);
        tracep->declQuad(c+583,"top HY_RegFile a4", false,-1, 63,0);
        tracep->declQuad(c+585,"top HY_RegFile a5", false,-1, 63,0);
        tracep->declQuad(c+587,"top HY_RegFile a6", false,-1, 63,0);
        tracep->declQuad(c+589,"top HY_RegFile a7", false,-1, 63,0);
        tracep->declQuad(c+591,"top HY_RegFile s2", false,-1, 63,0);
        tracep->declQuad(c+593,"top HY_RegFile s3", false,-1, 63,0);
        tracep->declQuad(c+595,"top HY_RegFile s4", false,-1, 63,0);
        tracep->declQuad(c+597,"top HY_RegFile s5", false,-1, 63,0);
        tracep->declQuad(c+599,"top HY_RegFile s6", false,-1, 63,0);
        tracep->declQuad(c+601,"top HY_RegFile s7", false,-1, 63,0);
        tracep->declQuad(c+603,"top HY_RegFile s8", false,-1, 63,0);
        tracep->declQuad(c+605,"top HY_RegFile s9", false,-1, 63,0);
        tracep->declQuad(c+607,"top HY_RegFile s10", false,-1, 63,0);
        tracep->declQuad(c+609,"top HY_RegFile s11", false,-1, 63,0);
        tracep->declQuad(c+611,"top HY_RegFile t3", false,-1, 63,0);
        tracep->declQuad(c+613,"top HY_RegFile t4", false,-1, 63,0);
        tracep->declQuad(c+615,"top HY_RegFile t5", false,-1, 63,0);
        tracep->declQuad(c+617,"top HY_RegFile t6", false,-1, 63,0);
        tracep->declBus(c+1246,"top HY_RegFile RS1_Out NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1237,"top HY_RegFile RS1_Out KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top HY_RegFile RS1_Out DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+73,"top HY_RegFile RS1_Out out", false,-1, 63,0);
        tracep->declBus(c+1197,"top HY_RegFile RS1_Out key", false,-1, 4,0);
        tracep->declQuad(c+1243,"top HY_RegFile RS1_Out default_out", false,-1, 63,0);
        tracep->declArray(c+619,"top HY_RegFile RS1_Out lut", false,-1, 2207,0);
        tracep->declBus(c+1246,"top HY_RegFile RS1_Out i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1237,"top HY_RegFile RS1_Out i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top HY_RegFile RS1_Out i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1225,"top HY_RegFile RS1_Out i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+73,"top HY_RegFile RS1_Out i0 out", false,-1, 63,0);
        tracep->declBus(c+1197,"top HY_RegFile RS1_Out i0 key", false,-1, 4,0);
        tracep->declQuad(c+1243,"top HY_RegFile RS1_Out i0 default_out", false,-1, 63,0);
        tracep->declArray(c+619,"top HY_RegFile RS1_Out i0 lut", false,-1, 2207,0);
        tracep->declBus(c+1247,"top HY_RegFile RS1_Out i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declArray(c+688+i*3,"top HY_RegFile RS1_Out i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+784+i*1,"top HY_RegFile RS1_Out i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+816+i*2,"top HY_RegFile RS1_Out i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+210,"top HY_RegFile RS1_Out i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+212,"top HY_RegFile RS1_Out i0 hit", false,-1);
        tracep->declBus(c+1248,"top HY_RegFile RS1_Out i0 i", false,-1, 31,0);
        tracep->declBus(c+1246,"top HY_RegFile RS2_Out NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1237,"top HY_RegFile RS2_Out KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top HY_RegFile RS2_Out DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+75,"top HY_RegFile RS2_Out out", false,-1, 63,0);
        tracep->declBus(c+1198,"top HY_RegFile RS2_Out key", false,-1, 4,0);
        tracep->declQuad(c+1243,"top HY_RegFile RS2_Out default_out", false,-1, 63,0);
        tracep->declArray(c+880,"top HY_RegFile RS2_Out lut", false,-1, 2207,0);
        tracep->declBus(c+1246,"top HY_RegFile RS2_Out i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1237,"top HY_RegFile RS2_Out i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top HY_RegFile RS2_Out i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1225,"top HY_RegFile RS2_Out i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+75,"top HY_RegFile RS2_Out i0 out", false,-1, 63,0);
        tracep->declBus(c+1198,"top HY_RegFile RS2_Out i0 key", false,-1, 4,0);
        tracep->declQuad(c+1243,"top HY_RegFile RS2_Out i0 default_out", false,-1, 63,0);
        tracep->declArray(c+880,"top HY_RegFile RS2_Out i0 lut", false,-1, 2207,0);
        tracep->declBus(c+1247,"top HY_RegFile RS2_Out i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declArray(c+949+i*3,"top HY_RegFile RS2_Out i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+1045+i*1,"top HY_RegFile RS2_Out i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1077+i*2,"top HY_RegFile RS2_Out i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+213,"top HY_RegFile RS2_Out i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+215,"top HY_RegFile RS2_Out i0 hit", false,-1);
        tracep->declBus(c+1248,"top HY_RegFile RS2_Out i0 i", false,-1, 31,0);
        tracep->declQuad(c+95,"top HY_MEM MEM_Address", false,-1, 63,0);
        tracep->declQuad(c+75,"top HY_MEM Data_Write", false,-1, 63,0);
        tracep->declBit(c+83,"top HY_MEM MEM_Enable", false,-1);
        tracep->declBus(c+84,"top HY_MEM Ctrl", false,-1, 3,0);
        tracep->declQuad(c+91,"top HY_MEM MEM_Data_out", false,-1, 63,0);
        tracep->declBus(c+1214,"top HY_MEM Load_8Bytes", false,-1, 3,0);
        tracep->declBus(c+1215,"top HY_MEM Load_2Bytes", false,-1, 3,0);
        tracep->declBus(c+1216,"top HY_MEM Load_1Bytes", false,-1, 3,0);
        tracep->declBus(c+1217,"top HY_MEM Load_4Bytes_SEXT", false,-1, 3,0);
        tracep->declBus(c+1218,"top HY_MEM Load_2Bytes_SEXT", false,-1, 3,0);
        tracep->declBus(c+1249,"top HY_MEM Store_8Byte", false,-1, 3,0);
        tracep->declBus(c+1250,"top HY_MEM Store_4Byte", false,-1, 3,0);
        tracep->declBus(c+1251,"top HY_MEM Store_2Byte", false,-1, 3,0);
        tracep->declBus(c+1252,"top HY_MEM Store_1Byte", false,-1, 3,0);
        tracep->declQuad(c+216,"top HY_MEM Data_From_MEM", false,-1, 63,0);
        tracep->declQuad(c+75,"top HY_MEM Data_To_MEM", false,-1, 63,0);
        tracep->declBus(c+1253,"top MUX_Reg_PC_2ALU NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1225,"top MUX_Reg_PC_2ALU KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top MUX_Reg_PC_2ALU DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+77,"top MUX_Reg_PC_2ALU out", false,-1, 63,0);
        tracep->declBus(c+86,"top MUX_Reg_PC_2ALU key", false,-1, 0,0);
        tracep->declQuad(c+1243,"top MUX_Reg_PC_2ALU default_out", false,-1, 63,0);
        tracep->declArray(c+218,"top MUX_Reg_PC_2ALU lut", false,-1, 129,0);
        tracep->declBus(c+1253,"top MUX_Reg_PC_2ALU i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1225,"top MUX_Reg_PC_2ALU i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top MUX_Reg_PC_2ALU i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1225,"top MUX_Reg_PC_2ALU i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+77,"top MUX_Reg_PC_2ALU i0 out", false,-1, 63,0);
        tracep->declBus(c+86,"top MUX_Reg_PC_2ALU i0 key", false,-1, 0,0);
        tracep->declQuad(c+1243,"top MUX_Reg_PC_2ALU i0 default_out", false,-1, 63,0);
        tracep->declArray(c+218,"top MUX_Reg_PC_2ALU i0 lut", false,-1, 129,0);
        tracep->declBus(c+1254,"top MUX_Reg_PC_2ALU i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+223+i*3,"top MUX_Reg_PC_2ALU i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+229+i*1,"top MUX_Reg_PC_2ALU i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+231+i*2,"top MUX_Reg_PC_2ALU i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+235,"top MUX_Reg_PC_2ALU i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+237,"top MUX_Reg_PC_2ALU i0 hit", false,-1);
        tracep->declBus(c+1255,"top MUX_Reg_PC_2ALU i0 i", false,-1, 31,0);
        tracep->declBus(c+1253,"top MUX_RS2_imm_2ALU NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1225,"top MUX_RS2_imm_2ALU KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top MUX_RS2_imm_2ALU DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+79,"top MUX_RS2_imm_2ALU out", false,-1, 63,0);
        tracep->declBus(c+87,"top MUX_RS2_imm_2ALU key", false,-1, 0,0);
        tracep->declQuad(c+1243,"top MUX_RS2_imm_2ALU default_out", false,-1, 63,0);
        tracep->declArray(c+238,"top MUX_RS2_imm_2ALU lut", false,-1, 129,0);
        tracep->declBus(c+1253,"top MUX_RS2_imm_2ALU i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1225,"top MUX_RS2_imm_2ALU i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top MUX_RS2_imm_2ALU i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1225,"top MUX_RS2_imm_2ALU i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+79,"top MUX_RS2_imm_2ALU i0 out", false,-1, 63,0);
        tracep->declBus(c+87,"top MUX_RS2_imm_2ALU i0 key", false,-1, 0,0);
        tracep->declQuad(c+1243,"top MUX_RS2_imm_2ALU i0 default_out", false,-1, 63,0);
        tracep->declArray(c+238,"top MUX_RS2_imm_2ALU i0 lut", false,-1, 129,0);
        tracep->declBus(c+1254,"top MUX_RS2_imm_2ALU i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+243+i*3,"top MUX_RS2_imm_2ALU i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+249+i*1,"top MUX_RS2_imm_2ALU i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+251+i*2,"top MUX_RS2_imm_2ALU i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+255,"top MUX_RS2_imm_2ALU i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+257,"top MUX_RS2_imm_2ALU i0 hit", false,-1);
        tracep->declBus(c+1255,"top MUX_RS2_imm_2ALU i0 i", false,-1, 31,0);
        tracep->declBus(c+1253,"top MUX_ALU_MEM NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1225,"top MUX_ALU_MEM KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top MUX_ALU_MEM DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+81,"top MUX_ALU_MEM out", false,-1, 63,0);
        tracep->declBus(c+88,"top MUX_ALU_MEM key", false,-1, 0,0);
        tracep->declQuad(c+1243,"top MUX_ALU_MEM default_out", false,-1, 63,0);
        tracep->declArray(c+258,"top MUX_ALU_MEM lut", false,-1, 129,0);
        tracep->declBus(c+1253,"top MUX_ALU_MEM i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1225,"top MUX_ALU_MEM i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top MUX_ALU_MEM i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1225,"top MUX_ALU_MEM i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+81,"top MUX_ALU_MEM i0 out", false,-1, 63,0);
        tracep->declBus(c+88,"top MUX_ALU_MEM i0 key", false,-1, 0,0);
        tracep->declQuad(c+1243,"top MUX_ALU_MEM i0 default_out", false,-1, 63,0);
        tracep->declArray(c+258,"top MUX_ALU_MEM i0 lut", false,-1, 129,0);
        tracep->declBus(c+1254,"top MUX_ALU_MEM i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+263+i*3,"top MUX_ALU_MEM i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+269+i*1,"top MUX_ALU_MEM i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+271+i*2,"top MUX_ALU_MEM i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+275,"top MUX_ALU_MEM i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+277,"top MUX_ALU_MEM i0 hit", false,-1);
        tracep->declBus(c+1255,"top MUX_ALU_MEM i0 i", false,-1, 31,0);
        tracep->declBus(c+1253,"top MUX_PC_ALU NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1225,"top MUX_PC_ALU KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top MUX_PC_ALU DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+93,"top MUX_PC_ALU out", false,-1, 63,0);
        tracep->declBus(c+89,"top MUX_PC_ALU key", false,-1, 0,0);
        tracep->declQuad(c+1243,"top MUX_PC_ALU default_out", false,-1, 63,0);
        tracep->declArray(c+278,"top MUX_PC_ALU lut", false,-1, 129,0);
        tracep->declBus(c+1253,"top MUX_PC_ALU i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1225,"top MUX_PC_ALU i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top MUX_PC_ALU i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1225,"top MUX_PC_ALU i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+93,"top MUX_PC_ALU i0 out", false,-1, 63,0);
        tracep->declBus(c+89,"top MUX_PC_ALU i0 key", false,-1, 0,0);
        tracep->declQuad(c+1243,"top MUX_PC_ALU i0 default_out", false,-1, 63,0);
        tracep->declArray(c+278,"top MUX_PC_ALU i0 lut", false,-1, 129,0);
        tracep->declBus(c+1254,"top MUX_PC_ALU i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+283+i*3,"top MUX_PC_ALU i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+289+i*1,"top MUX_PC_ALU i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+291+i*2,"top MUX_PC_ALU i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+295,"top MUX_PC_ALU i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+297,"top MUX_PC_ALU i0 hit", false,-1);
        tracep->declBus(c+1255,"top MUX_PC_ALU i0 i", false,-1, 31,0);
        tracep->declBus(c+1238,"top MUX_NPC_Branch_Jump NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1253,"top MUX_NPC_Branch_Jump KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top MUX_NPC_Branch_Jump DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+67,"top MUX_NPC_Branch_Jump out", false,-1, 63,0);
        tracep->declBus(c+90,"top MUX_NPC_Branch_Jump key", false,-1, 1,0);
        tracep->declQuad(c+1243,"top MUX_NPC_Branch_Jump default_out", false,-1, 63,0);
        tracep->declArray(c+298,"top MUX_NPC_Branch_Jump lut", false,-1, 197,0);
        tracep->declBus(c+1238,"top MUX_NPC_Branch_Jump i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1253,"top MUX_NPC_Branch_Jump i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top MUX_NPC_Branch_Jump i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1225,"top MUX_NPC_Branch_Jump i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+67,"top MUX_NPC_Branch_Jump i0 out", false,-1, 63,0);
        tracep->declBus(c+90,"top MUX_NPC_Branch_Jump i0 key", false,-1, 1,0);
        tracep->declQuad(c+1243,"top MUX_NPC_Branch_Jump i0 default_out", false,-1, 63,0);
        tracep->declArray(c+298,"top MUX_NPC_Branch_Jump i0 lut", false,-1, 197,0);
        tracep->declBus(c+1256,"top MUX_NPC_Branch_Jump i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+305+i*3,"top MUX_NPC_Branch_Jump i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+314+i*1,"top MUX_NPC_Branch_Jump i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+317+i*2,"top MUX_NPC_Branch_Jump i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+323,"top MUX_NPC_Branch_Jump i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+325,"top MUX_NPC_Branch_Jump i0 hit", false,-1);
        tracep->declBus(c+1257,"top MUX_NPC_Branch_Jump i0 i", false,-1, 31,0);
        tracep->declQuad(c+551,"top branch_add current_pc", false,-1, 63,0);
        tracep->declQuad(c+71,"top branch_add imm", false,-1, 63,0);
        tracep->declQuad(c+1161,"top branch_add new_pc", false,-1, 63,0);
        tracep->declQuad(c+77,"top HY_ALU_top src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top HY_ALU_top src2", false,-1, 63,0);
        tracep->declBus(c+70,"top HY_ALU_top func_control", false,-1, 3,0);
        tracep->declBus(c+97,"top HY_ALU_top inner_control", false,-1, 3,0);
        tracep->declQuad(c+95,"top HY_ALU_top result_out", false,-1, 63,0);
        tracep->declBus(c+1214,"top HY_ALU_top MUX_Adder", false,-1, 3,0);
        tracep->declBus(c+1215,"top HY_ALU_top MUX_Shift", false,-1, 3,0);
        tracep->declBus(c+1216,"top HY_ALU_top MUX_Compare", false,-1, 3,0);
        tracep->declBus(c+1217,"top HY_ALU_top MUX_DIV", false,-1, 3,0);
        tracep->declBus(c+1218,"top HY_ALU_top MUX_Logic", false,-1, 3,0);
        tracep->declBus(c+1219,"top HY_ALU_top MUX_MUL", false,-1, 3,0);
        tracep->declBus(c+1258,"top HY_ALU_top auipc", false,-1, 3,0);
        tracep->declBus(c+1259,"top HY_ALU_top lui", false,-1, 3,0);
        tracep->declQuad(c+326,"top HY_ALU_top Adder_out", false,-1, 63,0);
        tracep->declQuad(c+328,"top HY_ALU_top Shift_out", false,-1, 63,0);
        tracep->declQuad(c+330,"top HY_ALU_top Compare_out", false,-1, 63,0);
        tracep->declQuad(c+332,"top HY_ALU_top DIV_out", false,-1, 63,0);
        tracep->declQuad(c+334,"top HY_ALU_top Logic_out", false,-1, 63,0);
        tracep->declQuad(c+336,"top HY_ALU_top MUL_out", false,-1, 63,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_adder src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top HY_ALU_top ALU_adder src2", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_adder control", false,-1, 3,0);
        tracep->declQuad(c+326,"top HY_ALU_top ALU_adder result_out", false,-1, 63,0);
        tracep->declQuad(c+338,"top HY_ALU_top ALU_adder resultAdd", false,-1, 63,0);
        tracep->declQuad(c+340,"top HY_ALU_top ALU_adder resultSub", false,-1, 63,0);
        tracep->declBus(c+1237,"top HY_ALU_top ALU_adder Adder_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1221,"top HY_ALU_top ALU_adder Adder_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top HY_ALU_top ALU_adder Adder_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+326,"top HY_ALU_top ALU_adder Adder_mux out", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_adder Adder_mux key", false,-1, 3,0);
        tracep->declQuad(c+338,"top HY_ALU_top ALU_adder Adder_mux default_out", false,-1, 63,0);
        tracep->declArray(c+342,"top HY_ALU_top ALU_adder Adder_mux lut", false,-1, 339,0);
        tracep->declBus(c+1237,"top HY_ALU_top ALU_adder Adder_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1221,"top HY_ALU_top ALU_adder Adder_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top HY_ALU_top ALU_adder Adder_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1225,"top HY_ALU_top ALU_adder Adder_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+326,"top HY_ALU_top ALU_adder Adder_mux i0 out", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_adder Adder_mux i0 key", false,-1, 3,0);
        tracep->declQuad(c+338,"top HY_ALU_top ALU_adder Adder_mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+342,"top HY_ALU_top ALU_adder Adder_mux i0 lut", false,-1, 339,0);
        tracep->declBus(c+1260,"top HY_ALU_top ALU_adder Adder_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+353+i*3,"top HY_ALU_top ALU_adder Adder_mux i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+368+i*1,"top HY_ALU_top ALU_adder Adder_mux i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+373+i*2,"top HY_ALU_top ALU_adder Adder_mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+383,"top HY_ALU_top ALU_adder Adder_mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+385,"top HY_ALU_top ALU_adder Adder_mux i0 hit", false,-1);
        tracep->declBus(c+1242,"top HY_ALU_top ALU_adder Adder_mux i0 i", false,-1, 31,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_mul src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top HY_ALU_top ALU_mul src2", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_mul control", false,-1, 3,0);
        tracep->declQuad(c+336,"top HY_ALU_top ALU_mul result_out", false,-1, 63,0);
        tracep->declQuad(c+386,"top HY_ALU_top ALU_mul result", false,-1, 63,0);
        tracep->declBus(c+1253,"top HY_ALU_top ALU_mul MUX_mul NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1221,"top HY_ALU_top ALU_mul MUX_mul KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top HY_ALU_top ALU_mul MUX_mul DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+336,"top HY_ALU_top ALU_mul MUX_mul out", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_mul MUX_mul key", false,-1, 3,0);
        tracep->declQuad(c+1243,"top HY_ALU_top ALU_mul MUX_mul default_out", false,-1, 63,0);
        tracep->declArray(c+388,"top HY_ALU_top ALU_mul MUX_mul lut", false,-1, 135,0);
        tracep->declBus(c+1253,"top HY_ALU_top ALU_mul MUX_mul i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1221,"top HY_ALU_top ALU_mul MUX_mul i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top HY_ALU_top ALU_mul MUX_mul i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1225,"top HY_ALU_top ALU_mul MUX_mul i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+336,"top HY_ALU_top ALU_mul MUX_mul i0 out", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_mul MUX_mul i0 key", false,-1, 3,0);
        tracep->declQuad(c+1243,"top HY_ALU_top ALU_mul MUX_mul i0 default_out", false,-1, 63,0);
        tracep->declArray(c+388,"top HY_ALU_top ALU_mul MUX_mul i0 lut", false,-1, 135,0);
        tracep->declBus(c+1260,"top HY_ALU_top ALU_mul MUX_mul i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+393+i*3,"top HY_ALU_top ALU_mul MUX_mul i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+399+i*1,"top HY_ALU_top ALU_mul MUX_mul i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+401+i*2,"top HY_ALU_top ALU_mul MUX_mul i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+405,"top HY_ALU_top ALU_mul MUX_mul i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+407,"top HY_ALU_top ALU_mul MUX_mul i0 hit", false,-1);
        tracep->declBus(c+1255,"top HY_ALU_top ALU_mul MUX_mul i0 i", false,-1, 31,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_Logic src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top HY_ALU_top ALU_Logic src2", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_Logic ControlOpt", false,-1, 3,0);
        tracep->declQuad(c+334,"top HY_ALU_top ALU_Logic result_out", false,-1, 63,0);
        tracep->declQuad(c+408,"top HY_ALU_top ALU_Logic result_and", false,-1, 63,0);
        tracep->declQuad(c+410,"top HY_ALU_top ALU_Logic result_xor", false,-1, 63,0);
        tracep->declQuad(c+412,"top HY_ALU_top ALU_Logic result_or", false,-1, 63,0);
        tracep->declBus(c+1238,"top HY_ALU_top ALU_Logic LogicOpt_Mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1221,"top HY_ALU_top ALU_Logic LogicOpt_Mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top HY_ALU_top ALU_Logic LogicOpt_Mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+334,"top HY_ALU_top ALU_Logic LogicOpt_Mux out", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_Logic LogicOpt_Mux key", false,-1, 3,0);
        tracep->declQuad(c+1243,"top HY_ALU_top ALU_Logic LogicOpt_Mux default_out", false,-1, 63,0);
        tracep->declArray(c+414,"top HY_ALU_top ALU_Logic LogicOpt_Mux lut", false,-1, 203,0);
        tracep->declBus(c+1238,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1221,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1225,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+334,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 out", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 key", false,-1, 3,0);
        tracep->declQuad(c+1243,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+414,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 lut", false,-1, 203,0);
        tracep->declBus(c+1260,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+421+i*3,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+430+i*1,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+433+i*2,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+439,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+441,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 hit", false,-1);
        tracep->declBus(c+1257,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 i", false,-1, 31,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_Shift src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top HY_ALU_top ALU_Shift src2", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_Shift shift_control", false,-1, 3,0);
        tracep->declQuad(c+328,"top HY_ALU_top ALU_Shift shift_out", false,-1, 63,0);
        tracep->declBus(c+1214,"top HY_ALU_top ALU_Shift ArithRight32", false,-1, 3,0);
        tracep->declBus(c+1215,"top HY_ALU_top ALU_Shift LogicalRight32", false,-1, 3,0);
        tracep->declBus(c+1216,"top HY_ALU_top ALU_Shift LogicalLeft32", false,-1, 3,0);
        tracep->declBus(c+1217,"top HY_ALU_top ALU_Shift LogicalRight64", false,-1, 3,0);
        tracep->declBus(c+1218,"top HY_ALU_top ALU_Shift LogicalLeft64", false,-1, 3,0);
        tracep->declBus(c+1219,"top HY_ALU_top ALU_Shift ArithRight64", false,-1, 3,0);
        tracep->declQuad(c+442,"top HY_ALU_top ALU_Shift buffer", false,-1, 63,0);
        tracep->declQuad(c+444,"top HY_ALU_top ALU_Shift buffer1", false,-1, 63,0);
        tracep->declQuad(c+446,"top HY_ALU_top ALU_Shift buffer2", false,-1, 63,0);
        tracep->declQuad(c+448,"top HY_ALU_top ALU_Shift buffer3", false,-1, 63,0);
        tracep->declQuad(c+450,"top HY_ALU_top ALU_Shift buffer4", false,-1, 63,0);
        tracep->declQuad(c+452,"top HY_ALU_top ALU_Shift buffer5", false,-1, 63,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_Compare src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top HY_ALU_top ALU_Compare src2", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_Compare Compare_Control", false,-1, 3,0);
        tracep->declQuad(c+330,"top HY_ALU_top ALU_Compare Compare_Result", false,-1, 63,0);
        tracep->declBus(c+1214,"top HY_ALU_top ALU_Compare MUX_neq_unsigned", false,-1, 3,0);
        tracep->declBus(c+1215,"top HY_ALU_top ALU_Compare MUX_eq_unsigned", false,-1, 3,0);
        tracep->declBus(c+1216,"top HY_ALU_top ALU_Compare MUX_more_eq_signed", false,-1, 3,0);
        tracep->declBus(c+1217,"top HY_ALU_top ALU_Compare MUX_less_signed", false,-1, 3,0);
        tracep->declBus(c+1218,"top HY_ALU_top ALU_Compare MUX_less_unsigned", false,-1, 3,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_Compare S_src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top HY_ALU_top ALU_Compare S_src2", false,-1, 63,0);
        tracep->declBit(c+454,"top HY_ALU_top ALU_Compare non_eq_unsigned", false,-1);
        tracep->declBit(c+455,"top HY_ALU_top ALU_Compare eq_unsigned", false,-1);
        tracep->declBit(c+456,"top HY_ALU_top ALU_Compare more_eq_signed", false,-1);
        tracep->declBit(c+457,"top HY_ALU_top ALU_Compare less_signed", false,-1);
        tracep->declBit(c+458,"top HY_ALU_top ALU_Compare less_unsigned", false,-1);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_DIV src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top HY_ALU_top ALU_DIV src2", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_DIV control", false,-1, 3,0);
        tracep->declQuad(c+332,"top HY_ALU_top ALU_DIV result_out", false,-1, 63,0);
        tracep->declBus(c+459,"top HY_ALU_top ALU_DIV S_src1", false,-1, 31,0);
        tracep->declBus(c+460,"top HY_ALU_top ALU_DIV S_src2", false,-1, 31,0);
        tracep->declBus(c+461,"top HY_ALU_top ALU_DIV divw", false,-1, 31,0);
        tracep->declBus(c+462,"top HY_ALU_top ALU_DIV remw", false,-1, 31,0);
        tracep->declBus(c+1253,"top HY_ALU_top ALU_DIV DIV NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1221,"top HY_ALU_top ALU_DIV DIV KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top HY_ALU_top ALU_DIV DIV DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+332,"top HY_ALU_top ALU_DIV DIV out", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_DIV DIV key", false,-1, 3,0);
        tracep->declQuad(c+1243,"top HY_ALU_top ALU_DIV DIV default_out", false,-1, 63,0);
        tracep->declArray(c+463,"top HY_ALU_top ALU_DIV DIV lut", false,-1, 135,0);
        tracep->declBus(c+1253,"top HY_ALU_top ALU_DIV DIV i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1221,"top HY_ALU_top ALU_DIV DIV i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top HY_ALU_top ALU_DIV DIV i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1225,"top HY_ALU_top ALU_DIV DIV i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+332,"top HY_ALU_top ALU_DIV DIV i0 out", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_DIV DIV i0 key", false,-1, 3,0);
        tracep->declQuad(c+1243,"top HY_ALU_top ALU_DIV DIV i0 default_out", false,-1, 63,0);
        tracep->declArray(c+463,"top HY_ALU_top ALU_DIV DIV i0 lut", false,-1, 135,0);
        tracep->declBus(c+1260,"top HY_ALU_top ALU_DIV DIV i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+468+i*3,"top HY_ALU_top ALU_DIV DIV i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+474+i*1,"top HY_ALU_top ALU_DIV DIV i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+476+i*2,"top HY_ALU_top ALU_DIV DIV i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+480,"top HY_ALU_top ALU_DIV DIV i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+482,"top HY_ALU_top ALU_DIV DIV i0 hit", false,-1);
        tracep->declBus(c+1255,"top HY_ALU_top ALU_DIV DIV i0 i", false,-1, 31,0);
        tracep->declBus(c+1241,"top HY_ALU_top Adder_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1221,"top HY_ALU_top Adder_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top HY_ALU_top Adder_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+95,"top HY_ALU_top Adder_mux out", false,-1, 63,0);
        tracep->declBus(c+70,"top HY_ALU_top Adder_mux key", false,-1, 3,0);
        tracep->declQuad(c+1243,"top HY_ALU_top Adder_mux default_out", false,-1, 63,0);
        tracep->declArray(c+483,"top HY_ALU_top Adder_mux lut", false,-1, 543,0);
        tracep->declBus(c+1241,"top HY_ALU_top Adder_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1221,"top HY_ALU_top Adder_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1205,"top HY_ALU_top Adder_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1225,"top HY_ALU_top Adder_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+95,"top HY_ALU_top Adder_mux i0 out", false,-1, 63,0);
        tracep->declBus(c+70,"top HY_ALU_top Adder_mux i0 key", false,-1, 3,0);
        tracep->declQuad(c+1243,"top HY_ALU_top Adder_mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+483,"top HY_ALU_top Adder_mux i0 lut", false,-1, 543,0);
        tracep->declBus(c+1260,"top HY_ALU_top Adder_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+500+i*3,"top HY_ALU_top Adder_mux i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+524+i*1,"top HY_ALU_top Adder_mux i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+532+i*2,"top HY_ALU_top Adder_mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+548,"top HY_ALU_top Adder_mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+550,"top HY_ALU_top Adder_mux i0 hit", false,-1);
        tracep->declBus(c+1261,"top HY_ALU_top Adder_mux i0 i", false,-1, 31,0);
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
    VlWide<6>/*191:0*/ __Vtemp1799;
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
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__PC_Next_Next),64);
        tracep->fullCData(oldp+69,(vlSelf->top__DOT__SEXT_Control),3);
        tracep->fullCData(oldp+70,(vlSelf->top__DOT__ALU_Control_wire),4);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__SEXT_Connector),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__RS1_Connector),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__RS2_Connector),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__MUX_ALU_MEM_Result),64);
        tracep->fullBit(oldp+83,((((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__ld) 
                                             | (IData)(vlSelf->top__DOT__HY_CU__DOT__lhu)) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__lbu)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__lh)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__sd)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                  | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))));
        tracep->fullCData(oldp+84,(vlSelf->top__DOT__MEM_Ctrl_connector),4);
        tracep->fullBit(oldp+85,(vlSelf->top__DOT__WriteBack_Enable));
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_PC));
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__HY_CU__DOT__ALU_Choose_imm));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__C_ALU_MEM_Connector));
        tracep->fullBit(oldp+89,(vlSelf->top__DOT__C_ALU_NPC_In_Connector));
        tracep->fullCData(oldp+90,(vlSelf->top__DOT__C_NPC_Branch_Jump_Connector),2);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__MEM_Result_Connector),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__Write_Back_Reg),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__ALU_Result_Connector),64);
        tracep->fullCData(oldp+97,(vlSelf->top__DOT__Insider_Control_Connector),4);
        tracep->fullBit(oldp+98,((1U & (IData)(vlSelf->top__DOT__ALU_Result_Connector))));
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__HY_CU__DOT__Match_31_25_0100000));
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__HY_CU__DOT__addi));
        tracep->fullBit(oldp+101,(vlSelf->top__DOT__HY_CU__DOT__addiw));
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__HY_CU__DOT__addw));
        tracep->fullBit(oldp+103,(vlSelf->top__DOT__HY_CU__DOT__subw));
        tracep->fullBit(oldp+104,(vlSelf->top__DOT__HY_CU__DOT__add));
        tracep->fullBit(oldp+105,(vlSelf->top__DOT__HY_CU__DOT__sub));
        tracep->fullBit(oldp+106,(vlSelf->top__DOT__HY_CU__DOT__mulw));
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__HY_CU__DOT__divw));
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__HY_CU__DOT__mul));
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__HY_CU__DOT__remw));
        tracep->fullBit(oldp+110,(vlSelf->top__DOT__HY_CU__DOT__sltiu));
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__HY_CU__DOT__sltu));
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__HY_CU__DOT__slt));
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__HY_CU__DOT__sraw));
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__HY_CU__DOT__sllw));
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__HY_CU__DOT__srlw));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__HY_CU__DOT__slli));
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__HY_CU__DOT__srli));
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__HY_CU__DOT__srai));
        tracep->fullBit(oldp+119,(vlSelf->top__DOT__HY_CU__DOT__srliw));
        tracep->fullBit(oldp+120,(vlSelf->top__DOT__HY_CU__DOT__slliw));
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__HY_CU__DOT__sraiw));
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__HY_CU__DOT__ld));
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__HY_CU__DOT__lw));
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__HY_CU__DOT__lbu));
        tracep->fullBit(oldp+125,(vlSelf->top__DOT__HY_CU__DOT__lh));
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__HY_CU__DOT__lhu));
        tracep->fullBit(oldp+127,(vlSelf->top__DOT__HY_CU__DOT__sd));
        tracep->fullBit(oldp+128,(vlSelf->top__DOT__HY_CU__DOT__sw));
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__HY_CU__DOT__sb));
        tracep->fullBit(oldp+130,(vlSelf->top__DOT__HY_CU__DOT__sh));
        tracep->fullBit(oldp+131,(vlSelf->top__DOT__HY_CU__DOT__andi));
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__HY_CU__DOT__xori));
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__HY_CU__DOT__bne));
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__HY_CU__DOT__beq));
        tracep->fullBit(oldp+135,(vlSelf->top__DOT__HY_CU__DOT__bge));
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__HY_CU__DOT__blt));
        tracep->fullBit(oldp+137,(vlSelf->top__DOT__HY_CU__DOT__bltu));
        tracep->fullBit(oldp+138,(vlSelf->top__DOT__HY_CU__DOT__jalr));
        tracep->fullBit(oldp+139,((((((((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
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
        tracep->fullBit(oldp+140,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__sd) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))));
        tracep->fullBit(oldp+141,((((((IData)(vlSelf->top__DOT__HY_CU__DOT__bne) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__beq)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu))));
        tracep->fullBit(oldp+142,((((((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addw) 
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
        tracep->fullBit(oldp+143,((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__addiw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__addw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__subw)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sub)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr))));
        tracep->fullBit(oldp+144,(((IData)(vlSelf->top__DOT__HY_CU__DOT__mulw) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul))));
        tracep->fullBit(oldp+145,(((IData)(vlSelf->top__DOT__HY_CU__DOT__divw) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw))));
        tracep->fullBit(oldp+146,((((IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt))));
        tracep->fullBit(oldp+147,((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sraw) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__srlw)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__srai)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__srliw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraiw))));
        tracep->fullBit(oldp+148,((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__ld) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__lbu)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__lh)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__lhu)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sd)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))));
        tracep->fullBit(oldp+149,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__andi) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT___and))));
        tracep->fullBit(oldp+150,((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sub) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__beq)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__srliw)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__srlw))));
        tracep->fullBit(oldp+151,((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addiw) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__addw))));
        tracep->fullBit(oldp+152,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__subw) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt))));
        tracep->fullBit(oldp+153,((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr))));
        tracep->fullSData(oldp+154,(vlSelf->top__DOT__HY_CU__DOT__func_signal),11);
        tracep->fullCData(oldp+155,(vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal),6);
        tracep->fullCData(oldp+156,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out),4);
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+158,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out),4);
        tracep->fullBit(oldp+159,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+160,(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2),5);
        tracep->fullCData(oldp+161,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out),3);
        tracep->fullBit(oldp+162,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit));
        tracep->fullSData(oldp+163,(vlSelf->top__DOT__Sign_Extend__DOT__immS),12);
        tracep->fullIData(oldp+164,(vlSelf->top__DOT__Sign_Extend__DOT__immJ),21);
        tracep->fullSData(oldp+165,(vlSelf->top__DOT__Sign_Extend__DOT__immB),13);
        tracep->fullWData(oldp+166,(vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4),335);
        tracep->fullWData(oldp+177,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+180,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+183,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+186,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+189,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+192,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+193,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+194,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+195,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+196,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[4]),3);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+209,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+212,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+215,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__HY_MEM__DOT__Data_From_MEM),64);
        tracep->fullWData(oldp+218,(vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4),130);
        tracep->fullWData(oldp+223,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+226,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+229,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+230,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+231,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+237,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+238,(vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4),130);
        tracep->fullWData(oldp+243,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+246,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+249,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+250,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+257,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+258,(vlSelf->top__DOT____Vcellinp__MUX_ALU_MEM____pinNumber4),130);
        tracep->fullWData(oldp+263,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+266,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+269,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+270,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+273,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+275,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+277,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+278,(vlSelf->top__DOT____Vcellinp__MUX_PC_ALU____pinNumber4),130);
        tracep->fullWData(oldp+283,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+286,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+289,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+290,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+291,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+293,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+295,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+297,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+298,(vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4),198);
        tracep->fullWData(oldp+305,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+308,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+311,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+314,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+315,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+316,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list[2]),2);
        tracep->fullQData(oldp+317,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+319,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+321,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+325,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+326,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_out),64);
        tracep->fullQData(oldp+328,(vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out),64);
        tracep->fullQData(oldp+330,(vlSelf->top__DOT__HY_ALU_top__DOT__Compare_out),64);
        tracep->fullQData(oldp+332,(vlSelf->top__DOT__HY_ALU_top__DOT__DIV_out),64);
        tracep->fullQData(oldp+334,(vlSelf->top__DOT__HY_ALU_top__DOT__Logic_out),64);
        tracep->fullQData(oldp+336,(vlSelf->top__DOT__HY_ALU_top__DOT__MUL_out),64);
        tracep->fullQData(oldp+338,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd),64);
        tracep->fullQData(oldp+340,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub),64);
        tracep->fullWData(oldp+342,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4),340);
        tracep->fullWData(oldp+353,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+356,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+359,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+362,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+365,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[4]),68);
        tracep->fullCData(oldp+368,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+369,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+370,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+371,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+372,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[4]),4);
        tracep->fullQData(oldp+373,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+375,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+377,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+379,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+381,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+383,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+385,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+386,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__result),64);
        tracep->fullWData(oldp+388,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4),136);
        tracep->fullWData(oldp+393,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+396,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullCData(oldp+399,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+400,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[1]),4);
        tracep->fullQData(oldp+401,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+403,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+405,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+407,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+408,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                     & vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
        tracep->fullQData(oldp+410,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                     ^ vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
        tracep->fullQData(oldp+412,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                     | vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
        tracep->fullWData(oldp+414,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4),204);
        tracep->fullWData(oldp+421,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+424,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+427,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullCData(oldp+430,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+431,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+432,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[2]),4);
        tracep->fullQData(oldp+433,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+435,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+437,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+439,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+441,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+442,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer),64);
        tracep->fullQData(oldp+444,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1),64);
        tracep->fullQData(oldp+446,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2),64);
        tracep->fullQData(oldp+448,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3),64);
        tracep->fullQData(oldp+450,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4),64);
        tracep->fullQData(oldp+452,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer5),64);
        tracep->fullBit(oldp+454,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                   != vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
        tracep->fullBit(oldp+455,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                   == vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
        tracep->fullBit(oldp+456,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result, vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
        tracep->fullBit(oldp+457,(VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result, vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
        tracep->fullBit(oldp+458,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                   < vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
        tracep->fullIData(oldp+459,((IData)(vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result)),32);
        tracep->fullIData(oldp+460,((IData)(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),32);
        tracep->fullIData(oldp+461,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__divw),32);
        tracep->fullIData(oldp+462,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__remw),32);
        tracep->fullWData(oldp+463,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4),136);
        tracep->fullWData(oldp+468,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+471,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullCData(oldp+474,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+475,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[1]),4);
        tracep->fullQData(oldp+476,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+478,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+480,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+482,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+483,(vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4),544);
        tracep->fullWData(oldp+500,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+503,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+506,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+509,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+512,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[4]),68);
        tracep->fullWData(oldp+515,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[5]),68);
        tracep->fullWData(oldp+518,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[6]),68);
        tracep->fullWData(oldp+521,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[7]),68);
        tracep->fullCData(oldp+524,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+525,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+526,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+527,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+528,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+529,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+530,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+531,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[7]),4);
        tracep->fullQData(oldp+532,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+534,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+536,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+538,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+540,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+542,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+544,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+546,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+548,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+550,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+551,(vlSelf->top__DOT__PC_Wire),64);
        tracep->fullQData(oldp+553,((4ULL + vlSelf->top__DOT__PC_Wire)),64);
        tracep->fullQData(oldp+555,(vlSelf->top__DOT__HY_RegFile__DOT__Zero),64);
        tracep->fullQData(oldp+557,(vlSelf->top__DOT__HY_RegFile__DOT__ra),64);
        tracep->fullQData(oldp+559,(vlSelf->top__DOT__HY_RegFile__DOT__sp),64);
        tracep->fullQData(oldp+561,(vlSelf->top__DOT__HY_RegFile__DOT__gp),64);
        tracep->fullQData(oldp+563,(vlSelf->top__DOT__HY_RegFile__DOT__tp),64);
        tracep->fullQData(oldp+565,(vlSelf->top__DOT__HY_RegFile__DOT__t0),64);
        tracep->fullQData(oldp+567,(vlSelf->top__DOT__HY_RegFile__DOT__t1),64);
        tracep->fullQData(oldp+569,(vlSelf->top__DOT__HY_RegFile__DOT__t2),64);
        tracep->fullQData(oldp+571,(vlSelf->top__DOT__HY_RegFile__DOT__s0),64);
        tracep->fullQData(oldp+573,(vlSelf->top__DOT__HY_RegFile__DOT__s1),64);
        tracep->fullQData(oldp+575,(vlSelf->top__DOT__HY_RegFile__DOT__a0),64);
        tracep->fullQData(oldp+577,(vlSelf->top__DOT__HY_RegFile__DOT__a1),64);
        tracep->fullQData(oldp+579,(vlSelf->top__DOT__HY_RegFile__DOT__a2),64);
        tracep->fullQData(oldp+581,(vlSelf->top__DOT__HY_RegFile__DOT__a3),64);
        tracep->fullQData(oldp+583,(vlSelf->top__DOT__HY_RegFile__DOT__a4),64);
        tracep->fullQData(oldp+585,(vlSelf->top__DOT__HY_RegFile__DOT__a5),64);
        tracep->fullQData(oldp+587,(vlSelf->top__DOT__HY_RegFile__DOT__a6),64);
        tracep->fullQData(oldp+589,(vlSelf->top__DOT__HY_RegFile__DOT__a7),64);
        tracep->fullQData(oldp+591,(vlSelf->top__DOT__HY_RegFile__DOT__s2),64);
        tracep->fullQData(oldp+593,(vlSelf->top__DOT__HY_RegFile__DOT__s3),64);
        tracep->fullQData(oldp+595,(vlSelf->top__DOT__HY_RegFile__DOT__s4),64);
        tracep->fullQData(oldp+597,(vlSelf->top__DOT__HY_RegFile__DOT__s5),64);
        tracep->fullQData(oldp+599,(vlSelf->top__DOT__HY_RegFile__DOT__s6),64);
        tracep->fullQData(oldp+601,(vlSelf->top__DOT__HY_RegFile__DOT__s7),64);
        tracep->fullQData(oldp+603,(vlSelf->top__DOT__HY_RegFile__DOT__s8),64);
        tracep->fullQData(oldp+605,(vlSelf->top__DOT__HY_RegFile__DOT__s9),64);
        tracep->fullQData(oldp+607,(vlSelf->top__DOT__HY_RegFile__DOT__s10),64);
        tracep->fullQData(oldp+609,(vlSelf->top__DOT__HY_RegFile__DOT__s11),64);
        tracep->fullQData(oldp+611,(vlSelf->top__DOT__HY_RegFile__DOT__t3),64);
        tracep->fullQData(oldp+613,(vlSelf->top__DOT__HY_RegFile__DOT__t4),64);
        tracep->fullQData(oldp+615,(vlSelf->top__DOT__HY_RegFile__DOT__t5),64);
        tracep->fullQData(oldp+617,(vlSelf->top__DOT__HY_RegFile__DOT__t6),64);
        tracep->fullWData(oldp+619,(vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4),2208);
        tracep->fullWData(oldp+688,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+691,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+694,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+697,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+700,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+703,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+706,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+709,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+712,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+715,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+718,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+721,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+724,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+727,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+730,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+733,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+736,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+739,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+742,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+745,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+748,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+751,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+754,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+757,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+760,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+763,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+766,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+769,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+772,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+775,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+778,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullWData(oldp+781,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[31]),69);
        tracep->fullCData(oldp+784,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+785,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+786,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+787,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+788,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+789,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+790,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+791,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+792,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+793,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+794,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+795,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+796,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+797,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+798,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+799,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+800,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+801,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+802,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+803,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+804,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+805,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+806,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+807,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+808,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+809,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+810,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+811,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+812,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+813,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+814,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[30]),5);
        tracep->fullCData(oldp+815,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[31]),5);
        tracep->fullQData(oldp+816,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+818,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+820,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+822,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+824,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+826,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+828,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+830,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+832,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+834,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+836,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+838,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+840,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+842,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+844,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+846,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+848,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+850,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+852,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+854,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+856,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+858,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+860,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+862,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+864,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+866,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+868,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+870,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+872,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+874,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+876,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[30]),64);
        tracep->fullQData(oldp+878,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[31]),64);
        tracep->fullWData(oldp+880,(vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4),2208);
        tracep->fullWData(oldp+949,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+952,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+955,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+958,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+961,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+964,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+967,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+970,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+973,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+976,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+979,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+982,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+985,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+988,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+991,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+994,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+997,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+1000,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+1003,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+1006,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+1009,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+1012,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+1015,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+1018,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+1021,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+1024,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+1027,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+1030,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+1033,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+1036,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+1039,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullWData(oldp+1042,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[31]),69);
        tracep->fullCData(oldp+1045,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+1046,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+1047,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+1048,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+1049,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+1050,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+1051,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+1052,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+1053,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+1054,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+1055,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+1056,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+1057,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+1058,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+1059,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+1060,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+1061,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+1062,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+1063,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+1064,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+1065,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+1066,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+1067,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+1068,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+1069,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+1070,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+1071,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+1072,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+1073,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+1074,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+1075,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[30]),5);
        tracep->fullCData(oldp+1076,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[31]),5);
        tracep->fullQData(oldp+1077,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1079,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1081,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1083,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1085,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1087,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1089,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1091,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+1093,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+1095,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+1097,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+1099,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+1101,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+1103,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+1105,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+1107,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+1109,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+1111,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+1113,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+1115,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+1117,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+1119,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+1121,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+1123,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+1125,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+1127,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+1129,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+1131,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+1133,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+1135,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+1137,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[30]),64);
        tracep->fullQData(oldp+1139,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[31]),64);
        tracep->fullBit(oldp+1141,(vlSelf->clk));
        tracep->fullBit(oldp+1142,(vlSelf->rst));
        tracep->fullIData(oldp+1143,(vlSelf->instr_in),32);
        tracep->fullQData(oldp+1144,(vlSelf->SEXT_result),64);
        tracep->fullQData(oldp+1146,(vlSelf->PC_Test),64);
        tracep->fullCData(oldp+1148,(vlSelf->SEXT_Control_out),3);
        tracep->fullQData(oldp+1149,(vlSelf->RS1_OUTPUT),64);
        tracep->fullQData(oldp+1151,(vlSelf->RS2_OUTPUT),64);
        tracep->fullQData(oldp+1153,(vlSelf->ALU_Result),64);
        tracep->fullBit(oldp+1155,(vlSelf->WriteBack_Enable_result));
        tracep->fullBit(oldp+1156,(vlSelf->C_RS1_PC_Connector_result));
        tracep->fullBit(oldp+1157,(vlSelf->C_RS2_imm_Connector_result));
        tracep->fullBit(oldp+1158,(vlSelf->C_ALU_MEM_Connector_result));
        tracep->fullBit(oldp+1159,(vlSelf->C_ALU_NPC_In_Connector_result));
        tracep->fullCData(oldp+1160,(vlSelf->C_NPC_Branch_Jump_Connector_result),2);
        tracep->fullQData(oldp+1161,((vlSelf->top__DOT__PC_Wire 
                                      + vlSelf->top__DOT__SEXT_Connector)),64);
        tracep->fullCData(oldp+1163,((0xffU & (- (IData)(
                                                         (0x100073U 
                                                          == vlSelf->instr_in))))),8);
        tracep->fullCData(oldp+1164,((0x7fU & vlSelf->instr_in)),7);
        tracep->fullCData(oldp+1165,((7U & (vlSelf->instr_in 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+1166,((vlSelf->instr_in 
                                      >> 0x19U)),7);
        tracep->fullCData(oldp+1167,((vlSelf->instr_in 
                                      >> 0x1aU)),6);
        tracep->fullBit(oldp+1168,((0x13U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1169,((0x3bU == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1170,((0x33U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1171,((0x1bU == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1172,((3U == (0x7fU & vlSelf->instr_in))));
        tracep->fullBit(oldp+1173,((0x23U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1174,((0x63U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1175,((0x6fU == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1176,((0x67U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1177,((0x17U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1178,((0x37U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1179,((0x73U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1180,((0U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1181,((4U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1182,((6U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1183,((3U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1184,((2U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1185,((5U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1186,((1U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1187,((7U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1188,((0U == (vlSelf->instr_in 
                                           >> 0x19U))));
        tracep->fullBit(oldp+1189,((1U == (vlSelf->instr_in 
                                           >> 0x19U))));
        tracep->fullBit(oldp+1190,((0U == (vlSelf->instr_in 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+1191,((0x10U == (vlSelf->instr_in 
                                              >> 0x1aU))));
        tracep->fullBit(oldp+1192,((0x100073U == vlSelf->instr_in)));
        tracep->fullBit(oldp+1193,(((0x17U == (0x7fU 
                                               & vlSelf->instr_in)) 
                                    | (0x37U == (0x7fU 
                                                 & vlSelf->instr_in)))));
        tracep->fullBit(oldp+1194,(((((((((((((((((
                                                   ((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
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
                                                  & vlSelf->instr_in))) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->instr_in)))));
        tracep->fullSData(oldp+1195,((vlSelf->instr_in 
                                      >> 0x14U)),12);
        tracep->fullIData(oldp+1196,((0xfffff000U & vlSelf->instr_in)),32);
        tracep->fullCData(oldp+1197,((0x1fU & (vlSelf->instr_in 
                                               >> 0xfU))),5);
        tracep->fullCData(oldp+1198,((0x1fU & (vlSelf->instr_in 
                                               >> 0x14U))),5);
        tracep->fullCData(oldp+1199,((0x1fU & (vlSelf->instr_in 
                                               >> 7U))),5);
        tracep->fullBit(oldp+1200,(0U));
        tracep->fullBit(oldp+1201,(1U));
        tracep->fullCData(oldp+1202,(0U),2);
        tracep->fullCData(oldp+1203,(1U),2);
        tracep->fullCData(oldp+1204,(2U),2);
        tracep->fullIData(oldp+1205,(0x40U),32);
        tracep->fullQData(oldp+1206,(0x80000000ULL),64);
        tracep->fullBit(oldp+1208,(1U));
        tracep->fullCData(oldp+1209,(1U),3);
        tracep->fullCData(oldp+1210,(2U),3);
        tracep->fullCData(oldp+1211,(3U),3);
        tracep->fullCData(oldp+1212,(4U),3);
        tracep->fullCData(oldp+1213,(5U),3);
        tracep->fullCData(oldp+1214,(0U),4);
        tracep->fullCData(oldp+1215,(1U),4);
        tracep->fullCData(oldp+1216,(2U),4);
        tracep->fullCData(oldp+1217,(3U),4);
        tracep->fullCData(oldp+1218,(4U),4);
        tracep->fullCData(oldp+1219,(5U),4);
        tracep->fullIData(oldp+1220,(6U),32);
        tracep->fullIData(oldp+1221,(4U),32);
        tracep->fullCData(oldp+1222,(0xfU),4);
        tracep->fullQData(oldp+1223,(0x801012084309015ULL),60);
        tracep->fullIData(oldp+1225,(1U),32);
        tracep->fullIData(oldp+1226,(0xaU),32);
        tracep->fullIData(oldp+1227,(6U),32);
        tracep->fullIData(oldp+1228,(0xbU),32);
        __Vtemp1799[0U] = 0x130017U;
        __Vtemp1799[1U] = 0x40104010U;
        __Vtemp1799[2U] = 0x4100010U;
        __Vtemp1799[3U] = 0x3100410U;
        __Vtemp1799[4U] = 0x100290U;
        __Vtemp1799[5U] = 0x10U;
        tracep->fullWData(oldp+1229,(__Vtemp1799),165);
        tracep->fullIData(oldp+1235,(0xfU),32);
        tracep->fullIData(oldp+1236,(0xbU),32);
        tracep->fullIData(oldp+1237,(5U),32);
        tracep->fullIData(oldp+1238,(3U),32);
        tracep->fullQData(oldp+1239,(0x814223140dULL),40);
        tracep->fullIData(oldp+1241,(8U),32);
        tracep->fullIData(oldp+1242,(5U),32);
        tracep->fullQData(oldp+1243,(0ULL),64);
        tracep->fullIData(oldp+1245,(0x43U),32);
        tracep->fullIData(oldp+1246,(0x20U),32);
        tracep->fullIData(oldp+1247,(0x45U),32);
        tracep->fullIData(oldp+1248,(0x20U),32);
        tracep->fullCData(oldp+1249,(8U),4);
        tracep->fullCData(oldp+1250,(9U),4);
        tracep->fullCData(oldp+1251,(0xaU),4);
        tracep->fullCData(oldp+1252,(0xbU),4);
        tracep->fullIData(oldp+1253,(2U),32);
        tracep->fullIData(oldp+1254,(0x41U),32);
        tracep->fullIData(oldp+1255,(2U),32);
        tracep->fullIData(oldp+1256,(0x42U),32);
        tracep->fullIData(oldp+1257,(3U),32);
        tracep->fullCData(oldp+1258,(6U),4);
        tracep->fullCData(oldp+1259,(7U),4);
        tracep->fullIData(oldp+1260,(0x44U),32);
        tracep->fullIData(oldp+1261,(8U),32);
    }
}
