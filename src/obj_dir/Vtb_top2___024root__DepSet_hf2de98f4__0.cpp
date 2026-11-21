// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top2.h for the primary calling header

#include "Vtb_top2__pch.h"
#include "Vtb_top2___024root.h"

VlCoroutine Vtb_top2___024root___eval_initial__TOP__Vtiming__0(Vtb_top2___024root* vlSelf);
VlCoroutine Vtb_top2___024root___eval_initial__TOP__Vtiming__1(Vtb_top2___024root* vlSelf);

void Vtb_top2___024root___eval_initial(Vtb_top2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top2___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_top2___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_top2___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top2__DOT__clk__0 
        = vlSelfRef.tb_top2__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_top2___024root___eval_initial__TOP__Vtiming__1(Vtb_top2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top2___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "sim/tb_top2.sv", 
                                             41);
        vlSelfRef.tb_top2__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_top2__DOT__clk)));
    }
}

void Vtb_top2___024root___eval_act(Vtb_top2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top2___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_top2___024root___nba_sequent__TOP__0(Vtb_top2___024root* vlSelf);

void Vtb_top2___024root___eval_nba(Vtb_top2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top2___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_top2___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_top2___024root___nba_sequent__TOP__0(Vtb_top2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top2___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__baud_counter;
    __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__baud_counter = 0;
    CData/*7:0*/ __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__shift_reg;
    __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__shift_reg = 0;
    IData/*23:0*/ __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__rx_data;
    __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__rx_data = 0;
    CData/*1:0*/ __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__byte_counter;
    __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__byte_counter = 0;
    CData/*1:0*/ __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_ptr;
    __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_ptr = 0;
    CData/*1:0*/ __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__acq_counter;
    __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__acq_counter = 0;
    CData/*4:0*/ __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__master_counter;
    __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__master_counter = 0;
    QData/*39:0*/ __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter;
    __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter = 0;
    QData/*39:0*/ __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter;
    __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter = 0;
    QData/*39:0*/ __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter;
    __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter = 0;
    IData/*19:0*/ __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v0;
    __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v0;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v0 = 0;
    IData/*19:0*/ __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v1;
    __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v1;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v1 = 0;
    IData/*19:0*/ __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v2;
    __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v2;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v2 = 0;
    IData/*19:0*/ __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v3;
    __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v3;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v3 = 0;
    IData/*19:0*/ __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v4;
    __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v4;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v4 = 0;
    IData/*19:0*/ __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v5;
    __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v5;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v5 = 0;
    IData/*19:0*/ __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v6;
    __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v6;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v6 = 0;
    IData/*19:0*/ __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v7;
    __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v7;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v7 = 0;
    IData/*19:0*/ __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v8;
    __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v8;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v9;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v10;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v10 = 0;
    // Body
    __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__master_counter 
        = vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__master_counter;
    __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter 
        = vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter;
    __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter 
        = vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter;
    __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter 
        = vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter;
    __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__shift_reg 
        = vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__shift_reg;
    __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__rx_data 
        = vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__rx_data;
    __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__byte_counter 
        = vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__byte_counter;
    __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__baud_counter 
        = vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__baud_counter;
    __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_ptr 
        = vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_ptr;
    __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__acq_counter 
        = vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__acq_counter;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v0 = 0U;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v1 = 0U;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v2 = 0U;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v3 = 0U;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v4 = 0U;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v5 = 0U;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v6 = 0U;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v7 = 0U;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v8 = 0U;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v9 = 0U;
    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v10 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_top2__DOT__rst_n)))) {
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__unnamedblk1__DOT__i = 9U;
    }
    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tA 
        = vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers
        [0U];
    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tC 
        = vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers
        [2U];
    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tE 
        = vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers
        [4U];
    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__pe__DOT__trig_in_delay3 
        = vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__pe__DOT__trig_in_delay2;
    if (vlSelfRef.tb_top2__DOT__rst_n) {
        if ((((IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__en_AB) 
              | ((IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__en_CD) 
                 | (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__en_EF))) 
             & (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__is_posedge))) {
            if ((1U == (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__acq_counter))) {
                __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_ptr 
                    = (((IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_ptr) 
                        == (((3U == (7U & ((IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__en_AB) 
                                           + ((IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__en_CD) 
                                              + (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__en_EF)))))
                              ? 3U : 2U) - (IData)(1U)))
                        ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_ptr))));
                __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__acq_counter = 0U;
            } else {
                __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__acq_counter 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__acq_counter)));
            }
        }
        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__acq_counter 
            = __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__acq_counter;
        if (vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__state) {
            if (vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__state) {
                if ((vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter 
                     == (0xffffffffffULL & ((QData)((IData)(
                                                            (0xfffffU 
                                                             & ((IData)(0x50U) 
                                                                + vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tB)))) 
                                            - 1ULL)))) {
                    __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter = 0ULL;
                    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__state = 0U;
                    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__active_AB = 0U;
                } else {
                    __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter 
                        = (0xffffffffffULL & (1ULL 
                                              + vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter));
                }
            }
        } else if (((IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__en_AB) 
                    & ((IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__is_posedge) 
                       & ((2U >= (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_ptr)) 
                          && (1U & ((IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_AB) 
                                    >> (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_ptr))))))) {
            __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter = 0ULL;
            vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__state = 1U;
            vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__active_AB = 1U;
        }
        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter 
            = __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter;
        if (vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__state) {
            if (vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__state) {
                if ((vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter 
                     == (0xffffffffffULL & ((QData)((IData)(
                                                            (0xfffffU 
                                                             & ((IData)(0x50U) 
                                                                + vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tD)))) 
                                            - 1ULL)))) {
                    __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter = 0ULL;
                    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__state = 0U;
                    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__active_CD = 0U;
                } else {
                    __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter 
                        = (0xffffffffffULL & (1ULL 
                                              + vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter));
                }
            }
        } else if (((IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__en_CD) 
                    & ((IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__is_posedge) 
                       & ((2U >= (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_ptr)) 
                          && (1U & ((IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_CD) 
                                    >> (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_ptr))))))) {
            __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter = 0ULL;
            vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__state = 1U;
            vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__active_CD = 1U;
        }
        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter 
            = __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter;
        if (vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__state) {
            if (vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__state) {
                if ((vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter 
                     == (0xffffffffffULL & ((QData)((IData)(
                                                            (0xfffffU 
                                                             & ((IData)(0x50U) 
                                                                + vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tF)))) 
                                            - 1ULL)))) {
                    __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter = 0ULL;
                    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__state = 0U;
                    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__active_EF = 0U;
                } else {
                    __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter 
                        = (0xffffffffffULL & (1ULL 
                                              + vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter));
                }
            }
        } else if (((IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__en_EF) 
                    & ((IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__is_posedge) 
                       & ((2U >= (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_ptr)) 
                          && (1U & ((IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_EF) 
                                    >> (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_ptr))))))) {
            __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter = 0ULL;
            vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__state = 1U;
            vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__active_EF = 1U;
        }
    } else {
        __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_ptr = 0U;
        __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__acq_counter = 0U;
        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__acq_counter 
            = __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__acq_counter;
        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__state = 0U;
        __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter = 0ULL;
        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__active_AB = 0U;
        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter 
            = __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter;
        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__state = 0U;
        __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter = 0ULL;
        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__active_CD = 0U;
        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter 
            = __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter;
        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__state = 0U;
        __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter = 0ULL;
        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__active_EF = 0U;
    }
    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter 
        = __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter;
    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_ptr 
        = __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_ptr;
    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__pe__DOT__trig_in_delay2 
        = vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__pe__DOT__trig_in_delay;
    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tB 
        = vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers
        [1U];
    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_AB 
        = (7U & vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers
           [6U]);
    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tD 
        = vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers
        [3U];
    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_CD 
        = (7U & vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers
           [7U]);
    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tF 
        = vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers
        [5U];
    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_EF 
        = (7U & vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers
           [8U]);
    if (vlSelfRef.tb_top2__DOT__rst_n) {
        vlSelfRef.tb_top2__DOT__uut__DOT__error = 0U;
        if (vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__dff2_rx_valid) {
            if ((0x100000U & vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet)) {
                if ((1U == (7U & (vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet 
                                  >> 0x15U)))) {
                    __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v0 
                        = (7U & vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet);
                    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v0 = 1U;
                } else if ((2U == (7U & (vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet 
                                         >> 0x15U)))) {
                    __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v1 
                        = (7U & vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet);
                    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v1 = 1U;
                } else if ((4U == (7U & (vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet 
                                         >> 0x15U)))) {
                    __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v2 
                        = (7U & vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet);
                    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v2 = 1U;
                } else {
                    vlSelfRef.tb_top2__DOT__uut__DOT__error = 1U;
                }
            } else if ((0x800000U & vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet)) {
                if ((0x400000U & vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet)) {
                    vlSelfRef.tb_top2__DOT__uut__DOT__error = 1U;
                } else if ((0x200000U & vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet)) {
                    __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v3 
                        = (0xfffffU & vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet);
                    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v3 = 1U;
                } else {
                    __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v4 
                        = (0xfffffU & vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet);
                    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v4 = 1U;
                }
            } else if ((0x400000U & vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet)) {
                if ((0x200000U & vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet)) {
                    __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v5 
                        = (0xfffffU & vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet);
                    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v5 = 1U;
                } else {
                    __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v6 
                        = (0xfffffU & vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet);
                    __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v6 = 1U;
                }
            } else if ((0x200000U & vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet)) {
                __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v7 
                    = (0xfffffU & vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet);
                __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v7 = 1U;
            } else {
                __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v8 
                    = (0xfffffU & vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet);
                __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v8 = 1U;
            }
        }
    } else {
        __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v9 = 1U;
        vlSelfRef.tb_top2__DOT__uut__DOT__error = 0U;
        __VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v10 = 1U;
    }
    vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__dff2_rx_valid 
        = ((IData)(vlSelfRef.tb_top2__DOT__rst_n) && (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__dff1));
    if (__VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v0) {
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers[6U] 
            = __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v0;
    }
    if (__VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v1) {
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers[7U] 
            = __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v1;
    }
    if (__VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v2) {
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers[8U] 
            = __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v2;
    }
    if (__VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v3) {
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers[5U] 
            = __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v3;
    }
    if (__VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v4) {
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers[4U] 
            = __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v4;
    }
    if (__VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v5) {
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers[3U] 
            = __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v5;
    }
    if (__VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v6) {
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers[2U] 
            = __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v6;
    }
    if (__VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v7) {
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers[1U] 
            = __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v7;
    }
    if (__VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v8) {
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers[0U] 
            = __VdlyVal__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v8;
    }
    if (__VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v9) {
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers[0U] = 0U;
    }
    if (__VdlySet__tb_top2__DOT__uut__DOT__rfile__DOT__registers__v10) {
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers[1U] = 0U;
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers[2U] = 0U;
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers[3U] = 0U;
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers[4U] = 0U;
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers[5U] = 0U;
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers[6U] = 0U;
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers[7U] = 0U;
        vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__registers[8U] = 0U;
    }
    if (vlSelfRef.tb_top2__DOT__rst_n) {
        if (vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__is_posedge) {
            __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__master_counter 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__master_counter)));
            if (vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__current_state) {
                if (vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__current_state) {
                    if ((0xbU == (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__master_counter))) {
                        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__current_state = 0U;
                        __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__master_counter = 0U;
                        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__en_AB = 0U;
                        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__en_CD = 0U;
                        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__en_EF = 0U;
                    }
                }
            } else if ((9U == (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__master_counter))) {
                vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__current_state = 1U;
                __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__master_counter = 0U;
                vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__en_AB = 1U;
                vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__en_CD = 1U;
                vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__en_EF 
                    = vlSelfRef.tb_top2__DOT__en_all;
            }
        }
    } else {
        __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__master_counter = 0U;
        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__en_AB = 0U;
        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__en_CD = 0U;
        vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__en_EF = 0U;
    }
    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__master_counter 
        = __Vdly__tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__master_counter;
    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__is_posedge 
        = ((~ (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__pe__DOT__trig_in_delay3)) 
           & (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__pe__DOT__trig_in_delay2));
    vlSelfRef.tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__pe__DOT__trig_in_delay 
        = vlSelfRef.tb_top2__DOT__trig_in;
    vlSelfRef.tb_top2__DOT__uut__DOT__rfile__DOT__dff1 
        = ((IData)(vlSelfRef.tb_top2__DOT__rst_n) && (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__rx_valid));
    if (vlSelfRef.tb_top2__DOT__rst_n) {
        vlSelfRef.tb_top2__DOT__uut__DOT__rx_valid = 0U;
        if ((1U == (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__current_state))) {
            __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__baud_counter 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__baud_counter)));
        } else if ((2U == (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__current_state))) {
            __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__baud_counter 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__baud_counter)));
            if ((0x1b1U == (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__baud_counter))) {
                __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__shift_reg 
                    = (((IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync3) 
                        << 7U) | (0x7fU & ((IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__shift_reg) 
                                           >> 1U)));
                vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__bit_counter 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__bit_counter)));
                __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__baud_counter = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__current_state))) {
            __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__baud_counter 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__baud_counter)));
            if ((0xd8U == (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__baud_counter))) {
                __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__rx_data 
                    = ((0xffff00U & (vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__rx_data 
                                     << 8U)) | (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__shift_reg));
                vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__bit_counter = 0U;
                if ((2U == (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__byte_counter))) {
                    vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet 
                        = ((0xffff00U & (vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__rx_data 
                                         << 8U)) | (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__shift_reg));
                    vlSelfRef.tb_top2__DOT__uut__DOT__rx_valid = 1U;
                    __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__byte_counter = 0U;
                } else {
                    __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__byte_counter 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__byte_counter)));
                }
            }
        }
        if (((IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__current_state) 
             != (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__next_state))) {
            __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__baud_counter = 0U;
        }
        vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__current_state 
            = vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__next_state;
    } else {
        __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__shift_reg = 0U;
        vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__bit_counter = 0U;
        __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__baud_counter = 0U;
        __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__byte_counter = 0U;
        __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__rx_data = 0U;
        vlSelfRef.tb_top2__DOT__uut__DOT__uart_packet = 0U;
        vlSelfRef.tb_top2__DOT__uut__DOT__rx_valid = 0U;
        vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__current_state = 0U;
    }
    vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__shift_reg 
        = __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__shift_reg;
    vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__rx_data 
        = __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__rx_data;
    vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__byte_counter 
        = __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__byte_counter;
    vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__baud_counter 
        = __Vdly__tb_top2__DOT__uut__DOT__uart__DOT__baud_counter;
    vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync3 
        = vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync2;
    vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync2 
        = vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync1;
    vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__next_state 
        = vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__current_state;
    if ((2U & (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__current_state))) {
            if ((0xd8U == (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__baud_counter))) {
                vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__next_state = 0U;
            }
        } else if (((7U == (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__bit_counter)) 
                    & (0x1b1U == (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__baud_counter)))) {
            vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__current_state))) {
        if ((0xd8U == (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__baud_counter))) {
            vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__next_state 
                = ((IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync3)
                    ? 0U : 2U);
        }
    } else if (((~ (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync2)) 
                & (IData)(vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync3))) {
        vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__next_state = 1U;
    }
    vlSelfRef.tb_top2__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync1 
        = vlSelfRef.tb_top2__DOT__din;
}

void Vtb_top2___024root___timing_resume(Vtb_top2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top2___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h6825b4aa__0.resume(
                                                   "@(negedge tb_top2.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_top2___024root___timing_commit(Vtb_top2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top2___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h6825b4aa__0.commit(
                                                   "@(negedge tb_top2.clk)");
    }
}

void Vtb_top2___024root___eval_triggers__act(Vtb_top2___024root* vlSelf);

bool Vtb_top2___024root___eval_phase__act(Vtb_top2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top2___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_top2___024root___eval_triggers__act(vlSelf);
    Vtb_top2___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_top2___024root___timing_resume(vlSelf);
        Vtb_top2___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_top2___024root___eval_phase__nba(Vtb_top2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top2___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_top2___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top2___024root___dump_triggers__nba(Vtb_top2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top2___024root___dump_triggers__act(Vtb_top2___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top2___024root___eval(Vtb_top2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top2___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_top2___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/tb_top2.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_top2___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/tb_top2.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_top2___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_top2___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_top2___024root___eval_debug_assertions(Vtb_top2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top2___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
