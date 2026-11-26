`timescale 1ns / 1ps

module top #(
    parameter N = 3,
    parameter NUM_ELEMENTS = 64,
    parameter US_PULSES = 700,
    parameter PA_PULSES = 30,
    parameter BAUD_RATE = 115200,
    parameter CLK_FREQ = 50_000_000
)(
    input clk, rst_n, trig_in, din,
    input en_all,
    output logic pulse_w1, pulse_w2, pulse_w3
);
    
    logic [19:0] tA, tB, tC, tD, tE, tF;
    logic [2:0] bitmask_AB, bitmask_CD, bitmask_EF;
    logic [23:0] uart_packet;
    logic rx_valid, error;
    
    uart_rx2 #(
        .BAUD_RATE(BAUD_RATE), .CLK_FREQ(CLK_FREQ)
    ) uart (
        .clk(clk), .rst_n(rst_n), .din(din), 
        .packet_out(uart_packet), .rx_valid(rx_valid)
    );
    
    regfile rfile(
        .clk(clk), .rst_n(rst_n), .rx_valid(rx_valid),
        .packet(uart_packet), .error(error),
        .tA_new(tA), .tB_new(tB), .tC_new(tC), .tD_new(tD), .tE_new(tE), .tF_new(tF),
        .bitmask_AB(bitmask_AB), .bitmask_CD(bitmask_CD), .bitmask_EF(bitmask_EF)
    );
    
    degen_core2 #(
        .N(N), .NUM_ELEMENTS(NUM_ELEMENTS), .US_PULSES(US_PULSES), .PA_PULSES(PA_PULSES)
    ) dg2 (
        .clk(clk), .rst_n(rst_n), .trig_in(trig_in), .en_all(en_all),
        .tA_in(tA), .tB_in(tB), .tC_in(tC), .tD_in(tD), .tE_in(tE), .tF_in(tF),
        .pulse_w1(pulse_w1), .pulse_w2(pulse_w2), .pulse_w3(pulse_w3),
        .bitmask_AB_in(bitmask_AB), .bitmask_CD_in(bitmask_CD), .bitmask_EF_in(bitmask_EF)
    );
    
endmodule
