`timescale 1ns / 1ps

module degen_core2 #(
    parameter N = 3, // number of pulse lanes
    parameter NUM_ELEMENTS = 128,
    
    parameter US_PULSES = 10,
    parameter PA_PULSES = 12
)(
    input clk, rst_n, trig_in, en_all,
    input [19:0] tA_in, tB_in, tC_in, tD_in, tE_in, tF_in,
    input [2:0] bitmask_AB_in, bitmask_CD_in, bitmask_EF_in,
    //input [COUNTER_WIDTH-1:0] US_pulses, PA_pulses,
    output logic pulse_w1, pulse_w2, pulse_w3
);

    localparam COUNTER_WIDTH = $clog2((US_PULSES > PA_PULSES) ? US_PULSES : PA_PULSES);
    localparam FRAMES_PER_ACQ = (NUM_ELEMENTS/64);   // us4R can only fire max 64 elements at once
    
    logic en_AB, en_CD, en_EF, is_posedge;
    
    trig_counter #(
        .COUNTER_WIDTH(COUNTER_WIDTH)
    ) tc1 (
        .clk(clk), .rst_n(rst_n), .trig_in(trig_in), .en_all(en_all), .is_posedge(is_posedge),
        .US_pulses(US_PULSES), .PA_pulses(PA_PULSES),
        .en_AB(en_AB), .en_CD(en_CD), .en_EF(en_EF)
    );
    
    logic active; // 1'b1 if any of the enable signals are on (core is activated)

    //logic [N-1:0] bitmask_AB, bitmask_CD, bitmask_EF;
    logic [$clog2(N)-1:0] bitmask_ptr;
    logic active_AB, active_CD, active_EF;
    logic [FRAMES_PER_ACQ-1:0] acq_counter;
    
    logic [19:0] tA, tB, tC, tD, tE, tF;
    logic [2:0] bitmask_AB, bitmask_CD, bitmask_EF;
    
    assign active = en_AB | en_CD | en_EF; // will be used for bitmask ptrs
    
    always_ff @(posedge clk) begin
        tA <= tA_in;
        tB <= tB_in;
        tC <= tC_in;
        tD <= tD_in;
        tE <= tE_in;
        tF <= tF_in;
        bitmask_AB <= bitmask_AB_in;
        bitmask_CD <= bitmask_CD_in;
        bitmask_EF <= bitmask_EF_in;
    end
    
    logic [N-1:0] N_en, N_active;
    assign N_en = en_AB + en_CD + en_EF;
    assign N_active = (N_en == 2'b11) ? 3 : 2;
    
    logic [21:0] tAB_cycle, tCD_cycle, tEF_cycle;
    assign tAB_cycle = tB + 7'd80;
    assign tCD_cycle = tD + 7'd80;
    assign tEF_cycle = tF + 7'd80;
    
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            bitmask_ptr <= '0;
            acq_counter <= '0;
        end
        else if(active && is_posedge) begin
            if(acq_counter == FRAMES_PER_ACQ-1) begin
                acq_counter <= '0;
                if(bitmask_ptr == N_active-1)
                    bitmask_ptr <= '0;
                else
                    bitmask_ptr <= bitmask_ptr + 1;
            end
            else begin
                acq_counter <= acq_counter + 1;
            end
        end
    end
    
    logic posedge_AB, posedge_CD, posedge_EF;

    assign posedge_AB = en_AB && is_posedge && bitmask_AB[bitmask_ptr];
    assign posedge_CD = en_CD && is_posedge && bitmask_CD[bitmask_ptr];
    assign posedge_EF = en_EF && is_posedge && bitmask_EF[bitmask_ptr];
    
    // AB pulse
    delay_gen_v2 dg2_AB (
        .clk(clk), .rst_n(rst_n), .en(en_AB), .is_posedge(posedge_AB), .active(active_AB),
        .t1(tA), .t2(tB), .t_cycle(tAB_cycle), .pulse(pulse_w1)
    );
    
    // CD pulse
    delay_gen_v2 dg2_CD (
        .clk(clk), .rst_n(rst_n), .en(en_CD), .is_posedge(posedge_CD), .active(active_CD),
        .t1(tC), .t2(tD), .t_cycle(tCD_cycle), .pulse(pulse_w2)
    );
    
    // EF pulse
    delay_gen_v2 dg2_EF (
        .clk(clk), .rst_n(rst_n), .en(en_EF), .is_posedge(posedge_EF), .active(active_EF),
        .t1(tE), .t2(tF), .t_cycle(tEF_cycle), .pulse(pulse_w3)
    );
    
endmodule
