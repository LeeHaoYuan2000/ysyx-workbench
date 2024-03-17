// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAXI4_READ_TOP.h for the primary calling header

#include "VAXI4_READ_TOP___024root.h"
#include "VAXI4_READ_TOP__Syms.h"

//==========

VL_INLINE_OPT void VAXI4_READ_TOP___024root___sequent__TOP__1(VAXI4_READ_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAXI4_READ_TOP___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ __Vdly__AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_READY;
    CData/*0:0*/ __Vdly__AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_READY;
    CData/*0:0*/ __Vdly__AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_VALID;
    // Body
    __Vdly__AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_READY 
        = vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_READY;
    __Vdly__AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_READY 
        = vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_READY;
    __Vdly__AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_VALID 
        = vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_VALID;
    vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_RESP = 0U;
    __Vdly__AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_READY 
        = ((IData)(vlSelf->RST_N) & ((IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_VALID) 
                                     & (~ (IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_READY))));
    vlSelf->Read_SIGNAL = ((IData)(vlSelf->RST_N) & 
                           (((IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_VALID) 
                             & (~ (IData)(vlSelf->Read_SIGNAL))) 
                            | ((~ ((IData)(vlSelf->DATA_ARRIVE) 
                                   & (IData)(vlSelf->Read_SIGNAL))) 
                               & (IData)(vlSelf->Read_SIGNAL))));
    __Vdly__AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_READY 
        = ((IData)(vlSelf->RST_N) & ((~ (IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_READY)) 
                                     & (IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_VALID)));
    __Vdly__AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_VALID 
        = ((IData)(vlSelf->RST_N) & (((IData)(vlSelf->DATA_ARRIVE) 
                                      & (~ (IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_VALID))) 
                                     | ((~ ((IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_VALID) 
                                            & (IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_READY))) 
                                        & (IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_VALID))));
    vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_VALID 
        = ((IData)(vlSelf->RST_N) & ((((IData)(vlSelf->AXI4_READ_TOP__DOT__read_req) 
                                       & (~ (IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_VALID))) 
                                      & (~ (IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state))) 
                                     | ((~ (((IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_VALID) 
                                             & (IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_READY)) 
                                            & (IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state))) 
                                        & (IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_VALID))));
    if (vlSelf->RST_N) {
        vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address 
            = vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_ADDR;
        vlSelf->AXI4_READ_TOP__DOT__read_data = vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_buf;
        vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state 
            = ((((~ (IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state)) 
                 & (IData)(vlSelf->AXI4_READ_TOP__DOT__read_req)) 
                | ((~ ((IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state) 
                       & (IData)(vlSelf->AXI4_READ_TOP__DOT__read_finish))) 
                   & (IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state))) 
               & 1U);
        vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__pri 
            = ((2U == (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__next_state))
                ? ((IData)(vlSelf->AXI4_READ_TOP__DOT__aribter_release)
                    ? ((2U & ((IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__pri) 
                              << 1U)) | (1U & ((IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__pri) 
                                               >> 1U)))
                    : (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__pri))
                : (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__pri));
        vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__req_shot 
            = (((1U == (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__cur_state)) 
                & (2U == (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__next_state)))
                ? (IData)(vlSelf->AXI4_READ_TOP__DOT__req_combine)
                : ((1U == (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__next_state))
                    ? 0U : (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__req_shot)));
    } else {
        vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address = 0ULL;
        vlSelf->AXI4_READ_TOP__DOT__read_data = 0ULL;
        vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state = 0U;
        vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__pri = 1U;
        vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__req_shot = 0U;
    }
    vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_READY 
        = __Vdly__AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_READY;
    vlSelf->Read_ADDRESS = vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address;
    if (vlSelf->RST_N) {
        vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_ADDR 
            = vlSelf->AXI4_READ_TOP__DOT__read_addr;
        vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_buf 
            = vlSelf->DATA_OUTSIDE;
    } else {
        vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_ADDR = 0ULL;
        vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_buf = 0ULL;
    }
    if (vlSelf->RST_N) {
        if (((~ (IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_READY)) 
             & (IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_VALID))) {
            vlSelf->AXI4_READ_TOP__DOT__read_finish = 1U;
        } else if (((IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_READY) 
                    & (IData)(vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_VALID))) {
            vlSelf->AXI4_READ_TOP__DOT__read_finish = 0U;
        }
    } else {
        vlSelf->AXI4_READ_TOP__DOT__read_finish = 0U;
    }
    vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__cur_state 
        = ((IData)(vlSelf->RST_N) ? (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__next_state)
            : 1U);
    vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_READY 
        = __Vdly__AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_READY;
    vlSelf->AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_VALID 
        = __Vdly__AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_VALID;
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
    vlSelf->ex_finish = ((1U == (IData)(vlSelf->AXI4_READ_TOP__DOT__choose_channel)) 
                         & (IData)(vlSelf->AXI4_READ_TOP__DOT__read_finish));
    vlSelf->instr_finish = ((1U != (IData)(vlSelf->AXI4_READ_TOP__DOT__choose_channel)) 
                            & ((2U == (IData)(vlSelf->AXI4_READ_TOP__DOT__choose_channel)) 
                               & (IData)(vlSelf->AXI4_READ_TOP__DOT__read_finish)));
    vlSelf->AXI4_READ_TOP__DOT__aribter_release = ((IData)(vlSelf->ex_finish) 
                                                   | (IData)(vlSelf->instr_finish));
}

