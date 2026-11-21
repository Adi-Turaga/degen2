`timescale 1ns / 1ps

module tb_degen_core2();
    
    parameter int N = 3;
    parameter NUM_ANGLES = 32;
    parameter US_pulses = 20;
    parameter PA_pulses = 18;
    
    localparam COUNTER_WIDTH = $clog2(NUM_ANGLES);

    logic clk, rst_n, trig_in, en_all;
    logic en_AB, en_CD, en_EF;
    logic [19:0] tA, tB, tC, tD, tE, tF;
    logic [2:0] bitmask_AB, bitmask_CD, bitmask_EF;
    //logic [COUNTER_WIDTH-1:0] US_pulses, PA_pulses;
    logic pulse_w1, pulse_w2, pulse_w3;

    task send_trigger;
        //@(posedge clk);
        #10000;
        trig_in <= 1;
        #10000;
        trig_in <= 0;
    endtask
    
    task send_US_frames();
        for(int i = 0; i < US_pulses; i++) begin
            send_trigger;
            #500000;
        end
    endtask
    
    task send_PA_frames();
        for(int i = 0; i < PA_pulses; i++) begin
            send_trigger;
            #20000;
        end
    endtask

    degen_core2 #(
        .US_pulses(US_pulses), .PA_pulses(PA_pulses)
    ) dg2 (
        .clk(clk), .rst_n(rst_n), .trig_in(trig_in), .en_all(en_all),
        .tA_in(tA), .tB_in(tB), .tC_in(tC), .tD_in(tD), .tE_in(tE), .tF_in(tF),
        .bitmask_AB_in(bitmask_AB), .bitmask_CD_in(bitmask_CD), .bitmask_EF_in(bitmask_EF),
        //.US_pulses(US_pulses), .PA_pulses(PA_pulses),
        .pulse_w1(pulse_w1), .pulse_w2(pulse_w2), .pulse_w3(pulse_w3)
    );

    // 100 MHz
    always #5 clk = ~clk;
    
    /*logic [COUNTER_WIDTH-1:0] US_t1, PA_t1;
    assign US_t1 = 5'd10;
    assign PA_t1 = 5'd12;*/
    
    /*
    initial begin
        $monitor("T=%0t | trig=%b | posedge=%b | state=%s | count=%0d | acq_counter=%0d | ptr=%0d | en_AB=%b | en_CD=%b | en_EF=%b | pAB=%b | pCD=%b | pEF=%b | w1=%b | w2=%b | w3=%b",
            $time,
            trig_in,
            dg2.tc1.is_posedge,
            dg2.tc1.current_state.name(),
            dg2.tc1.master_counter,
            dg2.acq_counter,
            dg2.bitmask_ptr,
            dg2.tc1.en_AB,
            dg2.tc1.en_CD,
            dg2.tc1.en_EF,
            dg2.posedge_AB,
            dg2.posedge_CD,
            dg2.posedge_EF,
            pulse_w1,
            pulse_w2,
            pulse_w3
        );
    end
    */

    initial begin
        $dumpfile("degen_core2_waveform.vcd");
        $dumpvars(0, "tb_degen_core2");

        clk <= 1'b0;
        trig_in <= 1'b0;
        rst_n <= 1'b0;
        en_all <= 1'b0;
        
        #100;
        
        rst_n <= 1'b1;
        
        tA <= 20'd0;
        tB <= 20'd1000;
        tC <= 20'd0;
        tD <= 20'd1000;
        tE <= 20'd0;
        tF <= 20'd1000;
        
        bitmask_AB <= 3'b001;
        bitmask_CD <= 3'b010;
        bitmask_EF <= 3'b100;
        
        /*US_pulses <= US_t1;
        PA_pulses <= PA_t1;*/
        en_all <= 1'b1;

        #10000;

        for(int i = 0; i < 2; i++) begin
            send_US_frames();
            send_PA_frames();
        end
        
        #500000;   
        $finish;
    end
endmodule