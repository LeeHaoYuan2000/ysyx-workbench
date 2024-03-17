// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAXI4_READ_TOP__Syms.h"


void VAXI4_READ_TOP___024root__traceInitSub0(VAXI4_READ_TOP___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VAXI4_READ_TOP___024root__traceInitTop(VAXI4_READ_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VAXI4_READ_TOP___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VAXI4_READ_TOP___024root__traceInitSub0(VAXI4_READ_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+27,"CLK", false,-1);
        tracep->declBit(c+28,"RST_N", false,-1);
        tracep->declBit(c+29,"read_req_instr", false,-1);
        tracep->declBit(c+30,"read_req_ex", false,-1);
        tracep->declBit(c+31,"instr_finish", false,-1);
        tracep->declBit(c+32,"ex_finish", false,-1);
        tracep->declQuad(c+33,"instr_addr", false,-1, 63,0);
        tracep->declQuad(c+35,"ex_addr", false,-1, 63,0);
        tracep->declQuad(c+37,"instr_data", false,-1, 63,0);
        tracep->declQuad(c+39,"ex_data", false,-1, 63,0);
        tracep->declBit(c+41,"Read_SIGNAL", false,-1);
        tracep->declQuad(c+42,"Read_ADDRESS", false,-1, 63,0);
        tracep->declBit(c+44,"DATA_ARRIVE", false,-1);
        tracep->declQuad(c+45,"DATA_OUTSIDE", false,-1, 63,0);
        tracep->declBit(c+27,"AXI4_READ_TOP CLK", false,-1);
        tracep->declBit(c+28,"AXI4_READ_TOP RST_N", false,-1);
        tracep->declBit(c+29,"AXI4_READ_TOP read_req_instr", false,-1);
        tracep->declBit(c+30,"AXI4_READ_TOP read_req_ex", false,-1);
        tracep->declBit(c+31,"AXI4_READ_TOP instr_finish", false,-1);
        tracep->declBit(c+32,"AXI4_READ_TOP ex_finish", false,-1);
        tracep->declQuad(c+33,"AXI4_READ_TOP instr_addr", false,-1, 63,0);
        tracep->declQuad(c+35,"AXI4_READ_TOP ex_addr", false,-1, 63,0);
        tracep->declQuad(c+37,"AXI4_READ_TOP instr_data", false,-1, 63,0);
        tracep->declQuad(c+39,"AXI4_READ_TOP ex_data", false,-1, 63,0);
        tracep->declBit(c+41,"AXI4_READ_TOP Read_SIGNAL", false,-1);
        tracep->declQuad(c+42,"AXI4_READ_TOP Read_ADDRESS", false,-1, 63,0);
        tracep->declBit(c+44,"AXI4_READ_TOP DATA_ARRIVE", false,-1);
        tracep->declQuad(c+45,"AXI4_READ_TOP DATA_OUTSIDE", false,-1, 63,0);
        tracep->declBus(c+22,"AXI4_READ_TOP req_combine", false,-1, 1,0);
        tracep->declBus(c+1,"AXI4_READ_TOP choose_channel", false,-1, 1,0);
        tracep->declBit(c+2,"AXI4_READ_TOP aribter_release", false,-1);
        tracep->declQuad(c+23,"AXI4_READ_TOP read_addr", false,-1, 63,0);
        tracep->declQuad(c+3,"AXI4_READ_TOP read_data", false,-1, 63,0);
        tracep->declBit(c+25,"AXI4_READ_TOP read_req", false,-1);
        tracep->declBit(c+5,"AXI4_READ_TOP read_finish", false,-1);
        tracep->declBit(c+27,"AXI4_READ_TOP rr_arbiter CLK", false,-1);
        tracep->declBit(c+28,"AXI4_READ_TOP rr_arbiter RST_N", false,-1);
        tracep->declBus(c+22,"AXI4_READ_TOP rr_arbiter req", false,-1, 1,0);
        tracep->declBit(c+2,"AXI4_READ_TOP rr_arbiter reg_release", false,-1);
        tracep->declBus(c+1,"AXI4_READ_TOP rr_arbiter grant", false,-1, 1,0);
        tracep->declBus(c+47,"AXI4_READ_TOP rr_arbiter IDLE", false,-1, 2,0);
        tracep->declBus(c+48,"AXI4_READ_TOP rr_arbiter Arbiter_State", false,-1, 2,0);
        tracep->declBus(c+6,"AXI4_READ_TOP rr_arbiter cur_state", false,-1, 2,0);
        tracep->declBus(c+26,"AXI4_READ_TOP rr_arbiter next_state", false,-1, 2,0);
        tracep->declBus(c+7,"AXI4_READ_TOP rr_arbiter pri", false,-1, 1,0);
        tracep->declBus(c+8,"AXI4_READ_TOP rr_arbiter req_shot", false,-1, 1,0);
        tracep->declBus(c+9,"AXI4_READ_TOP rr_arbiter result_req", false,-1, 2,0);
        tracep->declBit(c+27,"AXI4_READ_TOP AXI4_READ_MODUAL CLK", false,-1);
        tracep->declBit(c+28,"AXI4_READ_TOP AXI4_READ_MODUAL RST_N", false,-1);
        tracep->declQuad(c+23,"AXI4_READ_TOP AXI4_READ_MODUAL R_Addr", false,-1, 63,0);
        tracep->declBit(c+25,"AXI4_READ_TOP AXI4_READ_MODUAL R_Request", false,-1);
        tracep->declBit(c+5,"AXI4_READ_TOP AXI4_READ_MODUAL R_Finish", false,-1);
        tracep->declQuad(c+3,"AXI4_READ_TOP AXI4_READ_MODUAL Data_Out", false,-1, 63,0);
        tracep->declBit(c+41,"AXI4_READ_TOP AXI4_READ_MODUAL Read_SIGNAL", false,-1);
        tracep->declQuad(c+42,"AXI4_READ_TOP AXI4_READ_MODUAL Read_ADDRESS", false,-1, 63,0);
        tracep->declBit(c+44,"AXI4_READ_TOP AXI4_READ_MODUAL DATA_ARRIVE", false,-1);
        tracep->declQuad(c+45,"AXI4_READ_TOP AXI4_READ_MODUAL DATA_OUTSIDE", false,-1, 63,0);
        tracep->declQuad(c+10,"AXI4_READ_TOP AXI4_READ_MODUAL AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+12,"AXI4_READ_TOP AXI4_READ_MODUAL AR_VALID", false,-1);
        tracep->declBit(c+13,"AXI4_READ_TOP AXI4_READ_MODUAL AR_READY", false,-1);
        tracep->declQuad(c+14,"AXI4_READ_TOP AXI4_READ_MODUAL R_DATA", false,-1, 63,0);
        tracep->declBus(c+16,"AXI4_READ_TOP AXI4_READ_MODUAL R_RESP", false,-1, 1,0);
        tracep->declBit(c+17,"AXI4_READ_TOP AXI4_READ_MODUAL R_VALID", false,-1);
        tracep->declBit(c+18,"AXI4_READ_TOP AXI4_READ_MODUAL R_READY", false,-1);
        tracep->declBit(c+27,"AXI4_READ_TOP AXI4_READ_MODUAL read_master CLK", false,-1);
        tracep->declBit(c+28,"AXI4_READ_TOP AXI4_READ_MODUAL read_master RST_n", false,-1);
        tracep->declQuad(c+10,"AXI4_READ_TOP AXI4_READ_MODUAL read_master AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+12,"AXI4_READ_TOP AXI4_READ_MODUAL read_master AR_VALID", false,-1);
        tracep->declBit(c+13,"AXI4_READ_TOP AXI4_READ_MODUAL read_master AR_READY", false,-1);
        tracep->declQuad(c+14,"AXI4_READ_TOP AXI4_READ_MODUAL read_master R_DATA", false,-1, 63,0);
        tracep->declBus(c+16,"AXI4_READ_TOP AXI4_READ_MODUAL read_master R_RESP", false,-1, 1,0);
        tracep->declBit(c+17,"AXI4_READ_TOP AXI4_READ_MODUAL read_master R_VALID", false,-1);
        tracep->declBit(c+18,"AXI4_READ_TOP AXI4_READ_MODUAL read_master R_READY", false,-1);
        tracep->declQuad(c+23,"AXI4_READ_TOP AXI4_READ_MODUAL read_master R_Addr", false,-1, 63,0);
        tracep->declBit(c+25,"AXI4_READ_TOP AXI4_READ_MODUAL read_master R_Request", false,-1);
        tracep->declBit(c+5,"AXI4_READ_TOP AXI4_READ_MODUAL read_master R_Finish", false,-1);
        tracep->declQuad(c+3,"AXI4_READ_TOP AXI4_READ_MODUAL read_master Data_Out", false,-1, 63,0);
        tracep->declBit(c+19,"AXI4_READ_TOP AXI4_READ_MODUAL read_master lock_state", false,-1);
        tracep->declBit(c+27,"AXI4_READ_TOP AXI4_READ_MODUAL read_slave CLK", false,-1);
        tracep->declBit(c+28,"AXI4_READ_TOP AXI4_READ_MODUAL read_slave RST_N", false,-1);
        tracep->declQuad(c+10,"AXI4_READ_TOP AXI4_READ_MODUAL read_slave AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+12,"AXI4_READ_TOP AXI4_READ_MODUAL read_slave AR_VALID", false,-1);
        tracep->declBit(c+13,"AXI4_READ_TOP AXI4_READ_MODUAL read_slave AR_READY", false,-1);
        tracep->declQuad(c+14,"AXI4_READ_TOP AXI4_READ_MODUAL read_slave R_DATA", false,-1, 63,0);
        tracep->declBus(c+16,"AXI4_READ_TOP AXI4_READ_MODUAL read_slave R_RESP", false,-1, 1,0);
        tracep->declBit(c+17,"AXI4_READ_TOP AXI4_READ_MODUAL read_slave R_VALID", false,-1);
        tracep->declBit(c+18,"AXI4_READ_TOP AXI4_READ_MODUAL read_slave R_READY", false,-1);
        tracep->declBit(c+41,"AXI4_READ_TOP AXI4_READ_MODUAL read_slave Read_SIGNAL", false,-1);
        tracep->declQuad(c+42,"AXI4_READ_TOP AXI4_READ_MODUAL read_slave Read_ADDRESS", false,-1, 63,0);
        tracep->declBit(c+44,"AXI4_READ_TOP AXI4_READ_MODUAL read_slave DATA_ARRIVE", false,-1);
        tracep->declQuad(c+45,"AXI4_READ_TOP AXI4_READ_MODUAL read_slave DATA_OUTSIDE", false,-1, 63,0);
        tracep->declQuad(c+20,"AXI4_READ_TOP AXI4_READ_MODUAL read_slave data_address", false,-1, 63,0);
        tracep->declQuad(c+14,"AXI4_READ_TOP AXI4_READ_MODUAL read_slave data_buf", false,-1, 63,0);
    }
}

void VAXI4_READ_TOP___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VAXI4_READ_TOP___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VAXI4_READ_TOP___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VAXI4_READ_TOP___024root__traceRegister(VAXI4_READ_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VAXI4_READ_TOP___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VAXI4_READ_TOP___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VAXI4_READ_TOP___024root__traceCleanup, vlSelf);
    }
}

void VAXI4_READ_TOP___024root__traceFullSub0(VAXI4_READ_TOP___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VAXI4_READ_TOP___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VAXI4_READ_TOP___024root* const __restrict vlSelf = static_cast<VAXI4_READ_TOP___024root*>(voidSelf);
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VAXI4_READ_TOP___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VAXI4_READ_TOP___024root__traceFullSub0(VAXI4_READ_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->AXI4_READ_TOP__DOT__choose_channel),2);
        tracep->fullBit(oldp+2,(vlSelf->AXI4_READ_TOP__DOT__aribter_release));
        tracep->fullQData(oldp+3,(vlSelf->AXI4_READ_TOP__DOT__read_data),64);
        tracep->fullBit(oldp+5,(vlSelf->AXI4_READ_TOP__DOT__read_finish));
        tracep->fullCData(oldp+6,(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__cur_state),3);
        tracep->fullCData(oldp+7,(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__pri),2);
        tracep->fullCData(oldp+8,(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__req_shot),2);
        tracep->fullCData(oldp+9,(((~ ((4U | (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__req_shot)) 
                                       - (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__pri))) 
                                   & (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__req_shot))),3);
        tracep->fullQData(oldp+10,(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_ADDR),64);
        tracep->fullBit(oldp+12,(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_VALID));
        tracep->fullBit(oldp+13,(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_READY));
        tracep->fullQData(oldp+14,(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_buf),64);
        tracep->fullCData(oldp+16,(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_RESP),2);
        tracep->fullBit(oldp+17,(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_VALID));
        tracep->fullBit(oldp+18,(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_READY));
        tracep->fullBit(oldp+19,(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state));
        tracep->fullQData(oldp+20,(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address),64);
        tracep->fullCData(oldp+22,(vlSelf->AXI4_READ_TOP__DOT__req_combine),2);
        tracep->fullQData(oldp+23,(vlSelf->AXI4_READ_TOP__DOT__read_addr),64);
        tracep->fullBit(oldp+25,(vlSelf->AXI4_READ_TOP__DOT__read_req));
        tracep->fullCData(oldp+26,(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__next_state),3);
        tracep->fullBit(oldp+27,(vlSelf->CLK));
        tracep->fullBit(oldp+28,(vlSelf->RST_N));
        tracep->fullBit(oldp+29,(vlSelf->read_req_instr));
        tracep->fullBit(oldp+30,(vlSelf->read_req_ex));
        tracep->fullBit(oldp+31,(vlSelf->instr_finish));
        tracep->fullBit(oldp+32,(vlSelf->ex_finish));
        tracep->fullQData(oldp+33,(vlSelf->instr_addr),64);
        tracep->fullQData(oldp+35,(vlSelf->ex_addr),64);
        tracep->fullQData(oldp+37,(vlSelf->instr_data),64);
        tracep->fullQData(oldp+39,(vlSelf->ex_data),64);
        tracep->fullBit(oldp+41,(vlSelf->Read_SIGNAL));
        tracep->fullQData(oldp+42,(vlSelf->Read_ADDRESS),64);
        tracep->fullBit(oldp+44,(vlSelf->DATA_ARRIVE));
        tracep->fullQData(oldp+45,(vlSelf->DATA_OUTSIDE),64);
        tracep->fullCData(oldp+47,(1U),3);
        tracep->fullCData(oldp+48,(2U),3);
    }
}