extern const VlUnpacked<CData/*2:0*/, 64> VAXI4_READ_TOP__ConstPool__TABLE_2d10de51_0;

VL_INLINE_OPT void VAXI4_READ_TOP___024root___combo__TOP__3(VAXI4_READ_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAXI4_READ_TOP___024root___combo__TOP__3\n"); );
    // Variables
    CData/*5:0*/ __Vtableidx1;
    // Body
    vlSelf->AXI4_READ_TOP__DOT__req_combine = (((IData)(vlSelf->read_req_instr) 
                                                << 1U) 
                                               | (IData)(vlSelf->read_req_ex));
    if ((1U == (IData)(vlSelf->AXI4_READ_TOP__DOT__choose_channel))) {
        vlSelf->AXI4_READ_TOP__DOT__read_addr = vlSelf->ex_addr;
        vlSelf->AXI4_READ_TOP__DOT__read_req = vlSelf->read_req_ex;
    } else {
        vlSelf->AXI4_READ_TOP__DOT__read_addr = ((2U 
                                                  == (IData)(vlSelf->AXI4_READ_TOP__DOT__choose_channel))
                                                  ? vlSelf->instr_addr
                                                  : 0ULL);
        vlSelf->AXI4_READ_TOP__DOT__read_req = ((2U 
                                                 == (IData)(vlSelf->AXI4_READ_TOP__DOT__choose_channel)) 
                                                & (IData)(vlSelf->read_req_instr));
    }
    __Vtableidx1 = (((IData)(vlSelf->AXI4_READ_TOP__DOT__aribter_release) 
                     << 5U) | (((IData)(vlSelf->AXI4_READ_TOP__DOT__req_combine) 
                                << 3U) | (IData)(vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__cur_state)));
    vlSelf->AXI4_READ_TOP__DOT__rr_arbiter__DOT__next_state 
        = VAXI4_READ_TOP__ConstPool__TABLE_2d10de51_0
        [__Vtableidx1];
}

void VAXI4_READ_TOP___024root___eval(VAXI4_READ_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAXI4_READ_TOP___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__CLK)))) {
        VAXI4_READ_TOP___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    VAXI4_READ_TOP___024root___combo__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
}

QData VAXI4_READ_TOP___024root___change_request_1(VAXI4_READ_TOP___024root* vlSelf);

VL_INLINE_OPT QData VAXI4_READ_TOP___024root___change_request(VAXI4_READ_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAXI4_READ_TOP___024root___change_request\n"); );
    // Body
    return (VAXI4_READ_TOP___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VAXI4_READ_TOP___024root___change_request_1(VAXI4_READ_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAXI4_READ_TOP___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAXI4_READ_TOP___024root___eval_debug_assertions(VAXI4_READ_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAXI4_READ_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAXI4_READ_TOP___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
    if (VL_UNLIKELY((vlSelf->read_req_instr & 0xfeU))) {
        Verilated::overWidthError("read_req_instr");}
    if (VL_UNLIKELY((vlSelf->read_req_ex & 0xfeU))) {
        Verilated::overWidthError("read_req_ex");}
    if (VL_UNLIKELY((vlSelf->DATA_ARRIVE & 0xfeU))) {
        Verilated::overWidthError("DATA_ARRIVE");}
}
#endif  // VL_DEBUG
