`timescale 1ns / 1ps

module tb_top2 #(
    parameter integer US_pulses = 20,
    parameter integer PA_pulses = 18
);

    localparam integer CLK_FREQ   = 50_000_000;
    localparam integer BAUD_RATE  = 115200;
    localparam integer TICK       = CLK_FREQ / BAUD_RATE;
    localparam integer CLK_PERIOD = 20;

    // Delay values are in nanoseconds.
    localparam integer TRIG_LEAD_IN = 10_000;
    localparam integer TRIG_WIDTH   = 10_000;
    localparam integer US_GAP       = 500_000;
    localparam integer PA_GAP       = 20_000;

    reg clk;
    reg rst_n;
    reg trig_in;
    reg din;
    reg en_all;

    wire pulse_w1, pulse_w2, pulse_w3;

    top #(
        .BAUD_RATE(BAUD_RATE),
        .CLK_FREQ(CLK_FREQ)
    ) uut (
        .clk(clk),
        .rst_n(rst_n),
        .trig_in(trig_in),
        .din(din),
        .en_all(en_all),
        .pulse_w1(pulse_w1),
        .pulse_w2(pulse_w2),
        .pulse_w3(pulse_w3)
    );

    always #(CLK_PERIOD / 2) clk = ~clk;

    task uart_send_byte;
        input [7:0] data;
        integer i;
        begin
            din = 1'b0;
            repeat (TICK) @(negedge clk);

            for (i = 0; i < 8; i = i + 1) begin
                din = data[i];
                repeat (TICK) @(negedge clk);
            end

            din = 1'b1;
            repeat (TICK) @(negedge clk);
        end
    endtask

    task uart_send_packet;
        input [23:0] packet;
        begin
            uart_send_byte(packet[23:16]);
            uart_send_byte(packet[15:8]);
            uart_send_byte(packet[7:0]);
            repeat (TICK) @(negedge clk);
        end
    endtask

    task send_trigger;
        begin
            #TRIG_LEAD_IN;
            trig_in = 1'b1;
            #TRIG_WIDTH;
            trig_in = 1'b0;
        end
    endtask

    task send_acquisition;
        begin
            repeat (US_pulses) begin
                send_trigger;
                #US_GAP;
            end

            repeat (PA_pulses) begin
                send_trigger;
                #PA_GAP;
            end
        end
    endtask

    initial begin
        $dumpfile("top2_waveform.vcd");
        $dumpvars(0, tb_top2);

        clk     = 1'b0;
        rst_n   = 1'b0;
        din     = 1'b1;
        trig_in = 1'b0;
        en_all  = 1'b0;

        repeat (100) @(negedge clk);
        rst_n = 1'b1;
        repeat (100) @(negedge clk);

        uart_send_packet(24'h900004);  // AB mask = 100
        uart_send_packet(24'h500002);  // CD mask = 010
        uart_send_packet(24'h300001);  // EF mask = 001

        repeat (500) @(negedge clk);

        // 500 clocks at 50 MHz gives a 10 us pulse.
        uart_send_packet(24'h000000);  // tA = 0
        uart_send_packet(24'h2001F4);  // tB = 500
        uart_send_packet(24'h400000);  // tC = 0
        uart_send_packet(24'h6001F4);  // tD = 500
        uart_send_packet(24'h800000);  // tE = 0
        uart_send_packet(24'hA001F4);  // tF = 500

        repeat (2000) @(negedge clk);
        en_all = 1'b1;
        repeat (200) @(negedge clk);

        send_acquisition;

        // Enable this write if a zero mask disables EF in your RTL.
        // uart_send_packet(24'h300000);
        uart_send_packet(24'h0003E8);  // tA = 1000
        uart_send_packet(24'h2009C4);  // tB = 2500

        send_acquisition;

        // Allow the final programmed pulse time to elapse.
        repeat (5000) @(negedge clk);
        $finish;
    end

endmodule