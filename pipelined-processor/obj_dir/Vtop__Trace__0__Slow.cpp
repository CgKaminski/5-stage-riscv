// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBit(c+116,"reset_i", false,-1);
    tracep->declBus(c+117,"write_data_o", false,-1, 31,0);
    tracep->declBus(c+118,"data_adr_o", false,-1, 31,0);
    tracep->declBit(c+119,"mem_write_o", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBit(c+116,"reset_i", false,-1);
    tracep->declBus(c+117,"write_data_o", false,-1, 31,0);
    tracep->declBus(c+118,"data_adr_o", false,-1, 31,0);
    tracep->declBit(c+119,"mem_write_o", false,-1);
    tracep->pushNamePrefix("processor ");
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBit(c+116,"reset_i", false,-1);
    tracep->declBit(c+119,"mem_write_o", false,-1);
    tracep->declBus(c+118,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+117,"write_data_o", false,-1, 31,0);
    tracep->declBit(c+1,"alu_src_d", false,-1);
    tracep->declBit(c+2,"reg_write_d", false,-1);
    tracep->declBit(c+3,"jump_d", false,-1);
    tracep->declBit(c+4,"branch_d", false,-1);
    tracep->declBit(c+5,"mem_write_d", false,-1);
    tracep->declBus(c+6,"result_src_d", false,-1, 1,0);
    tracep->declBus(c+7,"imm_src_d", false,-1, 1,0);
    tracep->declBus(c+8,"alu_control_d", false,-1, 2,0);
    tracep->declBus(c+9,"forward_a", false,-1, 1,0);
    tracep->declBus(c+10,"forward_b", false,-1, 1,0);
    tracep->declBit(c+11,"stall_f", false,-1);
    tracep->declBit(c+12,"stall_d", false,-1);
    tracep->declBit(c+13,"flush_e", false,-1);
    tracep->declBit(c+14,"flush_d", false,-1);
    tracep->declBus(c+15,"pc_f0", false,-1, 31,0);
    tracep->declBus(c+16,"pc_target_e", false,-1, 31,0);
    tracep->declBus(c+17,"pc_plus4_f", false,-1, 31,0);
    tracep->declBus(c+18,"pc_f", false,-1, 31,0);
    tracep->declBus(c+19,"rd_f", false,-1, 31,0);
    tracep->declBus(c+20,"instr_d", false,-1, 31,0);
    tracep->declBus(c+21,"pc_d", false,-1, 31,0);
    tracep->declBus(c+22,"pc_plus4_d", false,-1, 31,0);
    tracep->declBus(c+120,"rd1_d", false,-1, 31,0);
    tracep->declBus(c+121,"rd2_d", false,-1, 31,0);
    tracep->declBus(c+23,"imm_ext_d", false,-1, 31,0);
    tracep->declBit(c+14,"pc_src_e", false,-1);
    tracep->declBit(c+24,"reg_write_e", false,-1);
    tracep->declBit(c+25,"mem_write_e", false,-1);
    tracep->declBit(c+26,"jump_e", false,-1);
    tracep->declBit(c+27,"branch_e", false,-1);
    tracep->declBit(c+28,"alu_src_e", false,-1);
    tracep->declBit(c+29,"overflow_e", false,-1);
    tracep->declBit(c+30,"carry_e", false,-1);
    tracep->declBit(c+31,"negative_e", false,-1);
    tracep->declBit(c+32,"zero_e", false,-1);
    tracep->declBus(c+33,"result_src_e", false,-1, 1,0);
    tracep->declBus(c+34,"alu_control_e", false,-1, 2,0);
    tracep->declBus(c+35,"rs1_e", false,-1, 4,0);
    tracep->declBus(c+36,"rs2_e", false,-1, 4,0);
    tracep->declBus(c+37,"rd_e", false,-1, 4,0);
    tracep->declBus(c+38,"rd1_e", false,-1, 31,0);
    tracep->declBus(c+39,"rd2_e", false,-1, 31,0);
    tracep->declBus(c+40,"pc_e", false,-1, 31,0);
    tracep->declBus(c+41,"imm_ext_e", false,-1, 31,0);
    tracep->declBus(c+42,"pc_plus4_e", false,-1, 31,0);
    tracep->declBus(c+43,"alu_result_e", false,-1, 31,0);
    tracep->declBus(c+44,"src_a_e", false,-1, 31,0);
    tracep->declBus(c+45,"src_b0_e", false,-1, 31,0);
    tracep->declBus(c+46,"src_b_e", false,-1, 31,0);
    tracep->declBus(c+47,"write_data_e", false,-1, 31,0);
    tracep->declBit(c+48,"reg_write_m", false,-1);
    tracep->declBit(c+49,"mem_write_m", false,-1);
    tracep->declBus(c+50,"result_src_m", false,-1, 1,0);
    tracep->declBus(c+51,"rd_m", false,-1, 4,0);
    tracep->declBus(c+52,"alu_result_m", false,-1, 31,0);
    tracep->declBus(c+53,"write_data_m", false,-1, 31,0);
    tracep->declBus(c+54,"pc_plus4_m", false,-1, 31,0);
    tracep->declBus(c+55,"read_data_m", false,-1, 31,0);
    tracep->declBit(c+56,"reg_write_w", false,-1);
    tracep->declBus(c+57,"result_src_w", false,-1, 1,0);
    tracep->declBus(c+58,"rd_w", false,-1, 4,0);
    tracep->declBus(c+59,"alu_result_w", false,-1, 31,0);
    tracep->declBus(c+60,"rd1_w", false,-1, 31,0);
    tracep->declBus(c+61,"pc_plus4_w", false,-1, 31,0);
    tracep->declBus(c+62,"result_w", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+44,"src_a_i", false,-1, 31,0);
    tracep->declBus(c+46,"src_b_i", false,-1, 31,0);
    tracep->declBus(c+34,"alu_control_i", false,-1, 2,0);
    tracep->declBus(c+43,"result_o", false,-1, 31,0);
    tracep->declBit(c+29,"overflow_o", false,-1);
    tracep->declBit(c+30,"carry_o", false,-1);
    tracep->declBit(c+31,"negative_o", false,-1);
    tracep->declBit(c+32,"zero_o", false,-1);
    tracep->declBus(c+63,"and_result", false,-1, 31,0);
    tracep->declBus(c+64,"or_result", false,-1, 31,0);
    tracep->declBus(c+65,"logic_result", false,-1, 31,0);
    tracep->declBus(c+66,"adder_result", false,-1, 31,0);
    tracep->declBus(c+67,"slt_result", false,-1, 31,0);
    tracep->declBus(c+68,"logic_adder_result", false,-1, 31,0);
    tracep->declBit(c+69,"carry", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("controller ");
    tracep->declBus(c+70,"op_i", false,-1, 6,0);
    tracep->declBus(c+71,"funct3_i", false,-1, 2,0);
    tracep->declBit(c+72,"funct7b5_i", false,-1);
    tracep->declBit(c+2,"reg_write_o", false,-1);
    tracep->declBus(c+6,"result_src_o", false,-1, 1,0);
    tracep->declBit(c+5,"mem_write_o", false,-1);
    tracep->declBit(c+3,"jump_o", false,-1);
    tracep->declBit(c+4,"branch_o", false,-1);
    tracep->declBus(c+8,"alu_control_o", false,-1, 2,0);
    tracep->declBit(c+1,"alu_src_o", false,-1);
    tracep->declBus(c+7,"imm_src_o", false,-1, 1,0);
    tracep->declBus(c+73,"alu_op", false,-1, 1,0);
    tracep->declBus(c+74,"controls", false,-1, 10,0);
    tracep->declBit(c+75,"r_type_sub", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dmem ");
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBit(c+49,"we_i", false,-1);
    tracep->declBus(c+52,"a_i", false,-1, 31,0);
    tracep->declBus(c+53,"wd_i", false,-1, 31,0);
    tracep->declBus(c+55,"rd_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("extend ");
    tracep->declBus(c+76,"instr_i", false,-1, 31,7);
    tracep->declBus(c+7,"imm_src_i", false,-1, 1,0);
    tracep->declBus(c+23,"imm_ext_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hazard_unit ");
    tracep->declBus(c+35,"rs1_e_i", false,-1, 4,0);
    tracep->declBus(c+36,"rs2_e_i", false,-1, 4,0);
    tracep->declBus(c+51,"rd_m_i", false,-1, 4,0);
    tracep->declBus(c+58,"rd_w_i", false,-1, 4,0);
    tracep->declBit(c+48,"reg_write_m_i", false,-1);
    tracep->declBit(c+56,"reg_write_w_i", false,-1);
    tracep->declBus(c+77,"rs1_d_i", false,-1, 4,0);
    tracep->declBus(c+78,"rs2_d_i", false,-1, 4,0);
    tracep->declBus(c+37,"rd_e_i", false,-1, 4,0);
    tracep->declBit(c+14,"pc_src_e_i", false,-1);
    tracep->declBit(c+79,"result_src_e_i", false,-1);
    tracep->declBus(c+9,"forward_a_o", false,-1, 1,0);
    tracep->declBus(c+10,"forward_b_o", false,-1, 1,0);
    tracep->declBit(c+11,"stall_f_o", false,-1);
    tracep->declBit(c+12,"stall_d_o", false,-1);
    tracep->declBit(c+13,"flush_e_o", false,-1);
    tracep->declBit(c+14,"flush_d_o", false,-1);
    tracep->declBit(c+80,"lw_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imem ");
    tracep->declBus(c+18,"a_i", false,-1, 31,0);
    tracep->declBus(c+19,"rd_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_d ");
    tracep->declBit(c+12,"en_i", false,-1);
    tracep->declBit(c+14,"clr_i", false,-1);
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBus(c+19,"rd_f_i", false,-1, 31,0);
    tracep->declBus(c+17,"pc_plus4_f_i", false,-1, 31,0);
    tracep->declBus(c+18,"pc_f_i", false,-1, 31,0);
    tracep->declBus(c+20,"instr_d_o", false,-1, 31,0);
    tracep->declBus(c+21,"pc_d_o", false,-1, 31,0);
    tracep->declBus(c+22,"pc_plus4_d_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_e ");
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBit(c+13,"clr_i", false,-1);
    tracep->declBit(c+2,"reg_write_d_i", false,-1);
    tracep->declBus(c+6,"result_src_d_i", false,-1, 1,0);
    tracep->declBit(c+5,"mem_write_d_i", false,-1);
    tracep->declBit(c+3,"jump_d_i", false,-1);
    tracep->declBit(c+4,"branch_d_i", false,-1);
    tracep->declBus(c+8,"alu_control_d_i", false,-1, 2,0);
    tracep->declBit(c+1,"alu_src_d_i", false,-1);
    tracep->declBus(c+120,"rd1_d_i", false,-1, 31,0);
    tracep->declBus(c+121,"rd2_d_i", false,-1, 31,0);
    tracep->declBus(c+21,"pc_d_i", false,-1, 31,0);
    tracep->declBus(c+77,"rs1_d_i", false,-1, 4,0);
    tracep->declBus(c+78,"rs2_d_i", false,-1, 4,0);
    tracep->declBus(c+81,"rd_d_i", false,-1, 4,0);
    tracep->declBus(c+23,"imm_ext_d_i", false,-1, 31,0);
    tracep->declBus(c+22,"pc_plus4_d_i", false,-1, 31,0);
    tracep->declBit(c+24,"reg_write_e_o", false,-1);
    tracep->declBus(c+33,"result_src_e_o", false,-1, 1,0);
    tracep->declBit(c+25,"mem_write_e_o", false,-1);
    tracep->declBit(c+26,"jump_e_o", false,-1);
    tracep->declBit(c+27,"branch_e_o", false,-1);
    tracep->declBus(c+34,"alu_control_e_o", false,-1, 2,0);
    tracep->declBit(c+28,"alu_src_e_o", false,-1);
    tracep->declBus(c+38,"rd1_e_o", false,-1, 31,0);
    tracep->declBus(c+39,"rd2_e_o", false,-1, 31,0);
    tracep->declBus(c+40,"pc_e_o", false,-1, 31,0);
    tracep->declBus(c+35,"rs1_e_o", false,-1, 4,0);
    tracep->declBus(c+36,"rs2_e_o", false,-1, 4,0);
    tracep->declBus(c+37,"rd_e_o", false,-1, 4,0);
    tracep->declBus(c+41,"imm_ext_e_o", false,-1, 31,0);
    tracep->declBus(c+42,"pc_plus4_e_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_f ");
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBit(c+82,"en_i", false,-1);
    tracep->declBit(c+116,"rst_i", false,-1);
    tracep->declBus(c+15,"pc_f_i", false,-1, 31,0);
    tracep->declBus(c+18,"pc_f_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_m ");
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBit(c+24,"reg_write_e_i", false,-1);
    tracep->declBus(c+33,"result_src_e_i", false,-1, 1,0);
    tracep->declBit(c+25,"mem_write_e_i", false,-1);
    tracep->declBus(c+43,"alu_result_e_i", false,-1, 31,0);
    tracep->declBus(c+47,"write_data_e_i", false,-1, 31,0);
    tracep->declBus(c+37,"rd_e_i", false,-1, 4,0);
    tracep->declBus(c+42,"pc_plus4_e_i", false,-1, 31,0);
    tracep->declBit(c+48,"reg_write_m_o", false,-1);
    tracep->declBus(c+50,"result_src_m_o", false,-1, 1,0);
    tracep->declBit(c+49,"mem_write_m_o", false,-1);
    tracep->declBus(c+52,"alu_result_m_o", false,-1, 31,0);
    tracep->declBus(c+53,"write_data_m_o", false,-1, 31,0);
    tracep->declBus(c+51,"rd_m_o", false,-1, 4,0);
    tracep->declBus(c+54,"pc_plus4_m_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_w ");
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBit(c+48,"reg_write_m_i", false,-1);
    tracep->declBus(c+50,"result_src_m_i", false,-1, 1,0);
    tracep->declBus(c+52,"alu_result_m_i", false,-1, 31,0);
    tracep->declBus(c+55,"rd1_m_i", false,-1, 31,0);
    tracep->declBus(c+51,"rd_m_i", false,-1, 4,0);
    tracep->declBus(c+54,"pc_plus4_m_i", false,-1, 31,0);
    tracep->declBit(c+56,"reg_write_w_o", false,-1);
    tracep->declBus(c+57,"result_src_w_o", false,-1, 1,0);
    tracep->declBus(c+59,"alu_result_w_o", false,-1, 31,0);
    tracep->declBus(c+60,"rd1_w_o", false,-1, 31,0);
    tracep->declBus(c+58,"rd_w_o", false,-1, 4,0);
    tracep->declBus(c+61,"pc_plus4_w_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBit(c+56,"we3_i", false,-1);
    tracep->declBus(c+77,"a1_i", false,-1, 4,0);
    tracep->declBus(c+78,"a2_i", false,-1, 4,0);
    tracep->declBus(c+58,"a3_i", false,-1, 4,0);
    tracep->declBus(c+62,"wd3_i", false,-1, 31,0);
    tracep->declBus(c+120,"rd1_o", false,-1, 31,0);
    tracep->declBus(c+121,"rd2_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+83+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((1U & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                                 >> 7U))));
    bufp->fullBit(oldp+2,((1U & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                                 >> 0xaU))));
    bufp->fullBit(oldp+3,((1U & (IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls))));
    bufp->fullBit(oldp+4,((1U & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                                 >> 3U))));
    bufp->fullBit(oldp+5,((1U & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                                 >> 6U))));
    bufp->fullCData(oldp+6,((3U & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                                   >> 4U))),2);
    bufp->fullCData(oldp+7,((3U & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                                   >> 8U))),2);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__processor__DOT__alu_control_d),3);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__processor__DOT__forward_a),2);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__processor__DOT__forward_b),2);
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__processor__DOT__stall_f));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__processor__DOT__stall_d));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__processor__DOT__flush_e));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__processor__DOT__pc_src_e));
    bufp->fullIData(oldp+15,(((IData)(vlSelf->top__DOT__processor__DOT__pc_src_e)
                               ? (vlSelf->top__DOT__processor__DOT__pc_e 
                                  + vlSelf->top__DOT__processor__DOT__imm_ext_e)
                               : ((IData)(4U) + vlSelf->top__DOT__processor__DOT__pc_f))),32);
    bufp->fullIData(oldp+16,((vlSelf->top__DOT__processor__DOT__pc_e 
                              + vlSelf->top__DOT__processor__DOT__imm_ext_e)),32);
    bufp->fullIData(oldp+17,(((IData)(4U) + vlSelf->top__DOT__processor__DOT__pc_f)),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__processor__DOT__pc_f),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__processor__DOT__imem__DOT__ram
                             [(0x3fU & (vlSelf->top__DOT__processor__DOT__pc_f 
                                        >> 2U))]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__processor__DOT__instr_d),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__processor__DOT__pc_d),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__processor__DOT__pc_plus4_d),32);
    bufp->fullIData(oldp+23,(((0x200U & (IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls))
                               ? ((0x100U & (IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls))
                                   ? (((- (IData)((vlSelf->top__DOT__processor__DOT__instr_d 
                                                   >> 0x1fU))) 
                                       << 0x14U) | 
                                      ((0xff000U & vlSelf->top__DOT__processor__DOT__instr_d) 
                                       | ((0x800U & 
                                           (vlSelf->top__DOT__processor__DOT__instr_d 
                                            >> 9U)) 
                                          | (0x7feU 
                                             & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                >> 0x14U)))))
                                   : (((- (IData)((vlSelf->top__DOT__processor__DOT__instr_d 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (
                                                   (0x800U 
                                                    & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                            >> 7U))))))
                               : ((0x100U & (IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls))
                                   ? (((- (IData)((vlSelf->top__DOT__processor__DOT__instr_d 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (
                                                   (0xfe0U 
                                                    & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                         >> 7U))))
                                   : (((- (IData)((vlSelf->top__DOT__processor__DOT__instr_d 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->top__DOT__processor__DOT__instr_d 
                                                   >> 0x14U))))),32);
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__processor__DOT__reg_write_e));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__processor__DOT__mem_write_e));
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__processor__DOT__jump_e));
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__processor__DOT__branch_e));
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__processor__DOT__alu_src_e));
    bufp->fullBit(oldp+29,(((((~ (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e)) 
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
                                              != (1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0 
                                                             >> 0x1fU))))))));
    bufp->fullBit(oldp+30,((1U & (IData)(((0U == (6U 
                                                  & (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e))) 
                                          & (vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0 
                                             >> 0x20U))))));
    bufp->fullBit(oldp+31,((vlSelf->top__DOT__processor__DOT__alu_result_e 
                            >> 0x1fU)));
    bufp->fullBit(oldp+32,((0U == vlSelf->top__DOT__processor__DOT__alu_result_e)));
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__processor__DOT__result_src_e),2);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__processor__DOT__alu_control_e),3);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__processor__DOT__rs1_e),5);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__processor__DOT__rs2_e),5);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__processor__DOT__rd_e),5);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__processor__DOT__rd1_e),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__processor__DOT__rd2_e),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__processor__DOT__pc_e),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__processor__DOT__imm_ext_e),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__processor__DOT__pc_plus4_e),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__processor__DOT__alu_result_e),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__processor__DOT__src_a_e),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__processor__DOT__src_b0_e),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__processor__DOT__src_b_e),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__processor__DOT__write_data_e),32);
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__processor__DOT__reg_write_m));
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__processor__DOT__mem_write_m));
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__processor__DOT__result_src_m),2);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__processor__DOT__rd_m),5);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__processor__DOT__alu_result_m),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__processor__DOT__write_data_m),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__processor__DOT__pc_plus4_m),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__processor__DOT__dmem__DOT__ram
                             [(0x3fU & (vlSelf->top__DOT__processor__DOT__alu_result_m 
                                        >> 2U))]),32);
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__processor__DOT__reg_write_w));
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__processor__DOT__result_src_w),2);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__processor__DOT__rd_w),5);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__processor__DOT__alu_result_w),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__processor__DOT__rd1_w),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__processor__DOT__pc_plus4_w),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__processor__DOT__result_w),32);
    bufp->fullIData(oldp+63,((vlSelf->top__DOT__processor__DOT__src_a_e 
                              & vlSelf->top__DOT__processor__DOT__src_b_e)),32);
    bufp->fullIData(oldp+64,((vlSelf->top__DOT__processor__DOT__src_a_e 
                              | vlSelf->top__DOT__processor__DOT__src_b_e)),32);
    bufp->fullIData(oldp+65,(((1U & (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e))
                               ? (vlSelf->top__DOT__processor__DOT__src_a_e 
                                  | vlSelf->top__DOT__processor__DOT__src_b_e)
                               : (vlSelf->top__DOT__processor__DOT__src_a_e 
                                  & vlSelf->top__DOT__processor__DOT__src_b_e))),32);
    bufp->fullIData(oldp+66,((IData)(vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0)),32);
    bufp->fullIData(oldp+67,((1U & (((((~ (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e)) 
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
                                           != (1U & (IData)(
                                                            (vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0 
                                                             >> 0x1fU)))))) 
                                    ^ (IData)((vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0 
                                               >> 0x1fU))))),32);
    bufp->fullIData(oldp+68,(((2U & (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e))
                               ? ((1U & (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e))
                                   ? (vlSelf->top__DOT__processor__DOT__src_a_e 
                                      | vlSelf->top__DOT__processor__DOT__src_b_e)
                                   : (vlSelf->top__DOT__processor__DOT__src_a_e 
                                      & vlSelf->top__DOT__processor__DOT__src_b_e))
                               : (IData)(vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0))),32);
    bufp->fullBit(oldp+69,((1U & (IData)((vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0 
                                          >> 0x20U)))));
    bufp->fullCData(oldp+70,((0x7fU & vlSelf->top__DOT__processor__DOT__instr_d)),7);
    bufp->fullCData(oldp+71,((7U & (vlSelf->top__DOT__processor__DOT__instr_d 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+72,((1U & (vlSelf->top__DOT__processor__DOT__instr_d 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+73,((3U & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                                    >> 1U))),2);
    bufp->fullSData(oldp+74,(vlSelf->top__DOT__processor__DOT__controller__DOT__controls),11);
    bufp->fullBit(oldp+75,((IData)((0x40000020U == 
                                    (0x40000020U & vlSelf->top__DOT__processor__DOT__instr_d)))));
    bufp->fullIData(oldp+76,((vlSelf->top__DOT__processor__DOT__instr_d 
                              >> 7U)),25);
    bufp->fullCData(oldp+77,((0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+78,((0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+79,((1U & (IData)(vlSelf->top__DOT__processor__DOT__result_src_e))));
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__processor__DOT__hazard_unit__DOT__lw_stall));
    bufp->fullCData(oldp+81,((0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                                       >> 7U))),5);
    bufp->fullBit(oldp+82,((1U & (~ (IData)(vlSelf->top__DOT__processor__DOT__stall_f)))));
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+115,(vlSelf->clk_i));
    bufp->fullBit(oldp+116,(vlSelf->reset_i));
    bufp->fullIData(oldp+117,(vlSelf->write_data_o),32);
    bufp->fullIData(oldp+118,(vlSelf->data_adr_o),32);
    bufp->fullBit(oldp+119,(vlSelf->mem_write_o));
    bufp->fullIData(oldp+120,(((0U == (0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                >> 0xfU)))
                                ? 0U : vlSelf->top__DOT__processor__DOT__regfile__DOT__rf
                               [(0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                                          >> 0xfU))])),32);
    bufp->fullIData(oldp+121,(((0U == (0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                >> 0x14U)))
                                ? 0U : vlSelf->top__DOT__processor__DOT__regfile__DOT__rf
                               [(0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                                          >> 0x14U))])),32);
}
