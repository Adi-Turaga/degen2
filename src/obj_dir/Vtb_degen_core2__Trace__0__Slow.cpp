// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_degen_core2__Syms.h"


VL_ATTR_COLD void Vtb_degen_core2___024root__trace_init_sub__TOP__0(Vtb_degen_core2___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_degen_core2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+62,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+63,0,"NUM_ANGLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"US_pulses",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"PA_pulses",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"COUNTER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"trig_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"en_all",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"en_AB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"en_CD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"en_EF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"tA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+5,0,"tB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+6,0,"tC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+7,0,"tD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+8,0,"tE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+9,0,"tF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+10,0,"bitmask_AB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"bitmask_CD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+12,0,"bitmask_EF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+14,0,"pulse_w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"pulse_w2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"pulse_w3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dg2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+62,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+70,0,"NUM_ANGLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+71,0,"NUM_ELEMENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+64,0,"US_pulses",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"PA_pulses",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"COUNTER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+73,0,"FRAMES_PER_ACQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+61,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"trig_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"en_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"tA_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+5,0,"tB_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+6,0,"tC_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+7,0,"tD_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+8,0,"tE_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+9,0,"tF_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+10,0,"bitmask_AB_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"bitmask_CD_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+12,0,"bitmask_EF_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+14,0,"pulse_w1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"pulse_w2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"pulse_w3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"en_AB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"en_CD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"en_EF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"is_posedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"bitmask_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+23,0,"active_AB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"active_CD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"active_EF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"acq_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+27,0,"tA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+28,0,"tB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+29,0,"tC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+30,0,"tD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+31,0,"tE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+32,0,"tF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+33,0,"bitmask_AB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+34,0,"bitmask_CD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+35,0,"bitmask_EF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+36,0,"N_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+37,0,"N_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+38,0,"tAB_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+39,0,"tCD_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+40,0,"tEF_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+41,0,"posedge_AB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"posedge_CD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"posedge_EF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dg2_AB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+61,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"t1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+28,0,"t2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+44,0,"t_cycle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+41,0,"is_posedge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+45,0,"master_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+47,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dg2_CD", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+61,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"t1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+30,0,"t2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+48,0,"t_cycle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+42,0,"is_posedge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+49,0,"master_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+51,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dg2_EF", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+61,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"t1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+32,0,"t2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+52,0,"t_cycle",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+43,0,"is_posedge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+53,0,"master_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+55,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tc1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+63,0,"NUM_ANGLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"COUNTER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"trig_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"en_all",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"US_pulses",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+75,0,"PA_pulses",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+17,0,"en_AB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"en_CD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"en_EF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"is_posedge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"master_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+61,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"trig_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"is_posedge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"trig_in_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"trig_in_delay2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"trig_in_delay3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_degen_core2___024root__trace_init_top(Vtb_degen_core2___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_degen_core2___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_degen_core2___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_degen_core2___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_degen_core2___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_degen_core2___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_degen_core2___024root__trace_register(Vtb_degen_core2___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_degen_core2___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_degen_core2___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_degen_core2___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_degen_core2___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_degen_core2___024root__trace_const_0_sub_0(Vtb_degen_core2___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_degen_core2___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root__trace_const_0\n"); );
    // Init
    Vtb_degen_core2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_degen_core2___024root*>(voidSelf);
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_degen_core2___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_degen_core2___024root__trace_const_0_sub_0(Vtb_degen_core2___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+62,(3U),32);
    bufp->fullIData(oldp+63,(0x20U),32);
    bufp->fullIData(oldp+64,(0x14U),32);
    bufp->fullIData(oldp+65,(0x12U),32);
    bufp->fullIData(oldp+66,(5U),32);
    bufp->fullBit(oldp+67,(vlSelfRef.tb_degen_core2__DOT__en_AB));
    bufp->fullBit(oldp+68,(vlSelfRef.tb_degen_core2__DOT__en_CD));
    bufp->fullBit(oldp+69,(vlSelfRef.tb_degen_core2__DOT__en_EF));
    bufp->fullIData(oldp+70,(0x20U),32);
    bufp->fullIData(oldp+71,(0x80U),32);
    bufp->fullIData(oldp+72,(5U),32);
    bufp->fullIData(oldp+73,(2U),32);
    bufp->fullCData(oldp+74,(0x14U),5);
    bufp->fullCData(oldp+75,(0x12U),5);
}

