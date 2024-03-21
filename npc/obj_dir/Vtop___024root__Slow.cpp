// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

extern const VlUnpacked<CData/*2:0*/, 64> Vtop__ConstPool__TABLE_2d10de51_0;

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Variables
    CData/*5:0*/ __Vtableidx1;
    // Body
    vlSelf->top__DOT__PC_NEXT = (4ULL + vlSelf->top__DOT__PC_TO_IFU);
    vlSelf->READ_ADDR = vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address;
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel 
        = ((2U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__cur_state))
            ? ((~ ((IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot) 
                   - (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri))) 
               & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot))
            : 0U);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_addr 
        = ((1U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel))
            ? 0ULL : ((2U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel))
                       ? vlSelf->top__DOT__INSTR_ADDR
                       : 0ULL));
    if ((1U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel))) {
        vlSelf->ex_data = vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_data;
    }
    if ((1U != (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel))) {
        if ((2U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel))) {
            vlSelf->top__DOT__INSTR_TO_IFU = vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_data;
        }
    }
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_req 
        = ((1U != (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel)) 
           & ((2U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel)) 
              & (IData)(vlSelf->top__DOT__READ_INSTR_START)));
    vlSelf->ec_finish = ((1U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel)) 
                         & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_finish));
    vlSelf->top__DOT__READ_INSTR_FINISH = ((1U != (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel)) 
                                           & ((2U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel)) 
                                              & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_finish)));
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__aribter_release 
        = ((IData)(vlSelf->ec_finish) | (IData)(vlSelf->top__DOT__READ_INSTR_FINISH));
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__aribter_release) 
                     << 5U) | (((IData)(vlSelf->top__DOT__READ_INSTR_START) 
                                << 4U) | (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__cur_state)));
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__next_state 
        = Vtop__ConstPool__TABLE_2d10de51_0[__Vtableidx1];
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->READ_DATA = VL_RAND_RESET_Q(64);
    vlSelf->READ_FINISH = VL_RAND_RESET_I(1);
    vlSelf->READ_SIGNAL = VL_RAND_RESET_I(1);
    vlSelf->READ_ADDR = VL_RAND_RESET_Q(64);
    vlSelf->ec_finish = VL_RAND_RESET_I(1);
    vlSelf->ex_data = VL_RAND_RESET_Q(64);
    vlSelf->INSTR_ARRIVE = VL_RAND_RESET_I(1);
    vlSelf->INSTR_Complete = VL_RAND_RESET_I(1);
    vlSelf->INSTR_DATA = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_TO_IFU = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__INSTR_TO_IFU = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__INSTR_ADDR = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__READ_INSTR_START = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__READ_INSTR_FINISH = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PC_NEXT = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__aribter_release = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_addr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_req = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_finish = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__cur_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_ADDR = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_RESP = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_buf = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
