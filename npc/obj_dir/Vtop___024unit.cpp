// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024unit.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void set_gpr_zero(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_zero__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_zero__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_zero(&gpr__Vopenarray);
}

extern "C" void set_gpr_ra(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_ra__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_ra__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_ra(&gpr__Vopenarray);
}

extern "C" void set_gpr_sp(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_sp__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_sp__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_sp(&gpr__Vopenarray);
}

extern "C" void set_gpr_gp(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_gp__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_gp__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_gp(&gpr__Vopenarray);
}

extern "C" void set_gpr_tp(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_tp__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_tp__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_tp(&gpr__Vopenarray);
}

extern "C" void set_gpr_t0(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_t0__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_t0__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_t0(&gpr__Vopenarray);
}

extern "C" void set_gpr_t1(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_t1__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_t1__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_t1(&gpr__Vopenarray);
}

extern "C" void set_gpr_t2(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_t2__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_t2__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_t2(&gpr__Vopenarray);
}

extern "C" void set_gpr_s0(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s0__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s0__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_s0(&gpr__Vopenarray);
}

extern "C" void set_gpr_s1(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s1__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s1__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_s1(&gpr__Vopenarray);
}

extern "C" void set_gpr_a0(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_a0__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_a0__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_a0(&gpr__Vopenarray);
}

extern "C" void set_gpr_a1(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_a1__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_a1__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_a1(&gpr__Vopenarray);
}

extern "C" void set_gpr_a2(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_a2__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_a2__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_a2(&gpr__Vopenarray);
}

extern "C" void set_gpr_a3(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_a3__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_a3__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_a3(&gpr__Vopenarray);
}

extern "C" void set_gpr_a4(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_a4__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_a4__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_a4(&gpr__Vopenarray);
}

extern "C" void set_gpr_a5(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_a5__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_a5__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_a5(&gpr__Vopenarray);
}

extern "C" void set_gpr_a6(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_a6__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_a6__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_a6(&gpr__Vopenarray);
}

extern "C" void set_gpr_a7(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_a7__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_a7__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_a7(&gpr__Vopenarray);
}

extern "C" void set_gpr_s2(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s2__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s2__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_s2(&gpr__Vopenarray);
}

extern "C" void set_gpr_s3(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s3__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s3__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_s3(&gpr__Vopenarray);
}

extern "C" void set_gpr_s4(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s4__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s4__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_s4(&gpr__Vopenarray);
}

extern "C" void set_gpr_s5(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s5__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s5__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_s5(&gpr__Vopenarray);
}

extern "C" void set_gpr_s6(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s6__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s6__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_s6(&gpr__Vopenarray);
}

extern "C" void set_gpr_s7(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s7__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s7__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_s7(&gpr__Vopenarray);
}

extern "C" void set_gpr_s8(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s8__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s8__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_s8(&gpr__Vopenarray);
}

extern "C" void set_gpr_s9(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s9__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s9__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_s9(&gpr__Vopenarray);
}

extern "C" void set_gpr_s10(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s10__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s10__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_s10(&gpr__Vopenarray);
}

extern "C" void set_gpr_s11(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s11__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s11__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_s11(&gpr__Vopenarray);
}

extern "C" void set_gpr_t3(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_t3__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_t3__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_t3(&gpr__Vopenarray);
}

extern "C" void set_gpr_t4(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_t4__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_t4__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_t4(&gpr__Vopenarray);
}

extern "C" void set_gpr_t5(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_t5__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_t5__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_t5(&gpr__Vopenarray);
}

extern "C" void set_gpr_t6(const svOpenArrayHandle gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_t6__Vdpioc2_TOP____024unit(const QData/*63:0*/ &gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_t6__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps gpr__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar gpr__Vopenarray (&gpr__Vopenprops, &gpr);
    set_gpr_t6(&gpr__Vopenarray);
}

extern "C" void check_ebreak(const svOpenArrayHandle ebreak_reg);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_check_ebreak__Vdpioc2_TOP____024unit(const CData/*7:0*/ &ebreak_reg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_check_ebreak__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const VerilatedVarProps ebreak_reg__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 7, 0);
    VerilatedDpiOpenVar ebreak_reg__Vopenarray (&ebreak_reg__Vopenprops, &ebreak_reg);
    check_ebreak(&ebreak_reg__Vopenarray);
}
