`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:51:03 10/11/2020
// Design Name:   top
// Module Name:   E:/projects/Xilinx/OMDAZZ_project_RTC/top_tb.v
// Project Name:  OMDAZZ_project_RTC
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module top_tb;

	// Inputs
	reg clk;
	reg rst;
	reg key1;
	reg key2;

	// Outputs
	wire A;
	wire B;
	wire C;
	wire D;
	wire E;
	wire F;
	wire G;
	wire SEL0;
	wire SEL1;
	wire SEL2;
	wire SEL3;
	wire SEL4;
	wire SEL5;
	wire SCLK;
	wire CE;

	// Bidirs
	wire DATA;
	
	reg check_data [100:0];
	reg [7:0] i2c_out;
	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rst(rst), 
		.key1(key1), 
		.key2(key2), 
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D), 
		.E(E), 
		.F(F), 
		.G(G), 
		.SEL0(SEL0), 
		.SEL1(SEL1), 
		.SEL2(SEL2), 
		.SEL3(SEL3), 
		.SEL4(SEL4), 
		.SEL5(SEL5), 
		.SCLK(SCLK), 
		.CE(CE), 
		.DATA(DATA)
	);

	always 
		#10 clk = ~clk;

	initial begin
		// Initialize Inputs
		//$readmemb("testvalues.tv", data_in);
		clk = 0;
		rst = 0;
		key1 = 0;
		key2 = 0;
		
		#40;
		
		rst = 1;
		

        
		// Add stimulus here

	end
      
/*	always(SCLK)
		if(SCLK)
			begin
				i2c_data[i] <= DATA;
				i <= i + 1;
			end
		else
			begin
			
			end
*/
endmodule

