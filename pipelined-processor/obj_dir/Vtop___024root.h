// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(reset_i,0,0);
    VL_OUT8(mem_write_o,0,0);
    CData/*2:0*/ top__DOT__processor__DOT__alu_control_d;
    CData/*1:0*/ top__DOT__processor__DOT__forward_a;
    CData/*1:0*/ top__DOT__processor__DOT__forward_b;
    CData/*0:0*/ top__DOT__processor__DOT__stall_f;
    CData/*0:0*/ top__DOT__processor__DOT__stall_d;
    CData/*0:0*/ top__DOT__processor__DOT__flush_e;
    CData/*0:0*/ top__DOT__processor__DOT__pc_src_e;
    CData/*0:0*/ top__DOT__processor__DOT__reg_write_e;
    CData/*0:0*/ top__DOT__processor__DOT__mem_write_e;
    CData/*0:0*/ top__DOT__processor__DOT__jump_e;
    CData/*0:0*/ top__DOT__processor__DOT__branch_e;
    CData/*0:0*/ top__DOT__processor__DOT__alu_src_e;
    CData/*1:0*/ top__DOT__processor__DOT__result_src_e;
    CData/*2:0*/ top__DOT__processor__DOT__alu_control_e;
    CData/*4:0*/ top__DOT__processor__DOT__rs1_e;
    CData/*4:0*/ top__DOT__processor__DOT__rs2_e;
    CData/*4:0*/ top__DOT__processor__DOT__rd_e;
    CData/*0:0*/ top__DOT__processor__DOT__reg_write_m;
    CData/*0:0*/ top__DOT__processor__DOT__mem_write_m;
    CData/*1:0*/ top__DOT__processor__DOT__result_src_m;
    CData/*4:0*/ top__DOT__processor__DOT__rd_m;
    CData/*0:0*/ top__DOT__processor__DOT__reg_write_w;
    CData/*1:0*/ top__DOT__processor__DOT__result_src_w;
    CData/*4:0*/ top__DOT__processor__DOT__rd_w;
    CData/*0:0*/ top__DOT__processor__DOT__hazard_unit__DOT__lw_stall;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __VactContinue;
    SData/*10:0*/ top__DOT__processor__DOT__controller__DOT__controls;
    VL_OUT(write_data_o,31,0);
    VL_OUT(data_adr_o,31,0);
    IData/*31:0*/ top__DOT__processor__DOT__pc_f0;
    IData/*31:0*/ top__DOT__processor__DOT__pc_f;
    IData/*31:0*/ top__DOT__processor__DOT__instr_d;
    IData/*31:0*/ top__DOT__processor__DOT__pc_d;
    IData/*31:0*/ top__DOT__processor__DOT__pc_plus4_d;
    IData/*31:0*/ top__DOT__processor__DOT__rd1_e;
    IData/*31:0*/ top__DOT__processor__DOT__rd2_e;
    IData/*31:0*/ top__DOT__processor__DOT__pc_e;
    IData/*31:0*/ top__DOT__processor__DOT__imm_ext_e;
    IData/*31:0*/ top__DOT__processor__DOT__pc_plus4_e;
    IData/*31:0*/ top__DOT__processor__DOT__alu_result_e;
    IData/*31:0*/ top__DOT__processor__DOT__src_a_e;
    IData/*31:0*/ top__DOT__processor__DOT__src_b0_e;
    IData/*31:0*/ top__DOT__processor__DOT__src_b_e;
    IData/*31:0*/ top__DOT__processor__DOT__write_data_e;
    IData/*31:0*/ top__DOT__processor__DOT__alu_result_m;
    IData/*31:0*/ top__DOT__processor__DOT__write_data_m;
    IData/*31:0*/ top__DOT__processor__DOT__pc_plus4_m;
    IData/*31:0*/ top__DOT__processor__DOT__alu_result_w;
    IData/*31:0*/ top__DOT__processor__DOT__rd1_w;
    IData/*31:0*/ top__DOT__processor__DOT__pc_plus4_w;
    IData/*31:0*/ top__DOT__processor__DOT__result_w;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0;
    VlUnpacked<IData/*31:0*/, 64> top__DOT__processor__DOT__imem__DOT__ram;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__processor__DOT__regfile__DOT__rf;
    VlUnpacked<IData/*31:0*/, 64> top__DOT__processor__DOT__dmem__DOT__ram;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
