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

extern "C" void set_gpr_zero(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_zero_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_zero_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_zero(gpr__Vcvt);
}

extern "C" void set_gpr_ra(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_ra_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_ra_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_ra(gpr__Vcvt);
}

extern "C" void set_gpr_sp(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_sp_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_sp_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_sp(gpr__Vcvt);
}

extern "C" void set_gpr_gp(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_gp_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_gp_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_gp(gpr__Vcvt);
}

extern "C" void set_gpr_tp(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_tp_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_tp_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_tp(gpr__Vcvt);
}

extern "C" void set_gpr_t0(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_t0_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_t0_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_t0(gpr__Vcvt);
}

extern "C" void set_gpr_t1(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_t1_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_t1_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_t1(gpr__Vcvt);
}

extern "C" void set_gpr_t2(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_t2_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_t2_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_t2(gpr__Vcvt);
}

extern "C" void set_gpr_s0(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s0_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s0_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_s0(gpr__Vcvt);
}

extern "C" void set_gpr_s1(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s1_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s1_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_s1(gpr__Vcvt);
}

extern "C" void set_gpr_a0(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_a0_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_a0_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_a0(gpr__Vcvt);
}

extern "C" void set_gpr_a1(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_a1_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_a1_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_a1(gpr__Vcvt);
}

extern "C" void set_gpr_a2(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_a2_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_a2_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_a2(gpr__Vcvt);
}

extern "C" void set_gpr_a3(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_a3_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_a3_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_a3(gpr__Vcvt);
}

extern "C" void set_gpr_a4(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_a4_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_a4_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_a4(gpr__Vcvt);
}

extern "C" void set_gpr_a5(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_a5_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_a5_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_a5(gpr__Vcvt);
}

extern "C" void set_gpr_a6(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_a6_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_a6_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_a6(gpr__Vcvt);
}

extern "C" void set_gpr_a7(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_a7_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_a7_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_a7(gpr__Vcvt);
}

extern "C" void set_gpr_s2(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s2_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s2_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_s2(gpr__Vcvt);
}

extern "C" void set_gpr_s3(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s3_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s3_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_s3(gpr__Vcvt);
}

extern "C" void set_gpr_s4(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s4_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s4_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_s4(gpr__Vcvt);
}

extern "C" void set_gpr_s5(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s5_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s5_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_s5(gpr__Vcvt);
}

extern "C" void set_gpr_s6(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s6_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s6_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_s6(gpr__Vcvt);
}

extern "C" void set_gpr_s7(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s7_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s7_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_s7(gpr__Vcvt);
}

extern "C" void set_gpr_s8(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s8_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s8_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_s8(gpr__Vcvt);
}

extern "C" void set_gpr_s9(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s9_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s9_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_s9(gpr__Vcvt);
}

extern "C" void set_gpr_s10(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s10_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s10_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_s10(gpr__Vcvt);
}

extern "C" void set_gpr_s11(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_s11_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_s11_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_s11(gpr__Vcvt);
}

extern "C" void set_gpr_t3(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_t3_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_t3_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_t3(gpr__Vcvt);
}

extern "C" void set_gpr_t4(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_t4_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_t4_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_t4(gpr__Vcvt);
}

extern "C" void set_gpr_t5(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_t5_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_t5_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_t5(gpr__Vcvt);
}

extern "C" void set_gpr_t6(const svLogicVecVal* gpr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_set_gpr_t6_TOP____024unit(QData/*63:0*/ gpr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_set_gpr_t6_TOP____024unit\n"); );
    // Body
    svLogicVecVal gpr__Vcvt[2];
    for (size_t gpr__Vidx = 0; gpr__Vidx < 1; ++gpr__Vidx) VL_SET_SVLV_Q(64, gpr__Vcvt + 2 * gpr__Vidx, gpr);
    set_gpr_t6(gpr__Vcvt);
}

extern "C" void check_ebreak(const svLogicVecVal* ebreak_reg);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_check_ebreak_TOP____024unit(CData/*7:0*/ ebreak_reg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_check_ebreak_TOP____024unit\n"); );
    // Body
    svLogicVecVal ebreak_reg__Vcvt[1];
    for (size_t ebreak_reg__Vidx = 0; ebreak_reg__Vidx < 1; ++ebreak_reg__Vidx) VL_SET_SVLV_I(8, ebreak_reg__Vcvt + 1 * ebreak_reg__Vidx, ebreak_reg);
    check_ebreak(ebreak_reg__Vcvt);
}
