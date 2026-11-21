// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_degen_core2.h for the primary calling header

#include "Vtb_degen_core2__pch.h"
#include "Vtb_degen_core2___024unit.h"

VL_ATTR_COLD void Vtb_degen_core2___024unit___ctor_var_reset(Vtb_degen_core2___024unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtb_degen_core2___024unit___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi = 0; __Vi < 2; ++__Vi) {
        vlSelf->__Venumtab_enum_name3[__Vi] = std::string{""};
    }
    vlSelf->__Venumtab_enum_name3[0] = std::string{"US"};
    vlSelf->__Venumtab_enum_name3[1] = std::string{"PA"};
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
