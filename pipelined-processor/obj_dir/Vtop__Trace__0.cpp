// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((1U & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                                    >> 7U))));
        bufp->chgBit(oldp+1,((1U & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+2,((1U & (IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls))));
        bufp->chgBit(oldp+3,((1U & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                                    >> 3U))));
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                                    >> 6U))));
        bufp->chgCData(oldp+5,((3U & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                                      >> 4U))),2);
        bufp->chgCData(oldp+6,((3U & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                                      >> 8U))),2);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__processor__DOT__alu_control_d),3);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__processor__DOT__forward_a),2);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__processor__DOT__forward_b),2);
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__processor__DOT__stall_f));
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__processor__DOT__stall_d));
        bufp->chgBit(oldp+12,(vlSelf->top__DOT__processor__DOT__flush_e));
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__processor__DOT__pc_src_e));
        bufp->chgIData(oldp+14,(((IData)(vlSelf->top__DOT__processor__DOT__pc_src_e)
                                  ? (vlSelf->top__DOT__processor__DOT__pc_e 
                                     + vlSelf->top__DOT__processor__DOT__imm_ext_e)
                                  : ((IData)(4U) + vlSelf->top__DOT__processor__DOT__pc_f))),32);
        bufp->chgIData(oldp+15,((vlSelf->top__DOT__processor__DOT__pc_e 
                                 + vlSelf->top__DOT__processor__DOT__imm_ext_e)),32);
        bufp->chgIData(oldp+16,(((IData)(4U) + vlSelf->top__DOT__processor__DOT__pc_f)),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__processor__DOT__pc_f),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__processor__DOT__imem__DOT__ram
                                [(0x3fU & (vlSelf->top__DOT__processor__DOT__pc_f 
                                           >> 2U))]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__processor__DOT__instr_d),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__processor__DOT__pc_d),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__processor__DOT__pc_plus4_d),32);
        bufp->chgIData(oldp+22,(((0x200U & (IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls))
                                  ? ((0x100U & (IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls))
                                      ? (((- (IData)(
                                                     (vlSelf->top__DOT__processor__DOT__instr_d 
                                                      >> 0x1fU))) 
                                          << 0x14U) 
                                         | ((0xff000U 
                                             & vlSelf->top__DOT__processor__DOT__instr_d) 
                                            | ((0x800U 
                                                & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                     >> 0x14U)))))
                                      : (((- (IData)(
                                                     (vlSelf->top__DOT__processor__DOT__instr_d 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0x800U 
                                             & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                     >> 7U))))))
                                  : ((0x100U & (IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls))
                                      ? (((- (IData)(
                                                     (vlSelf->top__DOT__processor__DOT__instr_d 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0xfe0U 
                                             & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                  >> 7U))))
                                      : (((- (IData)(
                                                     (vlSelf->top__DOT__processor__DOT__instr_d 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | (vlSelf->top__DOT__processor__DOT__instr_d 
                                            >> 0x14U))))),32);
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__processor__DOT__reg_write_e));
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__processor__DOT__mem_write_e));
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__processor__DOT__jump_e));
        bufp->chgBit(oldp+26,(vlSelf->top__DOT__processor__DOT__branch_e));
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__processor__DOT__alu_src_e));
        bufp->chgBit(oldp+28,(((((~ (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e)) 
                                 & ((vlSelf->top__DOT__processor__DOT__src_a_e 
                                     >> 0x1fU) == (vlSelf->top__DOT__processor__DOT__src_b_e 
                                                   >> 0x1fU))) 
                                | (((vlSelf->top__DOT__processor__DOT__src_a_e 
                                     >> 0x1fU) != (vlSelf->top__DOT__processor__DOT__src_b_e 
                                                   >> 0x1fU)) 
                                   & (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e))) 
                               & ((~ ((IData)(vlSelf->top__DOT__processor__DOT__alu_control_e) 
                                      >> 1U)) & ((vlSelf->top__DOT__processor__DOT__src_a_e 
                                                  >> 0x1fU) 
                                                 != 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0 
                                                             >> 0x1fU))))))));
        bufp->chgBit(oldp+29,((1U & (IData)(((0U == 
                                              (6U & (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e))) 
                                             & (vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0 
                                                >> 0x20U))))));
        bufp->chgBit(oldp+30,((vlSelf->top__DOT__processor__DOT__alu_result_e 
                               >> 0x1fU)));
        bufp->chgBit(oldp+31,((0U == vlSelf->top__DOT__processor__DOT__alu_result_e)));
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__processor__DOT__result_src_e),2);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__processor__DOT__alu_control_e),3);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__processor__DOT__rs1_e),5);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__processor__DOT__rs2_e),5);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__processor__DOT__rd_e),5);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__processor__DOT__rd1_e),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__processor__DOT__rd2_e),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__processor__DOT__pc_e),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__processor__DOT__imm_ext_e),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__processor__DOT__pc_plus4_e),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__processor__DOT__alu_result_e),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__processor__DOT__src_a_e),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__processor__DOT__src_b0_e),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__processor__DOT__src_b_e),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__processor__DOT__write_data_e),32);
        bufp->chgBit(oldp+47,(vlSelf->top__DOT__processor__DOT__reg_write_m));
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__processor__DOT__mem_write_m));
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__processor__DOT__result_src_m),2);
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__processor__DOT__rd_m),5);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__processor__DOT__alu_result_m),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__processor__DOT__write_data_m),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__processor__DOT__pc_plus4_m),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__processor__DOT__dmem__DOT__ram
                                [(0x3fU & (vlSelf->top__DOT__processor__DOT__alu_result_m 
                                           >> 2U))]),32);
        bufp->chgBit(oldp+55,(vlSelf->top__DOT__processor__DOT__reg_write_w));
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__processor__DOT__result_src_w),2);
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__processor__DOT__rd_w),5);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__processor__DOT__alu_result_w),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__processor__DOT__rd1_w),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__processor__DOT__pc_plus4_w),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__processor__DOT__result_w),32);
        bufp->chgIData(oldp+62,((vlSelf->top__DOT__processor__DOT__src_a_e 
                                 & vlSelf->top__DOT__processor__DOT__src_b_e)),32);
        bufp->chgIData(oldp+63,((vlSelf->top__DOT__processor__DOT__src_a_e 
                                 | vlSelf->top__DOT__processor__DOT__src_b_e)),32);
        bufp->chgIData(oldp+64,(((1U & (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e))
                                  ? (vlSelf->top__DOT__processor__DOT__src_a_e 
                                     | vlSelf->top__DOT__processor__DOT__src_b_e)
                                  : (vlSelf->top__DOT__processor__DOT__src_a_e 
                                     & vlSelf->top__DOT__processor__DOT__src_b_e))),32);
        bufp->chgIData(oldp+65,((IData)(vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0)),32);
        bufp->chgIData(oldp+66,((1U & (((((~ (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e)) 
                                          & ((vlSelf->top__DOT__processor__DOT__src_a_e 
                                              >> 0x1fU) 
                                             == (vlSelf->top__DOT__processor__DOT__src_b_e 
                                                 >> 0x1fU))) 
                                         | (((vlSelf->top__DOT__processor__DOT__src_a_e 
                                              >> 0x1fU) 
                                             != (vlSelf->top__DOT__processor__DOT__src_b_e 
                                                 >> 0x1fU)) 
                                            & (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e))) 
                                        & ((~ ((IData)(vlSelf->top__DOT__processor__DOT__alu_control_e) 
                                               >> 1U)) 
                                           & ((vlSelf->top__DOT__processor__DOT__src_a_e 
                                               >> 0x1fU) 
                                              != (1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0 
                                                             >> 0x1fU)))))) 
                                       ^ (IData)((vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0 
                                                  >> 0x1fU))))),32);
        bufp->chgIData(oldp+67,(((2U & (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e))
                                  ? ((1U & (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e))
                                      ? (vlSelf->top__DOT__processor__DOT__src_a_e 
                                         | vlSelf->top__DOT__processor__DOT__src_b_e)
                                      : (vlSelf->top__DOT__processor__DOT__src_a_e 
                                         & vlSelf->top__DOT__processor__DOT__src_b_e))
                                  : (IData)(vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0))),32);
        bufp->chgBit(oldp+68,((1U & (IData)((vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0 
                                             >> 0x20U)))));
        bufp->chgCData(oldp+69,((0x7fU & vlSelf->top__DOT__processor__DOT__instr_d)),7);
        bufp->chgCData(oldp+70,((7U & (vlSelf->top__DOT__processor__DOT__instr_d 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+71,((1U & (vlSelf->top__DOT__processor__DOT__instr_d 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+72,((3U & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                                       >> 1U))),2);
        bufp->chgSData(oldp+73,(vlSelf->top__DOT__processor__DOT__controller__DOT__controls),11);
        bufp->chgBit(oldp+74,((IData)((0x40000020U 
                                       == (0x40000020U 
                                           & vlSelf->top__DOT__processor__DOT__instr_d)))));
        bufp->chgIData(oldp+75,((vlSelf->top__DOT__processor__DOT__instr_d 
                                 >> 7U)),25);
        bufp->chgCData(oldp+76,((0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+77,((0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+78,((1U & (IData)(vlSelf->top__DOT__processor__DOT__result_src_e))));
        bufp->chgBit(oldp+79,(vlSelf->top__DOT__processor__DOT__hazard_unit__DOT__lw_stall));
        bufp->chgCData(oldp+80,((0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                                          >> 7U))),5);
        bufp->chgBit(oldp+81,((1U & (~ (IData)(vlSelf->top__DOT__processor__DOT__stall_f)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+114,(vlSelf->clk_i));
    bufp->chgBit(oldp+115,(vlSelf->reset_i));
    bufp->chgIData(oldp+116,(vlSelf->write_data_o),32);
    bufp->chgIData(oldp+117,(vlSelf->data_adr_o),32);
    bufp->chgBit(oldp+118,(vlSelf->mem_write_o));
    bufp->chgIData(oldp+119,(((0U == (0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                                               >> 0xfU)))
                               ? 0U : vlSelf->top__DOT__processor__DOT__regfile__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                                         >> 0xfU))])),32);
    bufp->chgIData(oldp+120,(((0U == (0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                                               >> 0x14U)))
                               ? 0U : vlSelf->top__DOT__processor__DOT__regfile__DOT__rf
                              [(0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                                         >> 0x14U))])),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
