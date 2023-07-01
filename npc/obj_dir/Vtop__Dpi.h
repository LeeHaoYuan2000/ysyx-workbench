// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CU/CU.v:1:30
    extern void check_ebreak(const svLogicVecVal* ebreak_reg);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/MEM/MEM.v:1:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/MEM/MEM.v:2:30
    extern void pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:11:30
    extern void set_gpr_a0(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:12:30
    extern void set_gpr_a1(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:13:30
    extern void set_gpr_a2(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:14:30
    extern void set_gpr_a3(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:15:30
    extern void set_gpr_a4(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:16:30
    extern void set_gpr_a5(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:17:30
    extern void set_gpr_a6(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:18:30
    extern void set_gpr_a7(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:4:30
    extern void set_gpr_gp(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:2:30
    extern void set_gpr_ra(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:9:30
    extern void set_gpr_s0(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:10:30
    extern void set_gpr_s1(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:27:30
    extern void set_gpr_s10(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:28:30
    extern void set_gpr_s11(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:19:30
    extern void set_gpr_s2(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:20:30
    extern void set_gpr_s3(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:21:30
    extern void set_gpr_s4(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:22:30
    extern void set_gpr_s5(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:23:30
    extern void set_gpr_s6(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:24:30
    extern void set_gpr_s7(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:25:30
    extern void set_gpr_s8(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:26:30
    extern void set_gpr_s9(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:3:30
    extern void set_gpr_sp(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:6:30
    extern void set_gpr_t0(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:7:30
    extern void set_gpr_t1(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:8:30
    extern void set_gpr_t2(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:29:30
    extern void set_gpr_t3(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:30:30
    extern void set_gpr_t4(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:31:30
    extern void set_gpr_t5(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:32:30
    extern void set_gpr_t6(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:5:30
    extern void set_gpr_tp(const svLogicVecVal* gpr);
    // DPI import at /home/ubuntu/ysyx-workbench/npc/vsrc/CSR/CSR.v:1:30
    extern void set_gpr_zero(const svLogicVecVal* gpr);

#ifdef __cplusplus
}
#endif
