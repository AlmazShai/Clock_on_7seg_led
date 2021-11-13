////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: top_synthesis.v
// /___/   /\     Timestamp: Tue Oct 20 21:14:40 2020
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim top.ngc top_synthesis.v 
// Device	: xc6slx9-2-ftg256
// Input file	: top.ngc
// Output file	: E:\projects\Xilinx\OMDAZZ_project_RTC\netgen\synthesis\top_synthesis.v
// # of Modules	: 1
// Design Name	: top
// Xilinx        : C:\Xilinx\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module top (
  clk, rst, key1, key2, A, B, C, D, E, F, G, SEL0, SEL1, SEL2, SEL3, SEL4, SEL5, SCLK, CE, DATA
);
  input clk;
  input rst;
  input key1;
  input key2;
  output A;
  output B;
  output C;
  output D;
  output E;
  output F;
  output G;
  output SEL0;
  output SEL1;
  output SEL2;
  output SEL3;
  output SEL4;
  output SEL5;
  output SCLK;
  output CE;
  inout DATA;
  wire clk_BUFGP_0;
  wire rst_IBUF_1;
  wire ready;
  wire SCLK_OBUF_3;
  wire CE_OBUF_4;
  wire \I2C_serial1/r_data_5 ;
  wire \set_get_time1/state_FSM_FFd3_7 ;
  wire send;
  wire \I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_4 ;
  wire \I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_5 ;
  wire \I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_3_f7_13 ;
  wire \I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_51 ;
  wire \I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_6 ;
  wire \I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_4_f7_16 ;
  wire \I2C_serial1/Madd_count[7]_GND_2_o_add_53_OUT_cy<5> ;
  wire \I2C_serial1/Mcount_i3 ;
  wire \I2C_serial1/Mcount_i2 ;
  wire \I2C_serial1/Mcount_i1 ;
  wire \I2C_serial1/Mcount_i ;
  wire \I2C_serial1/_n0152_inv ;
  wire \I2C_serial1/state_FSM_FFd2_31 ;
  wire \I2C_serial1/state_FSM_FFd3_32 ;
  wire \I2C_serial1/state_FSM_FFd1-In ;
  wire \I2C_serial1/state_FSM_FFd2-In ;
  wire \I2C_serial1/state_FSM_FFd3-In ;
  wire \I2C_serial1/rst_inv ;
  wire \I2C_serial1/state[2]_GND_2_o_Mux_32_o ;
  wire \I2C_serial1/i[3]_adress_data[15]_Mux_23_o ;
  wire \I2C_serial1/count[7]_PWR_2_o_equal_16_o ;
  wire \I2C_serial1/count[7]_PWR_2_o_equal_11_o ;
  wire \I2C_serial1/count[7]_GND_2_o_mux_56_OUT<0> ;
  wire \I2C_serial1/count[7]_GND_2_o_mux_56_OUT<1> ;
  wire \I2C_serial1/count[7]_GND_2_o_mux_56_OUT<2> ;
  wire \I2C_serial1/count[7]_GND_2_o_mux_56_OUT<3> ;
  wire \I2C_serial1/count[7]_GND_2_o_mux_56_OUT<4> ;
  wire \I2C_serial1/count[7]_GND_2_o_mux_56_OUT<5> ;
  wire \I2C_serial1/count[7]_GND_2_o_mux_56_OUT<6> ;
  wire \I2C_serial1/count[7]_GND_2_o_mux_56_OUT<7> ;
  wire \I2C_serial1/n0063 ;
  wire \I2C_serial1/prev_send_send_AND_26_o ;
  wire \I2C_serial1/adress_data[7] ;
  wire \I2C_serial1/adress_data[12] ;
  wire \I2C_serial1/adress_data[15] ;
  wire \I2C_serial1/state[2]_PWR_5_o_Mux_33_o ;
  wire \I2C_serial1/state_FSM_FFd1_58 ;
  wire \I2C_serial1/prev_send_59 ;
  wire \I2C_serial1/count[7]_GND_2_o_equal_19_o<7>1 ;
  wire \I2C_serial1/i[3]_PWR_2_o_equal_15_o<3>1 ;
  wire \set_get_time1/state_FSM_FFd2_62 ;
  wire \set_get_time1/state_FSM_FFd1-In ;
  wire \set_get_time1/state_FSM_FFd2-In ;
  wire \set_get_time1/state_FSM_FFd3-In ;
  wire \set_get_time1/state_FSM_FFd1_66 ;
  wire N2;
  wire N4;
  wire \I2C_serial1/state_FSM_FFd1-In1_69 ;
  wire \I2C_serial1/state_FSM_FFd1-In2_70 ;
  wire \I2C_serial1/state_FSM_FFd1-In3_71 ;
  wire \I2C_serial1/state_FSM_FFd1-In4_72 ;
  wire \I2C_serial1/state_FSM_FFd3-In1_73 ;
  wire \I2C_serial1/state_FSM_FFd3-In2_74 ;
  wire \I2C_serial1/state_FSM_FFd3-In3_75 ;
  wire N6;
  wire N8;
  wire N11;
  wire [7 : 7] adress;
  wire [4 : 4] data;
  wire [3 : 0] \I2C_serial1/i ;
  wire [7 : 0] \I2C_serial1/count ;
  MUXF7   \I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_3_f7  (
    .I0(\I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_5 ),
    .I1(\I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_4 ),
    .S(\I2C_serial1/i [2]),
    .O(\I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_3_f7_13 )
  );
  MUXF7   \I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_4_f7  (
    .I0(\I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_6 ),
    .I1(\I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_51 ),
    .S(\I2C_serial1/i [2]),
    .O(\I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_4_f7_16 )
  );
  MUXF8   \I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_2_f8  (
    .I0(\I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_4_f7_16 ),
    .I1(\I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_3_f7_13 ),
    .S(\I2C_serial1/i [3]),
    .O(\I2C_serial1/i[3]_adress_data[15]_Mux_23_o )
  );
  FDCE   \I2C_serial1/i_3  (
    .C(clk_BUFGP_0),
    .CE(\I2C_serial1/_n0152_inv ),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\I2C_serial1/Mcount_i3 ),
    .Q(\I2C_serial1/i [3])
  );
  FDCE   \I2C_serial1/i_2  (
    .C(clk_BUFGP_0),
    .CE(\I2C_serial1/_n0152_inv ),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\I2C_serial1/Mcount_i2 ),
    .Q(\I2C_serial1/i [2])
  );
  FDCE   \I2C_serial1/i_1  (
    .C(clk_BUFGP_0),
    .CE(\I2C_serial1/_n0152_inv ),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\I2C_serial1/Mcount_i1 ),
    .Q(\I2C_serial1/i [1])
  );
  FDCE   \I2C_serial1/i_0  (
    .C(clk_BUFGP_0),
    .CE(\I2C_serial1/_n0152_inv ),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\I2C_serial1/Mcount_i ),
    .Q(\I2C_serial1/i [0])
  );
  FDC   \I2C_serial1/state_FSM_FFd1  (
    .C(clk_BUFGP_0),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\I2C_serial1/state_FSM_FFd1-In ),
    .Q(\I2C_serial1/state_FSM_FFd1_58 )
  );
  FDC   \I2C_serial1/state_FSM_FFd3  (
    .C(clk_BUFGP_0),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\I2C_serial1/state_FSM_FFd3-In ),
    .Q(\I2C_serial1/state_FSM_FFd3_32 )
  );
  FDC   \I2C_serial1/state_FSM_FFd2  (
    .C(clk_BUFGP_0),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\I2C_serial1/state_FSM_FFd2-In ),
    .Q(\I2C_serial1/state_FSM_FFd2_31 )
  );
  LD   \I2C_serial1/r_data  (
    .D(\I2C_serial1/state[2]_GND_2_o_Mux_32_o ),
    .G(\I2C_serial1/state[2]_PWR_5_o_Mux_33_o ),
    .Q(\I2C_serial1/r_data_5 )
  );
  FDC   \I2C_serial1/count_7  (
    .C(clk_BUFGP_0),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\I2C_serial1/count[7]_GND_2_o_mux_56_OUT<7> ),
    .Q(\I2C_serial1/count [7])
  );
  FDC   \I2C_serial1/count_6  (
    .C(clk_BUFGP_0),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\I2C_serial1/count[7]_GND_2_o_mux_56_OUT<6> ),
    .Q(\I2C_serial1/count [6])
  );
  FDC   \I2C_serial1/count_5  (
    .C(clk_BUFGP_0),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\I2C_serial1/count[7]_GND_2_o_mux_56_OUT<5> ),
    .Q(\I2C_serial1/count [5])
  );
  FDC   \I2C_serial1/count_4  (
    .C(clk_BUFGP_0),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\I2C_serial1/count[7]_GND_2_o_mux_56_OUT<4> ),
    .Q(\I2C_serial1/count [4])
  );
  FDC   \I2C_serial1/count_3  (
    .C(clk_BUFGP_0),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\I2C_serial1/count[7]_GND_2_o_mux_56_OUT<3> ),
    .Q(\I2C_serial1/count [3])
  );
  FDC   \I2C_serial1/count_2  (
    .C(clk_BUFGP_0),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\I2C_serial1/count[7]_GND_2_o_mux_56_OUT<2> ),
    .Q(\I2C_serial1/count [2])
  );
  FDC   \I2C_serial1/count_1  (
    .C(clk_BUFGP_0),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\I2C_serial1/count[7]_GND_2_o_mux_56_OUT<1> ),
    .Q(\I2C_serial1/count [1])
  );
  FDC   \I2C_serial1/count_0  (
    .C(clk_BUFGP_0),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\I2C_serial1/count[7]_GND_2_o_mux_56_OUT<0> ),
    .Q(\I2C_serial1/count [0])
  );
  FDCE   \I2C_serial1/adress_data_15  (
    .C(clk_BUFGP_0),
    .CE(\I2C_serial1/prev_send_send_AND_26_o ),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\set_get_time1/state_FSM_FFd3_7 ),
    .Q(\I2C_serial1/adress_data[15] )
  );
  FDCE   \I2C_serial1/adress_data_12  (
    .C(clk_BUFGP_0),
    .CE(\I2C_serial1/prev_send_send_AND_26_o ),
    .CLR(\I2C_serial1/rst_inv ),
    .D(data[4]),
    .Q(\I2C_serial1/adress_data[12] )
  );
  FDCE   \I2C_serial1/adress_data_7  (
    .C(clk_BUFGP_0),
    .CE(\I2C_serial1/prev_send_send_AND_26_o ),
    .CLR(\I2C_serial1/rst_inv ),
    .D(adress[7]),
    .Q(\I2C_serial1/adress_data[7] )
  );
  FDC   \I2C_serial1/prev_send  (
    .C(clk_BUFGP_0),
    .CLR(\I2C_serial1/rst_inv ),
    .D(send),
    .Q(\I2C_serial1/prev_send_59 )
  );
  FDC   \set_get_time1/state_FSM_FFd2  (
    .C(clk_BUFGP_0),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\set_get_time1/state_FSM_FFd2-In ),
    .Q(\set_get_time1/state_FSM_FFd2_62 )
  );
  FDC   \set_get_time1/state_FSM_FFd3  (
    .C(clk_BUFGP_0),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\set_get_time1/state_FSM_FFd3-In ),
    .Q(\set_get_time1/state_FSM_FFd3_7 )
  );
  FDC   \set_get_time1/state_FSM_FFd1  (
    .C(clk_BUFGP_0),
    .CLR(\I2C_serial1/rst_inv ),
    .D(\set_get_time1/state_FSM_FFd1-In ),
    .Q(\set_get_time1/state_FSM_FFd1_66 )
  );
  LUT3 #(
    .INIT ( 8'h20 ))
  \I2C_serial1/Mmux_state[2]_GND_2_o_Mux_32_o11  (
    .I0(\I2C_serial1/i[3]_adress_data[15]_Mux_23_o ),
    .I1(\I2C_serial1/state_FSM_FFd1_58 ),
    .I2(\I2C_serial1/state_FSM_FFd2_31 ),
    .O(\I2C_serial1/state[2]_GND_2_o_Mux_32_o )
  );
  LUT2 #(
    .INIT ( 4'hE ))
  \I2C_serial1/state__n0162<0>1  (
    .I0(\I2C_serial1/state_FSM_FFd2_31 ),
    .I1(\I2C_serial1/state_FSM_FFd3_32 ),
    .O(CE_OBUF_4)
  );
  LUT3 #(
    .INIT ( 8'h01 ))
  \I2C_serial1/ready1  (
    .I0(\I2C_serial1/state_FSM_FFd3_32 ),
    .I1(\I2C_serial1/state_FSM_FFd2_31 ),
    .I2(\I2C_serial1/state_FSM_FFd1_58 ),
    .O(ready)
  );
  LUT3 #(
    .INIT ( 8'h5D ))
  \I2C_serial1/state__n0162<3>1  (
    .I0(\I2C_serial1/state_FSM_FFd2_31 ),
    .I1(\I2C_serial1/state_FSM_FFd3_32 ),
    .I2(\I2C_serial1/state_FSM_FFd1_58 ),
    .O(\I2C_serial1/state[2]_PWR_5_o_Mux_33_o )
  );
  LUT5 #(
    .INIT ( 32'h04000000 ))
  \I2C_serial1/count[7]_PWR_2_o_equal_11_o<7>1  (
    .I0(\I2C_serial1/count [1]),
    .I1(\I2C_serial1/count [2]),
    .I2(\I2C_serial1/count [6]),
    .I3(\I2C_serial1/count [7]),
    .I4(\I2C_serial1/count[7]_GND_2_o_equal_19_o<7>1 ),
    .O(\I2C_serial1/count[7]_PWR_2_o_equal_11_o )
  );
  LUT3 #(
    .INIT ( 8'h80 ))
  \I2C_serial1/i[3]_PWR_2_o_equal_15_o<3>11  (
    .I0(\I2C_serial1/i [3]),
    .I1(\I2C_serial1/i [2]),
    .I2(\I2C_serial1/i [1]),
    .O(\I2C_serial1/i[3]_PWR_2_o_equal_15_o<3>1 )
  );
  LUT5 #(
    .INIT ( 32'h006A0000 ))
  \I2C_serial1/Mmux_count[7]_GND_2_o_mux_56_OUT81  (
    .I0(\I2C_serial1/count [7]),
    .I1(\I2C_serial1/count [6]),
    .I2(\I2C_serial1/Madd_count[7]_GND_2_o_add_53_OUT_cy<5> ),
    .I3(ready),
    .I4(\I2C_serial1/n0063 ),
    .O(\I2C_serial1/count[7]_GND_2_o_mux_56_OUT<7> )
  );
  LUT5 #(
    .INIT ( 32'h006C0000 ))
  \I2C_serial1/Mmux_count[7]_GND_2_o_mux_56_OUT31  (
    .I0(\I2C_serial1/count [0]),
    .I1(\I2C_serial1/count [2]),
    .I2(\I2C_serial1/count [1]),
    .I3(ready),
    .I4(\I2C_serial1/n0063 ),
    .O(\I2C_serial1/count[7]_GND_2_o_mux_56_OUT<2> )
  );
  LUT3 #(
    .INIT ( 8'h04 ))
  \I2C_serial1/state_FSM_FFd1-In31  (
    .I0(\I2C_serial1/state_FSM_FFd3_32 ),
    .I1(\I2C_serial1/state_FSM_FFd2_31 ),
    .I2(\I2C_serial1/state_FSM_FFd1_58 ),
    .O(SCLK_OBUF_3)
  );
  LUT6 #(
    .INIT ( 64'h00006AAA00000000 ))
  \I2C_serial1/Mmux_count[7]_GND_2_o_mux_56_OUT41  (
    .I0(\I2C_serial1/count [3]),
    .I1(\I2C_serial1/count [0]),
    .I2(\I2C_serial1/count [2]),
    .I3(\I2C_serial1/count [1]),
    .I4(ready),
    .I5(\I2C_serial1/n0063 ),
    .O(\I2C_serial1/count[7]_GND_2_o_mux_56_OUT<3> )
  );
  LUT6 #(
    .INIT ( 64'hAF2A2FAAAA2A2AAA ))
  \I2C_serial1/state_FSM_FFd2-In1  (
    .I0(\I2C_serial1/state_FSM_FFd2_31 ),
    .I1(\I2C_serial1/i[3]_PWR_2_o_equal_15_o<3>1 ),
    .I2(\I2C_serial1/state_FSM_FFd1_58 ),
    .I3(\I2C_serial1/state_FSM_FFd3_32 ),
    .I4(\I2C_serial1/i [0]),
    .I5(\I2C_serial1/count[7]_PWR_2_o_equal_11_o ),
    .O(\I2C_serial1/state_FSM_FFd2-In )
  );
  LUT4 #(
    .INIT ( 16'h0008 ))
  \I2C_serial1/count[7]_GND_2_o_equal_19_o<7>11  (
    .I0(\I2C_serial1/count [5]),
    .I1(\I2C_serial1/count [4]),
    .I2(\I2C_serial1/count [3]),
    .I3(\I2C_serial1/count [0]),
    .O(\I2C_serial1/count[7]_GND_2_o_equal_19_o<7>1 )
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \I2C_serial1/Madd_count[7]_GND_2_o_add_53_OUT_cy<5>11  (
    .I0(\I2C_serial1/count [5]),
    .I1(\I2C_serial1/count [4]),
    .I2(\I2C_serial1/count [3]),
    .I3(\I2C_serial1/count [0]),
    .I4(\I2C_serial1/count [1]),
    .I5(\I2C_serial1/count [2]),
    .O(\I2C_serial1/Madd_count[7]_GND_2_o_add_53_OUT_cy<5> )
  );
  LUT5 #(
    .INIT ( 32'h14444444 ))
  \I2C_serial1/Mcount_i_xor<3>11  (
    .I0(ready),
    .I1(\I2C_serial1/i [3]),
    .I2(\I2C_serial1/i [0]),
    .I3(\I2C_serial1/i [1]),
    .I4(\I2C_serial1/i [2]),
    .O(\I2C_serial1/Mcount_i3 )
  );
  LUT3 #(
    .INIT ( 8'h26 ))
  \set_get_time1/out1  (
    .I0(\set_get_time1/state_FSM_FFd3_7 ),
    .I1(\set_get_time1/state_FSM_FFd2_62 ),
    .I2(\set_get_time1/state_FSM_FFd1_66 ),
    .O(send)
  );
  LUT3 #(
    .INIT ( 8'hBA ))
  \set_get_time1/Mmux_state[5]_GND_13_o_Select_61_o11  (
    .I0(\set_get_time1/state_FSM_FFd1_66 ),
    .I1(\set_get_time1/state_FSM_FFd3_7 ),
    .I2(\set_get_time1/state_FSM_FFd2_62 ),
    .O(data[4])
  );
  LUT3 #(
    .INIT ( 8'hFE ))
  \set_get_time1/state__n0634<7>1  (
    .I0(\set_get_time1/state_FSM_FFd2_62 ),
    .I1(\set_get_time1/state_FSM_FFd1_66 ),
    .I2(\set_get_time1/state_FSM_FFd3_7 ),
    .O(adress[7])
  );
  LUT3 #(
    .INIT ( 8'hFE ))
  \I2C_serial1/n00631_SW0  (
    .I0(\I2C_serial1/count [0]),
    .I1(\I2C_serial1/count [1]),
    .I2(\I2C_serial1/count [2]),
    .O(N2)
  );
  LUT6 #(
    .INIT ( 64'h7FFFFFFFFFFFFFFF ))
  \I2C_serial1/n00631  (
    .I0(\I2C_serial1/count [5]),
    .I1(\I2C_serial1/count [4]),
    .I2(\I2C_serial1/count [3]),
    .I3(\I2C_serial1/count [7]),
    .I4(\I2C_serial1/count [6]),
    .I5(N2),
    .O(\I2C_serial1/n0063 )
  );
  LUT3 #(
    .INIT ( 8'hF7 ))
  \I2C_serial1/count[7]_PWR_2_o_equal_16_o<7>_SW0  (
    .I0(\I2C_serial1/count [7]),
    .I1(\I2C_serial1/count [6]),
    .I2(\I2C_serial1/count [2]),
    .O(N4)
  );
  LUT6 #(
    .INIT ( 64'h0000000000008000 ))
  \I2C_serial1/count[7]_PWR_2_o_equal_16_o<7>  (
    .I0(\I2C_serial1/count [5]),
    .I1(\I2C_serial1/count [4]),
    .I2(\I2C_serial1/count [3]),
    .I3(\I2C_serial1/count [0]),
    .I4(\I2C_serial1/count [1]),
    .I5(N4),
    .O(\I2C_serial1/count[7]_PWR_2_o_equal_16_o )
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \I2C_serial1/state_FSM_FFd1-In1  (
    .I0(\I2C_serial1/count [5]),
    .I1(\I2C_serial1/count [4]),
    .I2(\I2C_serial1/count [3]),
    .I3(\I2C_serial1/count [6]),
    .I4(\I2C_serial1/count [2]),
    .I5(\I2C_serial1/state_FSM_FFd2_31 ),
    .O(\I2C_serial1/state_FSM_FFd1-In1_69 )
  );
  LUT6 #(
    .INIT ( 64'h0000000100000000 ))
  \I2C_serial1/state_FSM_FFd1-In2  (
    .I0(\I2C_serial1/count [7]),
    .I1(\I2C_serial1/count [0]),
    .I2(\I2C_serial1/count [1]),
    .I3(\I2C_serial1/state_FSM_FFd1_58 ),
    .I4(\I2C_serial1/state_FSM_FFd3_32 ),
    .I5(\I2C_serial1/state_FSM_FFd1-In1_69 ),
    .O(\I2C_serial1/state_FSM_FFd1-In2_70 )
  );
  LUT6 #(
    .INIT ( 64'h5800F8F05C0CFCFC ))
  \I2C_serial1/state_FSM_FFd1-In3  (
    .I0(\I2C_serial1/i [0]),
    .I1(\I2C_serial1/state_FSM_FFd2_31 ),
    .I2(\I2C_serial1/state_FSM_FFd3_32 ),
    .I3(\I2C_serial1/i[3]_PWR_2_o_equal_15_o<3>1 ),
    .I4(\I2C_serial1/count[7]_PWR_2_o_equal_16_o ),
    .I5(\I2C_serial1/count[7]_PWR_2_o_equal_11_o ),
    .O(\I2C_serial1/state_FSM_FFd1-In3_71 )
  );
  LUT5 #(
    .INIT ( 32'hFFFDFFFF ))
  \I2C_serial1/state_FSM_FFd1-In4  (
    .I0(\I2C_serial1/count [7]),
    .I1(\I2C_serial1/count [2]),
    .I2(\I2C_serial1/state_FSM_FFd3_32 ),
    .I3(\I2C_serial1/count [1]),
    .I4(\I2C_serial1/count [6]),
    .O(\I2C_serial1/state_FSM_FFd1-In4_72 )
  );
  LUT6 #(
    .INIT ( 64'hFFFFAAAAFFFF2202 ))
  \I2C_serial1/state_FSM_FFd1-In5  (
    .I0(\I2C_serial1/state_FSM_FFd1_58 ),
    .I1(\I2C_serial1/state_FSM_FFd2_31 ),
    .I2(\I2C_serial1/count[7]_GND_2_o_equal_19_o<7>1 ),
    .I3(\I2C_serial1/state_FSM_FFd1-In4_72 ),
    .I4(\I2C_serial1/state_FSM_FFd1-In2_70 ),
    .I5(\I2C_serial1/state_FSM_FFd1-In3_71 ),
    .O(\I2C_serial1/state_FSM_FFd1-In )
  );
  LUT5 #(
    .INIT ( 32'hFEFFFFFF ))
  \I2C_serial1/state_FSM_FFd3-In1  (
    .I0(\I2C_serial1/count [7]),
    .I1(\I2C_serial1/count [6]),
    .I2(\I2C_serial1/count [2]),
    .I3(\I2C_serial1/count [1]),
    .I4(\I2C_serial1/state_FSM_FFd1_58 ),
    .O(\I2C_serial1/state_FSM_FFd3-In1_73 )
  );
  LUT6 #(
    .INIT ( 64'h0D0C0D0C05000D0C ))
  \I2C_serial1/state_FSM_FFd3-In2  (
    .I0(\I2C_serial1/state_FSM_FFd1_58 ),
    .I1(\I2C_serial1/state_FSM_FFd3_32 ),
    .I2(\I2C_serial1/state_FSM_FFd2_31 ),
    .I3(send),
    .I4(\I2C_serial1/count[7]_GND_2_o_equal_19_o<7>1 ),
    .I5(\I2C_serial1/state_FSM_FFd3-In1_73 ),
    .O(\I2C_serial1/state_FSM_FFd3-In2_74 )
  );
  LUT5 #(
    .INIT ( 32'hFFFFAA08 ))
  \I2C_serial1/state_FSM_FFd3-In4  (
    .I0(\I2C_serial1/state_FSM_FFd2_31 ),
    .I1(\I2C_serial1/state_FSM_FFd3_32 ),
    .I2(\I2C_serial1/count[7]_PWR_2_o_equal_16_o ),
    .I3(\I2C_serial1/state_FSM_FFd3-In3_75 ),
    .I4(\I2C_serial1/state_FSM_FFd3-In2_74 ),
    .O(\I2C_serial1/state_FSM_FFd3-In )
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \I2C_serial1/Mmux_count[7]_GND_2_o_mux_56_OUT5_SW0  (
    .I0(\I2C_serial1/count [1]),
    .I1(\I2C_serial1/count [2]),
    .O(N6)
  );
  LUT6 #(
    .INIT ( 64'h00006AAA00000000 ))
  \I2C_serial1/Mmux_count[7]_GND_2_o_mux_56_OUT5  (
    .I0(\I2C_serial1/count [4]),
    .I1(\I2C_serial1/count [3]),
    .I2(\I2C_serial1/count [0]),
    .I3(N6),
    .I4(ready),
    .I5(\I2C_serial1/n0063 ),
    .O(\I2C_serial1/count[7]_GND_2_o_mux_56_OUT<4> )
  );
  LUT3 #(
    .INIT ( 8'h80 ))
  \I2C_serial1/Mmux_count[7]_GND_2_o_mux_56_OUT6_SW0  (
    .I0(\I2C_serial1/count [0]),
    .I1(\I2C_serial1/count [1]),
    .I2(\I2C_serial1/count [2]),
    .O(N8)
  );
  LUT6 #(
    .INIT ( 64'h00006AAA00000000 ))
  \I2C_serial1/Mmux_count[7]_GND_2_o_mux_56_OUT6  (
    .I0(\I2C_serial1/count [5]),
    .I1(\I2C_serial1/count [4]),
    .I2(\I2C_serial1/count [3]),
    .I3(N8),
    .I4(ready),
    .I5(\I2C_serial1/n0063 ),
    .O(\I2C_serial1/count[7]_GND_2_o_mux_56_OUT<5> )
  );
  IBUF   rst_IBUF (
    .I(rst),
    .O(rst_IBUF_1)
  );
  OBUF   DATA_OBUF (
    .I(\I2C_serial1/r_data_5 ),
    .O(DATA)
  );
  OBUF   SCLK_OBUF (
    .I(SCLK_OBUF_3),
    .O(SCLK)
  );
  OBUF   CE_OBUF (
    .I(CE_OBUF_4),
    .O(CE)
  );
  LUT4 #(
    .INIT ( 16'h9810 ))
  \I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_41  (
    .I0(\I2C_serial1/i [1]),
    .I1(\I2C_serial1/i [0]),
    .I2(\I2C_serial1/adress_data[12] ),
    .I3(\I2C_serial1/adress_data[15] ),
    .O(\I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_4 )
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  \I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_52  (
    .I0(\I2C_serial1/i [0]),
    .I1(\I2C_serial1/adress_data[12] ),
    .O(\I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_5 )
  );
  LUT3 #(
    .INIT ( 8'h80 ))
  \I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_511  (
    .I0(\I2C_serial1/i [1]),
    .I1(\I2C_serial1/adress_data[7] ),
    .I2(\I2C_serial1/i [0]),
    .O(\I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_51 )
  );
  LUT3 #(
    .INIT ( 8'hA8 ))
  \I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_61  (
    .I0(\I2C_serial1/adress_data[15] ),
    .I1(\I2C_serial1/i [1]),
    .I2(\I2C_serial1/i [0]),
    .O(\I2C_serial1/Mmux_i[3]_adress_data[15]_Mux_23_o_6 )
  );
  LUT4 #(
    .INIT ( 16'hFBFF ))
  \I2C_serial1/count[7]_PWR_2_o_equal_11_o<7>1_SW0  (
    .I0(\I2C_serial1/count [1]),
    .I1(\I2C_serial1/count [7]),
    .I2(\I2C_serial1/count [6]),
    .I3(\I2C_serial1/count [2]),
    .O(N11)
  );
  LUT6 #(
    .INIT ( 64'h480048004C0C4800 ))
  \I2C_serial1/state_FSM_FFd3-In3  (
    .I0(\I2C_serial1/i [0]),
    .I1(\I2C_serial1/state_FSM_FFd1_58 ),
    .I2(\I2C_serial1/state_FSM_FFd3_32 ),
    .I3(\I2C_serial1/i[3]_PWR_2_o_equal_15_o<3>1 ),
    .I4(\I2C_serial1/count[7]_GND_2_o_equal_19_o<7>1 ),
    .I5(N11),
    .O(\I2C_serial1/state_FSM_FFd3-In3_75 )
  );
  LUT4 #(
    .INIT ( 16'h01FF ))
  \I2C_serial1/_n0152_inv1  (
    .I0(\I2C_serial1/state_FSM_FFd1_58 ),
    .I1(\I2C_serial1/state_FSM_FFd3_32 ),
    .I2(\I2C_serial1/state_FSM_FFd2_31 ),
    .I3(\I2C_serial1/n0063 ),
    .O(\I2C_serial1/_n0152_inv )
  );
  LUT4 #(
    .INIT ( 16'h0414 ))
  \I2C_serial1/prev_send_send_AND_26_o1  (
    .I0(\I2C_serial1/prev_send_59 ),
    .I1(\set_get_time1/state_FSM_FFd3_7 ),
    .I2(\set_get_time1/state_FSM_FFd2_62 ),
    .I3(\set_get_time1/state_FSM_FFd1_66 ),
    .O(\I2C_serial1/prev_send_send_AND_26_o )
  );
  LUT4 #(
    .INIT ( 16'h5554 ))
  \I2C_serial1/Mcount_i_xor<0>11  (
    .I0(\I2C_serial1/i [0]),
    .I1(\I2C_serial1/state_FSM_FFd2_31 ),
    .I2(\I2C_serial1/state_FSM_FFd1_58 ),
    .I3(\I2C_serial1/state_FSM_FFd3_32 ),
    .O(\I2C_serial1/Mcount_i )
  );
  LUT5 #(
    .INIT ( 32'h00FEFE00 ))
  \I2C_serial1/Mcount_i_xor<1>11  (
    .I0(\I2C_serial1/state_FSM_FFd3_32 ),
    .I1(\I2C_serial1/state_FSM_FFd2_31 ),
    .I2(\I2C_serial1/state_FSM_FFd1_58 ),
    .I3(\I2C_serial1/i [0]),
    .I4(\I2C_serial1/i [1]),
    .O(\I2C_serial1/Mcount_i1 )
  );
  LUT6 #(
    .INIT ( 64'h00FEFE00FE00FE00 ))
  \I2C_serial1/Mcount_i_xor<2>11  (
    .I0(\I2C_serial1/state_FSM_FFd3_32 ),
    .I1(\I2C_serial1/state_FSM_FFd2_31 ),
    .I2(\I2C_serial1/state_FSM_FFd1_58 ),
    .I3(\I2C_serial1/i [2]),
    .I4(\I2C_serial1/i [0]),
    .I5(\I2C_serial1/i [1]),
    .O(\I2C_serial1/Mcount_i2 )
  );
  LUT6 #(
    .INIT ( 64'hAAA8FFFDAAA8AAA8 ))
  \set_get_time1/state_FSM_FFd1-In1  (
    .I0(\set_get_time1/state_FSM_FFd1_66 ),
    .I1(\I2C_serial1/state_FSM_FFd3_32 ),
    .I2(\I2C_serial1/state_FSM_FFd2_31 ),
    .I3(\I2C_serial1/state_FSM_FFd1_58 ),
    .I4(\set_get_time1/state_FSM_FFd3_7 ),
    .I5(\set_get_time1/state_FSM_FFd2_62 ),
    .O(\set_get_time1/state_FSM_FFd1-In )
  );
  LUT6 #(
    .INIT ( 64'hFFFFFFFDFFFFAAA8 ))
  \set_get_time1/state_FSM_FFd2-In1  (
    .I0(\set_get_time1/state_FSM_FFd1_66 ),
    .I1(\I2C_serial1/state_FSM_FFd3_32 ),
    .I2(\I2C_serial1/state_FSM_FFd2_31 ),
    .I3(\I2C_serial1/state_FSM_FFd1_58 ),
    .I4(\set_get_time1/state_FSM_FFd3_7 ),
    .I5(\set_get_time1/state_FSM_FFd2_62 ),
    .O(\set_get_time1/state_FSM_FFd2-In )
  );
  LUT5 #(
    .INIT ( 32'hAAA8FFFF ))
  \set_get_time1/state_FSM_FFd3-In1  (
    .I0(\set_get_time1/state_FSM_FFd3_7 ),
    .I1(\I2C_serial1/state_FSM_FFd1_58 ),
    .I2(\I2C_serial1/state_FSM_FFd3_32 ),
    .I3(\I2C_serial1/state_FSM_FFd2_31 ),
    .I4(\set_get_time1/state_FSM_FFd2_62 ),
    .O(\set_get_time1/state_FSM_FFd3-In )
  );
  LUT5 #(
    .INIT ( 32'h55540000 ))
  \I2C_serial1/Mmux_count[7]_GND_2_o_mux_56_OUT11  (
    .I0(\I2C_serial1/count [0]),
    .I1(\I2C_serial1/state_FSM_FFd1_58 ),
    .I2(\I2C_serial1/state_FSM_FFd3_32 ),
    .I3(\I2C_serial1/state_FSM_FFd2_31 ),
    .I4(\I2C_serial1/n0063 ),
    .O(\I2C_serial1/count[7]_GND_2_o_mux_56_OUT<0> )
  );
  LUT6 #(
    .INIT ( 64'h6666666000000000 ))
  \I2C_serial1/Mmux_count[7]_GND_2_o_mux_56_OUT21  (
    .I0(\I2C_serial1/count [0]),
    .I1(\I2C_serial1/count [1]),
    .I2(\I2C_serial1/state_FSM_FFd1_58 ),
    .I3(\I2C_serial1/state_FSM_FFd2_31 ),
    .I4(\I2C_serial1/state_FSM_FFd3_32 ),
    .I5(\I2C_serial1/n0063 ),
    .O(\I2C_serial1/count[7]_GND_2_o_mux_56_OUT<1> )
  );
  LUT6 #(
    .INIT ( 64'h5554AAA800000000 ))
  \I2C_serial1/Mmux_count[7]_GND_2_o_mux_56_OUT71  (
    .I0(\I2C_serial1/count [6]),
    .I1(\I2C_serial1/state_FSM_FFd1_58 ),
    .I2(\I2C_serial1/state_FSM_FFd2_31 ),
    .I3(\I2C_serial1/state_FSM_FFd3_32 ),
    .I4(\I2C_serial1/Madd_count[7]_GND_2_o_add_53_OUT_cy<5> ),
    .I5(\I2C_serial1/n0063 ),
    .O(\I2C_serial1/count[7]_GND_2_o_mux_56_OUT<6> )
  );
  BUFGP   clk_BUFGP (
    .I(clk),
    .O(clk_BUFGP_0)
  );
  INV   \I2C_serial1/rst_inv1_INV_0  (
    .I(rst_IBUF_1),
    .O(\I2C_serial1/rst_inv )
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

