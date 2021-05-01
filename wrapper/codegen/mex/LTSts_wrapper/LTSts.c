/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LTSts.c
 *
 * Code generation for function 'LTSts'
 *
 */

/* Include files */
#include "LTSts.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_internal_types.h"
#include "LTSts_wrapper_mexutil.h"
#include "LTSts_wrapper_types.h"
#include "any.h"
#include "bsxfun.h"
#include "colon.h"
#include "combineVectorElements.h"
#include "eml_mtimes_helper.h"
#include "indexShapeCheck.h"
#include "mldivide.h"
#include "mtimes.h"
#include "power.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sum.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo em_emlrtRSI = { 2795,/* lineNo */
  "LTSts/ALSbsxfun",                   /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo fm_emlrtRSI = { 2798,/* lineNo */
  "LTSts/ALSbsxfun",                   /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo gm_emlrtRSI = { 2805,/* lineNo */
  "LTSts/ALSbsxfun",                   /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo hm_emlrtRSI = { 2807,/* lineNo */
  "LTSts/ALSbsxfun",                   /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo im_emlrtRSI = { 2811,/* lineNo */
  "LTSts/ALSbsxfun",                   /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo jm_emlrtRSI = { 2813,/* lineNo */
  "LTSts/ALSbsxfun",                   /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo km_emlrtRSI = { 2818,/* lineNo */
  "LTSts/ALSbsxfun",                   /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo lm_emlrtRSI = { 2825,/* lineNo */
  "LTSts/ALSbsxfun",                   /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo mm_emlrtRSI = { 2828,/* lineNo */
  "LTSts/ALSbsxfun",                   /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo nm_emlrtRSI = { 2829,/* lineNo */
  "LTSts/ALSbsxfun",                   /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo om_emlrtRSI = { 2831,/* lineNo */
  "LTSts/ALSbsxfun",                   /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo pm_emlrtRSI = { 2832,/* lineNo */
  "LTSts/ALSbsxfun",                   /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo qm_emlrtRSI = { 2836,/* lineNo */
  "LTSts/ALSbsxfun",                   /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo rm_emlrtRSI = { 2837,/* lineNo */
  "LTSts/ALSbsxfun",                   /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo sm_emlrtRSI = { 2839,/* lineNo */
  "LTSts/ALSbsxfun",                   /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo tm_emlrtRSI = { 2840,/* lineNo */
  "LTSts/ALSbsxfun",                   /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo um_emlrtRSI = { 2856,/* lineNo */
  "LTSts/ALSbsxfun",                   /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo wm_emlrtRSI = { 2706,/* lineNo */
  "LTSts/ALS",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo xm_emlrtRSI = { 2711,/* lineNo */
  "LTSts/ALS",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ym_emlrtRSI = { 2712,/* lineNo */
  "LTSts/ALS",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo an_emlrtRSI = { 2713,/* lineNo */
  "LTSts/ALS",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo bn_emlrtRSI = { 2716,/* lineNo */
  "LTSts/ALS",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo cn_emlrtRSI = { 2722,/* lineNo */
  "LTSts/ALS",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo dn_emlrtRSI = { 2724,/* lineNo */
  "LTSts/ALS",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo en_emlrtRSI = { 2725,/* lineNo */
  "LTSts/ALS",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo fn_emlrtRSI = { 2726,/* lineNo */
  "LTSts/ALS",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo gn_emlrtRSI = { 2729,/* lineNo */
  "LTSts/ALS",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo hn_emlrtRSI = { 2730,/* lineNo */
  "LTSts/ALS",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo in_emlrtRSI = { 2739,/* lineNo */
  "LTSts/ALS",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo jn_emlrtRSI = { 2742,/* lineNo */
  "LTSts/ALS",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo kn_emlrtRSI = { 2751,/* lineNo */
  "LTSts/ALS",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ln_emlrtRSI = { 2758,/* lineNo */
  "LTSts/ALS",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo mn_emlrtRSI = { 2759,/* lineNo */
  "LTSts/ALS",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo nn_emlrtRSI = { 2774,/* lineNo */
  "LTSts/ALS",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo on_emlrtRSI = { 2870,/* lineNo */
  "LTSts/lik",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo pn_emlrtRSI = { 2875,/* lineNo */
  "LTSts/lik",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo qn_emlrtRSI = { 2878,/* lineNo */
  "LTSts/lik",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo rn_emlrtRSI = { 2883,/* lineNo */
  "LTSts/lik",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo sn_emlrtRSI = { 2895,/* lineNo */
  "LTSts/lik",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo tn_emlrtRSI = { 2903,/* lineNo */
  "LTSts/lik",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo un_emlrtRSI = { 2927,/* lineNo */
  "LTSts/lik",                         /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo jo_emlrtRSI = { 3033,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ko_emlrtRSI = { 3036,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo lo_emlrtRSI = { 3040,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo mo_emlrtRSI = { 3048,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo no_emlrtRSI = { 3064,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo oo_emlrtRSI = { 3065,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo po_emlrtRSI = { 3068,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo qo_emlrtRSI = { 3075,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ro_emlrtRSI = { 3076,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo so_emlrtRSI = { 3079,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo to_emlrtRSI = { 3081,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo uo_emlrtRSI = { 3083,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo vo_emlrtRSI = { 3085,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo wo_emlrtRSI = { 3088,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo xo_emlrtRSI = { 3094,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo yo_emlrtRSI = { 3096,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ap_emlrtRSI = { 3105,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo bp_emlrtRSI = { 3107,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo cp_emlrtRSI = { 3114,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo dp_emlrtRSI = { 3118,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ep_emlrtRSI = { 3122,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo fp_emlrtRSI = { 3124,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo gp_emlrtRSI = { 3139,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo hp_emlrtRSI = { 3141,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ip_emlrtRSI = { 3148,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo jp_emlrtRSI = { 3159,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo kp_emlrtRSI = { 3167,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo lp_emlrtRSI = { 3169,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo mp_emlrtRSI = { 3185,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo np_emlrtRSI = { 3186,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo op_emlrtRSI = { 3189,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo pp_emlrtRSI = { 3197,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo qp_emlrtRSI = { 3198,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo rp_emlrtRSI = { 3201,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo sp_emlrtRSI = { 3203,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo tp_emlrtRSI = { 3205,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo up_emlrtRSI = { 3207,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo vp_emlrtRSI = { 3210,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo wp_emlrtRSI = { 3212,/* lineNo */
  "LTSts/IRWLSreg",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo yr_emlrtRSI = { 44, /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

static emlrtRSInfo as_emlrtRSI = { 3269,/* lineNo */
  "corfactorRAW",                      /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo bs_emlrtRSI = { 3270,/* lineNo */
  "corfactorRAW",                      /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo sab_emlrtRSI = { 3320,/* lineNo */
  "corfactorREW",                      /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo tab_emlrtRSI = { 3321,/* lineNo */
  "corfactorREW",                      /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtMCInfo r_emlrtMCI = { 3284,/* lineNo */
  5,                                   /* colNo */
  "corfactorRAW",                      /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtMCInfo s_emlrtMCI = { 3285,/* lineNo */
  5,                                   /* colNo */
  "corfactorRAW",                      /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtMCInfo t_emlrtMCI = { 3286,/* lineNo */
  5,                                   /* colNo */
  "corfactorRAW",                      /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtMCInfo u_emlrtMCI = { 3287,/* lineNo */
  5,                                   /* colNo */
  "corfactorRAW",                      /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtMCInfo w_emlrtMCI = { 3335,/* lineNo */
  5,                                   /* colNo */
  "corfactorREW",                      /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtMCInfo x_emlrtMCI = { 3336,/* lineNo */
  5,                                   /* colNo */
  "corfactorREW",                      /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtMCInfo y_emlrtMCI = { 3337,/* lineNo */
  5,                                   /* colNo */
  "corfactorREW",                      /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtMCInfo ab_emlrtMCI = { 3338,/* lineNo */
  5,                                   /* colNo */
  "corfactorREW",                      /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo jb_emlrtECI = { -1, /* nDims */
  2849,                                /* lineNo */
  29,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo kb_emlrtECI = { -1, /* nDims */
  2846,                                /* lineNo */
  13,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo lb_emlrtECI = { -1, /* nDims */
  2844,                                /* lineNo */
  13,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo mb_emlrtECI = { -1, /* nDims */
  2840,                                /* lineNo */
  27,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo xg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2840,                                /* lineNo */
  93,                                  /* colNo */
  "b0145",                             /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ae_emlrtDCI = { 2840,/* lineNo */
  93,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2840,                                /* lineNo */
  83,                                  /* colNo */
  "b0145",                             /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo be_emlrtDCI = { 2840,/* lineNo */
  83,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ah_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2840,                                /* lineNo */
  58,                                  /* colNo */
  "b0145",                             /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ce_emlrtDCI = { 2840,/* lineNo */
  58,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2840,                                /* lineNo */
  56,                                  /* colNo */
  "b0145",                             /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo nb_emlrtECI = { -1, /* nDims */
  2837,                                /* lineNo */
  27,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo ch_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2837,                                /* lineNo */
  130,                                 /* colNo */
  "b0145",                             /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2837,                                /* lineNo */
  93,                                  /* colNo */
  "b0145",                             /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo de_emlrtDCI = { 2837,/* lineNo */
  93,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo eh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2837,                                /* lineNo */
  83,                                  /* colNo */
  "b0145",                             /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ee_emlrtDCI = { 2837,/* lineNo */
  83,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2837,                                /* lineNo */
  58,                                  /* colNo */
  "b0145",                             /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fe_emlrtDCI = { 2837,/* lineNo */
  58,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2837,                                /* lineNo */
  56,                                  /* colNo */
  "b0145",                             /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ob_emlrtECI = { -1, /* nDims */
  2832,                                /* lineNo */
  27,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo hh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2832,                                /* lineNo */
  58,                                  /* colNo */
  "b0145",                             /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ge_emlrtDCI = { 2832,/* lineNo */
  58,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ih_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2832,                                /* lineNo */
  56,                                  /* colNo */
  "b0145",                             /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo pb_emlrtECI = { -1, /* nDims */
  2829,                                /* lineNo */
  27,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo jh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2829,                                /* lineNo */
  86,                                  /* colNo */
  "b0145",                             /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2829,                                /* lineNo */
  58,                                  /* colNo */
  "b0145",                             /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo he_emlrtDCI = { 2829,/* lineNo */
  58,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2829,                                /* lineNo */
  56,                                  /* colNo */
  "b0145",                             /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo qb_emlrtECI = { -1, /* nDims */
  2825,                                /* lineNo */
  25,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo mh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2825,                                /* lineNo */
  81,                                  /* colNo */
  "b0145",                             /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ie_emlrtDCI = { 2825,/* lineNo */
  81,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2825,                                /* lineNo */
  65,                                  /* colNo */
  "b0145",                             /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo je_emlrtDCI = { 2825,/* lineNo */
  65,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo oh_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  2825,                                /* lineNo */
  47,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ke_emlrtDCI = { 2825,/* lineNo */
  47,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo rb_emlrtECI = { -1, /* nDims */
  2818,                                /* lineNo */
  39,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo ph_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  2813,                                /* lineNo */
  91,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo le_emlrtDCI = { 2813,/* lineNo */
  91,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qh_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  2811,                                /* lineNo */
  91,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo me_emlrtDCI = { 2811,/* lineNo */
  91,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rh_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  2807,                                /* lineNo */
  82,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ne_emlrtDCI = { 2807,/* lineNo */
  82,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sh_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  2805,                                /* lineNo */
  82,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo oe_emlrtDCI = { 2805,/* lineNo */
  82,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo th_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2795,                                /* lineNo */
  27,                                  /* colNo */
  "newbeta",                           /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo pe_emlrtDCI = { 2795,/* lineNo */
  27,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo uh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2798,                                /* lineNo */
  23,                                  /* colNo */
  "Xseaso",                            /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qe_emlrtDCI = { 2798,/* lineNo */
  23,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2813,                                /* lineNo */
  48,                                  /* colNo */
  "Xtrend",                            /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo re_emlrtDCI = { 2813,/* lineNo */
  48,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2807,                                /* lineNo */
  48,                                  /* colNo */
  "Xtrend",                            /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo se_emlrtDCI = { 2807,/* lineNo */
  48,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2811,                                /* lineNo */
  48,                                  /* colNo */
  "Xtrend",                            /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo te_emlrtDCI = { 2811,/* lineNo */
  48,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2805,                                /* lineNo */
  48,                                  /* colNo */
  "Xtrend",                            /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ue_emlrtDCI = { 2805,/* lineNo */
  48,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ai_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2813,                                /* lineNo */
  57,                                  /* colNo */
  "X",                                 /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ve_emlrtDCI = { 2813,/* lineNo */
  57,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2807,                                /* lineNo */
  76,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo we_emlrtDCI = { 2807,/* lineNo */
  76,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ci_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2811,                                /* lineNo */
  57,                                  /* colNo */
  "X",                                 /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo xe_emlrtDCI = { 2811,/* lineNo */
  57,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo di_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2805,                                /* lineNo */
  76,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ye_emlrtDCI = { 2805,/* lineNo */
  76,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ei_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2813,                                /* lineNo */
  85,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo af_emlrtDCI = { 2813,/* lineNo */
  85,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2811,                                /* lineNo */
  85,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bf_emlrtDCI = { 2811,/* lineNo */
  85,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2805,                                /* lineNo */
  102,                                 /* colNo */
  "Xlshift",                           /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cf_emlrtDCI = { 2805,/* lineNo */
  102,                                 /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2811,                                /* lineNo */
  111,                                 /* colNo */
  "Xlshift",                           /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo df_emlrtDCI = { 2811,/* lineNo */
  111,                                 /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ii_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2818,                                /* lineNo */
  43,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ef_emlrtDCI = { 2818,/* lineNo */
  43,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ji_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2825,                                /* lineNo */
  29,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ff_emlrtDCI = { 2825,/* lineNo */
  29,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ki_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2825,                                /* lineNo */
  41,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gf_emlrtDCI = { 2825,/* lineNo */
  41,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo li_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2840,                                /* lineNo */
  31,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hf_emlrtDCI = { 2840,/* lineNo */
  31,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2837,                                /* lineNo */
  31,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo if_emlrtDCI = { 2837,/* lineNo */
  31,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ni_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2832,                                /* lineNo */
  31,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jf_emlrtDCI = { 2832,/* lineNo */
  31,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo oi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2829,                                /* lineNo */
  31,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kf_emlrtDCI = { 2829,/* lineNo */
  31,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2840,                                /* lineNo */
  43,                                  /* colNo */
  "Xtrend",                            /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lf_emlrtDCI = { 2840,/* lineNo */
  43,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2837,                                /* lineNo */
  43,                                  /* colNo */
  "Xtrend",                            /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mf_emlrtDCI = { 2837,/* lineNo */
  43,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ri_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2832,                                /* lineNo */
  43,                                  /* colNo */
  "Xtrend",                            /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nf_emlrtDCI = { 2832,/* lineNo */
  43,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo si_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2829,                                /* lineNo */
  43,                                  /* colNo */
  "Xtrend",                            /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo of_emlrtDCI = { 2829,/* lineNo */
  43,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ti_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2831,                                /* lineNo */
  60,                                  /* colNo */
  "Xseaso",                            /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo pf_emlrtDCI = { 2831,/* lineNo */
  60,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ui_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2829,                                /* lineNo */
  75,                                  /* colNo */
  "Xlshift",                           /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qf_emlrtDCI = { 2829,/* lineNo */
  75,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2828,                                /* lineNo */
  60,                                  /* colNo */
  "Xseaso",                            /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rf_emlrtDCI = { 2828,/* lineNo */
  60,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2840,                                /* lineNo */
  69,                                  /* colNo */
  "X",                                 /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo sf_emlrtDCI = { 2840,/* lineNo */
  69,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2837,                                /* lineNo */
  69,                                  /* colNo */
  "X",                                 /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo tf_emlrtDCI = { 2837,/* lineNo */
  69,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo uf_emlrtDCI = { 2844,/* lineNo */
  21,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2844,                                /* lineNo */
  21,                                  /* colNo */
  "newbeta",                           /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo aj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2839,                                /* lineNo */
  60,                                  /* colNo */
  "Xseaso",                            /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo vf_emlrtDCI = { 2839,/* lineNo */
  60,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2837,                                /* lineNo */
  119,                                 /* colNo */
  "Xlshift",                           /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo wf_emlrtDCI = { 2837,/* lineNo */
  119,                                 /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo xf_emlrtDCI = { 2846,/* lineNo */
  21,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2846,                                /* lineNo */
  21,                                  /* colNo */
  "newbeta",                           /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2836,                                /* lineNo */
  60,                                  /* colNo */
  "Xseaso",                            /* aName */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo yf_emlrtDCI = { 2836,/* lineNo */
  60,                                  /* colNo */
  "LTSts/ALSbsxfun",                   /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo sb_emlrtECI = { -1, /* nDims */
  2767,                                /* lineNo */
  29,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo tb_emlrtECI = { -1, /* nDims */
  2763,                                /* lineNo */
  13,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo ub_emlrtECI = { -1, /* nDims */
  2759,                                /* lineNo */
  49,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo vb_emlrtECI = { -1, /* nDims */
  2759,                                /* lineNo */
  22,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo wb_emlrtECI = { 2,  /* nDims */
  2759,                                /* lineNo */
  22,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo xb_emlrtECI = { -1, /* nDims */
  2758,                                /* lineNo */
  27,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo yb_emlrtECI = { -1, /* nDims */
  2751,                                /* lineNo */
  45,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo ac_emlrtECI = { -1, /* nDims */
  2747,                                /* lineNo */
  13,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo bc_emlrtECI = { -1, /* nDims */
  2747,                                /* lineNo */
  52,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo cc_emlrtECI = { 2,  /* nDims */
  2747,                                /* lineNo */
  52,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo ej_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  2707,                                /* lineNo */
  33,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ag_emlrtDCI = { 2707,/* lineNo */
  33,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2702,                                /* lineNo */
  20,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bg_emlrtDCI = { 2702,/* lineNo */
  20,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2703,                                /* lineNo */
  26,                                  /* colNo */
  "Xseaso",                            /* aName */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cg_emlrtDCI = { 2703,/* lineNo */
  26,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2704,                                /* lineNo */
  26,                                  /* colNo */
  "Xtrend",                            /* aName */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo dg_emlrtDCI = { 2704,/* lineNo */
  26,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ij_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2705,                                /* lineNo */
  20,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo eg_emlrtDCI = { 2705,/* lineNo */
  20,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2707,                                /* lineNo */
  27,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fg_emlrtDCI = { 2707,/* lineNo */
  27,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2721,                                /* lineNo */
  21,                                  /* colNo */
  "X",                                 /* aName */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gg_emlrtDCI = { 2721,/* lineNo */
  21,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2711,                                /* lineNo */
  36,                                  /* colNo */
  "Xlshift",                           /* aName */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hg_emlrtDCI = { 2711,/* lineNo */
  36,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2724,                                /* lineNo */
  36,                                  /* colNo */
  "Xlshift",                           /* aName */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ig_emlrtDCI = { 2724,/* lineNo */
  36,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2739,                                /* lineNo */
  27,                                  /* colNo */
  "newbeta",                           /* aName */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jg_emlrtDCI = { 2739,/* lineNo */
  27,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo kg_emlrtDCI = { 2747,/* lineNo */
  40,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo oj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2747,                                /* lineNo */
  40,                                  /* colNo */
  "XtrendXbsbXseasonXlshift",          /* aName */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2758,                                /* lineNo */
  58,                                  /* colNo */
  "b0145",                             /* aName */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2759,                                /* lineNo */
  90,                                  /* colNo */
  "b0145",                             /* aName */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lg_emlrtDCI = { 2759,/* lineNo */
  90,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo mg_emlrtDCI = { 2762,/* lineNo */
  21,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2762,                                /* lineNo */
  21,                                  /* colNo */
  "newbeta",                           /* aName */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ng_emlrtDCI = { 2763,/* lineNo */
  21,                                  /* colNo */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2763,                                /* lineNo */
  21,                                  /* colNo */
  "newbeta",                           /* aName */
  "LTSts/ALS",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2870,                                /* lineNo */
  39,                                  /* colNo */
  "beta0",                             /* aName */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo og_emlrtDCI = { 2870,/* lineNo */
  41,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo uj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2870,                                /* lineNo */
  41,                                  /* colNo */
  "beta0",                             /* aName */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo pg_emlrtDCI = { 2878,/* lineNo */
  47,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2878,                                /* lineNo */
  47,                                  /* colNo */
  "beta0",                             /* aName */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qg_emlrtDCI = { 2878,/* lineNo */
  54,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2878,                                /* lineNo */
  54,                                  /* colNo */
  "beta0",                             /* aName */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rg_emlrtDCI = { 2883,/* lineNo */
  34,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xj_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  2883,                                /* lineNo */
  34,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo sg_emlrtDCI = { 2883,/* lineNo */
  52,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2883,                                /* lineNo */
  52,                                  /* colNo */
  "beta0",                             /* aName */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo tg_emlrtDCI = { 2883,/* lineNo */
  67,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ak_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2883,                                /* lineNo */
  67,                                  /* colNo */
  "beta0",                             /* aName */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo dc_emlrtECI = { -1, /* nDims */
  2884,                                /* lineNo */
  27,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtDCInfo ug_emlrtDCI = { 2895,/* lineNo */
  34,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2895,                                /* lineNo */
  34,                                  /* colNo */
  "beta0",                             /* aName */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo vg_emlrtDCI = { 2895,/* lineNo */
  49,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ck_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2895,                                /* lineNo */
  49,                                  /* colNo */
  "beta0",                             /* aName */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo wg_emlrtDCI = { 2903,/* lineNo */
  30,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo dk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2903,                                /* lineNo */
  30,                                  /* colNo */
  "beta0",                             /* aName */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ec_emlrtECI = { -1, /* nDims */
  2911,                                /* lineNo */
  14,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo fc_emlrtECI = { -1, /* nDims */
  2927,                                /* lineNo */
  18,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo ek_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2870,                                /* lineNo */
  26,                                  /* colNo */
  "Xtrend",                            /* aName */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo xg_emlrtDCI = { 2870,/* lineNo */
  26,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo yg_emlrtDCI = { 2875,/* lineNo */
  47,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2875,                                /* lineNo */
  47,                                  /* colNo */
  "beta0",                             /* aName */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2875,                                /* lineNo */
  34,                                  /* colNo */
  "Xseaso",                            /* aName */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ah_emlrtDCI = { 2875,/* lineNo */
  34,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2878,                                /* lineNo */
  34,                                  /* colNo */
  "Xseaso",                            /* aName */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bh_emlrtDCI = { 2878,/* lineNo */
  34,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ik_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2903,                                /* lineNo */
  46,                                  /* colNo */
  "Xlshift",                           /* aName */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ch_emlrtDCI = { 2903,/* lineNo */
  46,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2895,                                /* lineNo */
  21,                                  /* colNo */
  "X",                                 /* aName */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo dh_emlrtDCI = { 2895,/* lineNo */
  21,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2927,                                /* lineNo */
  22,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo eh_emlrtDCI = { 2927,/* lineNo */
  22,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2883,                                /* lineNo */
  28,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fh_emlrtDCI = { 2883,/* lineNo */
  28,                                  /* colNo */
  "LTSts/lik",                         /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo gc_emlrtECI = { -1, /* nDims */
  3030,                                /* lineNo */
  15,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo mk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3040,                                /* lineNo */
  33,                                  /* colNo */
  "r2s",                               /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gh_emlrtDCI = { 3040,/* lineNo */
  35,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3040,                                /* lineNo */
  35,                                  /* colNo */
  "r2s",                               /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ok_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3064,                                /* lineNo */
  30,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hh_emlrtDCI = { 3064,/* lineNo */
  32,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3064,                                /* lineNo */
  32,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3065,                                /* lineNo */
  32,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ih_emlrtDCI = { 3065,/* lineNo */
  34,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3065,                                /* lineNo */
  34,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3068,                                /* lineNo */
  33,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jh_emlrtDCI = { 3068,/* lineNo */
  35,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3068,                                /* lineNo */
  35,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3075,                                /* lineNo */
  33,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kh_emlrtDCI = { 3075,/* lineNo */
  35,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3075,                                /* lineNo */
  35,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3076,                                /* lineNo */
  37,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lh_emlrtDCI = { 3076,/* lineNo */
  39,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3076,                                /* lineNo */
  39,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3079,                                /* lineNo */
  32,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mh_emlrtDCI = { 3079,/* lineNo */
  34,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo al_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3079,                                /* lineNo */
  34,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3081,                                /* lineNo */
  32,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nh_emlrtDCI = { 3081,/* lineNo */
  34,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3081,                                /* lineNo */
  34,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3083,                                /* lineNo */
  32,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo oh_emlrtDCI = { 3083,/* lineNo */
  34,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo el_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3083,                                /* lineNo */
  34,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3085,                                /* lineNo */
  31,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ph_emlrtDCI = { 3085,/* lineNo */
  33,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3085,                                /* lineNo */
  33,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3088,                                /* lineNo */
  27,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qh_emlrtDCI = { 3088,/* lineNo */
  29,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo il_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3088,                                /* lineNo */
  29,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo hc_emlrtECI = { -1, /* nDims */
  3154,                                /* lineNo */
  29,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo ic_emlrtECI = { -1, /* nDims */
  3166,                                /* lineNo */
  19,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo jl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3185,                                /* lineNo */
  30,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rh_emlrtDCI = { 3185,/* lineNo */
  32,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3185,                                /* lineNo */
  32,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ll_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3186,                                /* lineNo */
  32,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo sh_emlrtDCI = { 3186,/* lineNo */
  34,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ml_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3186,                                /* lineNo */
  34,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3189,                                /* lineNo */
  33,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo th_emlrtDCI = { 3189,/* lineNo */
  35,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ol_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3189,                                /* lineNo */
  35,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3197,                                /* lineNo */
  33,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo uh_emlrtDCI = { 3197,/* lineNo */
  35,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ql_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3197,                                /* lineNo */
  35,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3198,                                /* lineNo */
  37,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo vh_emlrtDCI = { 3198,/* lineNo */
  39,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3198,                                /* lineNo */
  39,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3201,                                /* lineNo */
  32,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo wh_emlrtDCI = { 3201,/* lineNo */
  34,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ul_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3201,                                /* lineNo */
  34,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3203,                                /* lineNo */
  32,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo xh_emlrtDCI = { 3203,/* lineNo */
  34,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3203,                                /* lineNo */
  34,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3205,                                /* lineNo */
  32,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo yh_emlrtDCI = { 3205,/* lineNo */
  34,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3205,                                /* lineNo */
  34,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo am_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3207,                                /* lineNo */
  31,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ai_emlrtDCI = { 3207,/* lineNo */
  33,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3207,                                /* lineNo */
  33,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3210,                                /* lineNo */
  27,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bi_emlrtDCI = { 3210,/* lineNo */
  29,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo dm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3210,                                /* lineNo */
  29,                                  /* colNo */
  "i_r2s",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo em_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3075,                                /* lineNo */
  39,                                  /* colNo */
  "initialbeta",                       /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3064,                                /* lineNo */
  36,                                  /* colNo */
  "initialbeta",                       /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3185,                                /* lineNo */
  36,                                  /* colNo */
  "initialbeta",                       /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ci_emlrtDCI = { 3225,/* lineNo */
  17,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3225,                                /* lineNo */
  17,                                  /* colNo */
  "weights",                           /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo im_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3197,                                /* lineNo */
  39,                                  /* colNo */
  "initialbeta",                       /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3212,                                /* lineNo */
  32,                                  /* colNo */
  "r2",                                /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo di_emlrtDCI = { 3212,/* lineNo */
  32,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo km_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3094,                                /* lineNo */
  32,                                  /* colNo */
  "Xsel",                              /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ei_emlrtDCI = { 3094,/* lineNo */
  32,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3094,                                /* lineNo */
  43,                                  /* colNo */
  "y",                                 /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fi_emlrtDCI = { 3094,/* lineNo */
  43,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3076,                                /* lineNo */
  43,                                  /* colNo */
  "initialbeta",                       /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3065,                                /* lineNo */
  40,                                  /* colNo */
  "initialbeta",                       /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo om_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3186,                                /* lineNo */
  40,                                  /* colNo */
  "initialbeta",                       /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3198,                                /* lineNo */
  43,                                  /* colNo */
  "initialbeta",                       /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3079,                                /* lineNo */
  40,                                  /* colNo */
  "initialbeta",                       /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3079,                                /* lineNo */
  60,                                  /* colNo */
  "initialbeta",                       /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3081,                                /* lineNo */
  40,                                  /* colNo */
  "initialbeta",                       /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3083,                                /* lineNo */
  40,                                  /* colNo */
  "initialbeta",                       /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo um_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3201,                                /* lineNo */
  40,                                  /* colNo */
  "initialbeta",                       /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3201,                                /* lineNo */
  60,                                  /* colNo */
  "initialbeta",                       /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3203,                                /* lineNo */
  40,                                  /* colNo */
  "initialbeta",                       /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3205,                                /* lineNo */
  40,                                  /* colNo */
  "initialbeta",                       /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ym_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3122,                                /* lineNo */
  34,                                  /* colNo */
  "Xseld",                             /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gi_emlrtDCI = { 3122,/* lineNo */
  34,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo an_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3122,                                /* lineNo */
  44,                                  /* colNo */
  "y",                                 /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hi_emlrtDCI = { 3122,/* lineNo */
  44,                                  /* colNo */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  3128,                                /* lineNo */
  36,                                  /* colNo */
  "initialbeta",                       /* aName */
  "LTSts/IRWLSreg",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ll_emlrtRTEI = { 2695,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ml_emlrtRTEI = { 2696,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo nl_emlrtRTEI = { 2702,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ol_emlrtRTEI = { 2703,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo pl_emlrtRTEI = { 2704,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ql_emlrtRTEI = { 2705,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo rl_emlrtRTEI = { 2706,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo sl_emlrtRTEI = { 2707,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo tl_emlrtRTEI = { 2721,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ul_emlrtRTEI = { 2711,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo vl_emlrtRTEI = { 2716,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo wl_emlrtRTEI = { 2722,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo xl_emlrtRTEI = { 2718,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo yl_emlrtRTEI = { 2712,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo am_emlrtRTEI = { 2724,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo bm_emlrtRTEI = { 2739,/* lineNo */
  19,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo cm_emlrtRTEI = { 2747,/* lineNo */
  40,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo dm_emlrtRTEI = { 2729,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo em_emlrtRTEI = { 2747,/* lineNo */
  52,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo fm_emlrtRTEI = { 2713,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo gm_emlrtRTEI = { 2725,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo hm_emlrtRTEI = { 2751,/* lineNo */
  45,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo im_emlrtRTEI = { 2714,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo jm_emlrtRTEI = { 2758,/* lineNo */
  52,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo km_emlrtRTEI = { 2730,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo lm_emlrtRTEI = { 2758,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo mm_emlrtRTEI = { 2731,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo nm_emlrtRTEI = { 2759,/* lineNo */
  84,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo om_emlrtRTEI = { 2726,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo pm_emlrtRTEI = { 2759,/* lineNo */
  49,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo qm_emlrtRTEI = { 2762,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo rm_emlrtRTEI = { 2727,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo sm_emlrtRTEI = { 2763,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo tm_emlrtRTEI = { 2769,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo um_emlrtRTEI = { 2775,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo vm_emlrtRTEI = { 2692,/* lineNo */
  33,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo wm_emlrtRTEI = { 2727,/* lineNo */
  30,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo xm_emlrtRTEI = { 2870,/* lineNo */
  19,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ym_emlrtRTEI = { 2870,/* lineNo */
  33,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo an_emlrtRTEI = { 2890,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo bn_emlrtRTEI = { 2875,/* lineNo */
  47,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo cn_emlrtRTEI = { 2905,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo dn_emlrtRTEI = { 2875,/* lineNo */
  27,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo en_emlrtRTEI = { 2903,/* lineNo */
  38,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo fn_emlrtRTEI = { 2878,/* lineNo */
  27,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo gn_emlrtRTEI = { 2895,/* lineNo */
  19,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo hn_emlrtRTEI = { 2911,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo in_emlrtRTEI = { 2875,/* lineNo */
  41,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo jn_emlrtRTEI = { 2878,/* lineNo */
  41,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo kn_emlrtRTEI = { 2895,/* lineNo */
  28,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ln_emlrtRTEI = { 2927,/* lineNo */
  18,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo mn_emlrtRTEI = { 2883,/* lineNo */
  24,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo nn_emlrtRTEI = { 2883,/* lineNo */
  45,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo on_emlrtRTEI = { 2884,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo pn_emlrtRTEI = { 2870,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo qn_emlrtRTEI = { 2883,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo rn_emlrtRTEI = { 2903,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo sn_emlrtRTEI = { 2868,/* lineNo */
  18,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo tn_emlrtRTEI = { 3030,/* lineNo */
  15,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo un_emlrtRTEI = { 3040,/* lineNo */
  29,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo vn_emlrtRTEI = { 3044,/* lineNo */
  27,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo wn_emlrtRTEI = { 3050,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo xn_emlrtRTEI = { 3048,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo yn_emlrtRTEI = { 3088,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ao_emlrtRTEI = { 3224,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo bo_emlrtRTEI = { 3210,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo co_emlrtRTEI = { 3075,/* lineNo */
  27,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo do_emlrtRTEI = { 3064,/* lineNo */
  24,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo eo_emlrtRTEI = { 3225,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo fo_emlrtRTEI = { 3185,/* lineNo */
  24,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo go_emlrtRTEI = { 3212,/* lineNo */
  29,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ho_emlrtRTEI = { 3197,/* lineNo */
  27,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo io_emlrtRTEI = { 3094,/* lineNo */
  27,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo jo_emlrtRTEI = { 3113,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ko_emlrtRTEI = { 3147,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo lo_emlrtRTEI = { 3094,/* lineNo */
  41,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo mo_emlrtRTEI = { 3232,/* lineNo */
  51,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo no_emlrtRTEI = { 3232,/* lineNo */
  66,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo oo_emlrtRTEI = { 3065,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo po_emlrtRTEI = { 3186,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo qo_emlrtRTEI = { 3076,/* lineNo */
  31,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ro_emlrtRTEI = { 3068,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo so_emlrtRTEI = { 3189,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo to_emlrtRTEI = { 3154,/* lineNo */
  29,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo uo_emlrtRTEI = { 3198,/* lineNo */
  31,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo vo_emlrtRTEI = { 3154,/* lineNo */
  54,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo wo_emlrtRTEI = { 3118,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo xo_emlrtRTEI = { 3079,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo yo_emlrtRTEI = { 3081,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ap_emlrtRTEI = { 3085,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo bp_emlrtRTEI = { 3083,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo cp_emlrtRTEI = { 3201,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo dp_emlrtRTEI = { 3203,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ep_emlrtRTEI = { 3207,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo fp_emlrtRTEI = { 3205,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo gp_emlrtRTEI = { 3160,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo hp_emlrtRTEI = { 3122,/* lineNo */
  28,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ip_emlrtRTEI = { 3166,/* lineNo */
  19,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo jp_emlrtRTEI = { 3122,/* lineNo */
  42,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo kp_emlrtRTEI = { 3128,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo lp_emlrtRTEI = { 3171,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo mp_emlrtRTEI = { 3033,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo np_emlrtRTEI = { 3036,/* lineNo */
  16,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo op_emlrtRTEI = { 3122,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo pp_emlrtRTEI = { 2785,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo qp_emlrtRTEI = { 2786,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo rp_emlrtRTEI = { 2795,/* lineNo */
  19,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo sp_emlrtRTEI = { 2798,/* lineNo */
  16,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo tp_emlrtRTEI = { 2813,/* lineNo */
  41,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo up_emlrtRTEI = { 2807,/* lineNo */
  41,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo vp_emlrtRTEI = { 2811,/* lineNo */
  41,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo wp_emlrtRTEI = { 2805,/* lineNo */
  41,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo xp_emlrtRTEI = { 2813,/* lineNo */
  55,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo yp_emlrtRTEI = { 2807,/* lineNo */
  72,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo aq_emlrtRTEI = { 2811,/* lineNo */
  55,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo bq_emlrtRTEI = { 2805,/* lineNo */
  72,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo cq_emlrtRTEI = { 2813,/* lineNo */
  81,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo dq_emlrtRTEI = { 2805,/* lineNo */
  94,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo eq_emlrtRTEI = { 2811,/* lineNo */
  81,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo fq_emlrtRTEI = { 2811,/* lineNo */
  64,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo gq_emlrtRTEI = { 2811,/* lineNo */
  103,                                 /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo hq_emlrtRTEI = { 2807,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo iq_emlrtRTEI = { 2818,/* lineNo */
  39,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo jq_emlrtRTEI = { 2813,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo kq_emlrtRTEI = { 2805,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo lq_emlrtRTEI = { 2811,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo mq_emlrtRTEI = { 2825,/* lineNo */
  25,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo nq_emlrtRTEI = { 2825,/* lineNo */
  37,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo oq_emlrtRTEI = { 2825,/* lineNo */
  58,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo pq_emlrtRTEI = { 2840,/* lineNo */
  27,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo qq_emlrtRTEI = { 2837,/* lineNo */
  27,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo rq_emlrtRTEI = { 2832,/* lineNo */
  27,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo sq_emlrtRTEI = { 2829,/* lineNo */
  27,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo tq_emlrtRTEI = { 2840,/* lineNo */
  36,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo uq_emlrtRTEI = { 2837,/* lineNo */
  36,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo vq_emlrtRTEI = { 2832,/* lineNo */
  36,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo wq_emlrtRTEI = { 2829,/* lineNo */
  36,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo xq_emlrtRTEI = { 2840,/* lineNo */
  50,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo yq_emlrtRTEI = { 2837,/* lineNo */
  50,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ar_emlrtRTEI = { 2832,/* lineNo */
  50,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo br_emlrtRTEI = { 2829,/* lineNo */
  50,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo cr_emlrtRTEI = { 2829,/* lineNo */
  67,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo dr_emlrtRTEI = { 2831,/* lineNo */
  53,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo er_emlrtRTEI = { 2840,/* lineNo */
  67,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo fr_emlrtRTEI = { 2837,/* lineNo */
  67,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo gr_emlrtRTEI = { 2844,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo hr_emlrtRTEI = { 2828,/* lineNo */
  53,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ir_emlrtRTEI = { 2840,/* lineNo */
  76,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo jr_emlrtRTEI = { 2837,/* lineNo */
  76,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo kr_emlrtRTEI = { 2846,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo lr_emlrtRTEI = { 2837,/* lineNo */
  111,                                 /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo mr_emlrtRTEI = { 2839,/* lineNo */
  53,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo nr_emlrtRTEI = { 2851,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo or_emlrtRTEI = { 2836,/* lineNo */
  53,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo pr_emlrtRTEI = { 2857,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo qr_emlrtRTEI = { 2798,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo rr_emlrtRTEI = { 2818,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo sr_emlrtRTEI = { 2825,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo tr_emlrtRTEI = { 2782,/* lineNo */
  33,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static const char_T cv3[69] = { 'C', 'o', 'r', 'r', 'e', 'c', 't', 'i', 'o', 'n',
  ' ', 'f', 'a', 'c', 't', 'o', 'r', ' ', 'f', 'o', 'r', ' ', 'c', 'o', 'v', 'a',
  'r', 'i', 'a', 'n', 'c', 'e', ' ', 'm', 'a', 't', 'r', 'i', 'x', ' ', 'b', 'a',
  's', 'e', 'd', ' ', 'o', 'n', ' ', 's', 'i', 'm', 'u', 'l', 'a', 't', 'i', 'o',
  'n', 's', ' ', 'f', 'o', 'u', 'n', 'd', ' ', '=', '1' };

static const char_T cv4[75] = { 'G', 'i', 'v', 'e', 'n', ' ', 't', 'h', 'a', 't',
  ' ', 't', 'h', 'i', 's', ' ', 'v', 'a', 'l', 'u', 'e', ' ', 'i', 's', ' ', 'c',
  'l', 'e', 'a', 'r', 'l', 'y', ' ', 'w', 'r', 'o', 'n', 'g', ' ', 'w', 'e', ' ',
  'p', 'u', 't', ' ', 'i', 't', ' ', 'e', 'q', 'u', 'a', 'l', ' ', 't', 'o', ' ',
  '1', ' ', '(', 'n', 'o', ' ', 'c', 'o', 'r', 'r', 'e', 'c', 't', 'i', 'o', 'n',
  ')' };

static const char_T cv5[51] = { 'T', 'h', 'i', 's', ' ', 'm', 'a', 'y', ' ', 'h',
  'a', 'p', 'p', 'e', 'n', ' ', 'w', 'h', 'e', 'n', ' ', 'n', ' ', 'i', 's', ' ',
  'v', 'e', 'r', 'y', ' ', 's', 'm', 'a', 'l', 'l', ' ', 'a', 'n', 'd', ' ', 'p',
  ' ', 'i', 's', ' ', 'l', 'a', 'r', 'g', 'e' };

static emlrtRSInfo icb_emlrtRSI = { 3338,/* lineNo */
  "corfactorREW",                      /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo jcb_emlrtRSI = { 3337,/* lineNo */
  "corfactorREW",                      /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo kcb_emlrtRSI = { 3336,/* lineNo */
  "corfactorREW",                      /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo lcb_emlrtRSI = { 3335,/* lineNo */
  "corfactorREW",                      /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ncb_emlrtRSI = { 3287,/* lineNo */
  "corfactorRAW",                      /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ocb_emlrtRSI = { 3286,/* lineNo */
  "corfactorRAW",                      /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo pcb_emlrtRSI = { 3285,/* lineNo */
  "corfactorRAW",                      /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo qcb_emlrtRSI = { 3284,/* lineNo */
  "corfactorRAW",                      /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

/* Function Declarations */
static void ALSbsxfun(const emlrtStack *sp, const captured_var *reftolALS, const
                      captured_var *refstepsALS, const d_captured_var *indlinsc,
                      const d_captured_var *Xseaso, const d_captured_var *bsb,
                      const b_captured_var *isemptyX, const captured_var
                      *lshiftYN, const d_captured_var *Xtrend, const
                      d_captured_var *Seq, const captured_var *varampl, const
                      d_captured_var *Xlshift, const d_captured_var *X, const
                      d_captured_var *yin, const captured_var *trend, const
                      captured_var *nexpl, const d_captured_var *otherind, const
                      emxArray_real_T *beta0, emxArray_real_T *newbeta, real_T
                      *exitflag);
static void b_ALS(const emlrtStack *sp, const d_captured_var *Seq, const
                  d_captured_var *bsb, const d_captured_var *Xseaso, const
                  d_captured_var *Xtrend, const d_captured_var *yin, const
                  captured_var *trend, const captured_var *nexpl, const
                  captured_var *varampl, const b_captured_var *isemptyX, const
                  captured_var *lshiftYN, const d_captured_var *Xlshift, const
                  d_captured_var *X, const captured_var *reftolALS, const
                  captured_var *refstepsALS, const d_captured_var *indlinsc,
                  const d_captured_var *otherind, const emxArray_real_T *beta0,
                  emxArray_real_T *newbeta, real_T *exitflag);

/* Function Definitions */
static void ALSbsxfun(const emlrtStack *sp, const captured_var *reftolALS, const
                      captured_var *refstepsALS, const d_captured_var *indlinsc,
                      const d_captured_var *Xseaso, const d_captured_var *bsb,
                      const b_captured_var *isemptyX, const captured_var
                      *lshiftYN, const d_captured_var *Xtrend, const
                      d_captured_var *Seq, const captured_var *varampl, const
                      d_captured_var *Xlshift, const d_captured_var *X, const
                      d_captured_var *yin, const captured_var *trend, const
                      captured_var *nexpl, const d_captured_var *otherind, const
                      emxArray_real_T *beta0, emxArray_real_T *newbeta, real_T
                      *exitflag)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_boolean_T *r3;
  emxArray_int32_T *r2;
  emxArray_real_T *a;
  emxArray_real_T *at;
  emxArray_real_T *b0145;
  emxArray_real_T *b_a;
  emxArray_real_T *b_b0145;
  emxArray_real_T *oldbeta;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *tr_expl_nls_lshift;
  emxArray_real_T *varargin_1;
  emxArray_real_T *varargin_2;
  emxArray_real_T *varargin_3;
  emxArray_real_T *yhatnlseaso;
  real_T betadiff;
  real_T iter;
  real_T y;
  int32_T sizes[2];
  int32_T b_Xseaso;
  int32_T b_exitflag;
  int32_T b_input_sizes_idx_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T input_sizes_idx_1;
  int32_T loop_ub;
  int8_T c_input_sizes_idx_1;
  boolean_T empty_non_axis_sizes;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  iter = 0.0;
  betadiff = 9999.0;
  i = newbeta->size[0];
  newbeta->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(sp, newbeta, i, &pp_emlrtRTEI);
  loop_ub = beta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    newbeta->data[i] = beta0->data[i];
  }

  emxInit_real_T(sp, &oldbeta, 1, &qp_emlrtRTEI, true);
  i = oldbeta->size[0];
  oldbeta->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(sp, oldbeta, i, &qp_emlrtRTEI);
  loop_ub = beta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    oldbeta->data[i] = beta0->data[i];
  }

  /*  exitflag = flag which informs about convergence. exitflag =0 */
  /*  implies normal convergence, else no convergence has been obtained */
  b_exitflag = 0;
  emxInit_real_T(sp, &at, 1, &qr_emlrtRTEI, true);
  emxInit_real_T(sp, &tr_expl_nls_lshift, 2, &kq_emlrtRTEI, true);
  emxInit_real_T(sp, &b0145, 1, &rr_emlrtRTEI, true);
  emxInit_real_T(sp, &yhatnlseaso, 1, &sr_emlrtRTEI, true);
  emxInit_real_T(sp, &r, 1, &iq_emlrtRTEI, true);
  emxInit_real_T(sp, &r1, 1, &tr_emlrtRTEI, true);
  emxInit_int32_T(sp, &r2, 2, &tr_emlrtRTEI, true);
  emxInit_real_T(sp, &a, 2, &sp_emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_1, 2, &tp_emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_2, 2, &xp_emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_3, 2, &fq_emlrtRTEI, true);
  emxInit_real_T(sp, &b_a, 1, &lr_emlrtRTEI, true);
  emxInit_boolean_T(sp, &r3, 1, &we_emlrtRTEI, true);
  emxInit_real_T(sp, &b_b0145, 2, &oq_emlrtRTEI, true);
  exitg1 = false;
  while ((!exitg1) && ((betadiff > reftolALS->contents) && (iter <
           refstepsALS->contents))) {
    iter++;

    /*  b2378 estimate of linear part of seasonal component */
    st.site = &em_emlrtRSI;
    indexShapeCheck(&st, newbeta->size[0], *(int32_T (*)[2])indlinsc->
                    contents->size);
    i = b_b0145->size[0] * b_b0145->size[1];
    b_b0145->size[0] = 1;
    b_b0145->size[1] = indlinsc->contents->size[1];
    emxEnsureCapacity_real_T(sp, b_b0145, i, &rp_emlrtRTEI);
    loop_ub = indlinsc->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      if (indlinsc->contents->data[i] != (int32_T)muDoubleScalarFloor
          (indlinsc->contents->data[i])) {
        emlrtIntegerCheckR2012b(indlinsc->contents->data[i], &pe_emlrtDCI,
          (emlrtCTX)sp);
      }

      i1 = (int32_T)indlinsc->contents->data[i];
      if ((i1 < 1) || (i1 > newbeta->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, newbeta->size[0], &th_emlrtBCI,
          (emlrtCTX)sp);
      }

      b_b0145->data[i] = newbeta->data[i1 - 1];
    }

    /*  at= yhatseaso = fitted values for linear part of seasonal */
    /*  component */
    st.site = &fm_emlrtRSI;
    b_Xseaso = Xseaso->contents->size[0];
    loop_ub = Xseaso->contents->size[1];
    i = a->size[0] * a->size[1];
    a->size[0] = bsb->contents->size[0];
    a->size[1] = loop_ub;
    emxEnsureCapacity_real_T(&st, a, i, &sp_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = bsb->contents->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor
            (bsb->contents->data[i1])) {
          emlrtIntegerCheckR2012b(bsb->contents->data[i1], &qe_emlrtDCI, &st);
        }

        i2 = (int32_T)bsb->contents->data[i1];
        if ((i2 < 1) || (i2 > b_Xseaso)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, b_Xseaso, &uh_emlrtBCI, &st);
        }

        a->data[i1 + a->size[0] * i] = Xseaso->contents->data[(i2 +
          Xseaso->contents->size[0] * i) - 1];
      }
    }

    b_st.site = &qj_emlrtRSI;
    b_dynamic_size_checks(&b_st, a, b_b0145, a->size[1], indlinsc->
                          contents->size[1]);
    b_st.site = &pj_emlrtRSI;
    mtimes(&b_st, a, b_b0145, at);

    /*  OLS to estimate coefficients of trend + expl variables + non lin coeff of */
    /*  seasonal + coefficient of fixed level shift */
    /*  trlshift is the matrix of explanatory variables */
    if (isemptyX->contents) {
      if (lshiftYN->contents == 1.0) {
        betadiff = varampl->contents + 1.0;
        if (2.0 > betadiff) {
          i = 0;
          i1 = 0;
        } else {
          i = 1;
          if (betadiff != (int32_T)muDoubleScalarFloor(betadiff)) {
            emlrtIntegerCheckR2012b(betadiff, &oe_emlrtDCI, (emlrtCTX)sp);
          }

          if (((int32_T)betadiff < 1) || ((int32_T)betadiff > 4)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)betadiff, 1, 4, &sh_emlrtBCI,
              (emlrtCTX)sp);
          }

          i1 = (int32_T)betadiff;
        }

        st.site = &gm_emlrtRSI;
        c_indexShapeCheck(&st, *(int32_T (*)[2])Xlshift->contents->size,
                          bsb->contents->size[0]);
        st.site = &gm_emlrtRSI;
        input_sizes_idx_1 = Xtrend->contents->size[0];
        loop_ub = Xtrend->contents->size[1];
        i2 = varargin_1->size[0] * varargin_1->size[1];
        varargin_1->size[0] = bsb->contents->size[0];
        varargin_1->size[1] = loop_ub;
        emxEnsureCapacity_real_T(&st, varargin_1, i2, &wp_emlrtRTEI);
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_loop_ub = bsb->contents->size[0];
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            if (bsb->contents->data[i3] != (int32_T)muDoubleScalarFloor
                (bsb->contents->data[i3])) {
              emlrtIntegerCheckR2012b(bsb->contents->data[i3], &ue_emlrtDCI, &st);
            }

            i4 = (int32_T)bsb->contents->data[i3];
            if ((i4 < 1) || (i4 > input_sizes_idx_1)) {
              emlrtDynamicBoundsCheckR2012b(i4, 1, input_sizes_idx_1,
                &yh_emlrtBCI, &st);
            }

            varargin_1->data[i3 + varargin_1->size[0] * i2] = Xtrend->
              contents->data[(i4 + Xtrend->contents->size[0] * i2) - 1];
          }
        }

        b_Xseaso = Seq->contents->size[0];
        i2 = tr_expl_nls_lshift->size[0] * tr_expl_nls_lshift->size[1];
        tr_expl_nls_lshift->size[0] = bsb->contents->size[0];
        loop_ub = i1 - i;
        tr_expl_nls_lshift->size[1] = loop_ub;
        emxEnsureCapacity_real_T(&st, tr_expl_nls_lshift, i2, &bq_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_loop_ub = bsb->contents->size[0];
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            if (bsb->contents->data[i2] != (int32_T)muDoubleScalarFloor
                (bsb->contents->data[i2])) {
              emlrtIntegerCheckR2012b(bsb->contents->data[i2], &ye_emlrtDCI, &st);
            }

            i3 = (int32_T)bsb->contents->data[i2];
            if ((i3 < 1) || (i3 > b_Xseaso)) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, b_Xseaso, &di_emlrtBCI, &st);
            }

            tr_expl_nls_lshift->data[i2 + tr_expl_nls_lshift->size[0] * i1] =
              Seq->contents->data[(i3 + Seq->contents->size[0] * (i + i1)) - 1];
          }
        }

        b_st.site = &gm_emlrtRSI;
        bsxfun(&b_st, at, tr_expl_nls_lshift, varargin_2);
        b_Xseaso = Xlshift->contents->size[0] * Xlshift->contents->size[1];
        i = yhatnlseaso->size[0];
        yhatnlseaso->size[0] = bsb->contents->size[0];
        emxEnsureCapacity_real_T(&st, yhatnlseaso, i, &dq_emlrtRTEI);
        loop_ub = bsb->contents->size[0];
        for (i = 0; i < loop_ub; i++) {
          if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i], &cf_emlrtDCI, &st);
          }

          i1 = (int32_T)bsb->contents->data[i];
          if ((i1 < 1) || (i1 > b_Xseaso)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, b_Xseaso, &gi_emlrtBCI, &st);
          }

          yhatnlseaso->data[i] = Xlshift->contents->data[i1 - 1];
        }

        b_st.site = &pg_emlrtRSI;
        if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
          b_Xseaso = varargin_1->size[0];
        } else if ((varargin_2->size[0] != 0) && (varargin_2->size[1] != 0)) {
          b_Xseaso = varargin_2->size[0];
        } else if (yhatnlseaso->size[0] != 0) {
          b_Xseaso = yhatnlseaso->size[0];
        } else {
          b_Xseaso = varargin_1->size[0];
          if (varargin_2->size[0] > varargin_1->size[0]) {
            b_Xseaso = varargin_2->size[0];
          }
        }

        c_st.site = &rf_emlrtRSI;
        if ((varargin_1->size[0] != b_Xseaso) && ((varargin_1->size[0] != 0) &&
             (varargin_1->size[1] != 0))) {
          emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((varargin_2->size[0] != b_Xseaso) && ((varargin_2->size[0] != 0) &&
             (varargin_2->size[1] != 0))) {
          emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((yhatnlseaso->size[0] != b_Xseaso) && (yhatnlseaso->size[0] != 0)) {
          emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (b_Xseaso == 0);
        if (empty_non_axis_sizes || ((varargin_1->size[0] != 0) &&
             (varargin_1->size[1] != 0))) {
          input_sizes_idx_1 = varargin_1->size[1];
        } else {
          input_sizes_idx_1 = 0;
        }

        if (empty_non_axis_sizes || ((varargin_2->size[0] != 0) &&
             (varargin_2->size[1] != 0))) {
          b_input_sizes_idx_1 = varargin_2->size[1];
        } else {
          b_input_sizes_idx_1 = 0;
        }

        if (empty_non_axis_sizes || (yhatnlseaso->size[0] != 0)) {
          sizes[1] = 1;
        } else {
          sizes[1] = 0;
        }

        i = tr_expl_nls_lshift->size[0] * tr_expl_nls_lshift->size[1];
        tr_expl_nls_lshift->size[0] = b_Xseaso;
        i1 = input_sizes_idx_1 + b_input_sizes_idx_1;
        tr_expl_nls_lshift->size[1] = i1 + sizes[1];
        emxEnsureCapacity_real_T(&b_st, tr_expl_nls_lshift, i, &kq_emlrtRTEI);
        for (i = 0; i < input_sizes_idx_1; i++) {
          for (i2 = 0; i2 < b_Xseaso; i2++) {
            tr_expl_nls_lshift->data[i2 + tr_expl_nls_lshift->size[0] * i] =
              varargin_1->data[i2 + b_Xseaso * i];
          }
        }

        for (i = 0; i < b_input_sizes_idx_1; i++) {
          for (i2 = 0; i2 < b_Xseaso; i2++) {
            tr_expl_nls_lshift->data[i2 + tr_expl_nls_lshift->size[0] * (i +
              input_sizes_idx_1)] = varargin_2->data[i2 + b_Xseaso * i];
          }
        }

        loop_ub = sizes[1];
        for (i = 0; i < loop_ub; i++) {
          for (i2 = 0; i2 < b_Xseaso; i2++) {
            tr_expl_nls_lshift->data[i2 + tr_expl_nls_lshift->size[0] * i1] =
              yhatnlseaso->data[i2];
          }
        }
      } else {
        betadiff = varampl->contents + 1.0;
        if (2.0 > betadiff) {
          i = 0;
          i1 = 0;
        } else {
          i = 1;
          if (betadiff != (int32_T)muDoubleScalarFloor(betadiff)) {
            emlrtIntegerCheckR2012b(betadiff, &ne_emlrtDCI, (emlrtCTX)sp);
          }

          if (((int32_T)betadiff < 1) || ((int32_T)betadiff > 4)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)betadiff, 1, 4, &rh_emlrtBCI,
              (emlrtCTX)sp);
          }

          i1 = (int32_T)betadiff;
        }

        st.site = &hm_emlrtRSI;
        input_sizes_idx_1 = Xtrend->contents->size[0];
        loop_ub = Xtrend->contents->size[1];
        i2 = varargin_1->size[0] * varargin_1->size[1];
        varargin_1->size[0] = bsb->contents->size[0];
        varargin_1->size[1] = loop_ub;
        emxEnsureCapacity_real_T(&st, varargin_1, i2, &up_emlrtRTEI);
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_loop_ub = bsb->contents->size[0];
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            if (bsb->contents->data[i3] != (int32_T)muDoubleScalarFloor
                (bsb->contents->data[i3])) {
              emlrtIntegerCheckR2012b(bsb->contents->data[i3], &se_emlrtDCI, &st);
            }

            i4 = (int32_T)bsb->contents->data[i3];
            if ((i4 < 1) || (i4 > input_sizes_idx_1)) {
              emlrtDynamicBoundsCheckR2012b(i4, 1, input_sizes_idx_1,
                &wh_emlrtBCI, &st);
            }

            varargin_1->data[i3 + varargin_1->size[0] * i2] = Xtrend->
              contents->data[(i4 + Xtrend->contents->size[0] * i2) - 1];
          }
        }

        b_Xseaso = Seq->contents->size[0];
        i2 = tr_expl_nls_lshift->size[0] * tr_expl_nls_lshift->size[1];
        tr_expl_nls_lshift->size[0] = bsb->contents->size[0];
        loop_ub = i1 - i;
        tr_expl_nls_lshift->size[1] = loop_ub;
        emxEnsureCapacity_real_T(&st, tr_expl_nls_lshift, i2, &yp_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_loop_ub = bsb->contents->size[0];
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            if (bsb->contents->data[i2] != (int32_T)muDoubleScalarFloor
                (bsb->contents->data[i2])) {
              emlrtIntegerCheckR2012b(bsb->contents->data[i2], &we_emlrtDCI, &st);
            }

            i3 = (int32_T)bsb->contents->data[i2];
            if ((i3 < 1) || (i3 > b_Xseaso)) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, b_Xseaso, &bi_emlrtBCI, &st);
            }

            tr_expl_nls_lshift->data[i2 + tr_expl_nls_lshift->size[0] * i1] =
              Seq->contents->data[(i3 + Seq->contents->size[0] * (i + i1)) - 1];
          }
        }

        b_st.site = &hm_emlrtRSI;
        bsxfun(&b_st, at, tr_expl_nls_lshift, varargin_2);
        b_st.site = &pg_emlrtRSI;
        if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
          b_Xseaso = varargin_1->size[0];
        } else if ((varargin_2->size[0] != 0) && (varargin_2->size[1] != 0)) {
          b_Xseaso = varargin_2->size[0];
        } else {
          b_Xseaso = varargin_1->size[0];
          if (varargin_2->size[0] > varargin_1->size[0]) {
            b_Xseaso = varargin_2->size[0];
          }
        }

        c_st.site = &rf_emlrtRSI;
        if ((varargin_1->size[0] != b_Xseaso) && ((varargin_1->size[0] != 0) &&
             (varargin_1->size[1] != 0))) {
          emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((varargin_2->size[0] != b_Xseaso) && ((varargin_2->size[0] != 0) &&
             (varargin_2->size[1] != 0))) {
          emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (b_Xseaso == 0);
        if (empty_non_axis_sizes || ((varargin_1->size[0] != 0) &&
             (varargin_1->size[1] != 0))) {
          input_sizes_idx_1 = varargin_1->size[1];
        } else {
          input_sizes_idx_1 = 0;
        }

        if (empty_non_axis_sizes || ((varargin_2->size[0] != 0) &&
             (varargin_2->size[1] != 0))) {
          sizes[1] = varargin_2->size[1];
        } else {
          sizes[1] = 0;
        }

        i = tr_expl_nls_lshift->size[0] * tr_expl_nls_lshift->size[1];
        tr_expl_nls_lshift->size[0] = b_Xseaso;
        tr_expl_nls_lshift->size[1] = input_sizes_idx_1 + sizes[1];
        emxEnsureCapacity_real_T(&b_st, tr_expl_nls_lshift, i, &hq_emlrtRTEI);
        for (i = 0; i < input_sizes_idx_1; i++) {
          for (i1 = 0; i1 < b_Xseaso; i1++) {
            tr_expl_nls_lshift->data[i1 + tr_expl_nls_lshift->size[0] * i] =
              varargin_1->data[i1 + b_Xseaso * i];
          }
        }

        loop_ub = sizes[1];
        for (i = 0; i < loop_ub; i++) {
          for (i1 = 0; i1 < b_Xseaso; i1++) {
            tr_expl_nls_lshift->data[i1 + tr_expl_nls_lshift->size[0] * (i +
              input_sizes_idx_1)] = varargin_2->data[i1 + b_Xseaso * i];
          }
        }
      }
    } else if (lshiftYN->contents == 1.0) {
      betadiff = varampl->contents + 1.0;
      if (2.0 > betadiff) {
        i = 0;
        i1 = 0;
      } else {
        i = 1;
        if (betadiff != (int32_T)muDoubleScalarFloor(betadiff)) {
          emlrtIntegerCheckR2012b(betadiff, &me_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)betadiff < 1) || ((int32_T)betadiff > 4)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)betadiff, 1, 4, &qh_emlrtBCI,
            (emlrtCTX)sp);
        }

        i1 = (int32_T)betadiff;
      }

      st.site = &im_emlrtRSI;
      c_indexShapeCheck(&st, *(int32_T (*)[2])Xlshift->contents->size,
                        bsb->contents->size[0]);
      st.site = &im_emlrtRSI;
      input_sizes_idx_1 = Xtrend->contents->size[0];
      loop_ub = Xtrend->contents->size[1];
      i2 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = bsb->contents->size[0];
      varargin_1->size[1] = loop_ub;
      emxEnsureCapacity_real_T(&st, varargin_1, i2, &vp_emlrtRTEI);
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_loop_ub = bsb->contents->size[0];
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          if (bsb->contents->data[i3] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i3])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i3], &te_emlrtDCI, &st);
          }

          i4 = (int32_T)bsb->contents->data[i3];
          if ((i4 < 1) || (i4 > input_sizes_idx_1)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, input_sizes_idx_1, &xh_emlrtBCI,
              &st);
          }

          varargin_1->data[i3 + varargin_1->size[0] * i2] = Xtrend->
            contents->data[(i4 + Xtrend->contents->size[0] * i2) - 1];
        }
      }

      b_Xseaso = X->contents->size[0];
      loop_ub = X->contents->size[1];
      i2 = varargin_2->size[0] * varargin_2->size[1];
      varargin_2->size[0] = bsb->contents->size[0];
      varargin_2->size[1] = loop_ub;
      emxEnsureCapacity_real_T(&st, varargin_2, i2, &aq_emlrtRTEI);
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_loop_ub = bsb->contents->size[0];
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          if (bsb->contents->data[i3] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i3])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i3], &xe_emlrtDCI, &st);
          }

          i4 = (int32_T)bsb->contents->data[i3];
          if ((i4 < 1) || (i4 > b_Xseaso)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, b_Xseaso, &ci_emlrtBCI, &st);
          }

          varargin_2->data[i3 + varargin_2->size[0] * i2] = X->contents->data
            [(i4 + X->contents->size[0] * i2) - 1];
        }
      }

      b_Xseaso = Seq->contents->size[0];
      i2 = tr_expl_nls_lshift->size[0] * tr_expl_nls_lshift->size[1];
      tr_expl_nls_lshift->size[0] = bsb->contents->size[0];
      loop_ub = i1 - i;
      tr_expl_nls_lshift->size[1] = loop_ub;
      emxEnsureCapacity_real_T(&st, tr_expl_nls_lshift, i2, &eq_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_loop_ub = bsb->contents->size[0];
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          if (bsb->contents->data[i2] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i2])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i2], &bf_emlrtDCI, &st);
          }

          i3 = (int32_T)bsb->contents->data[i2];
          if ((i3 < 1) || (i3 > b_Xseaso)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, b_Xseaso, &fi_emlrtBCI, &st);
          }

          tr_expl_nls_lshift->data[i2 + tr_expl_nls_lshift->size[0] * i1] =
            Seq->contents->data[(i3 + Seq->contents->size[0] * (i + i1)) - 1];
        }
      }

      b_st.site = &im_emlrtRSI;
      bsxfun(&b_st, at, tr_expl_nls_lshift, a);
      i = varargin_3->size[0] * varargin_3->size[1];
      varargin_3->size[0] = a->size[0];
      varargin_3->size[1] = a->size[1];
      emxEnsureCapacity_real_T(&st, varargin_3, i, &fq_emlrtRTEI);
      loop_ub = a->size[0] * a->size[1];
      for (i = 0; i < loop_ub; i++) {
        varargin_3->data[i] = a->data[i];
      }

      b_Xseaso = Xlshift->contents->size[0] * Xlshift->contents->size[1];
      i = yhatnlseaso->size[0];
      yhatnlseaso->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(&st, yhatnlseaso, i, &gq_emlrtRTEI);
      loop_ub = bsb->contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor(bsb->
             contents->data[i])) {
          emlrtIntegerCheckR2012b(bsb->contents->data[i], &df_emlrtDCI, &st);
        }

        i1 = (int32_T)bsb->contents->data[i];
        if ((i1 < 1) || (i1 > b_Xseaso)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, b_Xseaso, &hi_emlrtBCI, &st);
        }

        yhatnlseaso->data[i] = Xlshift->contents->data[i1 - 1];
      }

      b_st.site = &pg_emlrtRSI;
      if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
        b_Xseaso = varargin_1->size[0];
      } else if ((varargin_2->size[0] != 0) && (varargin_2->size[1] != 0)) {
        b_Xseaso = varargin_2->size[0];
      } else if ((varargin_3->size[0] != 0) && (varargin_3->size[1] != 0)) {
        b_Xseaso = varargin_3->size[0];
      } else if (yhatnlseaso->size[0] != 0) {
        b_Xseaso = yhatnlseaso->size[0];
      } else {
        b_Xseaso = varargin_1->size[0];
        if (varargin_2->size[0] > varargin_1->size[0]) {
          b_Xseaso = varargin_2->size[0];
        }

        if (varargin_3->size[0] > b_Xseaso) {
          b_Xseaso = varargin_3->size[0];
        }
      }

      c_st.site = &rf_emlrtRSI;
      if ((varargin_1->size[0] != b_Xseaso) && ((varargin_1->size[0] != 0) &&
           (varargin_1->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((varargin_2->size[0] != b_Xseaso) && ((varargin_2->size[0] != 0) &&
           (varargin_2->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((varargin_3->size[0] != b_Xseaso) && ((varargin_3->size[0] != 0) &&
           (varargin_3->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((yhatnlseaso->size[0] != b_Xseaso) && (yhatnlseaso->size[0] != 0)) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (b_Xseaso == 0);
      if (empty_non_axis_sizes || ((varargin_1->size[0] != 0) &&
           (varargin_1->size[1] != 0))) {
        input_sizes_idx_1 = varargin_1->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((varargin_2->size[0] != 0) &&
           (varargin_2->size[1] != 0))) {
        b_input_sizes_idx_1 = varargin_2->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((varargin_3->size[0] != 0) &&
           (varargin_3->size[1] != 0))) {
        c_input_sizes_idx_1 = (int8_T)varargin_3->size[1];
      } else {
        c_input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || (yhatnlseaso->size[0] != 0)) {
        sizes[1] = 1;
      } else {
        sizes[1] = 0;
      }

      i = tr_expl_nls_lshift->size[0] * tr_expl_nls_lshift->size[1];
      tr_expl_nls_lshift->size[0] = b_Xseaso;
      i1 = (input_sizes_idx_1 + b_input_sizes_idx_1) + c_input_sizes_idx_1;
      tr_expl_nls_lshift->size[1] = i1 + sizes[1];
      emxEnsureCapacity_real_T(&b_st, tr_expl_nls_lshift, i, &lq_emlrtRTEI);
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < b_Xseaso; i2++) {
          tr_expl_nls_lshift->data[i2 + tr_expl_nls_lshift->size[0] * i] =
            varargin_1->data[i2 + b_Xseaso * i];
        }
      }

      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < b_Xseaso; i2++) {
          tr_expl_nls_lshift->data[i2 + tr_expl_nls_lshift->size[0] * (i +
            input_sizes_idx_1)] = varargin_2->data[i2 + b_Xseaso * i];
        }
      }

      loop_ub = c_input_sizes_idx_1;
      for (i = 0; i < loop_ub; i++) {
        for (i2 = 0; i2 < b_Xseaso; i2++) {
          tr_expl_nls_lshift->data[i2 + tr_expl_nls_lshift->size[0] * ((i +
            input_sizes_idx_1) + b_input_sizes_idx_1)] = varargin_3->data[i2 +
            b_Xseaso * i];
        }
      }

      loop_ub = sizes[1];
      for (i = 0; i < loop_ub; i++) {
        for (i2 = 0; i2 < b_Xseaso; i2++) {
          tr_expl_nls_lshift->data[i2 + tr_expl_nls_lshift->size[0] * i1] =
            yhatnlseaso->data[i2];
        }
      }
    } else {
      betadiff = varampl->contents + 1.0;
      if (2.0 > betadiff) {
        i = 0;
        i1 = 0;
      } else {
        i = 1;
        if (betadiff != (int32_T)muDoubleScalarFloor(betadiff)) {
          emlrtIntegerCheckR2012b(betadiff, &le_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)betadiff < 1) || ((int32_T)betadiff > 4)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)betadiff, 1, 4, &ph_emlrtBCI,
            (emlrtCTX)sp);
        }

        i1 = (int32_T)betadiff;
      }

      st.site = &jm_emlrtRSI;
      input_sizes_idx_1 = Xtrend->contents->size[0];
      loop_ub = Xtrend->contents->size[1];
      i2 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = bsb->contents->size[0];
      varargin_1->size[1] = loop_ub;
      emxEnsureCapacity_real_T(&st, varargin_1, i2, &tp_emlrtRTEI);
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_loop_ub = bsb->contents->size[0];
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          if (bsb->contents->data[i3] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i3])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i3], &re_emlrtDCI, &st);
          }

          i4 = (int32_T)bsb->contents->data[i3];
          if ((i4 < 1) || (i4 > input_sizes_idx_1)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, input_sizes_idx_1, &vh_emlrtBCI,
              &st);
          }

          varargin_1->data[i3 + varargin_1->size[0] * i2] = Xtrend->
            contents->data[(i4 + Xtrend->contents->size[0] * i2) - 1];
        }
      }

      b_Xseaso = X->contents->size[0];
      loop_ub = X->contents->size[1];
      i2 = varargin_2->size[0] * varargin_2->size[1];
      varargin_2->size[0] = bsb->contents->size[0];
      varargin_2->size[1] = loop_ub;
      emxEnsureCapacity_real_T(&st, varargin_2, i2, &xp_emlrtRTEI);
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_loop_ub = bsb->contents->size[0];
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          if (bsb->contents->data[i3] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i3])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i3], &ve_emlrtDCI, &st);
          }

          i4 = (int32_T)bsb->contents->data[i3];
          if ((i4 < 1) || (i4 > b_Xseaso)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, b_Xseaso, &ai_emlrtBCI, &st);
          }

          varargin_2->data[i3 + varargin_2->size[0] * i2] = X->contents->data
            [(i4 + X->contents->size[0] * i2) - 1];
        }
      }

      b_Xseaso = Seq->contents->size[0];
      i2 = tr_expl_nls_lshift->size[0] * tr_expl_nls_lshift->size[1];
      tr_expl_nls_lshift->size[0] = bsb->contents->size[0];
      loop_ub = i1 - i;
      tr_expl_nls_lshift->size[1] = loop_ub;
      emxEnsureCapacity_real_T(&st, tr_expl_nls_lshift, i2, &cq_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_loop_ub = bsb->contents->size[0];
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          if (bsb->contents->data[i2] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i2])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i2], &af_emlrtDCI, &st);
          }

          i3 = (int32_T)bsb->contents->data[i2];
          if ((i3 < 1) || (i3 > b_Xseaso)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, b_Xseaso, &ei_emlrtBCI, &st);
          }

          tr_expl_nls_lshift->data[i2 + tr_expl_nls_lshift->size[0] * i1] =
            Seq->contents->data[(i3 + Seq->contents->size[0] * (i + i1)) - 1];
        }
      }

      b_st.site = &jm_emlrtRSI;
      bsxfun(&b_st, at, tr_expl_nls_lshift, a);
      b_st.site = &pg_emlrtRSI;
      if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
        b_Xseaso = varargin_1->size[0];
      } else if ((varargin_2->size[0] != 0) && (varargin_2->size[1] != 0)) {
        b_Xseaso = varargin_2->size[0];
      } else if ((a->size[0] != 0) && (a->size[1] != 0)) {
        b_Xseaso = a->size[0];
      } else {
        b_Xseaso = varargin_1->size[0];
        if (varargin_2->size[0] > varargin_1->size[0]) {
          b_Xseaso = varargin_2->size[0];
        }

        if (a->size[0] > b_Xseaso) {
          b_Xseaso = a->size[0];
        }
      }

      c_st.site = &rf_emlrtRSI;
      if ((varargin_1->size[0] != b_Xseaso) && ((varargin_1->size[0] != 0) &&
           (varargin_1->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((varargin_2->size[0] != b_Xseaso) && ((varargin_2->size[0] != 0) &&
           (varargin_2->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((a->size[0] != b_Xseaso) && ((a->size[0] != 0) && (a->size[1] != 0)))
      {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (b_Xseaso == 0);
      if (empty_non_axis_sizes || ((varargin_1->size[0] != 0) &&
           (varargin_1->size[1] != 0))) {
        input_sizes_idx_1 = varargin_1->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((varargin_2->size[0] != 0) &&
           (varargin_2->size[1] != 0))) {
        b_input_sizes_idx_1 = varargin_2->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((a->size[0] != 0) && (a->size[1] != 0))) {
        sizes[1] = a->size[1];
      } else {
        sizes[1] = 0;
      }

      i = tr_expl_nls_lshift->size[0] * tr_expl_nls_lshift->size[1];
      tr_expl_nls_lshift->size[0] = b_Xseaso;
      tr_expl_nls_lshift->size[1] = (input_sizes_idx_1 + b_input_sizes_idx_1) +
        sizes[1];
      emxEnsureCapacity_real_T(&b_st, tr_expl_nls_lshift, i, &jq_emlrtRTEI);
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < b_Xseaso; i1++) {
          tr_expl_nls_lshift->data[i1 + tr_expl_nls_lshift->size[0] * i] =
            varargin_1->data[i1 + b_Xseaso * i];
        }
      }

      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < b_Xseaso; i1++) {
          tr_expl_nls_lshift->data[i1 + tr_expl_nls_lshift->size[0] * (i +
            input_sizes_idx_1)] = varargin_2->data[i1 + b_Xseaso * i];
        }
      }

      loop_ub = sizes[1];
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < b_Xseaso; i1++) {
          tr_expl_nls_lshift->data[i1 + tr_expl_nls_lshift->size[0] * ((i +
            input_sizes_idx_1) + b_input_sizes_idx_1)] = a->data[i1 + b_Xseaso *
            i];
        }
      }
    }

    /*  b0145 = coefficients of intercept trend + expl var + non */
    /*  linear part of seasonal component + level shift */
    b_Xseaso = yin->contents->size[0];
    i = r->size[0];
    r->size[0] = bsb->contents->size[0];
    emxEnsureCapacity_real_T(sp, r, i, &iq_emlrtRTEI);
    loop_ub = bsb->contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor(bsb->
           contents->data[i])) {
        emlrtIntegerCheckR2012b(bsb->contents->data[i], &ef_emlrtDCI, (emlrtCTX)
          sp);
      }

      i1 = (int32_T)bsb->contents->data[i];
      if ((i1 < 1) || (i1 > b_Xseaso)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, b_Xseaso, &ii_emlrtBCI, (emlrtCTX)
          sp);
      }

      r->data[i] = yin->contents->data[i1 - 1];
    }

    if (r->size[0] != at->size[0]) {
      emlrtSizeEqCheck1DR2012b(r->size[0], at->size[0], &rb_emlrtECI, (emlrtCTX)
        sp);
    }

    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] -= at->data[i];
    }

    st.site = &km_emlrtRSI;
    mldivide(&st, tr_expl_nls_lshift, r, b0145);

    /*  Now find new coefficients of linear part of seasonal */
    /*  component in the regression of y-trend-expl-lsihft versus */
    /*  vector which contains non linear part of seasonal component */
    /*  which multiplies each column of matrix Xseaso (linear part of */
    /*  seasonal component) */
    betadiff = varampl->contents + 1.0;
    if (2.0 > betadiff) {
      i = 0;
      i1 = 0;
    } else {
      i = 1;
      if (betadiff != (int32_T)muDoubleScalarFloor(betadiff)) {
        emlrtIntegerCheckR2012b(betadiff, &ke_emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)betadiff < 1) || ((int32_T)betadiff > 4)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)betadiff, 1, 4, &oh_emlrtBCI,
          (emlrtCTX)sp);
      }

      i1 = (int32_T)betadiff;
    }

    betadiff = (trend->contents + 2.0) + nexpl->contents;
    y = (betadiff + varampl->contents) - 1.0;
    if (betadiff > y) {
      i2 = -1;
      i3 = -1;
    } else {
      if (betadiff != (int32_T)muDoubleScalarFloor(betadiff)) {
        emlrtIntegerCheckR2012b(betadiff, &je_emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)betadiff < 1) || ((int32_T)betadiff > b0145->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)betadiff, 1, b0145->size[0],
          &nh_emlrtBCI, (emlrtCTX)sp);
      }

      i2 = (int32_T)betadiff - 2;
      if (y != (int32_T)muDoubleScalarFloor(y)) {
        emlrtIntegerCheckR2012b(y, &ie_emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)y < 1) || ((int32_T)y > b0145->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)y, 1, b0145->size[0],
          &mh_emlrtBCI, (emlrtCTX)sp);
      }

      i3 = (int32_T)y - 1;
    }

    sizes[0] = 1;
    b_input_sizes_idx_1 = i3 - i2;
    sizes[1] = b_input_sizes_idx_1;
    st.site = &lm_emlrtRSI;
    indexShapeCheck(&st, b0145->size[0], sizes);
    b_Xseaso = Seq->contents->size[0];
    i4 = yhatnlseaso->size[0];
    yhatnlseaso->size[0] = bsb->contents->size[0];
    emxEnsureCapacity_real_T(sp, yhatnlseaso, i4, &mq_emlrtRTEI);
    loop_ub = bsb->contents->size[0];
    for (i4 = 0; i4 < loop_ub; i4++) {
      if (bsb->contents->data[i4] != (int32_T)muDoubleScalarFloor(bsb->
           contents->data[i4])) {
        emlrtIntegerCheckR2012b(bsb->contents->data[i4], &ff_emlrtDCI, (emlrtCTX)
          sp);
      }

      input_sizes_idx_1 = (int32_T)bsb->contents->data[i4];
      if ((input_sizes_idx_1 < 1) || (input_sizes_idx_1 > b_Xseaso)) {
        emlrtDynamicBoundsCheckR2012b(input_sizes_idx_1, 1, b_Xseaso,
          &ji_emlrtBCI, (emlrtCTX)sp);
      }

      yhatnlseaso->data[i4] = Seq->contents->data[input_sizes_idx_1 - 1];
    }

    st.site = &lm_emlrtRSI;
    b_Xseaso = Seq->contents->size[0];
    i4 = a->size[0] * a->size[1];
    a->size[0] = bsb->contents->size[0];
    loop_ub = i1 - i;
    a->size[1] = loop_ub;
    emxEnsureCapacity_real_T(&st, a, i4, &nq_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = bsb->contents->size[0];
      for (i4 = 0; i4 < b_loop_ub; i4++) {
        if (bsb->contents->data[i4] != (int32_T)muDoubleScalarFloor
            (bsb->contents->data[i4])) {
          emlrtIntegerCheckR2012b(bsb->contents->data[i4], &gf_emlrtDCI, &st);
        }

        input_sizes_idx_1 = (int32_T)bsb->contents->data[i4];
        if ((input_sizes_idx_1 < 1) || (input_sizes_idx_1 > b_Xseaso)) {
          emlrtDynamicBoundsCheckR2012b(input_sizes_idx_1, 1, b_Xseaso,
            &ki_emlrtBCI, &st);
        }

        a->data[i4 + a->size[0] * i1] = Seq->contents->data[(input_sizes_idx_1 +
          Seq->contents->size[0] * (i + i1)) - 1];
      }
    }

    i = b_b0145->size[0] * b_b0145->size[1];
    b_b0145->size[0] = 1;
    b_b0145->size[1] = b_input_sizes_idx_1;
    emxEnsureCapacity_real_T(&st, b_b0145, i, &oq_emlrtRTEI);
    for (i = 0; i < b_input_sizes_idx_1; i++) {
      b_b0145->data[i] = b0145->data[(i2 + i) + 1];
    }

    b_st.site = &qj_emlrtRSI;
    b_dynamic_size_checks(&b_st, a, b_b0145, a->size[1], i3 - i2);
    i = b_b0145->size[0] * b_b0145->size[1];
    b_b0145->size[0] = 1;
    b_b0145->size[1] = b_input_sizes_idx_1;
    emxEnsureCapacity_real_T(&st, b_b0145, i, &oq_emlrtRTEI);
    for (i = 0; i < b_input_sizes_idx_1; i++) {
      b_b0145->data[i] = b0145->data[(i2 + i) + 1];
    }

    b_st.site = &pj_emlrtRSI;
    mtimes(&b_st, a, b_b0145, r);
    if (yhatnlseaso->size[0] != r->size[0]) {
      emlrtSizeEqCheck1DR2012b(yhatnlseaso->size[0], r->size[0], &qb_emlrtECI,
        (emlrtCTX)sp);
    }

    loop_ub = yhatnlseaso->size[0];
    for (i = 0; i < loop_ub; i++) {
      yhatnlseaso->data[i] += r->data[i];
    }

    if (isemptyX->contents) {
      if (lshiftYN->contents == 1.0) {
        betadiff = trend->contents + 1.0;
        if (1.0 > betadiff) {
          loop_ub = 0;
        } else {
          if (1 > b0145->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, b0145->size[0], &lh_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (betadiff != (int32_T)muDoubleScalarFloor(betadiff)) {
            emlrtIntegerCheckR2012b(betadiff, &he_emlrtDCI, (emlrtCTX)sp);
          }

          if (((int32_T)betadiff < 1) || ((int32_T)betadiff > b0145->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)betadiff, 1, b0145->size[0],
              &kh_emlrtBCI, (emlrtCTX)sp);
          }

          loop_ub = (int32_T)betadiff;
        }

        sizes[0] = 1;
        sizes[1] = loop_ub;
        st.site = &nm_emlrtRSI;
        indexShapeCheck(&st, b0145->size[0], sizes);
        b_Xseaso = yin->contents->size[0];
        i = r->size[0];
        r->size[0] = bsb->contents->size[0];
        emxEnsureCapacity_real_T(sp, r, i, &sq_emlrtRTEI);
        b_loop_ub = bsb->contents->size[0];
        for (i = 0; i < b_loop_ub; i++) {
          if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i], &kf_emlrtDCI,
              (emlrtCTX)sp);
          }

          i1 = (int32_T)bsb->contents->data[i];
          if ((i1 < 1) || (i1 > b_Xseaso)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, b_Xseaso, &oi_emlrtBCI,
              (emlrtCTX)sp);
          }

          r->data[i] = yin->contents->data[i1 - 1];
        }

        st.site = &nm_emlrtRSI;
        input_sizes_idx_1 = Xtrend->contents->size[0];
        b_loop_ub = Xtrend->contents->size[1];
        i = a->size[0] * a->size[1];
        a->size[0] = bsb->contents->size[0];
        a->size[1] = b_loop_ub;
        emxEnsureCapacity_real_T(&st, a, i, &wq_emlrtRTEI);
        for (i = 0; i < b_loop_ub; i++) {
          b_Xseaso = bsb->contents->size[0];
          for (i1 = 0; i1 < b_Xseaso; i1++) {
            if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor
                (bsb->contents->data[i1])) {
              emlrtIntegerCheckR2012b(bsb->contents->data[i1], &of_emlrtDCI, &st);
            }

            i2 = (int32_T)bsb->contents->data[i1];
            if ((i2 < 1) || (i2 > input_sizes_idx_1)) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, input_sizes_idx_1,
                &si_emlrtBCI, &st);
            }

            a->data[i1 + a->size[0] * i] = Xtrend->contents->data[(i2 +
              Xtrend->contents->size[0] * i) - 1];
          }
        }

        i = b_b0145->size[0] * b_b0145->size[1];
        b_b0145->size[0] = 1;
        b_b0145->size[1] = loop_ub;
        emxEnsureCapacity_real_T(&st, b_b0145, i, &br_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          b_b0145->data[i] = b0145->data[i];
        }

        b_st.site = &qj_emlrtRSI;
        b_dynamic_size_checks(&b_st, a, b_b0145, a->size[1], loop_ub);
        i = b_b0145->size[0] * b_b0145->size[1];
        b_b0145->size[0] = 1;
        b_b0145->size[1] = loop_ub;
        emxEnsureCapacity_real_T(&st, b_b0145, i, &br_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          b_b0145->data[i] = b0145->data[i];
        }

        b_st.site = &pj_emlrtRSI;
        mtimes(&b_st, a, b_b0145, at);
        if (r->size[0] != at->size[0]) {
          emlrtSizeEqCheck1DR2012b(r->size[0], at->size[0], &pb_emlrtECI,
            (emlrtCTX)sp);
        }

        st.site = &nm_emlrtRSI;
        c_indexShapeCheck(&st, *(int32_T (*)[2])Xlshift->contents->size,
                          bsb->contents->size[0]);
        b_Xseaso = Xlshift->contents->size[0] * Xlshift->contents->size[1];
        i = b_a->size[0];
        b_a->size[0] = bsb->contents->size[0];
        emxEnsureCapacity_real_T(sp, b_a, i, &cr_emlrtRTEI);
        loop_ub = bsb->contents->size[0];
        for (i = 0; i < loop_ub; i++) {
          if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i], &qf_emlrtDCI,
              (emlrtCTX)sp);
          }

          i1 = (int32_T)bsb->contents->data[i];
          if ((i1 < 1) || (i1 > b_Xseaso)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, b_Xseaso, &ui_emlrtBCI,
              (emlrtCTX)sp);
          }

          b_a->data[i] = Xlshift->contents->data[i1 - 1];
        }

        if (b0145->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(b0145->size[0], 1, b0145->size[0],
            &jh_emlrtBCI, (emlrtCTX)sp);
        }

        loop_ub = b_a->size[0];
        for (i = 0; i < loop_ub; i++) {
          b_a->data[i] *= b0145->data[b0145->size[0] - 1];
        }

        if (r->size[0] != b_a->size[0]) {
          emlrtSizeEqCheck1DR2012b(r->size[0], b_a->size[0], &pb_emlrtECI,
            (emlrtCTX)sp);
        }

        b_Xseaso = Xseaso->contents->size[0];
        loop_ub = Xseaso->contents->size[1];
        i = tr_expl_nls_lshift->size[0] * tr_expl_nls_lshift->size[1];
        tr_expl_nls_lshift->size[0] = bsb->contents->size[0];
        tr_expl_nls_lshift->size[1] = loop_ub;
        emxEnsureCapacity_real_T(sp, tr_expl_nls_lshift, i, &hr_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          b_loop_ub = bsb->contents->size[0];
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor
                (bsb->contents->data[i1])) {
              emlrtIntegerCheckR2012b(bsb->contents->data[i1], &rf_emlrtDCI,
                (emlrtCTX)sp);
            }

            i2 = (int32_T)bsb->contents->data[i1];
            if ((i2 < 1) || (i2 > b_Xseaso)) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, b_Xseaso, &vi_emlrtBCI,
                (emlrtCTX)sp);
            }

            tr_expl_nls_lshift->data[i1 + tr_expl_nls_lshift->size[0] * i] =
              Xseaso->contents->data[(i2 + Xseaso->contents->size[0] * i) - 1];
          }
        }

        st.site = &mm_emlrtRSI;
        bsxfun(&st, yhatnlseaso, tr_expl_nls_lshift, a);
        loop_ub = r->size[0];
        for (i = 0; i < loop_ub; i++) {
          r->data[i] = (r->data[i] - at->data[i]) - b_a->data[i];
        }

        st.site = &mm_emlrtRSI;
        mldivide(&st, a, r, yhatnlseaso);
      } else {
        betadiff = trend->contents + 1.0;
        if (1.0 > betadiff) {
          loop_ub = 0;
        } else {
          if (1 > b0145->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, b0145->size[0], &ih_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (betadiff != (int32_T)muDoubleScalarFloor(betadiff)) {
            emlrtIntegerCheckR2012b(betadiff, &ge_emlrtDCI, (emlrtCTX)sp);
          }

          if (((int32_T)betadiff < 1) || ((int32_T)betadiff > b0145->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)betadiff, 1, b0145->size[0],
              &hh_emlrtBCI, (emlrtCTX)sp);
          }

          loop_ub = (int32_T)betadiff;
        }

        sizes[0] = 1;
        sizes[1] = loop_ub;
        st.site = &pm_emlrtRSI;
        indexShapeCheck(&st, b0145->size[0], sizes);
        b_Xseaso = yin->contents->size[0];
        i = r->size[0];
        r->size[0] = bsb->contents->size[0];
        emxEnsureCapacity_real_T(sp, r, i, &rq_emlrtRTEI);
        b_loop_ub = bsb->contents->size[0];
        for (i = 0; i < b_loop_ub; i++) {
          if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i], &jf_emlrtDCI,
              (emlrtCTX)sp);
          }

          i1 = (int32_T)bsb->contents->data[i];
          if ((i1 < 1) || (i1 > b_Xseaso)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, b_Xseaso, &ni_emlrtBCI,
              (emlrtCTX)sp);
          }

          r->data[i] = yin->contents->data[i1 - 1];
        }

        st.site = &pm_emlrtRSI;
        input_sizes_idx_1 = Xtrend->contents->size[0];
        b_loop_ub = Xtrend->contents->size[1];
        i = a->size[0] * a->size[1];
        a->size[0] = bsb->contents->size[0];
        a->size[1] = b_loop_ub;
        emxEnsureCapacity_real_T(&st, a, i, &vq_emlrtRTEI);
        for (i = 0; i < b_loop_ub; i++) {
          b_Xseaso = bsb->contents->size[0];
          for (i1 = 0; i1 < b_Xseaso; i1++) {
            if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor
                (bsb->contents->data[i1])) {
              emlrtIntegerCheckR2012b(bsb->contents->data[i1], &nf_emlrtDCI, &st);
            }

            i2 = (int32_T)bsb->contents->data[i1];
            if ((i2 < 1) || (i2 > input_sizes_idx_1)) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, input_sizes_idx_1,
                &ri_emlrtBCI, &st);
            }

            a->data[i1 + a->size[0] * i] = Xtrend->contents->data[(i2 +
              Xtrend->contents->size[0] * i) - 1];
          }
        }

        i = b_b0145->size[0] * b_b0145->size[1];
        b_b0145->size[0] = 1;
        b_b0145->size[1] = loop_ub;
        emxEnsureCapacity_real_T(&st, b_b0145, i, &ar_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          b_b0145->data[i] = b0145->data[i];
        }

        b_st.site = &qj_emlrtRSI;
        b_dynamic_size_checks(&b_st, a, b_b0145, a->size[1], loop_ub);
        i = b_b0145->size[0] * b_b0145->size[1];
        b_b0145->size[0] = 1;
        b_b0145->size[1] = loop_ub;
        emxEnsureCapacity_real_T(&st, b_b0145, i, &ar_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          b_b0145->data[i] = b0145->data[i];
        }

        b_st.site = &pj_emlrtRSI;
        mtimes(&b_st, a, b_b0145, at);
        if (r->size[0] != at->size[0]) {
          emlrtSizeEqCheck1DR2012b(r->size[0], at->size[0], &ob_emlrtECI,
            (emlrtCTX)sp);
        }

        b_Xseaso = Xseaso->contents->size[0];
        loop_ub = Xseaso->contents->size[1];
        i = tr_expl_nls_lshift->size[0] * tr_expl_nls_lshift->size[1];
        tr_expl_nls_lshift->size[0] = bsb->contents->size[0];
        tr_expl_nls_lshift->size[1] = loop_ub;
        emxEnsureCapacity_real_T(sp, tr_expl_nls_lshift, i, &dr_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          b_loop_ub = bsb->contents->size[0];
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor
                (bsb->contents->data[i1])) {
              emlrtIntegerCheckR2012b(bsb->contents->data[i1], &pf_emlrtDCI,
                (emlrtCTX)sp);
            }

            i2 = (int32_T)bsb->contents->data[i1];
            if ((i2 < 1) || (i2 > b_Xseaso)) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, b_Xseaso, &ti_emlrtBCI,
                (emlrtCTX)sp);
            }

            tr_expl_nls_lshift->data[i1 + tr_expl_nls_lshift->size[0] * i] =
              Xseaso->contents->data[(i2 + Xseaso->contents->size[0] * i) - 1];
          }
        }

        st.site = &om_emlrtRSI;
        bsxfun(&st, yhatnlseaso, tr_expl_nls_lshift, a);
        loop_ub = r->size[0];
        for (i = 0; i < loop_ub; i++) {
          r->data[i] -= at->data[i];
        }

        st.site = &om_emlrtRSI;
        mldivide(&st, a, r, yhatnlseaso);
      }
    } else if (lshiftYN->contents == 1.0) {
      betadiff = trend->contents + 1.0;
      if (1.0 > betadiff) {
        loop_ub = 0;
      } else {
        if (1 > b0145->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, b0145->size[0], &gh_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (betadiff != (int32_T)muDoubleScalarFloor(betadiff)) {
          emlrtIntegerCheckR2012b(betadiff, &fe_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)betadiff < 1) || ((int32_T)betadiff > b0145->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)betadiff, 1, b0145->size[0],
            &fh_emlrtBCI, (emlrtCTX)sp);
        }

        loop_ub = (int32_T)betadiff;
      }

      sizes[0] = 1;
      sizes[1] = loop_ub;
      st.site = &rm_emlrtRSI;
      indexShapeCheck(&st, b0145->size[0], sizes);
      b_Xseaso = yin->contents->size[0];
      i = r->size[0];
      r->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(sp, r, i, &qq_emlrtRTEI);
      b_loop_ub = bsb->contents->size[0];
      for (i = 0; i < b_loop_ub; i++) {
        if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor(bsb->
             contents->data[i])) {
          emlrtIntegerCheckR2012b(bsb->contents->data[i], &if_emlrtDCI,
            (emlrtCTX)sp);
        }

        i1 = (int32_T)bsb->contents->data[i];
        if ((i1 < 1) || (i1 > b_Xseaso)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, b_Xseaso, &mi_emlrtBCI, (emlrtCTX)
            sp);
        }

        r->data[i] = yin->contents->data[i1 - 1];
      }

      st.site = &rm_emlrtRSI;
      input_sizes_idx_1 = Xtrend->contents->size[0];
      b_loop_ub = Xtrend->contents->size[1];
      i = a->size[0] * a->size[1];
      a->size[0] = bsb->contents->size[0];
      a->size[1] = b_loop_ub;
      emxEnsureCapacity_real_T(&st, a, i, &uq_emlrtRTEI);
      for (i = 0; i < b_loop_ub; i++) {
        b_Xseaso = bsb->contents->size[0];
        for (i1 = 0; i1 < b_Xseaso; i1++) {
          if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i1])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i1], &mf_emlrtDCI, &st);
          }

          i2 = (int32_T)bsb->contents->data[i1];
          if ((i2 < 1) || (i2 > input_sizes_idx_1)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, input_sizes_idx_1, &qi_emlrtBCI,
              &st);
          }

          a->data[i1 + a->size[0] * i] = Xtrend->contents->data[(i2 +
            Xtrend->contents->size[0] * i) - 1];
        }
      }

      i = b_b0145->size[0] * b_b0145->size[1];
      b_b0145->size[0] = 1;
      b_b0145->size[1] = loop_ub;
      emxEnsureCapacity_real_T(&st, b_b0145, i, &yq_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        b_b0145->data[i] = b0145->data[i];
      }

      b_st.site = &qj_emlrtRSI;
      b_dynamic_size_checks(&b_st, a, b_b0145, a->size[1], loop_ub);
      i = b_b0145->size[0] * b_b0145->size[1];
      b_b0145->size[0] = 1;
      b_b0145->size[1] = loop_ub;
      emxEnsureCapacity_real_T(&st, b_b0145, i, &yq_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        b_b0145->data[i] = b0145->data[i];
      }

      b_st.site = &pj_emlrtRSI;
      mtimes(&b_st, a, b_b0145, at);
      if (r->size[0] != at->size[0]) {
        emlrtSizeEqCheck1DR2012b(r->size[0], at->size[0], &nb_emlrtECI,
          (emlrtCTX)sp);
      }

      betadiff = trend->contents + 2.0;
      y = (trend->contents + 1.0) + nexpl->contents;
      if (betadiff > y) {
        i = -1;
        i1 = -1;
      } else {
        if (betadiff != (int32_T)muDoubleScalarFloor(betadiff)) {
          emlrtIntegerCheckR2012b(betadiff, &ee_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)betadiff < 1) || ((int32_T)betadiff > b0145->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)betadiff, 1, b0145->size[0],
            &eh_emlrtBCI, (emlrtCTX)sp);
        }

        i = (int32_T)betadiff - 2;
        if (y != (int32_T)muDoubleScalarFloor(y)) {
          emlrtIntegerCheckR2012b(y, &de_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)y < 1) || ((int32_T)y > b0145->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)y, 1, b0145->size[0],
            &dh_emlrtBCI, (emlrtCTX)sp);
        }

        i1 = (int32_T)y - 1;
      }

      sizes[0] = 1;
      b_input_sizes_idx_1 = i1 - i;
      sizes[1] = b_input_sizes_idx_1;
      st.site = &rm_emlrtRSI;
      indexShapeCheck(&st, b0145->size[0], sizes);
      st.site = &rm_emlrtRSI;
      b_Xseaso = X->contents->size[0];
      loop_ub = X->contents->size[1];
      i2 = a->size[0] * a->size[1];
      a->size[0] = bsb->contents->size[0];
      a->size[1] = loop_ub;
      emxEnsureCapacity_real_T(&st, a, i2, &fr_emlrtRTEI);
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_loop_ub = bsb->contents->size[0];
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          if (bsb->contents->data[i3] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i3])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i3], &tf_emlrtDCI, &st);
          }

          i4 = (int32_T)bsb->contents->data[i3];
          if ((i4 < 1) || (i4 > b_Xseaso)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, b_Xseaso, &xi_emlrtBCI, &st);
          }

          a->data[i3 + a->size[0] * i2] = X->contents->data[(i4 + X->
            contents->size[0] * i2) - 1];
        }
      }

      i2 = b_b0145->size[0] * b_b0145->size[1];
      b_b0145->size[0] = 1;
      b_b0145->size[1] = b_input_sizes_idx_1;
      emxEnsureCapacity_real_T(&st, b_b0145, i2, &jr_emlrtRTEI);
      for (i2 = 0; i2 < b_input_sizes_idx_1; i2++) {
        b_b0145->data[i2] = b0145->data[(i + i2) + 1];
      }

      b_st.site = &qj_emlrtRSI;
      b_dynamic_size_checks(&b_st, a, b_b0145, a->size[1], i1 - i);
      i1 = b_b0145->size[0] * b_b0145->size[1];
      b_b0145->size[0] = 1;
      b_b0145->size[1] = b_input_sizes_idx_1;
      emxEnsureCapacity_real_T(&st, b_b0145, i1, &jr_emlrtRTEI);
      for (i1 = 0; i1 < b_input_sizes_idx_1; i1++) {
        b_b0145->data[i1] = b0145->data[(i + i1) + 1];
      }

      b_st.site = &pj_emlrtRSI;
      mtimes(&b_st, a, b_b0145, r1);
      if (r->size[0] != r1->size[0]) {
        emlrtSizeEqCheck1DR2012b(r->size[0], r1->size[0], &nb_emlrtECI,
          (emlrtCTX)sp);
      }

      st.site = &rm_emlrtRSI;
      c_indexShapeCheck(&st, *(int32_T (*)[2])Xlshift->contents->size,
                        bsb->contents->size[0]);
      b_Xseaso = Xlshift->contents->size[0] * Xlshift->contents->size[1];
      i = b_a->size[0];
      b_a->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(sp, b_a, i, &lr_emlrtRTEI);
      loop_ub = bsb->contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor(bsb->
             contents->data[i])) {
          emlrtIntegerCheckR2012b(bsb->contents->data[i], &wf_emlrtDCI,
            (emlrtCTX)sp);
        }

        i1 = (int32_T)bsb->contents->data[i];
        if ((i1 < 1) || (i1 > b_Xseaso)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, b_Xseaso, &bj_emlrtBCI, (emlrtCTX)
            sp);
        }

        b_a->data[i] = Xlshift->contents->data[i1 - 1];
      }

      if (b0145->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(b0145->size[0], 1, b0145->size[0],
          &ch_emlrtBCI, (emlrtCTX)sp);
      }

      loop_ub = b_a->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_a->data[i] *= b0145->data[b0145->size[0] - 1];
      }

      if (r->size[0] != b_a->size[0]) {
        emlrtSizeEqCheck1DR2012b(r->size[0], b_a->size[0], &nb_emlrtECI,
          (emlrtCTX)sp);
      }

      b_Xseaso = Xseaso->contents->size[0];
      loop_ub = Xseaso->contents->size[1];
      i = tr_expl_nls_lshift->size[0] * tr_expl_nls_lshift->size[1];
      tr_expl_nls_lshift->size[0] = bsb->contents->size[0];
      tr_expl_nls_lshift->size[1] = loop_ub;
      emxEnsureCapacity_real_T(sp, tr_expl_nls_lshift, i, &or_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = bsb->contents->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i1])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i1], &yf_emlrtDCI,
              (emlrtCTX)sp);
          }

          i2 = (int32_T)bsb->contents->data[i1];
          if ((i2 < 1) || (i2 > b_Xseaso)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, b_Xseaso, &dj_emlrtBCI,
              (emlrtCTX)sp);
          }

          tr_expl_nls_lshift->data[i1 + tr_expl_nls_lshift->size[0] * i] =
            Xseaso->contents->data[(i2 + Xseaso->contents->size[0] * i) - 1];
        }
      }

      st.site = &qm_emlrtRSI;
      bsxfun(&st, yhatnlseaso, tr_expl_nls_lshift, a);
      loop_ub = r->size[0];
      for (i = 0; i < loop_ub; i++) {
        r->data[i] = ((r->data[i] - at->data[i]) - r1->data[i]) - b_a->data[i];
      }

      st.site = &qm_emlrtRSI;
      mldivide(&st, a, r, yhatnlseaso);
    } else {
      betadiff = trend->contents + 1.0;
      if (1.0 > betadiff) {
        loop_ub = 0;
      } else {
        if (1 > b0145->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, b0145->size[0], &bh_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (betadiff != (int32_T)muDoubleScalarFloor(betadiff)) {
          emlrtIntegerCheckR2012b(betadiff, &ce_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)betadiff < 1) || ((int32_T)betadiff > b0145->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)betadiff, 1, b0145->size[0],
            &ah_emlrtBCI, (emlrtCTX)sp);
        }

        loop_ub = (int32_T)betadiff;
      }

      sizes[0] = 1;
      sizes[1] = loop_ub;
      st.site = &tm_emlrtRSI;
      indexShapeCheck(&st, b0145->size[0], sizes);
      b_Xseaso = yin->contents->size[0];
      i = r->size[0];
      r->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(sp, r, i, &pq_emlrtRTEI);
      b_loop_ub = bsb->contents->size[0];
      for (i = 0; i < b_loop_ub; i++) {
        if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor(bsb->
             contents->data[i])) {
          emlrtIntegerCheckR2012b(bsb->contents->data[i], &hf_emlrtDCI,
            (emlrtCTX)sp);
        }

        i1 = (int32_T)bsb->contents->data[i];
        if ((i1 < 1) || (i1 > b_Xseaso)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, b_Xseaso, &li_emlrtBCI, (emlrtCTX)
            sp);
        }

        r->data[i] = yin->contents->data[i1 - 1];
      }

      st.site = &tm_emlrtRSI;
      input_sizes_idx_1 = Xtrend->contents->size[0];
      b_loop_ub = Xtrend->contents->size[1];
      i = a->size[0] * a->size[1];
      a->size[0] = bsb->contents->size[0];
      a->size[1] = b_loop_ub;
      emxEnsureCapacity_real_T(&st, a, i, &tq_emlrtRTEI);
      for (i = 0; i < b_loop_ub; i++) {
        b_Xseaso = bsb->contents->size[0];
        for (i1 = 0; i1 < b_Xseaso; i1++) {
          if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i1])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i1], &lf_emlrtDCI, &st);
          }

          i2 = (int32_T)bsb->contents->data[i1];
          if ((i2 < 1) || (i2 > input_sizes_idx_1)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, input_sizes_idx_1, &pi_emlrtBCI,
              &st);
          }

          a->data[i1 + a->size[0] * i] = Xtrend->contents->data[(i2 +
            Xtrend->contents->size[0] * i) - 1];
        }
      }

      i = b_b0145->size[0] * b_b0145->size[1];
      b_b0145->size[0] = 1;
      b_b0145->size[1] = loop_ub;
      emxEnsureCapacity_real_T(&st, b_b0145, i, &xq_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        b_b0145->data[i] = b0145->data[i];
      }

      b_st.site = &qj_emlrtRSI;
      b_dynamic_size_checks(&b_st, a, b_b0145, a->size[1], loop_ub);
      i = b_b0145->size[0] * b_b0145->size[1];
      b_b0145->size[0] = 1;
      b_b0145->size[1] = loop_ub;
      emxEnsureCapacity_real_T(&st, b_b0145, i, &xq_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        b_b0145->data[i] = b0145->data[i];
      }

      b_st.site = &pj_emlrtRSI;
      mtimes(&b_st, a, b_b0145, at);
      if (r->size[0] != at->size[0]) {
        emlrtSizeEqCheck1DR2012b(r->size[0], at->size[0], &mb_emlrtECI,
          (emlrtCTX)sp);
      }

      y = trend->contents + 2.0;
      betadiff += nexpl->contents;
      if (y > betadiff) {
        i = -1;
        i1 = -1;
      } else {
        if (y != (int32_T)muDoubleScalarFloor(y)) {
          emlrtIntegerCheckR2012b(y, &be_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)y < 1) || ((int32_T)y > b0145->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)y, 1, b0145->size[0],
            &yg_emlrtBCI, (emlrtCTX)sp);
        }

        i = (int32_T)y - 2;
        if (betadiff != (int32_T)muDoubleScalarFloor(betadiff)) {
          emlrtIntegerCheckR2012b(betadiff, &ae_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)betadiff < 1) || ((int32_T)betadiff > b0145->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)betadiff, 1, b0145->size[0],
            &xg_emlrtBCI, (emlrtCTX)sp);
        }

        i1 = (int32_T)betadiff - 1;
      }

      sizes[0] = 1;
      b_input_sizes_idx_1 = i1 - i;
      sizes[1] = b_input_sizes_idx_1;
      st.site = &tm_emlrtRSI;
      indexShapeCheck(&st, b0145->size[0], sizes);
      st.site = &tm_emlrtRSI;
      b_Xseaso = X->contents->size[0];
      loop_ub = X->contents->size[1];
      i2 = a->size[0] * a->size[1];
      a->size[0] = bsb->contents->size[0];
      a->size[1] = loop_ub;
      emxEnsureCapacity_real_T(&st, a, i2, &er_emlrtRTEI);
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_loop_ub = bsb->contents->size[0];
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          if (bsb->contents->data[i3] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i3])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i3], &sf_emlrtDCI, &st);
          }

          i4 = (int32_T)bsb->contents->data[i3];
          if ((i4 < 1) || (i4 > b_Xseaso)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, b_Xseaso, &wi_emlrtBCI, &st);
          }

          a->data[i3 + a->size[0] * i2] = X->contents->data[(i4 + X->
            contents->size[0] * i2) - 1];
        }
      }

      i2 = b_b0145->size[0] * b_b0145->size[1];
      b_b0145->size[0] = 1;
      b_b0145->size[1] = b_input_sizes_idx_1;
      emxEnsureCapacity_real_T(&st, b_b0145, i2, &ir_emlrtRTEI);
      for (i2 = 0; i2 < b_input_sizes_idx_1; i2++) {
        b_b0145->data[i2] = b0145->data[(i + i2) + 1];
      }

      b_st.site = &qj_emlrtRSI;
      b_dynamic_size_checks(&b_st, a, b_b0145, a->size[1], i1 - i);
      i1 = b_b0145->size[0] * b_b0145->size[1];
      b_b0145->size[0] = 1;
      b_b0145->size[1] = b_input_sizes_idx_1;
      emxEnsureCapacity_real_T(&st, b_b0145, i1, &ir_emlrtRTEI);
      for (i1 = 0; i1 < b_input_sizes_idx_1; i1++) {
        b_b0145->data[i1] = b0145->data[(i + i1) + 1];
      }

      b_st.site = &pj_emlrtRSI;
      mtimes(&b_st, a, b_b0145, r1);
      if (r->size[0] != r1->size[0]) {
        emlrtSizeEqCheck1DR2012b(r->size[0], r1->size[0], &mb_emlrtECI,
          (emlrtCTX)sp);
      }

      b_Xseaso = Xseaso->contents->size[0];
      loop_ub = Xseaso->contents->size[1];
      i = tr_expl_nls_lshift->size[0] * tr_expl_nls_lshift->size[1];
      tr_expl_nls_lshift->size[0] = bsb->contents->size[0];
      tr_expl_nls_lshift->size[1] = loop_ub;
      emxEnsureCapacity_real_T(sp, tr_expl_nls_lshift, i, &mr_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = bsb->contents->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i1])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i1], &vf_emlrtDCI,
              (emlrtCTX)sp);
          }

          i2 = (int32_T)bsb->contents->data[i1];
          if ((i2 < 1) || (i2 > b_Xseaso)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, b_Xseaso, &aj_emlrtBCI,
              (emlrtCTX)sp);
          }

          tr_expl_nls_lshift->data[i1 + tr_expl_nls_lshift->size[0] * i] =
            Xseaso->contents->data[(i2 + Xseaso->contents->size[0] * i) - 1];
        }
      }

      st.site = &sm_emlrtRSI;
      bsxfun(&st, yhatnlseaso, tr_expl_nls_lshift, a);
      loop_ub = r->size[0];
      for (i = 0; i < loop_ub; i++) {
        r->data[i] = (r->data[i] - at->data[i]) - r1->data[i];
      }

      st.site = &sm_emlrtRSI;
      mldivide(&st, a, r, yhatnlseaso);
    }

    i = r2->size[0] * r2->size[1];
    r2->size[0] = 1;
    r2->size[1] = indlinsc->contents->size[1];
    emxEnsureCapacity_int32_T(sp, r2, i, &gr_emlrtRTEI);
    loop_ub = indlinsc->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      if (indlinsc->contents->data[i] != (int32_T)muDoubleScalarFloor
          (indlinsc->contents->data[i])) {
        emlrtIntegerCheckR2012b(indlinsc->contents->data[i], &uf_emlrtDCI,
          (emlrtCTX)sp);
      }

      i1 = (int32_T)indlinsc->contents->data[i];
      if ((i1 < 1) || (i1 > newbeta->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)indlinsc->contents->data[i], 1,
          newbeta->size[0], &yi_emlrtBCI, (emlrtCTX)sp);
      }

      r2->data[i] = i1;
    }

    if (yhatnlseaso->size[0] != r2->size[1]) {
      emlrtSubAssignSizeCheck1dR2017a(r2->size[1], yhatnlseaso->size[0],
        &lb_emlrtECI, (emlrtCTX)sp);
    }

    loop_ub = r2->size[1];
    for (i = 0; i < loop_ub; i++) {
      newbeta->data[r2->data[i] - 1] = yhatnlseaso->data[i];
    }

    i = r2->size[0] * r2->size[1];
    r2->size[0] = 1;
    r2->size[1] = otherind->contents->size[1];
    emxEnsureCapacity_int32_T(sp, r2, i, &kr_emlrtRTEI);
    loop_ub = otherind->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      if (otherind->contents->data[i] != (int32_T)muDoubleScalarFloor
          (otherind->contents->data[i])) {
        emlrtIntegerCheckR2012b(otherind->contents->data[i], &xf_emlrtDCI,
          (emlrtCTX)sp);
      }

      i1 = (int32_T)otherind->contents->data[i];
      if ((i1 < 1) || (i1 > newbeta->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)otherind->contents->data[i], 1,
          newbeta->size[0], &cj_emlrtBCI, (emlrtCTX)sp);
      }

      r2->data[i] = i1;
    }

    if (b0145->size[0] != r2->size[1]) {
      emlrtSubAssignSizeCheck1dR2017a(r2->size[1], b0145->size[0], &kb_emlrtECI,
        (emlrtCTX)sp);
    }

    loop_ub = r2->size[1];
    for (i = 0; i < loop_ub; i++) {
      newbeta->data[r2->data[i] - 1] = b0145->data[i];
    }

    /*  betadiff is linked to the tolerance (specified in reftol) */
    if (oldbeta->size[0] != newbeta->size[0]) {
      emlrtSizeEqCheck1DR2012b(oldbeta->size[0], newbeta->size[0], &jb_emlrtECI,
        (emlrtCTX)sp);
    }

    loop_ub = oldbeta->size[0];
    for (i = 0; i < loop_ub; i++) {
      oldbeta->data[i] -= newbeta->data[i];
    }

    if (oldbeta->size[0] == 0) {
      betadiff = 0.0;
    } else {
      betadiff = 0.0;
      i = oldbeta->size[0];
      for (b_Xseaso = 0; b_Xseaso < i; b_Xseaso++) {
        betadiff += muDoubleScalarAbs(oldbeta->data[b_Xseaso]);
      }
    }

    if (newbeta->size[0] == 0) {
      y = 0.0;
    } else {
      y = 0.0;
      i = newbeta->size[0];
      for (b_Xseaso = 0; b_Xseaso < i; b_Xseaso++) {
        y += muDoubleScalarAbs(newbeta->data[b_Xseaso]);
      }
    }

    betadiff /= y;
    i = oldbeta->size[0];
    oldbeta->size[0] = newbeta->size[0];
    emxEnsureCapacity_real_T(sp, oldbeta, i, &nr_emlrtRTEI);
    loop_ub = newbeta->size[0];
    for (i = 0; i < loop_ub; i++) {
      oldbeta->data[i] = newbeta->data[i];
    }

    /*  exit from the loop if the new beta has singular values. In */
    /*  such a case, any intermediate estimate is not reliable and we */
    /*  can just keep the initialbeta and initial scale. */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }

    i = r3->size[0];
    r3->size[0] = newbeta->size[0];
    emxEnsureCapacity_boolean_T(sp, r3, i, &we_emlrtRTEI);
    loop_ub = newbeta->size[0];
    for (i = 0; i < loop_ub; i++) {
      r3->data[i] = muDoubleScalarIsNaN(newbeta->data[i]);
    }

    st.site = &um_emlrtRSI;
    if (any(&st, r3)) {
      i = newbeta->size[0];
      newbeta->size[0] = beta0->size[0];
      emxEnsureCapacity_real_T(sp, newbeta, i, &pr_emlrtRTEI);
      loop_ub = beta0->size[0];
      for (i = 0; i < loop_ub; i++) {
        newbeta->data[i] = beta0->data[i];
      }

      b_exitflag = -1;
      exitg1 = true;
    }
  }

  emxFree_real_T(&b_b0145);
  emxFree_boolean_T(&r3);
  emxFree_real_T(&b_a);
  emxFree_real_T(&varargin_3);
  emxFree_real_T(&varargin_2);
  emxFree_real_T(&varargin_1);
  emxFree_real_T(&a);
  emxFree_int32_T(&r2);
  emxFree_real_T(&r1);
  emxFree_real_T(&r);
  emxFree_real_T(&yhatnlseaso);
  emxFree_real_T(&b0145);
  emxFree_real_T(&tr_expl_nls_lshift);
  emxFree_real_T(&at);
  emxFree_real_T(&oldbeta);
  *exitflag = b_exitflag;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static void b_ALS(const emlrtStack *sp, const d_captured_var *Seq, const
                  d_captured_var *bsb, const d_captured_var *Xseaso, const
                  d_captured_var *Xtrend, const d_captured_var *yin, const
                  captured_var *trend, const captured_var *nexpl, const
                  captured_var *varampl, const b_captured_var *isemptyX, const
                  captured_var *lshiftYN, const d_captured_var *Xlshift, const
                  d_captured_var *X, const captured_var *reftolALS, const
                  captured_var *refstepsALS, const d_captured_var *indlinsc,
                  const d_captured_var *otherind, const emxArray_real_T *beta0,
                  emxArray_real_T *newbeta, real_T *exitflag)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_boolean_T *r2;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *Seqbsb;
  emxArray_real_T *Seqbsbvarampl;
  emxArray_real_T *Xbsb;
  emxArray_real_T *Xlshiftbsb;
  emxArray_real_T *Xseasobsb;
  emxArray_real_T *XtrendXbsbXseasonXlshift;
  emxArray_real_T *Xtrendbsb;
  emxArray_real_T *XtrendbsbXbsb;
  emxArray_real_T *b_yinbsb;
  emxArray_real_T *indnlseaso;
  emxArray_real_T *indnlseasoc;
  emxArray_real_T *oldbeta;
  emxArray_real_T *y;
  emxArray_real_T *yhatnlseaso;
  emxArray_real_T *yinbsb;
  real_T b2378;
  real_T b_tmp;
  real_T betadiff;
  real_T iter;
  int32_T input_sizes[2];
  int32_T b_exitflag;
  int32_T b_input_sizes_idx_1;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T input_sizes_idx_1;
  int32_T loop_ub;
  int32_T result;
  int32_T result_idx_1;
  int32_T sizes_idx_1;
  boolean_T empty_non_axis_sizes;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);

  /*  The part below contains subfunctions which are used only inside this file */
  /*  ALS computes Alternating Least Squares estimate of beta starting from */
  /*  vector beta0. The rows which are used are those specified in global */
  /*  variable bsb */
  iter = 0.0;
  betadiff = 9999.0;
  i = newbeta->size[0];
  newbeta->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(sp, newbeta, i, &ll_emlrtRTEI);
  loop_ub = beta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    newbeta->data[i] = beta0->data[i];
  }

  emxInit_real_T(sp, &oldbeta, 1, &ml_emlrtRTEI, true);
  i = oldbeta->size[0];
  oldbeta->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(sp, oldbeta, i, &ml_emlrtRTEI);
  loop_ub = beta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    oldbeta->data[i] = beta0->data[i];
  }

  emxInit_real_T(sp, &Seqbsb, 1, &nl_emlrtRTEI, true);

  /*  exitflag = flag which informs about convergence. exitflag =0 */
  /*  implies normal convergence, else no convergence has been obtained */
  b_exitflag = 0;

  /*  Define all the relevant matrices before the loop */
  input_sizes_idx_1 = Seq->contents->size[0];
  i = Seqbsb->size[0];
  Seqbsb->size[0] = bsb->contents->size[0];
  emxEnsureCapacity_real_T(sp, Seqbsb, i, &nl_emlrtRTEI);
  loop_ub = bsb->contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor(bsb->
         contents->data[i])) {
      emlrtIntegerCheckR2012b(bsb->contents->data[i], &bg_emlrtDCI, (emlrtCTX)sp);
    }

    i1 = (int32_T)bsb->contents->data[i];
    if ((i1 < 1) || (i1 > input_sizes_idx_1)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, input_sizes_idx_1, &fj_emlrtBCI,
        (emlrtCTX)sp);
    }

    Seqbsb->data[i] = Seq->contents->data[i1 - 1];
  }

  emxInit_real_T(sp, &Xseasobsb, 2, &ol_emlrtRTEI, true);
  input_sizes_idx_1 = Xseaso->contents->size[0];
  loop_ub = Xseaso->contents->size[1];
  i = Xseasobsb->size[0] * Xseasobsb->size[1];
  Xseasobsb->size[0] = bsb->contents->size[0];
  Xseasobsb->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, Xseasobsb, i, &ol_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    b_input_sizes_idx_1 = bsb->contents->size[0];
    for (i1 = 0; i1 < b_input_sizes_idx_1; i1++) {
      if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor(bsb->
           contents->data[i1])) {
        emlrtIntegerCheckR2012b(bsb->contents->data[i1], &cg_emlrtDCI, (emlrtCTX)
          sp);
      }

      i2 = (int32_T)bsb->contents->data[i1];
      if ((i2 < 1) || (i2 > input_sizes_idx_1)) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, input_sizes_idx_1, &gj_emlrtBCI,
          (emlrtCTX)sp);
      }

      Xseasobsb->data[i1 + Xseasobsb->size[0] * i] = Xseaso->contents->data[(i2
        + Xseaso->contents->size[0] * i) - 1];
    }
  }

  emxInit_real_T(sp, &Xtrendbsb, 2, &pl_emlrtRTEI, true);
  input_sizes_idx_1 = Xtrend->contents->size[0];
  loop_ub = Xtrend->contents->size[1];
  i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
  Xtrendbsb->size[0] = bsb->contents->size[0];
  Xtrendbsb->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, Xtrendbsb, i, &pl_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    b_input_sizes_idx_1 = bsb->contents->size[0];
    for (i1 = 0; i1 < b_input_sizes_idx_1; i1++) {
      if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor(bsb->
           contents->data[i1])) {
        emlrtIntegerCheckR2012b(bsb->contents->data[i1], &dg_emlrtDCI, (emlrtCTX)
          sp);
      }

      i2 = (int32_T)bsb->contents->data[i1];
      if ((i2 < 1) || (i2 > input_sizes_idx_1)) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, input_sizes_idx_1, &hj_emlrtBCI,
          (emlrtCTX)sp);
      }

      Xtrendbsb->data[i1 + Xtrendbsb->size[0] * i] = Xtrend->contents->data[(i2
        + Xtrend->contents->size[0] * i) - 1];
    }
  }

  emxInit_real_T(sp, &yinbsb, 1, &ql_emlrtRTEI, true);
  input_sizes_idx_1 = yin->contents->size[0];
  i = yinbsb->size[0];
  yinbsb->size[0] = bsb->contents->size[0];
  emxEnsureCapacity_real_T(sp, yinbsb, i, &ql_emlrtRTEI);
  loop_ub = bsb->contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor(bsb->
         contents->data[i])) {
      emlrtIntegerCheckR2012b(bsb->contents->data[i], &eg_emlrtDCI, (emlrtCTX)sp);
    }

    i1 = (int32_T)bsb->contents->data[i];
    if ((i1 < 1) || (i1 > input_sizes_idx_1)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, input_sizes_idx_1, &ij_emlrtBCI,
        (emlrtCTX)sp);
    }

    yinbsb->data[i] = yin->contents->data[i1 - 1];
  }

  st.site = &wm_emlrtRSI;
  b2378 = (trend->contents + 2.0) + nexpl->contents;
  b_tmp = b2378 + varampl->contents;
  b_st.site = &qg_emlrtRSI;
  emxInit_real_T(&b_st, &indnlseaso, 2, &rl_emlrtRTEI, true);
  if (muDoubleScalarIsNaN(b2378) || muDoubleScalarIsNaN(b_tmp - 1.0)) {
    i = indnlseaso->size[0] * indnlseaso->size[1];
    indnlseaso->size[0] = 1;
    indnlseaso->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, indnlseaso, i, &rl_emlrtRTEI);
    indnlseaso->data[0] = rtNaN;
  } else if (b_tmp - 1.0 < b2378) {
    indnlseaso->size[0] = 1;
    indnlseaso->size[1] = 0;
  } else if ((muDoubleScalarIsInf(b2378) || muDoubleScalarIsInf(b_tmp - 1.0)) &&
             (b2378 == b_tmp - 1.0)) {
    i = indnlseaso->size[0] * indnlseaso->size[1];
    indnlseaso->size[0] = 1;
    indnlseaso->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, indnlseaso, i, &rl_emlrtRTEI);
    indnlseaso->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(b2378) == b2378) {
    i = indnlseaso->size[0] * indnlseaso->size[1];
    indnlseaso->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor((b_tmp - 1.0) - b2378);
    indnlseaso->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&b_st, indnlseaso, i, &rl_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      indnlseaso->data[i] = b2378 + (real_T)i;
    }
  } else {
    c_st.site = &rg_emlrtRSI;
    eml_float_colon(&c_st, b2378, b_tmp - 1.0, indnlseaso);
  }

  b2378 = varampl->contents + 1.0;
  if (2.0 > b2378) {
    i = 0;
    i1 = 0;
  } else {
    i = 1;
    if (b2378 != (int32_T)muDoubleScalarFloor(b2378)) {
      emlrtIntegerCheckR2012b(b2378, &ag_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)b2378 < 1) || ((int32_T)b2378 > 4)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b2378, 1, 4, &ej_emlrtBCI,
        (emlrtCTX)sp);
    }

    i1 = (int32_T)b2378;
  }

  emxInit_real_T(sp, &Seqbsbvarampl, 2, &sl_emlrtRTEI, true);
  input_sizes_idx_1 = Seq->contents->size[0];
  i2 = Seqbsbvarampl->size[0] * Seqbsbvarampl->size[1];
  Seqbsbvarampl->size[0] = bsb->contents->size[0];
  loop_ub = i1 - i;
  Seqbsbvarampl->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, Seqbsbvarampl, i2, &sl_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_input_sizes_idx_1 = bsb->contents->size[0];
    for (i2 = 0; i2 < b_input_sizes_idx_1; i2++) {
      if (bsb->contents->data[i2] != (int32_T)muDoubleScalarFloor(bsb->
           contents->data[i2])) {
        emlrtIntegerCheckR2012b(bsb->contents->data[i2], &fg_emlrtDCI, (emlrtCTX)
          sp);
      }

      result_idx_1 = (int32_T)bsb->contents->data[i2];
      if ((result_idx_1 < 1) || (result_idx_1 > input_sizes_idx_1)) {
        emlrtDynamicBoundsCheckR2012b(result_idx_1, 1, input_sizes_idx_1,
          &jj_emlrtBCI, (emlrtCTX)sp);
      }

      Seqbsbvarampl->data[i2 + Seqbsbvarampl->size[0] * i1] = Seq->
        contents->data[(result_idx_1 + Seq->contents->size[0] * (i + i1)) - 1];
    }
  }

  emxInit_real_T(sp, &Xlshiftbsb, 1, &ul_emlrtRTEI, true);
  emxInit_real_T(sp, &XtrendXbsbXseasonXlshift, 2, &yl_emlrtRTEI, true);
  emxInit_real_T(sp, &indnlseasoc, 2, &im_emlrtRTEI, true);
  emxInit_real_T(sp, &y, 2, &wm_emlrtRTEI, true);
  if (isemptyX->contents) {
    if (lshiftYN->contents == 1.0) {
      st.site = &xm_emlrtRSI;
      c_indexShapeCheck(&st, *(int32_T (*)[2])Xlshift->contents->size,
                        bsb->contents->size[0]);
      input_sizes_idx_1 = Xlshift->contents->size[0] * Xlshift->contents->size[1];
      i = Xlshiftbsb->size[0];
      Xlshiftbsb->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(sp, Xlshiftbsb, i, &ul_emlrtRTEI);
      loop_ub = bsb->contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor(bsb->
             contents->data[i])) {
          emlrtIntegerCheckR2012b(bsb->contents->data[i], &hg_emlrtDCI,
            (emlrtCTX)sp);
        }

        i1 = (int32_T)bsb->contents->data[i];
        if ((i1 < 1) || (i1 > input_sizes_idx_1)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, input_sizes_idx_1, &lj_emlrtBCI,
            (emlrtCTX)sp);
        }

        Xlshiftbsb->data[i] = Xlshift->contents->data[i1 - 1];
      }

      st.site = &ym_emlrtRSI;
      b_st.site = &pg_emlrtRSI;
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        result = Xtrendbsb->size[0];
      } else if ((Seqbsbvarampl->size[0] != 0) && (Seqbsbvarampl->size[1] != 0))
      {
        result = Seqbsbvarampl->size[0];
      } else if (Xlshiftbsb->size[0] != 0) {
        result = Xlshiftbsb->size[0];
      } else {
        result = Xtrendbsb->size[0];
        if (Seqbsbvarampl->size[0] > Xtrendbsb->size[0]) {
          result = Seqbsbvarampl->size[0];
        }
      }

      c_st.site = &rf_emlrtRSI;
      if ((Xtrendbsb->size[0] != result) && ((Xtrendbsb->size[0] != 0) &&
           (Xtrendbsb->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Seqbsbvarampl->size[0] != result) && ((Seqbsbvarampl->size[0] != 0) &&
           (Seqbsbvarampl->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Xlshiftbsb->size[0] != result) && (Xlshiftbsb->size[0] != 0)) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->
            size[1] != 0))) {
        input_sizes[1] = Xtrendbsb->size[1];
      } else {
        input_sizes[1] = 0;
      }

      if (empty_non_axis_sizes || ((Seqbsbvarampl->size[0] != 0) &&
           (Seqbsbvarampl->size[1] != 0))) {
        b_input_sizes_idx_1 = Seqbsbvarampl->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || (Xlshiftbsb->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }

      result_idx_1 = input_sizes[1];
      i = XtrendXbsbXseasonXlshift->size[0] * XtrendXbsbXseasonXlshift->size[1];
      XtrendXbsbXseasonXlshift->size[0] = result;
      i1 = result_idx_1 + b_input_sizes_idx_1;
      XtrendXbsbXseasonXlshift->size[1] = i1 + sizes_idx_1;
      emxEnsureCapacity_real_T(&b_st, XtrendXbsbXseasonXlshift, i, &yl_emlrtRTEI);
      for (i = 0; i < result_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          XtrendXbsbXseasonXlshift->data[i2 + XtrendXbsbXseasonXlshift->size[0] *
            i] = Xtrendbsb->data[i2 + result * i];
        }
      }

      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          XtrendXbsbXseasonXlshift->data[i2 + XtrendXbsbXseasonXlshift->size[0] *
            (i + result_idx_1)] = Seqbsbvarampl->data[i2 + result * i];
        }
      }

      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          XtrendXbsbXseasonXlshift->data[i2 + XtrendXbsbXseasonXlshift->size[0] *
            i1] = Xlshiftbsb->data[i2];
        }
      }

      st.site = &an_emlrtRSI;
      b_st.site = &pg_emlrtRSI;
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        result = Xtrendbsb->size[0];
      } else if (Xlshiftbsb->size[0] != 0) {
        result = Xlshiftbsb->size[0];
      } else {
        result = Xtrendbsb->size[0];
      }

      c_st.site = &rf_emlrtRSI;
      if ((Xtrendbsb->size[0] != result) && ((Xtrendbsb->size[0] != 0) &&
           (Xtrendbsb->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Xlshiftbsb->size[0] != result) && (Xlshiftbsb->size[0] != 0)) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->
            size[1] != 0))) {
        input_sizes_idx_1 = Xtrendbsb->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || (Xlshiftbsb->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }

      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * i] = Xtrendbsb->data[i1 +
            result * i];
        }
      }

      i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
      Xtrendbsb->size[0] = result;
      Xtrendbsb->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(&b_st, Xtrendbsb, i, &fm_emlrtRTEI);
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * input_sizes_idx_1] =
            Xlshiftbsb->data[i1];
        }
      }

      b2378 = trend->contents + 1.0;
      if (muDoubleScalarIsNaN(b2378)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(sp, y, i, &oc_emlrtRTEI);
        y->data[0] = rtNaN;
      } else if (b2378 < 1.0) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if (muDoubleScalarIsInf(b2378) && (1.0 == b2378)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(sp, y, i, &oc_emlrtRTEI);
        y->data[0] = rtNaN;
      } else {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        loop_ub = (int32_T)muDoubleScalarFloor(b2378 - 1.0);
        y->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(sp, y, i, &oc_emlrtRTEI);
        for (i = 0; i <= loop_ub; i++) {
          y->data[i] = (real_T)i + 1.0;
        }
      }

      i = indnlseasoc->size[0] * indnlseasoc->size[1];
      indnlseasoc->size[0] = 1;
      indnlseasoc->size[1] = y->size[1] + 1;
      emxEnsureCapacity_real_T(sp, indnlseasoc, i, &im_emlrtRTEI);
      loop_ub = y->size[1];
      for (i = 0; i < loop_ub; i++) {
        indnlseasoc->data[i] = y->data[i];
      }

      indnlseasoc->data[y->size[1]] = b_tmp;
    } else {
      st.site = &bn_emlrtRSI;
      b_st.site = &pg_emlrtRSI;
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        result = Xtrendbsb->size[0];
      } else if ((Seqbsbvarampl->size[0] != 0) && (Seqbsbvarampl->size[1] != 0))
      {
        result = Seqbsbvarampl->size[0];
      } else {
        result = Xtrendbsb->size[0];
        if (Seqbsbvarampl->size[0] > Xtrendbsb->size[0]) {
          result = Seqbsbvarampl->size[0];
        }
      }

      c_st.site = &rf_emlrtRSI;
      if ((Xtrendbsb->size[0] != result) && ((Xtrendbsb->size[0] != 0) &&
           (Xtrendbsb->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Seqbsbvarampl->size[0] != result) && ((Seqbsbvarampl->size[0] != 0) &&
           (Seqbsbvarampl->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->
            size[1] != 0))) {
        input_sizes[1] = Xtrendbsb->size[1];
      } else {
        input_sizes[1] = 0;
      }

      if (empty_non_axis_sizes || ((Seqbsbvarampl->size[0] != 0) &&
           (Seqbsbvarampl->size[1] != 0))) {
        sizes_idx_1 = Seqbsbvarampl->size[1];
      } else {
        sizes_idx_1 = 0;
      }

      result_idx_1 = input_sizes[1];
      i = XtrendXbsbXseasonXlshift->size[0] * XtrendXbsbXseasonXlshift->size[1];
      XtrendXbsbXseasonXlshift->size[0] = result;
      XtrendXbsbXseasonXlshift->size[1] = input_sizes[1] + sizes_idx_1;
      emxEnsureCapacity_real_T(&b_st, XtrendXbsbXseasonXlshift, i, &vl_emlrtRTEI);
      loop_ub = input_sizes[1];
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < result; i1++) {
          XtrendXbsbXseasonXlshift->data[i1 + XtrendXbsbXseasonXlshift->size[0] *
            i] = Xtrendbsb->data[i1 + result * i];
        }
      }

      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          XtrendXbsbXseasonXlshift->data[i1 + XtrendXbsbXseasonXlshift->size[0] *
            (i + result_idx_1)] = Seqbsbvarampl->data[i1 + result * i];
        }
      }

      b2378 = trend->contents + 1.0;
      if (muDoubleScalarIsNaN(b2378)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(sp, indnlseasoc, i, &xl_emlrtRTEI);
        indnlseasoc->data[0] = rtNaN;
      } else if (b2378 < 1.0) {
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 0;
      } else if (muDoubleScalarIsInf(b2378) && (1.0 == b2378)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(sp, indnlseasoc, i, &xl_emlrtRTEI);
        indnlseasoc->data[0] = rtNaN;
      } else {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        loop_ub = (int32_T)muDoubleScalarFloor(b2378 - 1.0);
        indnlseasoc->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(sp, indnlseasoc, i, &xl_emlrtRTEI);
        for (i = 0; i <= loop_ub; i++) {
          indnlseasoc->data[i] = (real_T)i + 1.0;
        }
      }
    }
  } else {
    emxInit_real_T(sp, &Xbsb, 2, &tl_emlrtRTEI, true);
    input_sizes_idx_1 = X->contents->size[0];
    loop_ub = X->contents->size[1];
    i = Xbsb->size[0] * Xbsb->size[1];
    Xbsb->size[0] = bsb->contents->size[0];
    Xbsb->size[1] = loop_ub;
    emxEnsureCapacity_real_T(sp, Xbsb, i, &tl_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      b_input_sizes_idx_1 = bsb->contents->size[0];
      for (i1 = 0; i1 < b_input_sizes_idx_1; i1++) {
        if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor
            (bsb->contents->data[i1])) {
          emlrtIntegerCheckR2012b(bsb->contents->data[i1], &gg_emlrtDCI,
            (emlrtCTX)sp);
        }

        i2 = (int32_T)bsb->contents->data[i1];
        if ((i2 < 1) || (i2 > input_sizes_idx_1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, input_sizes_idx_1, &kj_emlrtBCI,
            (emlrtCTX)sp);
        }

        Xbsb->data[i1 + Xbsb->size[0] * i] = X->contents->data[(i2 + X->
          contents->size[0] * i) - 1];
      }
    }

    st.site = &cn_emlrtRSI;
    b_st.site = &pg_emlrtRSI;
    if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
      result = Xtrendbsb->size[0];
    } else if ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0)) {
      result = Xbsb->size[0];
    } else {
      result = Xtrendbsb->size[0];
      if (Xbsb->size[0] > Xtrendbsb->size[0]) {
        result = Xbsb->size[0];
      }
    }

    c_st.site = &rf_emlrtRSI;
    if ((Xtrendbsb->size[0] != result) && ((Xtrendbsb->size[0] != 0) &&
         (Xtrendbsb->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((Xbsb->size[0] != result) && ((Xbsb->size[0] != 0) && (Xbsb->size[1] !=
          0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (result == 0);
    if (empty_non_axis_sizes || ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1]
          != 0))) {
      input_sizes[1] = Xtrendbsb->size[1];
    } else {
      input_sizes[1] = 0;
    }

    if (empty_non_axis_sizes || ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0)))
    {
      sizes_idx_1 = Xbsb->size[1];
    } else {
      sizes_idx_1 = 0;
    }

    emxInit_real_T(&b_st, &XtrendbsbXbsb, 2, &wl_emlrtRTEI, true);
    result_idx_1 = input_sizes[1];
    i = XtrendbsbXbsb->size[0] * XtrendbsbXbsb->size[1];
    XtrendbsbXbsb->size[0] = result;
    XtrendbsbXbsb->size[1] = input_sizes[1] + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, XtrendbsbXbsb, i, &wl_emlrtRTEI);
    loop_ub = input_sizes[1];
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < result; i1++) {
        XtrendbsbXbsb->data[i1 + XtrendbsbXbsb->size[0] * i] = Xtrendbsb->
          data[i1 + result * i];
      }
    }

    for (i = 0; i < sizes_idx_1; i++) {
      for (i1 = 0; i1 < result; i1++) {
        XtrendbsbXbsb->data[i1 + XtrendbsbXbsb->size[0] * (i + result_idx_1)] =
          Xbsb->data[i1 + result * i];
      }
    }

    if (lshiftYN->contents == 1.0) {
      st.site = &dn_emlrtRSI;
      c_indexShapeCheck(&st, *(int32_T (*)[2])Xlshift->contents->size,
                        bsb->contents->size[0]);
      input_sizes_idx_1 = Xlshift->contents->size[0] * Xlshift->contents->size[1];
      i = Xlshiftbsb->size[0];
      Xlshiftbsb->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(sp, Xlshiftbsb, i, &am_emlrtRTEI);
      loop_ub = bsb->contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor(bsb->
             contents->data[i])) {
          emlrtIntegerCheckR2012b(bsb->contents->data[i], &ig_emlrtDCI,
            (emlrtCTX)sp);
        }

        i1 = (int32_T)bsb->contents->data[i];
        if ((i1 < 1) || (i1 > input_sizes_idx_1)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, input_sizes_idx_1, &mj_emlrtBCI,
            (emlrtCTX)sp);
        }

        Xlshiftbsb->data[i] = Xlshift->contents->data[i1 - 1];
      }

      st.site = &en_emlrtRSI;
      b_st.site = &pg_emlrtRSI;
      if ((XtrendbsbXbsb->size[0] != 0) && (XtrendbsbXbsb->size[1] != 0)) {
        result = XtrendbsbXbsb->size[0];
      } else if ((Seqbsbvarampl->size[0] != 0) && (Seqbsbvarampl->size[1] != 0))
      {
        result = Seqbsbvarampl->size[0];
      } else if (Xlshiftbsb->size[0] != 0) {
        result = Xlshiftbsb->size[0];
      } else {
        result = XtrendbsbXbsb->size[0];
        if (Seqbsbvarampl->size[0] > XtrendbsbXbsb->size[0]) {
          result = Seqbsbvarampl->size[0];
        }
      }

      c_st.site = &rf_emlrtRSI;
      if ((XtrendbsbXbsb->size[0] != result) && ((XtrendbsbXbsb->size[0] != 0) &&
           (XtrendbsbXbsb->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Seqbsbvarampl->size[0] != result) && ((Seqbsbvarampl->size[0] != 0) &&
           (Seqbsbvarampl->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Xlshiftbsb->size[0] != result) && (Xlshiftbsb->size[0] != 0)) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((XtrendbsbXbsb->size[0] != 0) &&
           (XtrendbsbXbsb->size[1] != 0))) {
        b_input_sizes_idx_1 = XtrendbsbXbsb->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((Seqbsbvarampl->size[0] != 0) &&
           (Seqbsbvarampl->size[1] != 0))) {
        input_sizes_idx_1 = Seqbsbvarampl->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || (Xlshiftbsb->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }

      i = XtrendXbsbXseasonXlshift->size[0] * XtrendXbsbXseasonXlshift->size[1];
      XtrendXbsbXseasonXlshift->size[0] = result;
      i1 = b_input_sizes_idx_1 + input_sizes_idx_1;
      XtrendXbsbXseasonXlshift->size[1] = i1 + sizes_idx_1;
      emxEnsureCapacity_real_T(&b_st, XtrendXbsbXseasonXlshift, i, &gm_emlrtRTEI);
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          XtrendXbsbXseasonXlshift->data[i2 + XtrendXbsbXseasonXlshift->size[0] *
            i] = XtrendbsbXbsb->data[i2 + result * i];
        }
      }

      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          XtrendXbsbXseasonXlshift->data[i2 + XtrendXbsbXseasonXlshift->size[0] *
            (i + b_input_sizes_idx_1)] = Seqbsbvarampl->data[i2 + result * i];
        }
      }

      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          XtrendXbsbXseasonXlshift->data[i2 + XtrendXbsbXseasonXlshift->size[0] *
            i1] = Xlshiftbsb->data[i2];
        }
      }

      st.site = &fn_emlrtRSI;
      b_st.site = &pg_emlrtRSI;
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        result = Xtrendbsb->size[0];
      } else if ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0)) {
        result = Xbsb->size[0];
      } else if (Xlshiftbsb->size[0] != 0) {
        result = Xlshiftbsb->size[0];
      } else {
        result = Xtrendbsb->size[0];
        if (Xbsb->size[0] > Xtrendbsb->size[0]) {
          result = Xbsb->size[0];
        }
      }

      c_st.site = &rf_emlrtRSI;
      if ((Xtrendbsb->size[0] != result) && ((Xtrendbsb->size[0] != 0) &&
           (Xtrendbsb->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Xbsb->size[0] != result) && ((Xbsb->size[0] != 0) && (Xbsb->size[1]
            != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Xlshiftbsb->size[0] != result) && (Xlshiftbsb->size[0] != 0)) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->
            size[1] != 0))) {
        b_input_sizes_idx_1 = Xtrendbsb->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0)))
      {
        input_sizes_idx_1 = Xbsb->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || (Xlshiftbsb->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }

      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * i] = Xtrendbsb->data[i1 +
            result * i];
        }
      }

      i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
      Xtrendbsb->size[0] = result;
      i1 = b_input_sizes_idx_1 + input_sizes_idx_1;
      Xtrendbsb->size[1] = i1 + sizes_idx_1;
      emxEnsureCapacity_real_T(&b_st, Xtrendbsb, i, &om_emlrtRTEI);
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          Xtrendbsb->data[i2 + Xtrendbsb->size[0] * (i + b_input_sizes_idx_1)] =
            Xbsb->data[i2 + result * i];
        }
      }

      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          Xtrendbsb->data[i2 + Xtrendbsb->size[0] * i1] = Xlshiftbsb->data[i2];
        }
      }

      b2378 = (trend->contents + 1.0) + nexpl->contents;
      if (muDoubleScalarIsNaN(b2378)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(sp, y, i, &oc_emlrtRTEI);
        y->data[0] = rtNaN;
      } else if (b2378 < 1.0) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if (muDoubleScalarIsInf(b2378) && (1.0 == b2378)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(sp, y, i, &oc_emlrtRTEI);
        y->data[0] = rtNaN;
      } else {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        loop_ub = (int32_T)muDoubleScalarFloor(b2378 - 1.0);
        y->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(sp, y, i, &oc_emlrtRTEI);
        for (i = 0; i <= loop_ub; i++) {
          y->data[i] = (real_T)i + 1.0;
        }
      }

      i = indnlseasoc->size[0] * indnlseasoc->size[1];
      indnlseasoc->size[0] = 1;
      indnlseasoc->size[1] = y->size[1] + 1;
      emxEnsureCapacity_real_T(sp, indnlseasoc, i, &rm_emlrtRTEI);
      loop_ub = y->size[1];
      for (i = 0; i < loop_ub; i++) {
        indnlseasoc->data[i] = y->data[i];
      }

      indnlseasoc->data[y->size[1]] = b_tmp;
    } else {
      st.site = &gn_emlrtRSI;
      b_st.site = &pg_emlrtRSI;
      if ((XtrendbsbXbsb->size[0] != 0) && (XtrendbsbXbsb->size[1] != 0)) {
        result = XtrendbsbXbsb->size[0];
      } else if ((Seqbsbvarampl->size[0] != 0) && (Seqbsbvarampl->size[1] != 0))
      {
        result = Seqbsbvarampl->size[0];
      } else {
        result = XtrendbsbXbsb->size[0];
        if (Seqbsbvarampl->size[0] > XtrendbsbXbsb->size[0]) {
          result = Seqbsbvarampl->size[0];
        }
      }

      c_st.site = &rf_emlrtRSI;
      if ((XtrendbsbXbsb->size[0] != result) && ((XtrendbsbXbsb->size[0] != 0) &&
           (XtrendbsbXbsb->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Seqbsbvarampl->size[0] != result) && ((Seqbsbvarampl->size[0] != 0) &&
           (Seqbsbvarampl->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((XtrendbsbXbsb->size[0] != 0) &&
           (XtrendbsbXbsb->size[1] != 0))) {
        b_input_sizes_idx_1 = XtrendbsbXbsb->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((Seqbsbvarampl->size[0] != 0) &&
           (Seqbsbvarampl->size[1] != 0))) {
        sizes_idx_1 = Seqbsbvarampl->size[1];
      } else {
        sizes_idx_1 = 0;
      }

      i = XtrendXbsbXseasonXlshift->size[0] * XtrendXbsbXseasonXlshift->size[1];
      XtrendXbsbXseasonXlshift->size[0] = result;
      XtrendXbsbXseasonXlshift->size[1] = b_input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(&b_st, XtrendXbsbXseasonXlshift, i, &dm_emlrtRTEI);
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          XtrendXbsbXseasonXlshift->data[i1 + XtrendXbsbXseasonXlshift->size[0] *
            i] = XtrendbsbXbsb->data[i1 + result * i];
        }
      }

      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          XtrendXbsbXseasonXlshift->data[i1 + XtrendXbsbXseasonXlshift->size[0] *
            (i + b_input_sizes_idx_1)] = Seqbsbvarampl->data[i1 + result * i];
        }
      }

      st.site = &hn_emlrtRSI;
      b_st.site = &pg_emlrtRSI;
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        result = Xtrendbsb->size[0];
      } else if ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0)) {
        result = Xbsb->size[0];
      } else {
        result = Xtrendbsb->size[0];
        if (Xbsb->size[0] > Xtrendbsb->size[0]) {
          result = Xbsb->size[0];
        }
      }

      c_st.site = &rf_emlrtRSI;
      if ((Xtrendbsb->size[0] != result) && ((Xtrendbsb->size[0] != 0) &&
           (Xtrendbsb->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Xbsb->size[0] != result) && ((Xbsb->size[0] != 0) && (Xbsb->size[1]
            != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->
            size[1] != 0))) {
        input_sizes_idx_1 = Xtrendbsb->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0)))
      {
        sizes_idx_1 = Xbsb->size[1];
      } else {
        sizes_idx_1 = 0;
      }

      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * i] = Xtrendbsb->data[i1 +
            result * i];
        }
      }

      i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
      Xtrendbsb->size[0] = result;
      Xtrendbsb->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(&b_st, Xtrendbsb, i, &km_emlrtRTEI);
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * (i + input_sizes_idx_1)] =
            Xbsb->data[i1 + result * i];
        }
      }

      b2378 = (trend->contents + 1.0) + nexpl->contents;
      if (muDoubleScalarIsNaN(b2378)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(sp, indnlseasoc, i, &mm_emlrtRTEI);
        indnlseasoc->data[0] = rtNaN;
      } else if (b2378 < 1.0) {
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 0;
      } else if (muDoubleScalarIsInf(b2378) && (1.0 == b2378)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(sp, indnlseasoc, i, &mm_emlrtRTEI);
        indnlseasoc->data[0] = rtNaN;
      } else {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        loop_ub = (int32_T)muDoubleScalarFloor(b2378 - 1.0);
        indnlseasoc->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(sp, indnlseasoc, i, &mm_emlrtRTEI);
        for (i = 0; i <= loop_ub; i++) {
          indnlseasoc->data[i] = (real_T)i + 1.0;
        }
      }
    }

    emxFree_real_T(&XtrendbsbXbsb);
    emxFree_real_T(&Xbsb);
  }

  emxInit_real_T(sp, &yhatnlseaso, 1, &lm_emlrtRTEI, true);
  emxInit_int32_T(sp, &r, 1, &vm_emlrtRTEI, true);
  emxInit_int32_T(sp, &r1, 2, &vm_emlrtRTEI, true);
  emxInit_boolean_T(sp, &r2, 1, &we_emlrtRTEI, true);
  emxInit_real_T(sp, &b_yinbsb, 1, &hm_emlrtRTEI, true);
  exitg1 = false;
  while ((!exitg1) && ((betadiff > reftolALS->contents) && (iter <
           refstepsALS->contents))) {
    iter++;

    /*  b2378 estimate of linear part of seasonal component */
    st.site = &in_emlrtRSI;
    indexShapeCheck(&st, newbeta->size[0], *(int32_T (*)[2])indlinsc->
                    contents->size);
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = indlinsc->contents->size[1];
    emxEnsureCapacity_real_T(sp, y, i, &bm_emlrtRTEI);
    loop_ub = indlinsc->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      if (indlinsc->contents->data[i] != (int32_T)muDoubleScalarFloor
          (indlinsc->contents->data[i])) {
        emlrtIntegerCheckR2012b(indlinsc->contents->data[i], &jg_emlrtDCI,
          (emlrtCTX)sp);
      }

      i1 = (int32_T)indlinsc->contents->data[i];
      if ((i1 < 1) || (i1 > newbeta->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, newbeta->size[0], &nj_emlrtBCI,
          (emlrtCTX)sp);
      }

      y->data[i] = newbeta->data[i1 - 1];
    }

    /*  at= yhatseaso = fitted values for linear part of seasonal */
    /*  component */
    st.site = &jn_emlrtRSI;
    b_st.site = &qj_emlrtRSI;
    b_dynamic_size_checks(&b_st, Xseasobsb, y, Xseasobsb->size[1],
                          indlinsc->contents->size[1]);
    b_st.site = &pj_emlrtRSI;
    mtimes(&b_st, Xseasobsb, y, Xlshiftbsb);

    /*  OLS to estimate coefficients of trend + expl variables + non lin coeff of */
    /*  seasonal + coefficient of fixed level shift */
    /*  trlshift is the matrix of explanatory variables */
    if (1 != Seqbsbvarampl->size[1]) {
      emlrtDimSizeEqCheckR2012b(1, Seqbsbvarampl->size[1], &cc_emlrtECI,
        (emlrtCTX)sp);
    }

    if (Xlshiftbsb->size[0] != Seqbsbvarampl->size[0]) {
      emlrtSizeEqCheck1DR2012b(Xlshiftbsb->size[0], Seqbsbvarampl->size[0],
        &bc_emlrtECI, (emlrtCTX)sp);
    }

    i = r->size[0];
    r->size[0] = indnlseaso->size[1];
    emxEnsureCapacity_int32_T(sp, r, i, &cm_emlrtRTEI);
    loop_ub = indnlseaso->size[1];
    for (i = 0; i < loop_ub; i++) {
      if (indnlseaso->data[i] != (int32_T)muDoubleScalarFloor(indnlseaso->data[i]))
      {
        emlrtIntegerCheckR2012b(indnlseaso->data[i], &kg_emlrtDCI, (emlrtCTX)sp);
      }

      i1 = (int32_T)indnlseaso->data[i];
      if ((i1 < 1) || (i1 > XtrendXbsbXseasonXlshift->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)indnlseaso->data[i], 1,
          XtrendXbsbXseasonXlshift->size[1], &oj_emlrtBCI, (emlrtCTX)sp);
      }

      r->data[i] = i1 - 1;
    }

    i = b_yinbsb->size[0];
    b_yinbsb->size[0] = Xlshiftbsb->size[0];
    emxEnsureCapacity_real_T(sp, b_yinbsb, i, &em_emlrtRTEI);
    loop_ub = Xlshiftbsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_yinbsb->data[i] = Xlshiftbsb->data[i] * Seqbsbvarampl->data[i];
    }

    input_sizes[0] = XtrendXbsbXseasonXlshift->size[0];
    input_sizes[1] = r->size[0];
    emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, &b_yinbsb->size[0], 1,
      &ac_emlrtECI, (emlrtCTX)sp);
    input_sizes_idx_1 = XtrendXbsbXseasonXlshift->size[0];
    input_sizes[0] = XtrendXbsbXseasonXlshift->size[0];
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
        XtrendXbsbXseasonXlshift->data[i1 + XtrendXbsbXseasonXlshift->size[0] *
          r->data[i]] = b_yinbsb->data[i1 + input_sizes[0] * i];
      }
    }

    /*  b0145 = coefficients of intercept trend + expl var + non */
    /*  linear part of seasonal component + level shift */
    if (yinbsb->size[0] != Xlshiftbsb->size[0]) {
      emlrtSizeEqCheck1DR2012b(yinbsb->size[0], Xlshiftbsb->size[0],
        &yb_emlrtECI, (emlrtCTX)sp);
    }

    i = b_yinbsb->size[0];
    b_yinbsb->size[0] = yinbsb->size[0];
    emxEnsureCapacity_real_T(sp, b_yinbsb, i, &hm_emlrtRTEI);
    loop_ub = yinbsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_yinbsb->data[i] = yinbsb->data[i] - Xlshiftbsb->data[i];
    }

    st.site = &kn_emlrtRSI;
    mldivide(&st, XtrendXbsbXseasonXlshift, b_yinbsb, Xlshiftbsb);

    /*  Now find new coefficients of linear part of seasonal */
    /*  component in the regression of y-trend-expl-lsihft versus */
    /*  vector which contains non linear part of seasonal component */
    /*  which multiplies each column of matrix Xseaso (linear part of */
    /*  seasonal component) */
    st.site = &ln_emlrtRSI;
    indexShapeCheck(&st, Xlshiftbsb->size[0], *(int32_T (*)[2])indnlseaso->size);
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = indnlseaso->size[1];
    emxEnsureCapacity_real_T(sp, y, i, &jm_emlrtRTEI);
    loop_ub = indnlseaso->size[1];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)indnlseaso->data[i];
      if ((i1 < 1) || (i1 > Xlshiftbsb->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Xlshiftbsb->size[0], &pj_emlrtBCI,
          (emlrtCTX)sp);
      }

      y->data[i] = Xlshiftbsb->data[i1 - 1];
    }

    st.site = &ln_emlrtRSI;
    b_st.site = &qj_emlrtRSI;
    b_dynamic_size_checks(&b_st, Seqbsbvarampl, y, Seqbsbvarampl->size[1],
                          indnlseaso->size[1]);
    b_st.site = &pj_emlrtRSI;
    mtimes(&b_st, Seqbsbvarampl, y, yhatnlseaso);
    if (Seqbsb->size[0] != yhatnlseaso->size[0]) {
      emlrtSizeEqCheck1DR2012b(Seqbsb->size[0], yhatnlseaso->size[0],
        &xb_emlrtECI, (emlrtCTX)sp);
    }

    i = yhatnlseaso->size[0];
    yhatnlseaso->size[0] = Seqbsb->size[0];
    emxEnsureCapacity_real_T(sp, yhatnlseaso, i, &lm_emlrtRTEI);
    loop_ub = Seqbsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      yhatnlseaso->data[i] += Seqbsb->data[i];
    }

    if (1 != Xseasobsb->size[1]) {
      emlrtDimSizeEqCheckR2012b(1, Xseasobsb->size[1], &wb_emlrtECI, (emlrtCTX)
        sp);
    }

    if (yhatnlseaso->size[0] != Xseasobsb->size[0]) {
      emlrtSizeEqCheck1DR2012b(yhatnlseaso->size[0], Xseasobsb->size[0],
        &vb_emlrtECI, (emlrtCTX)sp);
    }

    st.site = &mn_emlrtRSI;
    indexShapeCheck(&st, Xlshiftbsb->size[0], *(int32_T (*)[2])indnlseasoc->size);
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = indnlseasoc->size[1];
    emxEnsureCapacity_real_T(sp, y, i, &nm_emlrtRTEI);
    loop_ub = indnlseasoc->size[1];
    for (i = 0; i < loop_ub; i++) {
      if (indnlseasoc->data[i] != (int32_T)muDoubleScalarFloor(indnlseasoc->
           data[i])) {
        emlrtIntegerCheckR2012b(indnlseasoc->data[i], &lg_emlrtDCI, (emlrtCTX)sp);
      }

      i1 = (int32_T)indnlseasoc->data[i];
      if ((i1 < 1) || (i1 > Xlshiftbsb->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Xlshiftbsb->size[0], &qj_emlrtBCI,
          (emlrtCTX)sp);
      }

      y->data[i] = Xlshiftbsb->data[i1 - 1];
    }

    st.site = &mn_emlrtRSI;
    b_st.site = &qj_emlrtRSI;
    b_dynamic_size_checks(&b_st, Xtrendbsb, y, Xtrendbsb->size[1],
                          indnlseasoc->size[1]);
    b_st.site = &pj_emlrtRSI;
    mtimes(&b_st, Xtrendbsb, y, b_yinbsb);
    if (yinbsb->size[0] != b_yinbsb->size[0]) {
      emlrtSizeEqCheck1DR2012b(yinbsb->size[0], b_yinbsb->size[0], &ub_emlrtECI,
        (emlrtCTX)sp);
    }

    loop_ub = yhatnlseaso->size[0];
    for (i = 0; i < loop_ub; i++) {
      yhatnlseaso->data[i] *= Xseasobsb->data[i];
    }

    i = b_yinbsb->size[0];
    b_yinbsb->size[0] = yinbsb->size[0];
    emxEnsureCapacity_real_T(sp, b_yinbsb, i, &pm_emlrtRTEI);
    loop_ub = yinbsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_yinbsb->data[i] = yinbsb->data[i] - b_yinbsb->data[i];
    }

    st.site = &mn_emlrtRSI;
    b2378 = b_mldivide(&st, yhatnlseaso, b_yinbsb);

    /*  Store new value of beta */
    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = indlinsc->contents->size[1];
    emxEnsureCapacity_int32_T(sp, r1, i, &qm_emlrtRTEI);
    loop_ub = indlinsc->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      if (indlinsc->contents->data[i] != (int32_T)muDoubleScalarFloor
          (indlinsc->contents->data[i])) {
        emlrtIntegerCheckR2012b(indlinsc->contents->data[i], &mg_emlrtDCI,
          (emlrtCTX)sp);
      }

      i1 = (int32_T)indlinsc->contents->data[i];
      if ((i1 < 1) || (i1 > newbeta->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)indlinsc->contents->data[i], 1,
          newbeta->size[0], &rj_emlrtBCI, (emlrtCTX)sp);
      }

      r1->data[i] = i1;
    }

    loop_ub = r1->size[1];
    for (i = 0; i < loop_ub; i++) {
      newbeta->data[r1->data[i] - 1] = b2378;
    }

    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = otherind->contents->size[1];
    emxEnsureCapacity_int32_T(sp, r1, i, &sm_emlrtRTEI);
    loop_ub = otherind->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      if (otherind->contents->data[i] != (int32_T)muDoubleScalarFloor
          (otherind->contents->data[i])) {
        emlrtIntegerCheckR2012b(otherind->contents->data[i], &ng_emlrtDCI,
          (emlrtCTX)sp);
      }

      i1 = (int32_T)otherind->contents->data[i];
      if ((i1 < 1) || (i1 > newbeta->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)otherind->contents->data[i], 1,
          newbeta->size[0], &sj_emlrtBCI, (emlrtCTX)sp);
      }

      r1->data[i] = i1;
    }

    if (Xlshiftbsb->size[0] != r1->size[1]) {
      emlrtSubAssignSizeCheck1dR2017a(r1->size[1], Xlshiftbsb->size[0],
        &tb_emlrtECI, (emlrtCTX)sp);
    }

    loop_ub = r1->size[1];
    for (i = 0; i < loop_ub; i++) {
      newbeta->data[r1->data[i] - 1] = Xlshiftbsb->data[i];
    }

    /*  betadiff is linked to the tolerance (specified in scalar */
    /*  reftol) */
    if (oldbeta->size[0] != newbeta->size[0]) {
      emlrtSizeEqCheck1DR2012b(oldbeta->size[0], newbeta->size[0], &sb_emlrtECI,
        (emlrtCTX)sp);
    }

    loop_ub = oldbeta->size[0];
    for (i = 0; i < loop_ub; i++) {
      oldbeta->data[i] -= newbeta->data[i];
    }

    if (oldbeta->size[0] == 0) {
      b2378 = 0.0;
    } else {
      b2378 = 0.0;
      i = oldbeta->size[0];
      for (input_sizes_idx_1 = 0; input_sizes_idx_1 < i; input_sizes_idx_1++) {
        b2378 += muDoubleScalarAbs(oldbeta->data[input_sizes_idx_1]);
      }
    }

    if (newbeta->size[0] == 0) {
      betadiff = 0.0;
    } else {
      betadiff = 0.0;
      i = newbeta->size[0];
      for (input_sizes_idx_1 = 0; input_sizes_idx_1 < i; input_sizes_idx_1++) {
        betadiff += muDoubleScalarAbs(newbeta->data[input_sizes_idx_1]);
      }
    }

    betadiff = b2378 / betadiff;
    i = oldbeta->size[0];
    oldbeta->size[0] = newbeta->size[0];
    emxEnsureCapacity_real_T(sp, oldbeta, i, &tm_emlrtRTEI);
    loop_ub = newbeta->size[0];
    for (i = 0; i < loop_ub; i++) {
      oldbeta->data[i] = newbeta->data[i];
    }

    /*  exit from the loop if the new beta has singular values. In */
    /*  such a case, any intermediate estimate is not reliable and we */
    /*  can just keep the initialbeta and initial scale. */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }

    i = r2->size[0];
    r2->size[0] = newbeta->size[0];
    emxEnsureCapacity_boolean_T(sp, r2, i, &we_emlrtRTEI);
    loop_ub = newbeta->size[0];
    for (i = 0; i < loop_ub; i++) {
      r2->data[i] = muDoubleScalarIsNaN(newbeta->data[i]);
    }

    st.site = &nn_emlrtRSI;
    if (any(&st, r2)) {
      i = newbeta->size[0];
      newbeta->size[0] = beta0->size[0];
      emxEnsureCapacity_real_T(sp, newbeta, i, &um_emlrtRTEI);
      loop_ub = beta0->size[0];
      for (i = 0; i < loop_ub; i++) {
        newbeta->data[i] = beta0->data[i];
      }

      b_exitflag = -1;
      exitg1 = true;
    }
  }

  emxFree_real_T(&b_yinbsb);
  emxFree_boolean_T(&r2);
  emxFree_real_T(&y);
  emxFree_int32_T(&r1);
  emxFree_int32_T(&r);
  emxFree_real_T(&yhatnlseaso);
  emxFree_real_T(&indnlseasoc);
  emxFree_real_T(&XtrendXbsbXseasonXlshift);
  emxFree_real_T(&Xlshiftbsb);
  emxFree_real_T(&Seqbsbvarampl);
  emxFree_real_T(&indnlseaso);
  emxFree_real_T(&yinbsb);
  emxFree_real_T(&Xtrendbsb);
  emxFree_real_T(&Xseasobsb);
  emxFree_real_T(&Seqbsb);
  emxFree_real_T(&oldbeta);
  *exitflag = b_exitflag;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void ALS(const emlrtStack *sp, const d_captured_var *Seq, const d_captured_var
         *bsb, const d_captured_var *Xseaso, const d_captured_var *Xtrend, const
         d_captured_var *yin, const captured_var *trend, const captured_var
         *nexpl, const captured_var *varampl, const b_captured_var *isemptyX,
         const captured_var *lshiftYN, const d_captured_var *Xlshift, const
         d_captured_var *X, const captured_var *reftolALS, const captured_var
         *refstepsALS, const d_captured_var *indlinsc, const d_captured_var
         *otherind, const emxArray_real_T *beta0, emxArray_real_T *newbeta)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_boolean_T *r2;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *Seqbsb;
  emxArray_real_T *Seqbsbvarampl;
  emxArray_real_T *Xbsb;
  emxArray_real_T *Xlshiftbsb;
  emxArray_real_T *Xseasobsb;
  emxArray_real_T *XtrendXbsbXseasonXlshift;
  emxArray_real_T *Xtrendbsb;
  emxArray_real_T *XtrendbsbXbsb;
  emxArray_real_T *b_yinbsb;
  emxArray_real_T *indnlseaso;
  emxArray_real_T *indnlseasoc;
  emxArray_real_T *oldbeta;
  emxArray_real_T *y;
  emxArray_real_T *yhatnlseaso;
  emxArray_real_T *yinbsb;
  real_T b2378;
  real_T b_tmp;
  real_T betadiff;
  real_T iter;
  int32_T input_sizes[2];
  int32_T b_input_sizes_idx_1;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T input_sizes_idx_1;
  int32_T loop_ub;
  int32_T result;
  int32_T result_idx_1;
  int32_T sizes_idx_1;
  boolean_T empty_non_axis_sizes;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);

  /*  The part below contains subfunctions which are used only inside this file */
  /*  ALS computes Alternating Least Squares estimate of beta starting from */
  /*  vector beta0. The rows which are used are those specified in global */
  /*  variable bsb */
  iter = 0.0;
  betadiff = 9999.0;
  i = newbeta->size[0];
  newbeta->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(sp, newbeta, i, &ll_emlrtRTEI);
  loop_ub = beta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    newbeta->data[i] = beta0->data[i];
  }

  emxInit_real_T(sp, &oldbeta, 1, &ml_emlrtRTEI, true);
  i = oldbeta->size[0];
  oldbeta->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(sp, oldbeta, i, &ml_emlrtRTEI);
  loop_ub = beta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    oldbeta->data[i] = beta0->data[i];
  }

  emxInit_real_T(sp, &Seqbsb, 1, &nl_emlrtRTEI, true);

  /*  exitflag = flag which informs about convergence. exitflag =0 */
  /*  implies normal convergence, else no convergence has been obtained */
  /*  Define all the relevant matrices before the loop */
  input_sizes_idx_1 = Seq->contents->size[0];
  i = Seqbsb->size[0];
  Seqbsb->size[0] = bsb->contents->size[0];
  emxEnsureCapacity_real_T(sp, Seqbsb, i, &nl_emlrtRTEI);
  loop_ub = bsb->contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor(bsb->
         contents->data[i])) {
      emlrtIntegerCheckR2012b(bsb->contents->data[i], &bg_emlrtDCI, (emlrtCTX)sp);
    }

    i1 = (int32_T)bsb->contents->data[i];
    if ((i1 < 1) || (i1 > input_sizes_idx_1)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, input_sizes_idx_1, &fj_emlrtBCI,
        (emlrtCTX)sp);
    }

    Seqbsb->data[i] = Seq->contents->data[i1 - 1];
  }

  emxInit_real_T(sp, &Xseasobsb, 2, &ol_emlrtRTEI, true);
  input_sizes_idx_1 = Xseaso->contents->size[0];
  loop_ub = Xseaso->contents->size[1];
  i = Xseasobsb->size[0] * Xseasobsb->size[1];
  Xseasobsb->size[0] = bsb->contents->size[0];
  Xseasobsb->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, Xseasobsb, i, &ol_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    b_input_sizes_idx_1 = bsb->contents->size[0];
    for (i1 = 0; i1 < b_input_sizes_idx_1; i1++) {
      if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor(bsb->
           contents->data[i1])) {
        emlrtIntegerCheckR2012b(bsb->contents->data[i1], &cg_emlrtDCI, (emlrtCTX)
          sp);
      }

      i2 = (int32_T)bsb->contents->data[i1];
      if ((i2 < 1) || (i2 > input_sizes_idx_1)) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, input_sizes_idx_1, &gj_emlrtBCI,
          (emlrtCTX)sp);
      }

      Xseasobsb->data[i1 + Xseasobsb->size[0] * i] = Xseaso->contents->data[(i2
        + Xseaso->contents->size[0] * i) - 1];
    }
  }

  emxInit_real_T(sp, &Xtrendbsb, 2, &pl_emlrtRTEI, true);
  input_sizes_idx_1 = Xtrend->contents->size[0];
  loop_ub = Xtrend->contents->size[1];
  i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
  Xtrendbsb->size[0] = bsb->contents->size[0];
  Xtrendbsb->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, Xtrendbsb, i, &pl_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    b_input_sizes_idx_1 = bsb->contents->size[0];
    for (i1 = 0; i1 < b_input_sizes_idx_1; i1++) {
      if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor(bsb->
           contents->data[i1])) {
        emlrtIntegerCheckR2012b(bsb->contents->data[i1], &dg_emlrtDCI, (emlrtCTX)
          sp);
      }

      i2 = (int32_T)bsb->contents->data[i1];
      if ((i2 < 1) || (i2 > input_sizes_idx_1)) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, input_sizes_idx_1, &hj_emlrtBCI,
          (emlrtCTX)sp);
      }

      Xtrendbsb->data[i1 + Xtrendbsb->size[0] * i] = Xtrend->contents->data[(i2
        + Xtrend->contents->size[0] * i) - 1];
    }
  }

  emxInit_real_T(sp, &yinbsb, 1, &ql_emlrtRTEI, true);
  input_sizes_idx_1 = yin->contents->size[0];
  i = yinbsb->size[0];
  yinbsb->size[0] = bsb->contents->size[0];
  emxEnsureCapacity_real_T(sp, yinbsb, i, &ql_emlrtRTEI);
  loop_ub = bsb->contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor(bsb->
         contents->data[i])) {
      emlrtIntegerCheckR2012b(bsb->contents->data[i], &eg_emlrtDCI, (emlrtCTX)sp);
    }

    i1 = (int32_T)bsb->contents->data[i];
    if ((i1 < 1) || (i1 > input_sizes_idx_1)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, input_sizes_idx_1, &ij_emlrtBCI,
        (emlrtCTX)sp);
    }

    yinbsb->data[i] = yin->contents->data[i1 - 1];
  }

  st.site = &wm_emlrtRSI;
  b2378 = (trend->contents + 2.0) + nexpl->contents;
  b_tmp = b2378 + varampl->contents;
  b_st.site = &qg_emlrtRSI;
  emxInit_real_T(&b_st, &indnlseaso, 2, &rl_emlrtRTEI, true);
  if (muDoubleScalarIsNaN(b2378) || muDoubleScalarIsNaN(b_tmp - 1.0)) {
    i = indnlseaso->size[0] * indnlseaso->size[1];
    indnlseaso->size[0] = 1;
    indnlseaso->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, indnlseaso, i, &rl_emlrtRTEI);
    indnlseaso->data[0] = rtNaN;
  } else if (b_tmp - 1.0 < b2378) {
    indnlseaso->size[0] = 1;
    indnlseaso->size[1] = 0;
  } else if ((muDoubleScalarIsInf(b2378) || muDoubleScalarIsInf(b_tmp - 1.0)) &&
             (b2378 == b_tmp - 1.0)) {
    i = indnlseaso->size[0] * indnlseaso->size[1];
    indnlseaso->size[0] = 1;
    indnlseaso->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, indnlseaso, i, &rl_emlrtRTEI);
    indnlseaso->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(b2378) == b2378) {
    i = indnlseaso->size[0] * indnlseaso->size[1];
    indnlseaso->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor((b_tmp - 1.0) - b2378);
    indnlseaso->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&b_st, indnlseaso, i, &rl_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      indnlseaso->data[i] = b2378 + (real_T)i;
    }
  } else {
    c_st.site = &rg_emlrtRSI;
    eml_float_colon(&c_st, b2378, b_tmp - 1.0, indnlseaso);
  }

  b2378 = varampl->contents + 1.0;
  if (2.0 > b2378) {
    i = 0;
    i1 = 0;
  } else {
    i = 1;
    if (b2378 != (int32_T)muDoubleScalarFloor(b2378)) {
      emlrtIntegerCheckR2012b(b2378, &ag_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)b2378 < 1) || ((int32_T)b2378 > 4)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b2378, 1, 4, &ej_emlrtBCI,
        (emlrtCTX)sp);
    }

    i1 = (int32_T)b2378;
  }

  emxInit_real_T(sp, &Seqbsbvarampl, 2, &sl_emlrtRTEI, true);
  input_sizes_idx_1 = Seq->contents->size[0];
  i2 = Seqbsbvarampl->size[0] * Seqbsbvarampl->size[1];
  Seqbsbvarampl->size[0] = bsb->contents->size[0];
  loop_ub = i1 - i;
  Seqbsbvarampl->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, Seqbsbvarampl, i2, &sl_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_input_sizes_idx_1 = bsb->contents->size[0];
    for (i2 = 0; i2 < b_input_sizes_idx_1; i2++) {
      if (bsb->contents->data[i2] != (int32_T)muDoubleScalarFloor(bsb->
           contents->data[i2])) {
        emlrtIntegerCheckR2012b(bsb->contents->data[i2], &fg_emlrtDCI, (emlrtCTX)
          sp);
      }

      result_idx_1 = (int32_T)bsb->contents->data[i2];
      if ((result_idx_1 < 1) || (result_idx_1 > input_sizes_idx_1)) {
        emlrtDynamicBoundsCheckR2012b(result_idx_1, 1, input_sizes_idx_1,
          &jj_emlrtBCI, (emlrtCTX)sp);
      }

      Seqbsbvarampl->data[i2 + Seqbsbvarampl->size[0] * i1] = Seq->
        contents->data[(result_idx_1 + Seq->contents->size[0] * (i + i1)) - 1];
    }
  }

  emxInit_real_T(sp, &Xlshiftbsb, 1, &ul_emlrtRTEI, true);
  emxInit_real_T(sp, &XtrendXbsbXseasonXlshift, 2, &yl_emlrtRTEI, true);
  emxInit_real_T(sp, &indnlseasoc, 2, &im_emlrtRTEI, true);
  emxInit_real_T(sp, &y, 2, &wm_emlrtRTEI, true);
  if (isemptyX->contents) {
    if (lshiftYN->contents == 1.0) {
      st.site = &xm_emlrtRSI;
      c_indexShapeCheck(&st, *(int32_T (*)[2])Xlshift->contents->size,
                        bsb->contents->size[0]);
      input_sizes_idx_1 = Xlshift->contents->size[0] * Xlshift->contents->size[1];
      i = Xlshiftbsb->size[0];
      Xlshiftbsb->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(sp, Xlshiftbsb, i, &ul_emlrtRTEI);
      loop_ub = bsb->contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor(bsb->
             contents->data[i])) {
          emlrtIntegerCheckR2012b(bsb->contents->data[i], &hg_emlrtDCI,
            (emlrtCTX)sp);
        }

        i1 = (int32_T)bsb->contents->data[i];
        if ((i1 < 1) || (i1 > input_sizes_idx_1)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, input_sizes_idx_1, &lj_emlrtBCI,
            (emlrtCTX)sp);
        }

        Xlshiftbsb->data[i] = Xlshift->contents->data[i1 - 1];
      }

      st.site = &ym_emlrtRSI;
      b_st.site = &pg_emlrtRSI;
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        result = Xtrendbsb->size[0];
      } else if ((Seqbsbvarampl->size[0] != 0) && (Seqbsbvarampl->size[1] != 0))
      {
        result = Seqbsbvarampl->size[0];
      } else if (Xlshiftbsb->size[0] != 0) {
        result = Xlshiftbsb->size[0];
      } else {
        result = Xtrendbsb->size[0];
        if (Seqbsbvarampl->size[0] > Xtrendbsb->size[0]) {
          result = Seqbsbvarampl->size[0];
        }
      }

      c_st.site = &rf_emlrtRSI;
      if ((Xtrendbsb->size[0] != result) && ((Xtrendbsb->size[0] != 0) &&
           (Xtrendbsb->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Seqbsbvarampl->size[0] != result) && ((Seqbsbvarampl->size[0] != 0) &&
           (Seqbsbvarampl->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Xlshiftbsb->size[0] != result) && (Xlshiftbsb->size[0] != 0)) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->
            size[1] != 0))) {
        input_sizes[1] = Xtrendbsb->size[1];
      } else {
        input_sizes[1] = 0;
      }

      if (empty_non_axis_sizes || ((Seqbsbvarampl->size[0] != 0) &&
           (Seqbsbvarampl->size[1] != 0))) {
        b_input_sizes_idx_1 = Seqbsbvarampl->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || (Xlshiftbsb->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }

      result_idx_1 = input_sizes[1];
      i = XtrendXbsbXseasonXlshift->size[0] * XtrendXbsbXseasonXlshift->size[1];
      XtrendXbsbXseasonXlshift->size[0] = result;
      i1 = result_idx_1 + b_input_sizes_idx_1;
      XtrendXbsbXseasonXlshift->size[1] = i1 + sizes_idx_1;
      emxEnsureCapacity_real_T(&b_st, XtrendXbsbXseasonXlshift, i, &yl_emlrtRTEI);
      for (i = 0; i < result_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          XtrendXbsbXseasonXlshift->data[i2 + XtrendXbsbXseasonXlshift->size[0] *
            i] = Xtrendbsb->data[i2 + result * i];
        }
      }

      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          XtrendXbsbXseasonXlshift->data[i2 + XtrendXbsbXseasonXlshift->size[0] *
            (i + result_idx_1)] = Seqbsbvarampl->data[i2 + result * i];
        }
      }

      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          XtrendXbsbXseasonXlshift->data[i2 + XtrendXbsbXseasonXlshift->size[0] *
            i1] = Xlshiftbsb->data[i2];
        }
      }

      st.site = &an_emlrtRSI;
      b_st.site = &pg_emlrtRSI;
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        result = Xtrendbsb->size[0];
      } else if (Xlshiftbsb->size[0] != 0) {
        result = Xlshiftbsb->size[0];
      } else {
        result = Xtrendbsb->size[0];
      }

      c_st.site = &rf_emlrtRSI;
      if ((Xtrendbsb->size[0] != result) && ((Xtrendbsb->size[0] != 0) &&
           (Xtrendbsb->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Xlshiftbsb->size[0] != result) && (Xlshiftbsb->size[0] != 0)) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->
            size[1] != 0))) {
        input_sizes_idx_1 = Xtrendbsb->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || (Xlshiftbsb->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }

      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * i] = Xtrendbsb->data[i1 +
            result * i];
        }
      }

      i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
      Xtrendbsb->size[0] = result;
      Xtrendbsb->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(&b_st, Xtrendbsb, i, &fm_emlrtRTEI);
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * input_sizes_idx_1] =
            Xlshiftbsb->data[i1];
        }
      }

      b2378 = trend->contents + 1.0;
      if (muDoubleScalarIsNaN(b2378)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(sp, y, i, &oc_emlrtRTEI);
        y->data[0] = rtNaN;
      } else if (b2378 < 1.0) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if (muDoubleScalarIsInf(b2378) && (1.0 == b2378)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(sp, y, i, &oc_emlrtRTEI);
        y->data[0] = rtNaN;
      } else {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        loop_ub = (int32_T)muDoubleScalarFloor(b2378 - 1.0);
        y->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(sp, y, i, &oc_emlrtRTEI);
        for (i = 0; i <= loop_ub; i++) {
          y->data[i] = (real_T)i + 1.0;
        }
      }

      i = indnlseasoc->size[0] * indnlseasoc->size[1];
      indnlseasoc->size[0] = 1;
      indnlseasoc->size[1] = y->size[1] + 1;
      emxEnsureCapacity_real_T(sp, indnlseasoc, i, &im_emlrtRTEI);
      loop_ub = y->size[1];
      for (i = 0; i < loop_ub; i++) {
        indnlseasoc->data[i] = y->data[i];
      }

      indnlseasoc->data[y->size[1]] = b_tmp;
    } else {
      st.site = &bn_emlrtRSI;
      b_st.site = &pg_emlrtRSI;
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        result = Xtrendbsb->size[0];
      } else if ((Seqbsbvarampl->size[0] != 0) && (Seqbsbvarampl->size[1] != 0))
      {
        result = Seqbsbvarampl->size[0];
      } else {
        result = Xtrendbsb->size[0];
        if (Seqbsbvarampl->size[0] > Xtrendbsb->size[0]) {
          result = Seqbsbvarampl->size[0];
        }
      }

      c_st.site = &rf_emlrtRSI;
      if ((Xtrendbsb->size[0] != result) && ((Xtrendbsb->size[0] != 0) &&
           (Xtrendbsb->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Seqbsbvarampl->size[0] != result) && ((Seqbsbvarampl->size[0] != 0) &&
           (Seqbsbvarampl->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->
            size[1] != 0))) {
        input_sizes[1] = Xtrendbsb->size[1];
      } else {
        input_sizes[1] = 0;
      }

      if (empty_non_axis_sizes || ((Seqbsbvarampl->size[0] != 0) &&
           (Seqbsbvarampl->size[1] != 0))) {
        sizes_idx_1 = Seqbsbvarampl->size[1];
      } else {
        sizes_idx_1 = 0;
      }

      result_idx_1 = input_sizes[1];
      i = XtrendXbsbXseasonXlshift->size[0] * XtrendXbsbXseasonXlshift->size[1];
      XtrendXbsbXseasonXlshift->size[0] = result;
      XtrendXbsbXseasonXlshift->size[1] = input_sizes[1] + sizes_idx_1;
      emxEnsureCapacity_real_T(&b_st, XtrendXbsbXseasonXlshift, i, &vl_emlrtRTEI);
      loop_ub = input_sizes[1];
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < result; i1++) {
          XtrendXbsbXseasonXlshift->data[i1 + XtrendXbsbXseasonXlshift->size[0] *
            i] = Xtrendbsb->data[i1 + result * i];
        }
      }

      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          XtrendXbsbXseasonXlshift->data[i1 + XtrendXbsbXseasonXlshift->size[0] *
            (i + result_idx_1)] = Seqbsbvarampl->data[i1 + result * i];
        }
      }

      b2378 = trend->contents + 1.0;
      if (muDoubleScalarIsNaN(b2378)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(sp, indnlseasoc, i, &xl_emlrtRTEI);
        indnlseasoc->data[0] = rtNaN;
      } else if (b2378 < 1.0) {
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 0;
      } else if (muDoubleScalarIsInf(b2378) && (1.0 == b2378)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(sp, indnlseasoc, i, &xl_emlrtRTEI);
        indnlseasoc->data[0] = rtNaN;
      } else {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        loop_ub = (int32_T)muDoubleScalarFloor(b2378 - 1.0);
        indnlseasoc->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(sp, indnlseasoc, i, &xl_emlrtRTEI);
        for (i = 0; i <= loop_ub; i++) {
          indnlseasoc->data[i] = (real_T)i + 1.0;
        }
      }
    }
  } else {
    emxInit_real_T(sp, &Xbsb, 2, &tl_emlrtRTEI, true);
    input_sizes_idx_1 = X->contents->size[0];
    loop_ub = X->contents->size[1];
    i = Xbsb->size[0] * Xbsb->size[1];
    Xbsb->size[0] = bsb->contents->size[0];
    Xbsb->size[1] = loop_ub;
    emxEnsureCapacity_real_T(sp, Xbsb, i, &tl_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      b_input_sizes_idx_1 = bsb->contents->size[0];
      for (i1 = 0; i1 < b_input_sizes_idx_1; i1++) {
        if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor
            (bsb->contents->data[i1])) {
          emlrtIntegerCheckR2012b(bsb->contents->data[i1], &gg_emlrtDCI,
            (emlrtCTX)sp);
        }

        i2 = (int32_T)bsb->contents->data[i1];
        if ((i2 < 1) || (i2 > input_sizes_idx_1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, input_sizes_idx_1, &kj_emlrtBCI,
            (emlrtCTX)sp);
        }

        Xbsb->data[i1 + Xbsb->size[0] * i] = X->contents->data[(i2 + X->
          contents->size[0] * i) - 1];
      }
    }

    st.site = &cn_emlrtRSI;
    b_st.site = &pg_emlrtRSI;
    if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
      result = Xtrendbsb->size[0];
    } else if ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0)) {
      result = Xbsb->size[0];
    } else {
      result = Xtrendbsb->size[0];
      if (Xbsb->size[0] > Xtrendbsb->size[0]) {
        result = Xbsb->size[0];
      }
    }

    c_st.site = &rf_emlrtRSI;
    if ((Xtrendbsb->size[0] != result) && ((Xtrendbsb->size[0] != 0) &&
         (Xtrendbsb->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((Xbsb->size[0] != result) && ((Xbsb->size[0] != 0) && (Xbsb->size[1] !=
          0))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (result == 0);
    if (empty_non_axis_sizes || ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1]
          != 0))) {
      input_sizes[1] = Xtrendbsb->size[1];
    } else {
      input_sizes[1] = 0;
    }

    if (empty_non_axis_sizes || ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0)))
    {
      sizes_idx_1 = Xbsb->size[1];
    } else {
      sizes_idx_1 = 0;
    }

    emxInit_real_T(&b_st, &XtrendbsbXbsb, 2, &wl_emlrtRTEI, true);
    result_idx_1 = input_sizes[1];
    i = XtrendbsbXbsb->size[0] * XtrendbsbXbsb->size[1];
    XtrendbsbXbsb->size[0] = result;
    XtrendbsbXbsb->size[1] = input_sizes[1] + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, XtrendbsbXbsb, i, &wl_emlrtRTEI);
    loop_ub = input_sizes[1];
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < result; i1++) {
        XtrendbsbXbsb->data[i1 + XtrendbsbXbsb->size[0] * i] = Xtrendbsb->
          data[i1 + result * i];
      }
    }

    for (i = 0; i < sizes_idx_1; i++) {
      for (i1 = 0; i1 < result; i1++) {
        XtrendbsbXbsb->data[i1 + XtrendbsbXbsb->size[0] * (i + result_idx_1)] =
          Xbsb->data[i1 + result * i];
      }
    }

    if (lshiftYN->contents == 1.0) {
      st.site = &dn_emlrtRSI;
      c_indexShapeCheck(&st, *(int32_T (*)[2])Xlshift->contents->size,
                        bsb->contents->size[0]);
      input_sizes_idx_1 = Xlshift->contents->size[0] * Xlshift->contents->size[1];
      i = Xlshiftbsb->size[0];
      Xlshiftbsb->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(sp, Xlshiftbsb, i, &am_emlrtRTEI);
      loop_ub = bsb->contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor(bsb->
             contents->data[i])) {
          emlrtIntegerCheckR2012b(bsb->contents->data[i], &ig_emlrtDCI,
            (emlrtCTX)sp);
        }

        i1 = (int32_T)bsb->contents->data[i];
        if ((i1 < 1) || (i1 > input_sizes_idx_1)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, input_sizes_idx_1, &mj_emlrtBCI,
            (emlrtCTX)sp);
        }

        Xlshiftbsb->data[i] = Xlshift->contents->data[i1 - 1];
      }

      st.site = &en_emlrtRSI;
      b_st.site = &pg_emlrtRSI;
      if ((XtrendbsbXbsb->size[0] != 0) && (XtrendbsbXbsb->size[1] != 0)) {
        result = XtrendbsbXbsb->size[0];
      } else if ((Seqbsbvarampl->size[0] != 0) && (Seqbsbvarampl->size[1] != 0))
      {
        result = Seqbsbvarampl->size[0];
      } else if (Xlshiftbsb->size[0] != 0) {
        result = Xlshiftbsb->size[0];
      } else {
        result = XtrendbsbXbsb->size[0];
        if (Seqbsbvarampl->size[0] > XtrendbsbXbsb->size[0]) {
          result = Seqbsbvarampl->size[0];
        }
      }

      c_st.site = &rf_emlrtRSI;
      if ((XtrendbsbXbsb->size[0] != result) && ((XtrendbsbXbsb->size[0] != 0) &&
           (XtrendbsbXbsb->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Seqbsbvarampl->size[0] != result) && ((Seqbsbvarampl->size[0] != 0) &&
           (Seqbsbvarampl->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Xlshiftbsb->size[0] != result) && (Xlshiftbsb->size[0] != 0)) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((XtrendbsbXbsb->size[0] != 0) &&
           (XtrendbsbXbsb->size[1] != 0))) {
        b_input_sizes_idx_1 = XtrendbsbXbsb->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((Seqbsbvarampl->size[0] != 0) &&
           (Seqbsbvarampl->size[1] != 0))) {
        input_sizes_idx_1 = Seqbsbvarampl->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || (Xlshiftbsb->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }

      i = XtrendXbsbXseasonXlshift->size[0] * XtrendXbsbXseasonXlshift->size[1];
      XtrendXbsbXseasonXlshift->size[0] = result;
      i1 = b_input_sizes_idx_1 + input_sizes_idx_1;
      XtrendXbsbXseasonXlshift->size[1] = i1 + sizes_idx_1;
      emxEnsureCapacity_real_T(&b_st, XtrendXbsbXseasonXlshift, i, &gm_emlrtRTEI);
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          XtrendXbsbXseasonXlshift->data[i2 + XtrendXbsbXseasonXlshift->size[0] *
            i] = XtrendbsbXbsb->data[i2 + result * i];
        }
      }

      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          XtrendXbsbXseasonXlshift->data[i2 + XtrendXbsbXseasonXlshift->size[0] *
            (i + b_input_sizes_idx_1)] = Seqbsbvarampl->data[i2 + result * i];
        }
      }

      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          XtrendXbsbXseasonXlshift->data[i2 + XtrendXbsbXseasonXlshift->size[0] *
            i1] = Xlshiftbsb->data[i2];
        }
      }

      st.site = &fn_emlrtRSI;
      b_st.site = &pg_emlrtRSI;
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        result = Xtrendbsb->size[0];
      } else if ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0)) {
        result = Xbsb->size[0];
      } else if (Xlshiftbsb->size[0] != 0) {
        result = Xlshiftbsb->size[0];
      } else {
        result = Xtrendbsb->size[0];
        if (Xbsb->size[0] > Xtrendbsb->size[0]) {
          result = Xbsb->size[0];
        }
      }

      c_st.site = &rf_emlrtRSI;
      if ((Xtrendbsb->size[0] != result) && ((Xtrendbsb->size[0] != 0) &&
           (Xtrendbsb->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Xbsb->size[0] != result) && ((Xbsb->size[0] != 0) && (Xbsb->size[1]
            != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Xlshiftbsb->size[0] != result) && (Xlshiftbsb->size[0] != 0)) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->
            size[1] != 0))) {
        b_input_sizes_idx_1 = Xtrendbsb->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0)))
      {
        input_sizes_idx_1 = Xbsb->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || (Xlshiftbsb->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }

      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * i] = Xtrendbsb->data[i1 +
            result * i];
        }
      }

      i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
      Xtrendbsb->size[0] = result;
      i1 = b_input_sizes_idx_1 + input_sizes_idx_1;
      Xtrendbsb->size[1] = i1 + sizes_idx_1;
      emxEnsureCapacity_real_T(&b_st, Xtrendbsb, i, &om_emlrtRTEI);
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          Xtrendbsb->data[i2 + Xtrendbsb->size[0] * (i + b_input_sizes_idx_1)] =
            Xbsb->data[i2 + result * i];
        }
      }

      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          Xtrendbsb->data[i2 + Xtrendbsb->size[0] * i1] = Xlshiftbsb->data[i2];
        }
      }

      b2378 = (trend->contents + 1.0) + nexpl->contents;
      if (muDoubleScalarIsNaN(b2378)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(sp, y, i, &oc_emlrtRTEI);
        y->data[0] = rtNaN;
      } else if (b2378 < 1.0) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if (muDoubleScalarIsInf(b2378) && (1.0 == b2378)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(sp, y, i, &oc_emlrtRTEI);
        y->data[0] = rtNaN;
      } else {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        loop_ub = (int32_T)muDoubleScalarFloor(b2378 - 1.0);
        y->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(sp, y, i, &oc_emlrtRTEI);
        for (i = 0; i <= loop_ub; i++) {
          y->data[i] = (real_T)i + 1.0;
        }
      }

      i = indnlseasoc->size[0] * indnlseasoc->size[1];
      indnlseasoc->size[0] = 1;
      indnlseasoc->size[1] = y->size[1] + 1;
      emxEnsureCapacity_real_T(sp, indnlseasoc, i, &rm_emlrtRTEI);
      loop_ub = y->size[1];
      for (i = 0; i < loop_ub; i++) {
        indnlseasoc->data[i] = y->data[i];
      }

      indnlseasoc->data[y->size[1]] = b_tmp;
    } else {
      st.site = &gn_emlrtRSI;
      b_st.site = &pg_emlrtRSI;
      if ((XtrendbsbXbsb->size[0] != 0) && (XtrendbsbXbsb->size[1] != 0)) {
        result = XtrendbsbXbsb->size[0];
      } else if ((Seqbsbvarampl->size[0] != 0) && (Seqbsbvarampl->size[1] != 0))
      {
        result = Seqbsbvarampl->size[0];
      } else {
        result = XtrendbsbXbsb->size[0];
        if (Seqbsbvarampl->size[0] > XtrendbsbXbsb->size[0]) {
          result = Seqbsbvarampl->size[0];
        }
      }

      c_st.site = &rf_emlrtRSI;
      if ((XtrendbsbXbsb->size[0] != result) && ((XtrendbsbXbsb->size[0] != 0) &&
           (XtrendbsbXbsb->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Seqbsbvarampl->size[0] != result) && ((Seqbsbvarampl->size[0] != 0) &&
           (Seqbsbvarampl->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((XtrendbsbXbsb->size[0] != 0) &&
           (XtrendbsbXbsb->size[1] != 0))) {
        b_input_sizes_idx_1 = XtrendbsbXbsb->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((Seqbsbvarampl->size[0] != 0) &&
           (Seqbsbvarampl->size[1] != 0))) {
        sizes_idx_1 = Seqbsbvarampl->size[1];
      } else {
        sizes_idx_1 = 0;
      }

      i = XtrendXbsbXseasonXlshift->size[0] * XtrendXbsbXseasonXlshift->size[1];
      XtrendXbsbXseasonXlshift->size[0] = result;
      XtrendXbsbXseasonXlshift->size[1] = b_input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(&b_st, XtrendXbsbXseasonXlshift, i, &dm_emlrtRTEI);
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          XtrendXbsbXseasonXlshift->data[i1 + XtrendXbsbXseasonXlshift->size[0] *
            i] = XtrendbsbXbsb->data[i1 + result * i];
        }
      }

      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          XtrendXbsbXseasonXlshift->data[i1 + XtrendXbsbXseasonXlshift->size[0] *
            (i + b_input_sizes_idx_1)] = Seqbsbvarampl->data[i1 + result * i];
        }
      }

      st.site = &hn_emlrtRSI;
      b_st.site = &pg_emlrtRSI;
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        result = Xtrendbsb->size[0];
      } else if ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0)) {
        result = Xbsb->size[0];
      } else {
        result = Xtrendbsb->size[0];
        if (Xbsb->size[0] > Xtrendbsb->size[0]) {
          result = Xbsb->size[0];
        }
      }

      c_st.site = &rf_emlrtRSI;
      if ((Xtrendbsb->size[0] != result) && ((Xtrendbsb->size[0] != 0) &&
           (Xtrendbsb->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Xbsb->size[0] != result) && ((Xbsb->size[0] != 0) && (Xbsb->size[1]
            != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->
            size[1] != 0))) {
        input_sizes_idx_1 = Xtrendbsb->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0)))
      {
        sizes_idx_1 = Xbsb->size[1];
      } else {
        sizes_idx_1 = 0;
      }

      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * i] = Xtrendbsb->data[i1 +
            result * i];
        }
      }

      i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
      Xtrendbsb->size[0] = result;
      Xtrendbsb->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(&b_st, Xtrendbsb, i, &km_emlrtRTEI);
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * (i + input_sizes_idx_1)] =
            Xbsb->data[i1 + result * i];
        }
      }

      b2378 = (trend->contents + 1.0) + nexpl->contents;
      if (muDoubleScalarIsNaN(b2378)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(sp, indnlseasoc, i, &mm_emlrtRTEI);
        indnlseasoc->data[0] = rtNaN;
      } else if (b2378 < 1.0) {
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 0;
      } else if (muDoubleScalarIsInf(b2378) && (1.0 == b2378)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(sp, indnlseasoc, i, &mm_emlrtRTEI);
        indnlseasoc->data[0] = rtNaN;
      } else {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        loop_ub = (int32_T)muDoubleScalarFloor(b2378 - 1.0);
        indnlseasoc->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(sp, indnlseasoc, i, &mm_emlrtRTEI);
        for (i = 0; i <= loop_ub; i++) {
          indnlseasoc->data[i] = (real_T)i + 1.0;
        }
      }
    }

    emxFree_real_T(&XtrendbsbXbsb);
    emxFree_real_T(&Xbsb);
  }

  emxInit_real_T(sp, &yhatnlseaso, 1, &lm_emlrtRTEI, true);
  emxInit_int32_T(sp, &r, 1, &vm_emlrtRTEI, true);
  emxInit_int32_T(sp, &r1, 2, &vm_emlrtRTEI, true);
  emxInit_boolean_T(sp, &r2, 1, &we_emlrtRTEI, true);
  emxInit_real_T(sp, &b_yinbsb, 1, &hm_emlrtRTEI, true);
  exitg1 = false;
  while ((!exitg1) && ((betadiff > reftolALS->contents) && (iter <
           refstepsALS->contents))) {
    iter++;

    /*  b2378 estimate of linear part of seasonal component */
    st.site = &in_emlrtRSI;
    indexShapeCheck(&st, newbeta->size[0], *(int32_T (*)[2])indlinsc->
                    contents->size);
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = indlinsc->contents->size[1];
    emxEnsureCapacity_real_T(sp, y, i, &bm_emlrtRTEI);
    loop_ub = indlinsc->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      if (indlinsc->contents->data[i] != (int32_T)muDoubleScalarFloor
          (indlinsc->contents->data[i])) {
        emlrtIntegerCheckR2012b(indlinsc->contents->data[i], &jg_emlrtDCI,
          (emlrtCTX)sp);
      }

      i1 = (int32_T)indlinsc->contents->data[i];
      if ((i1 < 1) || (i1 > newbeta->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, newbeta->size[0], &nj_emlrtBCI,
          (emlrtCTX)sp);
      }

      y->data[i] = newbeta->data[i1 - 1];
    }

    /*  at= yhatseaso = fitted values for linear part of seasonal */
    /*  component */
    st.site = &jn_emlrtRSI;
    b_st.site = &qj_emlrtRSI;
    b_dynamic_size_checks(&b_st, Xseasobsb, y, Xseasobsb->size[1],
                          indlinsc->contents->size[1]);
    b_st.site = &pj_emlrtRSI;
    mtimes(&b_st, Xseasobsb, y, Xlshiftbsb);

    /*  OLS to estimate coefficients of trend + expl variables + non lin coeff of */
    /*  seasonal + coefficient of fixed level shift */
    /*  trlshift is the matrix of explanatory variables */
    if (1 != Seqbsbvarampl->size[1]) {
      emlrtDimSizeEqCheckR2012b(1, Seqbsbvarampl->size[1], &cc_emlrtECI,
        (emlrtCTX)sp);
    }

    if (Xlshiftbsb->size[0] != Seqbsbvarampl->size[0]) {
      emlrtSizeEqCheck1DR2012b(Xlshiftbsb->size[0], Seqbsbvarampl->size[0],
        &bc_emlrtECI, (emlrtCTX)sp);
    }

    i = r->size[0];
    r->size[0] = indnlseaso->size[1];
    emxEnsureCapacity_int32_T(sp, r, i, &cm_emlrtRTEI);
    loop_ub = indnlseaso->size[1];
    for (i = 0; i < loop_ub; i++) {
      if (indnlseaso->data[i] != (int32_T)muDoubleScalarFloor(indnlseaso->data[i]))
      {
        emlrtIntegerCheckR2012b(indnlseaso->data[i], &kg_emlrtDCI, (emlrtCTX)sp);
      }

      i1 = (int32_T)indnlseaso->data[i];
      if ((i1 < 1) || (i1 > XtrendXbsbXseasonXlshift->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)indnlseaso->data[i], 1,
          XtrendXbsbXseasonXlshift->size[1], &oj_emlrtBCI, (emlrtCTX)sp);
      }

      r->data[i] = i1 - 1;
    }

    i = b_yinbsb->size[0];
    b_yinbsb->size[0] = Xlshiftbsb->size[0];
    emxEnsureCapacity_real_T(sp, b_yinbsb, i, &em_emlrtRTEI);
    loop_ub = Xlshiftbsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_yinbsb->data[i] = Xlshiftbsb->data[i] * Seqbsbvarampl->data[i];
    }

    input_sizes[0] = XtrendXbsbXseasonXlshift->size[0];
    input_sizes[1] = r->size[0];
    emlrtSubAssignSizeCheckR2012b(&input_sizes[0], 2, &b_yinbsb->size[0], 1,
      &ac_emlrtECI, (emlrtCTX)sp);
    input_sizes_idx_1 = XtrendXbsbXseasonXlshift->size[0];
    input_sizes[0] = XtrendXbsbXseasonXlshift->size[0];
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
        XtrendXbsbXseasonXlshift->data[i1 + XtrendXbsbXseasonXlshift->size[0] *
          r->data[i]] = b_yinbsb->data[i1 + input_sizes[0] * i];
      }
    }

    /*  b0145 = coefficients of intercept trend + expl var + non */
    /*  linear part of seasonal component + level shift */
    if (yinbsb->size[0] != Xlshiftbsb->size[0]) {
      emlrtSizeEqCheck1DR2012b(yinbsb->size[0], Xlshiftbsb->size[0],
        &yb_emlrtECI, (emlrtCTX)sp);
    }

    i = b_yinbsb->size[0];
    b_yinbsb->size[0] = yinbsb->size[0];
    emxEnsureCapacity_real_T(sp, b_yinbsb, i, &hm_emlrtRTEI);
    loop_ub = yinbsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_yinbsb->data[i] = yinbsb->data[i] - Xlshiftbsb->data[i];
    }

    st.site = &kn_emlrtRSI;
    mldivide(&st, XtrendXbsbXseasonXlshift, b_yinbsb, Xlshiftbsb);

    /*  Now find new coefficients of linear part of seasonal */
    /*  component in the regression of y-trend-expl-lsihft versus */
    /*  vector which contains non linear part of seasonal component */
    /*  which multiplies each column of matrix Xseaso (linear part of */
    /*  seasonal component) */
    st.site = &ln_emlrtRSI;
    indexShapeCheck(&st, Xlshiftbsb->size[0], *(int32_T (*)[2])indnlseaso->size);
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = indnlseaso->size[1];
    emxEnsureCapacity_real_T(sp, y, i, &jm_emlrtRTEI);
    loop_ub = indnlseaso->size[1];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)indnlseaso->data[i];
      if ((i1 < 1) || (i1 > Xlshiftbsb->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Xlshiftbsb->size[0], &pj_emlrtBCI,
          (emlrtCTX)sp);
      }

      y->data[i] = Xlshiftbsb->data[i1 - 1];
    }

    st.site = &ln_emlrtRSI;
    b_st.site = &qj_emlrtRSI;
    b_dynamic_size_checks(&b_st, Seqbsbvarampl, y, Seqbsbvarampl->size[1],
                          indnlseaso->size[1]);
    b_st.site = &pj_emlrtRSI;
    mtimes(&b_st, Seqbsbvarampl, y, yhatnlseaso);
    if (Seqbsb->size[0] != yhatnlseaso->size[0]) {
      emlrtSizeEqCheck1DR2012b(Seqbsb->size[0], yhatnlseaso->size[0],
        &xb_emlrtECI, (emlrtCTX)sp);
    }

    i = yhatnlseaso->size[0];
    yhatnlseaso->size[0] = Seqbsb->size[0];
    emxEnsureCapacity_real_T(sp, yhatnlseaso, i, &lm_emlrtRTEI);
    loop_ub = Seqbsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      yhatnlseaso->data[i] += Seqbsb->data[i];
    }

    if (1 != Xseasobsb->size[1]) {
      emlrtDimSizeEqCheckR2012b(1, Xseasobsb->size[1], &wb_emlrtECI, (emlrtCTX)
        sp);
    }

    if (yhatnlseaso->size[0] != Xseasobsb->size[0]) {
      emlrtSizeEqCheck1DR2012b(yhatnlseaso->size[0], Xseasobsb->size[0],
        &vb_emlrtECI, (emlrtCTX)sp);
    }

    st.site = &mn_emlrtRSI;
    indexShapeCheck(&st, Xlshiftbsb->size[0], *(int32_T (*)[2])indnlseasoc->size);
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = indnlseasoc->size[1];
    emxEnsureCapacity_real_T(sp, y, i, &nm_emlrtRTEI);
    loop_ub = indnlseasoc->size[1];
    for (i = 0; i < loop_ub; i++) {
      if (indnlseasoc->data[i] != (int32_T)muDoubleScalarFloor(indnlseasoc->
           data[i])) {
        emlrtIntegerCheckR2012b(indnlseasoc->data[i], &lg_emlrtDCI, (emlrtCTX)sp);
      }

      i1 = (int32_T)indnlseasoc->data[i];
      if ((i1 < 1) || (i1 > Xlshiftbsb->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Xlshiftbsb->size[0], &qj_emlrtBCI,
          (emlrtCTX)sp);
      }

      y->data[i] = Xlshiftbsb->data[i1 - 1];
    }

    st.site = &mn_emlrtRSI;
    b_st.site = &qj_emlrtRSI;
    b_dynamic_size_checks(&b_st, Xtrendbsb, y, Xtrendbsb->size[1],
                          indnlseasoc->size[1]);
    b_st.site = &pj_emlrtRSI;
    mtimes(&b_st, Xtrendbsb, y, b_yinbsb);
    if (yinbsb->size[0] != b_yinbsb->size[0]) {
      emlrtSizeEqCheck1DR2012b(yinbsb->size[0], b_yinbsb->size[0], &ub_emlrtECI,
        (emlrtCTX)sp);
    }

    loop_ub = yhatnlseaso->size[0];
    for (i = 0; i < loop_ub; i++) {
      yhatnlseaso->data[i] *= Xseasobsb->data[i];
    }

    i = b_yinbsb->size[0];
    b_yinbsb->size[0] = yinbsb->size[0];
    emxEnsureCapacity_real_T(sp, b_yinbsb, i, &pm_emlrtRTEI);
    loop_ub = yinbsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_yinbsb->data[i] = yinbsb->data[i] - b_yinbsb->data[i];
    }

    st.site = &mn_emlrtRSI;
    b2378 = b_mldivide(&st, yhatnlseaso, b_yinbsb);

    /*  Store new value of beta */
    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = indlinsc->contents->size[1];
    emxEnsureCapacity_int32_T(sp, r1, i, &qm_emlrtRTEI);
    loop_ub = indlinsc->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      if (indlinsc->contents->data[i] != (int32_T)muDoubleScalarFloor
          (indlinsc->contents->data[i])) {
        emlrtIntegerCheckR2012b(indlinsc->contents->data[i], &mg_emlrtDCI,
          (emlrtCTX)sp);
      }

      i1 = (int32_T)indlinsc->contents->data[i];
      if ((i1 < 1) || (i1 > newbeta->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)indlinsc->contents->data[i], 1,
          newbeta->size[0], &rj_emlrtBCI, (emlrtCTX)sp);
      }

      r1->data[i] = i1;
    }

    loop_ub = r1->size[1];
    for (i = 0; i < loop_ub; i++) {
      newbeta->data[r1->data[i] - 1] = b2378;
    }

    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = otherind->contents->size[1];
    emxEnsureCapacity_int32_T(sp, r1, i, &sm_emlrtRTEI);
    loop_ub = otherind->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      if (otherind->contents->data[i] != (int32_T)muDoubleScalarFloor
          (otherind->contents->data[i])) {
        emlrtIntegerCheckR2012b(otherind->contents->data[i], &ng_emlrtDCI,
          (emlrtCTX)sp);
      }

      i1 = (int32_T)otherind->contents->data[i];
      if ((i1 < 1) || (i1 > newbeta->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)otherind->contents->data[i], 1,
          newbeta->size[0], &sj_emlrtBCI, (emlrtCTX)sp);
      }

      r1->data[i] = i1;
    }

    if (Xlshiftbsb->size[0] != r1->size[1]) {
      emlrtSubAssignSizeCheck1dR2017a(r1->size[1], Xlshiftbsb->size[0],
        &tb_emlrtECI, (emlrtCTX)sp);
    }

    loop_ub = r1->size[1];
    for (i = 0; i < loop_ub; i++) {
      newbeta->data[r1->data[i] - 1] = Xlshiftbsb->data[i];
    }

    /*  betadiff is linked to the tolerance (specified in scalar */
    /*  reftol) */
    if (oldbeta->size[0] != newbeta->size[0]) {
      emlrtSizeEqCheck1DR2012b(oldbeta->size[0], newbeta->size[0], &sb_emlrtECI,
        (emlrtCTX)sp);
    }

    loop_ub = oldbeta->size[0];
    for (i = 0; i < loop_ub; i++) {
      oldbeta->data[i] -= newbeta->data[i];
    }

    if (oldbeta->size[0] == 0) {
      b2378 = 0.0;
    } else {
      b2378 = 0.0;
      i = oldbeta->size[0];
      for (input_sizes_idx_1 = 0; input_sizes_idx_1 < i; input_sizes_idx_1++) {
        b2378 += muDoubleScalarAbs(oldbeta->data[input_sizes_idx_1]);
      }
    }

    if (newbeta->size[0] == 0) {
      betadiff = 0.0;
    } else {
      betadiff = 0.0;
      i = newbeta->size[0];
      for (input_sizes_idx_1 = 0; input_sizes_idx_1 < i; input_sizes_idx_1++) {
        betadiff += muDoubleScalarAbs(newbeta->data[input_sizes_idx_1]);
      }
    }

    betadiff = b2378 / betadiff;
    i = oldbeta->size[0];
    oldbeta->size[0] = newbeta->size[0];
    emxEnsureCapacity_real_T(sp, oldbeta, i, &tm_emlrtRTEI);
    loop_ub = newbeta->size[0];
    for (i = 0; i < loop_ub; i++) {
      oldbeta->data[i] = newbeta->data[i];
    }

    /*  exit from the loop if the new beta has singular values. In */
    /*  such a case, any intermediate estimate is not reliable and we */
    /*  can just keep the initialbeta and initial scale. */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }

    i = r2->size[0];
    r2->size[0] = newbeta->size[0];
    emxEnsureCapacity_boolean_T(sp, r2, i, &we_emlrtRTEI);
    loop_ub = newbeta->size[0];
    for (i = 0; i < loop_ub; i++) {
      r2->data[i] = muDoubleScalarIsNaN(newbeta->data[i]);
    }

    st.site = &nn_emlrtRSI;
    if (any(&st, r2)) {
      i = newbeta->size[0];
      newbeta->size[0] = beta0->size[0];
      emxEnsureCapacity_real_T(sp, newbeta, i, &um_emlrtRTEI);
      loop_ub = beta0->size[0];
      for (i = 0; i < loop_ub; i++) {
        newbeta->data[i] = beta0->data[i];
      }

      exitg1 = true;
    }
  }

  emxFree_real_T(&b_yinbsb);
  emxFree_boolean_T(&r2);
  emxFree_real_T(&y);
  emxFree_int32_T(&r1);
  emxFree_int32_T(&r);
  emxFree_real_T(&yhatnlseaso);
  emxFree_real_T(&indnlseasoc);
  emxFree_real_T(&XtrendXbsbXseasonXlshift);
  emxFree_real_T(&Xlshiftbsb);
  emxFree_real_T(&Seqbsbvarampl);
  emxFree_real_T(&indnlseaso);
  emxFree_real_T(&yinbsb);
  emxFree_real_T(&Xtrendbsb);
  emxFree_real_T(&Xseasobsb);
  emxFree_real_T(&Seqbsb);
  emxFree_real_T(&oldbeta);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void IRWLSreg(const emlrtStack *sp, const captured_var *reftolALS, const
              captured_var *refstepsALS, const d_captured_var *indlinsc, const
              d_captured_var *Xseaso, d_captured_var *bsb, const b_captured_var *
              isemptyX, const captured_var *lshiftYN, const d_captured_var
              *Xtrend, const d_captured_var *Seq, const captured_var *varampl,
              const d_captured_var *Xlshift, const d_captured_var *X, const
              d_captured_var *yin, const captured_var *trend, const captured_var
              *nexpl, const d_captured_var *otherind, const captured_var
              *seasonal, const captured_var *s, d_captured_var *yhatseaso,
              d_captured_var *yhat, d_captured_var *beta, const captured_var
              *constr, const d_captured_var *Xsel, const b_captured_var
              *verLess2016b, const d_captured_var *seq, c_captured_var *weights,
              const c_captured_var *zerT1, const emxArray_real_T *y, const
              emxArray_real_T *initialbeta, real_T refsteps, real_T reftol,
              real_T h, struct_T *outIRWLS)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_boolean_T *x;
  emxArray_int32_T *i_r2s;
  emxArray_real_T *Xseld;
  emxArray_real_T *b_Xseld;
  emxArray_real_T *b_y;
  emxArray_real_T *newb;
  emxArray_real_T *r2;
  real_T betadiff;
  real_T c_y;
  real_T exitfl;
  real_T ininumscale2;
  real_T iter;
  int32_T sizes[2];
  int32_T b_Xsel;
  int32_T b_nz;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T nz;
  boolean_T empty_non_axis_sizes;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);

  /*  ------------------------------------------------------------------- */
  /*  subfunction IRWLSreg */
  /*  ------------------------------------------------------------------- */
  /* IRWLSreg (iterative reweighted least squares) does refsteps */
  /* refining steps from initialbeta */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     y:         A vector with n elements that contains the response */
  /*                variable. It can be both a row or column vector. */
  /*   initialbeta: vector containing initial estimate of beta */
  /*    refsteps  : scalar, number of refining (IRLS) steps */
  /*    reftol    : relative convergence tolerance */
  /*                Default value is 1e-7 */
  /*       h      : scalar. number of observations with smallest */
  /*                residuals to consider */
  /*  */
  /*            GLOBAL VARIABLES REQUIRED */
  /*     yhat :     A vector with T elements (fitted values for all the */
  /*                observations) */
  /*   Output: */
  /*  */
  /*   The output consists of a structure 'outIRWLS' containing the */
  /*   following fields: */
  /*       betarw  : p x 1 vector. Estimate of beta after refsteps */
  /*                 refining steps */
  /*   numscale2rw : scalar. Sum of the smallest h squared residuals */
  /*                 from final iteration (after refsteps refining */
  /*                 step).It is the numerator of the estimate of the */
  /*                 squared scale. */
  /*      weights  : n x 1 vector. Weights assigned to each observation */
  /*                In this case weights are 0,1. 1 for the units */
  /*                associated with the smallest h squared residuals */
  /*                from final iteration 0 for the other units. */
  /*    exitflag   : scalar which informs about convergence. exitflag = */
  /*                0 implies normal convergence */
  /*  For performance reasons, the output structure is created only at */
  /*  the end */
  /*  outIRWLS = struct('betarw',[],'yhat',[],'weights',[],'exiflag',[],'numscale2rw',[]); */
  /*  Residuals for the initialbeta */
  i = yhat->contents->size[0];
  if (y->size[0] != i) {
    emlrtSizeEqCheck1DR2012b(y->size[0], i, &gc_emlrtECI, (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &b_y, 1, &tn_emlrtRTEI, true);

  /*  Squared residuals for all the observations */
  i = b_y->size[0];
  b_y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(sp, b_y, i, &tn_emlrtRTEI);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = y->data[i] - yhat->contents->data[i];
  }

  emxInit_real_T(sp, &r2, 1, &mp_emlrtRTEI, true);
  emxInit_real_T(sp, &newb, 1, &op_emlrtRTEI, true);
  st.site = &jo_emlrtRSI;
  power(&st, b_y, r2);

  /*  Ordering of squared residuals */
  st.site = &ko_emlrtRSI;
  i = newb->size[0];
  newb->size[0] = r2->size[0];
  emxEnsureCapacity_real_T(&st, newb, i, &le_emlrtRTEI);
  loop_ub = r2->size[0];
  for (i = 0; i < loop_ub; i++) {
    newb->data[i] = r2->data[i];
  }

  emxInit_int32_T(&st, &i_r2s, 1, &np_emlrtRTEI, true);
  b_st.site = &xp_emlrtRSI;
  sort(&b_st, newb, i_r2s);

  /*  ininumscale2 = initial value for trimmed sum of squares of */
  /*  residuals */
  if (1.0 > h) {
    i = 0;
  } else {
    if (1 > newb->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, newb->size[0], &mk_emlrtBCI, (emlrtCTX)
        sp);
    }

    if (h != (int32_T)muDoubleScalarFloor(h)) {
      emlrtIntegerCheckR2012b(h, &gh_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)h < 1) || ((int32_T)h > newb->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, newb->size[0], &nk_emlrtBCI,
        (emlrtCTX)sp);
    }

    i = (int32_T)h;
  }

  sizes[0] = 1;
  sizes[1] = i;
  st.site = &lo_emlrtRSI;
  indexShapeCheck(&st, newb->size[0], sizes);
  i1 = newb->size[0];
  newb->size[0] = i;
  emxEnsureCapacity_real_T(sp, newb, i1, &un_emlrtRTEI);
  st.site = &lo_emlrtRSI;
  ininumscale2 = sum(&st, newb);

  /*  Initialize parameters for the refining steps loop */
  exitfl = 0.0;
  i = outIRWLS->betarw->size[0];
  outIRWLS->betarw->size[0] = 1;
  emxEnsureCapacity_real_T(sp, outIRWLS->betarw, i, &vn_emlrtRTEI);
  outIRWLS->betarw->data[0] = 0.0;
  outIRWLS->numscale2rw = 0.0;

  /*  MATLAC C coder initialization */
  iter = 0.0;
  betadiff = 9999.0;
  if (lshiftYN->contents == 1.0) {
    if (1 > initialbeta->size[0]) {
      loop_ub = 0;
    } else {
      loop_ub = initialbeta->size[0];
    }

    sizes[0] = 1;
    sizes[1] = loop_ub;
    st.site = &mo_emlrtRSI;
    indexShapeCheck(&st, initialbeta->size[0], sizes);
    i = beta->contents->size[0];
    beta->contents->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, beta->contents, i, &xn_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      beta->contents->data[i] = initialbeta->data[i];
    }
  } else {
    i = beta->contents->size[0];
    beta->contents->size[0] = initialbeta->size[0];
    emxEnsureCapacity_real_T(sp, beta->contents, i, &wn_emlrtRTEI);
    loop_ub = initialbeta->size[0];
    for (i = 0; i < loop_ub; i++) {
      beta->contents->data[i] = initialbeta->data[i];
    }
  }

  emxInit_real_T(sp, &Xseld, 2, &wo_emlrtRTEI, true);
  emxInit_boolean_T(sp, &x, 1, &co_emlrtRTEI, true);
  emxInit_real_T(sp, &b_Xseld, 2, &hp_emlrtRTEI, true);
  exitg1 = false;
  while ((!exitg1) && ((betadiff > reftol) && (iter < refsteps))) {
    iter++;
    if (constr->contents == 1.0) {
      /*  Constrained sum of the smallest squared residuals */
      /*  Constrained in the sense that initialbeta(end) is always */
      /*  forced to be in the h subset */
      /*  Check that unit initialbeta(end) belongs to subset in each */
      /*  concentration step */
      if (1.0 > h) {
        loop_ub = 0;
      } else {
        if (1 > i_r2s->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &ok_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (h != (int32_T)muDoubleScalarFloor(h)) {
          emlrtIntegerCheckR2012b(h, &hh_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)h < 1) || ((int32_T)h > i_r2s->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, i_r2s->size[0],
            &pk_emlrtBCI, (emlrtCTX)sp);
        }

        loop_ub = (int32_T)h;
      }

      sizes[0] = 1;
      sizes[1] = loop_ub;
      st.site = &no_emlrtRSI;
      indexShapeCheck(&st, i_r2s->size[0], sizes);
      st.site = &no_emlrtRSI;
      if (initialbeta->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(initialbeta->size[0], 1, initialbeta->
          size[0], &fm_emlrtBCI, &st);
      }

      i = x->size[0];
      x->size[0] = loop_ub;
      emxEnsureCapacity_boolean_T(&st, x, i, &do_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        x->data[i] = (i_r2s->data[i] == initialbeta->data[initialbeta->size[0] -
                      1]);
      }

      b_st.site = &ck_emlrtRSI;
      c_st.site = &mh_emlrtRSI;
      nz = b_combineVectorElements(&c_st, x);
      if (nz == 0) {
        if (1.0 > h - 1.0) {
          loop_ub = 0;
        } else {
          if (1 > i_r2s->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &qk_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (h - 1.0 != (int32_T)muDoubleScalarFloor(h - 1.0)) {
            emlrtIntegerCheckR2012b(h - 1.0, &ih_emlrtDCI, (emlrtCTX)sp);
          }

          if (((int32_T)(h - 1.0) < 1) || ((int32_T)(h - 1.0) > i_r2s->size[0]))
          {
            emlrtDynamicBoundsCheckR2012b((int32_T)(h - 1.0), 1, i_r2s->size[0],
              &rk_emlrtBCI, (emlrtCTX)sp);
          }

          loop_ub = (int32_T)(h - 1.0);
        }

        sizes[0] = 1;
        sizes[1] = loop_ub;
        st.site = &oo_emlrtRSI;
        indexShapeCheck(&st, i_r2s->size[0], sizes);
        i = bsb->contents->size[0];
        bsb->contents->size[0] = loop_ub + 1;
        emxEnsureCapacity_real_T(sp, bsb->contents, i, &oo_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }

        if (initialbeta->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(initialbeta->size[0], 1,
            initialbeta->size[0], &nm_emlrtBCI, (emlrtCTX)sp);
        }

        bsb->contents->data[loop_ub] = initialbeta->data[initialbeta->size[0] -
          1];
      } else {
        /*  i_r2s= units with smallest h squared residuals */
        if (1.0 > h) {
          loop_ub = 0;
        } else {
          if (1 > i_r2s->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &sk_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (h != (int32_T)muDoubleScalarFloor(h)) {
            emlrtIntegerCheckR2012b(h, &jh_emlrtDCI, (emlrtCTX)sp);
          }

          if (((int32_T)h < 1) || ((int32_T)h > i_r2s->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, i_r2s->size[0],
              &tk_emlrtBCI, (emlrtCTX)sp);
          }

          loop_ub = (int32_T)h;
        }

        sizes[0] = 1;
        sizes[1] = loop_ub;
        st.site = &po_emlrtRSI;
        indexShapeCheck(&st, i_r2s->size[0], sizes);
        i = bsb->contents->size[0];
        bsb->contents->size[0] = loop_ub;
        emxEnsureCapacity_real_T(sp, bsb->contents, i, &ro_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }

        /*  new coefficients based on units with smallest h squared */
        /*  residuals */
      }
    } else if (constr->contents == 2.0) {
      /*  Check that units initialbeta(end) and initialbeta(end)-1 */
      /*  belong to subset in each concentration step */
      if (1.0 > h) {
        loop_ub = 0;
      } else {
        if (1 > i_r2s->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &uk_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (h != (int32_T)muDoubleScalarFloor(h)) {
          emlrtIntegerCheckR2012b(h, &kh_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)h < 1) || ((int32_T)h > i_r2s->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, i_r2s->size[0],
            &vk_emlrtBCI, (emlrtCTX)sp);
        }

        loop_ub = (int32_T)h;
      }

      sizes[0] = 1;
      sizes[1] = loop_ub;
      st.site = &qo_emlrtRSI;
      indexShapeCheck(&st, i_r2s->size[0], sizes);
      st.site = &qo_emlrtRSI;
      if (initialbeta->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(initialbeta->size[0], 1, initialbeta->
          size[0], &em_emlrtBCI, &st);
      }

      i = x->size[0];
      x->size[0] = loop_ub;
      emxEnsureCapacity_boolean_T(&st, x, i, &co_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        x->data[i] = (i_r2s->data[i] == initialbeta->data[initialbeta->size[0] -
                      1]);
      }

      b_st.site = &ck_emlrtRSI;
      c_st.site = &mh_emlrtRSI;
      nz = b_combineVectorElements(&c_st, x);
      if (1.0 > h) {
        loop_ub = 0;
      } else {
        if (1 > i_r2s->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &wk_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (h != (int32_T)muDoubleScalarFloor(h)) {
          emlrtIntegerCheckR2012b(h, &lh_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)h < 1) || ((int32_T)h > i_r2s->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, i_r2s->size[0],
            &xk_emlrtBCI, (emlrtCTX)sp);
        }

        loop_ub = (int32_T)h;
      }

      sizes[0] = 1;
      sizes[1] = loop_ub;
      st.site = &ro_emlrtRSI;
      indexShapeCheck(&st, i_r2s->size[0], sizes);
      st.site = &ro_emlrtRSI;
      if (initialbeta->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(initialbeta->size[0], 1, initialbeta->
          size[0], &mm_emlrtBCI, &st);
      }

      i = x->size[0];
      x->size[0] = loop_ub;
      emxEnsureCapacity_boolean_T(&st, x, i, &qo_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        x->data[i] = (i_r2s->data[i] == initialbeta->data[initialbeta->size[0] -
                      1] - 1.0);
      }

      b_st.site = &ck_emlrtRSI;
      c_st.site = &mh_emlrtRSI;
      b_nz = b_combineVectorElements(&c_st, x);
      if ((nz == 0) && (b_nz == 0)) {
        if (1.0 > h - 2.0) {
          loop_ub = 0;
        } else {
          if (1 > i_r2s->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &yk_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (h - 2.0 != (int32_T)muDoubleScalarFloor(h - 2.0)) {
            emlrtIntegerCheckR2012b(h - 2.0, &mh_emlrtDCI, (emlrtCTX)sp);
          }

          if (((int32_T)(h - 2.0) < 1) || ((int32_T)(h - 2.0) > i_r2s->size[0]))
          {
            emlrtDynamicBoundsCheckR2012b((int32_T)(h - 2.0), 1, i_r2s->size[0],
              &al_emlrtBCI, (emlrtCTX)sp);
          }

          loop_ub = (int32_T)(h - 2.0);
        }

        sizes[0] = 1;
        sizes[1] = loop_ub;
        st.site = &so_emlrtRSI;
        indexShapeCheck(&st, i_r2s->size[0], sizes);
        i = bsb->contents->size[0];
        bsb->contents->size[0] = loop_ub + 2;
        emxEnsureCapacity_real_T(sp, bsb->contents, i, &xo_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }

        if (initialbeta->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(initialbeta->size[0], 1,
            initialbeta->size[0], &qm_emlrtBCI, (emlrtCTX)sp);
        }

        bsb->contents->data[loop_ub] = initialbeta->data[initialbeta->size[0] -
          1] - 1.0;
        if (initialbeta->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(initialbeta->size[0], 1,
            initialbeta->size[0], &rm_emlrtBCI, (emlrtCTX)sp);
        }

        bsb->contents->data[loop_ub + 1] = initialbeta->data[initialbeta->size[0]
          - 1];
      } else if (nz == 0) {
        if (1.0 > h - 1.0) {
          loop_ub = 0;
        } else {
          if (1 > i_r2s->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &bl_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (h - 1.0 != (int32_T)muDoubleScalarFloor(h - 1.0)) {
            emlrtIntegerCheckR2012b(h - 1.0, &nh_emlrtDCI, (emlrtCTX)sp);
          }

          if (((int32_T)(h - 1.0) < 1) || ((int32_T)(h - 1.0) > i_r2s->size[0]))
          {
            emlrtDynamicBoundsCheckR2012b((int32_T)(h - 1.0), 1, i_r2s->size[0],
              &cl_emlrtBCI, (emlrtCTX)sp);
          }

          loop_ub = (int32_T)(h - 1.0);
        }

        sizes[0] = 1;
        sizes[1] = loop_ub;
        st.site = &to_emlrtRSI;
        indexShapeCheck(&st, i_r2s->size[0], sizes);
        i = bsb->contents->size[0];
        bsb->contents->size[0] = loop_ub + 1;
        emxEnsureCapacity_real_T(sp, bsb->contents, i, &yo_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }

        if (initialbeta->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(initialbeta->size[0], 1,
            initialbeta->size[0], &sm_emlrtBCI, (emlrtCTX)sp);
        }

        bsb->contents->data[loop_ub] = initialbeta->data[initialbeta->size[0] -
          1];
      } else if (b_nz == 0) {
        if (1.0 > h - 1.0) {
          loop_ub = 0;
        } else {
          if (1 > i_r2s->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &dl_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (h - 1.0 != (int32_T)muDoubleScalarFloor(h - 1.0)) {
            emlrtIntegerCheckR2012b(h - 1.0, &oh_emlrtDCI, (emlrtCTX)sp);
          }

          if (((int32_T)(h - 1.0) < 1) || ((int32_T)(h - 1.0) > i_r2s->size[0]))
          {
            emlrtDynamicBoundsCheckR2012b((int32_T)(h - 1.0), 1, i_r2s->size[0],
              &el_emlrtBCI, (emlrtCTX)sp);
          }

          loop_ub = (int32_T)(h - 1.0);
        }

        sizes[0] = 1;
        sizes[1] = loop_ub;
        st.site = &uo_emlrtRSI;
        indexShapeCheck(&st, i_r2s->size[0], sizes);
        i = bsb->contents->size[0];
        bsb->contents->size[0] = loop_ub + 1;
        emxEnsureCapacity_real_T(sp, bsb->contents, i, &bp_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }

        if (initialbeta->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(initialbeta->size[0], 1,
            initialbeta->size[0], &tm_emlrtBCI, (emlrtCTX)sp);
        }

        bsb->contents->data[loop_ub] = initialbeta->data[initialbeta->size[0] -
          1] - 1.0;
      } else {
        if (1.0 > h) {
          loop_ub = 0;
        } else {
          if (1 > i_r2s->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &fl_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (h != (int32_T)muDoubleScalarFloor(h)) {
            emlrtIntegerCheckR2012b(h, &ph_emlrtDCI, (emlrtCTX)sp);
          }

          if (((int32_T)h < 1) || ((int32_T)h > i_r2s->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, i_r2s->size[0],
              &gl_emlrtBCI, (emlrtCTX)sp);
          }

          loop_ub = (int32_T)h;
        }

        sizes[0] = 1;
        sizes[1] = loop_ub;
        st.site = &vo_emlrtRSI;
        indexShapeCheck(&st, i_r2s->size[0], sizes);
        i = bsb->contents->size[0];
        bsb->contents->size[0] = loop_ub;
        emxEnsureCapacity_real_T(sp, bsb->contents, i, &ap_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }
      }
    } else {
      if (1.0 > h) {
        loop_ub = 0;
      } else {
        if (1 > i_r2s->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &hl_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (h != (int32_T)muDoubleScalarFloor(h)) {
          emlrtIntegerCheckR2012b(h, &qh_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)h < 1) || ((int32_T)h > i_r2s->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, i_r2s->size[0],
            &il_emlrtBCI, (emlrtCTX)sp);
        }

        loop_ub = (int32_T)h;
      }

      sizes[0] = 1;
      sizes[1] = loop_ub;
      st.site = &wo_emlrtRSI;
      indexShapeCheck(&st, i_r2s->size[0], sizes);
      i = bsb->contents->size[0];
      bsb->contents->size[0] = loop_ub;
      emxEnsureCapacity_real_T(sp, bsb->contents, i, &yn_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        bsb->contents->data[i] = i_r2s->data[i];
      }
    }

    if ((varampl->contents == 0.0) && (lshiftYN->contents == 0.0)) {
      /*  In this case the model is linear */
      /*  Function lik constructs fitted values and residual sum of */
      /*  squares */
      b_Xsel = Xsel->contents->size[0];
      loop_ub = Xsel->contents->size[1];
      i = Xseld->size[0] * Xseld->size[1];
      Xseld->size[0] = bsb->contents->size[0];
      Xseld->size[1] = loop_ub;
      emxEnsureCapacity_real_T(sp, Xseld, i, &io_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        b_nz = bsb->contents->size[0];
        for (i1 = 0; i1 < b_nz; i1++) {
          if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i1])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i1], &ei_emlrtDCI,
              (emlrtCTX)sp);
          }

          nz = (int32_T)bsb->contents->data[i1];
          if ((nz < 1) || (nz > b_Xsel)) {
            emlrtDynamicBoundsCheckR2012b(nz, 1, b_Xsel, &km_emlrtBCI, (emlrtCTX)
              sp);
          }

          Xseld->data[i1 + Xseld->size[0] * i] = Xsel->contents->data[(nz +
            Xsel->contents->size[0] * i) - 1];
        }
      }

      i = b_y->size[0];
      b_y->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(sp, b_y, i, &lo_emlrtRTEI);
      loop_ub = bsb->contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor(bsb->
             contents->data[i])) {
          emlrtIntegerCheckR2012b(bsb->contents->data[i], &fi_emlrtDCI,
            (emlrtCTX)sp);
        }

        i1 = (int32_T)bsb->contents->data[i];
        if ((i1 < 1) || (i1 > y->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, y->size[0], &lm_emlrtBCI,
            (emlrtCTX)sp);
        }

        b_y->data[i] = y->data[i1 - 1];
      }

      st.site = &xo_emlrtRSI;
      mldivide(&st, Xseld, b_y, outIRWLS->betarw);

      /*  update residuals */
      st.site = &yo_emlrtRSI;
      b_st.site = &qj_emlrtRSI;
      c_dynamic_size_checks(&b_st, Xsel->contents, outIRWLS->betarw,
                            Xsel->contents->size[1], outIRWLS->betarw->size[0]);
      b_st.site = &pj_emlrtRSI;
      b_mtimes(&b_st, Xsel->contents, outIRWLS->betarw, yhat->contents);
      exitfl = 0.0;
    } else if (lshiftYN->contents == 1.0) {
      if (varampl->contents > 0.0) {
        /*  No minimization is used but just ALS */
        if (verLess2016b->contents) {
          st.site = &ap_emlrtRSI;
          ALSbsxfun(&st, reftolALS, refstepsALS, indlinsc, Xseaso, bsb, isemptyX,
                    lshiftYN, Xtrend, Seq, varampl, Xlshift, X, yin, trend,
                    nexpl, otherind, initialbeta, outIRWLS->betarw, &exitfl);
        } else {
          st.site = &bp_emlrtRSI;
          b_ALS(&st, Seq, bsb, Xseaso, Xtrend, yin, trend, nexpl, varampl,
                isemptyX, lshiftYN, Xlshift, X, reftolALS, refstepsALS, indlinsc,
                otherind, initialbeta, outIRWLS->betarw, &exitfl);
        }

        /*  Construct vector of fitted values for all the */
        /*  observations */
        i = bsb->contents->size[0];
        bsb->contents->size[0] = seq->contents->size[0];
        emxEnsureCapacity_real_T(sp, bsb->contents, i, &jo_emlrtRTEI);
        loop_ub = seq->contents->size[0];
        for (i = 0; i < loop_ub; i++) {
          bsb->contents->data[i] = seq->contents->data[i];
        }

        st.site = &cp_emlrtRSI;
        lik(&st, Xtrend, bsb, trend, seasonal, s, yhatseaso, Xseaso, varampl,
            Seq, nexpl, isemptyX, X, lshiftYN, Xlshift, yhat, yin,
            outIRWLS->betarw);
      } else {
        /*  If there is just level shift */
        /*  we update estimate of beta using simple LS */
        st.site = &dp_emlrtRSI;
        b_st.site = &pg_emlrtRSI;
        if ((Xsel->contents->size[0] != 0) && (Xsel->contents->size[1] != 0)) {
          b_nz = Xsel->contents->size[0];
        } else if ((Xlshift->contents->size[0] != 0) && (Xlshift->contents->
                    size[1] != 0)) {
          b_nz = Xlshift->contents->size[0];
        } else {
          b_nz = muIntScalarMax_sint32(Xsel->contents->size[0], 0);
          if (Xlshift->contents->size[0] > b_nz) {
            b_nz = Xlshift->contents->size[0];
          }
        }

        c_st.site = &rf_emlrtRSI;
        if ((Xsel->contents->size[0] != b_nz) && ((Xsel->contents->size[0] != 0)
             && (Xsel->contents->size[1] != 0))) {
          emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((Xlshift->contents->size[0] != b_nz) && ((Xlshift->contents->size[0]
              != 0) && (Xlshift->contents->size[1] != 0))) {
          emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (b_nz == 0);
        if (empty_non_axis_sizes || ((Xsel->contents->size[0] != 0) &&
             (Xsel->contents->size[1] != 0))) {
          nz = Xsel->contents->size[1];
        } else {
          nz = 0;
        }

        if (empty_non_axis_sizes || ((Xlshift->contents->size[0] != 0) &&
             (Xlshift->contents->size[1] != 0))) {
          sizes[1] = Xlshift->contents->size[1];
        } else {
          sizes[1] = 0;
        }

        i = Xseld->size[0] * Xseld->size[1];
        Xseld->size[0] = b_nz;
        Xseld->size[1] = nz + sizes[1];
        emxEnsureCapacity_real_T(&b_st, Xseld, i, &wo_emlrtRTEI);
        for (i = 0; i < nz; i++) {
          for (i1 = 0; i1 < b_nz; i1++) {
            Xseld->data[i1 + Xseld->size[0] * i] = Xsel->contents->data[i1 +
              b_nz * i];
          }
        }

        loop_ub = sizes[1];
        for (i = 0; i < loop_ub; i++) {
          for (i1 = 0; i1 < b_nz; i1++) {
            Xseld->data[i1 + Xseld->size[0] * (i + nz)] = Xlshift->
              contents->data[i1 + b_nz * i];
          }
        }

        /*  newb = new estimate of beta just using units forming */
        /*  subset (newb does not contain the position of level */
        /*  shift in the last position) */
        loop_ub = Xseld->size[1];
        i = b_Xseld->size[0] * b_Xseld->size[1];
        b_Xseld->size[0] = bsb->contents->size[0];
        b_Xseld->size[1] = Xseld->size[1];
        emxEnsureCapacity_real_T(sp, b_Xseld, i, &hp_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          b_nz = bsb->contents->size[0];
          for (i1 = 0; i1 < b_nz; i1++) {
            if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor
                (bsb->contents->data[i1])) {
              emlrtIntegerCheckR2012b(bsb->contents->data[i1], &gi_emlrtDCI,
                (emlrtCTX)sp);
            }

            nz = (int32_T)bsb->contents->data[i1];
            if ((nz < 1) || (nz > Xseld->size[0])) {
              emlrtDynamicBoundsCheckR2012b(nz, 1, Xseld->size[0], &ym_emlrtBCI,
                (emlrtCTX)sp);
            }

            b_Xseld->data[i1 + b_Xseld->size[0] * i] = Xseld->data[(nz +
              Xseld->size[0] * i) - 1];
          }
        }

        i = b_y->size[0];
        b_y->size[0] = bsb->contents->size[0];
        emxEnsureCapacity_real_T(sp, b_y, i, &jp_emlrtRTEI);
        loop_ub = bsb->contents->size[0];
        for (i = 0; i < loop_ub; i++) {
          if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i], &hi_emlrtDCI,
              (emlrtCTX)sp);
          }

          i1 = (int32_T)bsb->contents->data[i];
          if ((i1 < 1) || (i1 > y->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, y->size[0], &an_emlrtBCI,
              (emlrtCTX)sp);
          }

          b_y->data[i] = y->data[i1 - 1];
        }

        st.site = &ep_emlrtRSI;
        mldivide(&st, b_Xseld, b_y, newb);

        /*  yhat = vector of fitted values for all obs */
        st.site = &fp_emlrtRSI;
        b_st.site = &qj_emlrtRSI;
        c_dynamic_size_checks(&b_st, Xseld, newb, Xseld->size[1], newb->size[0]);
        b_st.site = &pj_emlrtRSI;
        b_mtimes(&b_st, Xseld, newb, yhat->contents);

        /*  newbeta = new estimate of beta  just using units */
        /*  forming subset (newb also contains as last element */
        /*  the position of level shift) */
        i = outIRWLS->betarw->size[0];
        outIRWLS->betarw->size[0] = newb->size[0] + 1;
        emxEnsureCapacity_real_T(sp, outIRWLS->betarw, i, &kp_emlrtRTEI);
        loop_ub = newb->size[0];
        for (i = 0; i < loop_ub; i++) {
          outIRWLS->betarw->data[i] = newb->data[i];
        }

        if (initialbeta->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(initialbeta->size[0], 1,
            initialbeta->size[0], &bn_emlrtBCI, (emlrtCTX)sp);
        }

        outIRWLS->betarw->data[newb->size[0]] = initialbeta->data
          [initialbeta->size[0] - 1];
        exitfl = 0.0;
      }
    } else {
      /*  model is non linear because there is just the time varying amplitude in seasonal component */
      /*  Use Alternative least squares to update beta (just using */
      /*  the units forming subset) */
      if (verLess2016b->contents) {
        st.site = &gp_emlrtRSI;
        ALSbsxfun(&st, reftolALS, refstepsALS, indlinsc, Xseaso, bsb, isemptyX,
                  lshiftYN, Xtrend, Seq, varampl, Xlshift, X, yin, trend, nexpl,
                  otherind, beta->contents, outIRWLS->betarw, &exitfl);
      } else {
        st.site = &hp_emlrtRSI;
        b_ALS(&st, Seq, bsb, Xseaso, Xtrend, yin, trend, nexpl, varampl,
              isemptyX, lshiftYN, Xlshift, X, reftolALS, refstepsALS, indlinsc,
              otherind, beta->contents, outIRWLS->betarw, &exitfl);
      }

      /*  Call lik  with bsb=seq in order to create the vector */
      /*  of fitted values (yhat) using all the observations */
      i = bsb->contents->size[0];
      bsb->contents->size[0] = seq->contents->size[0];
      emxEnsureCapacity_real_T(sp, bsb->contents, i, &ko_emlrtRTEI);
      loop_ub = seq->contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        bsb->contents->data[i] = seq->contents->data[i];
      }

      st.site = &ip_emlrtRSI;
      lik(&st, Xtrend, bsb, trend, seasonal, s, yhatseaso, Xseaso, varampl, Seq,
          nexpl, isemptyX, X, lshiftYN, Xlshift, yhat, yin, outIRWLS->betarw);
    }

    /*  disp([beta newbeta]) */
    /*  betadiff is linked to the tolerance (specified in scalar */
    /*  reftol) */
    i = beta->contents->size[0];
    if (i != outIRWLS->betarw->size[0]) {
      emlrtSizeEqCheck1DR2012b(i, outIRWLS->betarw->size[0], &hc_emlrtECI,
        (emlrtCTX)sp);
    }

    i = newb->size[0];
    newb->size[0] = beta->contents->size[0];
    emxEnsureCapacity_real_T(sp, newb, i, &to_emlrtRTEI);
    loop_ub = beta->contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      newb->data[i] = beta->contents->data[i] - outIRWLS->betarw->data[i];
    }

    if (newb->size[0] == 0) {
      betadiff = 0.0;
    } else {
      betadiff = 0.0;
      i = newb->size[0];
      for (b_nz = 0; b_nz < i; b_nz++) {
        betadiff += muDoubleScalarAbs(newb->data[b_nz]);
      }
    }

    i = newb->size[0];
    newb->size[0] = beta->contents->size[0];
    emxEnsureCapacity_real_T(sp, newb, i, &vo_emlrtRTEI);
    loop_ub = beta->contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      newb->data[i] = beta->contents->data[i];
    }

    if (newb->size[0] == 0) {
      c_y = 0.0;
    } else {
      c_y = 0.0;
      i = newb->size[0];
      for (b_nz = 0; b_nz < i; b_nz++) {
        c_y += muDoubleScalarAbs(newb->data[b_nz]);
      }
    }

    betadiff /= c_y;

    /*  exit from the loop if new beta contains nan In */
    /*  such a case, any intermediate estimate is not reliable and we */
    /*  can just keep the initialbeta and initial scale. */
    i = x->size[0];
    x->size[0] = outIRWLS->betarw->size[0];
    emxEnsureCapacity_boolean_T(sp, x, i, &we_emlrtRTEI);
    loop_ub = outIRWLS->betarw->size[0];
    for (i = 0; i < loop_ub; i++) {
      x->data[i] = muDoubleScalarIsNaN(outIRWLS->betarw->data[i]);
    }

    st.site = &jp_emlrtRSI;
    if (any(&st, x) || (exitfl != 0.0)) {
      i = outIRWLS->betarw->size[0];
      outIRWLS->betarw->size[0] = initialbeta->size[0];
      emxEnsureCapacity_real_T(sp, outIRWLS->betarw, i, &gp_emlrtRTEI);
      loop_ub = initialbeta->size[0];
      for (i = 0; i < loop_ub; i++) {
        outIRWLS->betarw->data[i] = initialbeta->data[i];
      }

      outIRWLS->numscale2rw = ininumscale2;
      exitg1 = true;
    } else {
      /*  update residuals */
      i = yhat->contents->size[0];
      if (y->size[0] != i) {
        emlrtSizeEqCheck1DR2012b(y->size[0], i, &ic_emlrtECI, (emlrtCTX)sp);
      }

      i = b_y->size[0];
      b_y->size[0] = y->size[0];
      emxEnsureCapacity_real_T(sp, b_y, i, &ip_emlrtRTEI);
      loop_ub = y->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_y->data[i] = y->data[i] - yhat->contents->data[i];
      }

      st.site = &kp_emlrtRSI;
      power(&st, b_y, r2);

      /*  Ordering of all new squared residuals */
      st.site = &lp_emlrtRSI;
      i = newb->size[0];
      newb->size[0] = r2->size[0];
      emxEnsureCapacity_real_T(&st, newb, i, &le_emlrtRTEI);
      loop_ub = r2->size[0];
      for (i = 0; i < loop_ub; i++) {
        newb->data[i] = r2->data[i];
      }

      b_st.site = &xp_emlrtRSI;
      sort(&b_st, newb, i_r2s);

      /*  update beta */
      i = beta->contents->size[0];
      beta->contents->size[0] = outIRWLS->betarw->size[0];
      emxEnsureCapacity_real_T(sp, beta->contents, i, &lp_emlrtRTEI);
      loop_ub = outIRWLS->betarw->size[0];
      for (i = 0; i < loop_ub; i++) {
        beta->contents->data[i] = outIRWLS->betarw->data[i];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
  }

  emxFree_real_T(&b_Xseld);
  emxFree_real_T(&newb);
  emxFree_real_T(&Xseld);

  /*  newbeta = the final estimate of beta to be stored in outIRWLS.betarw */
  /* outIRWLS.betarw = newbeta; */
  /*  yhat = the final fitted values for all the observations using */
  /*  final estimate of beta, to be stored in outIRWLS.yhat */
  /* outIRWLS.yhat=yhat; */
  if (exitfl == 0.0) {
    if (constr->contents == 1.0) {
      if (1.0 > h) {
        loop_ub = 0;
      } else {
        if (1 > i_r2s->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &jl_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (h != (int32_T)muDoubleScalarFloor(h)) {
          emlrtIntegerCheckR2012b(h, &rh_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)h < 1) || ((int32_T)h > i_r2s->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, i_r2s->size[0],
            &kl_emlrtBCI, (emlrtCTX)sp);
        }

        loop_ub = (int32_T)h;
      }

      sizes[0] = 1;
      sizes[1] = loop_ub;
      st.site = &mp_emlrtRSI;
      indexShapeCheck(&st, i_r2s->size[0], sizes);
      st.site = &mp_emlrtRSI;
      if (initialbeta->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(initialbeta->size[0], 1, initialbeta->
          size[0], &gm_emlrtBCI, &st);
      }

      i = x->size[0];
      x->size[0] = loop_ub;
      emxEnsureCapacity_boolean_T(&st, x, i, &fo_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        x->data[i] = (i_r2s->data[i] == initialbeta->data[initialbeta->size[0] -
                      1]);
      }

      b_st.site = &ck_emlrtRSI;
      c_st.site = &mh_emlrtRSI;
      nz = b_combineVectorElements(&c_st, x);
      if (nz == 0) {
        if (1.0 > h - 1.0) {
          loop_ub = 0;
        } else {
          if (1 > i_r2s->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &ll_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (h - 1.0 != (int32_T)muDoubleScalarFloor(h - 1.0)) {
            emlrtIntegerCheckR2012b(h - 1.0, &sh_emlrtDCI, (emlrtCTX)sp);
          }

          if (((int32_T)(h - 1.0) < 1) || ((int32_T)(h - 1.0) > i_r2s->size[0]))
          {
            emlrtDynamicBoundsCheckR2012b((int32_T)(h - 1.0), 1, i_r2s->size[0],
              &ml_emlrtBCI, (emlrtCTX)sp);
          }

          loop_ub = (int32_T)(h - 1.0);
        }

        sizes[0] = 1;
        sizes[1] = loop_ub;
        st.site = &np_emlrtRSI;
        indexShapeCheck(&st, i_r2s->size[0], sizes);
        i = bsb->contents->size[0];
        bsb->contents->size[0] = loop_ub + 1;
        emxEnsureCapacity_real_T(sp, bsb->contents, i, &po_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }

        if (initialbeta->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(initialbeta->size[0], 1,
            initialbeta->size[0], &om_emlrtBCI, (emlrtCTX)sp);
        }

        bsb->contents->data[loop_ub] = initialbeta->data[initialbeta->size[0] -
          1];
      } else {
        /*  i_r2s= units with smallest h squared residuals */
        if (1.0 > h) {
          loop_ub = 0;
        } else {
          if (1 > i_r2s->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &nl_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (h != (int32_T)muDoubleScalarFloor(h)) {
            emlrtIntegerCheckR2012b(h, &th_emlrtDCI, (emlrtCTX)sp);
          }

          if (((int32_T)h < 1) || ((int32_T)h > i_r2s->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, i_r2s->size[0],
              &ol_emlrtBCI, (emlrtCTX)sp);
          }

          loop_ub = (int32_T)h;
        }

        sizes[0] = 1;
        sizes[1] = loop_ub;
        st.site = &op_emlrtRSI;
        indexShapeCheck(&st, i_r2s->size[0], sizes);
        i = bsb->contents->size[0];
        bsb->contents->size[0] = loop_ub;
        emxEnsureCapacity_real_T(sp, bsb->contents, i, &so_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }

        /*  new coefficients based on units with smallest h squared */
        /*  residuals */
      }
    } else if (constr->contents == 2.0) {
      /*  Force both initialbeta(end) and initialbeta(end)-1 to */
      /*  belong to the subset */
      if (1.0 > h) {
        loop_ub = 0;
      } else {
        if (1 > i_r2s->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &pl_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (h != (int32_T)muDoubleScalarFloor(h)) {
          emlrtIntegerCheckR2012b(h, &uh_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)h < 1) || ((int32_T)h > i_r2s->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, i_r2s->size[0],
            &ql_emlrtBCI, (emlrtCTX)sp);
        }

        loop_ub = (int32_T)h;
      }

      sizes[0] = 1;
      sizes[1] = loop_ub;
      st.site = &pp_emlrtRSI;
      indexShapeCheck(&st, i_r2s->size[0], sizes);
      st.site = &pp_emlrtRSI;
      if (initialbeta->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(initialbeta->size[0], 1, initialbeta->
          size[0], &im_emlrtBCI, &st);
      }

      i = x->size[0];
      x->size[0] = loop_ub;
      emxEnsureCapacity_boolean_T(&st, x, i, &ho_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        x->data[i] = (i_r2s->data[i] == initialbeta->data[initialbeta->size[0] -
                      1]);
      }

      b_st.site = &ck_emlrtRSI;
      c_st.site = &mh_emlrtRSI;
      nz = b_combineVectorElements(&c_st, x);
      if (1.0 > h) {
        loop_ub = 0;
      } else {
        if (1 > i_r2s->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &rl_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (h != (int32_T)muDoubleScalarFloor(h)) {
          emlrtIntegerCheckR2012b(h, &vh_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)h < 1) || ((int32_T)h > i_r2s->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, i_r2s->size[0],
            &sl_emlrtBCI, (emlrtCTX)sp);
        }

        loop_ub = (int32_T)h;
      }

      sizes[0] = 1;
      sizes[1] = loop_ub;
      st.site = &qp_emlrtRSI;
      indexShapeCheck(&st, i_r2s->size[0], sizes);
      st.site = &qp_emlrtRSI;
      if (initialbeta->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(initialbeta->size[0], 1, initialbeta->
          size[0], &pm_emlrtBCI, &st);
      }

      i = x->size[0];
      x->size[0] = loop_ub;
      emxEnsureCapacity_boolean_T(&st, x, i, &uo_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        x->data[i] = (i_r2s->data[i] == initialbeta->data[initialbeta->size[0] -
                      1] - 1.0);
      }

      b_st.site = &ck_emlrtRSI;
      c_st.site = &mh_emlrtRSI;
      b_nz = b_combineVectorElements(&c_st, x);
      if ((nz == 0) && (b_nz == 0)) {
        if (1.0 > h - 2.0) {
          loop_ub = 0;
        } else {
          if (1 > i_r2s->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &tl_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (h - 2.0 != (int32_T)muDoubleScalarFloor(h - 2.0)) {
            emlrtIntegerCheckR2012b(h - 2.0, &wh_emlrtDCI, (emlrtCTX)sp);
          }

          if (((int32_T)(h - 2.0) < 1) || ((int32_T)(h - 2.0) > i_r2s->size[0]))
          {
            emlrtDynamicBoundsCheckR2012b((int32_T)(h - 2.0), 1, i_r2s->size[0],
              &ul_emlrtBCI, (emlrtCTX)sp);
          }

          loop_ub = (int32_T)(h - 2.0);
        }

        sizes[0] = 1;
        sizes[1] = loop_ub;
        st.site = &rp_emlrtRSI;
        indexShapeCheck(&st, i_r2s->size[0], sizes);
        i = bsb->contents->size[0];
        bsb->contents->size[0] = loop_ub + 2;
        emxEnsureCapacity_real_T(sp, bsb->contents, i, &cp_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }

        if (initialbeta->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(initialbeta->size[0], 1,
            initialbeta->size[0], &um_emlrtBCI, (emlrtCTX)sp);
        }

        bsb->contents->data[loop_ub] = initialbeta->data[initialbeta->size[0] -
          1] - 1.0;
        if (initialbeta->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(initialbeta->size[0], 1,
            initialbeta->size[0], &vm_emlrtBCI, (emlrtCTX)sp);
        }

        bsb->contents->data[loop_ub + 1] = initialbeta->data[initialbeta->size[0]
          - 1];
      } else if (nz == 0) {
        if (1.0 > h - 1.0) {
          loop_ub = 0;
        } else {
          if (1 > i_r2s->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &vl_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (h - 1.0 != (int32_T)muDoubleScalarFloor(h - 1.0)) {
            emlrtIntegerCheckR2012b(h - 1.0, &xh_emlrtDCI, (emlrtCTX)sp);
          }

          if (((int32_T)(h - 1.0) < 1) || ((int32_T)(h - 1.0) > i_r2s->size[0]))
          {
            emlrtDynamicBoundsCheckR2012b((int32_T)(h - 1.0), 1, i_r2s->size[0],
              &wl_emlrtBCI, (emlrtCTX)sp);
          }

          loop_ub = (int32_T)(h - 1.0);
        }

        sizes[0] = 1;
        sizes[1] = loop_ub;
        st.site = &sp_emlrtRSI;
        indexShapeCheck(&st, i_r2s->size[0], sizes);
        i = bsb->contents->size[0];
        bsb->contents->size[0] = loop_ub + 1;
        emxEnsureCapacity_real_T(sp, bsb->contents, i, &dp_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }

        if (initialbeta->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(initialbeta->size[0], 1,
            initialbeta->size[0], &wm_emlrtBCI, (emlrtCTX)sp);
        }

        bsb->contents->data[loop_ub] = initialbeta->data[initialbeta->size[0] -
          1];
      } else if (b_nz == 0) {
        if (1.0 > h - 1.0) {
          loop_ub = 0;
        } else {
          if (1 > i_r2s->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &xl_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (h - 1.0 != (int32_T)muDoubleScalarFloor(h - 1.0)) {
            emlrtIntegerCheckR2012b(h - 1.0, &yh_emlrtDCI, (emlrtCTX)sp);
          }

          if (((int32_T)(h - 1.0) < 1) || ((int32_T)(h - 1.0) > i_r2s->size[0]))
          {
            emlrtDynamicBoundsCheckR2012b((int32_T)(h - 1.0), 1, i_r2s->size[0],
              &yl_emlrtBCI, (emlrtCTX)sp);
          }

          loop_ub = (int32_T)(h - 1.0);
        }

        sizes[0] = 1;
        sizes[1] = loop_ub;
        st.site = &tp_emlrtRSI;
        indexShapeCheck(&st, i_r2s->size[0], sizes);
        i = bsb->contents->size[0];
        bsb->contents->size[0] = loop_ub + 1;
        emxEnsureCapacity_real_T(sp, bsb->contents, i, &fp_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }

        if (initialbeta->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(initialbeta->size[0], 1,
            initialbeta->size[0], &xm_emlrtBCI, (emlrtCTX)sp);
        }

        bsb->contents->data[loop_ub] = initialbeta->data[initialbeta->size[0] -
          1] - 1.0;
      } else {
        if (1.0 > h) {
          loop_ub = 0;
        } else {
          if (1 > i_r2s->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &am_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (h != (int32_T)muDoubleScalarFloor(h)) {
            emlrtIntegerCheckR2012b(h, &ai_emlrtDCI, (emlrtCTX)sp);
          }

          if (((int32_T)h < 1) || ((int32_T)h > i_r2s->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, i_r2s->size[0],
              &bm_emlrtBCI, (emlrtCTX)sp);
          }

          loop_ub = (int32_T)h;
        }

        sizes[0] = 1;
        sizes[1] = loop_ub;
        st.site = &up_emlrtRSI;
        indexShapeCheck(&st, i_r2s->size[0], sizes);
        i = bsb->contents->size[0];
        bsb->contents->size[0] = loop_ub;
        emxEnsureCapacity_real_T(sp, bsb->contents, i, &ep_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }
      }
    } else {
      if (1.0 > h) {
        loop_ub = 0;
      } else {
        if (1 > i_r2s->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &cm_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (h != (int32_T)muDoubleScalarFloor(h)) {
          emlrtIntegerCheckR2012b(h, &bi_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)h < 1) || ((int32_T)h > i_r2s->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, i_r2s->size[0],
            &dm_emlrtBCI, (emlrtCTX)sp);
        }

        loop_ub = (int32_T)h;
      }

      sizes[0] = 1;
      sizes[1] = loop_ub;
      st.site = &vp_emlrtRSI;
      indexShapeCheck(&st, i_r2s->size[0], sizes);
      i = bsb->contents->size[0];
      bsb->contents->size[0] = loop_ub;
      emxEnsureCapacity_real_T(sp, bsb->contents, i, &bo_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        bsb->contents->data[i] = i_r2s->data[i];
      }
    }

    i = b_y->size[0];
    b_y->size[0] = bsb->contents->size[0];
    emxEnsureCapacity_real_T(sp, b_y, i, &go_emlrtRTEI);
    loop_ub = bsb->contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor(bsb->
           contents->data[i])) {
        emlrtIntegerCheckR2012b(bsb->contents->data[i], &di_emlrtDCI, (emlrtCTX)
          sp);
      }

      i1 = (int32_T)bsb->contents->data[i];
      if ((i1 < 1) || (i1 > r2->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, r2->size[0], &jm_emlrtBCI,
          (emlrtCTX)sp);
      }

      b_y->data[i] = r2->data[i1 - 1];
    }

    st.site = &wp_emlrtRSI;
    outIRWLS->numscale2rw = sum(&st, b_y);

    /*  numscale2 = the final estimate of trimmed sum of squares of */
    /*  residuals, to be stored in outIRWLS.numscale2rw */
    /* outIRWLS.numscale2rw = numscale2; */
  } else {
    /* outIRWLS.numscale2rw = numscale2; */
  }

  emxFree_real_T(&b_y);
  emxFree_boolean_T(&x);
  emxFree_real_T(&r2);

  /*  weights = the final estimate of the weights for each observation, */
  /*  to be stored in outIRWLS.weights. In this case weights are 0,1. 1 */
  /*  for the units associated with the units formig subset from  final */
  /*  iteration 0 for the other units. */
  i = weights->contents->size[0];
  weights->contents->size[0] = zerT1->contents->size[0];
  emxEnsureCapacity_boolean_T(sp, weights->contents, i, &ao_emlrtRTEI);
  loop_ub = zerT1->contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    weights->contents->data[i] = zerT1->contents->data[i];
  }

  b_nz = weights->contents->size[0];
  i = i_r2s->size[0];
  i_r2s->size[0] = bsb->contents->size[0];
  emxEnsureCapacity_int32_T(sp, i_r2s, i, &eo_emlrtRTEI);
  loop_ub = bsb->contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor(bsb->
         contents->data[i])) {
      emlrtIntegerCheckR2012b(bsb->contents->data[i], &ci_emlrtDCI, (emlrtCTX)sp);
    }

    i1 = (int32_T)bsb->contents->data[i];
    if ((i1 < 1) || (i1 > b_nz)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)bsb->contents->data[i], 1, b_nz,
        &hm_emlrtBCI, (emlrtCTX)sp);
    }

    i_r2s->data[i] = i1;
  }

  loop_ub = i_r2s->size[0];
  for (i = 0; i < loop_ub; i++) {
    weights->contents->data[i_r2s->data[i] - 1] = true;
  }

  emxFree_int32_T(&i_r2s);

  /* outIRWLS.weights=weights; */
  /*  exitfl = the exit flag to be stored in outIRWLS.exiflag */
  /* outIRWLS.exiflag=exitfl; */
  /*  Store all output variables */
  i = outIRWLS->yhat->size[0];
  outIRWLS->yhat->size[0] = yhat->contents->size[0];
  emxEnsureCapacity_real_T(sp, outIRWLS->yhat, i, &mo_emlrtRTEI);
  loop_ub = yhat->contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    outIRWLS->yhat->data[i] = yhat->contents->data[i];
  }

  i = outIRWLS->weights->size[0];
  outIRWLS->weights->size[0] = weights->contents->size[0];
  emxEnsureCapacity_boolean_T(sp, outIRWLS->weights, i, &no_emlrtRTEI);
  loop_ub = weights->contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    outIRWLS->weights->data[i] = weights->contents->data[i];
  }

  outIRWLS->exiflag = exitfl;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

real_T corfactorRAW(const emlrtStack *sp, real_T n, real_T alpha)
{
  static const int32_T iv[2] = { 1, 44 };

  static const int32_T iv1[2] = { 1, 69 };

  static const int32_T iv2[2] = { 1, 75 };

  static const int32_T iv3[2] = { 1, 51 };

  static const char_T u[44] = { 'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ', 'p',
    'r', 'o', 'b', 'l', 'e', 'm', ' ', 'i', 'n', ' ', 's', 'u', 'b', 'f', 'u',
    'n', 'c', 't', 'i', 'o', 'n', ' ', 'c', 'o', 'r', 'f', 'a', 'c', 't', 'o',
    'r', 'R', 'A', 'W' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  real_T fp_500_n;
  real_T fp_875_n;
  real_T rawcorfac;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /*  corfactorRAW function */
  st.site = &as_emlrtRSI;
  b_st.site = &yr_emlrtRSI;
  c_st.site = &kf_emlrtRSI;
  if (n < 0.0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &vb_emlrtRTEI,
      "Coder:toolbox:power_domainError", "Coder:toolbox:power_domainError", 0);
  }

  fp_500_n = 1.0 - 1.2995580068132053 / muDoubleScalarPower(n, 0.604756680630497);
  st.site = &bs_emlrtRSI;
  b_st.site = &yr_emlrtRSI;
  fp_875_n = 1.0 - 0.70357229237653807 / muDoubleScalarPower(n, 1.01646567502486);
  if ((0.5 <= alpha) && (alpha <= 0.875)) {
    fp_500_n += (fp_875_n - fp_500_n) / 0.375 * (alpha - 0.5);
  } else if ((0.875 < alpha) && (alpha < 1.0)) {
    fp_500_n = fp_875_n + (1.0 - fp_875_n) / 0.125 * (alpha - 0.875);
  } else {
    fp_500_n = 1.0;
  }

  rawcorfac = 1.0 / fp_500_n;
  if ((rawcorfac <= 0.0) || (rawcorfac > 50.0)) {
    rawcorfac = 1.0;

    /*  if msg==true */
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 44, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &qcb_emlrtRSI;
    disp(&st, y, &r_emlrtMCI);
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 69, m, &cv3[0]);
    emlrtAssign(&b_y, m);
    st.site = &pcb_emlrtRSI;
    disp(&st, b_y, &s_emlrtMCI);
    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 75, m, &cv4[0]);
    emlrtAssign(&c_y, m);
    st.site = &ocb_emlrtRSI;
    disp(&st, c_y, &t_emlrtMCI);
    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 51, m, &cv5[0]);
    emlrtAssign(&d_y, m);
    st.site = &ncb_emlrtRSI;
    disp(&st, d_y, &u_emlrtMCI);

    /*  end */
  }

  return rawcorfac;
}

real_T corfactorREW(const emlrtStack *sp, real_T n, real_T alpha)
{
  static const int32_T iv[2] = { 1, 44 };

  static const int32_T iv1[2] = { 1, 69 };

  static const int32_T iv2[2] = { 1, 75 };

  static const int32_T iv3[2] = { 1, 51 };

  static const char_T u[44] = { 'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ', 'p',
    'r', 'o', 'b', 'l', 'e', 'm', ' ', 'i', 'n', ' ', 's', 'u', 'b', 'f', 'u',
    'n', 'c', 't', 'i', 'o', 'n', ' ', 'c', 'o', 'r', 'f', 'a', 'c', 't', 'o',
    'r', 'R', 'E', 'W' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  real_T fp_500_n;
  real_T fp_875_n;
  real_T rewcorfac;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /*  corfactorREW function */
  st.site = &sab_emlrtRSI;
  b_st.site = &yr_emlrtRSI;
  c_st.site = &kf_emlrtRSI;
  if (n < 0.0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &vb_emlrtRTEI,
      "Coder:toolbox:power_domainError", "Coder:toolbox:power_domainError", 0);
  }

  fp_500_n = 1.0 - 3.0373378792330419 / muDoubleScalarPower(n, 1.5182890270453);
  st.site = &tab_emlrtRSI;
  b_st.site = &yr_emlrtRSI;
  fp_875_n = 1.0 - 0.51660962465337334 / muDoubleScalarPower(n, 0.88939595831888);
  if ((0.5 <= alpha) && (alpha <= 0.875)) {
    fp_500_n += (fp_875_n - fp_500_n) / 0.375 * (alpha - 0.5);
  } else if ((0.875 < alpha) && (alpha < 1.0)) {
    fp_500_n = fp_875_n + (1.0 - fp_875_n) / 0.125 * (alpha - 0.875);
  } else {
    fp_500_n = 1.0;
  }

  rewcorfac = 1.0 / fp_500_n;
  if ((rewcorfac <= 0.0) || (rewcorfac > 50.0)) {
    rewcorfac = 1.0;

    /*   if msg==true */
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 44, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &lcb_emlrtRSI;
    disp(&st, y, &w_emlrtMCI);
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 69, m, &cv3[0]);
    emlrtAssign(&b_y, m);
    st.site = &kcb_emlrtRSI;
    disp(&st, b_y, &x_emlrtMCI);
    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 75, m, &cv4[0]);
    emlrtAssign(&c_y, m);
    st.site = &jcb_emlrtRSI;
    disp(&st, c_y, &y_emlrtMCI);
    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 51, m, &cv5[0]);
    emlrtAssign(&d_y, m);
    st.site = &icb_emlrtRSI;
    disp(&st, d_y, &ab_emlrtMCI);

    /*   end */
  }

  return rewcorfac;
}

void lik(const emlrtStack *sp, const d_captured_var *Xtrend, const
         d_captured_var *bsb, const captured_var *trend, const captured_var
         *seasonal, const captured_var *s, d_captured_var *yhatseaso, const
         d_captured_var *Xseaso, const captured_var *varampl, const
         d_captured_var *Seq, const captured_var *nexpl, const b_captured_var
         *isemptyX, const d_captured_var *X, const captured_var *lshiftYN, const
         d_captured_var *Xlshift, d_captured_var *yhat, const d_captured_var
         *yin, const emxArray_real_T *beta0)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *Xtre;
  emxArray_real_T *a;
  emxArray_real_T *b_beta0;
  emxArray_real_T *yhatlshift;
  emxArray_real_T *yhattrend;
  emxArray_uint32_T *r;
  real_T d;
  real_T d1;
  real_T npar;
  int32_T iv[2];
  int32_T b_Xtrend;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);

  /*  lik computes the objective function (residual sum of squares/2 = negative */
  /*  log likelihood) which must be minimized for the units specified inside */
  /*  global variable bsb. Note that given that yhat is global it is possible */
  /*  to call this function to compute fitted values for the units specified in bsb */
  npar = trend->contents + 1.0;
  if (1.0 > npar) {
    loop_ub = 0;
  } else {
    if (1 > beta0->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, beta0->size[0], &tj_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (npar != (int32_T)muDoubleScalarFloor(npar)) {
      emlrtIntegerCheckR2012b(npar, &og_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)npar < 1) || ((int32_T)npar > beta0->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)npar, 1, beta0->size[0],
        &uj_emlrtBCI, (emlrtCTX)sp);
    }

    loop_ub = (int32_T)npar;
  }

  emxInit_real_T(sp, &a, 2, &xm_emlrtRTEI, true);
  iv[0] = 1;
  iv[1] = loop_ub;
  st.site = &on_emlrtRSI;
  indexShapeCheck(&st, beta0->size[0], iv);
  st.site = &on_emlrtRSI;
  b_Xtrend = Xtrend->contents->size[0];
  b_loop_ub = Xtrend->contents->size[1];
  i = a->size[0] * a->size[1];
  a->size[0] = bsb->contents->size[0];
  a->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, a, i, &xm_emlrtRTEI);
  for (i = 0; i < b_loop_ub; i++) {
    c_loop_ub = bsb->contents->size[0];
    for (i1 = 0; i1 < c_loop_ub; i1++) {
      if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor(bsb->
           contents->data[i1])) {
        emlrtIntegerCheckR2012b(bsb->contents->data[i1], &xg_emlrtDCI, &st);
      }

      i2 = (int32_T)bsb->contents->data[i1];
      if ((i2 < 1) || (i2 > b_Xtrend)) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, b_Xtrend, &ek_emlrtBCI, &st);
      }

      a->data[i1 + a->size[0] * i] = Xtrend->contents->data[(i2 +
        Xtrend->contents->size[0] * i) - 1];
    }
  }

  b_st.site = &qj_emlrtRSI;
  if (a->size[1] != loop_ub) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (loop_ub == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &jb_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &ib_emlrtRTEI, "MATLAB:innerdim",
        "MATLAB:innerdim", 0);
    }
  }

  emxInit_real_T(&b_st, &b_beta0, 2, &ym_emlrtRTEI, true);
  i = b_beta0->size[0] * b_beta0->size[1];
  b_beta0->size[0] = 1;
  b_beta0->size[1] = loop_ub;
  emxEnsureCapacity_real_T(&st, b_beta0, i, &ym_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    b_beta0->data[i] = beta0->data[i];
  }

  emxInit_real_T(&st, &yhattrend, 1, &pn_emlrtRTEI, true);
  b_st.site = &pj_emlrtRSI;
  mtimes(&b_st, a, b_beta0, yhattrend);
  emxInit_real_T(sp, &Xtre, 1, &qn_emlrtRTEI, true);
  if (seasonal->contents > 0.0) {
    if (seasonal->contents < s->contents / 2.0) {
      emxInit_uint32_T(sp, &r, 2, &sn_emlrtRTEI, true);
      d = seasonal->contents * 2.0;
      i = r->size[0] * r->size[1];
      r->size[0] = 1;
      loop_ub = (int32_T)muDoubleScalarFloor(d - 1.0);
      r->size[1] = loop_ub + 1;
      emxEnsureCapacity_uint32_T(sp, r, i, &bn_emlrtRTEI);
      for (i = 0; i <= loop_ub; i++) {
        d1 = npar + ((real_T)i + 1.0);
        if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
          emlrtIntegerCheckR2012b(d1, &yg_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)(uint32_T)d1 < 1) || ((int32_T)(uint32_T)d1 > beta0->size
             [0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(uint32_T)d1, 1, beta0->size[0],
            &fk_emlrtBCI, (emlrtCTX)sp);
        }

        r->data[i] = (uint32_T)d1;
      }

      st.site = &pn_emlrtRSI;
      indexShapeCheck(&st, beta0->size[0], *(int32_T (*)[2])r->size);
      st.site = &pn_emlrtRSI;
      b_Xtrend = Xseaso->contents->size[0];
      loop_ub = Xseaso->contents->size[1];
      i = a->size[0] * a->size[1];
      a->size[0] = bsb->contents->size[0];
      a->size[1] = loop_ub;
      emxEnsureCapacity_real_T(&st, a, i, &dn_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = bsb->contents->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          if (bsb->contents->data[i1] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i1])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i1], &ah_emlrtDCI, &st);
          }

          i2 = (int32_T)bsb->contents->data[i1];
          if ((i2 < 1) || (i2 > b_Xtrend)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, b_Xtrend, &gk_emlrtBCI, &st);
          }

          a->data[i1 + a->size[0] * i] = Xseaso->contents->data[(i2 +
            Xseaso->contents->size[0] * i) - 1];
        }
      }

      b_st.site = &qj_emlrtRSI;
      if (a->size[1] != r->size[1]) {
        if (((a->size[0] == 1) && (a->size[1] == 1)) || (r->size[1] == 1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &jb_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &ib_emlrtRTEI, "MATLAB:innerdim",
            "MATLAB:innerdim", 0);
        }
      }

      i = b_beta0->size[0] * b_beta0->size[1];
      b_beta0->size[0] = 1;
      b_beta0->size[1] = r->size[1];
      emxEnsureCapacity_real_T(&st, b_beta0, i, &in_emlrtRTEI);
      loop_ub = r->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_beta0->data[i] = beta0->data[(int32_T)r->data[i] - 1];
      }

      emxFree_uint32_T(&r);
      b_st.site = &pj_emlrtRSI;
      mtimes(&b_st, a, b_beta0, yhatseaso->contents);
      npar += d;
    } else {
      d = seasonal->contents * 2.0;
      d1 = (npar + d) - 1.0;
      if (npar + 1.0 > d1) {
        i = -1;
        i1 = -1;
      } else {
        if (npar + 1.0 != (int32_T)muDoubleScalarFloor(npar + 1.0)) {
          emlrtIntegerCheckR2012b(npar + 1.0, &pg_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)(npar + 1.0) < 1) || ((int32_T)(npar + 1.0) > beta0->size
             [0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(npar + 1.0), 1, beta0->size[0],
            &vj_emlrtBCI, (emlrtCTX)sp);
        }

        i = (int32_T)(npar + 1.0) - 2;
        if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
          emlrtIntegerCheckR2012b(d1, &qg_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)d1 < 1) || ((int32_T)d1 > beta0->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d1, 1, beta0->size[0],
            &wj_emlrtBCI, (emlrtCTX)sp);
        }

        i1 = (int32_T)d1 - 1;
      }

      iv[0] = 1;
      loop_ub = i1 - i;
      iv[1] = loop_ub;
      st.site = &qn_emlrtRSI;
      indexShapeCheck(&st, beta0->size[0], iv);
      st.site = &qn_emlrtRSI;
      b_Xtrend = Xseaso->contents->size[0];
      b_loop_ub = Xseaso->contents->size[1];
      i1 = a->size[0] * a->size[1];
      a->size[0] = bsb->contents->size[0];
      a->size[1] = b_loop_ub;
      emxEnsureCapacity_real_T(&st, a, i1, &fn_emlrtRTEI);
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        c_loop_ub = bsb->contents->size[0];
        for (i2 = 0; i2 < c_loop_ub; i2++) {
          if (bsb->contents->data[i2] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i2])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i2], &bh_emlrtDCI, &st);
          }

          i3 = (int32_T)bsb->contents->data[i2];
          if ((i3 < 1) || (i3 > b_Xtrend)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, b_Xtrend, &hk_emlrtBCI, &st);
          }

          a->data[i2 + a->size[0] * i1] = Xseaso->contents->data[(i3 +
            Xseaso->contents->size[0] * i1) - 1];
        }
      }

      b_st.site = &qj_emlrtRSI;
      if (a->size[1] != loop_ub) {
        if (((a->size[0] == 1) && (a->size[1] == 1)) || (loop_ub == 1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &jb_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &ib_emlrtRTEI, "MATLAB:innerdim",
            "MATLAB:innerdim", 0);
        }
      }

      i1 = b_beta0->size[0] * b_beta0->size[1];
      b_beta0->size[0] = 1;
      b_beta0->size[1] = loop_ub;
      emxEnsureCapacity_real_T(&st, b_beta0, i1, &jn_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_beta0->data[i1] = beta0->data[(i + i1) + 1];
      }

      b_st.site = &pj_emlrtRSI;
      mtimes(&b_st, a, b_beta0, yhatseaso->contents);
      npar = (npar + d) - 1.0;
    }

    if (varampl->contents > 0.0) {
      d = varampl->contents + 1.0;
      if (2.0 > d) {
        i = 0;
        i1 = 0;
      } else {
        i = 1;
        if (d != (int32_T)muDoubleScalarFloor(d)) {
          emlrtIntegerCheckR2012b(d, &rg_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)d < 1) || ((int32_T)d > 4)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 4, &xj_emlrtBCI,
            (emlrtCTX)sp);
        }

        i1 = (int32_T)d;
      }

      d = (npar + 1.0) + nexpl->contents;
      npar += varampl->contents;
      d1 = npar + nexpl->contents;
      if (d > d1) {
        i2 = -1;
        i3 = -1;
      } else {
        if (d != (int32_T)muDoubleScalarFloor(d)) {
          emlrtIntegerCheckR2012b(d, &sg_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)d < 1) || ((int32_T)d > beta0->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, beta0->size[0],
            &yj_emlrtBCI, (emlrtCTX)sp);
        }

        i2 = (int32_T)d - 2;
        if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
          emlrtIntegerCheckR2012b(d1, &tg_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)d1 < 1) || ((int32_T)d1 > beta0->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d1, 1, beta0->size[0],
            &ak_emlrtBCI, (emlrtCTX)sp);
        }

        i3 = (int32_T)d1 - 1;
      }

      iv[0] = 1;
      loop_ub = i3 - i2;
      iv[1] = loop_ub;
      st.site = &rn_emlrtRSI;
      indexShapeCheck(&st, beta0->size[0], iv);
      st.site = &rn_emlrtRSI;
      b_Xtrend = Seq->contents->size[0];
      i3 = a->size[0] * a->size[1];
      a->size[0] = bsb->contents->size[0];
      b_loop_ub = i1 - i;
      a->size[1] = b_loop_ub;
      emxEnsureCapacity_real_T(&st, a, i3, &mn_emlrtRTEI);
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        c_loop_ub = bsb->contents->size[0];
        for (i3 = 0; i3 < c_loop_ub; i3++) {
          if (bsb->contents->data[i3] != (int32_T)muDoubleScalarFloor
              (bsb->contents->data[i3])) {
            emlrtIntegerCheckR2012b(bsb->contents->data[i3], &fh_emlrtDCI, &st);
          }

          i4 = (int32_T)bsb->contents->data[i3];
          if ((i4 < 1) || (i4 > b_Xtrend)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, b_Xtrend, &lk_emlrtBCI, &st);
          }

          a->data[i3 + a->size[0] * i1] = Seq->contents->data[(i4 +
            Seq->contents->size[0] * (i + i1)) - 1];
        }
      }

      b_st.site = &qj_emlrtRSI;
      if (a->size[1] != loop_ub) {
        if (((a->size[0] == 1) && (a->size[1] == 1)) || (loop_ub == 1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &jb_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &ib_emlrtRTEI, "MATLAB:innerdim",
            "MATLAB:innerdim", 0);
        }
      }

      i = b_beta0->size[0] * b_beta0->size[1];
      b_beta0->size[0] = 1;
      b_beta0->size[1] = loop_ub;
      emxEnsureCapacity_real_T(&st, b_beta0, i, &nn_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        b_beta0->data[i] = beta0->data[(i2 + i) + 1];
      }

      b_st.site = &pj_emlrtRSI;
      mtimes(&b_st, a, b_beta0, Xtre);
      loop_ub = Xtre->size[0];
      for (i = 0; i < loop_ub; i++) {
        Xtre->data[i]++;
      }

      i = yhatseaso->contents->size[0];
      if (Xtre->size[0] != i) {
        emlrtSizeEqCheck1DR2012b(Xtre->size[0], i, &dc_emlrtECI, (emlrtCTX)sp);
      }

      i = yhatseaso->contents->size[0];
      yhatseaso->contents->size[0] = Xtre->size[0];
      emxEnsureCapacity_real_T(sp, yhatseaso->contents, i, &on_emlrtRTEI);
      loop_ub = Xtre->size[0];
      for (i = 0; i < loop_ub; i++) {
        yhatseaso->contents->data[i] *= Xtre->data[i];
      }
    }
  }

  if (isemptyX->contents) {
    i = Xtre->size[0];
    Xtre->size[0] = 1;
    emxEnsureCapacity_real_T(sp, Xtre, i, &an_emlrtRTEI);
    Xtre->data[0] = 0.0;
  } else {
    /*  Note the order of coefficients is trend, linear part of */
    /*  seasonal component, expl variables, non linear part of */
    /*  seasonal component, level shift */
    d = (npar + 1.0) - varampl->contents;
    npar += nexpl->contents;
    d1 = npar - varampl->contents;
    if (d > d1) {
      i = -1;
      i1 = -1;
    } else {
      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &ug_emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)d < 1) || ((int32_T)d > beta0->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, beta0->size[0],
          &bk_emlrtBCI, (emlrtCTX)sp);
      }

      i = (int32_T)d - 2;
      if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
        emlrtIntegerCheckR2012b(d1, &vg_emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)d1 < 1) || ((int32_T)d1 > beta0->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d1, 1, beta0->size[0],
          &ck_emlrtBCI, (emlrtCTX)sp);
      }

      i1 = (int32_T)d1 - 1;
    }

    iv[0] = 1;
    loop_ub = i1 - i;
    iv[1] = loop_ub;
    st.site = &sn_emlrtRSI;
    indexShapeCheck(&st, beta0->size[0], iv);
    st.site = &sn_emlrtRSI;
    b_Xtrend = X->contents->size[0];
    b_loop_ub = X->contents->size[1];
    i1 = a->size[0] * a->size[1];
    a->size[0] = bsb->contents->size[0];
    a->size[1] = b_loop_ub;
    emxEnsureCapacity_real_T(&st, a, i1, &gn_emlrtRTEI);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      c_loop_ub = bsb->contents->size[0];
      for (i2 = 0; i2 < c_loop_ub; i2++) {
        if (bsb->contents->data[i2] != (int32_T)muDoubleScalarFloor
            (bsb->contents->data[i2])) {
          emlrtIntegerCheckR2012b(bsb->contents->data[i2], &dh_emlrtDCI, &st);
        }

        i3 = (int32_T)bsb->contents->data[i2];
        if ((i3 < 1) || (i3 > b_Xtrend)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, b_Xtrend, &jk_emlrtBCI, &st);
        }

        a->data[i2 + a->size[0] * i1] = X->contents->data[(i3 + X->
          contents->size[0] * i1) - 1];
      }
    }

    b_st.site = &qj_emlrtRSI;
    if (a->size[1] != loop_ub) {
      if (((a->size[0] == 1) && (a->size[1] == 1)) || (loop_ub == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &jb_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &ib_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    i1 = b_beta0->size[0] * b_beta0->size[1];
    b_beta0->size[0] = 1;
    b_beta0->size[1] = loop_ub;
    emxEnsureCapacity_real_T(&st, b_beta0, i1, &kn_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_beta0->data[i1] = beta0->data[(i + i1) + 1];
    }

    b_st.site = &pj_emlrtRSI;
    mtimes(&b_st, a, b_beta0, Xtre);
  }

  emxFree_real_T(&b_beta0);
  emxFree_real_T(&a);
  emxInit_real_T(sp, &yhatlshift, 1, &rn_emlrtRTEI, true);
  if (lshiftYN->contents == 1.0) {
    /*   \beta_(npar+1)* I(t \geq \beta_(npar+2)) where beta_(npar+1) */
    /*   is a real number and \beta_(npar+2) is a integer which */
    /*   denotes the period in which level shift shows up */
    st.site = &tn_emlrtRSI;
    c_indexShapeCheck(&st, *(int32_T (*)[2])Xlshift->contents->size,
                      bsb->contents->size[0]);
    if (npar + 1.0 != (int32_T)muDoubleScalarFloor(npar + 1.0)) {
      emlrtIntegerCheckR2012b(npar + 1.0, &wg_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)(npar + 1.0) < 1) || ((int32_T)(npar + 1.0) > beta0->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)(npar + 1.0), 1, beta0->size[0],
        &dk_emlrtBCI, (emlrtCTX)sp);
    }

    b_Xtrend = Xlshift->contents->size[0] * Xlshift->contents->size[1];
    i = yhatlshift->size[0];
    yhatlshift->size[0] = bsb->contents->size[0];
    emxEnsureCapacity_real_T(sp, yhatlshift, i, &en_emlrtRTEI);
    loop_ub = bsb->contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor(bsb->
           contents->data[i])) {
        emlrtIntegerCheckR2012b(bsb->contents->data[i], &ch_emlrtDCI, (emlrtCTX)
          sp);
      }

      i1 = (int32_T)bsb->contents->data[i];
      if ((i1 < 1) || (i1 > b_Xtrend)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, b_Xtrend, &ik_emlrtBCI, (emlrtCTX)
          sp);
      }

      yhatlshift->data[i] = Xlshift->contents->data[i1 - 1];
    }

    loop_ub = yhatlshift->size[0];
    for (i = 0; i < loop_ub; i++) {
      yhatlshift->data[i] *= beta0->data[(int32_T)(npar + 1.0) - 1];
    }
  } else {
    i = yhatlshift->size[0];
    yhatlshift->size[0] = 1;
    emxEnsureCapacity_real_T(sp, yhatlshift, i, &cn_emlrtRTEI);
    yhatlshift->data[0] = 0.0;
  }

  /*  Fitted values from trend (yhattrend), (time varying) seasonal */
  /*  (yhatseaso), explanatory variables (yhatX) and level shift */
  /*  component (yhatlshift) */
  i = yhatseaso->contents->size[0];
  if (yhattrend->size[0] != i) {
    emlrtSizeEqCheck1DR2012b(yhattrend->size[0], i, &ec_emlrtECI, (emlrtCTX)sp);
  }

  if (yhattrend->size[0] != Xtre->size[0]) {
    emlrtSizeEqCheck1DR2012b(yhattrend->size[0], Xtre->size[0], &ec_emlrtECI,
      (emlrtCTX)sp);
  }

  if (yhattrend->size[0] != yhatlshift->size[0]) {
    emlrtSizeEqCheck1DR2012b(yhattrend->size[0], yhatlshift->size[0],
      &ec_emlrtECI, (emlrtCTX)sp);
  }

  i = yhat->contents->size[0];
  yhat->contents->size[0] = yhattrend->size[0];
  emxEnsureCapacity_real_T(sp, yhat->contents, i, &hn_emlrtRTEI);
  loop_ub = yhattrend->size[0];
  for (i = 0; i < loop_ub; i++) {
    yhat->contents->data[i] = ((yhattrend->data[i] + yhatseaso->contents->data[i])
      + Xtre->data[i]) + yhatlshift->data[i];
  }

  emxFree_real_T(&yhatlshift);

  /*          % Additional regression due to the presence of the autoregressive */
  /*          % component */
  /*          if ARp>0 */
  /*              Yhatlagged=zeros(length(bsb),ARp); */
  /*              for jj=1:ARp */
  /*                  Yhatlagged(:,jj)=[NaN(jj,1); yhat(1:end-jj)]; */
  /*              end */
  /*              Yhatlagged=Yhatlagged(ARp+1:end,:); */
  /*              yinbsb=yin(bsb); */
  /*              blagged=Yhatlagged\yinbsb(ARp+1:end); */
  /*              yhat(ARp+1:end)=Yhatlagged*blagged; */
  /*          end */
  /*  obj = sum of squares of residuals/2 = negative log likelihood */
  b_Xtrend = yin->contents->size[0];
  i = Xtre->size[0];
  Xtre->size[0] = bsb->contents->size[0];
  emxEnsureCapacity_real_T(sp, Xtre, i, &ln_emlrtRTEI);
  loop_ub = bsb->contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (bsb->contents->data[i] != (int32_T)muDoubleScalarFloor(bsb->
         contents->data[i])) {
      emlrtIntegerCheckR2012b(bsb->contents->data[i], &eh_emlrtDCI, (emlrtCTX)sp);
    }

    i1 = (int32_T)bsb->contents->data[i];
    if ((i1 < 1) || (i1 > b_Xtrend)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, b_Xtrend, &kk_emlrtBCI, (emlrtCTX)sp);
    }

    Xtre->data[i] = yin->contents->data[i1 - 1];
  }

  i = yhat->contents->size[0];
  if (Xtre->size[0] != i) {
    emlrtSizeEqCheck1DR2012b(Xtre->size[0], i, &fc_emlrtECI, (emlrtCTX)sp);
  }

  i = yhattrend->size[0];
  yhattrend->size[0] = Xtre->size[0];
  emxEnsureCapacity_real_T(sp, yhattrend, i, &ln_emlrtRTEI);
  loop_ub = Xtre->size[0];
  for (i = 0; i < loop_ub; i++) {
    yhattrend->data[i] = Xtre->data[i] - yhat->contents->data[i];
  }

  st.site = &un_emlrtRSI;
  power(&st, yhattrend, Xtre);
  st.site = &un_emlrtRSI;
  sum(&st, Xtre);

  /*  format long */
  /*  disp(obj) */
  emxFree_real_T(&Xtre);
  emxFree_real_T(&yhattrend);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (LTSts.c) */
