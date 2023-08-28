// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhazard_unit.h for the primary calling header

#ifndef VERILATED_VHAZARD_UNIT___024ROOT_H_
#define VERILATED_VHAZARD_UNIT___024ROOT_H_  // guard

#include "verilated.h"


class Vhazard_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhazard_unit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(rs1_e_i,4,0);
    VL_IN8(rs2_e_i,4,0);
    VL_IN8(rd_m_i,4,0);
    VL_IN8(rd_w_i,4,0);
    VL_IN8(reg_write_m_i,0,0);
    VL_IN8(reg_write_w_i,0,0);
    VL_IN8(rs1_d_i,4,0);
    VL_IN8(rs2_d_i,4,0);
    VL_IN8(rd_e_i,4,0);
    VL_IN8(pc_src_e_i,0,0);
    VL_IN8(result_src_e_i,0,0);
    VL_OUT8(forward_a_o,1,0);
    VL_OUT8(forward_b_o,1,0);
    VL_OUT8(stall_f_o,0,0);
    VL_OUT8(stall_d_o,0,0);
    VL_OUT8(flush_e_o,0,0);
    VL_OUT8(flush_d_o,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhazard_unit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhazard_unit___024root(Vhazard_unit__Syms* symsp, const char* v__name);
    ~Vhazard_unit___024root();
    VL_UNCOPYABLE(Vhazard_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
