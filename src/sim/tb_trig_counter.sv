`timescale 1ns / 1ps

module tb_trig_counter();

    parameter NUM_ANGLES = 32;
    localparam COUNTER_WIDTH = $clog2(NUM_ANGLES);

    logic clk, rst_n, en, trig_in, en_all;
    logic [COUNTER_WIDTH-1:0] US_pulses, PA_pulses;
    logic en_AB, en_CD, en_EF;
    
    trig_counter tc1_uut(
        .clk(clk), .rst_n(rst_n), .trig_in(trig_in), .en_all(en_all),
        .US_pulses(US_pulses), .PA_pulses(PA_pulses),
        .en_AB(en_AB), .en_CD(en_CD), .en_EF(en_EF)
    );
    
    task send_trigger;
        repeat(10) @(posedge clk);
        trig_in <= 1;
        //#10000;
        repeat(10) @(posedge clk);
        trig_in <= 0;
    endtask
    
    always #5 clk = ~clk;
    
    initial begin
        $monitor("Time=%0t | rst_n=%b | trig_in=%b | is_posedge=%b | State=%s | master_counter=%0d | US_pulses=%0d | PA_pulses=%0d | en_all=%b | en_AB=%b | en_CD=%b | en_EF=%b",
                 $time, rst_n, trig_in, tc1_uut.is_posedge, tc1_uut.current_state.name(), tc1_uut.master_counter,
                 US_pulses, PA_pulses, en_all, en_AB, en_CD, en_EF);
    end
    
    initial begin
        clk <= 1'b0;
        rst_n <= 1'b0;
        trig_in <= 1'b0;
        en_all <= 1'b0;
        
        US_pulses <= 5'd10;
        PA_pulses <= 5'd2;
        
        repeat(10) @(posedge clk);
        
        rst_n <= 1'b1;
        repeat(5) @(posedge clk);
        
        for(int i = 0; i < 15; i++) send_trigger;
        
        US_pulses <= 5'd5;
        PA_pulses <= 5'd1;
        en_all <= 1'b1;
        repeat(5) @(posedge clk)
        
        for(int i = 0; i < 15; i++) send_trigger;
        
        repeat(20) @(posedge clk);
        $finish; 
    end

endmodule
