// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAXI4_READ_TOP.h for the primary calling header

#ifndef VERILATED_VAXI4_READ_TOP___024ROOT_H_
#define VERILATED_VAXI4_READ_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VAXI4_READ_TOP__Syms;
class VAXI4_READ_TOP_VerilatedVcd;


//----------

VL_MODULE(VAXI4_READ_TOP___024root) {
  public:

    // PORTS
    VL_IN8(CLK,0,0);
    VL_IN8(RST_N,0,0);
    VL_IN8(read_req_instr,0,0);
    VL_IN8(read_req_ex,0,0);
    VL_OUT8(instr_finish,0,0);
    VL_OUT8(ex_finish,0,0);
    VL_OUT8(Read_SIGNAL,0,0);
    VL_IN8(DATA_ARRIVE,0,0);
    VL_IN64(instr_addr,63,0);
    VL_IN64(ex_addr,63,0);
    VL_OUT64(instr_data,63,0);
    VL_OUT64(ex_data,63,0);
    VL_OUT64(Read_ADDRESS,63,0);
    VL_IN64(DATA_OUTSIDE,63,0);

    // LOCAL SIGNALS
    CData/*1:0*/ AXI4_READ_TOP__DOT__req_combine;
    CData/*1:0*/ AXI4_READ_TOP__DOT__choose_channel;
    CData/*0:0*/ AXI4_READ_TOP__DOT__aribter_release;
    CData/*0:0*/ AXI4_READ_TOP__DOT__read_req;
    CData/*0:0*/ AXI4_READ_TOP__DOT__read_finish;
    CData/*2:0*/ AXI4_READ_TOP__DOT__rr_arbiter__DOT__cur_state;
    CData/*2:0*/ AXI4_READ_TOP__DOT__rr_arbiter__DOT__next_state;
    CData/*1:0*/ AXI4_READ_TOP__DOT__rr_arbiter__DOT__pri;
    CData/*1:0*/ AXI4_READ_TOP__DOT__rr_arbiter__DOT__req_shot;
    CData/*0:0*/ AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_VALID;
    CData/*0:0*/ AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_READY;
    CData/*1:0*/ AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_RESP;
    CData/*0:0*/ AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_VALID;
    CData/*0:0*/ AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__R_READY;
    CData/*0:0*/ AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state;
    QData/*63:0*/ AXI4_READ_TOP__DOT__read_addr;
    QData/*63:0*/ AXI4_READ_TOP__DOT__read_data;
    QData/*63:0*/ AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__AR_ADDR;
    QData/*63:0*/ AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address;
    QData/*63:0*/ AXI4_READ_TOP__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_buf;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__CLK;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VAXI4_READ_TOP__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAXI4_READ_TOP___024root);  ///< Copying not allowed
  public:
    VAXI4_READ_TOP___024root(const char* name);
    ~VAXI4_READ_TOP___024root();

    // INTERNAL METHODS
    void __Vconfigure(VAXI4_READ_TOP__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
