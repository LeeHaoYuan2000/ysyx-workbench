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
        tracep->declBit(c+38,"clk", false,-1);
        tracep->declBit(c+39,"rst", false,-1);
        tracep->declQuad(c+40,"READ_DATA", false,-1, 63,0);
        tracep->declBit(c+42,"READ_FINISH", false,-1);
        tracep->declBit(c+43,"READ_SIGNAL", false,-1);
        tracep->declQuad(c+44,"READ_ADDR", false,-1, 63,0);
        tracep->declBit(c+46,"ec_finish", false,-1);
        tracep->declQuad(c+47,"ex_data", false,-1, 63,0);
        tracep->declBit(c+49,"INSTR_ARRIVE", false,-1);
        tracep->declBit(c+50,"INSTR_Complete", false,-1);
        tracep->declBus(c+51,"INSTR_DATA", false,-1, 31,0);
        tracep->declBit(c+38,"top clk", false,-1);
        tracep->declBit(c+39,"top rst", false,-1);
        tracep->declQuad(c+40,"top READ_DATA", false,-1, 63,0);
        tracep->declBit(c+42,"top READ_FINISH", false,-1);
        tracep->declBit(c+43,"top READ_SIGNAL", false,-1);
        tracep->declQuad(c+44,"top READ_ADDR", false,-1, 63,0);
        tracep->declBit(c+46,"top ec_finish", false,-1);
        tracep->declQuad(c+47,"top ex_data", false,-1, 63,0);
        tracep->declBit(c+49,"top INSTR_ARRIVE", false,-1);
        tracep->declBit(c+50,"top INSTR_Complete", false,-1);
        tracep->declBus(c+51,"top INSTR_DATA", false,-1, 31,0);
        tracep->declQuad(c+1,"top PC_TO_IFU", false,-1, 63,0);
        tracep->declQuad(c+3,"top INSTR_TO_IFU", false,-1, 63,0);
        tracep->declQuad(c+5,"top INSTR_ADDR", false,-1, 63,0);
        tracep->declBit(c+7,"top READ_INSTR_START", false,-1);
        tracep->declBit(c+8,"top READ_INSTR_FINISH", false,-1);
        tracep->declQuad(c+9,"top PC_NEXT", false,-1, 63,0);
        tracep->declBit(c+38,"top pc clk", false,-1);
        tracep->declBit(c+39,"top pc rst", false,-1);
        tracep->declBit(c+50,"top pc enable", false,-1);
        tracep->declQuad(c+9,"top pc PC_Next", false,-1, 63,0);
        tracep->declQuad(c+1,"top pc PC", false,-1, 63,0);
        tracep->declQuad(c+1,"top pc_adder PC", false,-1, 63,0);
        tracep->declQuad(c+9,"top pc_adder PC_Next", false,-1, 63,0);
        tracep->declBit(c+38,"top ifu clk", false,-1);
        tracep->declBit(c+39,"top ifu rst", false,-1);
        tracep->declQuad(c+1,"top ifu PC_IN", false,-1, 63,0);
        tracep->declBus(c+51,"top ifu INSTR", false,-1, 31,0);
        tracep->declBit(c+7,"top ifu read_instr_start", false,-1);
        tracep->declBit(c+8,"top ifu read_instr_finish", false,-1);
        tracep->declBit(c+49,"top ifu instr_arrive", false,-1);
        tracep->declBit(c+50,"top ifu instr_ex_complete", false,-1);
        tracep->declQuad(c+5,"top ifu PC_addr", false,-1, 63,0);
        tracep->declBus(c+11,"top ifu INSTR_READ", false,-1, 31,0);
        tracep->declBit(c+38,"top axi4_read_with_arbiter CLK", false,-1);
        tracep->declBit(c+39,"top axi4_read_with_arbiter RST", false,-1);
        tracep->declBit(c+7,"top axi4_read_with_arbiter read_req_instr", false,-1);
        tracep->declBit(c+52,"top axi4_read_with_arbiter read_req_ex", false,-1);
        tracep->declBit(c+8,"top axi4_read_with_arbiter instr_finish", false,-1);
        tracep->declBit(c+46,"top axi4_read_with_arbiter ex_finish", false,-1);
        tracep->declQuad(c+5,"top axi4_read_with_arbiter instr_addr", false,-1, 63,0);
        tracep->declQuad(c+53,"top axi4_read_with_arbiter ex_addr", false,-1, 63,0);
        tracep->declQuad(c+3,"top axi4_read_with_arbiter instr_data", false,-1, 63,0);
        tracep->declQuad(c+47,"top axi4_read_with_arbiter ex_data", false,-1, 63,0);
        tracep->declBit(c+43,"top axi4_read_with_arbiter Read_SIGNAL", false,-1);
        tracep->declQuad(c+44,"top axi4_read_with_arbiter Read_ADDRESS", false,-1, 63,0);
        tracep->declBit(c+42,"top axi4_read_with_arbiter DATA_ARRIVE", false,-1);
        tracep->declQuad(c+40,"top axi4_read_with_arbiter DATA_OUTSIDE", false,-1, 63,0);
        tracep->declBus(c+12,"top axi4_read_with_arbiter req_combine", false,-1, 1,0);
        tracep->declBus(c+13,"top axi4_read_with_arbiter choose_channel", false,-1, 1,0);
        tracep->declBit(c+14,"top axi4_read_with_arbiter aribter_release", false,-1);
        tracep->declQuad(c+15,"top axi4_read_with_arbiter read_addr", false,-1, 63,0);
        tracep->declQuad(c+17,"top axi4_read_with_arbiter read_data", false,-1, 63,0);
        tracep->declBit(c+19,"top axi4_read_with_arbiter read_req", false,-1);
        tracep->declBit(c+20,"top axi4_read_with_arbiter read_finish", false,-1);
        tracep->declBit(c+38,"top axi4_read_with_arbiter rr_arbiter CLK", false,-1);
        tracep->declBit(c+39,"top axi4_read_with_arbiter rr_arbiter RST", false,-1);
        tracep->declBus(c+12,"top axi4_read_with_arbiter rr_arbiter req", false,-1, 1,0);
        tracep->declBit(c+14,"top axi4_read_with_arbiter rr_arbiter reg_release", false,-1);
        tracep->declBus(c+13,"top axi4_read_with_arbiter rr_arbiter grant", false,-1, 1,0);
        tracep->declBus(c+55,"top axi4_read_with_arbiter rr_arbiter IDLE", false,-1, 2,0);
        tracep->declBus(c+56,"top axi4_read_with_arbiter rr_arbiter Arbiter_State", false,-1, 2,0);
        tracep->declBus(c+21,"top axi4_read_with_arbiter rr_arbiter cur_state", false,-1, 2,0);
        tracep->declBus(c+22,"top axi4_read_with_arbiter rr_arbiter next_state", false,-1, 2,0);
        tracep->declBus(c+23,"top axi4_read_with_arbiter rr_arbiter pri", false,-1, 1,0);
        tracep->declBus(c+24,"top axi4_read_with_arbiter rr_arbiter req_shot", false,-1, 1,0);
        tracep->declBus(c+25,"top axi4_read_with_arbiter rr_arbiter result_req", false,-1, 2,0);
        tracep->declBit(c+38,"top axi4_read_with_arbiter AXI4_READ_MODUAL CLK", false,-1);
        tracep->declBit(c+39,"top axi4_read_with_arbiter AXI4_READ_MODUAL RST", false,-1);
        tracep->declQuad(c+15,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_Addr", false,-1, 63,0);
        tracep->declBit(c+19,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_Request", false,-1);
        tracep->declBit(c+20,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_Finish", false,-1);
        tracep->declQuad(c+17,"top axi4_read_with_arbiter AXI4_READ_MODUAL Data_Out", false,-1, 63,0);
        tracep->declBit(c+43,"top axi4_read_with_arbiter AXI4_READ_MODUAL Read_SIGNAL", false,-1);
        tracep->declQuad(c+44,"top axi4_read_with_arbiter AXI4_READ_MODUAL Read_ADDRESS", false,-1, 63,0);
        tracep->declBit(c+42,"top axi4_read_with_arbiter AXI4_READ_MODUAL DATA_ARRIVE", false,-1);
        tracep->declQuad(c+40,"top axi4_read_with_arbiter AXI4_READ_MODUAL DATA_OUTSIDE", false,-1, 63,0);
        tracep->declQuad(c+26,"top axi4_read_with_arbiter AXI4_READ_MODUAL AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+28,"top axi4_read_with_arbiter AXI4_READ_MODUAL AR_VALID", false,-1);
        tracep->declBit(c+29,"top axi4_read_with_arbiter AXI4_READ_MODUAL AR_READY", false,-1);
        tracep->declQuad(c+30,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_DATA", false,-1, 63,0);
        tracep->declBus(c+32,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_RESP", false,-1, 1,0);
        tracep->declBit(c+33,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_VALID", false,-1);
        tracep->declBit(c+34,"top axi4_read_with_arbiter AXI4_READ_MODUAL R_READY", false,-1);
        tracep->declBit(c+38,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master CLK", false,-1);
        tracep->declBit(c+39,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master RST", false,-1);
        tracep->declQuad(c+26,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+28,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master AR_VALID", false,-1);
        tracep->declBit(c+29,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master AR_READY", false,-1);
        tracep->declQuad(c+30,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_DATA", false,-1, 63,0);
        tracep->declBus(c+32,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_RESP", false,-1, 1,0);
        tracep->declBit(c+33,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_VALID", false,-1);
        tracep->declBit(c+34,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_READY", false,-1);
        tracep->declQuad(c+15,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_Addr", false,-1, 63,0);
        tracep->declBit(c+19,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_Request", false,-1);
        tracep->declBit(c+20,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master R_Finish", false,-1);
        tracep->declQuad(c+17,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master Data_Out", false,-1, 63,0);
        tracep->declBit(c+35,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_master lock_state", false,-1);
        tracep->declBit(c+38,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave CLK", false,-1);
        tracep->declBit(c+39,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave RST", false,-1);
        tracep->declQuad(c+26,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+28,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave AR_VALID", false,-1);
        tracep->declBit(c+29,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave AR_READY", false,-1);
        tracep->declQuad(c+30,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave R_DATA", false,-1, 63,0);
        tracep->declBus(c+32,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave R_RESP", false,-1, 1,0);
        tracep->declBit(c+33,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave R_VALID", false,-1);
        tracep->declBit(c+34,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave R_READY", false,-1);
        tracep->declBit(c+43,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave Read_SIGNAL", false,-1);
        tracep->declQuad(c+44,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave Read_ADDRESS", false,-1, 63,0);
        tracep->declBit(c+42,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave DATA_ARRIVE", false,-1);
        tracep->declQuad(c+40,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave DATA_OUTSIDE", false,-1, 63,0);
        tracep->declQuad(c+36,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave data_address", false,-1, 63,0);
        tracep->declQuad(c+30,"top axi4_read_with_arbiter AXI4_READ_MODUAL read_slave data_buf", false,-1, 63,0);
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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__PC_TO_IFU),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__INSTR_TO_IFU),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__INSTR_ADDR),64);
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__READ_INSTR_START));
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__READ_INSTR_FINISH));
        tracep->fullQData(oldp+9,((4ULL + vlSelf->top__DOT__PC_TO_IFU)),64);
        tracep->fullIData(oldp+11,((IData)(vlSelf->top__DOT__INSTR_TO_IFU)),32);
        tracep->fullCData(oldp+12,(((IData)(vlSelf->top__DOT__READ_INSTR_START) 
                                    << 1U)),2);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel),2);
        tracep->fullBit(oldp+14,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__aribter_release));
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_addr),64);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_data),64);
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_req));
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_finish));
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__cur_state),3);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__next_state),3);
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri),2);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot),2);
        tracep->fullCData(oldp+25,(((~ ((4U | (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot)) 
                                        - (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri))) 
                                    & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot))),3);
        tracep->fullQData(oldp+26,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_ADDR),64);
        tracep->fullBit(oldp+28,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_VALID));
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_READY));
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_buf),64);
        tracep->fullCData(oldp+32,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_RESP),2);
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID));
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_READY));
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state));
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address),64);
        tracep->fullBit(oldp+38,(vlSelf->clk));
        tracep->fullBit(oldp+39,(vlSelf->rst));
        tracep->fullQData(oldp+40,(vlSelf->READ_DATA),64);
        tracep->fullBit(oldp+42,(vlSelf->READ_FINISH));
        tracep->fullBit(oldp+43,(vlSelf->READ_SIGNAL));
        tracep->fullQData(oldp+44,(vlSelf->READ_ADDR),64);
        tracep->fullBit(oldp+46,(vlSelf->ec_finish));
        tracep->fullQData(oldp+47,(vlSelf->ex_data),64);
        tracep->fullBit(oldp+49,(vlSelf->INSTR_ARRIVE));
        tracep->fullBit(oldp+50,(vlSelf->INSTR_Complete));
        tracep->fullIData(oldp+51,(vlSelf->INSTR_DATA),32);
        tracep->fullBit(oldp+52,(0U));
        tracep->fullQData(oldp+53,(0ULL),64);
        tracep->fullCData(oldp+55,(1U),3);
        tracep->fullCData(oldp+56,(2U),3);
    }
}
