`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:06:56 11/07/2020 
// Design Name: 
// Module Name:    button_debouncer 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module button_debouncer
	#(	parameter CNT = 16)
(
    input clk,
    input rst,
    input key,
    output reg key_state,
    output reg key_down,
    output reg key_up
    );

reg [1:0] key_r;
always@(posedge clk or negedge rst)
	if(!rst)
		key_r <= 2'b00;
	else
		key_r <= {key_r[0], ~key};
		
reg [CNT-1:0] count;

wire key_change = (key_state != key_r[1]);
wire count_max = &count;

always @(posedge clk or negedge rst)
	if(!rst)
		begin
			count <= 0;
			key_state <= 0;
		end
	else if(key_change)
		begin
			count <= count + 1'b1;
			if(count_max)
				key_state <= ~key_state;
		end
	else
		count <= 0;
		
always @(posedge clk)
	begin
		key_down <= key_change & count_max & ~key_state;
		key_up <= key_change & count_max & key_state;
	end

endmodule
