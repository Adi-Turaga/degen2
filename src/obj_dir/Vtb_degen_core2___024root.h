// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_degen_core2.h for the primary calling header

#ifndef VERILATED_VTB_DEGEN_CORE2___024ROOT_H_
#define VERILATED_VTB_DEGEN_CORE2___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_degen_core2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_degen_core2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_degen_core2__DOT__clk;
    CData/*0:0*/ tb_degen_core2__DOT__rst_n;
    CData/*0:0*/ tb_degen_core2__DOT__trig_in;
    CData/*0:0*/ tb_degen_core2__DOT__en_all;
    CData/*0:0*/ tb_degen_core2__DOT__en_AB;
    CData/*0:0*/ tb_degen_core2__DOT__en_CD;
    CData/*0:0*/ tb_degen_core2__DOT__en_EF;
    CData/*2:0*/ tb_degen_core2__DOT__bitmask_AB;
    CData/*2:0*/ tb_degen_core2__DOT__bitmask_CD;
    CData/*2:0*/ tb_degen_core2__DOT__bitmask_EF;
    CData/*0:0*/ tb_degen_core2__DOT__dg2__DOT__en_AB;
    CData/*0:0*/ tb_degen_core2__DOT__dg2__DOT__en_CD;
    CData/*0:0*/ tb_degen_core2__DOT__dg2__DOT__en_EF;
    CData/*0:0*/ tb_degen_core2__DOT__dg2__DOT__is_posedge;
    CData/*1:0*/ tb_degen_core2__DOT__dg2__DOT__bitmask_ptr;
    CData/*0:0*/ tb_degen_core2__DOT__dg2__DOT__active_AB;
    CData/*0:0*/ tb_degen_core2__DOT__dg2__DOT__active_CD;
    CData/*0:0*/ tb_degen_core2__DOT__dg2__DOT__active_EF;
    CData/*1:0*/ tb_degen_core2__DOT__dg2__DOT__acq_counter;
    CData/*2:0*/ tb_degen_core2__DOT__dg2__DOT__bitmask_AB;
    CData/*2:0*/ tb_degen_core2__DOT__dg2__DOT__bitmask_CD;
    CData/*2:0*/ tb_degen_core2__DOT__dg2__DOT__bitmask_EF;
    CData/*4:0*/ tb_degen_core2__DOT__dg2__DOT__tc1__DOT__master_counter;
    CData/*0:0*/ tb_degen_core2__DOT__dg2__DOT__tc1__DOT__pe__DOT__trig_in_delay;
    CData/*0:0*/ tb_degen_core2__DOT__dg2__DOT__tc1__DOT__pe__DOT__trig_in_delay2;
    CData/*0:0*/ tb_degen_core2__DOT__dg2__DOT__tc1__DOT__pe__DOT__trig_in_delay3;
    CData/*0:0*/ tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__state;
    CData/*0:0*/ tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__state;
    CData/*0:0*/ tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_degen_core2__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*19:0*/ tb_degen_core2__DOT__tA;
    IData/*19:0*/ tb_degen_core2__DOT__tB;
    IData/*19:0*/ tb_degen_core2__DOT__tC;
    IData/*19:0*/ tb_degen_core2__DOT__tD;
    IData/*19:0*/ tb_degen_core2__DOT__tE;
    IData/*19:0*/ tb_degen_core2__DOT__tF;
    IData/*31:0*/ tb_degen_core2__DOT__unnamedblk3__DOT__i;
    IData/*19:0*/ tb_degen_core2__DOT__dg2__DOT__tA;
    IData/*19:0*/ tb_degen_core2__DOT__dg2__DOT__tB;
    IData/*19:0*/ tb_degen_core2__DOT__dg2__DOT__tC;
    IData/*19:0*/ tb_degen_core2__DOT__dg2__DOT__tD;
    IData/*19:0*/ tb_degen_core2__DOT__dg2__DOT__tE;
    IData/*19:0*/ tb_degen_core2__DOT__dg2__DOT__tF;
    IData/*31:0*/ tb_degen_core2__DOT__dg2__DOT__tc1__DOT__current_state;
    IData/*31:0*/ __VactIterCount;
    QData/*39:0*/ tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter;
    QData/*39:0*/ tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter;
    QData/*39:0*/ tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_degen_core2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_degen_core2___024root(Vtb_degen_core2__Syms* symsp, const char* v__name);
    ~Vtb_degen_core2___024root();
    VL_UNCOPYABLE(Vtb_degen_core2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
