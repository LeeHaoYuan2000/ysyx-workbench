// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024unit.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void check_ebreak(const svOpenArrayHandle ebreak_reg);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_check_ebreak__Vdpioc2_TOP____024unit(const CData/*7:0*/ &ebreak_reg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_check_ebreak__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps ebreak_reg__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 7, 0);
    VerilatedDpiOpenVar ebreak_reg__Vopenarray (&ebreak_reg__Vopenprops, &ebreak_reg);
    check_ebreak(&ebreak_reg__Vopenarray);
}
