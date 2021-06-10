/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSR_wrapper_data.h
 *
 * Code generation for function 'FSR_wrapper_data'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern const volatile char_T *emlrtBreakCheckR2012bFlagVar;
extern emlrtContext emlrtContextGlobal;
extern emlrtRSInfo w_emlrtRSI;
extern emlrtRSInfo x_emlrtRSI;
extern emlrtRSInfo y_emlrtRSI;
extern emlrtRSInfo ab_emlrtRSI;
extern emlrtRSInfo bb_emlrtRSI;
extern emlrtRSInfo db_emlrtRSI;
extern emlrtRSInfo eb_emlrtRSI;
extern emlrtRSInfo fb_emlrtRSI;
extern emlrtRSInfo gb_emlrtRSI;
extern emlrtRSInfo hb_emlrtRSI;
extern emlrtRSInfo ib_emlrtRSI;
extern emlrtRSInfo jb_emlrtRSI;
extern emlrtRSInfo kb_emlrtRSI;
extern emlrtRSInfo lb_emlrtRSI;
extern emlrtRSInfo mb_emlrtRSI;
extern emlrtRSInfo nb_emlrtRSI;
extern emlrtRSInfo ob_emlrtRSI;
extern emlrtRSInfo fc_emlrtRSI;
extern emlrtRSInfo mc_emlrtRSI;
extern emlrtRSInfo nc_emlrtRSI;
extern emlrtRSInfo tc_emlrtRSI;
extern emlrtRSInfo xc_emlrtRSI;
extern emlrtRSInfo yc_emlrtRSI;
extern emlrtRSInfo cd_emlrtRSI;
extern emlrtRSInfo dd_emlrtRSI;
extern emlrtRSInfo ed_emlrtRSI;
extern emlrtRSInfo fd_emlrtRSI;
extern emlrtRSInfo gd_emlrtRSI;
extern emlrtRSInfo hd_emlrtRSI;
extern emlrtRSInfo id_emlrtRSI;
extern emlrtRSInfo jd_emlrtRSI;
extern emlrtRSInfo ld_emlrtRSI;
extern emlrtRSInfo md_emlrtRSI;
extern emlrtRSInfo nd_emlrtRSI;
extern emlrtRSInfo xf_emlrtRSI;
extern emlrtRSInfo vj_emlrtRSI;
extern emlrtRSInfo wj_emlrtRSI;
extern emlrtRSInfo yj_emlrtRSI;
extern emlrtRSInfo jk_emlrtRSI;
extern emlrtRSInfo kk_emlrtRSI;
extern emlrtRSInfo lk_emlrtRSI;
extern emlrtRSInfo mk_emlrtRSI;
extern emlrtRSInfo nk_emlrtRSI;
extern emlrtRSInfo rk_emlrtRSI;
extern emlrtRSInfo xk_emlrtRSI;
extern emlrtRSInfo yk_emlrtRSI;
extern emlrtRSInfo bl_emlrtRSI;
extern emlrtRSInfo cl_emlrtRSI;
extern emlrtRSInfo jl_emlrtRSI;
extern emlrtRSInfo km_emlrtRSI;
extern emlrtRSInfo lm_emlrtRSI;
extern emlrtRSInfo mm_emlrtRSI;
extern emlrtRSInfo nm_emlrtRSI;
extern emlrtRSInfo fn_emlrtRSI;
extern emlrtRSInfo gn_emlrtRSI;
extern emlrtRSInfo hn_emlrtRSI;
extern emlrtRSInfo in_emlrtRSI;
extern emlrtRSInfo jn_emlrtRSI;
extern emlrtRSInfo kp_emlrtRSI;
extern emlrtRSInfo lp_emlrtRSI;
extern emlrtRSInfo mp_emlrtRSI;
extern emlrtRSInfo np_emlrtRSI;
extern emlrtRSInfo op_emlrtRSI;
extern emlrtRSInfo pp_emlrtRSI;
extern emlrtRSInfo qp_emlrtRSI;
extern emlrtRSInfo rp_emlrtRSI;
extern emlrtRSInfo sp_emlrtRSI;
extern emlrtRSInfo tp_emlrtRSI;
extern emlrtRSInfo es_emlrtRSI;
extern emlrtRSInfo fs_emlrtRSI;
extern emlrtRSInfo gs_emlrtRSI;
extern emlrtRSInfo hs_emlrtRSI;
extern emlrtRSInfo is_emlrtRSI;
extern emlrtRSInfo js_emlrtRSI;
extern emlrtRSInfo dt_emlrtRSI;
extern emlrtRSInfo et_emlrtRSI;
extern emlrtRSInfo ft_emlrtRSI;
extern emlrtRSInfo gt_emlrtRSI;
extern emlrtRSInfo ht_emlrtRSI;
extern emlrtRSInfo it_emlrtRSI;
extern emlrtRSInfo sv_emlrtRSI;
extern emlrtRSInfo nw_emlrtRSI;
extern emlrtRSInfo ow_emlrtRSI;
extern emlrtRSInfo pw_emlrtRSI;
extern emlrtRSInfo yw_emlrtRSI;
extern emlrtRSInfo ax_emlrtRSI;
extern emlrtRSInfo xx_emlrtRSI;
extern emlrtRSInfo by_emlrtRSI;
extern emlrtRSInfo cy_emlrtRSI;
extern emlrtRSInfo iy_emlrtRSI;
extern emlrtRSInfo jy_emlrtRSI;
extern emlrtRSInfo ky_emlrtRSI;
extern emlrtRSInfo ly_emlrtRSI;
extern emlrtRSInfo xy_emlrtRSI;
extern emlrtRSInfo aab_emlrtRSI;
extern emlrtRSInfo bab_emlrtRSI;
extern emlrtRSInfo cab_emlrtRSI;
extern emlrtRSInfo dab_emlrtRSI;
extern emlrtRSInfo jab_emlrtRSI;
extern emlrtRSInfo kab_emlrtRSI;
extern emlrtRSInfo lab_emlrtRSI;
extern emlrtRSInfo mab_emlrtRSI;
extern emlrtRSInfo cbb_emlrtRSI;
extern emlrtRSInfo dbb_emlrtRSI;
extern emlrtRSInfo fbb_emlrtRSI;
extern emlrtRSInfo tbb_emlrtRSI;
extern emlrtRSInfo odb_emlrtRSI;
extern emlrtRSInfo pdb_emlrtRSI;
extern emlrtRSInfo udb_emlrtRSI;
extern emlrtRSInfo vdb_emlrtRSI;
extern emlrtRSInfo wdb_emlrtRSI;
extern emlrtRSInfo aeb_emlrtRSI;
extern emlrtRSInfo seb_emlrtRSI;
extern emlrtRSInfo whb_emlrtRSI;
extern emlrtMCInfo b_emlrtMCI;
extern emlrtMCInfo s_emlrtMCI;
extern emlrtMCInfo ab_emlrtMCI;
extern emlrtRTEInfo j_emlrtRTEI;
extern emlrtRTEInfo k_emlrtRTEI;
extern emlrtRTEInfo p_emlrtRTEI;
extern emlrtRTEInfo q_emlrtRTEI;
extern emlrtRTEInfo s_emlrtRTEI;
extern emlrtRTEInfo cb_emlrtRTEI;
extern emlrtRTEInfo lb_emlrtRTEI;
extern emlrtRTEInfo mb_emlrtRTEI;
extern emlrtRTEInfo nb_emlrtRTEI;
extern emlrtBCInfo il_emlrtBCI;
extern emlrtBCInfo kl_emlrtBCI;
extern emlrtBCInfo ll_emlrtBCI;
extern emlrtBCInfo ml_emlrtBCI;
extern emlrtBCInfo nl_emlrtBCI;
extern emlrtRTEInfo xb_emlrtRTEI;
extern emlrtRTEInfo yb_emlrtRTEI;
extern emlrtRTEInfo ac_emlrtRTEI;
extern emlrtRTEInfo dc_emlrtRTEI;
extern emlrtRTEInfo fd_emlrtRTEI;
extern emlrtRTEInfo ce_emlrtRTEI;
extern emlrtRTEInfo df_emlrtRTEI;
extern emlrtRTEInfo ih_emlrtRTEI;
extern emlrtRTEInfo nh_emlrtRTEI;
extern emlrtRTEInfo jk_emlrtRTEI;
extern emlrtRTEInfo mk_emlrtRTEI;
extern emlrtRTEInfo ok_emlrtRTEI;
extern emlrtRTEInfo pk_emlrtRTEI;
extern emlrtRTEInfo sk_emlrtRTEI;
extern emlrtRTEInfo el_emlrtRTEI;
extern emlrtRTEInfo wl_emlrtRTEI;
extern emlrtRTEInfo jq_emlrtRTEI;
extern emlrtRTEInfo kq_emlrtRTEI;
extern emlrtRTEInfo lq_emlrtRTEI;
extern emlrtRTEInfo pq_emlrtRTEI;
extern emlrtRTEInfo vr_emlrtRTEI;
extern emlrtRTEInfo as_emlrtRTEI;
extern emlrtRTEInfo ks_emlrtRTEI;
extern emlrtRTEInfo ox_emlrtRTEI;
extern emlrtRTEInfo sx_emlrtRTEI;
extern emlrtRTEInfo ngb_emlrtRTEI;
extern const char_T cv[20];
extern const int32_T iv[5];
extern const char_T cv3[22];
extern const char_T cv4[42];
extern const char_T cv5[100];
extern const char_T cv6[61];
extern const char_T cv7[62];
extern const char_T cv8[63];
extern const char_T cv9[29];
extern const char_T cv10[41];
extern const char_T cv11[19];
extern const char_T cv12[44];
extern const char_T cv15[44];
extern const char_T cv16[30];
extern const char_T cv19[29];
extern const char_T cv20[41];
extern emlrtRSInfo inb_emlrtRSI;
extern emlrtRSInfo jnb_emlrtRSI;
extern emlrtRSInfo xnb_emlrtRSI;
extern emlrtRSInfo vpb_emlrtRSI;
extern emlrtRSInfo aqb_emlrtRSI;

/* End of code generation (FSR_wrapper_data.h) */
