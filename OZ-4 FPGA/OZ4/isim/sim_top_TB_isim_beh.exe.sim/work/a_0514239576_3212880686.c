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

/* This file is designed for use with ISim build 0xb869381d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Ben/Desktop/Folders/Projects/Personal/Senior Project/OZ-4/OZ-4 FPGA/OZ4/Fixed_Point_ALU.vhd";
extern char *WORK_P_0892474878;

char *work_p_0892474878_sub_2890716533_892474878(char *, char *, char *, char *, char *, char *);
char *work_p_0892474878_sub_3101241707_892474878(char *, char *, char *, char *, char *, char *);
char *work_p_0892474878_sub_3192013035_892474878(char *, char *, char *, char *, int , int );
char *work_p_0892474878_sub_3900781589_892474878(char *, char *, char *, char *);
char *work_p_0892474878_sub_3958360867_892474878(char *, char *, char *, char *, int , int , unsigned char , unsigned char );


static void work_a_0514239576_3212880686_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(26, ng0);

LAB3:    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t2 = (t0 + 4900U);
    t4 = (-(29));
    t5 = work_p_0892474878_sub_3192013035_892474878(WORK_P_0892474878, t1, t3, t2, 2, t4);
    t6 = (t0 + 2500);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 32U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 2432);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0514239576_3212880686_p_1(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(27, ng0);

LAB3:    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t2 = (t0 + 4916U);
    t4 = (-(29));
    t5 = work_p_0892474878_sub_3192013035_892474878(WORK_P_0892474878, t1, t3, t2, 2, t4);
    t6 = (t0 + 2536);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 32U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 2440);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0514239576_3212880686_p_2(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(28, ng0);

LAB3:    t2 = (t0 + 1144U);
    t3 = *((char **)t2);
    t2 = (t0 + 4980U);
    t4 = work_p_0892474878_sub_3900781589_892474878(WORK_P_0892474878, t1, t3, t2);
    t5 = (t0 + 2572);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 32U);
    xsi_driver_first_trans_fast_port(t5);

LAB2:    t10 = (t0 + 2448);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0514239576_3212880686_p_3(char *t0)
{
    char t5[16];
    char t6[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4948U);
    t7 = (t0 + 1052U);
    t8 = *((char **)t7);
    t7 = (t0 + 4964U);
    t9 = work_p_0892474878_sub_3101241707_892474878(WORK_P_0892474878, t6, t2, t1, t8, t7);
    if (2 > -29)
        goto LAB19;

LAB20:    if (-1 == -1)
        goto LAB24;

LAB25:    t11 = -29;

LAB21:    if (2 > -29)
        goto LAB26;

LAB27:    if (-1 == -1)
        goto LAB31;

LAB32:    t12 = 2;

LAB28:    t10 = ((WORK_P_0892474878) + 740U);
    t13 = *((char **)t10);
    t3 = *((unsigned char *)t13);
    t10 = ((WORK_P_0892474878) + 672U);
    t14 = *((char **)t10);
    t4 = *((unsigned char *)t14);
    t10 = work_p_0892474878_sub_3958360867_892474878(WORK_P_0892474878, t5, t9, t6, t11, t12, t3, t4);
    t16 = (t0 + 2608);
    t18 = (t16 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t10, 32U);
    xsi_driver_first_trans_fast(t16);

LAB3:    t1 = (t0 + 2456);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 960U);
    t7 = *((char **)t1);
    t1 = (t0 + 4948U);
    t8 = (t0 + 1052U);
    t9 = *((char **)t8);
    t8 = (t0 + 4964U);
    t10 = work_p_0892474878_sub_2890716533_892474878(WORK_P_0892474878, t6, t7, t1, t9, t8);
    if (2 > -29)
        goto LAB5;

LAB6:    if (-1 == -1)
        goto LAB10;

LAB11:    t11 = -29;

LAB7:    if (2 > -29)
        goto LAB12;

LAB13:    if (-1 == -1)
        goto LAB17;

LAB18:    t12 = 2;

LAB14:    t13 = ((WORK_P_0892474878) + 740U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t13 = ((WORK_P_0892474878) + 672U);
    t16 = *((char **)t13);
    t17 = *((unsigned char *)t16);
    t13 = work_p_0892474878_sub_3958360867_892474878(WORK_P_0892474878, t5, t10, t6, t11, t12, t15, t17);
    t18 = (t0 + 2608);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 32U);
    xsi_driver_first_trans_fast(t18);
    goto LAB3;

LAB5:    if (-1 == 1)
        goto LAB8;

LAB9:    t11 = 2;
    goto LAB7;

LAB8:    t11 = -29;
    goto LAB7;

LAB10:    t11 = 2;
    goto LAB7;

LAB12:    if (-1 == 1)
        goto LAB15;

LAB16:    t12 = -29;
    goto LAB14;

LAB15:    t12 = 2;
    goto LAB14;

LAB17:    t12 = -29;
    goto LAB14;

LAB19:    if (-1 == 1)
        goto LAB22;

LAB23:    t11 = 2;
    goto LAB21;

LAB22:    t11 = -29;
    goto LAB21;

LAB24:    t11 = 2;
    goto LAB21;

LAB26:    if (-1 == 1)
        goto LAB29;

LAB30:    t12 = -29;
    goto LAB28;

LAB29:    t12 = 2;
    goto LAB28;

LAB31:    t12 = -29;
    goto LAB28;

}


extern void work_a_0514239576_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0514239576_3212880686_p_0,(void *)work_a_0514239576_3212880686_p_1,(void *)work_a_0514239576_3212880686_p_2,(void *)work_a_0514239576_3212880686_p_3};
	xsi_register_didat("work_a_0514239576_3212880686", "isim/sim_top_TB_isim_beh.exe.sim/work/a_0514239576_3212880686.didat");
	xsi_register_executes(pe);
}
