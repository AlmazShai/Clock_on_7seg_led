`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:14:40 10/09/2020 
// Design Name: 
// Module Name:    top 
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
module top(
    input clk,
    input rst,
    input key1,
    input key2,
    output A,
    output B,
    output C,
    output D,
    output E,
    output F,
    output G,
    output SEL0,
    output SEL1,
    output SEL2,
    output SEL3,
    output SEL4,
    output SEL5,
    output SCLK,
    output CE,
    inout DATA
    );
	 
wire ready, send;
wire [7:0] adress, data;

I2C_serial I2C_serial1 (
		.clk(clk),
		.rst(rst),
		.adress_in(adress),
		.data_in(data),
		.send(send),
		.ready(ready),
		.sclk(SCLK),
		.ce(CE),
		.data(DATA),
		.data_out()
);

set_get_time set_get_time1(
	 .clk(clk),
    .rst(rst),
	 .key1_pr(1'b1),
	 .ready(ready),
	 .adress(adress),
	 .data(data),
	 .send(send)
);

endmodule
