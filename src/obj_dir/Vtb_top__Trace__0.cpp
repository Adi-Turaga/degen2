// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_top__Syms.h"


void Vtb_top___024root__trace_chg_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_0\n"); );
    // Init
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_top___024root__trace_chg_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_top__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_top__DOT__trig_in));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_top__DOT__din));
        bufp->chgBit(oldp+3,(vlSelfRef.tb_top__DOT__en_AB));
        bufp->chgBit(oldp+4,(vlSelfRef.tb_top__DOT__en_CD));
        bufp->chgBit(oldp+5,(vlSelfRef.tb_top__DOT__en_EF));
        bufp->chgIData(oldp+6,(vlSelfRef.tb_top__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_top__DOT__unnamedblk3__DOT__i),32);
        bufp->chgCData(oldp+8,((7U & ((IData)(vlSelfRef.tb_top__DOT__en_AB) 
                                      + ((IData)(vlSelfRef.tb_top__DOT__en_CD) 
                                         + (IData)(vlSelfRef.tb_top__DOT__en_EF))))),3);
        bufp->chgCData(oldp+9,(((3U == (7U & ((IData)(vlSelfRef.tb_top__DOT__en_AB) 
                                              + ((IData)(vlSelfRef.tb_top__DOT__en_CD) 
                                                 + (IData)(vlSelfRef.tb_top__DOT__en_EF)))))
                                 ? 3U : 2U)),3);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+10,(((IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__state) 
                               & ((vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter 
                                   >= (QData)((IData)(
                                                      (0xfffffU 
                                                       & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tA)))) 
                                  & (vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter 
                                     < (QData)((IData)(
                                                       (0xfffffU 
                                                        & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tB))))))));
        bufp->chgBit(oldp+11,(((IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__state) 
                               & ((vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter 
                                   >= (QData)((IData)(
                                                      (0xfffffU 
                                                       & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tC)))) 
                                  & (vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter 
                                     < (QData)((IData)(
                                                       (0xfffffU 
                                                        & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tD))))))));
        bufp->chgBit(oldp+12,(((IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__state) 
                               & ((vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter 
                                   >= (QData)((IData)(
                                                      (0xfffffU 
                                                       & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tE)))) 
                                  & (vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter 
                                     < (QData)((IData)(
                                                       (0xfffffU 
                                                        & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tF))))))));
        bufp->chgIData(oldp+13,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers
                                [0U]),20);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers
                                [1U]),20);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers
                                [2U]),20);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers
                                [3U]),20);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers
                                [4U]),20);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers
                                [5U]),20);
        bufp->chgCData(oldp+19,((7U & vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers
                                 [6U])),3);
        bufp->chgCData(oldp+20,((7U & vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers
                                 [7U])),3);
        bufp->chgCData(oldp+21,((7U & vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers
                                 [8U])),3);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_top__DOT__uut__DOT__uart_packet),24);
        bufp->chgBit(oldp+23,(vlSelfRef.tb_top__DOT__uut__DOT__rx_valid));
        bufp->chgBit(oldp+24,(vlSelfRef.tb_top__DOT__uut__DOT__error));
        bufp->chgBit(oldp+25,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__is_posedge));
        bufp->chgCData(oldp+26,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_AB),3);
        bufp->chgCData(oldp+27,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_CD),3);
        bufp->chgCData(oldp+28,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_EF),3);
        bufp->chgCData(oldp+29,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_ptr),2);
        bufp->chgBit(oldp+30,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__active_AB));
        bufp->chgBit(oldp+31,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__active_CD));
        bufp->chgBit(oldp+32,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__active_EF));
        bufp->chgIData(oldp+33,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tA),21);
        bufp->chgIData(oldp+34,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tB),21);
        bufp->chgIData(oldp+35,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tC),21);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tD),21);
        bufp->chgIData(oldp+37,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tE),21);
        bufp->chgIData(oldp+38,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tF),21);
        bufp->chgIData(oldp+39,((0x3fffffU & ((IData)(0x50U) 
                                              + vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tB))),22);
        bufp->chgIData(oldp+40,((0x3fffffU & ((IData)(0x50U) 
                                              + vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tD))),22);
        bufp->chgIData(oldp+41,((0x3fffffU & ((IData)(0x50U) 
                                              + vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tF))),22);
        bufp->chgBit(oldp+42,(((IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__is_posedge) 
                               & ((2U >= (IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_ptr)) 
                                  && (1U & ((IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_AB) 
                                            >> (IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_ptr)))))));
        bufp->chgBit(oldp+43,(((IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__is_posedge) 
                               & ((2U >= (IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_ptr)) 
                                  && (1U & ((IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_CD) 
                                            >> (IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_ptr)))))));
        bufp->chgBit(oldp+44,(((IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__is_posedge) 
                               & ((2U >= (IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_ptr)) 
                                  && (1U & ((IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_EF) 
                                            >> (IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_ptr)))))));
        bufp->chgIData(oldp+45,((0xfffffU & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tA)),20);
        bufp->chgIData(oldp+46,((0xfffffU & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tB)),20);
        bufp->chgIData(oldp+47,((0xfffffU & ((IData)(0x50U) 
                                             + vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tB))),20);
        bufp->chgQData(oldp+48,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter),40);
        bufp->chgBit(oldp+50,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__state));
        bufp->chgIData(oldp+51,((0xfffffU & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tC)),20);
        bufp->chgIData(oldp+52,((0xfffffU & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tD)),20);
        bufp->chgIData(oldp+53,((0xfffffU & ((IData)(0x50U) 
                                             + vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tD))),20);
        bufp->chgQData(oldp+54,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter),40);
        bufp->chgBit(oldp+56,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__state));
        bufp->chgIData(oldp+57,((0xfffffU & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tE)),20);
        bufp->chgIData(oldp+58,((0xfffffU & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tF)),20);
        bufp->chgIData(oldp+59,((0xfffffU & ((IData)(0x50U) 
                                             + vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tF))),20);
        bufp->chgQData(oldp+60,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter),40);
        bufp->chgBit(oldp+62,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__state));
        bufp->chgBit(oldp+63,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__pe__DOT__trig_in_delay));
        bufp->chgBit(oldp+64,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__pe__DOT__trig_in_delay2));
        bufp->chgBit(oldp+65,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__pe__DOT__trig_in_delay3));
        bufp->chgIData(oldp+66,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers[0]),20);
        bufp->chgIData(oldp+67,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers[1]),20);
        bufp->chgIData(oldp+68,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers[2]),20);
        bufp->chgIData(oldp+69,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers[3]),20);
        bufp->chgIData(oldp+70,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers[4]),20);
        bufp->chgIData(oldp+71,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers[5]),20);
        bufp->chgIData(oldp+72,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers[6]),20);
        bufp->chgIData(oldp+73,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers[7]),20);
        bufp->chgIData(oldp+74,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers[8]),20);
        bufp->chgIData(oldp+75,((0xfffffU & vlSelfRef.tb_top__DOT__uut__DOT__uart_packet)),20);
        bufp->chgCData(oldp+76,((7U & (vlSelfRef.tb_top__DOT__uut__DOT__uart_packet 
                                       >> 0x15U))),3);
        bufp->chgBit(oldp+77,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__dff1));
        bufp->chgBit(oldp+78,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__dff2_rx_valid));
        bufp->chgBit(oldp+79,((1U & (vlSelfRef.tb_top__DOT__uut__DOT__uart_packet 
                                     >> 0x14U))));
        bufp->chgIData(oldp+80,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+81,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__rx_data),24);
        bufp->chgSData(oldp+82,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__baud_counter),9);
        bufp->chgCData(oldp+83,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__shift_reg),8);
        bufp->chgCData(oldp+84,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__bit_counter),3);
        bufp->chgCData(oldp+85,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__byte_counter),2);
        bufp->chgBit(oldp+86,(((~ (IData)(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync2)) 
                               & (IData)(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync3))));
        bufp->chgBit(oldp+87,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync3));
        bufp->chgCData(oldp+88,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__current_state),2);
        bufp->chgCData(oldp+89,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__next_state),2);
        bufp->chgBit(oldp+90,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync1));
        bufp->chgBit(oldp+91,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync2));
    }
    bufp->chgBit(oldp+92,(vlSelfRef.tb_top__DOT__clk));
}

void Vtb_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_cleanup\n"); );
    // Init
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
