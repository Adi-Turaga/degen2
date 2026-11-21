`timescale 1ns / 1ps

module posedge_detector(
    input clk, trig_in,
    output is_posedge
    );
    
    logic dff_sync1, dff_sync2, dff_sync3;
    
    // 2-FF synchronized due to async trig_in
    always_ff @(posedge clk) begin
        dff_sync1 <= trig_in;
		dff_sync2 <= dff_sync1;
        dff_sync3 <= dff_sync2;
    end 
    
    // signal has to be different before and after delay
    //assign is_posedge = trig_in & ~trig_in_delay;
	 assign is_posedge = dff_sync2 & ~dff_sync3;
    
endmodule
