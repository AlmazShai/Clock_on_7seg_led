/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/projects/Xilinx/OMDAZZ_project_RTC/I2C_serial.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {180U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {249U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {124U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {16U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {200U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {15U, 0U};
static unsigned int ng14[] = {50U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {240U, 0U};
static int ng17[] = {8, 0};
static int ng18[] = {0, 0};
static unsigned int ng19[] = {8U, 0U};
static unsigned int ng20[] = {100U, 0U};
static unsigned int ng21[] = {0U, 1U};



static void Always_68_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 7152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 9208);
    *((int *)t2) = 1;
    t3 = (t0 + 7184);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);
    t5 = (t0 + 3112U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 6232);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6072);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 3, 0LL);

LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(70, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 6072);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 3, 0LL);
    goto LAB11;

}

static void Always_74_1(char *t0)
{
    char t16[8];
    char t33[8];
    char t38[8];
    char t46[8];
    char t86[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;

LAB0:    t1 = (t0 + 7400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 9224);
    *((int *)t2) = 1;
    t3 = (t0 + 7432);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);

LAB5:    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 6232);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 6072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(79, ng0);
    t7 = (t0 + 3592U);
    t8 = *((char **)t7);
    t7 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB28:    goto LAB25;

LAB9:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 5432);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t14 = (t7 + 4);
    t15 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t14);
    t13 = *((unsigned int *)t15);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB32;

LAB29:    if (t21 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t16) = 1;

LAB32:    t25 = (t16 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB35:    goto LAB25;

LAB11:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 5432);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t14 = (t7 + 4);
    t15 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t14);
    t13 = *((unsigned int *)t15);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB39;

LAB36:    if (t21 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t16) = 1;

LAB39:    t25 = (t16 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB42:    goto LAB25;

LAB13:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 5432);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng7)));
    memset(t16, 0, 8);
    t14 = (t7 + 4);
    t15 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t14);
    t13 = *((unsigned int *)t15);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB46;

LAB43:    if (t21 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t16) = 1;

LAB46:    t25 = (t16 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB49:    goto LAB25;

LAB15:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 4232U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t3) != 0)
        goto LAB52;

LAB53:    t8 = (t16 + 4);
    t17 = *((unsigned int *)t16);
    t18 = *((unsigned int *)t8);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB54;

LAB55:    memcpy(t46, t16, 8);

LAB56:    t78 = (t46 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t46);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 5432);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng11)));
    memset(t16, 0, 8);
    t8 = (t5 + 4);
    t14 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t14);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t14);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB74;

LAB71:    if (t21 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t16) = 1;

LAB74:    memset(t33, 0, 8);
    t24 = (t16 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t24) != 0)
        goto LAB77;

LAB78:    t31 = (t33 + 4);
    t34 = *((unsigned int *)t33);
    t35 = *((unsigned int *)t31);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB79;

LAB80:    memcpy(t86, t33, 8);

LAB81:    t84 = (t86 + 4);
    t87 = *((unsigned int *)t84);
    t88 = (~(t87));
    t89 = *((unsigned int *)t86);
    t90 = (t89 & t88);
    t91 = (t90 != 0);
    if (t91 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 5432);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t8 = (t5 + 4);
    t14 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t14);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t14);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB99;

LAB96:    if (t21 != 0)
        goto LAB98;

LAB97:    *((unsigned int *)t16) = 1;

LAB99:    memset(t33, 0, 8);
    t24 = (t16 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t24) != 0)
        goto LAB102;

LAB103:    t31 = (t33 + 4);
    t34 = *((unsigned int *)t33);
    t35 = *((unsigned int *)t31);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB104;

LAB105:    memcpy(t46, t33, 8);

LAB106:    t61 = (t46 + 4);
    t79 = *((unsigned int *)t61);
    t80 = (~(t79));
    t81 = *((unsigned int *)t46);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB114;

LAB115:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB116:
LAB95:
LAB70:    goto LAB25;

LAB17:    xsi_set_current_line(108, ng0);
    t3 = (t0 + 5592);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng13)));
    memset(t16, 0, 8);
    t14 = (t7 + 4);
    t15 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t14);
    t13 = *((unsigned int *)t15);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB120;

