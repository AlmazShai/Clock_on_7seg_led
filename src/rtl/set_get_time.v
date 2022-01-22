`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:28:28 10/09/2020 
// Design Name: 
// Module Name:    set_get_time 
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
module set_get_time(
    input clk,
    input rst,
	 input key1,
	 input key2,
	 input key3,
	 input key4,
	 input ready,
	 input [7:0] RTC_data,
	 output reg [7:0] adress,
	 output reg [7:0] data,
	 output reg send,
	 output reg [3:0] hours10,
	 output reg [3:0]	hours,
	 output reg [3:0] minutes10,
	 output reg [3:0] minutes,
	 output reg [3:0] seconds10,
	 output reg [3:0] seconds,
	 output reg [3:0] days10,
	 output reg [3:0] days,
	 output reg [3:0] mouths10,
	 output reg [3:0] mouths,
	 output reg [3:0] years10,
	 output reg [3:0] years,
	 output time_date_sw_en,
	 output time_date_sw,
	 output [2:0] blink
    );
	 
wire key1_out, key2_fall, key3_fall, key4_fall;
	 
button_debouncer #(16) button1
(
    .clk(clk),
    .rst(rst),
    .key(key1),
    .key_state(key1_out)
    );

button_debouncer #(16) button2
(
    .clk(clk),
    .rst(rst),
    .key(key2),
    .key_down(key2_fall)
    );
	 
button_debouncer #(16) button3
(
    .clk(clk),
    .rst(rst),
    .key(key3),
    .key_down(key3_fall)
    );

button_debouncer #(16) button4
(
    .clk(clk),
    .rst(rst),
    .key(key4),
    .key_down(key4_fall)
    );

parameter [5:0] //RTC init
						S0 = 6'd0,
						S1 = 6'd1,		//disable write protection
						S2 = 6'd2,		//wait for ready
						S3 = 6'd3,		//write default seconds
						S4 = 6'd4,		//wait for ready
						S5 = 6'd5,		//write default minutes
						S6 = 6'd6,		//wait for ready
						S7 = 6'd7,		//write default hour
						S8 = 6'd8,		//wait for ready
						S9 = 6'd9,		//write default date
						S10 = 6'd10,	//wait for ready
						S11 = 6'd11,	//write default mounth
						S12 = 6'd12,	//wait for ready
						S13 = 6'd13,	//write default day
						S14 = 6'd14,	//wait for ready
						S15 = 6'd15,	//write default year
						S16 = 6'd16,	//wait for ready
					//read time, date
						S17 = 6'd17,	//read seconds
						S18 = 6'd18,	//wait for ready, 
						S19 = 6'd19,	//read minutes
						S20 = 6'd20,	//wait for ready
						S21 = 6'd21,	//read hours
						S22 = 6'd22,	//wait for ready
						S23 = 6'd23,	//read date
						S24 = 6'd24,	//wait for ready
						S25 = 6'd25,	//read mounth
						S26 = 6'd26,	//wait for ready
						S27 = 6'd27,	//read year
						S28 = 6'd28,	//wait for ready, check key, if '1' move to S17 else continue
					//set time, date
						S29 = 6'd29,	//remeber date
						S30 = 6'd30,	//fix date 
						S31 = 6'd31,	//send date to RTC, remember mouths
						S32 = 6'd32,	//wait for ready, fix mouths
						S33 = 6'd33,	//send mouths, remember years
						S34 = 6'd34,	//wait for ready, fix years
						S35 = 6'd35,	//send years, remember hours
						S36 = 6'd36,	//wait for ready, fix hours
						S37 = 6'd37,	//send hours, remember minutes
						S38 = 6'd38, 	//wait for ready, fix minutes
						S39 =	6'd39,	//send minutes, remember seconds
						S40 = 6'd40,	//wait for ready, fix seconds
						S41 = 6'd41,	//send seconds
						S42 = 6'd42;	//wait for ready
						

reg [5:0] state, nextstate;
reg [3:0] trigger1_max, trigger1_min, trigger2_max, trigger2_min, counter1, counter2;

always@(posedge clk or negedge rst)
	begin
		if(!rst)
			state <= S0;
		else 
			state <= nextstate;
	end
	
always @(*)
	begin
		nextstate = S0;
		case(state)
			S0: 
				nextstate = S1;
			S1:
				nextstate = S2;
			S2:
				if(ready)
					nextstate = S3;
				else
					nextstate = S2;
			S3:
					nextstate = S4;
			S4:
				if(ready)
					nextstate = S5;
				else
					nextstate = S4;
			S5:
				nextstate = S6;
			S6:
				if(ready)
					nextstate = S7;
				else
					nextstate = S6;
			S7:
				nextstate = S8;
			S8:
				if(ready)
					nextstate = S9;
				else
					nextstate = S8;
			S9:
				nextstate = S10;
			S10:
				if(ready)
					nextstate = S11;
				else
					nextstate = S10;
			S11:
				nextstate = S12;
			S12:
				if(ready)
					nextstate = S13;
				else
					nextstate = S12;
			S13:
				nextstate = S14;
			S14:
				if(ready)
					nextstate = S15;
				else
					nextstate = S14;
			S15:
				nextstate = S16;
			S16:
				if(ready)
					nextstate = S17;
				else
					nextstate = S16;
			S17:
				nextstate = S18;
			S18:
				if(ready)
					nextstate = S19;
				else
					nextstate = S18;
			S19:
				nextstate = S20;
			S20:
				if(ready)
					nextstate = S21;
				else
					nextstate = S20;
			S21:
					nextstate = S22;
			S22:
				if(ready)
					nextstate = S23;
				else
					nextstate = S22;
			S23:
					nextstate = S24;
			S24:
				if(ready)
					nextstate = S25;
				else
					nextstate = S24;
			S25:
					nextstate = S26;
			S26:
				if(ready)
					nextstate = S27;
				else
					nextstate = S26;
			S27:
					nextstate = S28;
			S28:
				if((ready) & (key1_out == 1'b0))
					nextstate = S17;
				else if(ready)
					nextstate = S29;
				else
					nextstate = S28;
			S29:
				nextstate = S30;
			S30:
				if(key4_fall)
					nextstate = S31;
				else
					nextstate = S30;
			S31:
				nextstate = S32;
			S32:
				if(key4_fall & ready)
					nextstate = S33;
				else
					nextstate = S32;
			S33:
				nextstate = S34;
			S34:
				if(key4_fall & ready)
					nextstate = S35;
				else
					nextstate = S34;
			S35:
				nextstate = S36;
			S36:
				if(key4_fall & ready)
					nextstate = S37;
				else
					nextstate = S36;
			S37:
				nextstate = S38;
			S38:
				if(key4_fall & ready)
					nextstate = S39;
				else
					nextstate = S38;
			S39:
				nextstate = S40;
			S40:
				if(key4_fall & ready)
					nextstate = S41;
				else
					nextstate = S40;
			S41:
				nextstate = S42;
			S42:
				nextstate = S17;
				
			default nextstate = S0;
		endcase
	end
	
always@(*)
	case(state)
		S0: 
			begin
				adress = 8'h00;
				data = 8'h00;
				send = 1'b0;
			end
		S1: 
			begin
				adress = 8'h8E;
				data = 8'h00;
				send = 1'b1;
			end
		S2: 
			begin
				adress = 8'h8E;
				data = 8'h00;
				send = 1'b0;
			end
		S3: 
			begin
				adress = 8'h80;
				data = {1'b1, 3'd2, 3'd5};		//25 sec
				send = 1'b1;
			end
		S4: 
			begin
				adress = 8'h80;
				data = {1'b1, 3'd2, 3'd5};
				send = 1'b0;
			end
		S5: 
			begin
				adress = 8'h82;
				data = {1'b0, 3'd0, 4'd0};		//0 min
				send = 1'b1;
			end
		S6: 
			begin
				adress = 8'h82;
				data = {1'b0, 3'd0, 4'd0};			//0 min
				send = 1'b0;
			end
		S7: 
			begin
				adress = 8'h84;
				data = {2'b00, 2'd1, 4'd2};		//12 o'clock
				send = 1'b1;
			end
		S8: 
			begin
				adress = 8'h84;
				data = {2'b00,  2'd1, 4'd2};
				send = 1'b0;
			end
		S9: 
			begin
				adress = 8'h86;
				data = {2'b0, 2'd0, 4'd6};				//30 day
				send = 1'b1;
			end
		S10: 
			begin
				adress = 8'h86;
				data = {2'b0, 2'd0, 4'd6};		
				send = 1'b0;
			end
		S11: 
			begin
				adress = 8'h88;
				data = {3'b0, 1'b1, 4'd1};				//11 mouth
				send = 1'b1;
			end
		S12: 
			begin
				adress = 8'h88;
				data = {3'b0, 1'b1, 4'd1};				
				send = 1'b0;
			end
		S13: 
			begin
				adress = 8'h8A;
				data = {5'b0, 3'd7};					//fri
				send = 1'b1;
			end
		S14: 
			begin
				adress = 8'h8A;
				data = {5'b0, 3'd6};		
				send = 1'b0;
			end
		S15: 
			begin
				adress = 8'h8C;
				data = {4'd2, 4'd0};		//20 year
				send = 1'b1;
			end
		S16: 
			begin
				adress = 8'h8C;
				data = {4'd2, 4'd0};		
				send = 1'b0;
			end
		S17: 
			begin
				adress = 8'h81;
				data = 8'bZ;	
				send = 1'b1;
			end
		S18: 
			begin
				adress = 8'h81;
				data = 8'bZ;	
				send = 1'b0;
			end
		S19: 
			begin
				adress = 8'h83;
				data = 8'bZ;	
				send = 1'b1;
			end
		S20: 
			begin
				adress = 8'h83;
				data = 8'bZ;	
				send = 1'b0;
			end
		S21: 
			begin
				adress = 8'h85;
				data = 8'bZ;	
				send = 1'b1;
			end
		S22: 
			begin
				adress = 8'h85;
				data = 8'bZ;	
				send = 1'b0;
			end
		S23: 
			begin
				adress = 8'h87;
				data = 8'bZ;	
				send = 1'b1;
			end
		S24: 
			begin
				adress = 8'h87;
				data = 8'bZ;	
				send = 1'b0;
			end
		S25: 
			begin
				adress = 8'h89;
				data = 8'bZ;	
				send = 1'b1;
			end
		S26: 
			begin
				adress = 8'h89;
				data = 8'bZ;	
				send = 1'b0;
			end
		S27: 
			begin
				adress = 8'h8D;
				data = 8'bZ;	
				send = 1'b1;
			end
		S28: 
			begin
				adress = 8'h85;
				data = 8'bZ;	
				send = 1'b0;
			end
		S31:
			begin
				adress = 8'h86;
				data = {2'b00, {days10[1:0]}, {days[3:0]}};	
				send = 1'b1;
			end
		S32:
			begin
				adress = 8'h86;
				data = {2'b00, {days10[1:0]}, {days[3:0]}};	
				send = 1'b0;
			end
		S33:
			begin
				adress = 8'h88;
				data = {3'b0, {mouths10[0]}, {mouths[3:0]}};	
				send = 1'b1;
			end
		S34:
			begin
				adress = 8'h88;
				data = {3'b0, {mouths10[0]}, {mouths[3:0]}};	
				send = 1'b0;
			end
		S35:
			begin
				adress = 8'h8C;
				data = {{years10[3:0]}, {years[3:0]}};	
				send = 1'b1;
			end
		S36:
		begin
			adress = 8'h8C;
			data = {{years10[3:0]}, {years[3:0]}};	
			send = 1'b0;
		end
		S37:
		begin
			adress = 8'h84;
			data = {2'b00, {hours10[1:0]}, {hours[3:0]}};	
			send = 1'b1;
		end
		S38:
		begin
			adress = 8'h84;
			data = {2'b00, {hours10[1:0]}, {hours[3:0]}};	
			send = 1'b0;
		end
		S39:
		begin
			adress = 8'h82;
			data = {1'b0, {minutes10[2:0]}, {minutes[3:0]}};	
			send = 1'b1;
		end
		S40:
		begin
			adress = 8'h82;
			data = {1'b0, {minutes10[2:0]}, {minutes[3:0]}};	
			send = 1'b0;
		end
		S41:
		begin
			adress = 8'h80;
			data = {1'b1, {seconds10[2:0]}, {seconds[3:0]}};	
			send = 1'b1;
		end
		S42:
		begin
			adress = 8'h80;
			data = {1'b1, {seconds10[2:0]}, {seconds[3:0]}};	
			send = 1'b0;
		end
		
		default 
			begin
				adress = 8'h00;
				data = 8'h00;
				send = 1'b0;
			end
	endcase
	
always @(posedge clk or negedge rst)
	begin
		if(!rst)
			begin
				hours10 <= 4'b0;
				hours <= 4'b0;
				minutes10 <= 4'b0;
				minutes <= 4'b0;
				seconds10 <= 4'b0;
				seconds <= 4'b0;
				days10 <= 4'b0;
				days <= 4'b0;
				mouths10 <= 4'b0;
				mouths <= 4'b0;
				years10 <= 4'b0;
				years <= 4'b0;
			end
		else
			begin
				if (state == S19)
					 { {seconds10[2:0]}, {seconds[3:0]} } <= RTC_data[6:0];
				else if (state == S21)
						{{minutes10[2:0]}, {minutes[3:0]} } <= RTC_data[6:0];
				else if (state == S23)
						{{hours10[1:0]}, {hours[3:0]} } 		<= RTC_data[5:0];
				else if (state == S25)
						{{days10[1:0]}, 	{days[3:0]} }		<= RTC_data[5:0];
				else if (state == S27)
						{{mouths10[0]}, {mouths[3:0]} } 		<= RTC_data[4:0];
				else if (state == S17)
						{{years10[3:0]}, {years[3:0]}	}		<= RTC_data[7:0];			//не стовсем правильно, присвоит неизвесные значения после инициализции и после настройки время/дата
				
				else if (state == S30)
					begin
						days10 <= counter2;
						days <= counter1;
					end
				
				else if (state == S32)
					begin
						mouths10 <= counter2;
						mouths <= counter1;
					end
				
				else if (state == S34)
					begin
						years10 <= counter2;
						years <= counter1;
					end
				
				else if (state == S36)
					begin
						hours10 <= counter2;
						hours <= counter1;
					end
					
				else if (state == S38)
					begin
						minutes10 <= counter2;
						minutes <= counter1;
					end
					
				else if (state == S40)
					begin
						seconds10 <= counter2;
						seconds <= counter1;
					end
			end
	end

always @(posedge clk or negedge rst)
	begin
		if(!rst)
			begin
				counter1 <= 4'b0;
				counter2 <= 4'b0;
			end
		else 
			begin
				if ((state == S30) | (state == S32) | (state == S34) | (state == S36) | (state == S38) | (state == S40))
					begin
						if(key2_fall)
							if((counter1 == trigger1_max) & (counter2 == trigger2_max))		//обнуляем при достижении максимального значения
								begin
									counter1 <= trigger1_min;
									counter2 <= trigger2_min;
								end
							else if(counter1 == 4'd9)											//обнуляем при достижении 9
								begin
									counter1 <= 4'd0;
									counter2 <= counter2 + 1'b1;
								end
							else																		//инкрементируем при каждом нажатии
								counter1 <= counter1 + 1'b1;
								
						else if(key3_fall)
							if((counter1 == trigger1_min) & (counter2 == trigger2_min))					//при достижении минимального значения, задаем максимальное
								begin
									counter1 <= trigger1_max;
									counter2 <= trigger2_max;
								end
							else if(counter1 == 1'b0)											//при достижении нуля однимаем единицу у старшего разряда и задаем максимальное значение младшему
								begin
									counter1 <= 4'd9;
									counter2 <= counter2 - 1'b1;
								end
							else 																		//отниамaем единичку при каждом нажатии
								counter1 <= counter1 - 1'b1;
						else
							begin
								counter1 <= counter1;
								counter2 <= counter2;
							end
						
					end
				else if (state == S29)
					begin
						counter2 <= days10;
						counter1 <= days;
					end
				else if (state == S31)
					begin
						counter2 <= mouths10;
						counter1 <= mouths;
					end
				else if (state == S33)
					begin
						counter2 <= years10;
						counter1 <= years;
					end
				else if (state == S35)
					begin
						counter2 <= hours10;
						counter1 <= hours;
					end
				else if (state == S37)
					begin
						counter2 <= minutes10;
						counter1 <= minutes;
					end
				else if (state == S39)
					begin
						counter2 <= seconds10;
						counter1 <= seconds;
					end
				else 
					begin
						counter1 <= counter1;
						counter2 <= counter2;
					end
			end
	end
	


//Верхние и нижные границы данных для часа, минут, секунд, дня, месяца, года
always@(*)
 case(state)
	S30: 
		begin
			trigger1_max = 4'd1;
			trigger1_min = 4'd1;
			trigger2_max = 4'd3;
			trigger2_min = 4'd0;
		end
	S32:
		begin
			trigger1_max = 4'd2;
			trigger1_min = 4'd1;
			trigger2_max = 4'd1;
			trigger2_min = 4'd0;
		end
	S34:
		begin
			trigger1_max = 4'd9;
			trigger1_min = 4'd0;
			trigger2_max = 4'd9;
			trigger2_min = 4'd0;
		end
	S36:
		begin
			trigger1_max = 4'd3;
			trigger1_min = 4'd0;
			trigger2_max = 4'd2;
			trigger2_min = 4'd0;
		end
	S38:
		begin
			trigger1_max = 4'd9;
			trigger1_min = 4'd0;
			trigger2_max = 4'd5;
			trigger2_min = 4'd0;
		end
	S40:
		begin
			trigger1_max = 4'd9;
			trigger1_min = 4'd0;
			trigger2_max = 4'd5;
			trigger2_min = 4'd0;
		end
	default 
		begin	
			trigger1_max = 4'd9;
			trigger1_min = 4'd0;
			trigger2_max = 4'd9;
			trigger2_min = 4'd0;
		end
endcase
	

assign time_date_sw_en = ~((state == S29) | (state == S30) | (state == S31) | (state == S32) | (state == S33) | (state == S34)
									|(state == S35) | (state == S36) | (state == S37) | (state == S38) | (state == S39) | (state == S40)
									| (state == S41)) ;
assign time_date_sw = ((state == S36) | (state == S37) | (state == S38) | (state == S39) | (state == S40));
assign blink[2] = ((state == S29) | (state == S30) | (state == S31) | (state == S36));
assign blink[1] = ((state == S32) | (state == S33) | (state == S38));
assign blink[0] = ((state == S34) | (state == S35) | (state == S40));

endmodule
