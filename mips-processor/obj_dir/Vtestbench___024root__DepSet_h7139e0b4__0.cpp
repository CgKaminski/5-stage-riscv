// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__0\n"); );
    // Body
    if ((0x10U & (IData)(vlSelf->testbench__DOT__dut__DOT__mips__DOT__c__DOT__md__DOT__controls))) {
        if (VL_UNLIKELY(((0x54U == vlSelf->testbench__DOT__dataadr) 
                         & (7U == vlSelf->testbench__DOT__writedata)))) {
            VL_WRITEF("Simulation succeeded\n");
            VL_STOP_MT("testbench.sv", 30, "");
        } else if (VL_UNLIKELY((0x50U != vlSelf->testbench__DOT__dataadr))) {
            VL_WRITEF("Simulation failed\n");
            VL_STOP_MT("testbench.sv", 33, "");
        }
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__testbench__DOT__dut__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0;
    __Vdlyvdim0__testbench__DOT__dut__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__testbench__DOT__dut__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0;
    __Vdlyvval__testbench__DOT__dut__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__dut__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0;
    __Vdlyvset__testbench__DOT__dut__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0;
    __Vdlyvdim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0;
    IData/*31:0*/ __Vdlyvval__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0;
    __Vdlyvval__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0;
    CData/*0:0*/ __Vdlyvset__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0;
    __Vdlyvset__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0;
    // Body
    __Vdlyvset__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 0U;
    __Vdlyvset__testbench__DOT__dut__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 = 0U;
    if ((0x10U & (IData)(vlSelf->testbench__DOT__dut__DOT__mips__DOT__c__DOT__md__DOT__controls))) {
        __Vdlyvval__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 
            = vlSelf->testbench__DOT__writedata;
        __Vdlyvset__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 = 1U;
        __Vdlyvdim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0 
            = (0x3fU & (vlSelf->testbench__DOT__dataadr 
                        >> 2U));
    }
    if ((0x100U & (IData)(vlSelf->testbench__DOT__dut__DOT__mips__DOT__c__DOT__md__DOT__controls))) {
        __Vdlyvval__testbench__DOT__dut__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 
            = ((8U & (IData)(vlSelf->testbench__DOT__dut__DOT__mips__DOT__c__DOT__md__DOT__controls))
                ? vlSelf->testbench__DOT__dut__DOT__dmem__DOT__RAM
               [(0x3fU & (vlSelf->testbench__DOT__dataadr 
                          >> 2U))] : vlSelf->testbench__DOT__dataadr);
        __Vdlyvset__testbench__DOT__dut__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 = 1U;
        __Vdlyvdim0__testbench__DOT__dut__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0 
            = (0x1fU & ((0x80U & (IData)(vlSelf->testbench__DOT__dut__DOT__mips__DOT__c__DOT__md__DOT__controls))
                         ? (vlSelf->testbench__DOT__dut__DOT__instr 
                            >> 0xbU) : (vlSelf->testbench__DOT__dut__DOT__instr 
                                        >> 0x10U)));
    }
    if (__Vdlyvset__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0) {
        vlSelf->testbench__DOT__dut__DOT__dmem__DOT__RAM[__Vdlyvdim0__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0] 
            = __Vdlyvval__testbench__DOT__dut__DOT__dmem__DOT__RAM__v0;
    }
    if (__Vdlyvset__testbench__DOT__dut__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0) {
        vlSelf->testbench__DOT__dut__DOT__mips__DOT__dp__DOT__rf__DOT__rf[__Vdlyvdim0__testbench__DOT__dut__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0] 
            = __Vdlyvval__testbench__DOT__dut__DOT__mips__DOT__dp__DOT__rf__DOT__rf__v0;
    }
}

extern const VlUnpacked<SData/*8:0*/, 64> Vtestbench__ConstPool__TABLE_h81582e3d_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtestbench__ConstPool__TABLE_heddfde2a_0;

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__2(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->testbench__DOT__dut__DOT__pc = ((IData)(vlSelf->testbench__DOT__reset)
                                             ? 0U : 
                                            ((4U & (IData)(vlSelf->testbench__DOT__dut__DOT__mips__DOT__c__DOT__md__DOT__controls))
                                              ? vlSelf->testbench__DOT__dut__DOT__mips__DOT__dp__DOT____Vcellinp__pcmux____pinNumber2
                                              : vlSelf->testbench__DOT__dut__DOT__mips__DOT__dp__DOT__pcnextbr));
    vlSelf->testbench__DOT__dut__DOT__instr = vlSelf->testbench__DOT__dut__DOT__imem__DOT__RAM
        [(0x3fU & (vlSelf->testbench__DOT__dut__DOT__pc 
                   >> 2U))];
    vlSelf->testbench__DOT__dut__DOT__mips__DOT__dp__DOT____Vcellinp__pcmux____pinNumber2 
        = ((0xf0000000U & ((IData)(4U) + vlSelf->testbench__DOT__dut__DOT__pc)) 
           | (0xffffffcU & (vlSelf->testbench__DOT__dut__DOT__instr 
                            << 2U)));
    vlSelf->testbench__DOT__dut__DOT__mips__DOT__dp__DOT__signimm 
        = (((- (IData)((1U & (vlSelf->testbench__DOT__dut__DOT__instr 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->testbench__DOT__dut__DOT__instr));
    __Vtableidx1 = (vlSelf->testbench__DOT__dut__DOT__instr 
                    >> 0x1aU);
    vlSelf->testbench__DOT__dut__DOT__mips__DOT__c__DOT__md__DOT__controls 
        = Vtestbench__ConstPool__TABLE_h81582e3d_0[__Vtableidx1];
    __Vtableidx2 = ((0xfcU & (vlSelf->testbench__DOT__dut__DOT__instr 
                              << 2U)) | (3U & (IData)(vlSelf->testbench__DOT__dut__DOT__mips__DOT__c__DOT__md__DOT__controls)));
    vlSelf->testbench__DOT__dut__DOT__mips__DOT__alucontrol 
        = Vtestbench__ConstPool__TABLE_heddfde2a_0[__Vtableidx2];
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__0\n"); );
    // Init
    IData/*31:0*/ testbench__DOT__dut__DOT__mips__DOT__dp__DOT__srca;
    testbench__DOT__dut__DOT__mips__DOT__dp__DOT__srca = 0;
    IData/*31:0*/ testbench__DOT__dut__DOT__mips__DOT__dp__DOT__srcb;
    testbench__DOT__dut__DOT__mips__DOT__dp__DOT__srcb = 0;
    IData/*31:0*/ testbench__DOT__dut__DOT__mips__DOT__dp__DOT__alu__DOT__sum;
    testbench__DOT__dut__DOT__mips__DOT__dp__DOT__alu__DOT__sum = 0;
    // Body
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
    testbench__DOT__dut__DOT__mips__DOT__dp__DOT__srcb 
        = ((0x40U & (IData)(vlSelf->testbench__DOT__dut__DOT__mips__DOT__c__DOT__md__DOT__controls))
            ? vlSelf->testbench__DOT__dut__DOT__mips__DOT__dp__DOT__signimm
            : vlSelf->testbench__DOT__writedata);
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

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
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
            Vtestbench___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtestbench___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("testbench.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtestbench___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtestbench___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("testbench.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtestbench___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
