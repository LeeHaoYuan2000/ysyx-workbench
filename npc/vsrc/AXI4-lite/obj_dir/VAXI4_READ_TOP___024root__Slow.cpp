// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAXI4_READ_TOP.h for the primary calling header

#include "VAXI4_READ_TOP___024root.h"
#include "VAXI4_READ_TOP__Syms.h"

//==========


void VAXI4_READ_TOP___024root___ctor_var_reset(VAXI4_READ_TOP___024root* vlSelf);

VAXI4_READ_TOP___024root::VAXI4_READ_TOP___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VAXI4_READ_TOP___024root___ctor_var_reset(this);
}

void VAXI4_READ_TOP___024root::__Vconfigure(VAXI4_READ_TOP__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VAXI4_READ_TOP___024root::~VAXI4_READ_TOP___024root() {
}

extern const VlUnpacked<CData/*2:0*/, 64> VAXI4_READ_TOP__ConstPool__TABLE_2d10de51_0;

void VAXI4_READ_TOP___024root___settle__TOP__2(VAXI4_READ_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAXI4_READ_TOP___024root___settle__TOP__2\n"); );
    // Variables
    CData/*5:0*/ __Vtableidx1;
    // Body
    vlSelf->AXI4_READ_TOP__DOT__req_combine = (((IData)(vlSelf->read_req_instr) 
                                                << 1U) 
                                               | (IData)(vlSelf->read_req_ex));
    vlSelf->Read_ADDRESS = vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address;
    vlSelf->AXI4_READ_TOP__DOT__choose_channel = ((2U 
                                                   == (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__cur_state))
                                                   ? 
                                                  ((~ 
                                                    ((IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__req_shot) 
                                                     - (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__pri))) 
                                                   & (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__req_shot))
                                                   : 0U);
    if ((1U == (IData)(vlSelf->AXI4_READ_TOP__DOT__choose_channel))) {
        vlSelf->ex_data = vlSelf->AXI4_READ_TOP__DOT__read_data;
    }
    if ((1U != (IData)(vlSelf->AXI4_READ_TOP__DOT__choose_channel))) {
        if ((2U == (IData)(vlSelf->AXI4_READ_TOP__DOT__choose_channel))) {
            vlSelf->instr_data = vlSelf->AXI4_READ_TOP__DOT__read_data;
        }
    }
    if ((1U == (IData)(vlSelf->AXI4_READ_TOP__DOT__choose_channel))) {
        vlSelf->AXI4_READ_TOP__DOT__read_addr = vlSelf->ex_addr;
        vlSelf->AXI4_READ_TOP__DOT__read_req = vlSelf->read_req_ex;
        vlSelf->ex_finish = ((IData)(vlSelf->AXI4_READ_TOP__DOT__read_finish) 
                             & 1U);
    } else {
        vlSelf->AXI4_READ_TOP__DOT__read_addr = ((2U 
                                                  == (IData)(vlSelf->AXI4_READ_TOP__DOT__choose_channel))
                                                  ? vlSelf->instr_addr
                                                  : 0ULL);
        vlSelf->AXI4_READ_TOP__DOT__read_req = ((2U 
                                                 == (IData)(vlSelf->AXI4_READ_TOP__DOT__choose_channel)) 
                                                & (IData)(vlSelf->read_req_instr));
        vlSelf->ex_finish = 0U;
    }
    vlSelf->instr_finish = ((1U != (IData)(vlSelf->AXI4_READ_TOP__DOT__choose_channel)) 
                            & ((2U == (IData)(vlSelf->AXI4_READ_TOP__DOT__choose_channel)) 
                               & (IData)(vlSelf->AXI4_READ_TOP__DOT__read_finish)));
    vlSelf->AXI4_READ_TOP__DOT__aribter_release = ((IData)(vlSelf->ex_finish) 
                                                   | (IData)(vlSelf->instr_finish));
    __Vtableidx1 = (((IData)(vlSelf->AXI4_READ_TOP__DOT__aribter_release) 
                     << 5U) | (((IData)(vlSelf->AXI4_READ_TOP__DOT__req_combine) 
                                << 3U) | (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__cur_state)));
    vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__next_state 
        = VAXI4_READ_TOP__ConstPool__TABLE_2d10de51_0
        [__Vtableidx1];
}

void VAXI4_READ_TOP___024root___eval_initial(VAXI4_READ_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAXI4_READ_TOP___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
}

void VAXI4_READ_TOP___024root___eval_settle(VAXI4_READ_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAXI4_READ_TOP___024root___eval_settle\n"); );
    // Body
    VAXI4_READ_TOP___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VAXI4_READ_TOP___024root___final(VAXI4_READ_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAXI4_READ_TOP___024root___final\n"); );
}

void VAXI4_READ_TOP___024root___ctor_var_reset(VAXI4_READ_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAXI4_READ_TOP___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->RST_N = VL_RAND_RESET_I(1);
    vlSelf->read_req_instr = VL_RAND_RESET_I(1);
    vlSelf->read_req_ex = VL_RAND_RESET_I(1);
    vlSelf->instr_finish = VL_RAND_RESET_I(1);
    vlSelf->ex_finish = VL_RAND_RESET_I(1);
    vlSelf->instr_addr = VL_RAND_RESET_Q(64);
    vlSelf->ex_addr = VL_RAND_RESET_Q(64);
    vlSelf->instr_data = VL_RAND_RESET_Q(64);
    vlSelf->ex_data = VL_RAND_RESET_Q(64);
    vlSelf->Read_SIGNAL = VL_RAND_RESET_I(1);
    vlSelf->Read_ADDRESS = VL_RAND_RESET_Q(64);
    vlSelf->DATA_ARRIVE = VL_RAND_RESET_I(1);
    vlSelf->DATA_OUTSIDE = VL_RAND_RESET_Q(64);
    vlSelf->AXI4_READ_TOP__DOT__req_combine = VL_RAND_RESET_I(2);
    vlSelf->AXI4_READ_TOP__DOT__choose_channel = VL_RAND_RESET_I(2);
    vlSelf->AXI4_READ_TOP__DOT__aribter_release = VL_RAND_RESET_I(1);
    vlSelf->AXI4_READ_TOP__DOT__read_addr = VL_RAND_RESET_Q(64);
    vlSelf->AXI4_READ_TOP__DOT__read_data = VL_RAND_RESET_Q(64);
    vlSelf->AXI4_READ_TOP__DOT__read_req = VL_RAND_RESET_I(1);
    vlSelf->AXI4_READ_TOP__DOT__read_finish = VL_RAND_RESET_I(1);
    vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__cur_state = VL_RAND_RESET_I(3);
    vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__pri = VL_RAND_RESET_I(2);
    vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__req_shot = VL_RAND_RESET_I(2);
    vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_ADDR = VL_RAND_RESET_Q(64);
    vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_VALID = VL_RAND_RESET_I(1);
    vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_READY = VL_RAND_RESET_I(1);
    vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_RESP = VL_RAND_RESET_I(2);
    vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_VALID = VL_RAND_RESET_I(1);
    vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_READY = VL_RAND_RESET_I(1);
    vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state = VL_RAND_RESET_I(1);
    vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address = VL_RAND_RESET_Q(64);
    vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_buf = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