LAB117:    if (t21 != 0)
        goto LAB119;

LAB118:    *((unsigned int *)t16) = 1;

LAB120:    t25 = (t16 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB121;

LAB122:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 5432);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t8 = (t5 + 4);
    t14 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t14);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t14);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB127;

LAB124:    if (t21 != 0)
        goto LAB126;

LAB125:    *((unsigned int *)t16) = 1;

LAB127:    t24 = (t16 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB128;

LAB129:    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 6232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB130:
LAB123:    goto LAB25;

LAB19:    xsi_set_current_line(115, ng0);
    t3 = (t0 + 5432);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng14)));
    memset(t16, 0, 8);
    t14 = (t7 + 4);
    t15 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t14);
    t13 = *((unsigned int *)t15);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB134;

LAB131:    if (t21 != 0)
        goto LAB133;

LAB132:    *((unsigned int *)t16) = 1;

LAB134:    t25 = (t16 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB135;

LAB136:    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB137:    goto LAB25;

LAB21:    xsi_set_current_line(120, ng0);
    t3 = (t0 + 5432);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng16)));
    memset(t16, 0, 8);
    t14 = (t7 + 4);
    t15 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t14);
    t13 = *((unsigned int *)t15);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB141;

LAB138:    if (t21 != 0)
        goto LAB140;

LAB139:    *((unsigned int *)t16) = 1;

LAB141:    t25 = (t16 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB142;

LAB143:    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 6232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB144:    goto LAB25;

LAB26:    xsi_set_current_line(80, ng0);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 6232);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 3);
    goto LAB28;

LAB31:    t24 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(85, ng0);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 6232);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 3);
    goto LAB35;

LAB38:    t24 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(90, ng0);
    t31 = ((char*)((ng6)));
    t32 = (t0 + 6232);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 3);
    goto LAB42;

LAB45:    t24 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(95, ng0);
    t31 = ((char*)((ng8)));
    t32 = (t0 + 6232);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 3);
    goto LAB49;

LAB50:    *((unsigned int *)t16) = 1;
    goto LAB53;

LAB52:    t7 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB53;

LAB54:    t14 = (t0 + 5592);
    t15 = (t14 + 56U);
    t24 = *((char **)t15);
    t25 = ((char*)((ng9)));
    memset(t33, 0, 8);
    t31 = (t24 + 4);
    t32 = (t25 + 4);
    t20 = *((unsigned int *)t24);
    t21 = *((unsigned int *)t25);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t31);
    t26 = *((unsigned int *)t32);
    t27 = (t23 ^ t26);
    t28 = (t22 | t27);
    t29 = *((unsigned int *)t31);
    t30 = *((unsigned int *)t32);
    t34 = (t29 | t30);
    t35 = (~(t34));
    t36 = (t28 & t35);
    if (t36 != 0)
        goto LAB60;

LAB57:    if (t34 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t33) = 1;

LAB60:    memset(t38, 0, 8);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t33);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t39) != 0)
        goto LAB63;

LAB64:    t47 = *((unsigned int *)t16);
    t48 = *((unsigned int *)t38);
    t49 = (t47 & t48);
    *((unsigned int *)t46) = t49;
    t50 = (t16 + 4);
    t51 = (t38 + 4);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB65;

LAB66:
LAB67:    goto LAB56;

LAB59:    t37 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB60;

LAB61:    *((unsigned int *)t38) = 1;
    goto LAB64;

LAB63:    t45 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB64;

LAB65:    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t46) = (t58 | t59);
    t60 = (t16 + 4);
    t61 = (t38 + 4);
    t62 = *((unsigned int *)t16);
    t63 = (~(t62));
    t64 = *((unsigned int *)t60);
    t65 = (~(t64));
    t66 = *((unsigned int *)t38);
    t67 = (~(t66));
    t68 = *((unsigned int *)t61);
    t69 = (~(t68));
    t70 = (t63 & t65);
    t71 = (t67 & t69);
    t72 = (~(t70));
    t73 = (~(t71));
    t74 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t74 & t72);
    t75 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t75 & t73);
    t76 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t76 & t72);
    t77 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t77 & t73);
    goto LAB67;

