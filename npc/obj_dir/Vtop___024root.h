// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(READ_FINISH,0,0);
    VL_OUT8(READ_SIGNAL,0,0);
    VL_OUT8(ec_finish,0,0);
    VL_OUT8(INSTR_ARRIVE,0,0);
    VL_IN8(INSTR_Complete,0,0);
    VL_OUT(INSTR_DATA,31,0);
    VL_IN64(READ_DATA,63,0);
    VL_OUT64(READ_ADDR,63,0);
    VL_OUT64(ex_data,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__READ_INSTR_START;
    CData/*0:0*/ top__DOT__READ_INSTR_FINISH;
    CData/*1:0*/ top__DOT__axi4_read_with_arbiter__DOT__choose_channel;
    CData/*0:0*/ top__DOT__axi4_read_with_arbiter__DOT__aribter_release;
    CData/*0:0*/ top__DOT__axi4_read_with_arbiter__DOT__read_req;
    CData/*0:0*/ top__DOT__axi4_read_with_arbiter__DOT__read_finish;
    CData/*2:0*/ top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__cur_state;
    CData/*2:0*/ top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__next_state;
    CData/*1:0*/ top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri;
    CData/*1:0*/ top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot;
    CData/*0:0*/ top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_VALID;
    CData/*0:0*/ top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_READY;
    CData/*1:0*/ top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_RESP;
    CData/*0:0*/ top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID;
    CData/*0:0*/ top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_READY;
    CData/*0:0*/ top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state;
    QData/*63:0*/ top__DOT__PC_TO_IFU;
    QData/*63:0*/ top__DOT__INSTR_TO_IFU;
    QData/*63:0*/ top__DOT__INSTR_ADDR;
    QData/*63:0*/ top__DOT__PC_NEXT;
    QData/*63:0*/ top__DOT__axi4_read_with_arbiter__DOT__read_addr;
    QData/*63:0*/ top__DOT__axi4_read_with_arbiter__DOT__read_data;
    QData/*63:0*/ top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_ADDR;
    QData/*63:0*/ top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address;
    QData/*63:0*/ top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_buf;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
