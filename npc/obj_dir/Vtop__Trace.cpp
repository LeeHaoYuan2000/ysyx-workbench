// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__PC_TO_IFU),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__INSTR_TO_IFU),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__INSTR_ADDR),64);
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__READ_INSTR_START));
            tracep->chgBit(oldp+7,(vlSelf->top__DOT__READ_INSTR_FINISH));
            tracep->chgQData(oldp+8,((4ULL + vlSelf->top__DOT__PC_TO_IFU)),64);
            tracep->chgIData(oldp+10,((IData)(vlSelf->top__DOT__INSTR_TO_IFU)),32);
            tracep->chgCData(oldp+11,(((IData)(vlSelf->top__DOT__READ_INSTR_START) 
                                       << 1U)),2);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel),2);
            tracep->chgBit(oldp+13,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__aribter_release));
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_addr),64);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_data),64);
            tracep->chgBit(oldp+18,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_req));
            tracep->chgBit(oldp+19,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_finish));
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__cur_state),3);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__next_state),3);
            tracep->chgCData(oldp+22,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri),2);
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot),2);
            tracep->chgCData(oldp+24,(((~ ((4U | (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot)) 
                                           - (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri))) 
                                       & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot))),3);
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_ADDR),64);
            tracep->chgBit(oldp+27,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_VALID));
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_READY));
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_buf),64);
            tracep->chgCData(oldp+31,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_RESP),2);
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID));
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_READY));
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state));
            tracep->chgQData(oldp+35,(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address),64);
        }
        tracep->chgBit(oldp+37,(vlSelf->clk));
        tracep->chgBit(oldp+38,(vlSelf->rst));
        tracep->chgQData(oldp+39,(vlSelf->READ_DATA),64);
        tracep->chgBit(oldp+41,(vlSelf->READ_FINISH));
        tracep->chgBit(oldp+42,(vlSelf->READ_SIGNAL));
        tracep->chgQData(oldp+43,(vlSelf->READ_ADDR),64);
        tracep->chgBit(oldp+45,(vlSelf->ec_finish));
        tracep->chgQData(oldp+46,(vlSelf->ex_data),64);
        tracep->chgBit(oldp+48,(vlSelf->INSTR_ARRIVE));
        tracep->chgBit(oldp+49,(vlSelf->INSTR_Complete));
        tracep->chgIData(oldp+50,(vlSelf->INSTR_DATA),32);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