LAB68:    xsi_set_current_line(100, ng0);
    t84 = ((char*)((ng10)));
    t85 = (t0 + 6232);
    xsi_vlogvar_assign_value(t85, t84, 0, 0, 3);
    goto LAB70;

LAB73:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB74;

LAB75:    *((unsigned int *)t33) = 1;
    goto LAB78;

LAB77:    t25 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB78;

LAB79:    t32 = (t0 + 4232U);
    t37 = *((char **)t32);
    memset(t38, 0, 8);
    t32 = (t37 + 4);
    t40 = *((unsigned int *)t32);
    t41 = (~(t40));
    t42 = *((unsigned int *)t37);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB85;

LAB83:    if (*((unsigned int *)t32) == 0)
        goto LAB82;

LAB84:    t39 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t39) = 1;

LAB85:    memset(t46, 0, 8);
    t45 = (t38 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (~(t47));
    t49 = *((unsigned int *)t38);
    t53 = (t49 & t48);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t45) != 0)
        goto LAB88;

LAB89:    t55 = *((unsigned int *)t33);
    t56 = *((unsigned int *)t46);
    t57 = (t55 & t56);
    *((unsigned int *)t86) = t57;
    t51 = (t33 + 4);
    t52 = (t46 + 4);
    t60 = (t86 + 4);
    t58 = *((unsigned int *)t51);
    t59 = *((unsigned int *)t52);
    t62 = (t58 | t59);
    *((unsigned int *)t60) = t62;
    t63 = *((unsigned int *)t60);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB90;

LAB91:
LAB92:    goto LAB81;

LAB82:    *((unsigned int *)t38) = 1;
    goto LAB85;

LAB86:    *((unsigned int *)t46) = 1;
    goto LAB89;

LAB88:    t50 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB89;

LAB90:    t65 = *((unsigned int *)t86);
    t66 = *((unsigned int *)t60);
    *((unsigned int *)t86) = (t65 | t66);
    t61 = (t33 + 4);
    t78 = (t46 + 4);
    t67 = *((unsigned int *)t33);
    t68 = (~(t67));
    t69 = *((unsigned int *)t61);
    t72 = (~(t69));
    t73 = *((unsigned int *)t46);
    t74 = (~(t73));
    t75 = *((unsigned int *)t78);
    t76 = (~(t75));
    t6 = (t68 & t72);
    t70 = (t74 & t76);
    t77 = (~(t6));
    t79 = (~(t70));
    t80 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t80 & t77);
    t81 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t81 & t79);
    t82 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t82 & t77);
    t83 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t83 & t79);
    goto LAB92;

LAB93:    xsi_set_current_line(102, ng0);
    t85 = ((char*)((ng12)));
    t92 = (t0 + 6232);
    xsi_vlogvar_assign_value(t92, t85, 0, 0, 3);
    goto LAB95;

LAB98:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB99;

LAB100:    *((unsigned int *)t33) = 1;
    goto LAB103;

LAB102:    t25 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB103;

LAB104:    t32 = (t0 + 4232U);
    t37 = *((char **)t32);
    memset(t38, 0, 8);
    t32 = (t37 + 4);
    t40 = *((unsigned int *)t32);
    t41 = (~(t40));
    t42 = *((unsigned int *)t37);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t32) != 0)
        goto LAB109;

LAB110:    t47 = *((unsigned int *)t33);
    t48 = *((unsigned int *)t38);
    t49 = (t47 & t48);
    *((unsigned int *)t46) = t49;
    t45 = (t33 + 4);
    t50 = (t38 + 4);
    t51 = (t46 + 4);
    t53 = *((unsigned int *)t45);
    t54 = *((unsigned int *)t50);
    t55 = (t53 | t54);
    *((unsigned int *)t51) = t55;
    t56 = *((unsigned int *)t51);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB111;

LAB112:
LAB113:    goto LAB106;

LAB107:    *((unsigned int *)t38) = 1;
    goto LAB110;

LAB109:    t39 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB110;

