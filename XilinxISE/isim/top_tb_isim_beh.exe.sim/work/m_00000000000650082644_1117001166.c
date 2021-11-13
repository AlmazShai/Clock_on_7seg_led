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
static const char *ng0 = "E:/projects/Xilinx/OMDAZZ_project_RTC/set_get_time.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {10U, 0U};
static unsigned int ng12[] = {11U, 0U};
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {13U, 0U};
static unsigned int ng15[] = {14U, 0U};
static unsigned int ng16[] = {15U, 0U};
static unsigned int ng17[] = {16U, 0U};
static unsigned int ng18[] = {17U, 0U};
static unsigned int ng19[] = {18U, 0U};
static unsigned int ng20[] = {19U, 0U};
static unsigned int ng21[] = {20U, 0U};
static unsigned int ng22[] = {21U, 0U};
static unsigned int ng23[] = {22U, 0U};
static unsigned int ng24[] = {23U, 0U};
static unsigned int ng25[] = {24U, 0U};
static unsigned int ng26[] = {25U, 0U};
static unsigned int ng27[] = {26U, 0U};
static unsigned int ng28[] = {27U, 0U};
static unsigned int ng29[] = {28U, 0U};
static unsigned int ng30[] = {29U, 0U};
static unsigned int ng31[] = {30U, 0U};
static unsigned int ng32[] = {31U, 0U};
static unsigned int ng33[] = {32U, 0U};
static unsigned int ng34[] = {33U, 0U};
static unsigned int ng35[] = {142U, 0U};
static unsigned int ng36[] = {128U, 0U};
static unsigned int ng37[] = {130U, 0U};
static unsigned int ng38[] = {48U, 0U};
static unsigned int ng39[] = {132U, 0U};
static unsigned int ng40[] = {134U, 0U};
static unsigned int ng41[] = {136U, 0U};
static unsigned int ng42[] = {138U, 0U};
static unsigned int ng43[] = {140U, 0U};
static unsigned int ng44[] = {129U, 0U};
static unsigned int ng45[] = {0U, 255U};
static unsigned int ng46[] = {131U, 0U};
static unsigned int ng47[] = {133U, 0U};
static unsigned int ng48[] = {135U, 0U};
static unsigned int ng49[] = {137U, 0U};
static unsigned int ng50[] = {141U, 0U};



static void Always_77_0(char *t0)
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

LAB0:    t1 = (t0 + 10672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 11736);
    *((int *)t2) = 1;
    t3 = (t0 + 10704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(78, ng0);

LAB5:    xsi_set_current_line(79, ng0);
    t5 = (t0 + 5832U);
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

LAB11:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 7832);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7672);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 6, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(80, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 7672);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 6, 0LL);
    goto LAB12;

}

static void Always_85_1(char *t0)
{
    char t14[8];
    char t24[8];
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
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;

LAB0:    t1 = (t0 + 10920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 11752);
    *((int *)t2) = 1;
    t3 = (t0 + 10952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(86, ng0);

LAB5:    xsi_set_current_line(87, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 7832);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 6);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 7672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t5, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng29)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng30)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng31)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng32)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng33)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng34)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB73;

LAB74:
LAB76:
LAB75:    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB77:    goto LAB2;

LAB7:    xsi_set_current_line(90, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 7832);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 6);
    goto LAB77;

LAB9:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 7832);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB77;

LAB11:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 6152U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB80:    goto LAB77;

LAB13:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 7832);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB77;

LAB15:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 6152U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB83:    goto LAB77;

LAB17:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 7832);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB77;

LAB19:    xsi_set_current_line(108, ng0);
    t3 = (t0 + 6152U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB86:    goto LAB77;

LAB21:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 7832);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB77;

LAB23:    xsi_set_current_line(115, ng0);
    t3 = (t0 + 6152U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB89:    goto LAB77;

LAB25:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 7832);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB77;

LAB27:    xsi_set_current_line(122, ng0);
    t3 = (t0 + 6152U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB92:    goto LAB77;

LAB29:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 7832);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB77;

