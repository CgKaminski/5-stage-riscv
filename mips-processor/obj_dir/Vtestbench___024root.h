// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ testbench__DOT__clk;
    CData/*0:0*/ testbench__DOT__reset;
    CData/*2:0*/ testbench__DOT__dut__DOT__mips__DOT__alucontrol;
    CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ testbench__DOT__dut__DOT__mips__DOT__c__DOT__md__DOT__controls;
    IData/*31:0*/ testbench__DOT__writedata;
    IData/*31:0*/ testbench__DOT__dataadr;
    IData/*31:0*/ testbench__DOT__dut__DOT__pc;
    IData/*31:0*/ testbench__DOT__dut__DOT__instr;
    IData/*31:0*/ testbench__DOT__dut__DOT__mips__DOT__dp__DOT__pcnextbr;
    IData/*31:0*/ testbench__DOT__dut__DOT__mips__DOT__dp__DOT__signimm;
    IData/*31:0*/ testbench__DOT__dut__DOT__mips__DOT__dp__DOT____Vcellinp__pcmux____pinNumber2;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> testbench__DOT__dut__DOT__mips__DOT__dp__DOT__rf__DOT__rf;
    VlUnpacked<IData/*31:0*/, 64> testbench__DOT__dut__DOT__imem__DOT__RAM;
    VlUnpacked<IData/*31:0*/, 64> testbench__DOT__dut__DOT__dmem__DOT__RAM;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench___024root(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench___024root();
    VL_UNCOPYABLE(Vtestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