LAB111:    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t46) = (t58 | t59);
    t52 = (t33 + 4);
    t60 = (t38 + 4);
    t62 = *((unsigned int *)t33);
    t63 = (~(t62));
    t64 = *((unsigned int *)t52);
    t65 = (~(t64));
    t66 = *((unsigned int *)t38);
    t67 = (~(t66));
    t68 = *((unsigned int *)t60);
    t69 = (~(t68));
    t6 = (t63 & t65);
    t70 = (t67 & t69);
    t72 = (~(t6));
    t73 = (~(t70));
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t75 & t73);
    t76 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t76 & t72);
    t77 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t77 & t73);
    goto LAB113;

LAB114:    xsi_set_current_line(104, ng0);
    t78 = ((char*)((ng4)));
    t84 = (t0 + 6232);
    xsi_vlogvar_assign_value(t84, t78, 0, 0, 3);
    goto LAB116;

LAB119:    t24 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB120;

LAB121:    xsi_set_current_line(109, ng0);
    t31 = ((char*)((ng10)));
    t32 = (t0 + 6232);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 3);
    goto LAB123;

LAB126:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB127;

LAB128:    xsi_set_current_line(111, ng0);
    t25 = ((char*)((ng6)));
    t31 = (t0 + 6232);
    xsi_vlogvar_assign_value(t31, t25, 0, 0, 3);
    goto LAB130;

LAB133:    t24 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB134;

LAB135:    xsi_set_current_line(116, ng0);
    t31 = ((char*)((ng15)));
    t32 = (t0 + 6232);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 3);
    goto LAB137;

LAB140:    t24 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB141;

LAB142:    xsi_set_current_line(121, ng0);
    t31 = ((char*)((ng1)));
    t32 = (t0 + 6232);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 3);
    goto LAB144;

}

static void Always_128_2(char *t0)
{
    char t11[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t16;

LAB0:    t1 = (t0 + 7648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 9240);
    *((int *)t2) = 1;
    t3 = (t0 + 7680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(129, ng0);
    t4 = (t0 + 6072);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:    xsi_set_current_line(195, ng0);

LAB35:    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 5272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5272);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);

LAB24:    goto LAB2;

LAB6:    xsi_set_current_line(131, ng0);

LAB25:    xsi_set_current_line(132, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 4952);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 5272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5272);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB24;

LAB8:    xsi_set_current_line(139, ng0);

LAB26:    xsi_set_current_line(140, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 5272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5272);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB24;

LAB10:    xsi_set_current_line(147, ng0);

LAB27:    xsi_set_current_line(148, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 5112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5112);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = (t0 + 5592);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t9, 2, t13, 5, 2);
    t14 = (t0 + 5752);
    xsi_vlogvar_assign_value(t14, t11, 0, 0, 1);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 5272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5272);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB24;

LAB12:    xsi_set_current_line(155, ng0);

LAB28:    xsi_set_current_line(156, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 5752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5752);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 5272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5272);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB24;

LAB14:    xsi_set_current_line(163, ng0);

LAB29:    xsi_set_current_line(164, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 5752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5752);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 5272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5272);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB24;

LAB16:    xsi_set_current_line(171, ng0);

LAB30:    xsi_set_current_line(172, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 5752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5752);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 3752U);
    t3 = *((char **)t2);
    t2 = (t0 + 5272);
    t4 = (t0 + 5272);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t9 = (t0 + 5592);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    t13 = ((char*)((ng17)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t12, 5, t13, 32);
    xsi_vlog_generic_convert_bit_index(t11, t7, 2, t15, 32, 2);
    t14 = (t11 + 4);
    t16 = *((unsigned int *)t14);
    t8 = (!(t16));
    if (t8 == 1)
        goto LAB31;

LAB32:    goto LAB24;

LAB18:    xsi_set_current_line(179, ng0);

LAB33:    xsi_set_current_line(180, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 5272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5272);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB24;

LAB20:    xsi_set_current_line(187, ng0);

LAB34:    xsi_set_current_line(188, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4952);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 5272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5272);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB24;

LAB31:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t11), 1);
    goto LAB32;

}