LAB31:    xsi_set_current_line(129, ng0);
    t3 = (t0 + 6152U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB95:    goto LAB77;

LAB33:    xsi_set_current_line(134, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 7832);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB77;

LAB35:    xsi_set_current_line(136, ng0);
    t3 = (t0 + 6152U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB98:    goto LAB77;

LAB37:    xsi_set_current_line(141, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 7832);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB77;

LAB39:    xsi_set_current_line(143, ng0);
    t3 = (t0 + 6152U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB101:    goto LAB77;

LAB41:    xsi_set_current_line(148, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 7832);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB77;

LAB43:    xsi_set_current_line(150, ng0);
    t3 = (t0 + 6152U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB102;

LAB103:    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB104:    goto LAB77;

LAB45:    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 7832);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB77;

LAB47:    xsi_set_current_line(157, ng0);
    t3 = (t0 + 6152U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB105;

LAB106:    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB107:    goto LAB77;

LAB49:    xsi_set_current_line(162, ng0);
    t3 = ((char*)((ng23)));
    t5 = (t0 + 7832);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB77;

LAB51:    xsi_set_current_line(164, ng0);
    t3 = (t0 + 6152U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB108;

LAB109:    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB110:    goto LAB77;

LAB53:    xsi_set_current_line(169, ng0);
    t3 = ((char*)((ng25)));
    t5 = (t0 + 7832);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB77;

LAB55:    xsi_set_current_line(171, ng0);
    t3 = (t0 + 6152U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB113:    goto LAB77;

LAB57:    xsi_set_current_line(176, ng0);
    t3 = ((char*)((ng27)));
    t5 = (t0 + 7832);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB77;

LAB59:    xsi_set_current_line(178, ng0);
    t3 = (t0 + 6152U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB114;

LAB115:    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB116:    goto LAB77;

LAB61:    xsi_set_current_line(183, ng0);
    t3 = ((char*)((ng29)));
    t5 = (t0 + 7832);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB77;

LAB63:    xsi_set_current_line(185, ng0);
    t3 = (t0 + 6152U);
    t5 = *((char **)t3);
    t3 = (t0 + 5992U);
    t7 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t8 = (t7 + 4);
    t15 = (t3 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t15);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB120;

LAB117:    if (t20 != 0)
        goto LAB119;

LAB118:    *((unsigned int *)t14) = 1;

LAB120:    t25 = *((unsigned int *)t5);
    t26 = *((unsigned int *)t14);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t5 + 4);
    t29 = (t14 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB121;

LAB122:
LAB123:    t56 = (t24 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t24);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB124;

LAB125:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 6152U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB127;

LAB128:    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB129:
LAB126:    goto LAB77;

LAB65:    xsi_set_current_line(192, ng0);
    t3 = (t0 + 6312U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB130;

LAB131:    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng30)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB132:    goto LAB77;

LAB67:    xsi_set_current_line(197, ng0);
    t3 = ((char*)((ng28)));
    t5 = (t0 + 7832);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB77;

LAB69:    xsi_set_current_line(199, ng0);
    t3 = (t0 + 6152U);
    t5 = *((char **)t3);
    t3 = (t0 + 6312U);
    t7 = *((char **)t3);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t14) = t11;
    t3 = (t5 + 4);
    t8 = (t7 + 4);
    t15 = (t14 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t8);
    t16 = (t12 | t13);
    *((unsigned int *)t15) = t16;
    t17 = *((unsigned int *)t15);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB133;

LAB134:
LAB135:    t29 = (t14 + 4);
    t42 = *((unsigned int *)t29);
    t43 = (~(t42));
    t44 = *((unsigned int *)t14);
    t45 = (t44 & t43);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB136;

LAB137:    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng32)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB138:    goto LAB77;

LAB71:    xsi_set_current_line(204, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 7832);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB77;

LAB73:    xsi_set_current_line(206, ng0);
    t3 = (t0 + 6152U);
    t5 = *((char **)t3);
    t3 = (t0 + 6312U);
    t7 = *((char **)t3);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t14) = t11;
    t3 = (t5 + 4);
    t8 = (t7 + 4);
    t15 = (t14 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t8);
    t16 = (t12 | t13);
    *((unsigned int *)t15) = t16;
    t17 = *((unsigned int *)t15);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB139;

LAB140:
LAB141:    t29 = (t14 + 4);
    t42 = *((unsigned int *)t29);
    t43 = (~(t42));
    t44 = *((unsigned int *)t14);
    t45 = (t44 & t43);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB142;

LAB143:    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 7832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB144:    goto LAB77;

LAB78:    xsi_set_current_line(95, ng0);
    t7 = ((char*)((ng4)));
    t8 = (t0 + 7832);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 6);
    goto LAB80;

LAB81:    xsi_set_current_line(102, ng0);
    t7 = ((char*)((ng6)));
    t8 = (t0 + 7832);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 6);
    goto LAB83;

LAB84:    xsi_set_current_line(109, ng0);
    t7 = ((char*)((ng8)));
    t8 = (t0 + 7832);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 6);
    goto LAB86;

LAB87:    xsi_set_current_line(116, ng0);
    t7 = ((char*)((ng10)));
    t8 = (t0 + 7832);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 6);
    goto LAB89;

