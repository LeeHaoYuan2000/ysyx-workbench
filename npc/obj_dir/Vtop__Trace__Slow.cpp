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
        tracep->declBit(c+1189,"clk", false,-1);
        tracep->declBit(c+1190,"rst", false,-1);
        tracep->declBus(c+1191,"instr_in", false,-1, 31,0);
        tracep->declQuad(c+1192,"SEXT_result", false,-1, 63,0);
        tracep->declQuad(c+1194,"PC_Test", false,-1, 63,0);
        tracep->declBus(c+1196,"SEXT_Control_out", false,-1, 2,0);
        tracep->declQuad(c+1197,"RS1_OUTPUT", false,-1, 63,0);
        tracep->declQuad(c+1199,"RS2_OUTPUT", false,-1, 63,0);
        tracep->declQuad(c+1201,"ALU_Result", false,-1, 63,0);
        tracep->declBit(c+1203,"MEM_Enable", false,-1);
        tracep->declBit(c+1204,"MEM_Read", false,-1);
        tracep->declBus(c+1205,"MEM_DataLenth", false,-1, 3,0);
        tracep->declQuad(c+1206,"MEM_Addr", false,-1, 63,0);
        tracep->declQuad(c+1208,"MEM_Dataoutput", false,-1, 63,0);
        tracep->declQuad(c+1210,"MEM_Datainput", false,-1, 63,0);
        tracep->declBit(c+1212,"WriteBack_Enable_result", false,-1);
        tracep->declBit(c+1213,"C_RS1_PC_Connector_result", false,-1);
        tracep->declBit(c+1214,"C_RS2_imm_Connector_result", false,-1);
        tracep->declBit(c+1215,"C_ALU_MEM_Connector_result", false,-1);
        tracep->declBit(c+1216,"C_ALU_NPC_In_Connector_result", false,-1);
        tracep->declBus(c+1217,"C_NPC_Branch_Jump_Connector_result", false,-1, 1,0);
        tracep->declBit(c+1189,"top clk", false,-1);
        tracep->declBit(c+1190,"top rst", false,-1);
        tracep->declBus(c+1191,"top instr_in", false,-1, 31,0);
        tracep->declQuad(c+1192,"top SEXT_result", false,-1, 63,0);
        tracep->declQuad(c+1194,"top PC_Test", false,-1, 63,0);
        tracep->declBus(c+1196,"top SEXT_Control_out", false,-1, 2,0);
        tracep->declQuad(c+1197,"top RS1_OUTPUT", false,-1, 63,0);
        tracep->declQuad(c+1199,"top RS2_OUTPUT", false,-1, 63,0);
        tracep->declQuad(c+1201,"top ALU_Result", false,-1, 63,0);
        tracep->declBit(c+1203,"top MEM_Enable", false,-1);
        tracep->declBit(c+1204,"top MEM_Read", false,-1);
        tracep->declBus(c+1205,"top MEM_DataLenth", false,-1, 3,0);
        tracep->declQuad(c+1206,"top MEM_Addr", false,-1, 63,0);
        tracep->declQuad(c+1208,"top MEM_Dataoutput", false,-1, 63,0);
        tracep->declQuad(c+1210,"top MEM_Datainput", false,-1, 63,0);
        tracep->declBit(c+1212,"top WriteBack_Enable_result", false,-1);
        tracep->declBit(c+1213,"top C_RS1_PC_Connector_result", false,-1);
        tracep->declBit(c+1214,"top C_RS2_imm_Connector_result", false,-1);
        tracep->declBit(c+1215,"top C_ALU_MEM_Connector_result", false,-1);
        tracep->declBit(c+1216,"top C_ALU_NPC_In_Connector_result", false,-1);
        tracep->declBus(c+1217,"top C_NPC_Branch_Jump_Connector_result", false,-1, 1,0);
        tracep->declBus(c+1257,"top MUX_Output_RS1", false,-1, 0,0);
        tracep->declBus(c+1258,"top MUX_Output_PC", false,-1, 0,0);
        tracep->declBus(c+1257,"top MUX_Output_RS2", false,-1, 0,0);
        tracep->declBus(c+1258,"top MUX_Output_imm", false,-1, 0,0);
        tracep->declQuad(c+599,"top PC_Wire", false,-1, 63,0);
        tracep->declQuad(c+601,"top PC_Next_Wire", false,-1, 63,0);
        tracep->declQuad(c+67,"top PC_Next_Next", false,-1, 63,0);
        tracep->declBus(c+1191,"top instruction", false,-1, 31,0);
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
        tracep->declBus(c+1257,"top MUX_Output_ALU", false,-1, 0,0);
        tracep->declBus(c+1258,"top MUX_Output_MEM", false,-1, 0,0);
        tracep->declBus(c+1259,"top MUX_NPC", false,-1, 1,0);
        tracep->declBus(c+1260,"top MUX_Branch", false,-1, 1,0);
        tracep->declBus(c+1261,"top MUX_Jump", false,-1, 1,0);
        tracep->declQuad(c+91,"top MEM_Result_Connector", false,-1, 63,0);
        tracep->declQuad(c+93,"top Write_Back_Reg", false,-1, 63,0);
        tracep->declQuad(c+1218,"top Branch_PC", false,-1, 63,0);
        tracep->declQuad(c+95,"top ALU_Result_Connector", false,-1, 63,0);
        tracep->declBus(c+97,"top Insider_Control_Connector", false,-1, 3,0);
        tracep->declQuad(c+599,"top pc_adder PC", false,-1, 63,0);
        tracep->declQuad(c+601,"top pc_adder PC_Next", false,-1, 63,0);
        tracep->declBit(c+1189,"top pc_reg clk", false,-1);
        tracep->declBit(c+1190,"top pc_reg rst", false,-1);
        tracep->declQuad(c+67,"top pc_reg PC_Next", false,-1, 63,0);
        tracep->declQuad(c+599,"top pc_reg PC", false,-1, 63,0);
        tracep->declBus(c+1262,"top pc_reg pc_reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1263,"top pc_reg pc_reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1189,"top pc_reg pc_reg clk", false,-1);
        tracep->declBit(c+1190,"top pc_reg pc_reg rst", false,-1);
        tracep->declQuad(c+67,"top pc_reg pc_reg din", false,-1, 63,0);
        tracep->declQuad(c+599,"top pc_reg pc_reg dout", false,-1, 63,0);
        tracep->declBit(c+1265,"top pc_reg pc_reg wen", false,-1);
        tracep->declQuad(c+599,"top IFU_Lee PC_IN", false,-1, 63,0);
        tracep->declBus(c+1191,"top IFU_Lee Instr_IN", false,-1, 31,0);
        tracep->declQuad(c+1194,"top IFU_Lee PC_OUT", false,-1, 63,0);
        tracep->declBus(c+1191,"top IFU_Lee Instr_OUT", false,-1, 31,0);
        tracep->declBus(c+1191,"top HY_CU instr", false,-1, 31,0);
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
        tracep->declBus(c+1220,"top HY_CU ebreak_reg", false,-1, 7,0);
        tracep->declBus(c+1221,"top HY_CU instr_6_0", false,-1, 6,0);
        tracep->declBus(c+1222,"top HY_CU instr_14_12", false,-1, 2,0);
        tracep->declBus(c+1223,"top HY_CU instr_31_25", false,-1, 6,0);
        tracep->declBus(c+1224,"top HY_CU instr_31_26", false,-1, 5,0);
        tracep->declBit(c+1225,"top HY_CU Match_6_0_0010011", false,-1);
        tracep->declBit(c+1226,"top HY_CU Match_6_0_0111011", false,-1);
        tracep->declBit(c+1227,"top HY_CU Match_6_0_0110011", false,-1);
        tracep->declBit(c+1228,"top HY_CU Match_6_0_0011011", false,-1);
        tracep->declBit(c+1229,"top HY_CU Match_6_0_0000011", false,-1);
        tracep->declBit(c+1230,"top HY_CU Match_6_0_0100011", false,-1);
        tracep->declBit(c+1231,"top HY_CU Match_6_0_1100011", false,-1);
        tracep->declBit(c+1232,"top HY_CU Match_6_0_1101111", false,-1);
        tracep->declBit(c+1233,"top HY_CU Match_6_0_1100111", false,-1);
        tracep->declBit(c+1234,"top HY_CU Match_6_0_0010111", false,-1);
        tracep->declBit(c+1235,"top HY_CU Match_6_0_0110111", false,-1);
        tracep->declBit(c+1236,"top HY_CU Match_6_0_1110011", false,-1);
        tracep->declBit(c+1237,"top HY_CU Match_14_12_000", false,-1);
        tracep->declBit(c+1238,"top HY_CU Match_14_12_100", false,-1);
        tracep->declBit(c+1239,"top HY_CU Match_14_12_110", false,-1);
        tracep->declBit(c+1240,"top HY_CU Match_14_12_011", false,-1);
        tracep->declBit(c+1241,"top HY_CU Match_14_12_010", false,-1);
        tracep->declBit(c+1242,"top HY_CU Match_14_12_101", false,-1);
        tracep->declBit(c+1243,"top HY_CU Match_14_12_001", false,-1);
        tracep->declBit(c+1244,"top HY_CU Match_14_12_111", false,-1);
        tracep->declBit(c+1245,"top HY_CU Match_31_25_0000000", false,-1);
        tracep->declBit(c+99,"top HY_CU Match_31_25_0100000", false,-1);
        tracep->declBit(c+1246,"top HY_CU Match_31_25_0000001", false,-1);
        tracep->declBit(c+1247,"top HY_CU Match_31_26_000000", false,-1);
        tracep->declBit(c+1248,"top HY_CU Match_31_26_010000", false,-1);
        tracep->declBit(c+100,"top HY_CU addi", false,-1);
        tracep->declBit(c+101,"top HY_CU addiw", false,-1);
        tracep->declBit(c+102,"top HY_CU addw", false,-1);
        tracep->declBit(c+103,"top HY_CU subw", false,-1);
        tracep->declBit(c+104,"top HY_CU add", false,-1);
        tracep->declBit(c+105,"top HY_CU sub", false,-1);
        tracep->declBit(c+106,"top HY_CU mulw", false,-1);
        tracep->declBit(c+107,"top HY_CU divw", false,-1);
        tracep->declBit(c+108,"top HY_CU mul", false,-1);
        tracep->declBit(c+109,"top HY_CU divu", false,-1);
        tracep->declBit(c+110,"top HY_CU divuw", false,-1);
        tracep->declBit(c+111,"top HY_CU remw", false,-1);
        tracep->declBit(c+112,"top HY_CU remu", false,-1);
        tracep->declBit(c+113,"top HY_CU remuw", false,-1);
        tracep->declBit(c+114,"top HY_CU sltiu", false,-1);
        tracep->declBit(c+115,"top HY_CU sltu", false,-1);
        tracep->declBit(c+116,"top HY_CU slt", false,-1);
        tracep->declBit(c+117,"top HY_CU slti", false,-1);
        tracep->declBit(c+118,"top HY_CU sraw", false,-1);
        tracep->declBit(c+119,"top HY_CU sllw", false,-1);
        tracep->declBit(c+120,"top HY_CU srlw", false,-1);
        tracep->declBit(c+121,"top HY_CU slli", false,-1);
        tracep->declBit(c+122,"top HY_CU srli", false,-1);
        tracep->declBit(c+123,"top HY_CU srai", false,-1);
        tracep->declBit(c+124,"top HY_CU srliw", false,-1);
        tracep->declBit(c+125,"top HY_CU slliw", false,-1);
        tracep->declBit(c+126,"top HY_CU sraiw", false,-1);
        tracep->declBit(c+127,"top HY_CU sll", false,-1);
        tracep->declBit(c+128,"top HY_CU ld", false,-1);
        tracep->declBit(c+129,"top HY_CU lw", false,-1);
        tracep->declBit(c+130,"top HY_CU lbu", false,-1);
        tracep->declBit(c+131,"top HY_CU lh", false,-1);
        tracep->declBit(c+132,"top HY_CU lhu", false,-1);
        tracep->declBit(c+133,"top HY_CU sd", false,-1);
        tracep->declBit(c+134,"top HY_CU sw", false,-1);
        tracep->declBit(c+135,"top HY_CU sb", false,-1);
        tracep->declBit(c+136,"top HY_CU sh", false,-1);
        tracep->declBit(c+137,"top HY_CU lb", false,-1);
        tracep->declBit(c+138,"top HY_CU lwu", false,-1);
        tracep->declBit(c+139,"top HY_CU andi", false,-1);
        tracep->declBit(c+140,"top HY_CU xori", false,-1);
        tracep->declBit(c+141,"top HY_CU ori", false,-1);
        tracep->declBit(c+142,"top HY_CU bne", false,-1);
        tracep->declBit(c+143,"top HY_CU beq", false,-1);
        tracep->declBit(c+144,"top HY_CU bge", false,-1);
        tracep->declBit(c+145,"top HY_CU blt", false,-1);
        tracep->declBit(c+146,"top HY_CU bltu", false,-1);
        tracep->declBit(c+147,"top HY_CU bgeu", false,-1);
        tracep->declBit(c+1232,"top HY_CU jal", false,-1);
        tracep->declBit(c+148,"top HY_CU jalr", false,-1);
        tracep->declBit(c+1234,"top HY_CU auipc", false,-1);
        tracep->declBit(c+1235,"top HY_CU lui", false,-1);
        tracep->declBit(c+1249,"top HY_CU ebreak", false,-1);
        tracep->declBit(c+149,"top HY_CU TypeI", false,-1);
        tracep->declBit(c+1250,"top HY_CU TypeU", false,-1);
        tracep->declBit(c+150,"top HY_CU TypeS", false,-1);
        tracep->declBit(c+1232,"top HY_CU TypeJ", false,-1);
        tracep->declBit(c+151,"top HY_CU TypeB", false,-1);
        tracep->declBit(c+152,"top HY_CU TypeR", false,-1);
        tracep->declBit(c+153,"top HY_CU ALU_Adder", false,-1);
        tracep->declBit(c+154,"top HY_CU ALU_Mul", false,-1);
        tracep->declBit(c+155,"top HY_CU ALU_Div", false,-1);
        tracep->declBit(c+156,"top HY_CU ALU_Compare", false,-1);
        tracep->declBit(c+157,"top HY_CU ALU_Shift", false,-1);
        tracep->declBit(c+158,"top HY_CU ALU_LS", false,-1);
        tracep->declBit(c+159,"top HY_CU ALU_LogicOpt", false,-1);
        tracep->declBit(c+151,"top HY_CU ALU_Branch", false,-1);
        tracep->declBit(c+1232,"top HY_CU ALU_Jump", false,-1);
        tracep->declBit(c+1234,"top HY_CU ALU_auipc", false,-1);
        tracep->declBit(c+1235,"top HY_CU ALU_lui", false,-1);
        tracep->declBit(c+1251,"top HY_CU ALUInternal_Control_0", false,-1);
        tracep->declBit(c+160,"top HY_CU ALUInternal_Control_1", false,-1);
        tracep->declBit(c+161,"top HY_CU ALUInternal_Control_2", false,-1);
        tracep->declBit(c+162,"top HY_CU ALUInternal_Control_3", false,-1);
        tracep->declBit(c+163,"top HY_CU ALUInternal_Control_4", false,-1);
        tracep->declBit(c+164,"top HY_CU ALUInternal_Control_5", false,-1);
        tracep->declBit(c+87,"top HY_CU ALU_Choose_imm", false,-1);
        tracep->declBit(c+86,"top HY_CU ALU_Choose_PC", false,-1);
        tracep->declBus(c+165,"top HY_CU func_signal", false,-1, 10,0);
        tracep->declBus(c+166,"top HY_CU ALU_inside_signal", false,-1, 5,0);
        tracep->declBus(c+1266,"top HY_CU IMMI", false,-1, 2,0);
        tracep->declBus(c+1267,"top HY_CU IMMU", false,-1, 2,0);
        tracep->declBus(c+1268,"top HY_CU IMMS", false,-1, 2,0);
        tracep->declBus(c+1269,"top HY_CU IMMJ", false,-1, 2,0);
        tracep->declBus(c+1270,"top HY_CU IMMB", false,-1, 2,0);
        tracep->declBus(c+1271,"top HY_CU MUX_Adder", false,-1, 3,0);
        tracep->declBus(c+1272,"top HY_CU MUX_Shift", false,-1, 3,0);
        tracep->declBus(c+1273,"top HY_CU MUX_Compare", false,-1, 3,0);
        tracep->declBus(c+1274,"top HY_CU MUX_DIV", false,-1, 3,0);
        tracep->declBus(c+1275,"top HY_CU MUX_Logic", false,-1, 3,0);
        tracep->declBus(c+1276,"top HY_CU MUX_MUL", false,-1, 3,0);
        tracep->declBus(c+1271,"top HY_CU Inside_0", false,-1, 3,0);
        tracep->declBus(c+1272,"top HY_CU Inside_1", false,-1, 3,0);
        tracep->declBus(c+1273,"top HY_CU Inside_2", false,-1, 3,0);
        tracep->declBus(c+1274,"top HY_CU Inside_3", false,-1, 3,0);
        tracep->declBus(c+1275,"top HY_CU Inside_4", false,-1, 3,0);
        tracep->declBus(c+1276,"top HY_CU Inside_5", false,-1, 3,0);
        tracep->declBus(c+1277,"top HY_CU ALU_Inside_choose NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1277,"top HY_CU ALU_Inside_choose KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1278,"top HY_CU ALU_Inside_choose DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+97,"top HY_CU ALU_Inside_choose out", false,-1, 3,0);
        tracep->declBus(c+166,"top HY_CU ALU_Inside_choose key", false,-1, 5,0);
        tracep->declBus(c+1279,"top HY_CU ALU_Inside_choose default_out", false,-1, 3,0);
        tracep->declQuad(c+1280,"top HY_CU ALU_Inside_choose lut", false,-1, 59,0);
        tracep->declBus(c+1277,"top HY_CU ALU_Inside_choose i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1277,"top HY_CU ALU_Inside_choose i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1278,"top HY_CU ALU_Inside_choose i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1282,"top HY_CU ALU_Inside_choose i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+97,"top HY_CU ALU_Inside_choose i0 out", false,-1, 3,0);
        tracep->declBus(c+166,"top HY_CU ALU_Inside_choose i0 key", false,-1, 5,0);
        tracep->declBus(c+1279,"top HY_CU ALU_Inside_choose i0 default_out", false,-1, 3,0);
        tracep->declQuad(c+1280,"top HY_CU ALU_Inside_choose i0 lut", false,-1, 59,0);
        tracep->declBus(c+1283,"top HY_CU ALU_Inside_choose i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+1+i*1,"top HY_CU ALU_Inside_choose i0 pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+7+i*1,"top HY_CU ALU_Inside_choose i0 key_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+13+i*1,"top HY_CU ALU_Inside_choose i0 data_list", true,(i+0), 3,0);}}
        tracep->declBus(c+167,"top HY_CU ALU_Inside_choose i0 lut_out", false,-1, 3,0);
        tracep->declBit(c+168,"top HY_CU ALU_Inside_choose i0 hit", false,-1);
        tracep->declBus(c+1284,"top HY_CU ALU_Inside_choose i0 i", false,-1, 31,0);
        tracep->declBus(c+1285,"top HY_CU func_choose NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1285,"top HY_CU func_choose KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1278,"top HY_CU func_choose DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+70,"top HY_CU func_choose out", false,-1, 3,0);
        tracep->declBus(c+165,"top HY_CU func_choose key", false,-1, 10,0);
        tracep->declBus(c+1279,"top HY_CU func_choose default_out", false,-1, 3,0);
        tracep->declArray(c+1286,"top HY_CU func_choose lut", false,-1, 164,0);
        tracep->declBus(c+1285,"top HY_CU func_choose i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1285,"top HY_CU func_choose i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1278,"top HY_CU func_choose i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1282,"top HY_CU func_choose i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+70,"top HY_CU func_choose i0 out", false,-1, 3,0);
        tracep->declBus(c+165,"top HY_CU func_choose i0 key", false,-1, 10,0);
        tracep->declBus(c+1279,"top HY_CU func_choose i0 default_out", false,-1, 3,0);
        tracep->declArray(c+1286,"top HY_CU func_choose i0 lut", false,-1, 164,0);
        tracep->declBus(c+1292,"top HY_CU func_choose i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+19+i*1,"top HY_CU func_choose i0 pair_list", true,(i+0), 14,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+30+i*1,"top HY_CU func_choose i0 key_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+41+i*1,"top HY_CU func_choose i0 data_list", true,(i+0), 3,0);}}
        tracep->declBus(c+169,"top HY_CU func_choose i0 lut_out", false,-1, 3,0);
        tracep->declBit(c+170,"top HY_CU func_choose i0 hit", false,-1);
        tracep->declBus(c+1293,"top HY_CU func_choose i0 i", false,-1, 31,0);
        tracep->declBus(c+1294,"top HY_CU CU_ImmType NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1294,"top HY_CU CU_ImmType KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1295,"top HY_CU CU_ImmType DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+69,"top HY_CU CU_ImmType out", false,-1, 2,0);
        tracep->declBus(c+171,"top HY_CU CU_ImmType key", false,-1, 4,0);
        tracep->declBus(c+1266,"top HY_CU CU_ImmType default_out", false,-1, 2,0);
        tracep->declQuad(c+1296,"top HY_CU CU_ImmType lut", false,-1, 39,0);
        tracep->declBus(c+1294,"top HY_CU CU_ImmType i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1294,"top HY_CU CU_ImmType i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1295,"top HY_CU CU_ImmType i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1282,"top HY_CU CU_ImmType i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+69,"top HY_CU CU_ImmType i0 out", false,-1, 2,0);
        tracep->declBus(c+171,"top HY_CU CU_ImmType i0 key", false,-1, 4,0);
        tracep->declBus(c+1266,"top HY_CU CU_ImmType i0 default_out", false,-1, 2,0);
        tracep->declQuad(c+1296,"top HY_CU CU_ImmType i0 lut", false,-1, 39,0);
        tracep->declBus(c+1298,"top HY_CU CU_ImmType i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+52+i*1,"top HY_CU CU_ImmType i0 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+57+i*1,"top HY_CU CU_ImmType i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+62+i*1,"top HY_CU CU_ImmType i0 data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+172,"top HY_CU CU_ImmType i0 lut_out", false,-1, 2,0);
        tracep->declBit(c+173,"top HY_CU CU_ImmType i0 hit", false,-1);
        tracep->declBus(c+1299,"top HY_CU CU_ImmType i0 i", false,-1, 31,0);
        tracep->declBus(c+1191,"top Sign_Extend Instr", false,-1, 31,0);
        tracep->declBus(c+69,"top Sign_Extend ControlUnit", false,-1, 2,0);
        tracep->declQuad(c+71,"top Sign_Extend SEXT_Out", false,-1, 63,0);
        tracep->declBus(c+1252,"top Sign_Extend immI", false,-1, 11,0);
        tracep->declBus(c+1253,"top Sign_Extend immU", false,-1, 31,0);
        tracep->declBus(c+174,"top Sign_Extend immS", false,-1, 11,0);
        tracep->declBus(c+175,"top Sign_Extend immJ", false,-1, 20,0);
        tracep->declBus(c+176,"top Sign_Extend immB", false,-1, 12,0);
        tracep->declBus(c+1294,"top Sign_Extend SEXT NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1295,"top Sign_Extend SEXT KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top Sign_Extend SEXT DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+71,"top Sign_Extend SEXT out", false,-1, 63,0);
        tracep->declBus(c+69,"top Sign_Extend SEXT key", false,-1, 2,0);
        tracep->declQuad(c+1300,"top Sign_Extend SEXT default_out", false,-1, 63,0);
        tracep->declArray(c+177,"top Sign_Extend SEXT lut", false,-1, 334,0);
        tracep->declBus(c+1294,"top Sign_Extend SEXT i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1295,"top Sign_Extend SEXT i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top Sign_Extend SEXT i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1282,"top Sign_Extend SEXT i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+71,"top Sign_Extend SEXT i0 out", false,-1, 63,0);
        tracep->declBus(c+69,"top Sign_Extend SEXT i0 key", false,-1, 2,0);
        tracep->declQuad(c+1300,"top Sign_Extend SEXT i0 default_out", false,-1, 63,0);
        tracep->declArray(c+177,"top Sign_Extend SEXT i0 lut", false,-1, 334,0);
        tracep->declBus(c+1302,"top Sign_Extend SEXT i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+188+i*3,"top Sign_Extend SEXT i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+203+i*1,"top Sign_Extend SEXT i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+208+i*2,"top Sign_Extend SEXT i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+218,"top Sign_Extend SEXT i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+220,"top Sign_Extend SEXT i0 hit", false,-1);
        tracep->declBus(c+1299,"top Sign_Extend SEXT i0 i", false,-1, 31,0);
        tracep->declBit(c+1189,"top HY_RegFile clk", false,-1);
        tracep->declBit(c+1190,"top HY_RegFile rst", false,-1);
        tracep->declBus(c+1254,"top HY_RegFile RS1", false,-1, 4,0);
        tracep->declBus(c+1255,"top HY_RegFile RS2", false,-1, 4,0);
        tracep->declBus(c+1256,"top HY_RegFile RD", false,-1, 4,0);
        tracep->declQuad(c+93,"top HY_RegFile RD_Back", false,-1, 63,0);
        tracep->declBit(c+85,"top HY_RegFile Enable_Control", false,-1);
        tracep->declQuad(c+73,"top HY_RegFile RS1_Reg", false,-1, 63,0);
        tracep->declQuad(c+75,"top HY_RegFile RS2_Reg", false,-1, 63,0);
        tracep->declQuad(c+603,"top HY_RegFile Zero", false,-1, 63,0);
        tracep->declQuad(c+605,"top HY_RegFile ra", false,-1, 63,0);
        tracep->declQuad(c+607,"top HY_RegFile sp", false,-1, 63,0);
        tracep->declQuad(c+609,"top HY_RegFile gp", false,-1, 63,0);
        tracep->declQuad(c+611,"top HY_RegFile tp", false,-1, 63,0);
        tracep->declQuad(c+613,"top HY_RegFile t0", false,-1, 63,0);
        tracep->declQuad(c+615,"top HY_RegFile t1", false,-1, 63,0);
        tracep->declQuad(c+617,"top HY_RegFile t2", false,-1, 63,0);
        tracep->declQuad(c+619,"top HY_RegFile s0", false,-1, 63,0);
        tracep->declQuad(c+621,"top HY_RegFile s1", false,-1, 63,0);
        tracep->declQuad(c+623,"top HY_RegFile a0", false,-1, 63,0);
        tracep->declQuad(c+625,"top HY_RegFile a1", false,-1, 63,0);
        tracep->declQuad(c+627,"top HY_RegFile a2", false,-1, 63,0);
        tracep->declQuad(c+629,"top HY_RegFile a3", false,-1, 63,0);
        tracep->declQuad(c+631,"top HY_RegFile a4", false,-1, 63,0);
        tracep->declQuad(c+633,"top HY_RegFile a5", false,-1, 63,0);
        tracep->declQuad(c+635,"top HY_RegFile a6", false,-1, 63,0);
        tracep->declQuad(c+637,"top HY_RegFile a7", false,-1, 63,0);
        tracep->declQuad(c+639,"top HY_RegFile s2", false,-1, 63,0);
        tracep->declQuad(c+641,"top HY_RegFile s3", false,-1, 63,0);
        tracep->declQuad(c+643,"top HY_RegFile s4", false,-1, 63,0);
        tracep->declQuad(c+645,"top HY_RegFile s5", false,-1, 63,0);
        tracep->declQuad(c+647,"top HY_RegFile s6", false,-1, 63,0);
        tracep->declQuad(c+649,"top HY_RegFile s7", false,-1, 63,0);
        tracep->declQuad(c+651,"top HY_RegFile s8", false,-1, 63,0);
        tracep->declQuad(c+653,"top HY_RegFile s9", false,-1, 63,0);
        tracep->declQuad(c+655,"top HY_RegFile s10", false,-1, 63,0);
        tracep->declQuad(c+657,"top HY_RegFile s11", false,-1, 63,0);
        tracep->declQuad(c+659,"top HY_RegFile t3", false,-1, 63,0);
        tracep->declQuad(c+661,"top HY_RegFile t4", false,-1, 63,0);
        tracep->declQuad(c+663,"top HY_RegFile t5", false,-1, 63,0);
        tracep->declQuad(c+665,"top HY_RegFile t6", false,-1, 63,0);
        tracep->declBus(c+1303,"top HY_RegFile RS1_Out NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1294,"top HY_RegFile RS1_Out KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top HY_RegFile RS1_Out DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+73,"top HY_RegFile RS1_Out out", false,-1, 63,0);
        tracep->declBus(c+1254,"top HY_RegFile RS1_Out key", false,-1, 4,0);
        tracep->declQuad(c+1300,"top HY_RegFile RS1_Out default_out", false,-1, 63,0);
        tracep->declArray(c+667,"top HY_RegFile RS1_Out lut", false,-1, 2207,0);
        tracep->declBus(c+1303,"top HY_RegFile RS1_Out i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1294,"top HY_RegFile RS1_Out i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top HY_RegFile RS1_Out i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1282,"top HY_RegFile RS1_Out i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+73,"top HY_RegFile RS1_Out i0 out", false,-1, 63,0);
        tracep->declBus(c+1254,"top HY_RegFile RS1_Out i0 key", false,-1, 4,0);
        tracep->declQuad(c+1300,"top HY_RegFile RS1_Out i0 default_out", false,-1, 63,0);
        tracep->declArray(c+667,"top HY_RegFile RS1_Out i0 lut", false,-1, 2207,0);
        tracep->declBus(c+1304,"top HY_RegFile RS1_Out i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declArray(c+736+i*3,"top HY_RegFile RS1_Out i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+832+i*1,"top HY_RegFile RS1_Out i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+864+i*2,"top HY_RegFile RS1_Out i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+221,"top HY_RegFile RS1_Out i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+223,"top HY_RegFile RS1_Out i0 hit", false,-1);
        tracep->declBus(c+1305,"top HY_RegFile RS1_Out i0 i", false,-1, 31,0);
        tracep->declBus(c+1303,"top HY_RegFile RS2_Out NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1294,"top HY_RegFile RS2_Out KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top HY_RegFile RS2_Out DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+75,"top HY_RegFile RS2_Out out", false,-1, 63,0);
        tracep->declBus(c+1255,"top HY_RegFile RS2_Out key", false,-1, 4,0);
        tracep->declQuad(c+1300,"top HY_RegFile RS2_Out default_out", false,-1, 63,0);
        tracep->declArray(c+928,"top HY_RegFile RS2_Out lut", false,-1, 2207,0);
        tracep->declBus(c+1303,"top HY_RegFile RS2_Out i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1294,"top HY_RegFile RS2_Out i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top HY_RegFile RS2_Out i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1282,"top HY_RegFile RS2_Out i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+75,"top HY_RegFile RS2_Out i0 out", false,-1, 63,0);
        tracep->declBus(c+1255,"top HY_RegFile RS2_Out i0 key", false,-1, 4,0);
        tracep->declQuad(c+1300,"top HY_RegFile RS2_Out i0 default_out", false,-1, 63,0);
        tracep->declArray(c+928,"top HY_RegFile RS2_Out i0 lut", false,-1, 2207,0);
        tracep->declBus(c+1304,"top HY_RegFile RS2_Out i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declArray(c+997+i*3,"top HY_RegFile RS2_Out i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+1093+i*1,"top HY_RegFile RS2_Out i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1125+i*2,"top HY_RegFile RS2_Out i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+224,"top HY_RegFile RS2_Out i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+226,"top HY_RegFile RS2_Out i0 hit", false,-1);
        tracep->declBus(c+1305,"top HY_RegFile RS2_Out i0 i", false,-1, 31,0);
        tracep->declBit(c+1189,"top HY_MEM clk", false,-1);
        tracep->declQuad(c+95,"top HY_MEM MEM_Address", false,-1, 63,0);
        tracep->declQuad(c+75,"top HY_MEM Data_Write", false,-1, 63,0);
        tracep->declBit(c+83,"top HY_MEM MEM_Enable", false,-1);
        tracep->declBus(c+84,"top HY_MEM Ctrl", false,-1, 3,0);
        tracep->declQuad(c+91,"top HY_MEM MEM_Data_out", false,-1, 63,0);
        tracep->declBit(c+1203,"top HY_MEM MEM_Enable_Top", false,-1);
        tracep->declBit(c+1204,"top HY_MEM MEM_Read_Top", false,-1);
        tracep->declBus(c+1205,"top HY_MEM MEM_DataLenth_Top", false,-1, 3,0);
        tracep->declQuad(c+1206,"top HY_MEM MEM_Addr_Top", false,-1, 63,0);
        tracep->declQuad(c+1208,"top HY_MEM MEM_Dataoutput_Top", false,-1, 63,0);
        tracep->declQuad(c+1210,"top HY_MEM MEM_Dataiput_Top", false,-1, 63,0);
        tracep->declBus(c+1271,"top HY_MEM Load_8Bytes", false,-1, 3,0);
        tracep->declBus(c+1272,"top HY_MEM Load_2Bytes", false,-1, 3,0);
        tracep->declBus(c+1273,"top HY_MEM Load_1Bytes", false,-1, 3,0);
        tracep->declBus(c+1274,"top HY_MEM Load_4Bytes_SEXT", false,-1, 3,0);
        tracep->declBus(c+1275,"top HY_MEM Load_2Bytes_SEXT", false,-1, 3,0);
        tracep->declBus(c+1276,"top HY_MEM Load_4Bytes", false,-1, 3,0);
        tracep->declBus(c+1306,"top HY_MEM Store_8Byte", false,-1, 3,0);
        tracep->declBus(c+1307,"top HY_MEM Store_4Byte", false,-1, 3,0);
        tracep->declBus(c+1308,"top HY_MEM Store_2Byte", false,-1, 3,0);
        tracep->declBus(c+1309,"top HY_MEM Store_1Byte", false,-1, 3,0);
        tracep->declBus(c+1282,"top HY_MEM MEM_Read", false,-1, 31,0);
        tracep->declBus(c+1310,"top HY_MEM MEM_Write", false,-1, 31,0);
        tracep->declBus(c+1311,"top MUX_Reg_PC_2ALU NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1282,"top MUX_Reg_PC_2ALU KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top MUX_Reg_PC_2ALU DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+77,"top MUX_Reg_PC_2ALU out", false,-1, 63,0);
        tracep->declBus(c+86,"top MUX_Reg_PC_2ALU key", false,-1, 0,0);
        tracep->declQuad(c+1300,"top MUX_Reg_PC_2ALU default_out", false,-1, 63,0);
        tracep->declArray(c+227,"top MUX_Reg_PC_2ALU lut", false,-1, 129,0);
        tracep->declBus(c+1311,"top MUX_Reg_PC_2ALU i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1282,"top MUX_Reg_PC_2ALU i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top MUX_Reg_PC_2ALU i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1282,"top MUX_Reg_PC_2ALU i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+77,"top MUX_Reg_PC_2ALU i0 out", false,-1, 63,0);
        tracep->declBus(c+86,"top MUX_Reg_PC_2ALU i0 key", false,-1, 0,0);
        tracep->declQuad(c+1300,"top MUX_Reg_PC_2ALU i0 default_out", false,-1, 63,0);
        tracep->declArray(c+227,"top MUX_Reg_PC_2ALU i0 lut", false,-1, 129,0);
        tracep->declBus(c+1312,"top MUX_Reg_PC_2ALU i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+232+i*3,"top MUX_Reg_PC_2ALU i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+238+i*1,"top MUX_Reg_PC_2ALU i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+240+i*2,"top MUX_Reg_PC_2ALU i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+244,"top MUX_Reg_PC_2ALU i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+246,"top MUX_Reg_PC_2ALU i0 hit", false,-1);
        tracep->declBus(c+1313,"top MUX_Reg_PC_2ALU i0 i", false,-1, 31,0);
        tracep->declBus(c+1311,"top MUX_RS2_imm_2ALU NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1282,"top MUX_RS2_imm_2ALU KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top MUX_RS2_imm_2ALU DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+79,"top MUX_RS2_imm_2ALU out", false,-1, 63,0);
        tracep->declBus(c+87,"top MUX_RS2_imm_2ALU key", false,-1, 0,0);
        tracep->declQuad(c+1300,"top MUX_RS2_imm_2ALU default_out", false,-1, 63,0);
        tracep->declArray(c+247,"top MUX_RS2_imm_2ALU lut", false,-1, 129,0);
        tracep->declBus(c+1311,"top MUX_RS2_imm_2ALU i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1282,"top MUX_RS2_imm_2ALU i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top MUX_RS2_imm_2ALU i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1282,"top MUX_RS2_imm_2ALU i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+79,"top MUX_RS2_imm_2ALU i0 out", false,-1, 63,0);
        tracep->declBus(c+87,"top MUX_RS2_imm_2ALU i0 key", false,-1, 0,0);
        tracep->declQuad(c+1300,"top MUX_RS2_imm_2ALU i0 default_out", false,-1, 63,0);
        tracep->declArray(c+247,"top MUX_RS2_imm_2ALU i0 lut", false,-1, 129,0);
        tracep->declBus(c+1312,"top MUX_RS2_imm_2ALU i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+252+i*3,"top MUX_RS2_imm_2ALU i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+258+i*1,"top MUX_RS2_imm_2ALU i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+260+i*2,"top MUX_RS2_imm_2ALU i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+264,"top MUX_RS2_imm_2ALU i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+266,"top MUX_RS2_imm_2ALU i0 hit", false,-1);
        tracep->declBus(c+1313,"top MUX_RS2_imm_2ALU i0 i", false,-1, 31,0);
        tracep->declBus(c+1311,"top MUX_ALU_MEM NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1282,"top MUX_ALU_MEM KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top MUX_ALU_MEM DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+81,"top MUX_ALU_MEM out", false,-1, 63,0);
        tracep->declBus(c+88,"top MUX_ALU_MEM key", false,-1, 0,0);
        tracep->declQuad(c+1300,"top MUX_ALU_MEM default_out", false,-1, 63,0);
        tracep->declArray(c+267,"top MUX_ALU_MEM lut", false,-1, 129,0);
        tracep->declBus(c+1311,"top MUX_ALU_MEM i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1282,"top MUX_ALU_MEM i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top MUX_ALU_MEM i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1282,"top MUX_ALU_MEM i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+81,"top MUX_ALU_MEM i0 out", false,-1, 63,0);
        tracep->declBus(c+88,"top MUX_ALU_MEM i0 key", false,-1, 0,0);
        tracep->declQuad(c+1300,"top MUX_ALU_MEM i0 default_out", false,-1, 63,0);
        tracep->declArray(c+267,"top MUX_ALU_MEM i0 lut", false,-1, 129,0);
        tracep->declBus(c+1312,"top MUX_ALU_MEM i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+272+i*3,"top MUX_ALU_MEM i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+278+i*1,"top MUX_ALU_MEM i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+280+i*2,"top MUX_ALU_MEM i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+284,"top MUX_ALU_MEM i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+286,"top MUX_ALU_MEM i0 hit", false,-1);
        tracep->declBus(c+1313,"top MUX_ALU_MEM i0 i", false,-1, 31,0);
        tracep->declBus(c+1311,"top MUX_PC_ALU NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1282,"top MUX_PC_ALU KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top MUX_PC_ALU DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+93,"top MUX_PC_ALU out", false,-1, 63,0);
        tracep->declBus(c+89,"top MUX_PC_ALU key", false,-1, 0,0);
        tracep->declQuad(c+1300,"top MUX_PC_ALU default_out", false,-1, 63,0);
        tracep->declArray(c+287,"top MUX_PC_ALU lut", false,-1, 129,0);
        tracep->declBus(c+1311,"top MUX_PC_ALU i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1282,"top MUX_PC_ALU i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top MUX_PC_ALU i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1282,"top MUX_PC_ALU i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+93,"top MUX_PC_ALU i0 out", false,-1, 63,0);
        tracep->declBus(c+89,"top MUX_PC_ALU i0 key", false,-1, 0,0);
        tracep->declQuad(c+1300,"top MUX_PC_ALU i0 default_out", false,-1, 63,0);
        tracep->declArray(c+287,"top MUX_PC_ALU i0 lut", false,-1, 129,0);
        tracep->declBus(c+1312,"top MUX_PC_ALU i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+292+i*3,"top MUX_PC_ALU i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+298+i*1,"top MUX_PC_ALU i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+300+i*2,"top MUX_PC_ALU i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+304,"top MUX_PC_ALU i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+306,"top MUX_PC_ALU i0 hit", false,-1);
        tracep->declBus(c+1313,"top MUX_PC_ALU i0 i", false,-1, 31,0);
        tracep->declBus(c+1295,"top MUX_NPC_Branch_Jump NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1311,"top MUX_NPC_Branch_Jump KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top MUX_NPC_Branch_Jump DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+67,"top MUX_NPC_Branch_Jump out", false,-1, 63,0);
        tracep->declBus(c+90,"top MUX_NPC_Branch_Jump key", false,-1, 1,0);
        tracep->declQuad(c+1300,"top MUX_NPC_Branch_Jump default_out", false,-1, 63,0);
        tracep->declArray(c+307,"top MUX_NPC_Branch_Jump lut", false,-1, 197,0);
        tracep->declBus(c+1295,"top MUX_NPC_Branch_Jump i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1311,"top MUX_NPC_Branch_Jump i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top MUX_NPC_Branch_Jump i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1282,"top MUX_NPC_Branch_Jump i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+67,"top MUX_NPC_Branch_Jump i0 out", false,-1, 63,0);
        tracep->declBus(c+90,"top MUX_NPC_Branch_Jump i0 key", false,-1, 1,0);
        tracep->declQuad(c+1300,"top MUX_NPC_Branch_Jump i0 default_out", false,-1, 63,0);
        tracep->declArray(c+307,"top MUX_NPC_Branch_Jump i0 lut", false,-1, 197,0);
        tracep->declBus(c+1314,"top MUX_NPC_Branch_Jump i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+314+i*3,"top MUX_NPC_Branch_Jump i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+323+i*1,"top MUX_NPC_Branch_Jump i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+326+i*2,"top MUX_NPC_Branch_Jump i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+332,"top MUX_NPC_Branch_Jump i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+334,"top MUX_NPC_Branch_Jump i0 hit", false,-1);
        tracep->declBus(c+1315,"top MUX_NPC_Branch_Jump i0 i", false,-1, 31,0);
        tracep->declQuad(c+599,"top branch_add current_pc", false,-1, 63,0);
        tracep->declQuad(c+71,"top branch_add imm", false,-1, 63,0);
        tracep->declQuad(c+1218,"top branch_add new_pc", false,-1, 63,0);
        tracep->declQuad(c+77,"top HY_ALU_top src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top HY_ALU_top src2", false,-1, 63,0);
        tracep->declBus(c+70,"top HY_ALU_top func_control", false,-1, 3,0);
        tracep->declBus(c+97,"top HY_ALU_top inner_control", false,-1, 3,0);
        tracep->declQuad(c+95,"top HY_ALU_top result_out", false,-1, 63,0);
        tracep->declBus(c+1271,"top HY_ALU_top MUX_Adder", false,-1, 3,0);
        tracep->declBus(c+1272,"top HY_ALU_top MUX_Shift", false,-1, 3,0);
        tracep->declBus(c+1273,"top HY_ALU_top MUX_Compare", false,-1, 3,0);
        tracep->declBus(c+1274,"top HY_ALU_top MUX_DIV", false,-1, 3,0);
        tracep->declBus(c+1275,"top HY_ALU_top MUX_Logic", false,-1, 3,0);
        tracep->declBus(c+1276,"top HY_ALU_top MUX_MUL", false,-1, 3,0);
        tracep->declBus(c+1316,"top HY_ALU_top auipc", false,-1, 3,0);
        tracep->declBus(c+1317,"top HY_ALU_top lui", false,-1, 3,0);
        tracep->declQuad(c+335,"top HY_ALU_top Adder_out", false,-1, 63,0);
        tracep->declQuad(c+337,"top HY_ALU_top Shift_out", false,-1, 63,0);
        tracep->declQuad(c+339,"top HY_ALU_top Compare_out", false,-1, 63,0);
        tracep->declQuad(c+341,"top HY_ALU_top DIV_out", false,-1, 63,0);
        tracep->declQuad(c+343,"top HY_ALU_top Logic_out", false,-1, 63,0);
        tracep->declQuad(c+345,"top HY_ALU_top MUL_out", false,-1, 63,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_adder src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top HY_ALU_top ALU_adder src2", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_adder control", false,-1, 3,0);
        tracep->declQuad(c+335,"top HY_ALU_top ALU_adder result_out", false,-1, 63,0);
        tracep->declQuad(c+347,"top HY_ALU_top ALU_adder resultAdd", false,-1, 63,0);
        tracep->declQuad(c+349,"top HY_ALU_top ALU_adder resultSub", false,-1, 63,0);
        tracep->declBus(c+1294,"top HY_ALU_top ALU_adder Adder_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1278,"top HY_ALU_top ALU_adder Adder_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top HY_ALU_top ALU_adder Adder_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+335,"top HY_ALU_top ALU_adder Adder_mux out", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_adder Adder_mux key", false,-1, 3,0);
        tracep->declQuad(c+347,"top HY_ALU_top ALU_adder Adder_mux default_out", false,-1, 63,0);
        tracep->declArray(c+351,"top HY_ALU_top ALU_adder Adder_mux lut", false,-1, 339,0);
        tracep->declBus(c+1294,"top HY_ALU_top ALU_adder Adder_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1278,"top HY_ALU_top ALU_adder Adder_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top HY_ALU_top ALU_adder Adder_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1282,"top HY_ALU_top ALU_adder Adder_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+335,"top HY_ALU_top ALU_adder Adder_mux i0 out", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_adder Adder_mux i0 key", false,-1, 3,0);
        tracep->declQuad(c+347,"top HY_ALU_top ALU_adder Adder_mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+351,"top HY_ALU_top ALU_adder Adder_mux i0 lut", false,-1, 339,0);
        tracep->declBus(c+1318,"top HY_ALU_top ALU_adder Adder_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+362+i*3,"top HY_ALU_top ALU_adder Adder_mux i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+377+i*1,"top HY_ALU_top ALU_adder Adder_mux i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+382+i*2,"top HY_ALU_top ALU_adder Adder_mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+392,"top HY_ALU_top ALU_adder Adder_mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+394,"top HY_ALU_top ALU_adder Adder_mux i0 hit", false,-1);
        tracep->declBus(c+1299,"top HY_ALU_top ALU_adder Adder_mux i0 i", false,-1, 31,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_mul src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top HY_ALU_top ALU_mul src2", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_mul control", false,-1, 3,0);
        tracep->declQuad(c+345,"top HY_ALU_top ALU_mul result_out", false,-1, 63,0);
        tracep->declQuad(c+395,"top HY_ALU_top ALU_mul result", false,-1, 63,0);
        tracep->declBus(c+1311,"top HY_ALU_top ALU_mul MUX_mul NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1278,"top HY_ALU_top ALU_mul MUX_mul KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top HY_ALU_top ALU_mul MUX_mul DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+345,"top HY_ALU_top ALU_mul MUX_mul out", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_mul MUX_mul key", false,-1, 3,0);
        tracep->declQuad(c+1300,"top HY_ALU_top ALU_mul MUX_mul default_out", false,-1, 63,0);
        tracep->declArray(c+397,"top HY_ALU_top ALU_mul MUX_mul lut", false,-1, 135,0);
        tracep->declBus(c+1311,"top HY_ALU_top ALU_mul MUX_mul i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1278,"top HY_ALU_top ALU_mul MUX_mul i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top HY_ALU_top ALU_mul MUX_mul i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1282,"top HY_ALU_top ALU_mul MUX_mul i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+345,"top HY_ALU_top ALU_mul MUX_mul i0 out", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_mul MUX_mul i0 key", false,-1, 3,0);
        tracep->declQuad(c+1300,"top HY_ALU_top ALU_mul MUX_mul i0 default_out", false,-1, 63,0);
        tracep->declArray(c+397,"top HY_ALU_top ALU_mul MUX_mul i0 lut", false,-1, 135,0);
        tracep->declBus(c+1318,"top HY_ALU_top ALU_mul MUX_mul i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+402+i*3,"top HY_ALU_top ALU_mul MUX_mul i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+408+i*1,"top HY_ALU_top ALU_mul MUX_mul i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+410+i*2,"top HY_ALU_top ALU_mul MUX_mul i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+414,"top HY_ALU_top ALU_mul MUX_mul i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+416,"top HY_ALU_top ALU_mul MUX_mul i0 hit", false,-1);
        tracep->declBus(c+1313,"top HY_ALU_top ALU_mul MUX_mul i0 i", false,-1, 31,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_Logic src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top HY_ALU_top ALU_Logic src2", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_Logic ControlOpt", false,-1, 3,0);
        tracep->declQuad(c+343,"top HY_ALU_top ALU_Logic result_out", false,-1, 63,0);
        tracep->declQuad(c+417,"top HY_ALU_top ALU_Logic result_and", false,-1, 63,0);
        tracep->declQuad(c+419,"top HY_ALU_top ALU_Logic result_xor", false,-1, 63,0);
        tracep->declQuad(c+421,"top HY_ALU_top ALU_Logic result_or", false,-1, 63,0);
        tracep->declBus(c+1295,"top HY_ALU_top ALU_Logic LogicOpt_Mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1278,"top HY_ALU_top ALU_Logic LogicOpt_Mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top HY_ALU_top ALU_Logic LogicOpt_Mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+343,"top HY_ALU_top ALU_Logic LogicOpt_Mux out", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_Logic LogicOpt_Mux key", false,-1, 3,0);
        tracep->declQuad(c+1300,"top HY_ALU_top ALU_Logic LogicOpt_Mux default_out", false,-1, 63,0);
        tracep->declArray(c+423,"top HY_ALU_top ALU_Logic LogicOpt_Mux lut", false,-1, 203,0);
        tracep->declBus(c+1295,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1278,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1282,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+343,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 out", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 key", false,-1, 3,0);
        tracep->declQuad(c+1300,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+423,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 lut", false,-1, 203,0);
        tracep->declBus(c+1318,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+430+i*3,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+439+i*1,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+442+i*2,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+448,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+450,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 hit", false,-1);
        tracep->declBus(c+1315,"top HY_ALU_top ALU_Logic LogicOpt_Mux i0 i", false,-1, 31,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_Shift src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top HY_ALU_top ALU_Shift src2", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_Shift shift_control", false,-1, 3,0);
        tracep->declQuad(c+337,"top HY_ALU_top ALU_Shift shift_out", false,-1, 63,0);
        tracep->declBus(c+1271,"top HY_ALU_top ALU_Shift ArithRight32", false,-1, 3,0);
        tracep->declBus(c+1272,"top HY_ALU_top ALU_Shift LogicalRight32", false,-1, 3,0);
        tracep->declBus(c+1273,"top HY_ALU_top ALU_Shift LogicalLeft32", false,-1, 3,0);
        tracep->declBus(c+1274,"top HY_ALU_top ALU_Shift LogicalRight64", false,-1, 3,0);
        tracep->declBus(c+1275,"top HY_ALU_top ALU_Shift LogicalLeft64", false,-1, 3,0);
        tracep->declBus(c+1276,"top HY_ALU_top ALU_Shift ArithRight64", false,-1, 3,0);
        tracep->declQuad(c+451,"top HY_ALU_top ALU_Shift buffer", false,-1, 63,0);
        tracep->declQuad(c+453,"top HY_ALU_top ALU_Shift buffer1", false,-1, 63,0);
        tracep->declQuad(c+455,"top HY_ALU_top ALU_Shift buffer2", false,-1, 63,0);
        tracep->declQuad(c+457,"top HY_ALU_top ALU_Shift buffer3", false,-1, 63,0);
        tracep->declQuad(c+459,"top HY_ALU_top ALU_Shift buffer4", false,-1, 63,0);
        tracep->declQuad(c+461,"top HY_ALU_top ALU_Shift buffer5", false,-1, 63,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_Compare src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top HY_ALU_top ALU_Compare src2", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_Compare Compare_Control", false,-1, 3,0);
        tracep->declQuad(c+339,"top HY_ALU_top ALU_Compare Compare_Result", false,-1, 63,0);
        tracep->declBus(c+1271,"top HY_ALU_top ALU_Compare MUX_neq_unsigned", false,-1, 3,0);
        tracep->declBus(c+1272,"top HY_ALU_top ALU_Compare MUX_eq_unsigned", false,-1, 3,0);
        tracep->declBus(c+1273,"top HY_ALU_top ALU_Compare MUX_more_eq_signed", false,-1, 3,0);
        tracep->declBus(c+1274,"top HY_ALU_top ALU_Compare MUX_less_signed", false,-1, 3,0);
        tracep->declBus(c+1275,"top HY_ALU_top ALU_Compare MUX_less_unsigned", false,-1, 3,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_Compare S_src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top HY_ALU_top ALU_Compare S_src2", false,-1, 63,0);
        tracep->declBit(c+463,"top HY_ALU_top ALU_Compare non_eq_unsigned", false,-1);
        tracep->declBit(c+464,"top HY_ALU_top ALU_Compare eq_unsigned", false,-1);
        tracep->declBit(c+465,"top HY_ALU_top ALU_Compare more_eq_signed", false,-1);
        tracep->declBit(c+466,"top HY_ALU_top ALU_Compare less_signed", false,-1);
        tracep->declBit(c+467,"top HY_ALU_top ALU_Compare less_unsigned", false,-1);
        tracep->declBit(c+468,"top HY_ALU_top ALU_Compare more_eq_unsigned", false,-1);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_DIV src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top HY_ALU_top ALU_DIV src2", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_DIV control", false,-1, 3,0);
        tracep->declQuad(c+341,"top HY_ALU_top ALU_DIV result_out", false,-1, 63,0);
        tracep->declBus(c+469,"top HY_ALU_top ALU_DIV S_src1", false,-1, 31,0);
        tracep->declBus(c+470,"top HY_ALU_top ALU_DIV S_src2", false,-1, 31,0);
        tracep->declQuad(c+77,"top HY_ALU_top ALU_DIV u_src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top HY_ALU_top ALU_DIV u_src2", false,-1, 63,0);
        tracep->declBus(c+471,"top HY_ALU_top ALU_DIV divw", false,-1, 31,0);
        tracep->declBus(c+472,"top HY_ALU_top ALU_DIV remw", false,-1, 31,0);
        tracep->declQuad(c+473,"top HY_ALU_top ALU_DIV divu", false,-1, 63,0);
        tracep->declBus(c+475,"top HY_ALU_top ALU_DIV divuw", false,-1, 31,0);
        tracep->declQuad(c+476,"top HY_ALU_top ALU_DIV remu", false,-1, 63,0);
        tracep->declBus(c+478,"top HY_ALU_top ALU_DIV remuw", false,-1, 31,0);
        tracep->declBus(c+1277,"top HY_ALU_top ALU_DIV DIV NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1278,"top HY_ALU_top ALU_DIV DIV KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top HY_ALU_top ALU_DIV DIV DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+341,"top HY_ALU_top ALU_DIV DIV out", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_DIV DIV key", false,-1, 3,0);
        tracep->declQuad(c+1300,"top HY_ALU_top ALU_DIV DIV default_out", false,-1, 63,0);
        tracep->declArray(c+479,"top HY_ALU_top ALU_DIV DIV lut", false,-1, 407,0);
        tracep->declBus(c+1277,"top HY_ALU_top ALU_DIV DIV i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1278,"top HY_ALU_top ALU_DIV DIV i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top HY_ALU_top ALU_DIV DIV i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1282,"top HY_ALU_top ALU_DIV DIV i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+341,"top HY_ALU_top ALU_DIV DIV i0 out", false,-1, 63,0);
        tracep->declBus(c+97,"top HY_ALU_top ALU_DIV DIV i0 key", false,-1, 3,0);
        tracep->declQuad(c+1300,"top HY_ALU_top ALU_DIV DIV i0 default_out", false,-1, 63,0);
        tracep->declArray(c+479,"top HY_ALU_top ALU_DIV DIV i0 lut", false,-1, 407,0);
        tracep->declBus(c+1318,"top HY_ALU_top ALU_DIV DIV i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declArray(c+492+i*3,"top HY_ALU_top ALU_DIV DIV i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+510+i*1,"top HY_ALU_top ALU_DIV DIV i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+516+i*2,"top HY_ALU_top ALU_DIV DIV i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+528,"top HY_ALU_top ALU_DIV DIV i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+530,"top HY_ALU_top ALU_DIV DIV i0 hit", false,-1);
        tracep->declBus(c+1284,"top HY_ALU_top ALU_DIV DIV i0 i", false,-1, 31,0);
        tracep->declBus(c+1298,"top HY_ALU_top Adder_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1278,"top HY_ALU_top Adder_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top HY_ALU_top Adder_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+95,"top HY_ALU_top Adder_mux out", false,-1, 63,0);
        tracep->declBus(c+70,"top HY_ALU_top Adder_mux key", false,-1, 3,0);
        tracep->declQuad(c+1300,"top HY_ALU_top Adder_mux default_out", false,-1, 63,0);
        tracep->declArray(c+531,"top HY_ALU_top Adder_mux lut", false,-1, 543,0);
        tracep->declBus(c+1298,"top HY_ALU_top Adder_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1278,"top HY_ALU_top Adder_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1262,"top HY_ALU_top Adder_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1282,"top HY_ALU_top Adder_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+95,"top HY_ALU_top Adder_mux i0 out", false,-1, 63,0);
        tracep->declBus(c+70,"top HY_ALU_top Adder_mux i0 key", false,-1, 3,0);
        tracep->declQuad(c+1300,"top HY_ALU_top Adder_mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+531,"top HY_ALU_top Adder_mux i0 lut", false,-1, 543,0);
        tracep->declBus(c+1318,"top HY_ALU_top Adder_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+548+i*3,"top HY_ALU_top Adder_mux i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+572+i*1,"top HY_ALU_top Adder_mux i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+580+i*2,"top HY_ALU_top Adder_mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+596,"top HY_ALU_top Adder_mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+598,"top HY_ALU_top Adder_mux i0 hit", false,-1);
        tracep->declBus(c+1319,"top HY_ALU_top Adder_mux i0 i", false,-1, 31,0);
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
    VlWide<6>/*191:0*/ __Vtemp1871;
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
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__MEM_Enable_Connector));
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
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__HY_CU__DOT__divu));
        tracep->fullBit(oldp+110,(vlSelf->top__DOT__HY_CU__DOT__divuw));
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__HY_CU__DOT__remw));
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__HY_CU__DOT__remu));
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__HY_CU__DOT__remuw));
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__HY_CU__DOT__sltiu));
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__HY_CU__DOT__sltu));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__HY_CU__DOT__slt));
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__HY_CU__DOT__slti));
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__HY_CU__DOT__sraw));
        tracep->fullBit(oldp+119,(vlSelf->top__DOT__HY_CU__DOT__sllw));
        tracep->fullBit(oldp+120,(vlSelf->top__DOT__HY_CU__DOT__srlw));
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__HY_CU__DOT__slli));
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__HY_CU__DOT__srli));
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__HY_CU__DOT__srai));
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__HY_CU__DOT__srliw));
        tracep->fullBit(oldp+125,(vlSelf->top__DOT__HY_CU__DOT__slliw));
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__HY_CU__DOT__sraiw));
        tracep->fullBit(oldp+127,(vlSelf->top__DOT__HY_CU__DOT__sll));
        tracep->fullBit(oldp+128,(vlSelf->top__DOT__HY_CU__DOT__ld));
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__HY_CU__DOT__lw));
        tracep->fullBit(oldp+130,(vlSelf->top__DOT__HY_CU__DOT__lbu));
        tracep->fullBit(oldp+131,(vlSelf->top__DOT__HY_CU__DOT__lh));
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__HY_CU__DOT__lhu));
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__HY_CU__DOT__sd));
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__HY_CU__DOT__sw));
        tracep->fullBit(oldp+135,(vlSelf->top__DOT__HY_CU__DOT__sb));
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__HY_CU__DOT__sh));
        tracep->fullBit(oldp+137,(vlSelf->top__DOT__HY_CU__DOT__lb));
        tracep->fullBit(oldp+138,(vlSelf->top__DOT__HY_CU__DOT__lwu));
        tracep->fullBit(oldp+139,(vlSelf->top__DOT__HY_CU__DOT__andi));
        tracep->fullBit(oldp+140,(vlSelf->top__DOT__HY_CU__DOT__xori));
        tracep->fullBit(oldp+141,(vlSelf->top__DOT__HY_CU__DOT__ori));
        tracep->fullBit(oldp+142,(vlSelf->top__DOT__HY_CU__DOT__bne));
        tracep->fullBit(oldp+143,(vlSelf->top__DOT__HY_CU__DOT__beq));
        tracep->fullBit(oldp+144,(vlSelf->top__DOT__HY_CU__DOT__bge));
        tracep->fullBit(oldp+145,(vlSelf->top__DOT__HY_CU__DOT__blt));
        tracep->fullBit(oldp+146,(vlSelf->top__DOT__HY_CU__DOT__bltu));
        tracep->fullBit(oldp+147,(vlSelf->top__DOT__HY_CU__DOT__bgeu));
        tracep->fullBit(oldp+148,(vlSelf->top__DOT__HY_CU__DOT__jalr));
        tracep->fullBit(oldp+149,((((((((((((((((((
                                                   ((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
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
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__slti)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__lb)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__lwu)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__ori))));
        tracep->fullBit(oldp+150,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__sd) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh))));
        tracep->fullBit(oldp+151,(((((((IData)(vlSelf->top__DOT__HY_CU__DOT__bne) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__beq)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__bgeu))));
        tracep->fullBit(oldp+152,((((((((((((((((((
                                                   ((((IData)(vlSelf->top__DOT__HY_CU__DOT__addw) 
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
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT___and)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__divu)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__divuw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__remu)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__remuw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sll)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT___xor))));
        tracep->fullBit(oldp+153,((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__addiw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__addw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__subw)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sub)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr))));
        tracep->fullBit(oldp+154,(((IData)(vlSelf->top__DOT__HY_CU__DOT__mulw) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul))));
        tracep->fullBit(oldp+155,(((((((IData)(vlSelf->top__DOT__HY_CU__DOT__divw) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__divu)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__divuw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__remu)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__remuw))));
        tracep->fullBit(oldp+156,(((((IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__slti))));
        tracep->fullBit(oldp+157,(((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sraw) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__srlw)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__srai)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__srliw)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__sraiw)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sll))));
        tracep->fullBit(oldp+158,((((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__ld) 
                                            | (IData)(vlSelf->top__DOT__HY_CU__DOT__lw)) 
                                           | (IData)(vlSelf->top__DOT__HY_CU__DOT__lbu)) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__lh)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__lhu)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__sd)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__sw)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__sb)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__sh)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__lb)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__lwu))));
        tracep->fullBit(oldp+159,(((((((IData)(vlSelf->top__DOT__HY_CU__DOT__andi) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT___and)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT___xor)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__ori))));
        tracep->fullBit(oldp+160,(((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sub) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__mul)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__remw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__xori)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__beq)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__srliw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__srlw)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT___xor))));
        tracep->fullBit(oldp+161,((((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addiw) 
                                          | (IData)(vlSelf->top__DOT__HY_CU__DOT__add)) 
                                         | (IData)(vlSelf->top__DOT__HY_CU__DOT__sllw)) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__slliw)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT___or)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__bge)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__addw)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__divu)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__ori))));
        tracep->fullBit(oldp+162,(((((((IData)(vlSelf->top__DOT__HY_CU__DOT__subw) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__slt)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__srli)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__blt)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__divuw)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__slti))));
        tracep->fullBit(oldp+163,((((((((IData)(vlSelf->top__DOT__HY_CU__DOT__sltiu) 
                                        | (IData)(vlSelf->top__DOT__HY_CU__DOT__sltu)) 
                                       | (IData)(vlSelf->top__DOT__HY_CU__DOT__slli)) 
                                      | (IData)(vlSelf->top__DOT__HY_CU__DOT__bltu)) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__jalr)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__remu)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__sll))));
        tracep->fullBit(oldp+164,((((IData)(vlSelf->top__DOT__HY_CU__DOT__srai) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__remuw)) 
                                   | (IData)(vlSelf->top__DOT__HY_CU__DOT__bgeu))));
        tracep->fullSData(oldp+165,(vlSelf->top__DOT__HY_CU__DOT__func_signal),11);
        tracep->fullCData(oldp+166,(vlSelf->top__DOT__HY_CU__DOT__ALU_inside_signal),6);
        tracep->fullCData(oldp+167,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__lut_out),4);
        tracep->fullBit(oldp+168,(vlSelf->top__DOT__HY_CU__DOT__ALU_Inside_choose__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+169,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__lut_out),4);
        tracep->fullBit(oldp+170,(vlSelf->top__DOT__HY_CU__DOT__func_choose__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+171,(vlSelf->top__DOT__HY_CU__DOT____Vcellinp__CU_ImmType____pinNumber2),5);
        tracep->fullCData(oldp+172,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__lut_out),3);
        tracep->fullBit(oldp+173,(vlSelf->top__DOT__HY_CU__DOT__CU_ImmType__DOT__i0__DOT__hit));
        tracep->fullSData(oldp+174,(vlSelf->top__DOT__Sign_Extend__DOT__immS),12);
        tracep->fullIData(oldp+175,(vlSelf->top__DOT__Sign_Extend__DOT__immJ),21);
        tracep->fullSData(oldp+176,(vlSelf->top__DOT__Sign_Extend__DOT__immB),13);
        tracep->fullWData(oldp+177,(vlSelf->top__DOT__Sign_Extend__DOT____Vcellinp__SEXT____pinNumber4),335);
        tracep->fullWData(oldp+188,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+191,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+194,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+197,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+200,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+203,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+204,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+205,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+206,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+207,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__key_list[4]),3);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+220,(vlSelf->top__DOT__Sign_Extend__DOT__SEXT__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+223,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+226,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+227,(vlSelf->top__DOT____Vcellinp__MUX_Reg_PC_2ALU____pinNumber4),130);
        tracep->fullWData(oldp+232,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+235,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+238,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+239,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+246,(vlSelf->top__DOT__MUX_Reg_PC_2ALU__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+247,(vlSelf->top__DOT____Vcellinp__MUX_RS2_imm_2ALU____pinNumber4),130);
        tracep->fullWData(oldp+252,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+255,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+258,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+259,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+266,(vlSelf->top__DOT__MUX_RS2_imm_2ALU__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+267,(vlSelf->top__DOT____Vcellinp__MUX_ALU_MEM____pinNumber4),130);
        tracep->fullWData(oldp+272,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+275,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+278,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+279,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+280,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+286,(vlSelf->top__DOT__MUX_ALU_MEM__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+287,(vlSelf->top__DOT____Vcellinp__MUX_PC_ALU____pinNumber4),130);
        tracep->fullWData(oldp+292,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+295,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+298,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+299,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+304,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+306,(vlSelf->top__DOT__MUX_PC_ALU__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+307,(vlSelf->top__DOT____Vcellinp__MUX_NPC_Branch_Jump____pinNumber4),198);
        tracep->fullWData(oldp+314,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+317,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+320,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+323,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+324,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+325,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__key_list[2]),2);
        tracep->fullQData(oldp+326,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+328,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+330,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+332,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+334,(vlSelf->top__DOT__MUX_NPC_Branch_Jump__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+335,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_out),64);
        tracep->fullQData(oldp+337,(vlSelf->top__DOT__HY_ALU_top__DOT__Shift_out),64);
        tracep->fullQData(oldp+339,(vlSelf->top__DOT__HY_ALU_top__DOT__Compare_out),64);
        tracep->fullQData(oldp+341,(vlSelf->top__DOT__HY_ALU_top__DOT__DIV_out),64);
        tracep->fullQData(oldp+343,(vlSelf->top__DOT__HY_ALU_top__DOT__Logic_out),64);
        tracep->fullQData(oldp+345,(vlSelf->top__DOT__HY_ALU_top__DOT__MUL_out),64);
        tracep->fullQData(oldp+347,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultAdd),64);
        tracep->fullQData(oldp+349,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__resultSub),64);
        tracep->fullWData(oldp+351,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT____Vcellinp__Adder_mux____pinNumber4),340);
        tracep->fullWData(oldp+362,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+365,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+368,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+371,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+374,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__pair_list[4]),68);
        tracep->fullCData(oldp+377,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+378,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+379,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+380,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+381,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__key_list[4]),4);
        tracep->fullQData(oldp+382,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+384,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+386,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+388,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+390,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+392,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+394,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_adder__DOT__Adder_mux__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+395,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__result),64);
        tracep->fullWData(oldp+397,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT____Vcellinp__MUX_mul____pinNumber4),136);
        tracep->fullWData(oldp+402,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+405,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullCData(oldp+408,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+409,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__key_list[1]),4);
        tracep->fullQData(oldp+410,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+412,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+414,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+416,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_mul__DOT__MUX_mul__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+417,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                     & vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
        tracep->fullQData(oldp+419,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                     ^ vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
        tracep->fullQData(oldp+421,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                     | vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
        tracep->fullWData(oldp+423,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT____Vcellinp__LogicOpt_Mux____pinNumber4),204);
        tracep->fullWData(oldp+430,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+433,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+436,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullCData(oldp+439,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+440,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+441,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__key_list[2]),4);
        tracep->fullQData(oldp+442,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+444,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+446,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+448,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+450,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Logic__DOT__LogicOpt_Mux__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+451,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer),64);
        tracep->fullQData(oldp+453,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer1),64);
        tracep->fullQData(oldp+455,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer2),64);
        tracep->fullQData(oldp+457,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer3),64);
        tracep->fullQData(oldp+459,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer4),64);
        tracep->fullQData(oldp+461,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_Shift__DOT__buffer5),64);
        tracep->fullBit(oldp+463,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                   != vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
        tracep->fullBit(oldp+464,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                   == vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
        tracep->fullBit(oldp+465,(VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result, vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
        tracep->fullBit(oldp+466,(VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result, vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
        tracep->fullBit(oldp+467,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                   < vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
        tracep->fullBit(oldp+468,((vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result 
                                   >= vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)));
        tracep->fullIData(oldp+469,((IData)(vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result)),32);
        tracep->fullIData(oldp+470,((IData)(vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),32);
        tracep->fullIData(oldp+471,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__divw),32);
        tracep->fullIData(oldp+472,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__remw),32);
        tracep->fullQData(oldp+473,(VL_DIV_QQQ(64, vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result, vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
        tracep->fullIData(oldp+475,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__divuw),32);
        tracep->fullQData(oldp+476,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__MUX_Reg_PC_2ALU_Result, vlSelf->top__DOT__MUX_Reg_imm_2ALU_Result)),64);
        tracep->fullIData(oldp+478,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__remuw),32);
        tracep->fullWData(oldp+479,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT____Vcellinp__DIV____pinNumber4),408);
        tracep->fullWData(oldp+492,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+495,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+498,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+501,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+504,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[4]),68);
        tracep->fullWData(oldp+507,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__pair_list[5]),68);
        tracep->fullCData(oldp+510,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+511,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+512,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+513,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+514,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+515,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__key_list[5]),4);
        tracep->fullQData(oldp+516,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+518,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+520,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+522,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+524,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+526,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+528,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+530,(vlSelf->top__DOT__HY_ALU_top__DOT__ALU_DIV__DOT__DIV__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+531,(vlSelf->top__DOT__HY_ALU_top__DOT____Vcellinp__Adder_mux____pinNumber4),544);
        tracep->fullWData(oldp+548,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+551,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+554,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+557,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+560,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[4]),68);
        tracep->fullWData(oldp+563,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[5]),68);
        tracep->fullWData(oldp+566,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[6]),68);
        tracep->fullWData(oldp+569,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__pair_list[7]),68);
        tracep->fullCData(oldp+572,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+573,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+574,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+575,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+576,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+577,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+578,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+579,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__key_list[7]),4);
        tracep->fullQData(oldp+580,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+582,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+584,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+586,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+588,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+590,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+592,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+594,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+596,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+598,(vlSelf->top__DOT__HY_ALU_top__DOT__Adder_mux__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+599,(vlSelf->top__DOT__PC_Wire),64);
        tracep->fullQData(oldp+601,((4ULL + vlSelf->top__DOT__PC_Wire)),64);
        tracep->fullQData(oldp+603,(vlSelf->top__DOT__HY_RegFile__DOT__Zero),64);
        tracep->fullQData(oldp+605,(vlSelf->top__DOT__HY_RegFile__DOT__ra),64);
        tracep->fullQData(oldp+607,(vlSelf->top__DOT__HY_RegFile__DOT__sp),64);
        tracep->fullQData(oldp+609,(vlSelf->top__DOT__HY_RegFile__DOT__gp),64);
        tracep->fullQData(oldp+611,(vlSelf->top__DOT__HY_RegFile__DOT__tp),64);
        tracep->fullQData(oldp+613,(vlSelf->top__DOT__HY_RegFile__DOT__t0),64);
        tracep->fullQData(oldp+615,(vlSelf->top__DOT__HY_RegFile__DOT__t1),64);
        tracep->fullQData(oldp+617,(vlSelf->top__DOT__HY_RegFile__DOT__t2),64);
        tracep->fullQData(oldp+619,(vlSelf->top__DOT__HY_RegFile__DOT__s0),64);
        tracep->fullQData(oldp+621,(vlSelf->top__DOT__HY_RegFile__DOT__s1),64);
        tracep->fullQData(oldp+623,(vlSelf->top__DOT__HY_RegFile__DOT__a0),64);
        tracep->fullQData(oldp+625,(vlSelf->top__DOT__HY_RegFile__DOT__a1),64);
        tracep->fullQData(oldp+627,(vlSelf->top__DOT__HY_RegFile__DOT__a2),64);
        tracep->fullQData(oldp+629,(vlSelf->top__DOT__HY_RegFile__DOT__a3),64);
        tracep->fullQData(oldp+631,(vlSelf->top__DOT__HY_RegFile__DOT__a4),64);
        tracep->fullQData(oldp+633,(vlSelf->top__DOT__HY_RegFile__DOT__a5),64);
        tracep->fullQData(oldp+635,(vlSelf->top__DOT__HY_RegFile__DOT__a6),64);
        tracep->fullQData(oldp+637,(vlSelf->top__DOT__HY_RegFile__DOT__a7),64);
        tracep->fullQData(oldp+639,(vlSelf->top__DOT__HY_RegFile__DOT__s2),64);
        tracep->fullQData(oldp+641,(vlSelf->top__DOT__HY_RegFile__DOT__s3),64);
        tracep->fullQData(oldp+643,(vlSelf->top__DOT__HY_RegFile__DOT__s4),64);
        tracep->fullQData(oldp+645,(vlSelf->top__DOT__HY_RegFile__DOT__s5),64);
        tracep->fullQData(oldp+647,(vlSelf->top__DOT__HY_RegFile__DOT__s6),64);
        tracep->fullQData(oldp+649,(vlSelf->top__DOT__HY_RegFile__DOT__s7),64);
        tracep->fullQData(oldp+651,(vlSelf->top__DOT__HY_RegFile__DOT__s8),64);
        tracep->fullQData(oldp+653,(vlSelf->top__DOT__HY_RegFile__DOT__s9),64);
        tracep->fullQData(oldp+655,(vlSelf->top__DOT__HY_RegFile__DOT__s10),64);
        tracep->fullQData(oldp+657,(vlSelf->top__DOT__HY_RegFile__DOT__s11),64);
        tracep->fullQData(oldp+659,(vlSelf->top__DOT__HY_RegFile__DOT__t3),64);
        tracep->fullQData(oldp+661,(vlSelf->top__DOT__HY_RegFile__DOT__t4),64);
        tracep->fullQData(oldp+663,(vlSelf->top__DOT__HY_RegFile__DOT__t5),64);
        tracep->fullQData(oldp+665,(vlSelf->top__DOT__HY_RegFile__DOT__t6),64);
        tracep->fullWData(oldp+667,(vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS1_Out____pinNumber4),2208);
        tracep->fullWData(oldp+736,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+739,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+742,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+745,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+748,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+751,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+754,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+757,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+760,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+763,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+766,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+769,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+772,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+775,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+778,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+781,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+784,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+787,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+790,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+793,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+796,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+799,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+802,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+805,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+808,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+811,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+814,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+817,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+820,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+823,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+826,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullWData(oldp+829,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__pair_list[31]),69);
        tracep->fullCData(oldp+832,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+833,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+834,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+835,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+836,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+837,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+838,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+839,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+840,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+841,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+842,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+843,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+844,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+845,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+846,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+847,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+848,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+849,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+850,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+851,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+852,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+853,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+854,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+855,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+856,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+857,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+858,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+859,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+860,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+861,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+862,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[30]),5);
        tracep->fullCData(oldp+863,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__key_list[31]),5);
        tracep->fullQData(oldp+864,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+866,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+868,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+870,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+872,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+874,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+876,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+878,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+880,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+882,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+884,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+886,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+888,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+890,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+892,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+894,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+896,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+898,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+900,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+902,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+904,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+906,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+908,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+910,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+912,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+914,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+916,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+918,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+920,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+922,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+924,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[30]),64);
        tracep->fullQData(oldp+926,(vlSelf->top__DOT__HY_RegFile__DOT__RS1_Out__DOT__i0__DOT__data_list[31]),64);
        tracep->fullWData(oldp+928,(vlSelf->top__DOT__HY_RegFile__DOT____Vcellinp__RS2_Out____pinNumber4),2208);
        tracep->fullWData(oldp+997,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+1000,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+1003,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+1006,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+1009,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+1012,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+1015,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+1018,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+1021,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+1024,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+1027,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+1030,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+1033,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+1036,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+1039,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+1042,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+1045,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+1048,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+1051,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+1054,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+1057,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+1060,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+1063,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+1066,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+1069,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+1072,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+1075,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+1078,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[27]),69);
        tracep->fullWData(oldp+1081,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[28]),69);
        tracep->fullWData(oldp+1084,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[29]),69);
        tracep->fullWData(oldp+1087,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[30]),69);
        tracep->fullWData(oldp+1090,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__pair_list[31]),69);
        tracep->fullCData(oldp+1093,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+1094,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+1095,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+1096,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+1097,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+1098,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+1099,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+1100,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+1101,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+1102,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+1103,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+1104,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+1105,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+1106,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+1107,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+1108,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+1109,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+1110,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+1111,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[18]),5);
        tracep->fullCData(oldp+1112,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[19]),5);
        tracep->fullCData(oldp+1113,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[20]),5);
        tracep->fullCData(oldp+1114,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[21]),5);
        tracep->fullCData(oldp+1115,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[22]),5);
        tracep->fullCData(oldp+1116,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[23]),5);
        tracep->fullCData(oldp+1117,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[24]),5);
        tracep->fullCData(oldp+1118,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[25]),5);
        tracep->fullCData(oldp+1119,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[26]),5);
        tracep->fullCData(oldp+1120,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[27]),5);
        tracep->fullCData(oldp+1121,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[28]),5);
        tracep->fullCData(oldp+1122,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[29]),5);
        tracep->fullCData(oldp+1123,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[30]),5);
        tracep->fullCData(oldp+1124,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__key_list[31]),5);
        tracep->fullQData(oldp+1125,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1127,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1129,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1131,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1133,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1135,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1137,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1139,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+1141,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+1143,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+1145,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+1147,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+1149,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+1151,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+1153,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+1155,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+1157,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+1159,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+1161,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+1163,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+1165,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+1167,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+1169,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+1171,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+1173,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+1175,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+1177,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+1179,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+1181,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+1183,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+1185,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[30]),64);
        tracep->fullQData(oldp+1187,(vlSelf->top__DOT__HY_RegFile__DOT__RS2_Out__DOT__i0__DOT__data_list[31]),64);
        tracep->fullBit(oldp+1189,(vlSelf->clk));
        tracep->fullBit(oldp+1190,(vlSelf->rst));
        tracep->fullIData(oldp+1191,(vlSelf->instr_in),32);
        tracep->fullQData(oldp+1192,(vlSelf->SEXT_result),64);
        tracep->fullQData(oldp+1194,(vlSelf->PC_Test),64);
        tracep->fullCData(oldp+1196,(vlSelf->SEXT_Control_out),3);
        tracep->fullQData(oldp+1197,(vlSelf->RS1_OUTPUT),64);
        tracep->fullQData(oldp+1199,(vlSelf->RS2_OUTPUT),64);
        tracep->fullQData(oldp+1201,(vlSelf->ALU_Result),64);
        tracep->fullBit(oldp+1203,(vlSelf->MEM_Enable));
        tracep->fullBit(oldp+1204,(vlSelf->MEM_Read));
        tracep->fullCData(oldp+1205,(vlSelf->MEM_DataLenth),4);
        tracep->fullQData(oldp+1206,(vlSelf->MEM_Addr),64);
        tracep->fullQData(oldp+1208,(vlSelf->MEM_Dataoutput),64);
        tracep->fullQData(oldp+1210,(vlSelf->MEM_Datainput),64);
        tracep->fullBit(oldp+1212,(vlSelf->WriteBack_Enable_result));
        tracep->fullBit(oldp+1213,(vlSelf->C_RS1_PC_Connector_result));
        tracep->fullBit(oldp+1214,(vlSelf->C_RS2_imm_Connector_result));
        tracep->fullBit(oldp+1215,(vlSelf->C_ALU_MEM_Connector_result));
        tracep->fullBit(oldp+1216,(vlSelf->C_ALU_NPC_In_Connector_result));
        tracep->fullCData(oldp+1217,(vlSelf->C_NPC_Branch_Jump_Connector_result),2);
        tracep->fullQData(oldp+1218,((vlSelf->top__DOT__PC_Wire 
                                      + vlSelf->top__DOT__SEXT_Connector)),64);
        tracep->fullCData(oldp+1220,((0xffU & (- (IData)(
                                                         (0x100073U 
                                                          == vlSelf->instr_in))))),8);
        tracep->fullCData(oldp+1221,((0x7fU & vlSelf->instr_in)),7);
        tracep->fullCData(oldp+1222,((7U & (vlSelf->instr_in 
                                            >> 0xcU))),3);
        tracep->fullCData(oldp+1223,((vlSelf->instr_in 
                                      >> 0x19U)),7);
        tracep->fullCData(oldp+1224,((vlSelf->instr_in 
                                      >> 0x1aU)),6);
        tracep->fullBit(oldp+1225,((0x13U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1226,((0x3bU == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1227,((0x33U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1228,((0x1bU == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1229,((3U == (0x7fU & vlSelf->instr_in))));
        tracep->fullBit(oldp+1230,((0x23U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1231,((0x63U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1232,((0x6fU == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1233,((0x67U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1234,((0x17U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1235,((0x37U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1236,((0x73U == (0x7fU 
                                              & vlSelf->instr_in))));
        tracep->fullBit(oldp+1237,((0U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1238,((4U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1239,((6U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1240,((3U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1241,((2U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1242,((5U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1243,((1U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1244,((7U == (7U & (vlSelf->instr_in 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+1245,((0U == (vlSelf->instr_in 
                                           >> 0x19U))));
        tracep->fullBit(oldp+1246,((1U == (vlSelf->instr_in 
                                           >> 0x19U))));
        tracep->fullBit(oldp+1247,((0U == (vlSelf->instr_in 
                                           >> 0x1aU))));
        tracep->fullBit(oldp+1248,((0x10U == (vlSelf->instr_in 
                                              >> 0x1aU))));
        tracep->fullBit(oldp+1249,((0x100073U == vlSelf->instr_in)));
        tracep->fullBit(oldp+1250,(((0x17U == (0x7fU 
                                               & vlSelf->instr_in)) 
                                    | (0x37U == (0x7fU 
                                                 & vlSelf->instr_in)))));
        tracep->fullBit(oldp+1251,(((((((((((((((((
                                                   ((((((IData)(vlSelf->top__DOT__HY_CU__DOT__addi) 
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
                                       | (0x17U == 
                                          (0x7fU & vlSelf->instr_in))) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSelf->instr_in))) 
                                     | (IData)(vlSelf->top__DOT__HY_CU__DOT__lb)) 
                                    | (IData)(vlSelf->top__DOT__HY_CU__DOT__lwu))));
        tracep->fullSData(oldp+1252,((vlSelf->instr_in 
                                      >> 0x14U)),12);
        tracep->fullIData(oldp+1253,((0xfffff000U & vlSelf->instr_in)),32);
        tracep->fullCData(oldp+1254,((0x1fU & (vlSelf->instr_in 
                                               >> 0xfU))),5);
        tracep->fullCData(oldp+1255,((0x1fU & (vlSelf->instr_in 
                                               >> 0x14U))),5);
        tracep->fullCData(oldp+1256,((0x1fU & (vlSelf->instr_in 
                                               >> 7U))),5);
        tracep->fullBit(oldp+1257,(0U));
        tracep->fullBit(oldp+1258,(1U));
        tracep->fullCData(oldp+1259,(0U),2);
        tracep->fullCData(oldp+1260,(1U),2);
        tracep->fullCData(oldp+1261,(2U),2);
        tracep->fullIData(oldp+1262,(0x40U),32);
        tracep->fullQData(oldp+1263,(0x80000000ULL),64);
        tracep->fullBit(oldp+1265,(1U));
        tracep->fullCData(oldp+1266,(1U),3);
        tracep->fullCData(oldp+1267,(2U),3);
        tracep->fullCData(oldp+1268,(3U),3);
        tracep->fullCData(oldp+1269,(4U),3);
        tracep->fullCData(oldp+1270,(5U),3);
        tracep->fullCData(oldp+1271,(0U),4);
        tracep->fullCData(oldp+1272,(1U),4);
        tracep->fullCData(oldp+1273,(2U),4);
        tracep->fullCData(oldp+1274,(3U),4);
        tracep->fullCData(oldp+1275,(4U),4);
        tracep->fullCData(oldp+1276,(5U),4);
        tracep->fullIData(oldp+1277,(6U),32);
        tracep->fullIData(oldp+1278,(4U),32);
        tracep->fullCData(oldp+1279,(0xfU),4);
        tracep->fullQData(oldp+1280,(0x801012084309015ULL),60);
        tracep->fullIData(oldp+1282,(1U),32);
        tracep->fullIData(oldp+1283,(0xaU),32);
        tracep->fullIData(oldp+1284,(6U),32);
        tracep->fullIData(oldp+1285,(0xbU),32);
        __Vtemp1871[0U] = 0x130017U;
        __Vtemp1871[1U] = 0x40104010U;
        __Vtemp1871[2U] = 0x4100010U;
        __Vtemp1871[3U] = 0x3100410U;
        __Vtemp1871[4U] = 0x100290U;
        __Vtemp1871[5U] = 0x10U;
        tracep->fullWData(oldp+1286,(__Vtemp1871),165);
        tracep->fullIData(oldp+1292,(0xfU),32);
        tracep->fullIData(oldp+1293,(0xbU),32);
        tracep->fullIData(oldp+1294,(5U),32);
        tracep->fullIData(oldp+1295,(3U),32);
        tracep->fullQData(oldp+1296,(0x814223140dULL),40);
        tracep->fullIData(oldp+1298,(8U),32);
        tracep->fullIData(oldp+1299,(5U),32);
        tracep->fullQData(oldp+1300,(0ULL),64);
        tracep->fullIData(oldp+1302,(0x43U),32);
        tracep->fullIData(oldp+1303,(0x20U),32);
        tracep->fullIData(oldp+1304,(0x45U),32);
        tracep->fullIData(oldp+1305,(0x20U),32);
        tracep->fullCData(oldp+1306,(8U),4);
        tracep->fullCData(oldp+1307,(9U),4);
        tracep->fullCData(oldp+1308,(0xaU),4);
        tracep->fullCData(oldp+1309,(0xbU),4);
        tracep->fullIData(oldp+1310,(0U),32);
        tracep->fullIData(oldp+1311,(2U),32);
        tracep->fullIData(oldp+1312,(0x41U),32);
        tracep->fullIData(oldp+1313,(2U),32);
        tracep->fullIData(oldp+1314,(0x42U),32);
        tracep->fullIData(oldp+1315,(3U),32);
        tracep->fullCData(oldp+1316,(6U),4);
        tracep->fullCData(oldp+1317,(7U),4);
        tracep->fullIData(oldp+1318,(0x44U),32);
        tracep->fullIData(oldp+1319,(8U),32);
    }
}
