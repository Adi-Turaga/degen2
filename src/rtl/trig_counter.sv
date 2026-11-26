`timescale 1ns / 1ps

module trig_counter #(
    parameter COUNTER_WIDTH = 32
    //localparam COUNTER_WIDTH = $clog2(MAX_FRAMES)
)(
    input clk, rst_n, trig_in, en_all,
    input [COUNTER_WIDTH-1:0] US_pulses, PA_pulses,
    output logic en_AB, en_CD, en_EF, is_posedge
);

    /*
    typedef enum {
        US, // counting US trigs
        PA // counting PA trigs
    } c_states_e;
    */

    localparam US = 1'b0;
    localparam PA = 1'b1;

    logic current_state;
    
    logic [COUNTER_WIDTH-1:0] master_counter;
    
    posedge_detector pe(
        .clk(clk), .trig_in(trig_in), .is_posedge(is_posedge)
    );
    
    //c_states_e current_state;
    
    always_ff @(posedge clk) begin
        if(!rst_n) begin
            current_state <= US;
            master_counter <= '0;
            en_AB <= 1'b0;
            en_CD <= 1'b0;
            en_EF <= 1'b0;
        end 
        else if(is_posedge) begin
            master_counter <= master_counter + 1;
            case(current_state)
                US: begin
                    if(master_counter == US_pulses-1) begin
                        current_state <= PA;
                        master_counter <= '0;
                        en_AB <= 1'b1;
                        en_CD <= 1'b1;
                        en_EF <= en_all ? 1'b1 : 1'b0;
                    end
                end
                PA: begin
                    if(master_counter == PA_pulses-1) begin
                        current_state <= US;
                        master_counter <= '0;
                        en_AB <= 1'b0;
                        en_CD <= 1'b0;
                        en_EF <= 1'b0;
                    end
                end
            endcase
        end
    end
    
endmodule
