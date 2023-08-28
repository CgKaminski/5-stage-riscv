// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcontroller.h for the primary calling header

#ifndef VERILATED_VCONTROLLER___024ROOT_H_
#define VERILATED_VCONTROLLER___024ROOT_H_  // guard

#include "verilated.h"


class Vcontroller__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcontroller___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(op_i,6,0);
    VL_IN8(funct3_i,2,0);
    VL_IN8(funct7b5_i,0,0);
    VL_OUT8(reg_write_o,0,0);
    VL_OUT8(result_src_o,1,0);
    VL_OUT8(mem_write_o,0,0);
    VL_OUT8(jump_o,0,0);
    VL_OUT8(branch_o,0,0);
    VL_OUT8(alu_control_o,2,0);
    VL_OUT8(alu_src_o,0,0);
    VL_OUT8(imm_src_o,1,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcontroller__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcontroller___024root(Vcontroller__Syms* symsp, const char* v__name);
    ~Vcontroller___024root();
    VL_UNCOPYABLE(Vcontroller___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
