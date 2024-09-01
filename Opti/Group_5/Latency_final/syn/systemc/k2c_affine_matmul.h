// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _k2c_affine_matmul_HH_
#define _k2c_affine_matmul_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "sample_fadd_32ns_ocq.h"
#include "sample_fmul_32ns_pcA.h"
#include "sample_mul_63ns_1wdI.h"
#include "sample_mux_864_32rcU.h"

namespace ap_rtl {

struct k2c_affine_matmul : public sc_module {
    // Port declarations 46
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > C_0_address0;
    sc_out< sc_logic > C_0_ce0;
    sc_out< sc_logic > C_0_we0;
    sc_out< sc_lv<32> > C_0_d0;
    sc_out< sc_lv<4> > C_1_address0;
    sc_out< sc_logic > C_1_ce0;
    sc_out< sc_logic > C_1_we0;
    sc_out< sc_lv<32> > C_1_d0;
    sc_out< sc_lv<4> > C_7_address0;
    sc_out< sc_logic > C_7_ce0;
    sc_out< sc_logic > C_7_we0;
    sc_out< sc_lv<32> > C_7_d0;
    sc_out< sc_lv<4> > A_0_address0;
    sc_out< sc_logic > A_0_ce0;
    sc_in< sc_lv<32> > A_0_q0;
    sc_out< sc_lv<4> > A_1_address0;
    sc_out< sc_logic > A_1_ce0;
    sc_in< sc_lv<32> > A_1_q0;
    sc_out< sc_lv<4> > A_2_address0;
    sc_out< sc_logic > A_2_ce0;
    sc_in< sc_lv<32> > A_2_q0;
    sc_out< sc_lv<4> > A_3_address0;
    sc_out< sc_logic > A_3_ce0;
    sc_in< sc_lv<32> > A_3_q0;
    sc_out< sc_lv<4> > A_4_address0;
    sc_out< sc_logic > A_4_ce0;
    sc_in< sc_lv<32> > A_4_q0;
    sc_out< sc_lv<4> > A_5_address0;
    sc_out< sc_logic > A_5_ce0;
    sc_in< sc_lv<32> > A_5_q0;
    sc_out< sc_lv<4> > A_6_address0;
    sc_out< sc_logic > A_6_ce0;
    sc_in< sc_lv<32> > A_6_q0;
    sc_out< sc_lv<4> > A_7_address0;
    sc_out< sc_logic > A_7_ce0;
    sc_in< sc_lv<32> > A_7_q0;
    sc_out< sc_lv<7> > d_address0;
    sc_out< sc_logic > d_ce0;
    sc_in< sc_lv<32> > d_q0;
    sc_in< sc_lv<64> > outrows;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    k2c_affine_matmul(sc_module_name name);
    SC_HAS_PROCESS(k2c_affine_matmul);

    ~k2c_affine_matmul();

    sc_trace_file* mVcdFile;

