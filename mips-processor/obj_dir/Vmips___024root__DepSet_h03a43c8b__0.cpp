// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips.h for the primary calling header

#include "verilated.h"

#include "Vmips__Syms.h"
#include "Vmips___024root.h"

void Vmips___024root___eval_act(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vmips___024root___nba_sequent__TOP__0(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0;
    __Vdlyvval__top__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0;
    __Vdlyvset__top__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__dmem__DOT__RAM__v0;
    __Vdlyvdim0__top__DOT__dmem__DOT__RAM__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__dmem__DOT__RAM__v0;
    __Vdlyvval__top__DOT__dmem__DOT__RAM__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dmem__DOT__RAM__v0;
    __Vdlyvset__top__DOT__dmem__DOT__RAM__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__dmem__DOT__RAM__v0 = 0U;
    __Vdlyvset__top__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 = 0U;
    if (vlSelf->memwrite) {
        __Vdlyvval__top__DOT__dmem__DOT__RAM__v0 = vlSelf->writedata;
        __Vdlyvset__top__DOT__dmem__DOT__RAM__v0 = 1U;
        __Vdlyvdim0__top__DOT__dmem__DOT__RAM__v0 = 
            (0x3fU & (vlSelf->dataadr >> 2U));
    }
    if ((0x100U & (IData)(vlSelf->top__DOT__mips__DOT__c__DOT__md__DOT__controls))) {
        __Vdlyvval__top__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 
            = ((8U & (IData)(vlSelf->top__DOT__mips__DOT__c__DOT__md__DOT__controls))
                ? vlSelf->top__DOT__dmem__DOT__RAM[
               (0x3fU & (vlSelf->dataadr >> 2U))] : vlSelf->dataadr);
        __Vdlyvset__top__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 
            = (0x1fU & ((0x80U & (IData)(vlSelf->top__DOT__mips__DOT__c__DOT__md__DOT__controls))
                         ? (vlSelf->top__DOT__instr 
                            >> 0xbU) : (vlSelf->top__DOT__instr 
                                        >> 0x10U)));
    }
    if (__Vdlyvset__top__DOT__dmem__DOT__RAM__v0) {
        vlSelf->top__DOT__dmem__DOT__RAM[__Vdlyvdim0__top__DOT__dmem__DOT__RAM__v0] 
            = __Vdlyvval__top__DOT__dmem__DOT__RAM__v0;
    }
    if (__Vdlyvset__top__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0) {
        vlSelf->top__DOT__mips__DOT__dp__DOT__rf__DOT__rf[__Vdlyvdim0__top__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0;
    }
}

extern const VlUnpacked<SData/*8:0*/, 64> Vmips__ConstPool__TABLE_h81582e3d_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vmips__ConstPool__TABLE_heddfde2a_0;

VL_INLINE_OPT void Vmips___024root___nba_sequent__TOP__1(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->top__DOT__pc = ((IData)(vlSelf->reset) ? 0U
                             : ((4U & (IData)(vlSelf->top__DOT__mips__DOT__c__DOT__md__DOT__controls))
                                 ? vlSelf->top__DOT__mips__DOT__dp__DOT____Vcellinp__pcmux____pinNumber2
                                 : vlSelf->top__DOT__mips__DOT__dp__DOT__pcnextbr));
    vlSelf->top__DOT__instr = vlSelf->top__DOT__imem__DOT__RAM
        [(0x3fU & (vlSelf->top__DOT__pc >> 2U))];
    vlSelf->top__DOT__mips__DOT__dp__DOT____Vcellinp__pcmux____pinNumber2 
        = ((0xf0000000U & ((IData)(4U) + vlSelf->top__DOT__pc)) 
           | (0xffffffcU & (vlSelf->top__DOT__instr 
                            << 2U)));
    vlSelf->top__DOT__mips__DOT__dp__DOT__signimm = 
        (((- (IData)((1U & (vlSelf->top__DOT__instr 
                            >> 0xfU)))) << 0x10U) | 
         (0xffffU & vlSelf->top__DOT__instr));
    __Vtableidx1 = (vlSelf->top__DOT__instr >> 0x1aU);
    vlSelf->top__DOT__mips__DOT__c__DOT__md__DOT__controls 
        = Vmips__ConstPool__TABLE_h81582e3d_0[__Vtableidx1];
    vlSelf->memwrite = (1U & ((IData)(vlSelf->top__DOT__mips__DOT__c__DOT__md__DOT__controls) 
                              >> 4U));
    __Vtableidx2 = ((0xfcU & (vlSelf->top__DOT__instr 
                              << 2U)) | (3U & (IData)(vlSelf->top__DOT__mips__DOT__c__DOT__md__DOT__controls)));
    vlSelf->top__DOT__mips__DOT__alucontrol = Vmips__ConstPool__TABLE_heddfde2a_0
        [__Vtableidx2];
}

VL_INLINE_OPT void Vmips___024root___nba_comb__TOP__0(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___nba_comb__TOP__0\n"); );
    // Init
    IData/*31:0*/ top__DOT__mips__DOT__dp__DOT__srca;
    top__DOT__mips__DOT__dp__DOT__srca = 0;
    IData/*31:0*/ top__DOT__mips__DOT__dp__DOT__srcb;
    top__DOT__mips__DOT__dp__DOT__srcb = 0;
    IData/*31:0*/ top__DOT__mips__DOT__dp__DOT__alu__DOT__sum;
    top__DOT__mips__DOT__dp__DOT__alu__DOT__sum = 0;
    // Body
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
    top__DOT__mips__DOT__dp__DOT__srcb = ((0x40U & (IData)(vlSelf->top__DOT__mips__DOT__c__DOT__md__DOT__controls))
                                           ? vlSelf->top__DOT__mips__DOT__dp__DOT__signimm
                                           : vlSelf->writedata);
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

void Vmips___024root___eval_nba(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmips___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmips___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmips___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vmips___024root___eval_triggers__act(Vmips___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmips___024root___dump_triggers__act(Vmips___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmips___024root___dump_triggers__nba(Vmips___024root* vlSelf);
#endif  // VL_DEBUG

void Vmips___024root___eval(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vmips___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmips___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("mips.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vmips___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmips___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("mips.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmips___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vmips___024root___eval_debug_assertions(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