VL_ATTR_COLD void Vtb_degen_core2___024root__trace_full_0_sub_0(Vtb_degen_core2___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_degen_core2___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root__trace_full_0\n"); );
    // Init
    Vtb_degen_core2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_degen_core2___024root*>(voidSelf);
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_degen_core2___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_degen_core2___024root__trace_full_0_sub_0(Vtb_degen_core2___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_degen_core2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_degen_core2___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_degen_core2__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_degen_core2__DOT__trig_in));
    bufp->fullBit(oldp+3,(vlSelfRef.tb_degen_core2__DOT__en_all));
    bufp->fullIData(oldp+4,(vlSelfRef.tb_degen_core2__DOT__tA),20);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_degen_core2__DOT__tB),20);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_degen_core2__DOT__tC),20);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_degen_core2__DOT__tD),20);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_degen_core2__DOT__tE),20);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_degen_core2__DOT__tF),20);
    bufp->fullCData(oldp+10,(vlSelfRef.tb_degen_core2__DOT__bitmask_AB),3);
    bufp->fullCData(oldp+11,(vlSelfRef.tb_degen_core2__DOT__bitmask_CD),3);
    bufp->fullCData(oldp+12,(vlSelfRef.tb_degen_core2__DOT__bitmask_EF),3);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_degen_core2__DOT__unnamedblk3__DOT__i),32);
    bufp->fullBit(oldp+14,(((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__state) 
                            & ((vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter 
                                >= (QData)((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tA))) 
                               & (vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter 
                                  < (QData)((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tB)))))));
    bufp->fullBit(oldp+15,(((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__state) 
                            & ((vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter 
                                >= (QData)((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tC))) 
                               & (vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter 
                                  < (QData)((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tD)))))));
    bufp->fullBit(oldp+16,(((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__state) 
                            & ((vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter 
                                >= (QData)((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tE))) 
                               & (vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter 
                                  < (QData)((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tF)))))));
    bufp->fullBit(oldp+17,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_AB));
    bufp->fullBit(oldp+18,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_CD));
    bufp->fullBit(oldp+19,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_EF));
    bufp->fullBit(oldp+20,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__is_posedge));
    bufp->fullBit(oldp+21,(((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_AB) 
                            | ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_CD) 
                               | (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_EF)))));
    bufp->fullCData(oldp+22,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr),2);
    bufp->fullBit(oldp+23,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__active_AB));
    bufp->fullBit(oldp+24,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__active_CD));
    bufp->fullBit(oldp+25,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__active_EF));
    bufp->fullCData(oldp+26,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__acq_counter),2);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tA),20);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tB),20);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tC),20);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tD),20);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tE),20);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tF),20);
    bufp->fullCData(oldp+33,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_AB),3);
    bufp->fullCData(oldp+34,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_CD),3);
    bufp->fullCData(oldp+35,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_EF),3);
    bufp->fullCData(oldp+36,((7U & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_AB) 
                                    + ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_CD) 
                                       + (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_EF))))),3);
    bufp->fullCData(oldp+37,(((3U == (7U & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_AB) 
                                            + ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_CD) 
                                               + (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_EF)))))
                               ? 3U : 2U)),3);
    bufp->fullIData(oldp+38,((0x3fffffU & ((IData)(0x50U) 
                                           + vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tB))),22);
    bufp->fullIData(oldp+39,((0x3fffffU & ((IData)(0x50U) 
                                           + vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tD))),22);
    bufp->fullIData(oldp+40,((0x3fffffU & ((IData)(0x50U) 
                                           + vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tF))),22);
    bufp->fullBit(oldp+41,(((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_AB) 
                            & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__is_posedge) 
                               & ((2U >= (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr)) 
                                  && (1U & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_AB) 
                                            >> (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr))))))));
    bufp->fullBit(oldp+42,(((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_CD) 
                            & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__is_posedge) 
                               & ((2U >= (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr)) 
                                  && (1U & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_CD) 
                                            >> (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr))))))));
    bufp->fullBit(oldp+43,(((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__en_EF) 
                            & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__is_posedge) 
                               & ((2U >= (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr)) 
                                  && (1U & ((IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_EF) 
                                            >> (IData)(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__bitmask_ptr))))))));
    bufp->fullIData(oldp+44,((0xfffffU & ((IData)(0x50U) 
                                          + vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tB))),20);
    bufp->fullQData(oldp+45,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__master_counter),40);
    bufp->fullBit(oldp+47,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_AB__DOT__state));
    bufp->fullIData(oldp+48,((0xfffffU & ((IData)(0x50U) 
                                          + vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tD))),20);
    bufp->fullQData(oldp+49,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__master_counter),40);
    bufp->fullBit(oldp+51,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_CD__DOT__state));
    bufp->fullIData(oldp+52,((0xfffffU & ((IData)(0x50U) 
                                          + vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tF))),20);
    bufp->fullQData(oldp+53,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__master_counter),40);
    bufp->fullBit(oldp+55,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__dg2_EF__DOT__state));
    bufp->fullCData(oldp+56,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__master_counter),5);
    bufp->fullIData(oldp+57,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__current_state),32);
    bufp->fullBit(oldp+58,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__pe__DOT__trig_in_delay));
    bufp->fullBit(oldp+59,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__pe__DOT__trig_in_delay2));
    bufp->fullBit(oldp+60,(vlSelfRef.tb_degen_core2__DOT__dg2__DOT__tc1__DOT__pe__DOT__trig_in_delay3));
    bufp->fullBit(oldp+61,(vlSelfRef.tb_degen_core2__DOT__clk));
}