static void Always_205_3(char *t0)
{
    char t4[8];
    char t17[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;

LAB0:    t1 = (t0 + 7896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(205, ng0);
    t2 = (t0 + 9256);
    *((int *)t2) = 1;
    t3 = (t0 + 7928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(206, ng0);

LAB5:    xsi_set_current_line(207, ng0);
    t5 = (t0 + 3112U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t0 + 6072);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng1)));
    memset(t17, 0, 8);
    t18 = (t15 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB13;

LAB10:    if (t29 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t17) = 1;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = *((unsigned int *)t17);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = (t4 + 4);
    t38 = (t17 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB14;

LAB15:
LAB16:    t61 = (t33 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t33);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 5432);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB22;

LAB21:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB22;

LAB25:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB24;

LAB23:    *((unsigned int *)t4) = 1;

LAB24:    t15 = (t4 + 4);
    t7 = *((unsigned int *)t15);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(219, ng0);
    t2 = (t0 + 5432);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 8, t5, 8, t6, 8);
    t12 = (t0 + 5432);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);

LAB28:
LAB19:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB12:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB13;

LAB14:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t4 + 4);
    t48 = (t17 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t4);
    t52 = (t51 & t50);
    t53 = *((unsigned int *)t48);
    t54 = (~(t53));
    t55 = *((unsigned int *)t17);
    t56 = (t55 & t54);
    t57 = (~(t52));
    t58 = (~(t56));
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    goto LAB16;

LAB17:    xsi_set_current_line(208, ng0);

LAB20:    xsi_set_current_line(209, ng0);
    t67 = ((char*)((ng18)));
    t68 = (t0 + 5432);
    xsi_vlogvar_wait_assign_value(t68, t67, 0, 0, 8, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB19;

LAB22:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB24;

LAB26:    xsi_set_current_line(214, ng0);

LAB29:    xsi_set_current_line(215, ng0);
    t16 = ((char*)((ng18)));
    t18 = (t0 + 5432);
    xsi_vlogvar_wait_assign_value(t18, t16, 0, 0, 8, 0LL);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 5592);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 5, t5, 5, t6, 5);
    t12 = (t0 + 5592);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 5, 0LL);
    goto LAB28;

}

static void Always_222_4(char *t0)
{
    char t4[8];
    char t24[8];
    char t61[8];
    char t62[8];
    char t72[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;

LAB0:    t1 = (t0 + 8144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 9272);
    *((int *)t2) = 1;
    t3 = (t0 + 8176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(223, ng0);

LAB5:    xsi_set_current_line(224, ng0);
    t5 = (t0 + 3112U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 5912);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3592U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB15;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB17:    t20 = (t0 + 3592U);
    t23 = *((char **)t20);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t23);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t20 = (t4 + 4);
    t28 = (t23 + 4);
    t29 = (t24 + 4);
    t30 = *((unsigned int *)t20);
    t31 = *((unsigned int *)t28);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB18;

LAB19:
LAB20:    t55 = (t24 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t24);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(236, ng0);

LAB25:    xsi_set_current_line(237, ng0);
    t2 = (t0 + 5112);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 5112);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 16, 0LL);
    xsi_set_current_line(238, ng0);
    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t0 + 5912);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB23:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(225, ng0);

LAB13:    xsi_set_current_line(226, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 5112);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 16, 0LL);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB16:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB17;

LAB18:    t35 = *((unsigned int *)t24);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t24) = (t35 | t36);
    t37 = (t4 + 4);
    t38 = (t23 + 4);
    t39 = *((unsigned int *)t4);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (~(t41));
    t43 = *((unsigned int *)t23);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (~(t45));
    t47 = (t40 & t42);
    t48 = (t44 & t46);
    t49 = (~(t47));
    t50 = (~(t48));
    t51 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t51 & t49);
    t52 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t52 & t50);
    t53 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t53 & t49);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    goto LAB20;

LAB21:    xsi_set_current_line(230, ng0);

