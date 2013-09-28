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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_1242562249;
char *STD_TEXTIO;
char *WORK_P_0892474878;
char *IEEE_P_3972351953;
char *IEEE_P_3564397177;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;
char *UNISIM_P_0947159679;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    ieee_p_1242562249_init();
    std_textio_init();
    ieee_p_3972351953_init();
    ieee_p_3564397177_init();
    unisim_p_0947159679_init();
    work_p_0892474878_init();
    work_a_1050577942_3212880686_init();
    work_a_0514239576_3212880686_init();
    work_a_0832606739_3212880686_init();
    work_a_0362862470_3212880686_init();
    work_a_2367017600_3212880686_init();
    work_a_0802095076_3212880686_init();
    work_a_3540323257_3212880686_init();
    work_a_4035671647_3212880686_init();
    work_a_1687527659_3212880686_init();
    work_a_3998048205_3212880686_init();
    work_a_2680810859_3212880686_init();
    work_a_1632567566_3212880686_init();
    work_a_3219856015_3212880686_init();
    work_a_0177405934_3212880686_init();
    work_a_0185495365_3212880686_init();


    xsi_register_tops("work_a_0185495365_3212880686");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    WORK_P_0892474878 = xsi_get_engine_memory("work_p_0892474878");
    IEEE_P_3972351953 = xsi_get_engine_memory("ieee_p_3972351953");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    UNISIM_P_0947159679 = xsi_get_engine_memory("unisim_p_0947159679");

    return xsi_run_simulation(argc, argv);

}
