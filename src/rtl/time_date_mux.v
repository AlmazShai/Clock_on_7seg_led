`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:09:10 11/06/2020 
// Design Name: 
// Module Name:    time_date_mux 
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
module time_date_mux(
			input rst,
			input clk,
			input [3:0] hours10,
			input [3:0]	hours,
			input [3:0] minutes10,
			input [3:0] minutes,
			input [3:0] seconds10,
			input [3:0] seconds,
			input [3:0] days10,
			input [3:0] days,
			input [3:0] mouths10,
			input [3:0] mouths,
			input [3:0] years10,
			input [3:0] years,
			input time_date_sw_en,
			input time_date_sw,
			input [2:0] blink,
			output [3:0] number0,
			output [3:0] number1,
			output [3:0] number2,
			output [3:0] number3,
			output [3:0] number4,
			output [3:0] number5
    );

reg [31:0] count;
wire mux_switch = (time_date_sw_en | time_date_sw | ~count[27]) & (time_date_sw_en | time_date_sw | count[27]) & (~time_date_sw_en | time_date_sw | count[27]);

always @(posedge clk or negedge rst)
begin
	if(!rst)
		count <= 32'b0;
	else
		count <= count + 1'b1; 
end


assign number5 = (blink[2] & count[24]) ? 4'b1111 : (mux_switch ? hours10 : days10);
assign number4 = (blink[2] & count[24]) ? 4'b1111 : (mux_switch ? hours : days);
assign number3 = (blink[1] & count[24]) ? 4'b1111 : (mux_switch ? minutes10 : mouths10);
assign number2 = (blink[1] & count[24]) ? 4'b1111 : (mux_switch ? minutes : mouths);
assign number1 = (blink[0] & count[24]) ? 4'b1111 : (mux_switch ? seconds10 : years10);
assign number0 = (blink[0] & count[24]) ? 4'b1111 : (mux_switch ? seconds : years);


endmodule
