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
static const char *ng0 = "C:/Users/Ben/Desktop/Folders/Projects/Personal/Senior Project/OZ-4/OZ-4 FPGA/OZ4/return_stack.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1258338084_2592010699(char *, char *, unsigned int , unsigned int );


static void work_a_2367017600_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    char *t7;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 568U);
    t3 = ieee_p_2592010699_sub_1258338084_2592010699(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 2380);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(33, ng0);
    t1 = xsi_get_transient_memory(512U);
    memset(t1, 0, 512U);
    t5 = t1;
    t6 = (32U * 1U);
    t7 = t5;
    memset(t7, (unsigned char)2, t6);
    t8 = (t6 != 0);
    if (t8 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 2440);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 512U);
    xsi_driver_first_trans_fast(t10);
    goto LAB3;

LAB5:    t9 = (512U / t6);
    xsi_mem_set_data(t5, t5, t6, t9);
    goto LAB6;

LAB7:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1236U);
    t5 = *((char **)t2);
    t2 = (t0 + 2440);
    t7 = (t2 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t5, 512U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void work_a_2367017600_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    char *t7;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;

LAB0:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB10;

LAB11:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t1 = (t0 + 2476);
    t5 = (t1 + 32U);
    t7 = *((char **)t5);
    t10 = (t7 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 512U);
    xsi_driver_first_trans_fast(t1);

LAB8:
LAB3:    t1 = (t0 + 2388);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(43, ng0);
    t1 = xsi_get_transient_memory(512U);
    memset(t1, 0, 512U);
    t5 = t1;
    t6 = (32U * 1U);
    t7 = t5;
    memset(t7, (unsigned char)2, t6);
    t8 = (t6 != 0);
    if (t8 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 2476);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 512U);
    xsi_driver_first_trans_fast(t10);
    goto LAB3;

LAB5:    t9 = (512U / t6);
    xsi_mem_set_data(t5, t5, t6, t9);
    goto LAB6;

LAB7:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 776U);
    t5 = *((char **)t1);
    t1 = (t0 + 2476);
    t7 = (t1 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t5, 32U);
    xsi_driver_first_trans_delta(t1, 480U, 32U, 0LL);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (0 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 448U, 32U, 0LL);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (1 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 416U, 32U, 0LL);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (2 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 384U, 32U, 0LL);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (3 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 352U, 32U, 0LL);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (4 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 320U, 32U, 0LL);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (5 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 288U, 32U, 0LL);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (6 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 256U, 32U, 0LL);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (7 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 224U, 32U, 0LL);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (8 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 192U, 32U, 0LL);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (9 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 160U, 32U, 0LL);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (10 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 128U, 32U, 0LL);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (11 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 96U, 32U, 0LL);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (12 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 64U, 32U, 0LL);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (13 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 32U, 32U, 0LL);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (14 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 0U, 32U, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1144U);
    t5 = *((char **)t1);
    t15 = (1 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t5 + t16);
    t7 = (t0 + 2476);
    t10 = (t7 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 32U);
    xsi_driver_first_trans_delta(t7, 480U, 32U, 0LL);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (2 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 448U, 32U, 0LL);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (3 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 416U, 32U, 0LL);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (4 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 384U, 32U, 0LL);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (5 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 352U, 32U, 0LL);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (6 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 320U, 32U, 0LL);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (7 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 288U, 32U, 0LL);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (8 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 256U, 32U, 0LL);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (9 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 224U, 32U, 0LL);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (10 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 192U, 32U, 0LL);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (11 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 160U, 32U, 0LL);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (12 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 128U, 32U, 0LL);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (13 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 96U, 32U, 0LL);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (14 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 64U, 32U, 0LL);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t15 = (15 - 15);
    t6 = (t15 * -1);
    t9 = (32U * t6);
    t16 = (0 + t9);
    t1 = (t2 + t16);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 32U, 32U, 0LL);
    xsi_set_current_line(78, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 2476);
    t7 = (t5 + 32U);
    t10 = *((char **)t7);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_delta(t5, 0U, 32U, 0LL);
    goto LAB8;

}

static void work_a_2367017600_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(85, ng0);

LAB3:    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t3 = (0 - 15);
    t4 = (t3 * -1);
    t5 = (32U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 2512);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 32U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 2396);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2367017600_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2367017600_3212880686_p_0,(void *)work_a_2367017600_3212880686_p_1,(void *)work_a_2367017600_3212880686_p_2};
	xsi_register_didat("work_a_2367017600_3212880686", "isim/sim_top_TB_isim_beh.exe.sim/work/a_2367017600_3212880686.didat");
	xsi_register_executes(pe);
}
