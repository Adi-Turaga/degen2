// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_degen_core2__Syms.h"


void Vtb_degen_core2___024root__trace_chg_0_sub_0(Vtb_degen_core2___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_degen_core2___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root__trace_chg_0\n"); );
    // Init
    Vtb_degen_core2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_degen_core2___024root*>(voidSelf);
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_degen_core2___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_degen_core2___024root__trace_chg_0_sub_0(Vtb_degen_core2___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_degen_core2__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_degen_core2__DOT__trig_in));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_degen_core2__DOT__en_all));
        bufp->chgIData(oldp+3,(vlSelfRef.tb_degen_core2__DOT__tA),20);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_degen_core2__DOT__tB),20);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_degen_core2__DOT__tC),20);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_degen_core2__DOT__tD),20);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_degen_core2__DOT__tE),20);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_degen_core2__DOT__tF),20);
        bufp->chgCData(oldp+9,(vlSelfRef.tb_degen_core2__DOT__bitmask_AB),3);
        bufp->chgCData(oldp+10,(vlSelfRef.tb_degen_core2__DOT__bitmask_CD),3);
        bufp->chgCData(oldp+11,(vlSelfRef.tb_degen_core2__DOT__bitmask_EF),3);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_degen_core2__DOT__unnamedblk3__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+13,(((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__state) 
                               & ((vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter 
                                   >= (QData)((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tA))) 
                                  & (vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter 
                                     < (QData)((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tB)))))));
        bufp->chgBit(oldp+14,(((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__state) 
                               & ((vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter 
                                   >= (QData)((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tC))) 
                                  & (vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter 
                                     < (QData)((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tD)))))));
        bufp->chgBit(oldp+15,(((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__state) 
                               & ((vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter 
                                   >= (QData)((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tE))) 
                                  & (vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter 
                                     < (QData)((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tF)))))));
        bufp->chgBit(oldp+16,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_AB));
        bufp->chgBit(oldp+17,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_CD));
        bufp->chgBit(oldp+18,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_EF));
        bufp->chgBit(oldp+19,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__is_posedge));
        bufp->chgBit(oldp+20,(((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_AB) 
                               | ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_CD) 
                                  | (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_EF)))));
        bufp->chgCData(oldp+21,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr),2);
        bufp->chgBit(oldp+22,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__active_AB));
        bufp->chgBit(oldp+23,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__active_CD));
        bufp->chgBit(oldp+24,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__active_EF));
        bufp->chgCData(oldp+25,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__acq_counter),2);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tA),20);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tB),20);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tC),20);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tD),20);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tE),20);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tF),20);
        bufp->chgCData(oldp+32,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_AB),3);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_CD),3);
        bufp->chgCData(oldp+34,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_EF),3);
        bufp->chgCData(oldp+35,((7U & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_AB) 
                                       + ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_CD) 
                                          + (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_EF))))),3);
        bufp->chgCData(oldp+36,(((3U == (7U & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_AB) 
                                               + ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_CD) 
                                                  + (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_EF)))))
                                  ? 3U : 2U)),3);
        bufp->chgIData(oldp+37,((0x3fffffU & ((IData)(0x50U) 
                                              + vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tB))),22);
        bufp->chgIData(oldp+38,((0x3fffffU & ((IData)(0x50U) 
                                              + vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tD))),22);
        bufp->chgIData(oldp+39,((0x3fffffU & ((IData)(0x50U) 
                                              + vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tF))),22);
        bufp->chgBit(oldp+40,(((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_AB) 
                               & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__is_posedge) 
                                  & ((2U >= (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr)) 
                                     && (1U & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_AB) 
                                               >> (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr))))))));
        bufp->chgBit(oldp+41,(((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_CD) 
                               & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__is_posedge) 
                                  & ((2U >= (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr)) 
                                     && (1U & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_CD) 
                                               >> (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr))))))));
        bufp->chgBit(oldp+42,(((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_EF) 
                               & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__is_posedge) 
                                  & ((2U >= (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr)) 
                                     && (1U & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_EF) 
                                               >> (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr))))))));
        bufp->chgIData(oldp+43,((0xfffffU & ((IData)(0x50U) 
                                             + vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tB))),20);
        bufp->chgQData(oldp+44,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter),40);
        bufp->chgBit(oldp+46,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__state));
        bufp->chgIData(oldp+47,((0xfffffU & ((IData)(0x50U) 
                                             + vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tD))),20);
        bufp->chgQData(oldp+48,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter),40);
        bufp->chgBit(oldp+50,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__state));
        bufp->chgIData(oldp+51,((0xfffffU & ((IData)(0x50U) 
                                             + vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tF))),20);
        bufp->chgQData(oldp+52,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter),40);
        bufp->chgBit(oldp+54,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__state));
        bufp->chgCData(oldp+55,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__master_counter),5);
        bufp->chgIData(oldp+56,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__current_state),32);
        bufp->chgBit(oldp+57,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__pe__DOT__trig_in_delay));
        bufp->chgBit(oldp+58,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__pe__DOT__trig_in_delay2));
        bufp->chgBit(oldp+59,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__pe__DOT__trig_in_delay3));
    }
    bufp->chgBit(oldp+60,(vlSelfRef.tb_degen_core2__DOT__clk));
}

void Vtb_degen_core2___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root__trace_cleanup\n"); );
    // Init
    Vtb_degen_core2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_degen_core2___024root*>(voidSelf);
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
