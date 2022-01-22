`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:35:42 10/07/2020 
// Design Name: 
// Module Name:    switch_led 
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
module switch_led(
	 input clk,
    input [3:0] number0,
    input [3:0] number1,
    input [3:0] number2,
	 input [3:0] number3,
	 input [3:0] number4,
	 input [3:0] number5,
	 input rst,
    output A,
    output B,
    output C,
    output D,
    output E,
    output F,
    output G,
	 output DOT,
	 output reg SEL0,
    output reg SEL1,
    output reg SEL2,
    output reg SEL3,
    output reg SEL4,
    output reg SEL5
    );


parameter[2:0] S0 = 3'b000,
					S1 = 3'b001,
					S2 = 3'b010,
					S3 = 3'b011,
					S4 = 3'b100,
					S5 = 3'b101;
					
reg [2:0] state, nextstate;
reg [16:0] count = 17'b0;
wire [5:0] A_w, B_w, C_w, D_w, E_w, F_w, G_w;


Decoder #(6) decoder_0(
		.bit0({number5[0], number4[0], number3[0], number2[0], number1[0], number0[0]}),
		.bit1({number5[1], number4[1], number3[1], number2[1], number1[1], number0[1]}),
		.bit2({number5[2], number4[2], number3[2], number2[2], number1[2], number0[2]}),
		.bit3({number5[3], number4[3], number3[3], number2[3], number1[3], number0[3]}),
		.A(A_w),
		.B(B_w),
		.C(C_w),
		.D(D_w),
		.E(E_w),
		.F(F_w), 
		.G(G_w)
);


always@(posedge clk or negedge rst)
	begin
		if(!rst)
			begin
				state <= S0;
				count <= 17'b0;
			end
		else if(count[16] == 1'b1)
			begin
			count <= 17'b0;
			state <= nextstate;
			end
		else
			count <= count + 1;
	end

always@(*)
	begin
		nextstate = S0;
		case(state)
			S0: nextstate = S1;
			S1: nextstate = S2;
			S2: nextstate = S3;
			S3: nextstate = S4;
			S4: nextstate = S5;
			S5: nextstate = S0;
			default nextstate = S0;
		endcase
	end
	
always@(*)
	begin
		case(state)
			S0: {SEL0, SEL1, SEL2, SEL3, SEL4, SEL5} = 6'b111110;
			S1: {SEL0, SEL1, SEL2, SEL3, SEL4, SEL5} = 6'b111101;
			S2: {SEL0, SEL1, SEL2, SEL3, SEL4, SEL5} = 6'b111011;
			S3: {SEL0, SEL1, SEL2, SEL3, SEL4, SEL5} = 6'b110111;
			S4: {SEL0, SEL1, SEL2, SEL3, SEL4, SEL5} = 6'b101111;
			S5: {SEL0, SEL1, SEL2, SEL3, SEL4, SEL5} = 6'b011111;
			default {SEL0, SEL1, SEL2, SEL3, SEL4, SEL5} = 6'b111111;
		endcase
	end

assign A = A_w[state];
assign B = B_w[state];
assign C = C_w[state];
assign D = D_w[state];
assign E = E_w[state];
assign F = F_w[state];
assign G = G_w[state];
assign DOT = (state == S4 | state == S2) ? 1'b0 : 1'b1;

endmodule
