// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAXI4_READ_TOP__Syms.h"


void VAXI4_READ_TOP___024root__traceChgSub0(VAXI4_READ_TOP___024root* vlSelf, VerilatedVcd* tracep);

void VAXI4_READ_TOP___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VAXI4_READ_TOP___024root* const __restrict vlSelf = static_cast<VAXI4_READ_TOP___024root*>(voidSelf);
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VAXI4_READ_TOP___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VAXI4_READ_TOP___024root__traceChgSub0(VAXI4_READ_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->AXI4_READ_TOP__DOT__choose_channel),2);
            tracep->chgBit(oldp+1,(vlSelf->AXI4_READ_TOP__DOT__aribter_release));
            tracep->chgQData(oldp+2,(vlSelf->AXI4_READ_TOP__DOT__read_data),64);
            tracep->chgBit(oldp+4,(vlSelf->AXI4_READ_TOP__DOT__read_finish));
            tracep->chgCData(oldp+5,(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__cur_state),3);
            tracep->chgCData(oldp+6,(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__pri),2);
            tracep->chgCData(oldp+7,(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__req_shot),2);
            tracep->chgCData(oldp+8,(((~ ((4U | (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__req_shot)) 
                                          - (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__pri))) 
                                      & (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__req_shot))),3);
            tracep->chgQData(oldp+9,(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_ADDR),64);
            tracep->chgBit(oldp+11,(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_VALID));
            tracep->chgBit(oldp+12,(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_READY));
            tracep->chgQData(oldp+13,(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_buf),64);
            tracep->chgCData(oldp+15,(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_RESP),2);
            tracep->chgBit(oldp+16,(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_VALID));
            tracep->chgBit(oldp+17,(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_READY));
            tracep->chgBit(oldp+18,(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state));
            tracep->chgQData(oldp+19,(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+21,(vlSelf->AXI4_READ_TOP__DOT__req_combine),2);
            tracep->chgQData(oldp+22,(vlSelf->AXI4_READ_TOP__DOT__read_addr),64);
            tracep->chgBit(oldp+24,(vlSelf->AXI4_READ_TOP__DOT__read_req));
            tracep->chgCData(oldp+25,(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__next_state),3);
        }
        tracep->chgBit(oldp+26,(vlSelf->CLK));
        tracep->chgBit(oldp+27,(vlSelf->RST_N));
        tracep->chgBit(oldp+28,(vlSelf->read_req_instr));
        tracep->chgBit(oldp+29,(vlSelf->read_req_ex));
        tracep->chgBit(oldp+30,(vlSelf->instr_finish));
        tracep->chgBit(oldp+31,(vlSelf->ex_finish));
        tracep->chgQData(oldp+32,(vlSelf->instr_addr),64);
        tracep->chgQData(oldp+34,(vlSelf->ex_addr),64);
        tracep->chgQData(oldp+36,(vlSelf->instr_data),64);
        tracep->chgQData(oldp+38,(vlSelf->ex_data),64);
        tracep->chgBit(oldp+40,(vlSelf->Read_SIGNAL));
        tracep->chgQData(oldp+41,(vlSelf->Read_ADDRESS),64);
        tracep->chgBit(oldp+43,(vlSelf->DATA_ARRIVE));
        tracep->chgQData(oldp+44,(vlSelf->DATA_OUTSIDE),64);
    }
}

void VAXI4_READ_TOP___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VAXI4_READ_TOP___024root* const __restrict vlSelf = static_cast<VAXI4_READ_TOP___024root*>(voidSelf);
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
