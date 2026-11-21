// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_top__Syms.h"


VL_ATTR_COLD void Vtb_top___024root__trace_init_sub__TOP__0(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+94,0,"CLK_FREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"BAUD_RATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"TICK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+93,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"trig_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"sclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"en_AB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"en_CD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"en_EF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"pulse_w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"pulse_w2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"pulse_w3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+99,0,"BAUD_RATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+100,0,"CLK_FREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+93,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"trig_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"en_AB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"en_CD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"en_EF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"pulse_w1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"pulse_w2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"pulse_w3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"tA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+15,0,"tB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+16,0,"tC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+17,0,"tD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+18,0,"tE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+19,0,"tF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+20,0,"bitmask_AB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+21,0,"bitmask_CD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+22,0,"bitmask_EF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+23,0,"uart_packet",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+24,0,"rx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dg1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+101,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+93,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"trig_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"en_AB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"en_CD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"en_EF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"tA_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+15,0,"tB_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+16,0,"tC_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+17,0,"tD_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+18,0,"tE_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+19,0,"tF_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+20,0,"bitmask_AB_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+21,0,"bitmask_CD_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+22,0,"bitmask_EF_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+11,0,"pulse_w1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"pulse_w2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"pulse_w3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"is_posedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"bitmask_AB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+28,0,"bitmask_CD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+29,0,"bitmask_EF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+30,0,"bitmask_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+31,0,"active_AB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"active_CD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"active_EF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"tA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+35,0,"tB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+36,0,"tC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+37,0,"tD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+38,0,"tE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+39,0,"tF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+9,0,"N_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"N_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+40,0,"tAB_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+41,0,"tCD_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+42,0,"tEF_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+43,0,"posedge_AB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"posedge_CD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"posedge_EF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dg2_AB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+93,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"t1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+47,0,"t2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+48,0,"t_cycle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+43,0,"is_posedge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+49,0,"master_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+51,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dg2_CD", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+93,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"t1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+53,0,"t2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+54,0,"t_cycle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+44,0,"is_posedge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+55,0,"master_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+57,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dg2_EF", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+93,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"t1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+59,0,"t2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+60,0,"t_cycle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+45,0,"is_posedge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+61,0,"master_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+63,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+93,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"trig_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"is_posedge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"trig_in_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"trig_in_delay2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"trig_in_delay3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+93,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"rx_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"packet",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+14,0,"tA_new",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+15,0,"tB_new",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+16,0,"tC_new",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+17,0,"tD_new",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+18,0,"tE_new",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+19,0,"tF_new",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+20,0,"bitmask_AB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+21,0,"bitmask_CD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+22,0,"bitmask_EF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+25,0,"error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+67+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 19,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+76,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+77,0,"tX_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+78,0,"dff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"dff2_rx_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"is_bitmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+81,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("uart", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+99,0,"BAUD_RATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+100,0,"CLK_FREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+102,0,"TICK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+93,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"packet_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+24,0,"rx_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"rx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+83,0,"baud_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+84,0,"shift_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+85,0,"bit_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+86,0,"byte_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+87,0,"is_negedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"din_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+90,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("ne1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+93,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"tx_idle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"is_negedge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"din_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"dff_sync1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"dff_sync2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"dff_sync3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_top___024root__trace_init_top(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_top___024root__trace_register(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_top___024root__trace_const_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_const_0\n"); );
    // Init
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_top___024root__trace_const_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+94,(0x2faf080U),32);
    bufp->fullIData(oldp+95,(0x1c200U),32);
    bufp->fullIData(oldp+96,(0x1b2U),32);
    bufp->fullIData(oldp+97,(0x14U),32);
    bufp->fullBit(oldp+98,(vlSelfRef.tb_top__DOT__sclk));
    bufp->fullIData(oldp+99,(0x1c200U),32);
    bufp->fullIData(oldp+100,(0x2faf080U),32);
    bufp->fullIData(oldp+101,(3U),32);
    bufp->fullIData(oldp+102,(0x1b2U),32);
}

VL_ATTR_COLD void Vtb_top___024root__trace_full_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_full_0\n"); );
    // Init
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_top___024root__trace_full_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_top__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_top__DOT__trig_in));
    bufp->fullBit(oldp+3,(vlSelfRef.tb_top__DOT__din));
    bufp->fullBit(oldp+4,(vlSelfRef.tb_top__DOT__en_AB));
    bufp->fullBit(oldp+5,(vlSelfRef.tb_top__DOT__en_CD));
    bufp->fullBit(oldp+6,(vlSelfRef.tb_top__DOT__en_EF));
    bufp->fullIData(oldp+7,(vlSelfRef.tb_top__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_top__DOT__unnamedblk3__DOT__i),32);
    bufp->fullCData(oldp+9,((7U & ((IData)(vlSelfRef.tb_top__DOT__en_AB) 
                                   + ((IData)(vlSelfRef.tb_top__DOT__en_CD) 
                                      + (IData)(vlSelfRef.tb_top__DOT__en_EF))))),3);
    bufp->fullCData(oldp+10,(((3U == (7U & ((IData)(vlSelfRef.tb_top__DOT__en_AB) 
                                            + ((IData)(vlSelfRef.tb_top__DOT__en_CD) 
                                               + (IData)(vlSelfRef.tb_top__DOT__en_EF)))))
                               ? 3U : 2U)),3);
    bufp->fullBit(oldp+11,(((IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__state) 
                            & ((vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter 
                                >= (QData)((IData)(
                                                   (0xfffffU 
                                                    & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tA)))) 
                               & (vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter 
                                  < (QData)((IData)(
                                                    (0xfffffU 
                                                     & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tB))))))));
    bufp->fullBit(oldp+12,(((IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__state) 
                            & ((vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter 
                                >= (QData)((IData)(
                                                   (0xfffffU 
                                                    & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tC)))) 
                               & (vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter 
                                  < (QData)((IData)(
                                                    (0xfffffU 
                                                     & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tD))))))));
    bufp->fullBit(oldp+13,(((IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__state) 
                            & ((vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter 
                                >= (QData)((IData)(
                                                   (0xfffffU 
                                                    & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tE)))) 
                               & (vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter 
                                  < (QData)((IData)(
                                                    (0xfffffU 
                                                     & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tF))))))));
    bufp->fullIData(oldp+14,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers
                             [0U]),20);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers
                             [1U]),20);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers
                             [2U]),20);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers
                             [3U]),20);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers
                             [4U]),20);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers
                             [5U]),20);
    bufp->fullCData(oldp+20,((7U & vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers
                              [6U])),3);
    bufp->fullCData(oldp+21,((7U & vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers
                              [7U])),3);
    bufp->fullCData(oldp+22,((7U & vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers
                              [8U])),3);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_top__DOT__uut__DOT__uart_packet),24);
    bufp->fullBit(oldp+24,(vlSelfRef.tb_top__DOT__uut__DOT__rx_valid));
    bufp->fullBit(oldp+25,(vlSelfRef.tb_top__DOT__uut__DOT__error));
    bufp->fullBit(oldp+26,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__is_posedge));
    bufp->fullCData(oldp+27,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_AB),3);
    bufp->fullCData(oldp+28,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_CD),3);
    bufp->fullCData(oldp+29,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_EF),3);
    bufp->fullCData(oldp+30,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_ptr),2);
    bufp->fullBit(oldp+31,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__active_AB));
    bufp->fullBit(oldp+32,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__active_CD));
    bufp->fullBit(oldp+33,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__active_EF));
    bufp->fullIData(oldp+34,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tA),21);
    bufp->fullIData(oldp+35,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tB),21);
    bufp->fullIData(oldp+36,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tC),21);
    bufp->fullIData(oldp+37,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tD),21);
    bufp->fullIData(oldp+38,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tE),21);
    bufp->fullIData(oldp+39,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tF),21);
    bufp->fullIData(oldp+40,((0x3fffffU & ((IData)(0x50U) 
                                           + vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tB))),22);
    bufp->fullIData(oldp+41,((0x3fffffU & ((IData)(0x50U) 
                                           + vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tD))),22);
    bufp->fullIData(oldp+42,((0x3fffffU & ((IData)(0x50U) 
                                           + vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tF))),22);
    bufp->fullBit(oldp+43,(((IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__is_posedge) 
                            & ((2U >= (IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_ptr)) 
                               && (1U & ((IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_AB) 
                                         >> (IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_ptr)))))));
    bufp->fullBit(oldp+44,(((IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__is_posedge) 
                            & ((2U >= (IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_ptr)) 
                               && (1U & ((IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_CD) 
                                         >> (IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_ptr)))))));
    bufp->fullBit(oldp+45,(((IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__is_posedge) 
                            & ((2U >= (IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_ptr)) 
                               && (1U & ((IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_EF) 
                                         >> (IData)(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__bitmask_ptr)))))));
    bufp->fullIData(oldp+46,((0xfffffU & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tA)),20);
    bufp->fullIData(oldp+47,((0xfffffU & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tB)),20);
    bufp->fullIData(oldp+48,((0xfffffU & ((IData)(0x50U) 
                                          + vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tB))),20);
    bufp->fullQData(oldp+49,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__master_counter),40);
    bufp->fullBit(oldp+51,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_AB__DOT__state));
    bufp->fullIData(oldp+52,((0xfffffU & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tC)),20);
    bufp->fullIData(oldp+53,((0xfffffU & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tD)),20);
    bufp->fullIData(oldp+54,((0xfffffU & ((IData)(0x50U) 
                                          + vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tD))),20);
    bufp->fullQData(oldp+55,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__master_counter),40);
    bufp->fullBit(oldp+57,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_CD__DOT__state));
    bufp->fullIData(oldp+58,((0xfffffU & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tE)),20);
    bufp->fullIData(oldp+59,((0xfffffU & vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tF)),20);
    bufp->fullIData(oldp+60,((0xfffffU & ((IData)(0x50U) 
                                          + vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__tF))),20);
    bufp->fullQData(oldp+61,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__master_counter),40);
    bufp->fullBit(oldp+63,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__dg2_EF__DOT__state));
    bufp->fullBit(oldp+64,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__pe__DOT__trig_in_delay));
    bufp->fullBit(oldp+65,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__pe__DOT__trig_in_delay2));
    bufp->fullBit(oldp+66,(vlSelfRef.tb_top__DOT__uut__DOT__dg1__DOT__pe__DOT__trig_in_delay3));
    bufp->fullIData(oldp+67,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers[0]),20);
    bufp->fullIData(oldp+68,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers[1]),20);
    bufp->fullIData(oldp+69,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers[2]),20);
    bufp->fullIData(oldp+70,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers[3]),20);
    bufp->fullIData(oldp+71,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers[4]),20);
    bufp->fullIData(oldp+72,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers[5]),20);
    bufp->fullIData(oldp+73,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers[6]),20);
    bufp->fullIData(oldp+74,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers[7]),20);
    bufp->fullIData(oldp+75,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__registers[8]),20);
    bufp->fullIData(oldp+76,((0xfffffU & vlSelfRef.tb_top__DOT__uut__DOT__uart_packet)),20);
    bufp->fullCData(oldp+77,((7U & (vlSelfRef.tb_top__DOT__uut__DOT__uart_packet 
                                    >> 0x15U))),3);
    bufp->fullBit(oldp+78,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__dff1));
    bufp->fullBit(oldp+79,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__dff2_rx_valid));
    bufp->fullBit(oldp+80,((1U & (vlSelfRef.tb_top__DOT__uut__DOT__uart_packet 
                                  >> 0x14U))));
    bufp->fullIData(oldp+81,(vlSelfRef.tb_top__DOT__uut__DOT__rfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+82,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__rx_data),24);
    bufp->fullSData(oldp+83,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__baud_counter),9);
    bufp->fullCData(oldp+84,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__shift_reg),8);
    bufp->fullCData(oldp+85,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__bit_counter),3);
    bufp->fullCData(oldp+86,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__byte_counter),2);
    bufp->fullBit(oldp+87,(((~ (IData)(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync2)) 
                            & (IData)(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync3))));
    bufp->fullBit(oldp+88,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync3));
    bufp->fullCData(oldp+89,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__current_state),2);
    bufp->fullCData(oldp+90,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__next_state),2);
    bufp->fullBit(oldp+91,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync1));
    bufp->fullBit(oldp+92,(vlSelfRef.tb_top__DOT__uut__DOT__uart__DOT__ne1__DOT__dff_sync2));
    bufp->fullBit(oldp+93,(vlSelfRef.tb_top__DOT__clk));
}