    sample_fadd_32ns_ocq<1,9,32,32,32>* sample_fadd_32ns_ocq_U81;
    sample_fadd_32ns_ocq<1,9,32,32,32>* sample_fadd_32ns_ocq_U82;
    sample_fmul_32ns_pcA<1,5,32,32,32>* sample_fmul_32ns_pcA_U83;
    sample_fmul_32ns_pcA<1,5,32,32,32>* sample_fmul_32ns_pcA_U84;
    sample_mul_63ns_1wdI<1,6,63,13,75>* sample_mul_63ns_1wdI_U85;
    sample_mux_864_32rcU<1,1,32,32,32,32,32,32,32,32,64,32>* sample_mux_864_32rcU_U86;
    sample_mux_864_32rcU<1,1,32,32,32,32,32,32,32,32,64,32>* sample_mux_864_32rcU_U87;
    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<75> > indvar_flatten7_reg_270;
    sc_signal< sc_lv<13> > indvar_flatten8_reg_281;
    sc_signal< sc_lv<7> > indvar_flatten9_reg_292;
    sc_signal< sc_lv<4> > indvar_flatten_reg_303;
    sc_signal< sc_lv<2> > ii_reg_314;
    sc_signal< sc_lv<2> > jj_reg_325;
    sc_signal< sc_lv<75> > grp_fu_366_p2;
    sc_signal< sc_lv<75> > bound_reg_792;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > exitcond_flatten9_fu_372_p2;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state13_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state14_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state15_pp0_stage0_iter8;
    sc_signal< bool > ap_block_state16_pp0_stage0_iter9;
    sc_signal< bool > ap_block_state17_pp0_stage0_iter10;
    sc_signal< bool > ap_block_state18_pp0_stage0_iter11;
    sc_signal< bool > ap_block_state19_pp0_stage0_iter12;
    sc_signal< bool > ap_block_state20_pp0_stage0_iter13;
    sc_signal< bool > ap_block_state21_pp0_stage0_iter14;
    sc_signal< bool > ap_block_state22_pp0_stage0_iter15;
    sc_signal< bool > ap_block_state23_pp0_stage0_iter16;
    sc_signal< bool > ap_block_state24_pp0_stage0_iter17;
    sc_signal< bool > ap_block_state25_pp0_stage0_iter18;
    sc_signal< bool > ap_block_state26_pp0_stage0_iter19;
    sc_signal< bool > ap_block_state27_pp0_stage0_iter20;
    sc_signal< bool > ap_block_state28_pp0_stage0_iter21;
    sc_signal< bool > ap_block_state29_pp0_stage0_iter22;
    sc_signal< bool > ap_block_state30_pp0_stage0_iter23;
    sc_signal< bool > ap_block_state31_pp0_stage0_iter24;
    sc_signal< bool > ap_block_state32_pp0_stage0_iter25;
    sc_signal< bool > ap_block_state33_pp0_stage0_iter26;
    sc_signal< bool > ap_block_state34_pp0_stage0_iter27;
    sc_signal< bool > ap_block_state35_pp0_stage0_iter28;
    sc_signal< bool > ap_block_state36_pp0_stage0_iter29;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter1_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter2_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter3_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter4_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter5_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter6_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter7_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter8_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter9_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter10_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter11_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter12_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter13_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter14_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter15_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter16_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter17_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter18_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter19_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter20_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter21_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter22_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter23_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter24_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter25_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter26_reg;
    sc_signal< sc_lv<1> > exitcond_flatten9_reg_797_pp0_iter27_reg;
    sc_signal< sc_lv<75> > indvar_flatten_next9_fu_377_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_383_p2;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_806;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_806_pp0_iter1_reg;
    sc_signal< sc_lv<13> > indvar_flatten_next8_fu_395_p3;
    sc_signal< sc_lv<1> > not_exitcond_flatten_fu_403_p2;
    sc_signal< sc_lv<1> > not_exitcond_flatten_reg_819;
    sc_signal< sc_lv<1> > not_exitcond_flatten_reg_819_pp0_iter2_reg;
    sc_signal< sc_lv<1> > exitcond_flatten6_fu_408_p2;
    sc_signal< sc_lv<1> > exitcond_flatten6_reg_825;
    sc_signal< sc_lv<1> > exitcond_flatten47_m_fu_414_p2;
    sc_signal< sc_lv<1> > exitcond_flatten47_m_reg_830;
    sc_signal< sc_lv<1> > tmp_47_fu_420_p2;
    sc_signal< sc_lv<1> > tmp_47_reg_835;
    sc_signal< sc_lv<1> > tmp_47_reg_835_pp0_iter2_reg;
    sc_signal< sc_lv<7> > indvar_flatten_next7_fu_431_p3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<1> > not_exitcond_flatten_5_fu_455_p2;
    sc_signal< sc_lv<1> > not_exitcond_flatten_5_reg_845;
    sc_signal< sc_lv<1> > exitcond_flatten_mid_6_fu_460_p2;
    sc_signal< sc_lv<1> > exitcond_flatten_mid_6_reg_850;
    sc_signal< sc_lv<1> > tmp_107_fu_471_p2;
    sc_signal< sc_lv<1> > tmp_107_reg_856;
    sc_signal< sc_lv<4> > indvar_flatten_next_fu_482_p3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<2> > jj_mid2_fu_593_p3;
    sc_signal< sc_lv<2> > jj_mid2_reg_869;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter4_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter5_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter6_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter7_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter8_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter9_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter10_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter11_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter12_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter13_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter14_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter15_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter16_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter17_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter18_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter19_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter20_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter21_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter22_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter23_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter24_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter25_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter26_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter27_reg;
    sc_signal< sc_lv<2> > jj_mid2_reg_869_pp0_iter28_reg;
    sc_signal< sc_lv<3> > arrayNo_mid2_fu_613_p3;
    sc_signal< sc_lv<3> > arrayNo_mid2_reg_876;
    sc_signal< sc_lv<3> > arrayNo_mid2_reg_876_pp0_iter4_reg;
    sc_signal< sc_lv<5> > newIndex11_cast_mid2_fu_631_p3;
    sc_signal< sc_lv<5> > newIndex11_cast_mid2_reg_881;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_fu_649_p3;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter4_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter5_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter6_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter7_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter8_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter9_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter10_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter11_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter12_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter13_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter14_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter15_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter16_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter17_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter18_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter19_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter20_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter21_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter22_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter23_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter24_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter25_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter26_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter27_reg;
    sc_signal< sc_lv<8> > newIndex_cast_mid2_reg_886_pp0_iter28_reg;
    sc_signal< sc_lv<2> > ii_mid2_fu_657_p3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_lv<2> > jj_1_fu_665_p2;
    sc_signal< sc_lv<32> > tmp_s_fu_685_p10;
    sc_signal< sc_lv<32> > tmp_s_reg_941;
    sc_signal< sc_lv<32> > sel_tmp5_i_fu_731_p3;
    sc_signal< sc_lv<32> > sel_tmp5_i_reg_946;
    sc_signal< sc_lv<32> > tmp_58_fu_739_p10;
    sc_signal< sc_lv<32> > tmp_58_reg_951;
    sc_signal< sc_lv<32> > sel_tmp5_i3_fu_769_p3;
    sc_signal< sc_lv<32> > sel_tmp5_i3_reg_956;
    sc_signal< sc_lv<32> > sum_reg_966;
    sc_signal< sc_lv<32> > grp_fu_344_p2;
    sc_signal< sc_lv<32> > tmp_43_reg_971;
    sc_signal< sc_lv<32> > grp_fu_348_p2;
    sc_signal< sc_lv<32> > tmp_53_1_reg_976;
    sc_signal< sc_lv<32> > tmp_53_1_reg_976_pp0_iter11_reg;
    sc_signal< sc_lv<32> > tmp_53_1_reg_976_pp0_iter12_reg;
    sc_signal< sc_lv<32> > tmp_53_1_reg_976_pp0_iter13_reg;
    sc_signal< sc_lv<32> > tmp_53_1_reg_976_pp0_iter14_reg;
    sc_signal< sc_lv<32> > tmp_53_1_reg_976_pp0_iter15_reg;
    sc_signal< sc_lv<32> > tmp_53_1_reg_976_pp0_iter16_reg;
    sc_signal< sc_lv<32> > tmp_53_1_reg_976_pp0_iter17_reg;
    sc_signal< sc_lv<32> > tmp_53_1_reg_976_pp0_iter18_reg;
    sc_signal< sc_lv<32> > tmp_53_1_reg_976_pp0_iter19_reg;
    sc_signal< sc_lv<32> > grp_fu_336_p2;
    sc_signal< sc_lv<32> > sum_6_reg_981;
    sc_signal< sc_lv<32> > grp_fu_340_p2;
    sc_signal< sc_lv<32> > sum_6_1_reg_986;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter3_state10;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter9;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter10;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter11;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter12;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter13;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter14;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter15;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter16;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter17;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter18;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter19;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter20;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter21;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter22;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter23;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter24;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter25;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter26;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter27;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter28;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter29;
    sc_signal< sc_lv<64> > newIndex11_cast_mid2_1_fu_671_p1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > jj_cast_fu_777_p1;
    sc_signal< sc_lv<64> > newIndex_cast_mid2_c_fu_781_p1;
    sc_signal< sc_lv<63> > tmp_fu_352_p4;
    sc_signal< sc_lv<63> > grp_fu_366_p0;
    sc_signal< sc_lv<13> > grp_fu_366_p1;
    sc_signal< sc_lv<13> > indvar_flatten87_op_fu_389_p2;
    sc_signal< sc_lv<7> > indvar_flatten45_op_fu_425_p2;
    sc_signal< sc_lv<1> > exitcond_flatten5_fu_439_p2;
    sc_signal< sc_lv<1> > exitcond_flatten47_n_fu_450_p2;
    sc_signal< sc_lv<1> > exitcond_flatten_mid_fu_445_p2;
    sc_signal< sc_lv<1> > tmp_48_fu_466_p2;
    sc_signal< sc_lv<4> > indvar_flatten_op_fu_476_p2;
    sc_signal< sc_lv<1> > tmp_106_fu_490_p1;
    sc_signal< sc_lv<1> > tmp_56_fu_522_p2;
    sc_signal< sc_lv<1> > tmp_41_mid_fu_528_p2;
    sc_signal< sc_lv<3> > p_shl2_fu_494_p3;
    sc_signal< sc_lv<5> > newIndex1_fu_502_p4;
    sc_signal< sc_lv<8> > newIndex_fu_512_p4;
    sc_signal< sc_lv<1> > tmp_41_mid1_fu_533_p2;
    sc_signal< sc_lv<1> > not_exitcond_flatten_6_fu_566_p2;
    sc_signal< sc_lv<2> > ii_mid4_fu_538_p3;
    sc_signal< sc_lv<1> > tmp_41_mid2_fu_571_p2;
    sc_signal< sc_lv<1> > tmp_52_fu_583_p2;
    sc_signal< sc_lv<1> > tmp_108_fu_588_p2;
    sc_signal< sc_lv<2> > ii_1_fu_577_p2;
    sc_signal< sc_lv<1> > tmp_109_fu_601_p1;
    sc_signal< sc_lv<3> > p_shl2_mid1_fu_605_p3;
    sc_signal< sc_lv<3> > arrayNo_mid3_fu_545_p3;
    sc_signal< sc_lv<5> > newIndex1_mid1_fu_621_p4;
    sc_signal< sc_lv<5> > newIndex11_cast_mid3_fu_552_p3;
    sc_signal< sc_lv<8> > newIndex_mid1_fu_639_p4;
    sc_signal< sc_lv<8> > newIndex_cast_mid5_fu_559_p3;
    sc_signal< sc_lv<64> > arrayNo_mid2_cast_fu_682_p1;
    sc_signal< sc_lv<1> > sel_tmp2_i_fu_712_p2;
    sc_signal< sc_lv<1> > sel_tmp_i_fu_707_p2;
    sc_signal< sc_lv<1> > tmp_57_fu_725_p2;
    sc_signal< sc_lv<32> > sel_tmp1_i_fu_717_p3;
    sc_signal< sc_lv<32> > sel_tmp1_i3_fu_761_p3;
    sc_signal< sc_logic > ap_CS_fsm_state37;
    sc_signal< sc_lv<8> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<75> > grp_fu_366_p00;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_ST_fsm_state1;
    static const sc_lv<8> ap_ST_fsm_state2;
    static const sc_lv<8> ap_ST_fsm_state3;
    static const sc_lv<8> ap_ST_fsm_state4;
    static const sc_lv<8> ap_ST_fsm_state5;
    static const sc_lv<8> ap_ST_fsm_state6;
    static const sc_lv<8> ap_ST_fsm_pp0_stage0;
    static const sc_lv<8> ap_ST_fsm_state37;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<75> ap_const_lv75_0;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<75> ap_const_lv75_A00;
    static const sc_lv<75> ap_const_lv75_1;
    static const sc_lv<13> ap_const_lv13_A00;
    static const sc_lv<13> ap_const_lv13_1;
    static const sc_lv<7> ap_const_lv7_28;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<4> ap_const_lv4_4;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_BE18A2E9;
    static const sc_lv<32> ap_const_lv32_BE56D429;
    static const sc_lv<32> ap_const_lv32_3E0B30B7;
    static const sc_lv<32> ap_const_lv32_3D4A0303;
    static const sc_lv<32> ap_const_lv32_BE3F848A;
    static const sc_lv<32> ap_const_lv32_BD0C576F;
    static const sc_lv<32> ap_const_lv32_7;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_A_0_address0();
    void thread_A_0_ce0();
    void thread_A_1_address0();
    void thread_A_1_ce0();
    void thread_A_2_address0();
    void thread_A_2_ce0();
    void thread_A_3_address0();
    void thread_A_3_ce0();
    void thread_A_4_address0();
    void thread_A_4_ce0();
    void thread_A_5_address0();
    void thread_A_5_ce0();
    void thread_A_6_address0();
    void thread_A_6_ce0();
    void thread_A_7_address0();
    void thread_A_7_ce0();
    void thread_C_0_address0();
    void thread_C_0_ce0();
    void thread_C_0_d0();
    void thread_C_0_we0();
    void thread_C_1_address0();
    void thread_C_1_ce0();
    void thread_C_1_d0();
    void thread_C_1_we0();
    void thread_C_7_address0();
    void thread_C_7_ce0();
    void thread_C_7_d0();
    void thread_C_7_we0();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state37();
    void thread_ap_CS_fsm_state6();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state10_pp0_stage0_iter3();
    void thread_ap_block_state11_pp0_stage0_iter4();
    void thread_ap_block_state12_pp0_stage0_iter5();
    void thread_ap_block_state13_pp0_stage0_iter6();
    void thread_ap_block_state14_pp0_stage0_iter7();
    void thread_ap_block_state15_pp0_stage0_iter8();
    void thread_ap_block_state16_pp0_stage0_iter9();
    void thread_ap_block_state17_pp0_stage0_iter10();
    void thread_ap_block_state18_pp0_stage0_iter11();
    void thread_ap_block_state19_pp0_stage0_iter12();
    void thread_ap_block_state20_pp0_stage0_iter13();
    void thread_ap_block_state21_pp0_stage0_iter14();
    void thread_ap_block_state22_pp0_stage0_iter15();
    void thread_ap_block_state23_pp0_stage0_iter16();
    void thread_ap_block_state24_pp0_stage0_iter17();
    void thread_ap_block_state25_pp0_stage0_iter18();
    void thread_ap_block_state26_pp0_stage0_iter19();
    void thread_ap_block_state27_pp0_stage0_iter20();
    void thread_ap_block_state28_pp0_stage0_iter21();
    void thread_ap_block_state29_pp0_stage0_iter22();
    void thread_ap_block_state30_pp0_stage0_iter23();
    void thread_ap_block_state31_pp0_stage0_iter24();
    void thread_ap_block_state32_pp0_stage0_iter25();
    void thread_ap_block_state33_pp0_stage0_iter26();
    void thread_ap_block_state34_pp0_stage0_iter27();
    void thread_ap_block_state35_pp0_stage0_iter28();
    void thread_ap_block_state36_pp0_stage0_iter29();
    void thread_ap_block_state7_pp0_stage0_iter0();
    void thread_ap_block_state8_pp0_stage0_iter1();
    void thread_ap_block_state9_pp0_stage0_iter2();
    void thread_ap_condition_pp0_exit_iter3_state10();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_arrayNo_mid2_cast_fu_682_p1();
    void thread_arrayNo_mid2_fu_613_p3();
    void thread_arrayNo_mid3_fu_545_p3();
    void thread_d_address0();
    void thread_d_ce0();
    void thread_exitcond_flatten47_m_fu_414_p2();
    void thread_exitcond_flatten47_n_fu_450_p2();
    void thread_exitcond_flatten5_fu_439_p2();
    void thread_exitcond_flatten6_fu_408_p2();
    void thread_exitcond_flatten9_fu_372_p2();
    void thread_exitcond_flatten_fu_383_p2();
    void thread_exitcond_flatten_mid_6_fu_460_p2();
    void thread_exitcond_flatten_mid_fu_445_p2();
    void thread_grp_fu_366_p0();
    void thread_grp_fu_366_p00();
    void thread_grp_fu_366_p1();
    void thread_ii_1_fu_577_p2();
    void thread_ii_mid2_fu_657_p3();
    void thread_ii_mid4_fu_538_p3();
    void thread_indvar_flatten45_op_fu_425_p2();
    void thread_indvar_flatten87_op_fu_389_p2();
    void thread_indvar_flatten_next7_fu_431_p3();
    void thread_indvar_flatten_next8_fu_395_p3();
    void thread_indvar_flatten_next9_fu_377_p2();
    void thread_indvar_flatten_next_fu_482_p3();
    void thread_indvar_flatten_op_fu_476_p2();
    void thread_jj_1_fu_665_p2();
    void thread_jj_cast_fu_777_p1();
    void thread_jj_mid2_fu_593_p3();
    void thread_newIndex11_cast_mid2_1_fu_671_p1();
    void thread_newIndex11_cast_mid2_fu_631_p3();
    void thread_newIndex11_cast_mid3_fu_552_p3();
    void thread_newIndex1_fu_502_p4();
    void thread_newIndex1_mid1_fu_621_p4();
    void thread_newIndex_cast_mid2_c_fu_781_p1();
    void thread_newIndex_cast_mid2_fu_649_p3();
    void thread_newIndex_cast_mid5_fu_559_p3();
    void thread_newIndex_fu_512_p4();
    void thread_newIndex_mid1_fu_639_p4();
    void thread_not_exitcond_flatten_5_fu_455_p2();
    void thread_not_exitcond_flatten_6_fu_566_p2();
    void thread_not_exitcond_flatten_fu_403_p2();
    void thread_p_shl2_fu_494_p3();
    void thread_p_shl2_mid1_fu_605_p3();
    void thread_sel_tmp1_i3_fu_761_p3();
    void thread_sel_tmp1_i_fu_717_p3();
    void thread_sel_tmp2_i_fu_712_p2();
    void thread_sel_tmp5_i3_fu_769_p3();
    void thread_sel_tmp5_i_fu_731_p3();
    void thread_sel_tmp_i_fu_707_p2();
    void thread_tmp_106_fu_490_p1();
    void thread_tmp_107_fu_471_p2();
    void thread_tmp_108_fu_588_p2();
    void thread_tmp_109_fu_601_p1();
    void thread_tmp_41_mid1_fu_533_p2();
    void thread_tmp_41_mid2_fu_571_p2();
    void thread_tmp_41_mid_fu_528_p2();
    void thread_tmp_47_fu_420_p2();
    void thread_tmp_48_fu_466_p2();
    void thread_tmp_52_fu_583_p2();
    void thread_tmp_56_fu_522_p2();
    void thread_tmp_57_fu_725_p2();
    void thread_tmp_fu_352_p4();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
