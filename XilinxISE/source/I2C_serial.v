`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:07:20 10/09/2020 
// Design Name: 
// Module Name:    I2C_serial 
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
/*
Frequency = 50 MHz
period = 20 ns
frequency sclk = 200 kHz
counter = 50/200 = 250 [8 bit]
tcc = 250
negedge sclk = 124
set data = 50
get data = 200
*/
//////////////////////////////////////////////////////////////////////////////////
module I2C_serial(
		input clk,
		input rst,
		input [7:0] adress_in,
		input [7:0] data_in,
		input send,
		output reg ready,
		output reg sclk,
		output reg ce,
		inout data,
		output [7:0] data_out
    );
	 
reg [15:0] adress_data;	
reg [7:0] data_keep;
reg [7:0] count;
reg [4:0] i;
reg r_data;
reg prev_send;
wire is_out;

parameter [7:0] COUNT_MAX = 8'd249;
parameter [7:0] SCLK_NEG = 8'd124; 
parameter [7:0] SET_DATA = 8'd180;
parameter [7:0] GET_DATA = 8'd200;
parameter [7:0] CE_SET = 8'd50;
parameter [7:0] CE_HOLD = 8'd240;
	 
reg [2:0] state, nextstate;
parameter [2:0] S0 = 3'b000,
						S1 = 3'b001,
						S2 = 3'b010,
						S3 = 3'b011,
						S4 = 3'b100,
						S5 = 3'b101,
						S6 = 3'b110,
						S7 = 3'b111;

always@(posedge clk or negedge rst)
	if(!rst)
		state <= S0;
	else 
		state <= nextstate;

always@(*)
	begin
		nextstate = S0;
		case(state)
			S0: 
				if(send)
					nextstate = S1;
				else
					nextstate = S0;
			S1:
				if(count == SET_DATA)
					nextstate = S2;
				else
					nextstate = S1;
			S2: 
				if(count == COUNT_MAX)
					nextstate = S3;
				else
					nextstate = S2;
			S3:
				if(count == SCLK_NEG)
					nextstate = S4;
				else
					nextstate = S3;
			S4:
				if(isout && (i == 5'd16) )
					nextstate = S6;
				else if ((count == GET_DATA) && !isout)
					nextstate = S5;
				else if ((count == SET_DATA) && isout)
					nextstate = S2;
				else
					nextstate = S4;
			S5:
				if(i ==  5'd15)
					nextstate = S6;
				else if(count == COUNT_MAX)
					nextstate = S3;
				else
					nextstate = S5;
			S6:
				if(count == CE_SET)
					nextstate = S7;
				else 
					nextstate = S6;
			S7:
				if(count == CE_HOLD)
					nextstate = S0;
				else 
					nextstate = S7;
			default nextstate = S0;
		endcase
	end
	
always@(*)
	case(state)
		S0: 
			begin
				ce = 1'b0;
				ready = 1'b1;
				r_data = 1'b0;
				sclk =1'b0;
				data_keep = data_keep;
			end
		S1:
			begin
				ce = 1'b1;
				ready = 1'b0;
				r_data = 1'b0;
				sclk = 1'b0;
				data_keep = data_keep;
			end
		S2:
			begin
				ce = 1'b1;
				ready = 1'b0;
				r_data = adress_data[i];
				sclk = 1'b0;
				data_keep = data_keep;
			end
		S3:
			begin
				ce = 1'b1;
				ready = 1'b0;
				r_data = r_data;
				sclk = 1'b1;
				data_keep = data_keep;
			end
		S4:
			begin
				ce = 1'b1;
				ready = 1'b0;
				r_data = r_data;
				sclk = 1'b0;
				data_keep = data_keep;
			end
		S5:
			begin
				ce = 1'b1;
				ready = 1'b0;
				r_data = r_data;
				sclk = 1'b0;
				data_keep[i - 8] = data;
			end
		S6:
			begin
				ce = 1'b1;
				ready = 1'b0;
				r_data = 1'b0;
				sclk = 1'b0;
				data_keep = data_keep;
			end
		S7:
			begin
				ce = 1'b0;
				ready = 1'b0;
				r_data = 1'b0;
				sclk = 1'b0;
				data_keep = data_keep;
			end
		default
			begin
				ce = 1'b0;
				ready = 1'b1;
				r_data = 1'b0;
				r_data = 1'b0;
				sclk =1'b0;
				data_keep = data_keep;
			end
	endcase

always @(posedge clk or negedge rst)
	begin
		if(!rst | (state == S0) ) 
			begin
				count <= 0;
				i <= 5'd0;
			end
		else if(count >= COUNT_MAX)
			begin
				count <= 0;
				i <= i + 1'b1;			// add +1 every cycle
			end
		else 
			begin
				count <= count + 1'b1;
				i <= i;
			end
	end

always @(posedge clk or negedge rst)
	begin
		if(!rst)
			begin
			adress_data <= 16'b0;
			prev_send <= 1'b0;
			end
		else if ((prev_send != send) & send)		//детектируем передний фронт по send
			begin
				adress_data <= {data_in[7:0], adress_in[7:0]}; 
				prev_send <= send;
			end
		else
			begin
				adress_data <= adress_data;
				prev_send <= send;
			end
	end
	
assign data_out = ready ? data_keep : 8'd0;
assign isout = (i < 5'd8) | (!adress_data[0]) | (!(count > 8'd100) & (i == 5'd8));
assign data = isout ? r_data : 1'bZ;

endmodule