LAB24:    xsi_set_current_line(231, ng0);
    t63 = (t0 + 3272U);
    t64 = *((char **)t63);
    memset(t62, 0, 8);
    t63 = (t62 + 4);
    t65 = (t64 + 4);
    t66 = *((unsigned int *)t64);
    t67 = (t66 >> 0);
    *((unsigned int *)t62) = t67;
    t68 = *((unsigned int *)t65);
    t69 = (t68 >> 0);
    *((unsigned int *)t63) = t69;
    t70 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t70 & 255U);
    t71 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t71 & 255U);
    t73 = (t0 + 3432U);
    t74 = *((char **)t73);
    memset(t72, 0, 8);
    t73 = (t72 + 4);
    t75 = (t74 + 4);
    t76 = *((unsigned int *)t74);
    t77 = (t76 >> 0);
    *((unsigned int *)t72) = t77;
    t78 = *((unsigned int *)t75);
    t79 = (t78 >> 0);
    *((unsigned int *)t73) = t79;
    t80 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t80 & 255U);
    t81 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t81 & 255U);
    xsi_vlogtype_concat(t61, 16, 16, 2U, t72, 8, t62, 8);
    t82 = (t0 + 5112);
    xsi_vlogvar_wait_assign_value(t82, t61, 0, 0, 16, 0LL);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t0 + 5912);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    goto LAB23;

}

static void Cont_242_5(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 8392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(242, ng0);
    t2 = (t0 + 4632);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 9400);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 255U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 7);
    t39 = (t0 + 9288);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 5272);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t25 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 8, t20, 8, t25, 8);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Cont_243_6(char *t0)
{
    char t6[8];
    char t10[8];
    char t14[8];
    char t30[8];
    char t58[8];
    char t63[8];
    char t78[8];
    char t94[8];
    char t126[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    int t118;
    int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;

LAB0:    t1 = (t0 + 8640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(243, ng0);
    t2 = (t0 + 5592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng19)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB6;

LAB7:    t11 = (t0 + 5112);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 0);
    t19 = (t18 & 1);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 0);
    t22 = (t21 & 1);
    *((unsigned int *)t15) = t22;
    memset(t10, 0, 8);
    t23 = (t14 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t23) == 0)
        goto LAB9;

LAB11:    t29 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t29) = 1;

LAB12:    t31 = *((unsigned int *)t6);
    t32 = *((unsigned int *)t10);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = (t6 + 4);
    t35 = (t10 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB13;

LAB14:
LAB15:    t59 = (t0 + 5432);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng20)));
    memset(t63, 0, 8);
    t64 = (t61 + 4);
    if (*((unsigned int *)t64) != 0)
        goto LAB17;

LAB16:    t65 = (t62 + 4);
    if (*((unsigned int *)t65) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t61) > *((unsigned int *)t62))
        goto LAB18;

LAB19:    memset(t58, 0, 8);
    t67 = (t63 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t63);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t67) == 0)
        goto LAB21;

LAB23:    t73 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t73) = 1;

LAB24:    t74 = (t0 + 5592);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t77 = ((char*)((ng19)));
    memset(t78, 0, 8);
    t79 = (t76 + 4);
    t80 = (t77 + 4);
    t81 = *((unsigned int *)t76);
    t82 = *((unsigned int *)t77);
    t83 = (t81 ^ t82);
    t84 = *((unsigned int *)t79);
    t85 = *((unsigned int *)t80);
    t86 = (t84 ^ t85);
    t87 = (t83 | t86);
    t88 = *((unsigned int *)t79);
    t89 = *((unsigned int *)t80);
    t90 = (t88 | t89);
    t91 = (~(t90));
    t92 = (t87 & t91);
    if (t92 != 0)
        goto LAB28;

LAB25:    if (t90 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t78) = 1;

LAB28:    t95 = *((unsigned int *)t58);
    t96 = *((unsigned int *)t78);
    t97 = (t95 & t96);
    *((unsigned int *)t94) = t97;
    t98 = (t58 + 4);
    t99 = (t78 + 4);
    t100 = (t94 + 4);
    t101 = *((unsigned int *)t98);
    t102 = *((unsigned int *)t99);
    t103 = (t101 | t102);
    *((unsigned int *)t100) = t103;
    t104 = *((unsigned int *)t100);
    t105 = (t104 != 0);
    if (t105 == 1)
        goto LAB29;

