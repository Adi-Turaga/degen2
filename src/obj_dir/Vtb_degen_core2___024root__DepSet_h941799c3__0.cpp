// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_degen_core2.h for the primary calling header

#include "Vtb_degen_core2__pch.h"
#include "Vtb_degen_core2___024root.h"

VlCoroutine Vtb_degen_core2___024root___eval_initial__TOP__Vtiming__0(Vtb_degen_core2___024root* vlSelf);
VlCoroutine Vtb_degen_core2___024root___eval_initial__TOP__Vtiming__1(Vtb_degen_core2___024root* vlSelf);

void Vtb_degen_core2___024root___eval_initial(Vtb_degen_core2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_degen_core2___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_degen_core2___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_degen_core2__DOT__clk__0 
        = vlSelfRef.tb_degen_core2__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_degen_core2___024root___eval_initial__TOP__Vtiming__1(Vtb_degen_core2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/tb_degen_core2.sv", 
                                             52);
        vlSelfRef.tb_degen_core2__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.tb_degen_core2__DOT__clk)));
    }
}

void Vtb_degen_core2___024root___eval_act(Vtb_degen_core2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_degen_core2___024root___nba_sequent__TOP__0(Vtb_degen_core2___024root* vlSelf);

void Vtb_degen_core2___024root___eval_nba(Vtb_degen_core2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_degen_core2___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_degen_core2___024root___nba_sequent__TOP__0(Vtb_degen_core2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__tb_degen_core2__DOT__dg2__DOT__bitmask_ptr;
    __Vdly__tb_degen_core2__DOT__dg2__DOT__bitmask_ptr = 0;
    CData/*1:0*/ __Vdly__tb_degen_core2__DOT__dg2__DOT__acq_counter;
    __Vdly__tb_degen_core2__DOT__dg2__DOT__acq_counter = 0;
    CData/*4:0*/ __Vdly__tb_degen_core2__DOT__dg2__DOT__tc1__DOT__master_counter;
    __Vdly__tb_degen_core2__DOT__dg2__DOT__tc1__DOT__master_counter = 0;
    IData/*31:0*/ __Vdly__tb_degen_core2__DOT__dg2__DOT__tc1__DOT__current_state;
    __Vdly__tb_degen_core2__DOT__dg2__DOT__tc1__DOT__current_state = 0;
    QData/*39:0*/ __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter;
    __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter = 0;
    QData/*39:0*/ __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter;
    __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter = 0;
    QData/*39:0*/ __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter;
    __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter = 0;
    // Body
    __Vdly__tb_degen_core2__DOT__dg2__DOT__tc1__DOT__master_counter 
        = vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__master_counter;
    __Vdly__tb_degen_core2__DOT__dg2__DOT__tc1__DOT__current_state 
        = vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__current_state;
    __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter 
        = vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter;
    __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter 
        = vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter;
    __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter 
        = vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter;
    __Vdly__tb_degen_core2__DOT__dg2__DOT__bitmask_ptr 
        = vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr;
    __Vdly__tb_degen_core2__DOT__dg2__DOT__acq_counter 
        = vlSelfRef.tb_degen_core2__DOT__dg2__DOT__acq_counter;
    if (vlSelfRef.tb_degen_core2__DOT__rst_n) {
        if ((((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_AB) 
              | ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_CD) 
                 | (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_EF))) 
             & (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__is_posedge))) {
            if ((1U == (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__acq_counter))) {
                __Vdly__tb_degen_core2__DOT__dg2__DOT__bitmask_ptr 
                    = (((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr) 
                        == (((3U == (7U & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_AB) 
                                           + ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_CD) 
                                              + (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_EF)))))
                              ? 3U : 2U) - (IData)(1U)))
                        ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr))));
                __Vdly__tb_degen_core2__DOT__dg2__DOT__acq_counter = 0U;
            } else {
                __Vdly__tb_degen_core2__DOT__dg2__DOT__acq_counter 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__acq_counter)));
            }
        }
        if (vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__state) {
            if (vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__state) {
                if ((vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter 
                     == (0xffffffffffULL & ((QData)((IData)(
                                                            (0xfffffU 
                                                             & ((IData)(0x50U) 
                                                                + vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tB)))) 
                                            - 1ULL)))) {
                    __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter = 0ULL;
                    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__state = 0U;
                    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__active_AB = 0U;
                } else {
                    __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter 
                        = (0xffffffffffULL & (1ULL 
                                              + vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter));
                }
            }
        } else if (((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_AB) 
                    & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__is_posedge) 
                       & ((2U >= (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr)) 
                          && (1U & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_AB) 
                                    >> (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr))))))) {
            __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter = 0ULL;
            vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__state = 1U;
            vlSelfRef.tb_degen_core2__DOT__dg2__DOT__active_AB = 1U;
        }
        if (vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__state) {
            if (vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__state) {
                if ((vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter 
                     == (0xffffffffffULL & ((QData)((IData)(
                                                            (0xfffffU 
                                                             & ((IData)(0x50U) 
                                                                + vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tD)))) 
                                            - 1ULL)))) {
                    __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter = 0ULL;
                    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__state = 0U;
                    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__active_CD = 0U;
                } else {
                    __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter 
                        = (0xffffffffffULL & (1ULL 
                                              + vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter));
                }
            }
        } else if (((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_CD) 
                    & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__is_posedge) 
                       & ((2U >= (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr)) 
                          && (1U & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_CD) 
                                    >> (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr))))))) {
            __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter = 0ULL;
            vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__state = 1U;
            vlSelfRef.tb_degen_core2__DOT__dg2__DOT__active_CD = 1U;
        }
        if (vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__state) {
            if (vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__state) {
                if ((vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter 
                     == (0xffffffffffULL & ((QData)((IData)(
                                                            (0xfffffU 
                                                             & ((IData)(0x50U) 
                                                                + vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tF)))) 
                                            - 1ULL)))) {
                    __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter = 0ULL;
                    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__state = 0U;
                    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__active_EF = 0U;
                } else {
                    __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter 
                        = (0xffffffffffULL & (1ULL 
                                              + vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter));
                }
            }
        } else if (((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_EF) 
                    & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__is_posedge) 
                       & ((2U >= (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr)) 
                          && (1U & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_EF) 
                                    >> (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr))))))) {
            __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter = 0ULL;
            vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__state = 1U;
            vlSelfRef.tb_degen_core2__DOT__dg2__DOT__active_EF = 1U;
        }
        if (vlSelfRef.tb_degen_core2__DOT__dg2__DOT__is_posedge) {
            __Vdly__tb_degen_core2__DOT__dg2__DOT__tc1__DOT__master_counter 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__master_counter)));
            if ((0U == vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__current_state)) {
                if ((0x13U == (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__master_counter))) {
                    __Vdly__tb_degen_core2__DOT__dg2__DOT__tc1__DOT__current_state = 1U;
                    __Vdly__tb_degen_core2__DOT__dg2__DOT__tc1__DOT__master_counter = 0U;
                    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_AB = 1U;
                    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_CD = 1U;
                    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_EF 
                        = vlSelfRef.tb_degen_core2__DOT__en_all;
                }
            } else if ((1U == vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__current_state)) {
                if ((0x11U == (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__master_counter))) {
                    __Vdly__tb_degen_core2__DOT__dg2__DOT__tc1__DOT__current_state = 0U;
                    __Vdly__tb_degen_core2__DOT__dg2__DOT__tc1__DOT__master_counter = 0U;
                    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_AB = 0U;
                    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_CD = 0U;
                    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_EF = 0U;
                }
            }
        }
    } else {
        __Vdly__tb_degen_core2__DOT__dg2__DOT__bitmask_ptr = 0U;
        __Vdly__tb_degen_core2__DOT__dg2__DOT__acq_counter = 0U;
        vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__state = 0U;
        __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter = 0ULL;
        vlSelfRef.tb_degen_core2__DOT__dg2__DOT__active_AB = 0U;
        vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__state = 0U;
        __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter = 0ULL;
        vlSelfRef.tb_degen_core2__DOT__dg2__DOT__active_CD = 0U;
        vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__state = 0U;
        __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter = 0ULL;
        vlSelfRef.tb_degen_core2__DOT__dg2__DOT__active_EF = 0U;
        __Vdly__tb_degen_core2__DOT__dg2__DOT__tc1__DOT__master_counter = 0U;
        vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_AB = 0U;
        vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_CD = 0U;
        vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_EF = 0U;
    }
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tA = vlSelfRef.tb_degen_core2__DOT__tA;
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tC = vlSelfRef.tb_degen_core2__DOT__tC;
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tE = vlSelfRef.tb_degen_core2__DOT__tE;
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__pe__DOT__trig_in_delay3 
        = vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__pe__DOT__trig_in_delay2;
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__acq_counter 
        = __Vdly__tb_degen_core2__DOT__dg2__DOT__acq_counter;
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter 
        = __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter;
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter 
        = __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter;
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter 
        = __Vdly__tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter;
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr 
        = __Vdly__tb_degen_core2__DOT__dg2__DOT__bitmask_ptr;
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__pe__DOT__trig_in_delay2 
        = vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__pe__DOT__trig_in_delay;
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tB = vlSelfRef.tb_degen_core2__DOT__tB;
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_AB 
        = vlSelfRef.tb_degen_core2__DOT__bitmask_AB;
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tD = vlSelfRef.tb_degen_core2__DOT__tD;
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_CD 
        = vlSelfRef.tb_degen_core2__DOT__bitmask_CD;
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tF = vlSelfRef.tb_degen_core2__DOT__tF;
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_EF 
        = vlSelfRef.tb_degen_core2__DOT__bitmask_EF;
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__master_counter 
        = __Vdly__tb_degen_core2__DOT__dg2__DOT__tc1__DOT__master_counter;
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__current_state 
        = __Vdly__tb_degen_core2__DOT__dg2__DOT__tc1__DOT__current_state;
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__is_posedge 
        = ((~ (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__pe__DOT__trig_in_delay3)) 
           & (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__pe__DOT__trig_in_delay2));
    vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__pe__DOT__trig_in_delay 
        = vlSelfRef.tb_degen_core2__DOT__trig_in;
}

void Vtb_degen_core2___024root___timing_resume(Vtb_degen_core2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_degen_core2___024root___eval_triggers__act(Vtb_degen_core2___024root* vlSelf);

bool Vtb_degen_core2___024root___eval_phase__act(Vtb_degen_core2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_degen_core2___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_degen_core2___024root___timing_resume(vlSelf);
        Vtb_degen_core2___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_degen_core2___024root___eval_phase__nba(Vtb_degen_core2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_degen_core2___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_degen_core2___024root___dump_triggers__nba(Vtb_degen_core2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_degen_core2___024root___dump_triggers__act(Vtb_degen_core2___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_degen_core2___024root___eval(Vtb_degen_core2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root___eval\n"); );
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
            Vtb_degen_core2___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sim/tb_degen_core2.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_degen_core2___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sim/tb_degen_core2.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_degen_core2___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_degen_core2___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_degen_core2___024root___eval_debug_assertions(Vtb_degen_core2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
