// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top2.h for the primary calling header

#include "Vtb_top2__pch.h"
#include "Vtb_top2__Syms.h"
#include "Vtb_top2___024root.h"

void Vtb_top2___024root___ctor_var_reset(Vtb_top2___024root* vlSelf);

Vtb_top2___024root::Vtb_top2___024root(Vtb_top2__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_top2___024root___ctor_var_reset(this);
}

void Vtb_top2___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_top2___024root::~Vtb_top2___024root() {
}