LAB30:
LAB31:    t127 = *((unsigned int *)t30);
    t128 = *((unsigned int *)t94);
    t129 = (t127 | t128);
    *((unsigned int *)t126) = t129;
    t130 = (t30 + 4);
    t131 = (t94 + 4);
    t132 = (t126 + 4);
    t133 = *((unsigned int *)t130);
    t134 = *((unsigned int *)t131);
    t135 = (t133 | t134);
    *((unsigned int *)t132) = t135;
    t136 = *((unsigned int *)t132);
    t137 = (t136 != 0);
    if (t137 == 1)
        goto LAB32;

LAB33:
LAB34:    t154 = (t0 + 9464);
    t155 = (t154 + 56U);
    t156 = *((char **)t155);
    t157 = (t156 + 56U);
    t158 = *((char **)t157);
    memset(t158, 0, 8);
    t159 = 1U;
    t160 = t159;
    t161 = (t126 + 4);
    t162 = *((unsigned int *)t126);
    t159 = (t159 & t162);
    t163 = *((unsigned int *)t161);
    t160 = (t160 & t163);
    t164 = (t158 + 4);
    t165 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t165 | t159);
    t166 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t166 | t160);
    xsi_driver_vfirst_trans(t154, 0, 0);
    t167 = (t0 + 9304);
    *((int *)t167) = 1;

LAB1:    return;
LAB5:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t10) = 1;
    goto LAB12;

LAB13:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t6 + 4);
    t45 = (t10 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (~(t46));
    t48 = *((unsigned int *)t6);
    t49 = (t48 & t47);
    t50 = *((unsigned int *)t45);
    t51 = (~(t50));
    t52 = *((unsigned int *)t10);
    t53 = (t52 & t51);
    t54 = (~(t49));
    t55 = (~(t53));
    t56 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t56 & t54);
    t57 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t57 & t55);
    goto LAB15;

LAB17:    t66 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t63) = 1;
    goto LAB19;

LAB21:    *((unsigned int *)t58) = 1;
    goto LAB24;

LAB27:    t93 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB28;

LAB29:    t106 = *((unsigned int *)t94);
    t107 = *((unsigned int *)t100);
    *((unsigned int *)t94) = (t106 | t107);
    t108 = (t58 + 4);
    t109 = (t78 + 4);
    t110 = *((unsigned int *)t58);
    t111 = (~(t110));
    t112 = *((unsigned int *)t108);
    t113 = (~(t112));
    t114 = *((unsigned int *)t78);
    t115 = (~(t114));
    t116 = *((unsigned int *)t109);
    t117 = (~(t116));
    t118 = (t111 & t113);
    t119 = (t115 & t117);
    t120 = (~(t118));
    t121 = (~(t119));
    t122 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t122 & t120);
    t123 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t123 & t121);
    t124 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t124 & t120);
    t125 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t125 & t121);
    goto LAB31;

LAB32:    t138 = *((unsigned int *)t126);
    t139 = *((unsigned int *)t132);
    *((unsigned int *)t126) = (t138 | t139);
    t140 = (t30 + 4);
    t141 = (t94 + 4);
    t142 = *((unsigned int *)t140);
    t143 = (~(t142));
    t144 = *((unsigned int *)t30);
    t145 = (t144 & t143);
    t146 = *((unsigned int *)t141);
    t147 = (~(t146));
    t148 = *((unsigned int *)t94);
    t149 = (t148 & t147);
    t150 = (~(t145));
    t151 = (~(t149));
    t152 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t152 & t150);
    t153 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t153 & t151);
    goto LAB34;

}

static void Cont_244_7(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 8888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(244, ng0);
    t2 = (t0 + 4232U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t24 = (t0 + 9528);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 0);
    t37 = (t0 + 9320);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 5752);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    goto LAB9;

LAB10:    t23 = ((char*)((ng21)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t23, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}


extern void work_m_00000000000315147731_1702060248_init()
{
	static char *pe[] = {(void *)Always_68_0,(void *)Always_74_1,(void *)Always_128_2,(void *)Always_205_3,(void *)Always_222_4,(void *)Cont_242_5,(void *)Cont_243_6,(void *)Cont_244_7};
	xsi_register_didat("work_m_00000000000315147731_1702060248", "isim/top_tb_isim_beh.exe.sim/work/m_00000000000315147731_1702060248.didat");
	xsi_register_executes(pe);
}
