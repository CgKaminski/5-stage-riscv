// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmips.h for the primary calling header

#ifndef VERILATED_VMIPS___024ROOT_H_
#define VERILATED_VMIPS___024ROOT_H_  // guard

#include "verilated.h"


class Vmips__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmips___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(memwrite,0,0);
    CData/*2:0*/ top__DOT__mips__DOT__alucontrol;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ top__DOT__mips__DOT__c__DOT__md__DOT__controls;
    VL_OUT(writedata,31,0);
    VL_OUT(dataadr,31,0);
    IData/*31:0*/ top__DOT__pc;
    IData/*31:0*/ top__DOT__instr;
    IData/*31:0*/ top__DOT__mips__DOT__dp__DOT__pcnextbr;
    IData/*31:0*/ top__DOT__mips__DOT__dp__DOT__signimm;
    IData/*31:0*/ top__DOT__mips__DOT__dp__DOT____Vcellinp__pcmux____pinNumber2;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__mips__DOT__dp__DOT__rf__DOT__rf;
    VlUnpacked<IData/*31:0*/, 64> top__DOT__imem__DOT__RAM;
    VlUnpacked<IData/*31:0*/, 64> top__DOT__dmem__DOT__RAM;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmips__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmips___024root(Vmips__Syms* symsp, const char* v__name);
    ~Vmips___024root();
    VL_UNCOPYABLE(Vmips___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
