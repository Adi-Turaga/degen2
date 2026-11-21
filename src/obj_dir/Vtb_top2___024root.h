// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top2.h for the primary calling header

#ifndef VERILATED_VTB_TOP2___024ROOT_H_
#define VERILATED_VTB_TOP2___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_top2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_top2__DOT__clk;
    CData/*0:0*/ tb_top2__DOT__rst_n;
    CData/*0:0*/ tb_top2__DOT__trig_in;
    CData/*0:0*/ tb_top2__DOT__din;
    CData/*0:0*/ tb_top2__DOT__en_all;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__rx_valid;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__error;
    CData/*7:0*/ tb_top2__DOT__uut__DOT__uart__DOT__shift_reg;
    CData/*2:0*/ tb_top2__DOT__uut__DOT__uart__DOT__bit_counter;
    CData/*1:0*/ tb_top2__DOT__uut__DOT__uart__DOT__byte_counter;
    CData/*1:0*/ tb_top2__DOT__uut__DOT__uart__DOT__current_state;
    CData/*1:0*/ tb_top2__DOT__uut__DOT__uart__DOT__next_state;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync1;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync2;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync3;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__rfile__DOT__dff1;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__rfile__DOT__dff2_rx_valid;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__en_AB;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__en_CD;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__en_EF;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__is_posedge;
    CData/*1:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_ptr;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__active_AB;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__active_CD;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__active_EF;
    CData/*1:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__acq_counter;
    CData/*2:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_AB;
    CData/*2:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_CD;
    CData/*2:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__bitmask_EF;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__current_state;
    CData/*4:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__master_counter;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__pe__DOT__trig_in_delay;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__pe__DOT__trig_in_delay2;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__tc1__DOT__pe__DOT__trig_in_delay3;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__state;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__state;
    CData/*0:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top2__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ tb_top2__DOT__uut__DOT__uart__DOT__baud_counter;
    IData/*31:0*/ tb_top2__DOT__uart_send_byte__Vstatic__i;
    IData/*23:0*/ tb_top2__DOT__uut__DOT__uart_packet;
    IData/*23:0*/ tb_top2__DOT__uut__DOT__uart__DOT__rx_data;
    IData/*31:0*/ tb_top2__DOT__uut__DOT__rfile__DOT__unnamedblk1__DOT__i;
    IData/*19:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__tA;
    IData/*19:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__tB;
    IData/*19:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__tC;
    IData/*19:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__tD;
    IData/*19:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__tE;
    IData/*19:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__tF;
    IData/*31:0*/ __VactIterCount;
    QData/*39:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter;
    QData/*39:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter;
    QData/*39:0*/ tb_top2__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter;
    VlUnpacked<IData/*19:0*/, 9> tb_top2__DOT__uut__DOT__rfile__DOT__registers;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6825b4aa__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_top2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_top2___024root(Vtb_top2__Syms* symsp, const char* v__name);
    ~Vtb_top2___024root();
    VL_UNCOPYABLE(Vtb_top2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
