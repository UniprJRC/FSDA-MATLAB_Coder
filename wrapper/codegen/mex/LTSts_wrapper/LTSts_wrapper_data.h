/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LTSts_wrapper_data.h
 *
 * Code generation for function 'LTSts_wrapper_data'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern const volatile char_T *emlrtBreakCheckR2012bFlagVar;
extern emlrtContext emlrtContextGlobal;
extern emlrtRSInfo hf_emlrtRSI;
extern emlrtRSInfo if_emlrtRSI;
extern emlrtRSInfo lf_emlrtRSI;
extern emlrtRSInfo nf_emlrtRSI;
extern emlrtRSInfo of_emlrtRSI;
extern emlrtRSInfo qf_emlrtRSI;
extern emlrtRSInfo sf_emlrtRSI;
extern emlrtRSInfo bg_emlrtRSI;
extern emlrtRSInfo cg_emlrtRSI;
extern emlrtRSInfo dg_emlrtRSI;
extern emlrtRSInfo eg_emlrtRSI;
extern emlrtRSInfo fg_emlrtRSI;
extern emlrtRSInfo gg_emlrtRSI;
extern emlrtRSInfo hg_emlrtRSI;
extern emlrtRSInfo ig_emlrtRSI;
extern emlrtRSInfo jg_emlrtRSI;
extern emlrtRSInfo kg_emlrtRSI;
extern emlrtRSInfo lg_emlrtRSI;
extern emlrtRSInfo ng_emlrtRSI;
extern emlrtRSInfo qg_emlrtRSI;
extern emlrtRSInfo rg_emlrtRSI;
extern emlrtRSInfo sg_emlrtRSI;
extern emlrtRSInfo gh_emlrtRSI;
extern emlrtRSInfo hh_emlrtRSI;
extern emlrtRSInfo ih_emlrtRSI;
extern emlrtRSInfo jh_emlrtRSI;
extern emlrtRSInfo kh_emlrtRSI;
extern emlrtRSInfo lh_emlrtRSI;
extern emlrtRSInfo nh_emlrtRSI;
extern emlrtRSInfo oh_emlrtRSI;
extern emlrtRSInfo ph_emlrtRSI;
extern emlrtRSInfo qj_emlrtRSI;
extern emlrtRSInfo rj_emlrtRSI;
extern emlrtRSInfo sj_emlrtRSI;
extern emlrtRSInfo tj_emlrtRSI;
extern emlrtRSInfo vj_emlrtRSI;
extern emlrtRSInfo dk_emlrtRSI;
extern emlrtRSInfo nl_emlrtRSI;
extern emlrtRSInfo pl_emlrtRSI;
extern emlrtRSInfo ql_emlrtRSI;
extern emlrtRSInfo rl_emlrtRSI;
extern emlrtRSInfo sl_emlrtRSI;
extern emlrtRSInfo tl_emlrtRSI;
extern emlrtRSInfo ul_emlrtRSI;
extern emlrtRSInfo vl_emlrtRSI;
extern emlrtRSInfo em_emlrtRSI;
extern emlrtRSInfo fm_emlrtRSI;
extern emlrtRSInfo hm_emlrtRSI;
extern emlrtRSInfo bo_emlrtRSI;
extern emlrtRSInfo co_emlrtRSI;
extern emlrtRSInfo do_emlrtRSI;
extern emlrtRSInfo eo_emlrtRSI;
extern emlrtRSInfo go_emlrtRSI;
extern emlrtRSInfo cq_emlrtRSI;
extern emlrtRSInfo kq_emlrtRSI;
extern emlrtRSInfo lq_emlrtRSI;
extern emlrtRSInfo mq_emlrtRSI;
extern emlrtRSInfo nq_emlrtRSI;
extern emlrtRSInfo oq_emlrtRSI;
extern emlrtRSInfo pq_emlrtRSI;
extern emlrtRSInfo qq_emlrtRSI;
extern emlrtRSInfo rq_emlrtRSI;
extern emlrtRSInfo sq_emlrtRSI;
extern emlrtRSInfo hr_emlrtRSI;
extern emlrtRSInfo ir_emlrtRSI;
extern emlrtRSInfo jr_emlrtRSI;
extern emlrtRSInfo kr_emlrtRSI;
extern emlrtRSInfo lr_emlrtRSI;
extern emlrtRSInfo mr_emlrtRSI;
extern emlrtRSInfo nr_emlrtRSI;
extern emlrtRSInfo or_emlrtRSI;
extern emlrtRSInfo pr_emlrtRSI;
extern emlrtRSInfo as_emlrtRSI;
extern emlrtRSInfo bs_emlrtRSI;
extern emlrtRSInfo cs_emlrtRSI;
extern emlrtRSInfo gs_emlrtRSI;
extern emlrtRSInfo hs_emlrtRSI;
extern emlrtRSInfo is_emlrtRSI;
extern emlrtRSInfo js_emlrtRSI;
extern emlrtRSInfo ks_emlrtRSI;
extern emlrtRSInfo xs_emlrtRSI;
extern emlrtRSInfo gt_emlrtRSI;
extern emlrtRSInfo kv_emlrtRSI;
extern emlrtRSInfo lv_emlrtRSI;
extern emlrtRSInfo vv_emlrtRSI;
extern emlrtRSInfo wv_emlrtRSI;
extern emlrtRSInfo ax_emlrtRSI;
extern emlrtRSInfo dx_emlrtRSI;
extern emlrtRSInfo gx_emlrtRSI;
extern emlrtRSInfo mx_emlrtRSI;
extern emlrtRSInfo nx_emlrtRSI;
extern emlrtRSInfo ox_emlrtRSI;
extern emlrtRSInfo bab_emlrtRSI;
extern emlrtRSInfo cab_emlrtRSI;
extern emlrtRSInfo fab_emlrtRSI;
extern emlrtRSInfo gab_emlrtRSI;
extern emlrtRSInfo hab_emlrtRSI;
extern emlrtRSInfo kab_emlrtRSI;
extern emlrtRSInfo bbb_emlrtRSI;
extern emlrtRSInfo wbb_emlrtRSI;
extern emlrtRSInfo xbb_emlrtRSI;
extern emlrtRSInfo rdb_emlrtRSI;
extern emlrtRSInfo sdb_emlrtRSI;
extern emlrtMCInfo d_emlrtMCI;
extern emlrtMCInfo p_emlrtMCI;
extern emlrtMCInfo q_emlrtMCI;
extern omp_lock_t emlrtLockGlobal;
extern omp_nest_lock_t emlrtNestLockGlobal;
extern emlrtRTEInfo d_emlrtRTEI;
extern emlrtRTEInfo f_emlrtRTEI;
extern emlrtRTEInfo g_emlrtRTEI;
extern emlrtRTEInfo o_emlrtRTEI;
extern emlrtDCInfo rd_emlrtDCI;
extern emlrtRTEInfo bb_emlrtRTEI;
extern emlrtRTEInfo ib_emlrtRTEI;
extern emlrtRTEInfo jb_emlrtRTEI;
extern emlrtRTEInfo qb_emlrtRTEI;
extern emlrtRTEInfo rb_emlrtRTEI;
extern emlrtRTEInfo ub_emlrtRTEI;
extern emlrtRTEInfo vb_emlrtRTEI;
extern emlrtRTEInfo xb_emlrtRTEI;
extern emlrtBCInfo co_emlrtBCI;
extern emlrtBCInfo do_emlrtBCI;
extern emlrtBCInfo fo_emlrtBCI;
extern emlrtBCInfo go_emlrtBCI;
extern emlrtBCInfo ho_emlrtBCI;
extern emlrtRTEInfo dc_emlrtRTEI;
extern emlrtRTEInfo ec_emlrtRTEI;
extern emlrtRTEInfo fc_emlrtRTEI;
extern emlrtECInfo nc_emlrtECI;
extern emlrtRTEInfo wc_emlrtRTEI;
extern emlrtRTEInfo se_emlrtRTEI;
extern emlrtRTEInfo ue_emlrtRTEI;
extern emlrtRTEInfo ef_emlrtRTEI;
extern emlrtRTEInfo bk_emlrtRTEI;
extern emlrtRTEInfo hl_emlrtRTEI;
extern emlrtRTEInfo wl_emlrtRTEI;
extern emlrtRTEInfo yl_emlrtRTEI;
extern emlrtRTEInfo gm_emlrtRTEI;
extern emlrtRTEInfo us_emlrtRTEI;
extern emlrtRTEInfo ru_emlrtRTEI;
extern emlrtRTEInfo bw_emlrtRTEI;
extern emlrtRTEInfo jx_emlrtRTEI;
extern emlrtRTEInfo kx_emlrtRTEI;
extern emlrtRTEInfo lx_emlrtRTEI;
extern emlrtRTEInfo mx_emlrtRTEI;
extern const boolean_T bv[128];
extern const char_T cv1[19];
extern const char_T cv2[14];
extern const real_T dv[31];
extern emlrtRSInfo ydb_emlrtRSI;
extern emlrtRSInfo teb_emlrtRSI;
extern emlrtRSInfo yeb_emlrtRSI;

/* End of code generation (LTSts_wrapper_data.h) */
