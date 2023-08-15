// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_static(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_initial(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial\n"); );
    // Body
    Vtestbench___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0 = 0U;
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__reset__0 = 0U;
}

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h19c0e1ac__0;
    // Body
    vlSelf->testbench__DOT__reset = 0U;
    __Vtemp_h19c0e1ac__0[0U] = 0x2e747874U;
    __Vtemp_h19c0e1ac__0[1U] = 0x74657374U;
    __Vtemp_h19c0e1ac__0[2U] = 0x69736376U;
    __Vtemp_h19c0e1ac__0[3U] = 0x72U;
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h19c0e1ac__0)
                 ,  &(vlSelf->testbench__DOT__dut__DOT__imem__DOT__RAM)
                 , 0, ~0ULL);
    vlSelf->testbench__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtestbench___024root___eval_final(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtestbench___024root___eval_triggers__stl(Vtestbench___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___eval_stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_settle(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtestbench___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtestbench___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("testbench.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtestbench___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<SData/*8:0*/, 64> Vtestbench__ConstPool__TABLE_h81582e3d_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtestbench__ConstPool__TABLE_heddfde2a_0;

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ testbench__DOT__dut__DOT__mips__DOT__dp__DOT__srca;
    testbench__DOT__dut__DOT__mips__DOT__dp__DOT__srca = 0;
    IData/*31:0*/ testbench__DOT__dut__DOT__mips__DOT__dp__DOT__srcb;
    testbench__DOT__dut__DOT__mips__DOT__dp__DOT__srcb = 0;
    IData/*31:0*/ testbench__DOT__dut__DOT__mips__DOT__dp__DOT__alu__DOT__sum;
    testbench__DOT__dut__DOT__mips__DOT__dp__DOT__alu__DOT__sum = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->testbench__DOT__dut__DOT__instr = vlSelf->testbench__DOT__dut__DOT__imem__DOT__RAM
        [(0x3fU & (vlSelf->testbench__DOT__dut__DOT__pc 
                   >> 2U))];
    vlSelf->testbench__DOT__dut__DOT__mips__DOT__dp__DOT____Vcellinp__pcmux____pinNumber2 
        = ((0xf0000000U & ((IData)(4U) + vlSelf->testbench__DOT__dut__DOT__pc)) 
           | (0xffffffcU & (vlSelf->testbench__DOT__dut__DOT__instr 
                            << 2U)));
    testbench__DOT__dut__DOT__mips__DOT__dp__DOT__srca 
        = ((0U == (0x1fU & (vlSelf->testbench__DOT__dut__DOT__instr 
                            >> 0x15U))) ? 0U : vlSelf->testbench__DOT__dut__DOT__mips__DOT__dp__DOT__rf__DOT__rf
           [(0x1fU & (vlSelf->testbench__DOT__dut__DOT__instr 
                      >> 0x15U))]);
    vlSelf->testbench__DOT__writedata = ((0U == (0x1fU 
                                                 & (vlSelf->testbench__DOT__dut__DOT__instr 
                                                    >> 0x10U)))
                                          ? 0U : vlSelf->testbench__DOT__dut__DOT__mips__DOT__dp__DOT__rf__DOT__rf
                                         [(0x1fU & 
                                           (vlSelf->testbench__DOT__dut__DOT__instr 
                                            >> 0x10U))]);
    vlSelf->testbench__DOT__dut__DOT__mips__DOT__dp__DOT__signimm 
        = (((- (IData)((1U & (vlSelf->testbench__DOT__dut__DOT__instr 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->testbench__DOT__dut__DOT__instr));
    __Vtableidx1 = (vlSelf->testbench__DOT__dut__DOT__instr 
                    >> 0x1aU);
    vlSelf->testbench__DOT__dut__DOT__mips__DOT__c__DOT__md__DOT__controls 
        = Vtestbench__ConstPool__TABLE_h81582e3d_0[__Vtableidx1];
    testbench__DOT__dut__DOT__mips__DOT__dp__DOT__srcb 
        = ((0x40U & (IData)(vlSelf->testbench__DOT__dut__DOT__mips__DOT__c__DOT__md__DOT__controls))
            ? vlSelf->testbench__DOT__dut__DOT__mips__DOT__dp__DOT__signimm
            : vlSelf->testbench__DOT__writedata);
    __Vtableidx2 = ((0xfcU & (vlSelf->testbench__DOT__dut__DOT__instr 
                              << 2U)) | (3U & (IData)(vlSelf->testbench__DOT__dut__DOT__mips__DOT__c__DOT__md__DOT__controls)));
    vlSelf->testbench__DOT__dut__DOT__mips__DOT__alucontrol 
        = Vtestbench__ConstPool__TABLE_heddfde2a_0[__Vtableidx2];
    testbench__DOT__dut__DOT__mips__DOT__dp__DOT__alu__DOT__sum 
        = (testbench__DOT__dut__DOT__mips__DOT__dp__DOT__srca 
           + (((4U & (IData)(vlSelf->testbench__DOT__dut__DOT__mips__DOT__alucontrol))
                ? (~ testbench__DOT__dut__DOT__mips__DOT__dp__DOT__srcb)
                : testbench__DOT__dut__DOT__mips__DOT__dp__DOT__srcb) 
              + (1U & ((IData)(vlSelf->testbench__DOT__dut__DOT__mips__DOT__alucontrol) 
                       >> 2U))));
    vlSelf->testbench__DOT__dataadr = ((2U & (IData)(vlSelf->testbench__DOT__dut__DOT__mips__DOT__alucontrol))
                                        ? ((1U & (IData)(vlSelf->testbench__DOT__dut__DOT__mips__DOT__alucontrol))
                                            ? (testbench__DOT__dut__DOT__mips__DOT__dp__DOT__alu__DOT__sum 
                                               >> 0x1fU)
                                            : testbench__DOT__dut__DOT__mips__DOT__dp__DOT__alu__DOT__sum)
                                        : ((1U & (IData)(vlSelf->testbench__DOT__dut__DOT__mips__DOT__alucontrol))
                                            ? (testbench__DOT__dut__DOT__mips__DOT__dp__DOT__srca 
                                               | testbench__DOT__dut__DOT__mips__DOT__dp__DOT__srcb)
                                            : (testbench__DOT__dut__DOT__mips__DOT__dp__DOT__srca 
                                               & testbench__DOT__dut__DOT__mips__DOT__dp__DOT__srcb)));
    vlSelf->testbench__DOT__dut__DOT__mips__DOT__dp__DOT__pcnextbr 
        = ((((IData)(vlSelf->testbench__DOT__dut__DOT__mips__DOT__c__DOT__md__DOT__controls) 
             >> 5U) & (0U == vlSelf->testbench__DOT__dataadr))
            ? ((IData)(4U) + (vlSelf->testbench__DOT__dut__DOT__pc 
                              + (vlSelf->testbench__DOT__dut__DOT__mips__DOT__dp__DOT__signimm 
                                 << 2U))) : ((IData)(4U) 
                                             + vlSelf->testbench__DOT__dut__DOT__pc));
}

VL_ATTR_COLD void Vtestbench___024root___eval_stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtestbench___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge testbench.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge testbench.clk or posedge testbench.reset)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge testbench.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge testbench.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge testbench.clk or posedge testbench.reset)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge testbench.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___ctor_var_reset(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->testbench__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__writedata = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dataadr = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__mips__DOT__alucontrol = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__dut__DOT__mips__DOT__c__DOT__md__DOT__controls = VL_RAND_RESET_I(9);
    vlSelf->testbench__DOT__dut__DOT__mips__DOT__dp__DOT__pcnextbr = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__mips__DOT__dp__DOT__signimm = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__dut__DOT__mips__DOT__dp__DOT____Vcellinp__pcmux____pinNumber2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__mips__DOT__dp__DOT__rf__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__imem__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->testbench__DOT__dut__DOT__dmem__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__reset__0 = VL_RAND_RESET_I(1);
}
