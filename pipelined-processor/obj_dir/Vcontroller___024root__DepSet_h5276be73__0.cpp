// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontroller.h for the primary calling header

#include "verilated.h"

#include "Vcontroller__Syms.h"
#include "Vcontroller___024root.h"

extern const VlUnpacked<SData/*10:0*/, 128> Vcontroller__ConstPool__TABLE_h386e9d90_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vcontroller__ConstPool__TABLE_hbabc6d44_0;

VL_INLINE_OPT void Vcontroller___024root___ico_sequent__TOP__0(Vcontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller___024root___ico_sequent__TOP__0\n"); );
    // Init
    SData/*10:0*/ controller__DOT__controls;
    controller__DOT__controls = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx1 = vlSelf->op_i;
    controller__DOT__controls = Vcontroller__ConstPool__TABLE_h386e9d90_0
        [__Vtableidx1];
    vlSelf->reg_write_o = (1U & ((IData)(controller__DOT__controls) 
                                 >> 0xaU));
    vlSelf->result_src_o = (3U & ((IData)(controller__DOT__controls) 
                                  >> 4U));
    vlSelf->mem_write_o = (1U & ((IData)(controller__DOT__controls) 
                                 >> 6U));
    vlSelf->jump_o = (1U & (IData)(controller__DOT__controls));
    vlSelf->branch_o = (1U & ((IData)(controller__DOT__controls) 
                              >> 3U));
    vlSelf->alu_src_o = (1U & ((IData)(controller__DOT__controls) 
                               >> 7U));
    vlSelf->imm_src_o = (3U & ((IData)(controller__DOT__controls) 
                               >> 8U));
    __Vtableidx2 = (((((IData)(vlSelf->funct7b5_i) 
                       & ((IData)(vlSelf->op_i) >> 5U))
                       ? 1U : 0U) << 5U) | (((IData)(vlSelf->funct3_i) 
                                             << 2U) 
                                            | (3U & 
                                               ((IData)(controller__DOT__controls) 
                                                >> 1U))));
    vlSelf->alu_control_o = Vcontroller__ConstPool__TABLE_hbabc6d44_0
        [__Vtableidx2];
}

void Vcontroller___024root___eval_ico(Vcontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vcontroller___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vcontroller___024root___eval_act(Vcontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller___024root___eval_act\n"); );
}

void Vcontroller___024root___eval_nba(Vcontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller___024root___eval_nba\n"); );
}

void Vcontroller___024root___eval_triggers__ico(Vcontroller___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontroller___024root___dump_triggers__ico(Vcontroller___024root* vlSelf);
#endif  // VL_DEBUG
void Vcontroller___024root___eval_triggers__act(Vcontroller___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontroller___024root___dump_triggers__act(Vcontroller___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontroller___024root___dump_triggers__nba(Vcontroller___024root* vlSelf);
#endif  // VL_DEBUG

void Vcontroller___024root___eval(Vcontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vcontroller___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vcontroller___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("src/controller.sv", 11, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vcontroller___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vcontroller___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcontroller___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("src/controller.sv", 11, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vcontroller___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcontroller___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("src/controller.sv", 11, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcontroller___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vcontroller___024root___eval_debug_assertions(Vcontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->op_i & 0x80U))) {
        Verilated::overWidthError("op_i");}
    if (VL_UNLIKELY((vlSelf->funct3_i & 0xf8U))) {
        Verilated::overWidthError("funct3_i");}
    if (VL_UNLIKELY((vlSelf->funct7b5_i & 0xfeU))) {
        Verilated::overWidthError("funct7b5_i");}
}
#endif  // VL_DEBUG