LAB90:    xsi_set_current_line(123, ng0);
    t7 = ((char*)((ng12)));
    t8 = (t0 + 7832);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 6);
    goto LAB92;

LAB93:    xsi_set_current_line(130, ng0);
    t7 = ((char*)((ng14)));
    t8 = (t0 + 7832);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 6);
    goto LAB95;

LAB96:    xsi_set_current_line(137, ng0);
    t7 = ((char*)((ng16)));
    t8 = (t0 + 7832);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 6);
    goto LAB98;

LAB99:    xsi_set_current_line(144, ng0);
    t7 = ((char*)((ng18)));
    t8 = (t0 + 7832);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 6);
    goto LAB101;

LAB102:    xsi_set_current_line(151, ng0);
    t7 = ((char*)((ng20)));
    t8 = (t0 + 7832);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 6);
    goto LAB104;

LAB105:    xsi_set_current_line(158, ng0);
    t7 = ((char*)((ng22)));
    t8 = (t0 + 7832);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 6);
    goto LAB107;

LAB108:    xsi_set_current_line(165, ng0);
    t7 = ((char*)((ng24)));
    t8 = (t0 + 7832);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 6);
    goto LAB110;

LAB111:    xsi_set_current_line(172, ng0);
    t7 = ((char*)((ng26)));
    t8 = (t0 + 7832);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 6);
    goto LAB113;

LAB114:    xsi_set_current_line(179, ng0);
    t7 = ((char*)((ng28)));
    t8 = (t0 + 7832);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 6);
    goto LAB116;

LAB119:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB120;

LAB121:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t5 + 4);
    t39 = (t14 + 4);
    t40 = *((unsigned int *)t5);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t14);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB123;

LAB124:    xsi_set_current_line(186, ng0);
    t62 = ((char*)((ng18)));
    t63 = (t0 + 7832);
    xsi_vlogvar_assign_value(t63, t62, 0, 0, 6);
    goto LAB126;

LAB127:    xsi_set_current_line(188, ng0);
    t5 = ((char*)((ng30)));
    t7 = (t0 + 7832);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 6);
    goto LAB129;

LAB130:    xsi_set_current_line(193, ng0);
    t7 = ((char*)((ng31)));
    t8 = (t0 + 7832);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 6);
    goto LAB132;

LAB133:    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t19 | t20);
    t23 = (t5 + 4);
    t28 = (t7 + 4);
    t21 = *((unsigned int *)t5);
    t22 = (~(t21));
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t31 = (~(t27));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t48 = (t22 & t26);
    t49 = (t31 & t33);
    t34 = (~(t48));
    t35 = (~(t49));
    t36 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t36 & t34);
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t40 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t40 & t34);
    t41 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t41 & t35);
    goto LAB135;

LAB136:    xsi_set_current_line(200, ng0);
    t30 = ((char*)((ng33)));
    t38 = (t0 + 7832);
    xsi_vlogvar_assign_value(t38, t30, 0, 0, 6);
    goto LAB138;

