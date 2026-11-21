// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_degen_core2.h for the primary calling header

#include "Vtb_degen_core2__pch.h"
#include "Vtb_degen_core2__Syms.h"
#include "Vtb_degen_core2___024root.h"

void Vtb_degen_core2___024root___ctor_var_reset(Vtb_degen_core2___024root* vlSelf);

Vtb_degen_core2___024root::Vtb_degen_core2___024root(Vtb_degen_core2__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_degen_core2___024root___ctor_var_reset(this);
}

void Vtb_degen_core2___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_degen_core2___024root::~Vtb_degen_core2___024root() {
}
