// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPC_REG__SYMS_H_
#define VERILATED_VPC_REG__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VPC_Reg.h"

// INCLUDE MODULE CLASSES
#include "VPC_Reg___024root.h"

// SYMS CLASS (contains all model state)
class VPC_Reg__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VPC_Reg* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VPC_Reg___024root              TOP;

    // CONSTRUCTORS
    VPC_Reg__Syms(VerilatedContext* contextp, const char* namep, VPC_Reg* modelp);
    ~VPC_Reg__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
