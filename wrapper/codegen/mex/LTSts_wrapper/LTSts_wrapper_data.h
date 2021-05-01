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
extern emlrtRSInfo gf_emlrtRSI;
extern emlrtRSInfo hf_emlrtRSI;
extern emlrtRSInfo kf_emlrtRSI;
extern emlrtRSInfo mf_emlrtRSI;
extern emlrtRSInfo nf_emlrtRSI;
extern emlrtRSInfo pf_emlrtRSI;
extern emlrtRSInfo rf_emlrtRSI;
extern emlrtRSInfo ag_emlrtRSI;
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
extern emlrtRSInfo mg_emlrtRSI;
extern emlrtRSInfo pg_emlrtRSI;
extern emlrtRSInfo qg_emlrtRSI;
extern emlrtRSInfo rg_emlrtRSI;
extern emlrtRSInfo fh_emlrtRSI;
extern emlrtRSInfo gh_emlrtRSI;
extern emlrtRSInfo hh_emlrtRSI;
extern emlrtRSInfo ih_emlrtRSI;
extern emlrtRSInfo jh_emlrtRSI;
extern emlrtRSInfo kh_emlrtRSI;
extern emlrtRSInfo mh_emlrtRSI;
extern emlrtRSInfo nh_emlrtRSI;
extern emlrtRSInfo oh_emlrtRSI;
extern emlrtRSInfo pj_emlrtRSI;
extern emlrtRSInfo qj_emlrtRSI;
extern emlrtRSInfo rj_emlrtRSI;
extern emlrtRSInfo sj_emlrtRSI;
extern emlrtRSInfo uj_emlrtRSI;
extern emlrtRSInfo ck_emlrtRSI;
extern emlrtRSInfo wn_emlrtRSI;
extern emlrtRSInfo xn_emlrtRSI;
extern emlrtRSInfo yn_emlrtRSI;
extern emlrtRSInfo ao_emlrtRSI;
extern emlrtRSInfo co_emlrtRSI;
extern emlrtRSInfo xp_emlrtRSI;
extern emlrtRSInfo gq_emlrtRSI;
extern emlrtRSInfo hq_emlrtRSI;
extern emlrtRSInfo iq_emlrtRSI;
extern emlrtRSInfo jq_emlrtRSI;
extern emlrtRSInfo kq_emlrtRSI;
extern emlrtRSInfo lq_emlrtRSI;
extern emlrtRSInfo mq_emlrtRSI;
extern emlrtRSInfo nq_emlrtRSI;
extern emlrtRSInfo oq_emlrtRSI;
extern emlrtRSInfo dr_emlrtRSI;
extern emlrtRSInfo er_emlrtRSI;
extern emlrtRSInfo fr_emlrtRSI;
extern emlrtRSInfo gr_emlrtRSI;
extern emlrtRSInfo hr_emlrtRSI;
extern emlrtRSInfo ir_emlrtRSI;
extern emlrtRSInfo jr_emlrtRSI;
extern emlrtRSInfo kr_emlrtRSI;
extern emlrtRSInfo lr_emlrtRSI;
extern emlrtRSInfo vr_emlrtRSI;
extern emlrtRSInfo wr_emlrtRSI;
extern emlrtRSInfo xr_emlrtRSI;
extern emlrtRSInfo ts_emlrtRSI;
extern emlrtRSInfo gv_emlrtRSI;
extern emlrtRSInfo hv_emlrtRSI;
extern emlrtRSInfo vw_emlrtRSI;
extern emlrtRSInfo yw_emlrtRSI;
extern emlrtRSInfo cx_emlrtRSI;
extern emlrtRSInfo ix_emlrtRSI;
extern emlrtRSInfo jx_emlrtRSI;
extern emlrtRSInfo kx_emlrtRSI;
extern emlrtRSInfo wy_emlrtRSI;
extern emlrtRSInfo xy_emlrtRSI;
extern emlrtRSInfo rbb_emlrtRSI;
extern emlrtRSInfo sbb_emlrtRSI;
extern emlrtMCInfo d_emlrtMCI;
extern emlrtMCInfo p_emlrtMCI;
extern emlrtMCInfo q_emlrtMCI;
extern omp_lock_t emlrtLockGlobal;
extern omp_nest_lock_t emlrtNestLockGlobal;
extern emlrtRTEInfo d_emlrtRTEI;
extern emlrtRTEInfo f_emlrtRTEI;
extern emlrtRTEInfo g_emlrtRTEI;
extern emlrtRTEInfo o_emlrtRTEI;
extern emlrtDCInfo md_emlrtDCI;
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
extern emlrtRTEInfo oc_emlrtRTEI;
extern emlrtRTEInfo le_emlrtRTEI;
extern emlrtRTEInfo ne_emlrtRTEI;
extern emlrtRTEInfo we_emlrtRTEI;
extern emlrtRTEInfo lk_emlrtRTEI;
extern emlrtRTEInfo kl_emlrtRTEI;
extern emlrtRTEInfo yr_emlrtRTEI;
extern emlrtRTEInfo vt_emlrtRTEI;
extern emlrtRTEInfo pv_emlrtRTEI;
extern emlrtRTEInfo qv_emlrtRTEI;
extern emlrtRTEInfo rv_emlrtRTEI;
extern emlrtRTEInfo sv_emlrtRTEI;
extern const boolean_T bv[128];
extern const char_T cv1[19];
extern const char_T cv2[14];
extern const real_T dv[31];
extern emlrtRSInfo ybb_emlrtRSI;
extern emlrtRSInfo tcb_emlrtRSI;
extern emlrtRSInfo ycb_emlrtRSI;

/* End of code generation (LTSts_wrapper_data.h) */