LAB139:    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t19 | t20);
    t23 = (t5 + 4);
    t28 = (t7 + 4);
    t21 = *((unsigned int *)t5);
    t22 = (~(t21));
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t31 = (~(t27));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t48 = (t22 & t26);
    t49 = (t31 & t33);
    t34 = (~(t48));
    t35 = (~(t49));
    t36 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t36 & t34);
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t40 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t40 & t34);
    t41 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t41 & t35);
    goto LAB141;

LAB142:    xsi_set_current_line(207, ng0);
    t30 = ((char*)((ng34)));
    t38 = (t0 + 7832);
    xsi_vlogvar_assign_value(t38, t30, 0, 0, 6);
    goto LAB144;

}

static void Always_215_2(char *t0)
{
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

LAB0:    t1 = (t0 + 11168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(215, ng0);
    t2 = (t0 + 11768);
    *((int *)t2) = 1;
    t3 = (t0 + 11200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(216, ng0);
    t4 = (t0 + 7672);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t7, 6);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng22)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng23)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng24)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng25)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng26)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng27)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng28)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng29)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng30)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t8 == 1)
        goto LAB64;

LAB65:
LAB67:
LAB66:    xsi_set_current_line(398, ng0);

LAB99:    xsi_set_current_line(399, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7192);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(400, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(401, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB68:    goto LAB2;

LAB6:    xsi_set_current_line(218, ng0);

LAB69:    xsi_set_current_line(219, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 7192);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 8);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB8:    xsi_set_current_line(224, ng0);

LAB70:    xsi_set_current_line(225, ng0);
    t3 = ((char*)((ng35)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng36)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB10:    xsi_set_current_line(230, ng0);

LAB71:    xsi_set_current_line(231, ng0);
    t3 = ((char*)((ng35)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng36)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB12:    xsi_set_current_line(236, ng0);

LAB72:    xsi_set_current_line(237, ng0);
    t3 = ((char*)((ng36)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB14:    xsi_set_current_line(242, ng0);

LAB73:    xsi_set_current_line(243, ng0);
    t3 = ((char*)((ng36)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(244, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB16:    xsi_set_current_line(248, ng0);

LAB74:    xsi_set_current_line(249, ng0);
    t3 = ((char*)((ng37)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(250, ng0);
    t2 = ((char*)((ng38)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(251, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB18:    xsi_set_current_line(254, ng0);

LAB75:    xsi_set_current_line(255, ng0);
    t3 = ((char*)((ng37)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(256, ng0);
    t2 = ((char*)((ng38)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(257, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB20:    xsi_set_current_line(260, ng0);

LAB76:    xsi_set_current_line(261, ng0);
    t3 = ((char*)((ng39)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(262, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(263, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB22:    xsi_set_current_line(266, ng0);

LAB77:    xsi_set_current_line(267, ng0);
    t3 = ((char*)((ng39)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(268, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(269, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB24:    xsi_set_current_line(272, ng0);

LAB78:    xsi_set_current_line(273, ng0);
    t3 = ((char*)((ng40)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(274, ng0);
    t2 = ((char*)((ng38)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(275, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB26:    xsi_set_current_line(278, ng0);

LAB79:    xsi_set_current_line(279, ng0);
    t3 = ((char*)((ng40)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(280, ng0);
    t2 = ((char*)((ng38)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(281, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB28:    xsi_set_current_line(284, ng0);

LAB80:    xsi_set_current_line(285, ng0);
    t3 = ((char*)((ng41)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(286, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(287, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB30:    xsi_set_current_line(290, ng0);

LAB81:    xsi_set_current_line(291, ng0);
    t3 = ((char*)((ng41)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(292, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(293, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB32:    xsi_set_current_line(296, ng0);

LAB82:    xsi_set_current_line(297, ng0);
    t3 = ((char*)((ng42)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(298, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(299, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB34:    xsi_set_current_line(302, ng0);

LAB83:    xsi_set_current_line(303, ng0);
    t3 = ((char*)((ng42)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(305, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB36:    xsi_set_current_line(308, ng0);

LAB84:    xsi_set_current_line(309, ng0);
    t3 = ((char*)((ng43)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(310, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(311, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB38:    xsi_set_current_line(314, ng0);

LAB85:    xsi_set_current_line(315, ng0);
    t3 = ((char*)((ng43)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(316, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(317, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB40:    xsi_set_current_line(320, ng0);

LAB86:    xsi_set_current_line(321, ng0);
    t3 = ((char*)((ng44)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(322, ng0);
    t2 = ((char*)((ng45)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(323, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB42:    xsi_set_current_line(326, ng0);

LAB87:    xsi_set_current_line(327, ng0);
    t3 = ((char*)((ng44)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(328, ng0);
    t2 = ((char*)((ng45)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(329, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB44:    xsi_set_current_line(332, ng0);

LAB88:    xsi_set_current_line(333, ng0);
    t3 = ((char*)((ng46)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(334, ng0);
    t2 = ((char*)((ng45)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(335, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB46:    xsi_set_current_line(338, ng0);

LAB89:    xsi_set_current_line(339, ng0);
    t3 = ((char*)((ng46)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(340, ng0);
    t2 = ((char*)((ng45)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(341, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB48:    xsi_set_current_line(344, ng0);

LAB90:    xsi_set_current_line(345, ng0);
    t3 = ((char*)((ng47)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(346, ng0);
    t2 = ((char*)((ng45)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(347, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB50:    xsi_set_current_line(350, ng0);

LAB91:    xsi_set_current_line(351, ng0);
    t3 = ((char*)((ng47)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(352, ng0);
    t2 = ((char*)((ng45)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(353, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB52:    xsi_set_current_line(356, ng0);

LAB92:    xsi_set_current_line(357, ng0);
    t3 = ((char*)((ng48)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(358, ng0);
    t2 = ((char*)((ng45)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(359, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB54:    xsi_set_current_line(362, ng0);

LAB93:    xsi_set_current_line(363, ng0);
    t3 = ((char*)((ng48)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(364, ng0);
    t2 = ((char*)((ng45)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(365, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB56:    xsi_set_current_line(368, ng0);

LAB94:    xsi_set_current_line(369, ng0);
    t3 = ((char*)((ng49)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(370, ng0);
    t2 = ((char*)((ng45)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(371, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB58:    xsi_set_current_line(374, ng0);

LAB95:    xsi_set_current_line(375, ng0);
    t3 = ((char*)((ng49)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(376, ng0);
    t2 = ((char*)((ng45)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(377, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB60:    xsi_set_current_line(380, ng0);

LAB96:    xsi_set_current_line(381, ng0);
    t3 = ((char*)((ng50)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(382, ng0);
    t2 = ((char*)((ng45)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(383, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB62:    xsi_set_current_line(386, ng0);

LAB97:    xsi_set_current_line(387, ng0);
    t3 = ((char*)((ng47)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(388, ng0);
    t2 = ((char*)((ng45)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(389, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB64:    xsi_set_current_line(392, ng0);

LAB98:    xsi_set_current_line(393, ng0);
    t3 = ((char*)((ng40)));
    t4 = (t0 + 7192);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(394, ng0);
    t2 = ((char*)((ng45)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(395, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

}

static void Cont_405_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 11416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(405, ng0);
    t2 = (t0 + 7672);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng17)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB5;

LAB4:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t6) > *((unsigned int *)t7))
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB12:    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB13;

LAB14:    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t28, 8);

LAB21:    t29 = (t0 + 11864);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t3 + 4);
    t37 = *((unsigned int *)t3);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0);
    t42 = (t0 + 11784);
    *((int *)t42) = 1;

LAB1:    return;
LAB5:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB12;

LAB13:    t23 = ((char*)((ng2)));
    goto LAB14;

LAB15:    t28 = ((char*)((ng1)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 1, t23, 1, t28, 1);
    goto LAB21;

LAB19:    memcpy(t3, t23, 8);
    goto LAB21;

}


extern void work_m_00000000000650082644_1117001166_init()
{
	static char *pe[] = {(void *)Always_77_0,(void *)Always_85_1,(void *)Always_215_2,(void *)Cont_405_3};
	xsi_register_didat("work_m_00000000000650082644_1117001166", "isim/top_tb_isim_beh.exe.sim/work/m_00000000000650082644_1117001166.didat");
	xsi_register_executes(pe);
}
