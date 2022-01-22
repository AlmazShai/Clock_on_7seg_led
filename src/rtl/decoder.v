`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:30:31 11/06/2020 
// Design Name: 
// Module Name:    decoder 
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
module Decoder #(parameter width = 6)(
		input [width-1:0] bit0,
		input [width-1:0] bit1,
		input [width-1:0] bit2,
		input [width-1:0] bit3,
		output reg [width-1:0] A,
		output reg [width-1:0] B,
		output reg [width-1:0] C,
		output reg [width-1:0] D,
		output reg [width-1:0] E,
		output reg [width-1:0] F, 
		output reg [width-1:0] G
    );
genvar i;
generate
for(i = 0; i < width; i = i + 1)
	begin:forloop
		always @(*)
			case({bit3[i], bit2[i], bit1[i], bit0[i]})
				4'd0: {A[i], B[i], C[i], D[i], E[i], F[i], G[i]} = 7'b0000001;
				4'd1: {A[i], B[i], C[i], D[i], E[i], F[i], G[i]} = 7'b1001111;
				4'd2: {A[i], B[i], C[i], D[i], E[i], F[i], G[i]} = 7'b0010010;
				4'd3: {A[i], B[i], C[i], D[i], E[i], F[i], G[i]} = 7'b0000110;
				4'd4: {A[i], B[i], C[i], D[i], E[i], F[i], G[i]} = 7'b1001100;
				4'd5: {A[i], B[i], C[i], D[i], E[i], F[i], G[i]} = 7'b0100100;
				4'd6: {A[i], B[i], C[i], D[i], E[i], F[i], G[i]} = 7'b0100000;
				4'd7: {A[i], B[i], C[i], D[i], E[i], F[i], G[i]} = 7'b0001111;
				4'd8: {A[i], B[i], C[i], D[i], E[i], F[i], G[i]} = 7'b0000000;
				4'd9: {A[i], B[i], C[i], D[i], E[i], F[i], G[i]} = 7'b0000100;
				default {A[i], B[i], C[i], D[i], E[i], F[i], G[i]} = 7'b1111111;
			endcase
	end
endgenerate
endmodule
