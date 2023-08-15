// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips.h for the primary calling header

#include "verilated.h"

#include "Vmips__Syms.h"
#include "Vmips___024root.h"

VL_ATTR_COLD void Vmips___024root___eval_static(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmips___024root___eval_initial__TOP(Vmips___024root* vlSelf);

VL_ATTR_COLD void Vmips___024root___eval_initial(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___eval_initial\n"); );
    // Body
    Vmips___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void Vmips___024root___eval_initial__TOP(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h6ee52234__0;
    // Body
    __Vtemp_h6ee52234__0[0U] = 0x2e747874U;
    __Vtemp_h6ee52234__0[1U] = 0x65737430U;
    __Vtemp_h6ee52234__0[2U] = 0x73637674U;
    __Vtemp_h6ee52234__0[3U] = 0x7269U;
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h6ee52234__0)
                 ,  &(vlSelf->top__DOT__imem__DOT__RAM)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vmips___024root___eval_final(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmips___024root___eval_triggers__stl(Vmips___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmips___024root___dump_triggers__stl(Vmips___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vmips___024root___eval_stl(Vmips___024root* vlSelf);

VL_ATTR_COLD void Vmips___024root___eval_settle(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vmips___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vmips___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("mips.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vmips___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmips___024root___dump_triggers__stl(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<SData/*8:0*/, 64> Vmips__ConstPool__TABLE_h81582e3d_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vmips__ConstPool__TABLE_heddfde2a_0;

VL_ATTR_COLD void Vmips___024root___stl_sequent__TOP__0(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ top__DOT__mips__DOT__dp__DOT__srca;
    top__DOT__mips__DOT__dp__DOT__srca = 0;
    IData/*31:0*/ top__DOT__mips__DOT__dp__DOT__srcb;
    top__DOT__mips__DOT__dp__DOT__srcb = 0;
    IData/*31:0*/ top__DOT__mips__DOT__dp__DOT__alu__DOT__sum;
    top__DOT__mips__DOT__dp__DOT__alu__DOT__sum = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->top__DOT__instr = vlSelf->top__DOT__imem__DOT__RAM
        [(0x3fU & (vlSelf->top__DOT__pc >> 2U))];
    vlSelf->top__DOT__mips__DOT__dp__DOT____Vcellinp__pcmux____pinNumber2 
        = ((0xf0000000U & ((IData)(4U) + vlSelf->top__DOT__pc)) 
           | (0xffffffcU & (vlSelf->top__DOT__instr 
                            << 2U)));
    top__DOT__mips__DOT__dp__DOT__srca = ((0U == (0x1fU 
                                                  & (vlSelf->top__DOT__instr 
                                                     >> 0x15U)))
                                           ? 0U : vlSelf->top__DOT__mips__DOT__dp__DOT__rf__DOT__rf
                                          [(0x1fU & 
                                            (vlSelf->top__DOT__instr 
                                             >> 0x15U))]);
    vlSelf->writedata = ((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                          >> 0x10U)))
                          ? 0U : vlSelf->top__DOT__mips__DOT__dp__DOT__rf__DOT__rf
                         [(0x1fU & (vlSelf->top__DOT__instr 
                                    >> 0x10U))]);
    vlSelf->top__DOT__mips__DOT__dp__DOT__signimm = 
        (((- (IData)((1U & (vlSelf->top__DOT__instr 
                            >> 0xfU)))) << 0x10U) | 
         (0xffffU & vlSelf->top__DOT__instr));
    __Vtableidx1 = (vlSelf->top__DOT__instr >> 0x1aU);
    vlSelf->top__DOT__mips__DOT__c__DOT__md__DOT__controls 
        = Vmips__ConstPool__TABLE_h81582e3d_0[__Vtableidx1];
    vlSelf->memwrite = (1U & ((IData)(vlSelf->top__DOT__mips__DOT__c__DOT__md__DOT__controls) 
                              >> 4U));
    top__DOT__mips__DOT__dp__DOT__srcb = ((0x40U & (IData)(vlSelf->top__DOT__mips__DOT__c__DOT__md__DOT__controls))
                                           ? vlSelf->top__DOT__mips__DOT__dp__DOT__signimm
                                           : vlSelf->writedata);
    __Vtableidx2 = ((0xfcU & (vlSelf->top__DOT__instr 
                              << 2U)) | (3U & (IData)(vlSelf->top__DOT__mips__DOT__c__DOT__md__DOT__controls)));
    vlSelf->top__DOT__mips__DOT__alucontrol = Vmips__ConstPool__TABLE_heddfde2a_0
        [__Vtableidx2];
    top__DOT__mips__DOT__dp__DOT__alu__DOT__sum = (top__DOT__mips__DOT__dp__DOT__srca 
                                                   + 
                                                   (((4U 
                                                      & (IData)(vlSelf->top__DOT__mips__DOT__alucontrol))
                                                      ? 
                                                     (~ top__DOT__mips__DOT__dp__DOT__srcb)
                                                      : top__DOT__mips__DOT__dp__DOT__srcb) 
                                                    + 
                                                    (1U 
                                                     & ((IData)(vlSelf->top__DOT__mips__DOT__alucontrol) 
                                                        >> 2U))));
    vlSelf->dataadr = ((2U & (IData)(vlSelf->top__DOT__mips__DOT__alucontrol))
                        ? ((1U & (IData)(vlSelf->top__DOT__mips__DOT__alucontrol))
                            ? (top__DOT__mips__DOT__dp__DOT__alu__DOT__sum 
                               >> 0x1fU) : top__DOT__mips__DOT__dp__DOT__alu__DOT__sum)
                        : ((1U & (IData)(vlSelf->top__DOT__mips__DOT__alucontrol))
                            ? (top__DOT__mips__DOT__dp__DOT__srca 
                               | top__DOT__mips__DOT__dp__DOT__srcb)
                            : (top__DOT__mips__DOT__dp__DOT__srca 
                               & top__DOT__mips__DOT__dp__DOT__srcb)));
    vlSelf->top__DOT__mips__DOT__dp__DOT__pcnextbr 
        = ((((IData)(vlSelf->top__DOT__mips__DOT__c__DOT__md__DOT__controls) 
             >> 5U) & (0U == vlSelf->dataadr)) ? ((IData)(4U) 
                                                  + 
                                                  (vlSelf->top__DOT__pc 
                                                   + 
                                                   (vlSelf->top__DOT__mips__DOT__dp__DOT__signimm 
                                                    << 2U)))
            : ((IData)(4U) + vlSelf->top__DOT__pc));
}

VL_ATTR_COLD void Vmips___024root___eval_stl(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vmips___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmips___024root___dump_triggers__act(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmips___024root___dump_triggers__nba(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmips___024root___ctor_var_reset(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->writedata = VL_RAND_RESET_I(32);
    vlSelf->dataadr = VL_RAND_RESET_I(32);
    vlSelf->memwrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__alucontrol = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mips__DOT__c__DOT__md__DOT__controls = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__mips__DOT__dp__DOT__pcnextbr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__dp__DOT__signimm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mips__DOT__dp__DOT____Vcellinp__pcmux____pinNumber2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__mips__DOT__dp__DOT__rf__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__imem__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__dmem__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
