// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPC_ADDER__SYMS_H_
#define VERILATED_VPC_ADDER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VPC_Adder.h"

// INCLUDE MODULE CLASSES
#include "VPC_Adder___024root.h"

// SYMS CLASS (contains all model state)
class VPC_Adder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VPC_Adder* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VPC_Adder___024root            TOP;

    // CONSTRUCTORS
    VPC_Adder__Syms(VerilatedContext* contextp, const char* namep, VPC_Adder* modelp);
    ~VPC_Adder__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
