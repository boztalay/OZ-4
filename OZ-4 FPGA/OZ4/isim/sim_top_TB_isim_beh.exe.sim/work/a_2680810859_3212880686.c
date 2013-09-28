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
static const char *ng0 = "C:/Users/Ben/Desktop/Folders/Projects/Personal/Senior Project/OZ-4/OZ-4 FPGA/OZ4/OZ4_top.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_436279890_3620187407(char *, char *, char *, char *, int );


static void work_a_2680810859_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(359, ng0);

LAB3:    t2 = (t0 + 3812U);
    t3 = *((char **)t2);
    t2 = (t0 + 14144U);
    t4 = ieee_p_3620187407_sub_436279890_3620187407(IEEE_P_3620187407, t1, t3, t2, 2);
    t5 = (t0 + 5724);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 32U);
    xsi_driver_first_trans_fast(t5);

LAB2:    t10 = (t0 + 5680);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2680810859_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2680810859_3212880686_p_0};
	xsi_register_didat("work_a_2680810859_3212880686", "isim/sim_top_TB_isim_beh.exe.sim/work/a_2680810859_3212880686.didat");
	xsi_register_executes(pe);
}
