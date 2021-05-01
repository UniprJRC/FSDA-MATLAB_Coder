/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSM_wrapper.c
 *
 * Code generation for function 'FSM_wrapper'
 *
 */

/* Include files */
#include "FSM_wrapper.h"
#include "FSM_wrapper_data.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_mexutil.h"
#include "FSM_wrapper_types.h"
#include "FSMbonfbound.h"
#include "FSMbsb.h"
#include "FSMenvmmd.h"
#include "FSMmmd.h"
#include "chkinputM.h"
#include "combineVectorElements.h"
#include "cov.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "eml_setop.h"
#include "error.h"
#include "ifWhileCond.h"
#include "int2str.h"
#include "mahalFS.h"
#include "mean.h"
#include "mtimes.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "sortrows.h"
#include "strcmp.h"
#include "unibiv.h"
#include "mwmathutil.h"
#include <string.h>

/* Type Definitions */
#ifndef struct_emxArray_char_T_1x310
#define struct_emxArray_char_T_1x310

struct emxArray_char_T_1x310
{
  char_T data[310];
  int32_T size[2];
};

#endif                                 /* struct_emxArray_char_T_1x310 */

#ifndef typedef_emxArray_char_T_1x310
#define typedef_emxArray_char_T_1x310

typedef struct emxArray_char_T_1x310 emxArray_char_T_1x310;

#endif                                 /* typedef_emxArray_char_T_1x310 */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 42,    /* lineNo */
  "FSM_wrapper",                       /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSM_wrapper.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 287, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 289, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 348, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 353, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 355, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 357, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 359, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 372, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 389, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 391, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 395, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 430, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 431, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 434, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 445, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 452, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 481, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 490, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 508, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 512, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 514, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 520, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 522, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 528, /* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 530,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 545,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 547,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 553,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 555,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 561,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 563,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 570,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 572,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 591,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 593,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 598,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 600,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 609,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 628,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 645,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 659,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 663,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 685,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 687,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 1063,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 1104,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 1112,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 1114,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 1121,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 1123,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 1270,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 1272,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 1278,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 1284,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 1288,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 1296,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 1309,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 1347,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 1357,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 1358,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 1359,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 1360,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 7,  /* lineNo */
  "ref/ref",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\ref.m"/* pathName */
};

static emlrtRSInfo rbb_emlrtRSI = { 19,/* lineNo */
  "setdiff",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\setdiff.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 422,   /* lineNo */
  5,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 423, /* lineNo */
  5,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 685, /* lineNo */
  17,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 1313,/* lineNo */
  9,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 1062,/* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 586, /* lineNo */
  17,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 1063,/* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 1307,/* lineNo */
  9,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 1308,/* lineNo */
  9,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 1309,/* lineNo */
  9,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo k_emlrtMCI = { 607, /* lineNo */
  17,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 591, /* lineNo */
  21,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 1322,/* lineNo */
  9,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 508, /* lineNo */
  21,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo o_emlrtMCI = { 1323,/* lineNo */
  9,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo p_emlrtMCI = { 598, /* lineNo */
  21,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo q_emlrtMCI = { 1327,/* lineNo */
  9,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo r_emlrtMCI = { 616, /* lineNo */
  17,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo s_emlrtMCI = { 617, /* lineNo */
  17,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo t_emlrtMCI = { 1332,/* lineNo */
  9,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo u_emlrtMCI = { 545, /* lineNo */
  25,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo v_emlrtMCI = { 512, /* lineNo */
  25,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo w_emlrtMCI = { 520, /* lineNo */
  25,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo x_emlrtMCI = { 528, /* lineNo */
  25,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo y_emlrtMCI = { 553, /* lineNo */
  25,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo ab_emlrtMCI = { 561,/* lineNo */
  25,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo bb_emlrtMCI = { 628,/* lineNo */
  25,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo cb_emlrtMCI = { 570,/* lineNo */
  25,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo db_emlrtMCI = { 1114,/* lineNo */
  25,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo eb_emlrtMCI = { 1115,/* lineNo */
  25,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo fb_emlrtMCI = { 676,/* lineNo */
  21,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo gb_emlrtMCI = { 1123,/* lineNo */
  25,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo hb_emlrtMCI = { 662,/* lineNo */
  25,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo ib_emlrtMCI = { 663,/* lineNo */
  25,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo jb_emlrtMCI = { 1296,/* lineNo */
  21,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo kb_emlrtMCI = { 1272,/* lineNo */
  21,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo lb_emlrtMCI = { 1273,/* lineNo */
  21,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo mb_emlrtMCI = { 484,/* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo nb_emlrtMCI = { 485,/* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo ob_emlrtMCI = { 1287,/* lineNo */
  21,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtMCInfo pb_emlrtMCI = { 1288,/* lineNo */
  21,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  1281,                                /* lineNo */
  29,                                  /* colNo */
  "gfind",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1345,                                /* lineNo */
  33,                                  /* colNo */
  "bb",                                /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 1345,  /* lineNo */
  33,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1284,                                /* lineNo */
  35,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 1284,/* lineNo */
  35,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1284,                                /* lineNo */
  33,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1284,                                /* lineNo */
  50,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1284,                                /* lineNo */
  41,                                  /* colNo */
  "gfind",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  1278,                                /* lineNo */
  41,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1278,                                /* lineNo */
  80,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1278,                                /* lineNo */
  66,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1278,                                /* lineNo */
  62,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1278,                                /* lineNo */
  55,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1278,                                /* lineNo */
  51,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1278,                                /* lineNo */
  47,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1278,                                /* lineNo */
  38,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1278,                                /* lineNo */
  34,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1278,                                /* lineNo */
  30,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  1270,                                /* lineNo */
  20,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1270,                                /* lineNo */
  61,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1270,                                /* lineNo */
  47,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1270,                                /* lineNo */
  42,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1270,                                /* lineNo */
  35,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1270,                                /* lineNo */
  31,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1270,                                /* lineNo */
  26,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1119,                                /* lineNo */
  54,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  1110,                                /* lineNo */
  27,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo e_emlrtRTEI = { 1102,/* lineNo */
  16,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  688,                                 /* lineNo */
  24,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  683,                                 /* lineNo */
  19,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  660,                                 /* lineNo */
  36,                                  /* colNo */
  "gval",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  660,                                 /* lineNo */
  34,                                  /* colNo */
  "gval",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  660,                                 /* lineNo */
  26,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  645,                                 /* lineNo */
  24,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  645,                                 /* lineNo */
  54,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  645,                                 /* lineNo */
  50,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  645,                                 /* lineNo */
  46,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  645,                                 /* lineNo */
  36,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  645,                                 /* lineNo */
  32,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  645,                                 /* lineNo */
  28,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  640,                                 /* lineNo */
  54,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  640,                                 /* lineNo */
  37,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  639,                                 /* lineNo */
  37,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  87,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  55,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  26,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  610,                                 /* lineNo */
  24,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  603,                                 /* lineNo */
  23,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  602,                                 /* lineNo */
  24,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  596,                                 /* lineNo */
  23,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  589,                                 /* lineNo */
  23,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  582,                                 /* lineNo */
  48,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  582,                                 /* lineNo */
  23,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  573,                                 /* lineNo */
  32,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  568,                                 /* lineNo */
  26,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  564,                                 /* lineNo */
  32,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  559,                                 /* lineNo */
  27,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  83,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  56,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  29,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  543,                                 /* lineNo */
  83,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  543,                                 /* lineNo */
  54,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  543,                                 /* lineNo */
  27,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  542,                                 /* lineNo */
  66,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  217,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  191,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  164,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  137,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  110,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  80,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  51,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  24,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  531,                                 /* lineNo */
  32,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  526,                                 /* lineNo */
  27,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  518,                                 /* lineNo */
  27,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  85,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  55,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  27,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  137,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  111,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  82,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  52,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  24,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  470,                                 /* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  470,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  470,                                 /* lineNo */
  19,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  469,                                 /* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  469,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  469,                                 /* lineNo */
  19,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  468,                                 /* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  468,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  468,                                 /* lineNo */
  19,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  467,                                 /* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  467,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  467,                                 /* lineNo */
  19,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  466,                                 /* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  466,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  466,                                 /* lineNo */
  19,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  373,                                 /* lineNo */
  18,                                  /* colNo */
  "fre",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 373, /* lineNo */
  18,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  373,                                 /* lineNo */
  16,                                  /* colNo */
  "fre",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo i_emlrtECI = { 2,   /* nDims */
  372,                                 /* lineNo */
  36,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  363,                                 /* lineNo */
  14,                                  /* colNo */
  "fre",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 363, /* lineNo */
  14,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  363,                                 /* lineNo */
  12,                                  /* colNo */
  "fre",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  342,                                 /* lineNo */
  11,                                  /* colNo */
  "m0",                                /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 372, /* lineNo */
  19,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  372,                                 /* lineNo */
  19,                                  /* colNo */
  "Y",                                 /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  372,                                 /* lineNo */
  42,                                  /* colNo */
  "Y",                                 /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 434, /* lineNo */
  28,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 434, /* lineNo */
  28,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  372,                                 /* lineNo */
  57,                                  /* colNo */
  "Y",                                 /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  683,                                 /* lineNo */
  13,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  683,                                 /* lineNo */
  22,                                  /* colNo */
  "bonfthresh",                        /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  582,                                 /* lineNo */
  17,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  582,                                 /* lineNo */
  26,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  685,                                 /* lineNo */
  42,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  687,                                 /* lineNo */
  41,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  582,                                 /* lineNo */
  42,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  582,                                 /* lineNo */
  51,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  18,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  27,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  18,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  27,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1303,                                /* lineNo */
  17,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  603,                                 /* lineNo */
  17,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  603,                                 /* lineNo */
  26,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  43,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  54,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  44,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  55,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  102,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  113,                                 /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  72,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  83,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo se_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  105,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  114,                                 /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  74,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ve_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  85,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo we_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  589,                                 /* lineNo */
  17,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  589,                                 /* lineNo */
  26,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ye_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  131,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo af_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  140,                                 /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  131,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  140,                                 /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo df_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  591,                                 /* lineNo */
  43,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ef_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  609,                                 /* lineNo */
  42,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ff_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  596,                                 /* lineNo */
  17,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  596,                                 /* lineNo */
  26,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  593,                                 /* lineNo */
  46,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo if_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  185,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  194,                                 /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  156,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  167,                                 /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  508,                                 /* lineNo */
  93,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  598,                                 /* lineNo */
  44,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo of_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  211,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  220,                                 /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  543,                                 /* lineNo */
  21,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  543,                                 /* lineNo */
  30,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  21,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  30,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  600,                                 /* lineNo */
  46,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  543,                                 /* lineNo */
  46,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  543,                                 /* lineNo */
  57,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  47,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  58,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ag_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  620,                                 /* lineNo */
  18,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  622,                                 /* lineNo */
  16,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  543,                                 /* lineNo */
  75,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  543,                                 /* lineNo */
  86,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  77,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  88,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  21,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  32,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ig_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  518,                                 /* lineNo */
  21,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  518,                                 /* lineNo */
  30,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  545,                                 /* lineNo */
  48,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  512,                                 /* lineNo */
  48,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  50,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ng_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  59,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo og_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  547,                                 /* lineNo */
  50,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  520,                                 /* lineNo */
  47,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  514,                                 /* lineNo */
  50,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  545,                                 /* lineNo */
  102,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  526,                                 /* lineNo */
  21,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  526,                                 /* lineNo */
  30,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ug_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  522,                                 /* lineNo */
  50,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  512,                                 /* lineNo */
  102,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  20,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  75,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ah_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  86,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  547,                                 /* lineNo */
  109,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ch_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  514,                                 /* lineNo */
  110,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  559,                                 /* lineNo */
  21,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  559,                                 /* lineNo */
  30,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  545,                                 /* lineNo */
  158,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  528,                                 /* lineNo */
  47,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  512,                                 /* lineNo */
  158,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ih_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1358,                                /* lineNo */
  12,                                  /* colNo */
  "Y",                                 /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 1358,/* lineNo */
  12,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1268,                                /* lineNo */
  13,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  47,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  58,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  553,                                 /* lineNo */
  49,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  547,                                 /* lineNo */
  168,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  530,                                 /* lineNo */
  50,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ph_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  514,                                 /* lineNo */
  172,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  561,                                 /* lineNo */
  48,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  555,                                 /* lineNo */
  50,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  79,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo th_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  90,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  563,                                 /* lineNo */
  50,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  553,                                 /* lineNo */
  105,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1359,                                /* lineNo */
  12,                                  /* colNo */
  "Y",                                 /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  640,                                 /* lineNo */
  28,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  568,                                 /* lineNo */
  20,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ai_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  568,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  555,                                 /* lineNo */
  109,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ci_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1345,                                /* lineNo */
  18,                                  /* colNo */
  "seq",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo di_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1110,                                /* lineNo */
  20,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ei_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1110,                                /* lineNo */
  30,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  628,                                 /* lineNo */
  116,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  553,                                 /* lineNo */
  159,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 1350,/* lineNo */
  11,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1350,                                /* lineNo */
  11,                                  /* colNo */
  "group",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ii_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  640,                                 /* lineNo */
  45,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ji_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  570,                                 /* lineNo */
  48,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ki_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  555,                                 /* lineNo */
  170,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo li_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  572,                                 /* lineNo */
  50,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1112,                                /* lineNo */
  48,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ni_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1348,                                /* lineNo */
  18,                                  /* colNo */
  "seq",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1119,                                /* lineNo */
  47,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1119,                                /* lineNo */
  57,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1121,                                /* lineNo */
  48,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ri_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1114,                                /* lineNo */
  82,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo si_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1123,                                /* lineNo */
  82,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ti_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  660,                                 /* lineNo */
  20,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ui_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  466,                                 /* lineNo */
  13,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  467,                                 /* lineNo */
  13,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  468,                                 /* lineNo */
  13,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  469,                                 /* lineNo */
  13,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  470,                                 /* lineNo */
  13,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo aj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1284,                                /* lineNo */
  55,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1285,                                /* lineNo */
  20,                                  /* colNo */
  "tr",                                /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  531,                                 /* lineNo */
  36,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  523,                                 /* lineNo */
  40,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ej_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  523,                                 /* lineNo */
  32,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  515,                                 /* lineNo */
  40,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  515,                                 /* lineNo */
  32,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  573,                                 /* lineNo */
  36,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ij_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  564,                                 /* lineNo */
  36,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  556,                                 /* lineNo */
  40,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  556,                                 /* lineNo */
  32,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  548,                                 /* lineNo */
  40,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  548,                                 /* lineNo */
  32,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  602,                                 /* lineNo */
  28,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  610,                                 /* lineNo */
  28,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  688,                                 /* lineNo */
  28,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ub_emlrtRTEI = { 289,/* lineNo */
  1,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 292,/* lineNo */
  1,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 330,/* lineNo */
  1,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 391,/* lineNo */
  25,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 389,/* lineNo */
  28,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 392,/* lineNo */
  5,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 389,/* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 363,/* lineNo */
  5,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 372,/* lineNo */
  17,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 442,/* lineNo */
  5,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 442,/* lineNo */
  34,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 373,/* lineNo */
  9,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 434,/* lineNo */
  28,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 439,/* lineNo */
  5,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 439,/* lineNo */
  44,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 434,/* lineNo */
  9,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 1353,/* lineNo */
  5,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 1348,/* lineNo */
  22,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 42,/* lineNo */
  9,                                   /* colNo */
  "FSM_wrapper",                       /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSM_wrapper.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 1345,/* lineNo */
  28,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 372,/* lineNo */
  36,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 1345,/* lineNo */
  22,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 1358,/* lineNo */
  10,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 1359,/* lineNo */
  10,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = { 1270,/* lineNo */
  20,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 1388,/* lineNo */
  1,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 1389,/* lineNo */
  1,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 1391,/* lineNo */
  1,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 645,/* lineNo */
  24,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 1278,/* lineNo */
  41,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 1278,/* lineNo */
  17,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 1281,/* lineNo */
  29,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 1284,/* lineNo */
  17,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 42,/* lineNo */
  13,                                  /* colNo */
  "FSM_wrapper",                       /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSM_wrapper.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 348,/* lineNo */
  6,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 431,/* lineNo */
  10,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 659,/* lineNo */
  18,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 1345,/* lineNo */
  9,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 1,/* lineNo */
  16,                                  /* colNo */
  "FSM_wrapper",                       /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSM_wrapper.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 1357,/* lineNo */
  1,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 1358,/* lineNo */
  1,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 467,/* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 468,/* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 469,/* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 470,/* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 466,/* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRSInfo xbb_emlrtRSI = { 1307,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo fcb_emlrtRSI = { 422,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo gcb_emlrtRSI = { 662,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo kcb_emlrtRSI = { 616,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo lcb_emlrtRSI = { 586,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ocb_emlrtRSI = { 1287,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo pcb_emlrtRSI = { 1322,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo qcb_emlrtRSI = { 1308,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo rcb_emlrtRSI = { 1273,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ycb_emlrtRSI = { 423,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo gdb_emlrtRSI = { 1332,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo hdb_emlrtRSI = { 1327,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo idb_emlrtRSI = { 1309,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo jdb_emlrtRSI = { 1288,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo kdb_emlrtRSI = { 1272,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ldb_emlrtRSI = { 1296,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo mdb_emlrtRSI = { 1115,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ndb_emlrtRSI = { 1114,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo odb_emlrtRSI = { 1123,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo pdb_emlrtRSI = { 1063,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo qdb_emlrtRSI = { 663,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo rdb_emlrtRSI = { 628,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo sdb_emlrtRSI = { 528,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo tdb_emlrtRSI = { 520,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo udb_emlrtRSI = { 512,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo vdb_emlrtRSI = { 508,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo wdb_emlrtRSI = { 570,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo xdb_emlrtRSI = { 561,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ydb_emlrtRSI = { 553,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo aeb_emlrtRSI = { 545,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo beb_emlrtRSI = { 598,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ceb_emlrtRSI = { 591,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo deb_emlrtRSI = { 685,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo eeb_emlrtRSI = { 484,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo feb_emlrtRSI = { 1313,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo geb_emlrtRSI = { 485,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo heb_emlrtRSI = { 607,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ieb_emlrtRSI = { 617,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo jeb_emlrtRSI = { 676,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo keb_emlrtRSI = { 1062,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo meb_emlrtRSI = { 1323,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

/* Function Declarations */
static const mxArray *ab_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [50]);
static const mxArray *bb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [37]);
static const mxArray *cb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [17]);
static const mxArray *db_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [16]);
static const mxArray *eb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [31]);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[28]);
static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [25]);
static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [20]);
static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [43]);
static const mxArray *k_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [26]);
static const mxArray *l_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [12]);
static const mxArray *m_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [40]);
static const mxArray *y_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [73]);

/* Function Definitions */
static const mxArray *ab_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [50])
{
  static const int32_T iv[2] = { 1, 50 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 50, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *bb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [37])
{
  static const int32_T iv[2] = { 1, 37 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 37, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *cb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [17])
{
  static const int32_T iv[2] = { 1, 17 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 17, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *db_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [16])
{
  static const int32_T iv[2] = { 1, 16 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 16, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *eb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [31])
{
  static const int32_T iv[2] = { 1, 31 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 31, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[28])
{
  static const int32_T iv[2] = { 1, 28 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 28, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [25])
{
  static const int32_T iv[2] = { 1, 25 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 25, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [20])
{
  static const int32_T iv[2] = { 1, 20 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 20, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [43])
{
  static const int32_T iv[2] = { 1, 43 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 43, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *k_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [26])
{
  static const int32_T iv[2] = { 1, 26 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 26, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *l_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [12])
{
  static const int32_T iv[2] = { 1, 12 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 12, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *m_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [40])
{
  static const int32_T iv[2] = { 1, 40 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 40, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *y_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [73])
{
  static const int32_T iv[2] = { 1, 73 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 73, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

void FSM_wrapper(FSM_wrapperStackData *SD, const emlrtStack *sp, const
                 emxArray_real_T *Y, const real_T bonflev_data[], const int32_T
                 bonflev_size[2], const char_T crit_data[], const int32_T
                 crit_size[2], real_T init, const emxArray_real_T *m0, boolean_T
                 msg, boolean_T nocheck, real_T rf, struct0_T *out)
{
  static const int32_T iv[5] = { 1, 99, 999, 9999, 99999 };

  static const char_T cv35[107] = { 'P', 'e', 'a', 'k', ' ', 'f', 'o', 'l', 'l',
    'o', 'w', 'e', 'd', ' ', 'b', 'y', ' ', 'd', 'i', 'p', ' ', '(', 'd', '_',
    'm', 'i', 'n', ' ', 'i', 's', ' ', 'a', 'b', 'o', 'v', 'e', ' ', '9', '9',
    '.', '9', '9', '%', ' ', 't', 'h', 'r', 'e', 's', 'h', 'o', 'l', 'd', ' ',
    'a', 'n', 'd', ' ', 'i', 'n', ' ', 't', 'h', 'e', ' ', 's', 'u', 'c', 'e',
    's', 's', 'i', 'v', 'e', ' ', '3', '0', ' ', 's', 't', 'e', 'p', 's', ' ',
    'g', 'o', 'e', 's', ' ', 'b', 'e', 'l', 'o', 'w', ' ', '1', '%', ' ', 'e',
    'n', 'v', 'e', 'l', 'o', 'p', 'e', ')' };

  static const char_T cv29[106] = { 'P', 'e', 'a', 'k', ' ', 'f', 'o', 'l', 'l',
    'o', 'w', 'e', 'd', ' ', 'b', 'y', ' ', 'd', 'i', 'p', ' ', '(', 'd', '_',
    'm', 'i', 'n', ' ', 'i', 's', ' ', 'a', 'b', 'o', 'v', 'e', ' ', '9', '9',
    '.', '9', '9', '%', ' ', 't', 'h', 'r', 'e', 's', 'h', 'o', 'l', 'd', ' ',
    'a', 'n', 'd', ' ', 'i', 'n', ' ', 't', 'h', 'e', ' ', 's', 'u', 'c', 'e',
    's', 's', 'i', 'v', 'e', ' ', '3', '0', ' ', 's', 't', 'e', 'p', 's', ' ',
    'g', 'o', 'e', 's', ' ', 'b', 'e', 'l', 'o', 'w', ' ', '1', '%', ' ', 'e',
    'n', 'v', 'e', 'l', 'o', 'p', 'e' };

  static const char_T cv22[86] = { ' ', 'u', 'n', 'i', 't', 's', ' ', 'i', 's',
    ' ', 'n', 'o', 't', ' ', 'h', 'o', 'm', 'o', 'g', 'e', 'n', 'e', 'o', 'u',
    's', ' ', 'b', 'e', 'c', 'a', 'u', 's', 'e', ' ', 't', 'h', 'e', ' ', 'c',
    'u', 'r', 'v', 'e', ' ', 'w', 'a', 's', ' ', 'a', 'b', 'o', 'v', 'e', ' ',
    '9', '9', '.', '9', '9', '%', ' ', 'a', 'n', 'd', ' ', 'l', 'a', 't', 'e',
    'r', ' ', 'i', 't', ' ', 'w', 'a', 's', ' ', 'b', 'e', 'l', 'o', 'w', ' ',
    '1', '%' };

  static const char_T cv33[74] = { '3', ' ', 'c', 'o', 'n', 's', 'e', 'c', 'u',
    't', 'i', 'v', 'e', ' ', 'v', 'a', 'l', 'u', 'e', 's', ' ', 'o', 'f', ' ',
    'd', '_', 'm', 'i', 'n', ' ', 'g', 'r', 'e', 'a', 't', 'e', 'r', ' ', 't',
    'h', 'a', 'n', ' ', '9', '9', '.', '9', '9', '9', '%', ' ', 'e', 'n', 'v',
    'e', 'l', 'o', 'p', 'e', ' ', 'i', 'n', ' ', 's', 't', 'e', 'p', ' ', 'm',
    'd', 'a', 'g', '=', ' ' };

  static const char_T cv31[73] = { ')', '>', '9', '9', '%', ' ', 'a', 't', ' ',
    'f', 'i', 'n', 'a', 'l', ' ', 's', 't', 'e', 'p', ':', ' ', 'B', 'o', 'n',
    'f', 'e', 'r', 'r', 'o', 'n', 'i', ' ', 's', 'i', 'g', 'n', 'a', 'l', ' ',
    'i', 'n', ' ', 't', 'h', 'e', ' ', 'c', 'e', 'n', 't', 'r', 'a', 'l', ' ',
    'p', 'a', 'r', 't', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 's', 'e', 'a',
    'r', 'c', 'h', '.' };

  static const char_T cv45[73] = { 'O', 'b', 's', 'e', 'r', 'v', 'e', 'd', ' ',
    'c', 'u', 'r', 'v', 'e', ' ', 'o', 'f', ' ', 'd', '_', 'm', 'i', 'n', ' ',
    'i', 's', ' ', 'a', 't', ' ', 'l', 'e', 'a', 's', 't', ' ', '1', '0', ' ',
    't', 'i', 'm', 'e', 's', ' ', 'g', 'r', 'e', 'a', 't', 'e', 'r', ' ', 't',
    'h', 'a', 'n', ' ', '9', '9', '.', '9', '9', '%', ' ', 'e', 'n', 'v', 'e',
    'l', 'o', 'p', 'e' };

  static const char_T cv26[71] = { ')', '>', '9', '9', '%', ' ', 'a', 't', ' ',
    'f', 'i', 'n', 'a', 'l', ' ', 's', 't', 'e', 'p', ':', ' ', 'B', 'o', 'n',
    'f', 'e', 'r', 'r', 'o', 'n', 'i', ' ', 's', 'i', 'g', 'n', 'a', 'l', ' ',
    'i', 'n', ' ', 't', 'h', 'e', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 'p', 'a',
    'r', 't', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 's', 'e', 'a', 'r', 'c',
    'h', '.' };

  static const char_T cv48[68] = { 'U', 's', 'i', 'n', 'g', ' ', 't', 'h', 'e',
    ' ', 'c', 'r', 'i', 't', 'e', 'r', 'i', 'o', 'n', ' ', 'o', 'f', ' ', 't',
    'h', 'e', ' ', 'm', 'a', 'x', 'i', 'm', 'u', 'm', ',', ' ', 't', 'h', 'e',
    ' ', 'g', 'r', 'o', 'u', 'p', ' ', 'o', 'f', ' ', 'h', 'o', 'm', 'o', 'g',
    'e', 'n', 'o', 'u', 's', ' ', 'o', 'b', 's', '.', ' ', 'i', 's', '=' };

  static const char_T b_cv12[55] = { 'T', 'e', 'n', 't', 'a', 't', 'i', 'v', 'e',
    ' ', 's', 'i', 'g', 'n', 'a', 'l', ' ', 'i', 'n', ' ', 'c', 'e', 'n', 't',
    'r', 'a', 'l', ' ', 'p', 'a', 'r', 't', ' ', 'o', 'f', ' ', 't', 'h', 'e',
    ' ', 's', 'e', 'a', 'r', 'c', 'h', ':', ' ', 's', 't', 'e', 'p', ' ', 'm',
    '=' };

  static const char_T b_cv2[50] = { 'S', 'a', 'm', 'p', 'l', 'e', ' ', 's', 'e',
    'e', 'm', 's', ' ', 'h', 'o', 'm', 'g', 'e', 'n', 'e', 'o', 'u', 's', ',',
    ' ', 'n', 'o', ' ', 'o', 'u', 't', 'l', 'i', 'e', 'r', ' ', 'h', 'a', 's',
    ' ', 'b', 'e', 'e', 'n', ' ', 'f', 'o', 'u', 'n', 'd' };

  static const char_T b_cv7[44] = { 'S', 't', 'a', 'r', 't', ' ', 'r', 'e', 's',
    'u', 'p', 'e', 'r', 'i', 'm', 'p', 'o', 's', 'i', 'n', 'g', ' ', 'e', 'n',
    'v', 'e', 'l', 'o', 'p', 'e', 's', ' ', 'f', 'r', 'o', 'm', ' ', 's', 't',
    'e', 'p', ' ', 'm', '=' };

  static const char_T b_cv11[43] = { 'S', 'i', 'g', 'n', 'a', 'l', ' ', 'i', 's',
    ' ', 'i', 'n', ' ', 'p', 'e', 'n', 'u', 'l', 't', 'i', 'm', 'a', 't', 'e',
    ' ', 's', 't', 'e', 'p', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 's', 'e',
    'a', 'r', 'c', 'h' };

  static const char_T cv47[41] = { 'P', 'r', 'o', 'b', 'a', 'b', 'l', 'y', ' ',
    't', 'h', 'e', 'r', 'e', ' ', 'a', 'r', 'e', ' ', 't', 'w', 'o', ' ', 'o',
    'v', 'e', 'r', 'l', 'a', 'p', 'p', 'i', 'n', 'g', ' ', 'g', 'r', 'o', 'u',
    'p', 's' };

  static const char_T cv23[40] = { 'S', 'u', 'p', 'e', 'r', 'i', 'm', 'p', 'o',
    's', 'i', 't', 'i', 'o', 'n', ' ', 's', 't', 'o', 'p', 'p', 'e', 'd', ' ',
    'b', 'e', 'c', 'a', 'u', 's', 'e', ' ', 'd', '_', '{', 'm', 'i', 'n', '}',
    '(' };

  static const char_T b_cv9[37] = { 'N', 'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f',
    ' ', 'u', 'n', 'i', 't', 's', ' ', 'd', 'e', 'c', 'l', 'a', 'r', 'e', 'd',
    ' ', 'a', 's', ' ', 'o', 'u', 't', 'l', 'i', 'e', 'r', 's', '=' };

  static const char_T cv16[37] = { 'S', 'i', 'g', 'n', 'a', 'l', ' ', 'i', 's',
    ' ', 'i', 'n', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 's', 't', 'e', 'p', ' ',
    'o', 'f', ' ', 't', 'h', 'e', ' ', 's', 'e', 'a', 'r', 'c', 'h' };

  static const char_T b_cv4[26] = { 'S', 'u', 'm', 'm', 'a', 'r', 'y', ' ', 'o',
    'f', ' ', 't', 'h', 'e', ' ', 'e', 'x', 'c', 'e', 'e', 'd', 'a', 'n', 'c',
    'e', 's' };

  static const char_T b_cv10[22] = { ')', '>', '9', '9', '%', ' ', 'B', 'o', 'n',
    'f', 'e', 'r', 'r', 'o', 'n', 'i', ' ', 'l', 'e', 'v', 'e', 'l' };

  static const char_T b_cv1[21] = { 'S', 'i', 'g', 'n', 'a', 'l', ' ', 'd', 'e',
    't', 'e', 'c', 't', 'i', 'o', 'n', ' ', 'l', 'o', 'o', 'p' };

  static const char_T cv24[21] = { ' ', 'u', 'n', 'i', 't', 's', ' ', 'i', 's',
    ' ', 'h', 'o', 'm', 'o', 'g', 'e', 'n', 'e', 'o', 'u', 's' };

  static const char_T cv39[20] = { 'f', 'a', 'l', 's', 'e', ' ', 's', 'i', 'g',
    'n', 'a', 'l', ' ', 'i', 'n', ' ', 's', 't', 'e', 'p' };

  static const char_T cv37[18] = { ')', '>', '9', '9', '.', '9', '9', '%', ' ',
    'a', 'n', 'd', ' ', 'd', 'm', 'i', 'n', '(' };

  static const char_T cv42[18] = { ')', '>', '9', '9', '.', '9', '9', '%', ' ',
    'a', 'n', 'd', ' ', 'r', 'm', 'i', 'n', '(' };

  static const char_T cv14[17] = { 'S', 'i', 'g', 'n', 'a', 'l', ' ', 'v', 'a',
    'l', 'i', 'd', 'a', 't', 'i', 'o', 'n' };

  static const char_T cv36[17] = { ')', '>', '9', '9', '.', '9', '%', ' ', 'a',
    'n', 'd', ' ', 'd', 'm', 'i', 'n', '(' };

  static const char_T cv41[17] = { ')', '>', '9', '9', '.', '9', '%', ' ', 'a',
    'n', 'd', ' ', 'r', 'm', 'i', 'n', '(' };

  static const char_T cv19[16] = { ')', '>', '9', '9', '$', '\\', '%', ' ', 'e',
    'n', 'v', 'e', 'l', 'o', 'p', 'e' };

  static const char_T cv28[16] = { ')', '>', '9', '9', '.', '9', '%', ' ', 'e',
    'n', 'v', 'e', 'l', 'o', 'p', 'e' };

  static const char_T cv32[16] = { 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'd',
    ' ', 's', 'i', 'g', 'n', 'a', 'l' };

  static const char_T cv30[14] = { ')', '>', '9', '9', '%', ' ', 'e', 'n', 'v',
    'e', 'l', 'o', 'p', 'e' };

  static const char_T cv34[14] = { 'E', 'x', 't', 'r', 'e', 'm', 'e', ' ', 's',
    'i', 'g', 'n', 'a', 'l' };

  static const char_T cv21[13] = { 'S', 'u', 'b', 's', 'a', 'm', 'p', 'l', 'e',
    ' ', 'o', 'f', ' ' };

  static const char_T b_cv6[12] = { 'F', 'i', 'n', 'a', 'l', ' ', 'o', 'u', 't',
    'p', 'u', 't' };

  static const char_T cv17[9] = { '$', 'd', '_', '{', 'm', 'i', 'n', '}', '(' };

  static const char_T cv27[9] = { ')', '>', '9', '9', '.', '9', '9', '9', '%' };

  static const char_T b_cv8[8] = { '$', 'd', '_', 'm', 'i', 'n', '$', '(' };

  static const char_T cv15[8] = { ' ', 'b', 'e', 'c', 'a', 'u', 's', 'e' };

  static const char_T cv44[8] = { ')', '>', '9', '9', '.', '9', '9', '%' };

  static const char_T cv20[7] = { ')', '>', '9', '9', '.', '9', '%' };

  static const char_T cv38[6] = { 'd', 'r', 'm', 'i', 'n', '(' };

  static const char_T cv18[5] = { 'd', 'm', 'i', 'n', '(' };

  static const char_T cv40[5] = { 'm', 'd', 'a', 'g', '=' };

  static const char_T cv43[5] = { ')', '>', '9', '9', '%' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack st;
  emxArray_boolean_T b_bonflev_data;
  emxArray_boolean_T *r;
  emxArray_boolean_T *x;
  emxArray_char_T_1x310 reb_emlrtRSI;
  emxArray_int32_T *ia;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_int32_T *r6;
  emxArray_real_T d_bonflev_data;
  emxArray_real_T e_bonflev_data;
  emxArray_real_T *a__1;
  emxArray_real_T *b;
  emxArray_real_T *b_Y;
  emxArray_real_T *b_m0;
  emxArray_real_T *bb;
  emxArray_real_T *c_Y;
  emxArray_real_T *c_m0;
  emxArray_real_T *fre;
  emxArray_real_T *gbonf;
  emxArray_real_T *gfind;
  emxArray_real_T *gmin;
  emxArray_real_T *gmin1;
  emxArray_real_T *goodobs;
  emxArray_real_T *gval;
  emxArray_real_T *loc;
  emxArray_real_T *outliers;
  emxArray_real_T *seq;
  real_T b_tmp;
  real_T d;
  real_T incre;
  real_T init_contents;
  real_T ndecl;
  int32_T b_bonflev_size[2];
  int32_T b_tmp_size[2];
  int32_T c_tmp_size[2];
  int32_T d_tmp_size[2];
  int32_T e_tmp_size[2];
  int32_T extram2_size[2];
  int32_T extram3_size[2];
  int32_T f_tmp_size[2];
  int32_T g_tmp_size[2];
  int32_T h_tmp_size[2];
  int32_T i_tmp_size[2];
  int32_T j_tmp_size[2];
  int32_T k_tmp_size[2];
  int32_T l_tmp_size[2];
  int32_T m_tmp_size[2];
  int32_T mes_size[2];
  int32_T n_tmp_size[2];
  int32_T o_tmp_size[2];
  int32_T out_size[2];
  int32_T p_tmp_size[2];
  int32_T q_tmp_size[2];
  int32_T r_tmp_size[2];
  int32_T s_tmp_size[2];
  int32_T t_tmp_size[2];
  int32_T tmp_size[2];
  int32_T u_tmp_size[2];
  int32_T v_tmp_size[2];
  int32_T a;
  int32_T b_i;
  int32_T b_signal;
  int32_T c001;
  int32_T c99;
  int32_T c999;
  int32_T c9999;
  int32_T c99999;
  int32_T c_i;
  int32_T exitg1;
  int32_T i;
  int32_T i1;
  int32_T idx;
  int32_T irank;
  int32_T k;
  int32_T loop_ub;
  int32_T n;
  int32_T sto;
  int32_T v;
  uint32_T uv[31];
  uint32_T uv1[10];
  uint32_T ii;
  char_T t_tmp_data[1012];
  char_T v_tmp_data[1008];
  char_T s_tmp_data[1007];
  char_T l_tmp_data[677];
  char_T m_tmp_data[675];
  char_T mes_data[648];
  char_T j_tmp_data[409];
  char_T p_tmp_data[399];
  char_T k_tmp_data[397];
  char_T u_tmp_data[384];
  char_T y_tmp_data[378];
  char_T f_tmp_data[373];
  char_T c_tmp_data[354];
  char_T d_tmp_data[351];
  char_T e_tmp_data[347];
  char_T i_tmp_data[344];
  char_T h_tmp_data[335];
  char_T g_tmp_data[333];
  char_T w_tmp_data[315];
  char_T b_tmp_data[310];
  char_T n_tmp_data[310];
  char_T o_tmp_data[310];
  char_T q_tmp_data[310];
  char_T r_tmp_data[310];
  char_T tmp_data[310];
  char_T extram2_data[107];
  char_T cv46[50];
  char_T cv25[40];
  char_T b_cv3[31];
  char_T b_cv5[28];
  char_T b_cv[25];
  char_T b_cv13[19];
  char_T extram3_data[14];
  int8_T x_tmp_data[5];
  boolean_T b_x[31];
  boolean_T out_data[5];
  boolean_T NoFalseSig;
  boolean_T b_b;
  boolean_T b_guard1 = false;
  boolean_T c_bonflev_data;
  boolean_T exitg2;
  boolean_T exitg3;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T guard5 = false;
  boolean_T guard6 = false;
  boolean_T guard7 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_Y, 2, &gd_emlrtRTEI, true);

  /*  Wrapper function for LXS (when lms is a scalar). NV pair names are not taken as */
  /*  inputs. Instead, just the values are taken as inputs. */
  /*  Y: an array of doubles of any dimensions */
  /*  Optional input arguments (name / pairs) in (case insensitive) */
  /*  alphabetical order */
  /*  bonflev a scalar double or an empty value */
  /*  crit a char */
  /*  this char can only contain  */
  /*  'md'  'biv', 'uni' */
  /*  init a scalar double */
  /*  m0 a scalar/vector of any length (but smaller length(y)) double */
  /*  msg is a boolean */
  /*  nocheck is a boolean */
  /*  rf: a scalar of type double */
  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &nc_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &nc_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &nc_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &nc_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &nc_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &nc_emlrtRSI;

  /* FSM computes forward search estimator in multivariate analysis */
  /*  */
  /* <a href="matlab: docsearchFS('FSM')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  Y :           Input data. Matrix. */
  /*                n x v data matrix; n observations and v variables. Rows of */
  /*                Y represent observations, and columns represent variables. */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  */
  /*       bonflev  : option that might be used to identify extreme outliers */
  /*                  when the distribution of the data is strongly non normal. */
  /*                  Scalar. */
  /*                  In these circumstances, the general signal detection rule based on */
  /*                  consecutive exceedances cannot be used. In this case */
  /*                  bonflev can be: */
  /*                  - a scalar smaller than 1, which specifies the confidence */
  /*                    level for a signal and a stopping rule based on the */
  /*                    comparison of the minimum deletion residual with a */
  /*                    Bonferroni bound. For example if bonflev=0.99 the */
  /*                    procedure stops when the trajectory exceeds for the */
  /*                    first time the 99% bonferroni bound. */
  /*                  - A scalar value greater than 1. In this case the */
  /*                    procedure stops when the residual trajectory exceeds */
  /*                    for the first time this value. */
  /*                  Default value is ' ', which means to rely on general rules */
  /*                  based on consecutive exceedances. */
  /*                  Example - 'bonflev',0.7 */
  /*                  Data Types - double */
  /*  */
  /*  */
  /*        crit    : It specified the criterion to be used to */
  /*                  initialize the search. Character. */
  /*                  if crit='md' the units which form initial subset are */
  /*                   those which have the smallest m0 pseudo Mahalanobis */
  /*                   distances computed using procedure unibiv (bivariate */
  /*                   robust ellipses). */
  /*                  if crit='biv' sorting is done first in */
  /*                   terms of times units fell outside robust bivariate */
  /*                   ellipses and then in terms of pseudoMD. In other words, */
  /*                   the units forming initial subset are chosen first among */
  /*                   the set of those which never fell outside robust */
  /*                   bivariate ellipses then among those which fell only once */
  /*                   outside bivariate ellipses ... up to reach m0. */
  /*                  if crit='uni' sorting is done first in */
  /*                   terms of times units fell outside univariate boxplots */
  /*                   and then in terms of pseudoMD. In other words, */
  /*                   the units forming initial subset are chosen first among */
  /*                   the set of those which never fell outside */
  /*                   univariate boxplots then among those which fell only once */
  /*                   outside univariate boxplots... up to reach m0. */
  /*                Example - 'crit','md' */
  /*                Data Types - char */
  /*                  Remark: as the user can see the starting point of the */
  /*                  search is not going to affect at all the results of the */
  /*                  analysis. The user can explore this point with his own */
  /*                  datasets. */
  /*                  Remark: if crit='biv' the user can also supply in scalar rf */
  /*                  (see below) the confidence level of the bivariate */
  /*                  ellipses. */
  /*  */
  /*        init    : Point where to start monitoring required diagnostics. Scalar. */
  /*                  Note that if bsb is suppliedinit>=length(bsb). If init is not */
  /*                  specified it will be set equal to floor(n*0.6). */
  /*                  Example - 'init',50 */
  /*                  Data Types - double */
  /*  */
  /*           m0   : Initial subset size or vector which contains the list of */
  /*                  the units forming initial subset. Scalar or vector. */
  /*                  The default is to start the search with v+1 units which */
  /*                  consisting of those observations which are not outlying */
  /*                  on any scatterplot, found as the intersection of all */
  /*                  points lying within a robust contour containing a */
  /*                  specified portion of the data (Riani and Zani 1997) and */
  /*                  inside the univariate boxplot. Remark: if m0 is a vector */
  /*                  option below crit is ignored. */
  /*                  Example - 'm0',5 */
  /*                  Data Types - double */
  /*  */
  /*        msg     : It controls whether to display or not messages */
  /*                  on the screen. Boolean. */
  /*                  If msg==1 (default) messages about the progression of the */
  /*                  search are displayed on the screen otherwise only error */
  /*                  messages will be displayed. */
  /*                  Example - 'msg',0 */
  /*                  Data Types - logical */
  /*  */
  /*    nocheck     : It controls whether to perform checks on matrix Y.Scalar. */
  /*                  If nocheck is equal to 1 no check is performed. */
  /*                  As default nocheck=0. */
  /*                  Example - 'nocheck',1 */
  /*                  Data Types - double */
  /*  */
  /*         rf     : confidence level for bivariate ellipses. Scalar. The default is */
  /*                  0.95. This option is useful only if crit='biv'. */
  /*                  Example - 'rf',0.9 */
  /*                  Data Types - double */
  /*  */
  /*        plots   : plot of minimum Mahalanobis distance. */
  /*                  Scalar or structure. If plots is a missing value or is a */
  /*                  scalar equal to 0 no plot is produced. */
  /*                  If plots is a scalar equal to 1 (default) the plot */
  /*                  of minimum MD with envelopes based on n observations and */
  /*                  the scatterplot matrix with the outliers highlighted is */
  /*                  produced. */
  /*                  If plots is a scalar equal to 2 the additional plots of */
  /*                  envelope resuperimposition are */
  /*                  produced. */
  /*                  If plots is a structure it may contain the following fields: */
  /*                    plots.ylim = vector with two elements controlling minimum and maximum */
  /*                        on the y axis. Default value is '' (automatic */
  /*                        scale); */
  /*                    plots.xlim = vector with two elements controlling minimum and maximum */
  /*                        on the x axis. Default value is '' (automatic */
  /*                        scale); */
  /*                    plots.resuper = vector which specifies for which steps it is */
  /*                        necessary to show the plots of resuperimposed envelopes */
  /*                        if resuper is not supplied a plot of each step in which the */
  /*                        envelope is resuperimposed is shown. Example if resuper =[85 87] */
  /*                        plots of resuperimposedenvelopes are shown at steps */
  /*                        m=85 and m=87; */
  /*                    plots.ncoord = scalar. If ncoord=1 plots are shown in normal */
  /*                        coordinates else (default) plots are shown in */
  /*                        traditional mmd coordinates; */
  /*                    plots.labeladd = If this option is '1', the outliers in the */
  /*                        spm are labelled with the unit row index. The */
  /*                        default value is labeladd='', i.e. no label is */
  /*                        added; */
  /*                    plots.nameY = cell array of strings containing the labels of */
  /*                        the variables. As default value, the labels which are */
  /*                        added are Y1, ...Yv; */
  /*                    plots.lwd =  Scalar which controls line width of the curve which */
  /*                        contains the monitoring of minimum Mahalanobis */
  /*                        distance. Default line of lwd=2. */
  /*                    plots.lwdenv = Scalar which controls linewidth of the */
  /*                        envelopes. Default value of lwdenv=2. */
  /*                Example - 'plots',2 */
  /*                Data Types - double */
  /*  */
  /*  */
  /*  Output: */
  /*  */
  /*          out:   structure which contains the following fields */
  /*  */
  /* out.outliers=  k x 1 vector containing the list of the units declared as */
  /*                outliers or NaN if the sample is homogeneous */
  /*  out.mmd    =  (n-init) x 2 matrix. */
  /*                1st col = fwd search index; */
  /*                2nd col = value of minimum Mahalanobis Distance in each step */
  /*                of the fwd search. */
  /*  out.Un     =  (n-init) x 11 Matrix which contains the unit(s) included */
  /*                in the subset at each step of the fwd search. */
  /*                REMARK: in every step the new subset is compared with the */
  /*                old subset. Un contains the unit(s) present in the new */
  /*                subset but not in the old one. Un(1,2) for example */
  /*                contains the unit included in step init+1. Un(end,2) */
  /*                contains the units included in the final step of the search. */
  /*  out.nout    = 2 x 5 matrix containing the number of times mmd went out */
  /*                of particular quantiles. */
  /*                First row contains quantiles 1 99 99.9 99.99 99.999 per cent; */
  /*                Second row contains the frequency distribution. It is NaN */
  /*                if bonflev threshold is used. */
  /*  out.loc     = 1 x v  vector containing location of the data. */
  /*  out.cov     = v x v robust estimate of covariance matrix. */
  /*  out.md      = n x 1 vector containing the estimates of the robust */
  /*                Mahalanobis distances (in squared units). This vector */
  /*                contains the distances of each observation from the */
  /*                location of the data, relative to the scatter matrix cov. */
  /*  out.class  =  'FSM'. */
  /*  */
  /*  */
  /*  See also: FSMeda, unibiv.m, FSMmmd.m */
  /*  */
  /*  References: */
  /*  */
  /*  Riani, M., Atkinson, A.C. and Cerioli, A. (2009), Finding an unknown */
  /*  number of multivariate outliers, "Journal of the Royal Statistical */
  /*  Society Series B", Vol. 71, pp. 201-221. */
  /*  Cerioli, A., Farcomeni, A. and Riani M. (2014), Strong consistency and */
  /*  robustness of the Forward Search estimator of multivariate location */
  /*  and scatter, "Journal of Multivariate Analysis", Vol. 126, */
  /*  pp. 167-183, http://dx.doi.org/10.1016/j.jmva.2013.12.010 */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSM')">Link to the help page for this function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     %% FSM with all default options. */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; Ycont(1:5,[1,3]) = Ycont(1:5,[1,3])+sign(randn(5,2))*4.5; */
  /*     [out]=FSM(Ycont); */
  /*     title('Outliers detected by FSM','Fontsize',24,'Interpreter','LaTex'); */
  /* } */
  /* { */
  /*     %% FSM with optional arguments. */
  /*     % FSM with plots showing envelope superimposition. */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+3; */
  /*     [out]=FSM(Ycont,'plots',2); */
  /* } */
  /* { */
  /*     %% FSM with plots showing envelope superimposition in normal */
  /*     % coordinates. */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+3; */
  /*     plots=struct; */
  /*     plots.ncoord=1; */
  /*     [out]=FSM(Ycont,'plots',plots); */
  /* } */
  /* { */
  /*     % Monitor the exceedances from m=200 without showing plots. */
  /*     n=1000; */
  /*     v=10; */
  /*     Y=randn(n,v); */
  /*     [out]=FSM(Y,'init',200,'plots',0); */
  /* } */
  /* { */
  /*     % Choosing an initial subset formed by the three observations with */
  /*     % the smallest Mahalanobis Distance. */
  /*     n=100; */
  /*     v=3; */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+3; */
  /*     [out]=FSM(Ycont,'m0',5,'crit','md'); */
  /* } */
  /* { */
  /*     % Forgery Swiss banknotes examples. */
  /*  */
  /*     load('swiss_banknotes'); */
  /*     Y=swiss_banknotes{:,:}; */
  /*     % Monitor the exceedances of Minimum Mahalanobis Distance */
  /*     [out]=FSM(Y(101:200,:),'plots',1); */
  /*  */
  /*     % Control minimum and maximum on the x axis */
  /*     plots=struct; */
  /*     plots.xlim=[60 90]; */
  /*     [out]=FSM(Y(101:200,:),'plots',plots); */
  /*  */
  /*     % Monitor the exceedances of Minimum Mahalanobis Distance using normal coordinates for mmd. */
  /*     plots.ncoord=1; */
  /*     [out]=FSM(Y(101:200,:),'plots',plots); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  /* chkinputM does not do any check if option nocheck=1 */
  i = b_Y->size[0] * b_Y->size[1];
  b_Y->size[0] = Y->size[0];
  b_Y->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(&st, b_Y, i, &ub_emlrtRTEI);
  loop_ub = Y->size[0] * Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_Y->data[i] = Y->data[i];
  }

  emxInit_real_T(&st, &loc, 2, &nd_emlrtRTEI, true);
  b_st.site = &c_emlrtRSI;
  chkinputM(&b_st, b_Y, nocheck);
  v = b_Y->size[1];
  n = b_Y->size[0];
  if (b_Y->size[0] < 1) {
    loc->size[0] = 1;
    loc->size[1] = 0;
  } else {
    i = loc->size[0] * loc->size[1];
    loc->size[0] = 1;
    loc->size[1] = b_Y->size[0];
    emxEnsureCapacity_real_T(&st, loc, i, &vb_emlrtRTEI);
    loop_ub = b_Y->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      loc->data[i] = (real_T)i + 1.0;
    }
  }

  emxInit_real_T(&st, &seq, 1, &wb_emlrtRTEI, true);
  i = seq->size[0];
  seq->size[0] = loc->size[1];
  emxEnsureCapacity_real_T(&st, seq, i, &wb_emlrtRTEI);
  loop_ub = loc->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq->data[i] = loc->data[i];
  }

  emxInit_real_T(&st, &b_m0, 1, &xb_emlrtRTEI, true);

  /*  Write in structure 'options' the options chosen by the user */
  init_contents = init;
  i = b_m0->size[0];
  b_m0->size[0] = m0->size[0];
  emxEnsureCapacity_real_T(&st, b_m0, i, &xb_emlrtRTEI);
  loop_ub = m0->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_m0->data[i] = m0->data[i];
  }

  /*  fsizeannot is a scalar which Font Size of the annotations which are */
  /*  shown on the screen */
  /*  Start of the forward search */
  emxInit_real_T(&st, &goodobs, 2, &md_emlrtRTEI, true);
  emxInit_real_T(&st, &c_Y, 2, &fc_emlrtRTEI, true);
  if (m0->size[0] <= 1) {
    /*  m0(1) necessary for MATLAB C coder */
    if (1 > m0->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, m0->size[0], &qd_emlrtBCI, &st);
    }

    emxInit_real_T(&st, &fre, 2, &hd_emlrtRTEI, true);

    /*  Confidence level for robust bivariate ellipses */
    /*  Find initial subset to initialize the search */
    b_st.site = &d_emlrtRSI;
    unibiv(SD, &b_st, b_Y, rf, fre);
    if (b_strcmp(crit_data, crit_size)) {
      /*  The user has chosen to select the intial subset according to the */
      /*  smallest m0 pseudo MD Select only the potential bivariate outliers */
      b_st.site = &e_emlrtRSI;
      sortrows(&b_st, fre);
    } else if (c_strcmp(crit_data, crit_size)) {
      b_st.site = &f_emlrtRSI;
      b_sortrows(&b_st, fre);
    } else if (d_strcmp(crit_data, crit_size)) {
      b_st.site = &g_emlrtRSI;
      c_sortrows(&b_st, fre);
    } else {
      b_st.site = &h_emlrtRSI;
      b_error(&b_st);
    }

    /*  initial subset */
    if (1.0 > m0->data[0]) {
      loop_ub = 0;
    } else {
      if (1 > fre->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, fre->size[0], &pd_emlrtBCI, &st);
      }

      if (m0->data[0] != (int32_T)muDoubleScalarFloor(m0->data[0])) {
        emlrtIntegerCheckR2012b(m0->data[0], &d_emlrtDCI, &st);
      }

      if (((int32_T)m0->data[0] < 1) || ((int32_T)m0->data[0] > fre->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)m0->data[0], 1, fre->size[0],
          &od_emlrtBCI, &st);
      }

      loop_ub = (int32_T)m0->data[0];
    }

    i = b_m0->size[0];
    b_m0->size[0] = loop_ub;
    emxEnsureCapacity_real_T(&st, b_m0, i, &ec_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      b_m0->data[i] = fre->data[i];
    }

    /*  the subset need to be incremented if it is not full rank. We also */
    /*  treat the unfortunate case when the rank of the matrix is v but a */
    /*  column is constant. */
    incre = 1.0;

    /* the second condition is added to treat subset with a constant */
    /* variable. This situation does not decrease the rank of Y, but it */
    /* decreases the rank of ym (i.e. Y-mean(Y)) inside FSMmmd. */
    loop_ub = b_Y->size[1];
    do {
      exitg1 = 0;
      b_st.site = &i_emlrtRSI;
      irank = b_m0->size[0];
      for (i = 0; i < irank; i++) {
        if (b_m0->data[i] != (int32_T)muDoubleScalarFloor(b_m0->data[i])) {
          emlrtIntegerCheckR2012b(b_m0->data[i], &e_emlrtDCI, &b_st);
        }

        i1 = (int32_T)b_m0->data[i];
        if ((i1 < 1) || (i1 > b_Y->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, b_Y->size[0], &rd_emlrtBCI, &b_st);
        }
      }

      i = c_Y->size[0] * c_Y->size[1];
      c_Y->size[0] = b_m0->size[0];
      c_Y->size[1] = loop_ub;
      emxEnsureCapacity_real_T(&b_st, c_Y, i, &fc_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        irank = b_m0->size[0];
        for (i1 = 0; i1 < irank; i1++) {
          c_Y->data[i1 + c_Y->size[0] * i] = b_Y->data[((int32_T)b_m0->data[i1]
            + b_Y->size[0] * i) - 1];
        }
      }

      c_st.site = &ee_emlrtRSI;
      irank = local_rank(&c_st, c_Y);
      guard1 = false;
      if (irank < v) {
        guard1 = true;
      } else {
        b_st.site = &i_emlrtRSI;
        irank = b_m0->size[0];
        for (i = 0; i < irank; i++) {
          i1 = (int32_T)b_m0->data[i];
          if ((i1 < 1) || (i1 > b_Y->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, b_Y->size[0], &sd_emlrtBCI,
              &b_st);
          }
        }

        c_st.site = &cd_emlrtRSI;
        d_st.site = &dd_emlrtRSI;
        e_st.site = &ed_emlrtRSI;
        if (((b_m0->size[0] != 1) || (b_Y->size[1] != 1)) && (b_m0->size[0] == 1))
        {
          emlrtErrorWithMessageIdR2018a(&e_st, &b_emlrtRTEI,
            "Coder:toolbox:autoDimIncompatibility",
            "Coder:toolbox:autoDimIncompatibility", 0);
        }

        if (b_m0->size[0] < 1) {
          emlrtErrorWithMessageIdR2018a(&e_st, &emlrtRTEI,
            "Coder:toolbox:eml_min_or_max_varDimZero",
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
        }

        f_st.site = &fd_emlrtRSI;
        g_st.site = &gd_emlrtRSI;
        h_st.site = &hd_emlrtRSI;
        irank = b_m0->size[0];
        i = b_Y->size[1] - 1;
        i1 = goodobs->size[0] * goodobs->size[1];
        goodobs->size[0] = 1;
        goodobs->size[1] = b_Y->size[1];
        emxEnsureCapacity_real_T(&h_st, goodobs, i1, &mc_emlrtRTEI);
        if (b_Y->size[1] >= 1) {
          i_st.site = &jd_emlrtRSI;
          if (b_Y->size[1] > 2147483646) {
            j_st.site = &ad_emlrtRSI;
            check_forloop_overflow_error(&j_st);
          }

          for (idx = 0; idx <= i; idx++) {
            goodobs->data[idx] = b_Y->data[((int32_T)b_m0->data[0] + b_Y->size[0]
              * idx) - 1];
            i_st.site = &id_emlrtRSI;
            if ((2 <= irank) && (irank > 2147483646)) {
              j_st.site = &ad_emlrtRSI;
              check_forloop_overflow_error(&j_st);
            }

            for (b_i = 2; b_i <= irank; b_i++) {
              ndecl = goodobs->data[idx];
              b_tmp = b_Y->data[((int32_T)b_m0->data[b_i - 1] + b_Y->size[0] *
                                 idx) - 1];
              if (muDoubleScalarIsNaN(b_tmp)) {
                NoFalseSig = false;
              } else if (muDoubleScalarIsNaN(ndecl)) {
                NoFalseSig = true;
              } else {
                NoFalseSig = (ndecl < b_tmp);
              }

              if (NoFalseSig) {
                goodobs->data[idx] = b_tmp;
              }
            }
          }
        }

        b_st.site = &i_emlrtRSI;
        irank = b_m0->size[0];
        for (i = 0; i < irank; i++) {
          i1 = (int32_T)b_m0->data[i];
          if ((i1 < 1) || (i1 > b_Y->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, b_Y->size[0], &td_emlrtBCI,
              &b_st);
          }
        }

        c_st.site = &kd_emlrtRSI;
        d_st.site = &ld_emlrtRSI;
        e_st.site = &md_emlrtRSI;
        if (((b_m0->size[0] != 1) || (b_Y->size[1] != 1)) && (b_m0->size[0] == 1))
        {
          emlrtErrorWithMessageIdR2018a(&e_st, &b_emlrtRTEI,
            "Coder:toolbox:autoDimIncompatibility",
            "Coder:toolbox:autoDimIncompatibility", 0);
        }

        f_st.site = &fd_emlrtRSI;
        g_st.site = &gd_emlrtRSI;
        h_st.site = &hd_emlrtRSI;
        irank = b_m0->size[0];
        i = b_Y->size[1] - 1;
        i1 = loc->size[0] * loc->size[1];
        loc->size[0] = 1;
        loc->size[1] = b_Y->size[1];
        emxEnsureCapacity_real_T(&h_st, loc, i1, &mc_emlrtRTEI);
        if (b_Y->size[1] >= 1) {
          i_st.site = &jd_emlrtRSI;
          if (b_Y->size[1] > 2147483646) {
            j_st.site = &ad_emlrtRSI;
            check_forloop_overflow_error(&j_st);
          }

          for (idx = 0; idx <= i; idx++) {
            loc->data[idx] = b_Y->data[((int32_T)b_m0->data[0] + b_Y->size[0] *
              idx) - 1];
            i_st.site = &id_emlrtRSI;
            if ((2 <= irank) && (irank > 2147483646)) {
              j_st.site = &ad_emlrtRSI;
              check_forloop_overflow_error(&j_st);
            }

            for (b_i = 2; b_i <= irank; b_i++) {
              ndecl = loc->data[idx];
              b_tmp = b_Y->data[((int32_T)b_m0->data[b_i - 1] + b_Y->size[0] *
                                 idx) - 1];
              if (muDoubleScalarIsNaN(b_tmp)) {
                NoFalseSig = false;
              } else if (muDoubleScalarIsNaN(ndecl)) {
                NoFalseSig = true;
              } else {
                NoFalseSig = (ndecl > b_tmp);
              }

              if (NoFalseSig) {
                loc->data[idx] = b_tmp;
              }
            }
          }
        }

        tmp_size[0] = (*(int32_T (*)[2])goodobs->size)[0];
        tmp_size[1] = (*(int32_T (*)[2])goodobs->size)[1];
        c_tmp_size[0] = (*(int32_T (*)[2])loc->size)[0];
        c_tmp_size[1] = (*(int32_T (*)[2])loc->size)[1];
        emlrtSizeEqCheckNDR2012b(&tmp_size[0], &c_tmp_size[0], &i_emlrtECI, &st);
        b_st.site = &i_emlrtRSI;
        i = goodobs->size[0] * goodobs->size[1];
        goodobs->size[0] = 1;
        emxEnsureCapacity_real_T(&b_st, goodobs, i, &sc_emlrtRTEI);
        irank = goodobs->size[1] - 1;
        for (i = 0; i <= irank; i++) {
          goodobs->data[i] -= loc->data[i];
        }

        c_st.site = &kd_emlrtRSI;
        d_st.site = &ld_emlrtRSI;
        e_st.site = &md_emlrtRSI;
        if (goodobs->size[1] < 1) {
          emlrtErrorWithMessageIdR2018a(&e_st, &emlrtRTEI,
            "Coder:toolbox:eml_min_or_max_varDimZero",
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
        }

        f_st.site = &hq_emlrtRSI;
        g_st.site = &iq_emlrtRSI;
        irank = goodobs->size[1];
        if (goodobs->size[1] <= 2) {
          if (goodobs->size[1] == 1) {
            ndecl = goodobs->data[0];
          } else if ((goodobs->data[0] > goodobs->data[1]) ||
                     (muDoubleScalarIsNaN(goodobs->data[0]) &&
                      (!muDoubleScalarIsNaN(goodobs->data[1])))) {
            ndecl = goodobs->data[1];
          } else {
            ndecl = goodobs->data[0];
          }
        } else {
          h_st.site = &kq_emlrtRSI;
          if (!muDoubleScalarIsNaN(goodobs->data[0])) {
            idx = 1;
          } else {
            idx = 0;
            i_st.site = &lq_emlrtRSI;
            if (goodobs->size[1] > 2147483646) {
              j_st.site = &ad_emlrtRSI;
              check_forloop_overflow_error(&j_st);
            }

            k = 2;
            exitg2 = false;
            while ((!exitg2) && (k <= irank)) {
              if (!muDoubleScalarIsNaN(goodobs->data[k - 1])) {
                idx = k;
                exitg2 = true;
              } else {
                k++;
              }
            }
          }

          if (idx == 0) {
            ndecl = goodobs->data[0];
          } else {
            h_st.site = &jq_emlrtRSI;
            ndecl = goodobs->data[idx - 1];
            a = idx + 1;
            i_st.site = &mq_emlrtRSI;
            if ((idx + 1 <= goodobs->size[1]) && (goodobs->size[1] > 2147483646))
            {
              j_st.site = &ad_emlrtRSI;
              check_forloop_overflow_error(&j_st);
            }

            for (k = a; k <= irank; k++) {
              d = goodobs->data[k - 1];
              if (ndecl > d) {
                ndecl = d;
              }
            }
          }
        }

        if (ndecl == 0.0) {
          guard1 = true;
        } else {
          exitg1 = 1;
        }
      }

      if (guard1) {
        d = m0->data[0] + incre;
        if (1.0 > d) {
          irank = 0;
        } else {
          if (1 > fre->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, fre->size[0], &nd_emlrtBCI, &st);
          }

          if (d != (int32_T)muDoubleScalarFloor(d)) {
            emlrtIntegerCheckR2012b(d, &c_emlrtDCI, &st);
          }

          if (((int32_T)d < 1) || ((int32_T)d > fre->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, fre->size[0],
              &md_emlrtBCI, &st);
          }

          irank = (int32_T)d;
        }

        i = b_m0->size[0];
        b_m0->size[0] = irank;
        emxEnsureCapacity_real_T(&st, b_m0, i, &ic_emlrtRTEI);
        for (i = 0; i < irank; i++) {
          b_m0->data[i] = fre->data[i];
        }

        incre++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
    } while (exitg1 == 0);

    emxFree_real_T(&fre);

    /*  To make sure that new value of init is minimum lenght of bs for which */
    /*  the Y matrix is full rank */
    if (init < b_m0->size[0]) {
      init_contents = b_m0->size[0];
    }
  }

  /*  Compute Minimum Mahalanobis Distance for each step of the search */
  emxInit_real_T(&st, &c_m0, 1, &yb_emlrtRTEI, true);
  if (b_Y->size[0] < 5000) {
    i = c_m0->size[0];
    c_m0->size[0] = b_m0->size[0];
    emxEnsureCapacity_real_T(&st, c_m0, i, &ac_emlrtRTEI);
    loop_ub = b_m0->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      c_m0->data[i] = b_m0->data[i];
    }

    emxInit_real_T(&st, &bb, 2, &ld_emlrtRTEI, true);
    b_st.site = &j_emlrtRSI;
    FSMmmd(&b_st, b_Y, c_m0, init_contents, msg, out->mmd, out->Un, bb);
    i = out->cov->size[0] * out->cov->size[1];
    out->cov->size[0] = bb->size[0];
    out->cov->size[1] = bb->size[1];
    emxEnsureCapacity_real_T(&st, out->cov, i, &cc_emlrtRTEI);
    loop_ub = bb->size[0] * bb->size[1];
    for (i = 0; i < loop_ub; i++) {
      out->cov->data[i] = bb->data[i];
    }

    emxFree_real_T(&bb);
  } else {
    i = c_m0->size[0];
    c_m0->size[0] = b_m0->size[0];
    emxEnsureCapacity_real_T(&st, c_m0, i, &yb_emlrtRTEI);
    loop_ub = b_m0->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      c_m0->data[i] = b_m0->data[i];
    }

    b_st.site = &k_emlrtRSI;
    b_FSMmmd(&b_st, b_Y, c_m0, init_contents, msg, out->mmd, out->Un);
    i = out->cov->size[0] * out->cov->size[1];
    out->cov->size[0] = 1;
    out->cov->size[1] = 1;
    emxEnsureCapacity_real_T(&st, out->cov, i, &bc_emlrtRTEI);
    out->cov->data[0] = 0.0;
  }

  emxInit_boolean_T(&st, &r, 2, &dc_emlrtRTEI, true);
  i = r->size[0] * r->size[1];
  r->size[0] = out->mmd->size[0];
  r->size[1] = out->mmd->size[1];
  emxEnsureCapacity_boolean_T(&st, r, i, &dc_emlrtRTEI);
  loop_ub = out->mmd->size[0] * out->mmd->size[1];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = muDoubleScalarIsNaN(out->mmd->data[i]);
  }

  b_st.site = &l_emlrtRSI;
  if (b_ifWhileCond(&b_st, r)) {
    out->outliers->size[0] = 0;
    out->outliers->size[1] = 0;
    out->loc->size[0] = 0;
    out->loc->size[1] = 0;
    out->cov->size[0] = 0;
    out->cov->size[1] = 0;
    out->md->size[0] = 0;
    out->md->size[1] = 0;
    out->mmd->size[0] = 0;
    out->mmd->size[1] = 0;
    out->Un->size[0] = 0;
    out->Un->size[1] = 0;
    out->nout.size[0] = 0;
    out->nout.size[1] = 0;
    out->class.size[0] = 1;
    out->class.size[1] = 0;

    /*  all(structfun(@isempty,out)) */
  } else {
    /*  Part 1. Signal detection and validation */
    b_signal = 0;
    sto = 0;
    extram3_size[0] = 1;
    extram3_size[1] = 0;
    extram2_size[0] = 1;
    extram2_size[1] = 0;
    if (msg) {
      for (i = 0; i < 25; i++) {
        b_cv[i] = '-';
      }

      b_st.site = &fcb_emlrtRSI;
      disp(&b_st, f_emlrt_marshallOut(&b_st, b_cv), &emlrtMCI);
      b_st.site = &ycb_emlrtRSI;
      disp(&b_st, t_emlrt_marshallOut(&b_st, b_cv1), &b_emlrtMCI);
    }

    emxInit_real_T(&st, &gbonf, 2, &id_emlrtRTEI, true);
    emxInit_real_T(&st, &gmin, 2, &kc_emlrtRTEI, true);
    emxInit_real_T(&st, &gmin1, 2, &lc_emlrtRTEI, true);
    emxInit_int32_T(&st, &ia, 1, &sd_emlrtRTEI, true);
    if ((bonflev_size[0] != 0) && (bonflev_size[1] != 0)) {
      b_bonflev_size[0] = 1;
      b_bonflev_size[1] = 1;
      for (i = 0; i < 1; i++) {
        c_bonflev_data = (bonflev_data[0] < 1.0);
      }

      b_bonflev_data.data = &c_bonflev_data;
      b_bonflev_data.size = &b_bonflev_size[0];
      b_bonflev_data.allocatedSize = 1;
      b_bonflev_data.numDimensions = 2;
      b_bonflev_data.canFreeData = false;
      b_st.site = &m_emlrtRSI;
      if (b_ifWhileCond(&b_st, &b_bonflev_data)) {
        b_st.site = &n_emlrtRSI;
        FSMbonfbound(&b_st, b_Y->size[0], b_Y->size[1], bonflev_data,
                     bonflev_size, init_contents, gbonf);
      } else {
        emxInit_real_T(&st, &b, 1, &jc_emlrtRTEI, true);
        b_st.site = &o_emlrtRSI;
        d = (real_T)b_Y->size[0] - init_contents;
        if (!(d >= 0.0)) {
          emlrtNonNegativeCheckR2012b(d, &g_emlrtDCI, &b_st);
        }

        if (d != (int32_T)muDoubleScalarFloor(d)) {
          emlrtIntegerCheckR2012b(d, &f_emlrtDCI, &b_st);
        }

        i = b->size[0];
        b->size[0] = (int32_T)d;
        emxEnsureCapacity_real_T(&b_st, b, i, &jc_emlrtRTEI);
        d = (real_T)b_Y->size[0] - init_contents;
        if (!(d >= 0.0)) {
          emlrtNonNegativeCheckR2012b(d, &g_emlrtDCI, &b_st);
        }

        if (d != (int32_T)muDoubleScalarFloor(d)) {
          emlrtIntegerCheckR2012b(d, &f_emlrtDCI, &b_st);
        }

        loop_ub = (int32_T)d;
        for (i = 0; i < loop_ub; i++) {
          b->data[i] = 1.0;
        }

        d_bonflev_data.data = (real_T *)&bonflev_data[0];
        d_bonflev_data.size = (int32_T *)&bonflev_size[0];
        d_bonflev_data.allocatedSize = -1;
        d_bonflev_data.numDimensions = 2;
        d_bonflev_data.canFreeData = false;
        c_st.site = &xc_emlrtRSI;
        dynamic_size_checks(&c_st, &d_bonflev_data, b, 1, (int32_T)((real_T)
          b_Y->size[0] - init_contents));
        e_bonflev_data.data = (real_T *)&bonflev_data[0];
        e_bonflev_data.size = (int32_T *)&bonflev_size[0];
        e_bonflev_data.allocatedSize = -1;
        e_bonflev_data.numDimensions = 2;
        e_bonflev_data.canFreeData = false;
        c_st.site = &wc_emlrtRSI;
        mtimes(&c_st, &e_bonflev_data, b, c_m0);
        i = gbonf->size[0] * gbonf->size[1];
        gbonf->size[0] = c_m0->size[0];
        gbonf->size[1] = 1;
        emxEnsureCapacity_real_T(&st, gbonf, i, &nc_emlrtRTEI);
        loop_ub = c_m0->size[0];
        emxFree_real_T(&b);
        for (i = 0; i < loop_ub; i++) {
          gbonf->data[i] = c_m0->data[i];
        }
      }

      /*  declarations necessary for MATLAB C coder */
      ndecl = 0.0;
      c99 = 0;
      c999 = 0;
      c9999 = 0;
      c99999 = 0;
      c001 = 0;
      i = gmin->size[0] * gmin->size[1];
      gmin->size[0] = 1;
      gmin->size[1] = 1;
      emxEnsureCapacity_real_T(&st, gmin, i, &kc_emlrtRTEI);
      gmin->data[0] = 0.0;
      NoFalseSig = true;
      incre = 0.0;
      ii = 0U;
      i = gmin1->size[0] * gmin1->size[1];
      gmin1->size[0] = 1;
      gmin1->size[1] = 1;
      emxEnsureCapacity_real_T(&st, gmin1, i, &lc_emlrtRTEI);
      gmin1->data[0] = 0.0;
      out->nout.size[0] = 1;
      out->nout.size[1] = 1;
      out->nout.data[0] = 0.0;
    } else {
      /*  declaration necessary for C coder */
      i = gbonf->size[0] * gbonf->size[1];
      gbonf->size[0] = 1;
      gbonf->size[1] = 1;
      emxEnsureCapacity_real_T(&st, gbonf, i, &gc_emlrtRTEI);
      gbonf->data[0] = 0.0;
      incre = 0.0;
      ii = 0U;
      i = gmin1->size[0] * gmin1->size[1];
      gmin1->size[0] = 1;
      gmin1->size[1] = 1;
      emxEnsureCapacity_real_T(&st, gmin1, i, &hc_emlrtRTEI);
      gmin1->data[0] = 0.0;
      if (out->mmd->size[0] < 4) {
        b_st.site = &p_emlrtRSI;
        f_error(&b_st);
      }

      /*  Compute theoretical envelops for minimum Mahalanobis Distance based on all */
      /*  the observations for the above quantiles. */
      b_st.site = &q_emlrtRSI;
      FSMenvmmd(&b_st, b_Y->size[0], b_Y->size[1], init_contents, gmin);

      /*  gmin = the matrix which contains envelopes based on all observations. */
      /*  1st col of gmin = fwd search index */
      /*  2nd col of gmin = 99% envelope */
      /*  3rd col of gmin = 99.9% envelope */
      /*  4th col of gmin = 99.99% envelope */
      /*  5th col of gmin = 99.999% envelope */
      /*  6th col of gmin = 1% envelope */
      /*  7th col of gmin = 50% envelope */
      /*  Thus, set the columns of gmin where the theoretical quantiles are located. */
      c99 = 2;
      c999 = 3;
      c9999 = 4;
      c99999 = 5;
      c001 = 6;

      /*  Store in nout the number of times the observed mmd (d_min) lies above: */
      if (2 > out->mmd->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &ld_emlrtBCI, &st);
      }

      if (2 > gmin->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, gmin->size[1], &kd_emlrtBCI, &st);
      }

      if (out->mmd->size[0] != gmin->size[0]) {
        emlrtSizeEqCheck1DR2012b(out->mmd->size[0], gmin->size[0], &h_emlrtECI,
          &st);
      }

      if (2 > out->mmd->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &jd_emlrtBCI, &st);
      }

      if (3 > gmin->size[1]) {
        emlrtDynamicBoundsCheckR2012b(3, 1, gmin->size[1], &id_emlrtBCI, &st);
      }

      if (out->mmd->size[0] != gmin->size[0]) {
        emlrtSizeEqCheck1DR2012b(out->mmd->size[0], gmin->size[0], &g_emlrtECI,
          &st);
      }

      if (2 > out->mmd->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &hd_emlrtBCI, &st);
      }

      if (4 > gmin->size[1]) {
        emlrtDynamicBoundsCheckR2012b(4, 1, gmin->size[1], &gd_emlrtBCI, &st);
      }

      if (out->mmd->size[0] != gmin->size[0]) {
        emlrtSizeEqCheck1DR2012b(out->mmd->size[0], gmin->size[0], &f_emlrtECI,
          &st);
      }

      if (2 > out->mmd->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &fd_emlrtBCI, &st);
      }

      if (5 > gmin->size[1]) {
        emlrtDynamicBoundsCheckR2012b(5, 1, gmin->size[1], &ed_emlrtBCI, &st);
      }

      if (out->mmd->size[0] != gmin->size[0]) {
        emlrtSizeEqCheck1DR2012b(out->mmd->size[0], gmin->size[0], &e_emlrtECI,
          &st);
      }

      if (2 > out->mmd->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &dd_emlrtBCI, &st);
      }

      if (6 > gmin->size[1]) {
        emlrtDynamicBoundsCheckR2012b(6, 1, gmin->size[1], &cd_emlrtBCI, &st);
      }

      if (out->mmd->size[0] != gmin->size[0]) {
        emlrtSizeEqCheck1DR2012b(out->mmd->size[0], gmin->size[0], &d_emlrtECI,
          &st);
      }

      idx = out->mmd->size[0] - 1;
      a = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out->mmd->data[b_i + out->mmd->size[0]] > gmin->data[b_i +
            gmin->size[0]]) {
          a++;
        }
      }

      i = ia->size[0];
      ia->size[0] = a;
      emxEnsureCapacity_int32_T(&st, ia, i, &qc_emlrtRTEI);
      irank = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out->mmd->data[b_i + out->mmd->size[0]] > gmin->data[b_i +
            gmin->size[0]]) {
          ia->data[irank] = b_i + 1;
          irank++;
        }
      }

      idx = out->mmd->size[0] - 1;
      a = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out->mmd->data[b_i + out->mmd->size[0]] > gmin->data[b_i +
            gmin->size[0] * 2]) {
          a++;
        }
      }

      emxInit_int32_T(&st, &r1, 1, &od_emlrtRTEI, true);
      i = r1->size[0];
      r1->size[0] = a;
      emxEnsureCapacity_int32_T(&st, r1, i, &qc_emlrtRTEI);
      irank = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out->mmd->data[b_i + out->mmd->size[0]] > gmin->data[b_i +
            gmin->size[0] * 2]) {
          r1->data[irank] = b_i + 1;
          irank++;
        }
      }

      idx = out->mmd->size[0] - 1;
      a = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out->mmd->data[b_i + out->mmd->size[0]] > gmin->data[b_i +
            gmin->size[0] * 3]) {
          a++;
        }
      }

      emxInit_int32_T(&st, &r2, 1, &pd_emlrtRTEI, true);
      i = r2->size[0];
      r2->size[0] = a;
      emxEnsureCapacity_int32_T(&st, r2, i, &qc_emlrtRTEI);
      irank = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out->mmd->data[b_i + out->mmd->size[0]] > gmin->data[b_i +
            gmin->size[0] * 3]) {
          r2->data[irank] = b_i + 1;
          irank++;
        }
      }

      idx = out->mmd->size[0] - 1;
      a = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out->mmd->data[b_i + out->mmd->size[0]] > gmin->data[b_i +
            gmin->size[0] * 4]) {
          a++;
        }
      }

      emxInit_int32_T(&st, &r3, 1, &qd_emlrtRTEI, true);
      i = r3->size[0];
      r3->size[0] = a;
      emxEnsureCapacity_int32_T(&st, r3, i, &qc_emlrtRTEI);
      irank = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out->mmd->data[b_i + out->mmd->size[0]] > gmin->data[b_i +
            gmin->size[0] * 4]) {
          r3->data[irank] = b_i + 1;
          irank++;
        }
      }

      idx = out->mmd->size[0] - 1;
      a = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out->mmd->data[b_i + out->mmd->size[0]] < gmin->data[b_i +
            gmin->size[0] * 5]) {
          a++;
        }
      }

      emxInit_int32_T(&st, &r4, 1, &rd_emlrtRTEI, true);
      i = r4->size[0];
      r4->size[0] = a;
      emxEnsureCapacity_int32_T(&st, r4, i, &qc_emlrtRTEI);
      irank = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out->mmd->data[b_i + out->mmd->size[0]] < gmin->data[b_i +
            gmin->size[0] * 5]) {
          r4->data[irank] = b_i + 1;
          irank++;
        }
      }

      loop_ub = ia->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (ia->data[i] > out->mmd->size[0]) {
          emlrtDynamicBoundsCheckR2012b(ia->data[i], 1, out->mmd->size[0],
            &ui_emlrtBCI, &st);
        }
      }

      loop_ub = r1->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (r1->data[i] > out->mmd->size[0]) {
          emlrtDynamicBoundsCheckR2012b(r1->data[i], 1, out->mmd->size[0],
            &vi_emlrtBCI, &st);
        }
      }

      loop_ub = r2->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (r2->data[i] > out->mmd->size[0]) {
          emlrtDynamicBoundsCheckR2012b(r2->data[i], 1, out->mmd->size[0],
            &wi_emlrtBCI, &st);
        }
      }

      loop_ub = r3->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (r3->data[i] > out->mmd->size[0]) {
          emlrtDynamicBoundsCheckR2012b(r3->data[i], 1, out->mmd->size[0],
            &xi_emlrtBCI, &st);
        }
      }

      loop_ub = r4->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (r4->data[i] > out->mmd->size[0]) {
          emlrtDynamicBoundsCheckR2012b(r4->data[i], 1, out->mmd->size[0],
            &yi_emlrtBCI, &st);
        }
      }

      /*        % the 99% envelope */
      /*       % the 99.9% envelope */
      /*      % the 99.99% envelope */
      /*     % the 99.999% envelope */
      /*  the 1% envelope */
      for (i = 0; i < 5; i++) {
        uv1[i << 1] = (uint32_T)iv[i];
      }

      uv1[1] = (uint32_T)r4->size[0];
      uv1[3] = (uint32_T)ia->size[0];
      uv1[5] = (uint32_T)r1->size[0];
      uv1[7] = (uint32_T)r2->size[0];
      uv1[9] = (uint32_T)r3->size[0];
      out->nout.size[0] = 2;
      out->nout.size[1] = 5;
      emxFree_int32_T(&r4);
      emxFree_int32_T(&r3);
      emxFree_int32_T(&r2);
      emxFree_int32_T(&r1);
      for (i = 0; i < 10; i++) {
        out->nout.data[i] = uv1[i];
      }

      /*  NoFalseSig = boolean linked to the fact that the signal is good or not */
      NoFalseSig = false;

      /*  NoFalseSig is set to 1 if the condition for an INCONTROVERTIBLE SIGNAL is */
      /*  fulfilled. */
      a = 0;
      irank = 0;
      for (b_i = 0; b_i < 5; b_i++) {
        b_b = (out->nout.data[out->nout.size[0] * b_i] == 9999.0);
        if (b_b) {
          a++;
          x_tmp_data[irank] = (int8_T)(b_i + 1);
          irank++;
        }
      }

      out_size[0] = 1;
      out_size[1] = a;
      for (i = 0; i < a; i++) {
        out_data[i] = (out->nout.data[out->nout.size[0] * (x_tmp_data[i] - 1) +
                       1] >= 10.0);
      }

      b_st.site = &r_emlrtRSI;
      if (c_ifWhileCond(out_data, out_size)) {
        NoFalseSig = true;
        if (msg) {
          b_st.site = &eeb_emlrtRSI;
          disp(&b_st, y_emlrt_marshallOut(&b_st, cv45), &mb_emlrtMCI);

          /*  exact number is int2str(n9999) */
          for (i = 0; i < 50; i++) {
            cv46[i] = '-';
          }

          b_st.site = &geb_emlrtRSI;
          disp(&b_st, ab_emlrt_marshallOut(&b_st, cv46), &nb_emlrtMCI);
        }
      }

      /*  Divide central part from final part of the search */
      d = (real_T)b_Y->size[0] / 200.0;
      b_st.site = &s_emlrtRSI;
      if (d < 0.0) {
        emlrtErrorWithMessageIdR2018a(&b_st, &x_emlrtRTEI,
          "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3,
          4, 4, "sqrt");
      }

      d = muDoubleScalarSqrt(d);
      ndecl = (real_T)b_Y->size[0] - muDoubleScalarFloor(13.0 * d);
    }

    /*  Stage 1a: signal detection */
    /*  Signal detection is based on monitoring consecutive triplets or single */
    /*  extreme values */
    /*  Signal detection loop */
    b_i = 3;
    c_i = 3;
    emxInit_real_T(&st, &gval, 2, &jd_emlrtRTEI, true);
    emxInit_boolean_T(&st, &x, 1, &bd_emlrtRTEI, true);
    exitg2 = false;
    while ((!exitg2) && (c_i - 3 <= out->mmd->size[0] - 3)) {
      b_i = c_i;
      guard1 = false;
      if ((bonflev_size[0] == 0) || (bonflev_size[1] == 0)) {
        b_guard1 = false;
        guard2 = false;
        guard3 = false;
        guard4 = false;
        guard5 = false;
        guard6 = false;
        guard7 = false;
        if ((real_T)(c_i - 3) + 3.0 < (ndecl - init_contents) + 1.0) {
          /*  CENTRAL PART OF THE SEARCH */
          /*  Extreme triplet or an extreme single value */
          /*  Three consecutive values of d_min above the 99.99% threshold or 1 */
          /*  above 99.999% envelope */
          if (2 > out->mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &bd_emlrtBCI,
              &st);
          }

          if ((c_i < 1) || (c_i > out->mmd->size[0])) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
              &fe_emlrtBCI, &st);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &ge_emlrtBCI,
              &st);
          }

          if ((c9999 < 1) || (c9999 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c9999, 1, gmin->size[1], &ge_emlrtBCI,
              &st);
          }

          d = out->mmd->data[(c_i + out->mmd->size[0]) - 1];
          b_tmp = gmin->data[(c_i + gmin->size[0] * (c9999 - 1)) - 1];
          if (d > b_tmp) {
            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &ad_emlrtBCI, &st);
            }

            if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > out->
                 mmd->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->
                mmd->size[0], &me_emlrtBCI, &st);
            }

            if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > gmin->size[0]))
            {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->size[0],
                &ne_emlrtBCI, &st);
            }

            if (c9999 > gmin->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c9999, 1, gmin->size[1],
                &ne_emlrtBCI, &st);
            }

            if (out->mmd->data[c_i + out->mmd->size[0]] > gmin->data[c_i +
                gmin->size[0] * (c9999 - 1)]) {
              if (2 > out->mmd->size[1]) {
                emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                  &yc_emlrtBCI, &st);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > out->mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mmd->size[0],
                  &ue_emlrtBCI, &st);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0],
                  &ve_emlrtBCI, &st);
              }

              if (c9999 > gmin->size[1]) {
                emlrtDynamicBoundsCheckR2012b(c9999, 1, gmin->size[1],
                  &ve_emlrtBCI, &st);
              }

              if (out->mmd->data[(c_i + out->mmd->size[0]) - 2] > gmin->data
                  [(c_i + gmin->size[0] * (c9999 - 1)) - 2]) {
                guard3 = true;
              } else {
                guard6 = true;
              }
            } else {
              guard6 = true;
            }
          } else {
            guard6 = true;
          }
        } else if (c_i < out->mmd->size[0] - 1) {
          /*  FINAL PART OF THE SEARCH */
          /*  Extreme couple adjacent to an exceedance */
          /*  Two consecutive values of mmd above the 99.99% envelope and 1 above 99% */
          if (2 > out->mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &pc_emlrtBCI,
              &st);
          }

          if ((c_i < 1) || (c_i > out->mmd->size[0])) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
              &de_emlrtBCI, &st);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &ee_emlrtBCI,
              &st);
          }

          if ((c999 < 1) || (c999 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &ee_emlrtBCI,
              &st);
          }

          d = out->mmd->data[(c_i + out->mmd->size[0]) - 1];
          b_tmp = gmin->data[(c_i + gmin->size[0] * (c999 - 1)) - 1];
          if (d > b_tmp) {
            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &oc_emlrtBCI, &st);
            }

            if ((int32_T)(c_i + 1U) > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->
                mmd->size[0], &ke_emlrtBCI, &st);
            }

            if ((int32_T)(c_i + 1U) > gmin->size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->size[0],
                &le_emlrtBCI, &st);
            }

            if (c999 > gmin->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &le_emlrtBCI,
                &st);
            }

            if (out->mmd->data[c_i + out->mmd->size[0]] > gmin->data[c_i +
                gmin->size[0] * (c999 - 1)]) {
              if (2 > out->mmd->size[1]) {
                emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                  &nc_emlrtBCI, &st);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > out->mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mmd->size[0],
                  &qe_emlrtBCI, &st);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0],
                  &re_emlrtBCI, &st);
              }

              if ((c99 < 1) || (c99 > gmin->size[1])) {
                emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1],
                  &re_emlrtBCI, &st);
              }

              if (out->mmd->data[(c_i + out->mmd->size[0]) - 2] > gmin->data
                  [(c_i + gmin->size[0] * (c99 - 1)) - 2]) {
                guard2 = true;
              } else {
                guard7 = true;
              }
            } else {
              guard7 = true;
            }
          } else {
            guard7 = true;
          }
        } else {
          if (2 > out->mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &vb_emlrtBCI,
              &st);
          }

          if ((c_i < 1) || (c_i > out->mmd->size[0])) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
              &wd_emlrtBCI, &st);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &xd_emlrtBCI,
              &st);
          }

          if ((c999 < 1) || (c999 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &xd_emlrtBCI,
              &st);
          }

          d = out->mmd->data[(c_i + out->mmd->size[0]) - 1];
          b_tmp = gmin->data[(c_i + gmin->size[0] * (c999 - 1)) - 1];
          if (d > b_tmp) {
            guard4 = true;
          } else {
            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &ub_emlrtBCI, &st);
            }

            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &be_emlrtBCI, &st);
            }

            if (gmin->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
                &ce_emlrtBCI, &st);
            }

            if ((c99 < 1) || (c99 > gmin->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &ce_emlrtBCI,
                &st);
            }

            if (d > gmin->data[(gmin->size[0] + gmin->size[0] * (c99 - 1)) - 1])
            {
              guard4 = true;
            } else {
              b_guard1 = true;
            }
          }
        }

        if (guard7) {
          if (2 > out->mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &mc_emlrtBCI,
              &st);
          }

          if ((c_i - 1 < 1) || (c_i - 1 > out->mmd->size[0])) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mmd->size[0],
              &oe_emlrtBCI, &st);
          }

          if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0],
              &pe_emlrtBCI, &st);
          }

          if (c999 > gmin->size[1]) {
            emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &pe_emlrtBCI,
              &st);
          }

          if (out->mmd->data[(c_i + out->mmd->size[0]) - 2] > gmin->data[(c_i +
               gmin->size[0] * (c999 - 1)) - 2]) {
            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &lc_emlrtBCI, &st);
            }

            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &ye_emlrtBCI, &st);
            }

            if (c_i > gmin->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &af_emlrtBCI,
                &st);
            }

            if (c999 > gmin->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &af_emlrtBCI,
                &st);
            }

            if (d > b_tmp) {
              if (2 > out->mmd->size[1]) {
                emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                  &kc_emlrtBCI, &st);
              }

              if ((int32_T)(c_i + 1U) > out->mmd->size[0]) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->
                  mmd->size[0], &kf_emlrtBCI, &st);
              }

              if ((int32_T)(c_i + 1U) > gmin->size[0]) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->
                  size[0], &lf_emlrtBCI, &st);
              }

              if ((c99 < 1) || (c99 > gmin->size[1])) {
                emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1],
                  &lf_emlrtBCI, &st);
              }

              if (out->mmd->data[c_i + out->mmd->size[0]] > gmin->data[c_i +
                  gmin->size[0] * (c99 - 1)]) {
                guard2 = true;
              } else {
                guard5 = true;
              }
            } else {
              guard5 = true;
            }
          } else {
            guard5 = true;
          }
        }

        if (guard6) {
          if (2 > out->mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &xc_emlrtBCI,
              &st);
          }

          if (c_i > out->mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
              &se_emlrtBCI, &st);
          }

          if (gmin->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
              &te_emlrtBCI, &st);
          }

          if ((c99 < 1) || (c99 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &te_emlrtBCI,
              &st);
          }

          if (d > gmin->data[(gmin->size[0] + gmin->size[0] * (c99 - 1)) - 1]) {
            guard3 = true;
          } else {
            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &wc_emlrtBCI, &st);
            }

            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &bf_emlrtBCI, &st);
            }

            if (c_i > gmin->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &cf_emlrtBCI,
                &st);
            }

            if ((c99999 < 1) || (c99999 > gmin->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1],
                &cf_emlrtBCI, &st);
            }

            if (d > gmin->data[(c_i + gmin->size[0] * (c99999 - 1)) - 1]) {
              guard3 = true;
            }
          }
        }

        if (guard5) {
          if (2 > out->mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &jc_emlrtBCI,
              &st);
          }

          if (c_i > out->mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
              &if_emlrtBCI, &st);
          }

          if (gmin->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
              &jf_emlrtBCI, &st);
          }

          if ((c99 < 1) || (c99 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &jf_emlrtBCI,
              &st);
          }

          if (d > gmin->data[(gmin->size[0] + gmin->size[0] * (c99 - 1)) - 1]) {
            guard2 = true;
          } else {
            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &ic_emlrtBCI, &st);
            }

            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &of_emlrtBCI, &st);
            }

            if (c_i > gmin->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &pf_emlrtBCI,
                &st);
            }

            if ((c99999 < 1) || (c99999 > gmin->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1],
                &pf_emlrtBCI, &st);
            }

            if (d > gmin->data[(c_i + gmin->size[0] * (c99999 - 1)) - 1]) {
              guard2 = true;
            }
          }
        }

        if (guard4) {
          if (c_i == out->mmd->size[0] - 1) {
            /*  potential couple of outliers */
            b_signal = 1;
            if (msg) {
              b_st.site = &lcb_emlrtRSI;
              disp(&b_st, i_emlrt_marshallOut(&b_st, b_cv11), &f_emlrtMCI);
            }

            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &tb_emlrtBCI, &st);
            }

            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &we_emlrtBCI, &st);
            }

            if (c_i > gmin->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &xe_emlrtBCI,
                &st);
            }

            if (c999 > gmin->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &xe_emlrtBCI,
                &st);
            }

            if (d > b_tmp) {
              if (msg) {
                if (c_i > out->mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                    &df_emlrtBCI, &st);
                }

                b_st.site = &jb_emlrtRSI;
                int2str(&b_st, out->mmd->data[c_i - 1], tmp_data, tmp_size);
                b_st.site = &jb_emlrtRSI;
                int2str(&b_st, n, b_tmp_data, c_tmp_size);
                g_tmp_size[0] = 1;
                g_tmp_size[1] = (tmp_size[1] + c_tmp_size[1]) + 13;
                for (i = 0; i < 5; i++) {
                  g_tmp_data[i] = cv18[i];
                }

                loop_ub = tmp_size[1];
                if (0 <= loop_ub - 1) {
                  memcpy(&g_tmp_data[5], &tmp_data[0], loop_ub * sizeof(char_T));
                }

                g_tmp_data[tmp_size[1] + 5] = ',';
                loop_ub = c_tmp_size[1];
                for (i = 0; i < loop_ub; i++) {
                  g_tmp_data[(i + tmp_size[1]) + 6] = b_tmp_data[i];
                }

                for (i = 0; i < 7; i++) {
                  g_tmp_data[((i + tmp_size[1]) + c_tmp_size[1]) + 6] = cv20[i];
                }

                b_st.site = &ceb_emlrtRSI;
                disp(&b_st, w_emlrt_marshallOut(&b_st, g_tmp_data, g_tmp_size),
                     &l_emlrtMCI);
              }

              if (c_i > out->mmd->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                  &hf_emlrtBCI, &st);
              }

              b_st.site = &kb_emlrtRSI;
              int2str(&b_st, out->mmd->data[c_i - 1], reb_emlrtRSI.data,
                      reb_emlrtRSI.size);
              b_st.site = &kb_emlrtRSI;
              int2str(&b_st, n, reb_emlrtRSI.data, reb_emlrtRSI.size);
            }

            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &sb_emlrtBCI, &st);
            }

            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &ff_emlrtBCI, &st);
            }

            if (gmin->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
                &gf_emlrtBCI, &st);
            }

            if ((c99 < 1) || (c99 > gmin->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &gf_emlrtBCI,
                &st);
            }

            if (d > gmin->data[(gmin->size[0] + gmin->size[0] * (c99 - 1)) - 1])
            {
              if (msg) {
                if (c_i > out->mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                    &nf_emlrtBCI, &st);
                }

                b_st.site = &lb_emlrtRSI;
                int2str(&b_st, out->mmd->data[c_i - 1], tmp_data, tmp_size);
                b_st.site = &lb_emlrtRSI;
                int2str(&b_st, n, b_tmp_data, c_tmp_size);
                j_tmp_size[0] = 1;
                j_tmp_size[1] = (tmp_size[1] + c_tmp_size[1]) + 77;
                for (i = 0; i < 5; i++) {
                  k_tmp_data[i] = cv18[i];
                }

                loop_ub = tmp_size[1];
                if (0 <= loop_ub - 1) {
                  memcpy(&k_tmp_data[5], &tmp_data[0], loop_ub * sizeof(char_T));
                }

                k_tmp_data[tmp_size[1] + 5] = ',';
                loop_ub = c_tmp_size[1];
                for (i = 0; i < loop_ub; i++) {
                  k_tmp_data[(i + tmp_size[1]) + 6] = b_tmp_data[i];
                }

                memcpy(&k_tmp_data[(tmp_size[1] + c_tmp_size[1]) + 6], &cv26[0],
                       71U * sizeof(char_T));
                b_st.site = &beb_emlrtRSI;
                disp(&b_st, w_emlrt_marshallOut(&b_st, k_tmp_data, j_tmp_size),
                     &p_emlrtMCI);
              }

              if (c_i > out->mmd->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                  &uf_emlrtBCI, &st);
              }

              b_st.site = &mb_emlrtRSI;
              int2str(&b_st, out->mmd->data[c_i - 1], reb_emlrtRSI.data,
                      reb_emlrtRSI.size);
              b_st.site = &mb_emlrtRSI;
              int2str(&b_st, n, reb_emlrtRSI.data, reb_emlrtRSI.size);
            }

            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &rb_emlrtBCI, &st);
            }

            if (1 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out->mmd->size[1],
                &nj_emlrtBCI, &st);
            }

            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &nj_emlrtBCI, &st);
            }
          } else {
            b_guard1 = true;
          }
        }

        if (guard3) {
          if (msg) {
            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &mf_emlrtBCI, &st);
            }

            b_st.site = &t_emlrtRSI;
            int2str(&b_st, out->mmd->data[c_i - 1], tmp_data, tmp_size);
            f_tmp_size[0] = 1;
            f_tmp_size[1] = tmp_size[1] + 63;
            for (i = 0; i < 55; i++) {
              f_tmp_data[i] = b_cv12[i];
            }

            loop_ub = tmp_size[1];
            if (0 <= loop_ub - 1) {
              memcpy(&f_tmp_data[55], &tmp_data[0], loop_ub * sizeof(char_T));
            }

            for (i = 0; i < 8; i++) {
              f_tmp_data[(i + tmp_size[1]) + 55] = cv15[i];
            }

            b_st.site = &vdb_emlrtRSI;
            disp(&b_st, w_emlrt_marshallOut(&b_st, f_tmp_data, f_tmp_size),
                 &n_emlrtMCI);
          }

          if (2 > out->mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &vc_emlrtBCI,
              &st);
          }

          if (c_i > out->mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
              &sf_emlrtBCI, &st);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &tf_emlrtBCI,
              &st);
          }

          if (c9999 > gmin->size[1]) {
            emlrtDynamicBoundsCheckR2012b(c9999, 1, gmin->size[1], &tf_emlrtBCI,
              &st);
          }

          if (d > b_tmp) {
            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &uc_emlrtBCI, &st);
            }

            if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > out->
                 mmd->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->
                mmd->size[0], &xf_emlrtBCI, &st);
            }

            if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > gmin->size[0]))
            {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->size[0],
                &yf_emlrtBCI, &st);
            }

            if (c9999 > gmin->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c9999, 1, gmin->size[1],
                &yf_emlrtBCI, &st);
            }

            if (out->mmd->data[c_i + out->mmd->size[0]] > gmin->data[c_i +
                gmin->size[0] * (c9999 - 1)]) {
              if (2 > out->mmd->size[1]) {
                emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                  &tc_emlrtBCI, &st);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > out->mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mmd->size[0],
                  &eg_emlrtBCI, &st);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0],
                  &fg_emlrtBCI, &st);
              }

              if (c9999 > gmin->size[1]) {
                emlrtDynamicBoundsCheckR2012b(c9999, 1, gmin->size[1],
                  &fg_emlrtBCI, &st);
              }

              if (out->mmd->data[(c_i + out->mmd->size[0]) - 2] > gmin->data
                  [(c_i + gmin->size[0] * (c9999 - 1)) - 2]) {
                if (msg) {
                  if (c_i > out->mmd->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                      &lg_emlrtBCI, &st);
                  }

                  b_st.site = &u_emlrtRSI;
                  int2str(&b_st, out->mmd->data[c_i - 1], tmp_data, tmp_size);
                  b_st.site = &u_emlrtRSI;
                  int2str(&b_st, n, b_tmp_data, c_tmp_size);
                  if ((c_i - 1 < 1) || (c_i - 1 > out->mmd->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mmd->size[0],
                      &vg_emlrtBCI, &st);
                  }

                  b_st.site = &u_emlrtRSI;
                  int2str(&b_st, out->mmd->data[c_i - 2], n_tmp_data, out_size);
                  b_st.site = &u_emlrtRSI;
                  int2str(&b_st, n, o_tmp_data, n_tmp_size);
                  if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) >
                       out->mmd->size[0])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1,
                      out->mmd->size[0], &hh_emlrtBCI, &st);
                  }

                  b_st.site = &u_emlrtRSI;
                  int2str(&b_st, out->mmd->data[c_i], q_tmp_data, o_tmp_size);
                  b_st.site = &u_emlrtRSI;
                  int2str(&b_st, n, r_tmp_data, p_tmp_size);
                  q_tmp_size[0] = 1;
                  irank = (tmp_size[1] + c_tmp_size[1]) + out_size[1];
                  idx = (irank + n_tmp_size[1]) + o_tmp_size[1];
                  q_tmp_size[1] = (idx + p_tmp_size[1]) + 52;
                  for (i = 0; i < 5; i++) {
                    t_tmp_data[i] = cv18[i];
                  }

                  loop_ub = tmp_size[1];
                  if (0 <= loop_ub - 1) {
                    memcpy(&t_tmp_data[5], &tmp_data[0], loop_ub * sizeof(char_T));
                  }

                  t_tmp_data[tmp_size[1] + 5] = ',';
                  loop_ub = c_tmp_size[1];
                  for (i = 0; i < loop_ub; i++) {
                    t_tmp_data[(i + tmp_size[1]) + 6] = b_tmp_data[i];
                  }

                  for (i = 0; i < 18; i++) {
                    t_tmp_data[((i + tmp_size[1]) + c_tmp_size[1]) + 6] = cv37[i];
                  }

                  loop_ub = out_size[1];
                  for (i = 0; i < loop_ub; i++) {
                    t_tmp_data[((i + tmp_size[1]) + c_tmp_size[1]) + 24] =
                      n_tmp_data[i];
                  }

                  t_tmp_data[irank + 24] = ',';
                  loop_ub = n_tmp_size[1];
                  for (i = 0; i < loop_ub; i++) {
                    t_tmp_data[(((i + tmp_size[1]) + c_tmp_size[1]) + out_size[1])
                      + 25] = o_tmp_data[i];
                  }

                  for (i = 0; i < 18; i++) {
                    t_tmp_data[((((i + tmp_size[1]) + c_tmp_size[1]) + out_size
                                 [1]) + n_tmp_size[1]) + 25] = cv42[i];
                  }

                  loop_ub = o_tmp_size[1];
                  for (i = 0; i < loop_ub; i++) {
                    t_tmp_data[((((i + tmp_size[1]) + c_tmp_size[1]) + out_size
                                 [1]) + n_tmp_size[1]) + 43] = q_tmp_data[i];
                  }

                  t_tmp_data[idx + 43] = ',';
                  loop_ub = p_tmp_size[1];
                  for (i = 0; i < loop_ub; i++) {
                    t_tmp_data[(((((i + tmp_size[1]) + c_tmp_size[1]) +
                                  out_size[1]) + n_tmp_size[1]) + o_tmp_size[1])
                      + 44] = r_tmp_data[i];
                  }

                  for (i = 0; i < 8; i++) {
                    t_tmp_data[((((((i + tmp_size[1]) + c_tmp_size[1]) +
                                   out_size[1]) + n_tmp_size[1]) + o_tmp_size[1])
                                + p_tmp_size[1]) + 44] = cv44[i];
                  }

                  b_st.site = &udb_emlrtRSI;
                  disp(&b_st, w_emlrt_marshallOut(&b_st, t_tmp_data, q_tmp_size),
                       &v_emlrtMCI);
                }

                if (c_i > out->mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                    &qg_emlrtBCI, &st);
                }

                b_st.site = &v_emlrtRSI;
                int2str(&b_st, out->mmd->data[c_i - 1], reb_emlrtRSI.data,
                        reb_emlrtRSI.size);
                b_st.site = &v_emlrtRSI;
                int2str(&b_st, n, reb_emlrtRSI.data, reb_emlrtRSI.size);
                if ((c_i - 1 < 1) || (c_i - 1 > out->mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mmd->size[0],
                    &ch_emlrtBCI, &st);
                }

                b_st.site = &v_emlrtRSI;
                int2str(&b_st, out->mmd->data[c_i - 2], reb_emlrtRSI.data,
                        reb_emlrtRSI.size);
                b_st.site = &v_emlrtRSI;
                int2str(&b_st, n, reb_emlrtRSI.data, reb_emlrtRSI.size);
                if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > out->
                     mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->
                    mmd->size[0], &ph_emlrtBCI, &st);
                }

                b_st.site = &v_emlrtRSI;
                int2str(&b_st, out->mmd->data[c_i], reb_emlrtRSI.data,
                        reb_emlrtRSI.size);
                b_st.site = &v_emlrtRSI;
                int2str(&b_st, n, reb_emlrtRSI.data, reb_emlrtRSI.size);
                if ((c_i + -1 < 1) || (c_i + -1 > out->mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(c_i + -1, 1, out->mmd->size[0],
                    &gj_emlrtBCI, &st);
                }

                if (c_i > out->mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                    &gj_emlrtBCI, &st);
                }

                if ((c_i + 1 < 1) || (c_i + 1 > out->mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, out->mmd->size[0],
                    &gj_emlrtBCI, &st);
                }

                if (1 > out->mmd->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(1, 1, out->mmd->size[1],
                    &fj_emlrtBCI, &st);
                }

                if (2 > out->mmd->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                    &fj_emlrtBCI, &st);
                }
              }
            }
          }

          if (2 > out->mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &sc_emlrtBCI,
              &st);
          }

          if (c_i > out->mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
              &ig_emlrtBCI, &st);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &jg_emlrtBCI,
              &st);
          }

          if ((c99999 < 1) || (c99999 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1], &jg_emlrtBCI,
              &st);
          }

          if (d > gmin->data[(c_i + gmin->size[0] * (c99999 - 1)) - 1]) {
            if (msg) {
              if (c_i > out->mmd->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                  &pg_emlrtBCI, &st);
              }

              b_st.site = &w_emlrtRSI;
              int2str(&b_st, out->mmd->data[c_i - 1], tmp_data, tmp_size);
              b_st.site = &w_emlrtRSI;
              int2str(&b_st, n, b_tmp_data, c_tmp_size);
              h_tmp_size[0] = 1;
              h_tmp_size[1] = (tmp_size[1] + c_tmp_size[1]) + 15;
              for (i = 0; i < 5; i++) {
                h_tmp_data[i] = cv18[i];
              }

              loop_ub = tmp_size[1];
              if (0 <= loop_ub - 1) {
                memcpy(&h_tmp_data[5], &tmp_data[0], loop_ub * sizeof(char_T));
              }

              h_tmp_data[tmp_size[1] + 5] = ',';
              loop_ub = c_tmp_size[1];
              for (i = 0; i < loop_ub; i++) {
                h_tmp_data[(i + tmp_size[1]) + 6] = b_tmp_data[i];
              }

              for (i = 0; i < 9; i++) {
                h_tmp_data[((i + tmp_size[1]) + c_tmp_size[1]) + 6] = cv27[i];
              }

              b_st.site = &tdb_emlrtRSI;
              disp(&b_st, w_emlrt_marshallOut(&b_st, h_tmp_data, h_tmp_size),
                   &w_emlrtMCI);
            }

            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &ug_emlrtBCI, &st);
            }

            b_st.site = &x_emlrtRSI;
            int2str(&b_st, out->mmd->data[c_i - 1], reb_emlrtRSI.data,
                    reb_emlrtRSI.size);
            b_st.site = &x_emlrtRSI;
            int2str(&b_st, n, reb_emlrtRSI.data, reb_emlrtRSI.size);
            if ((c_i + -1 < 1) || (c_i + -1 > out->mmd->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i + -1, 1, out->mmd->size[0],
                &ej_emlrtBCI, &st);
            }

            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &ej_emlrtBCI, &st);
            }

            if ((c_i + 1 < 1) || (c_i + 1 > out->mmd->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, out->mmd->size[0],
                &ej_emlrtBCI, &st);
            }

            if (1 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out->mmd->size[1],
                &dj_emlrtBCI, &st);
            }

            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &dj_emlrtBCI, &st);
            }
          }

          if (2 > out->mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &rc_emlrtBCI,
              &st);
          }

          if (c_i > out->mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
              &sg_emlrtBCI, &st);
          }

          if (gmin->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
              &tg_emlrtBCI, &st);
          }

          if ((c99 < 1) || (c99 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &tg_emlrtBCI,
              &st);
          }

          if (d > gmin->data[(gmin->size[0] + gmin->size[0] * (c99 - 1)) - 1]) {
            if (msg) {
              if (c_i > out->mmd->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                  &gh_emlrtBCI, &st);
              }

              b_st.site = &y_emlrtRSI;
              int2str(&b_st, out->mmd->data[c_i - 1], tmp_data, tmp_size);
              b_st.site = &y_emlrtRSI;
              int2str(&b_st, n, b_tmp_data, c_tmp_size);
              m_tmp_size[0] = 1;
              m_tmp_size[1] = (tmp_size[1] + c_tmp_size[1]) + 79;
              for (i = 0; i < 5; i++) {
                p_tmp_data[i] = cv18[i];
              }

              loop_ub = tmp_size[1];
              if (0 <= loop_ub - 1) {
                memcpy(&p_tmp_data[5], &tmp_data[0], loop_ub * sizeof(char_T));
              }

              p_tmp_data[tmp_size[1] + 5] = ',';
              loop_ub = c_tmp_size[1];
              for (i = 0; i < loop_ub; i++) {
                p_tmp_data[(i + tmp_size[1]) + 6] = b_tmp_data[i];
              }

              memcpy(&p_tmp_data[(tmp_size[1] + c_tmp_size[1]) + 6], &cv31[0],
                     73U * sizeof(char_T));
              b_st.site = &sdb_emlrtRSI;
              disp(&b_st, w_emlrt_marshallOut(&b_st, p_tmp_data, m_tmp_size),
                   &x_emlrtMCI);
            }

            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &oh_emlrtBCI, &st);
            }

            b_st.site = &ab_emlrtRSI;
            int2str(&b_st, out->mmd->data[c_i - 1], reb_emlrtRSI.data,
                    reb_emlrtRSI.size);
            b_st.site = &ab_emlrtRSI;
            int2str(&b_st, n, reb_emlrtRSI.data, reb_emlrtRSI.size);
            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &qc_emlrtBCI, &st);
            }

            if (1 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out->mmd->size[1],
                &cj_emlrtBCI, &st);
            }

            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &cj_emlrtBCI, &st);
            }

            NoFalseSig = true;

            /*  i.e., no need of further validation */
          }

          b_signal = 1;
        }

        if (guard2) {
          if (c_i > out->mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
              &hc_emlrtBCI, &st);
          }

          if (2 > out->mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &gc_emlrtBCI,
              &st);
          }

          if (c_i > out->mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
              &qf_emlrtBCI, &st);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &rf_emlrtBCI,
              &st);
          }

          if (c999 > gmin->size[1]) {
            emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &rf_emlrtBCI,
              &st);
          }

          if (d > b_tmp) {
            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &fc_emlrtBCI, &st);
            }

            if ((int32_T)(c_i + 1U) > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->
                mmd->size[0], &vf_emlrtBCI, &st);
            }

            if ((int32_T)(c_i + 1U) > gmin->size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->size[0],
                &wf_emlrtBCI, &st);
            }

            if (c999 > gmin->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &wf_emlrtBCI,
                &st);
            }

            if (out->mmd->data[c_i + out->mmd->size[0]] > gmin->data[c_i +
                gmin->size[0] * (c999 - 1)]) {
              if (2 > out->mmd->size[1]) {
                emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                  &ec_emlrtBCI, &st);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > out->mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mmd->size[0],
                  &cg_emlrtBCI, &st);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0],
                  &dg_emlrtBCI, &st);
              }

              if (c99 > gmin->size[1]) {
                emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1],
                  &dg_emlrtBCI, &st);
              }

              if (out->mmd->data[(c_i + out->mmd->size[0]) - 2] > gmin->data
                  [(c_i + gmin->size[0] * (c99 - 1)) - 2]) {
                if (msg) {
                  if (c_i > out->mmd->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                      &kg_emlrtBCI, &st);
                  }

                  b_st.site = &bb_emlrtRSI;
                  int2str(&b_st, out->mmd->data[c_i - 1], tmp_data, tmp_size);
                  b_st.site = &bb_emlrtRSI;
                  int2str(&b_st, n, b_tmp_data, c_tmp_size);
                  if ((int32_T)(c_i + 1U) > out->mmd->size[0]) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1,
                      out->mmd->size[0], &rg_emlrtBCI, &st);
                  }

                  b_st.site = &bb_emlrtRSI;
                  int2str(&b_st, out->mmd->data[c_i], n_tmp_data, out_size);
                  b_st.site = &bb_emlrtRSI;
                  int2str(&b_st, n, o_tmp_data, n_tmp_size);
                  if ((c_i - 1 < 1) || (c_i - 1 > out->mmd->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mmd->size[0],
                      &fh_emlrtBCI, &st);
                  }

                  b_st.site = &bb_emlrtRSI;
                  int2str(&b_st, out->mmd->data[c_i - 2], q_tmp_data, o_tmp_size);
                  b_st.site = &bb_emlrtRSI;
                  int2str(&b_st, n, r_tmp_data, p_tmp_size);
                  r_tmp_size[0] = 1;
                  r_tmp_size[1] = (((((tmp_size[1] + c_tmp_size[1]) + out_size[1])
                                     + n_tmp_size[1]) + o_tmp_size[1]) +
                                   p_tmp_size[1]) + 47;
                  for (i = 0; i < 5; i++) {
                    s_tmp_data[i] = cv18[i];
                  }

                  loop_ub = tmp_size[1];
                  if (0 <= loop_ub - 1) {
                    memcpy(&s_tmp_data[5], &tmp_data[0], loop_ub * sizeof(char_T));
                  }

                  s_tmp_data[tmp_size[1] + 5] = ',';
                  loop_ub = c_tmp_size[1];
                  for (i = 0; i < loop_ub; i++) {
                    s_tmp_data[(i + tmp_size[1]) + 6] = b_tmp_data[i];
                  }

                  for (i = 0; i < 17; i++) {
                    s_tmp_data[((i + tmp_size[1]) + c_tmp_size[1]) + 6] = cv36[i];
                  }

                  loop_ub = out_size[1];
                  for (i = 0; i < loop_ub; i++) {
                    s_tmp_data[((i + tmp_size[1]) + c_tmp_size[1]) + 23] =
                      n_tmp_data[i];
                  }

                  s_tmp_data[((tmp_size[1] + c_tmp_size[1]) + out_size[1]) + 23]
                    = ',';
                  loop_ub = n_tmp_size[1];
                  for (i = 0; i < loop_ub; i++) {
                    s_tmp_data[(((i + tmp_size[1]) + c_tmp_size[1]) + out_size[1])
                      + 24] = o_tmp_data[i];
                  }

                  for (i = 0; i < 17; i++) {
                    s_tmp_data[((((i + tmp_size[1]) + c_tmp_size[1]) + out_size
                                 [1]) + n_tmp_size[1]) + 24] = cv41[i];
                  }

                  loop_ub = o_tmp_size[1];
                  for (i = 0; i < loop_ub; i++) {
                    s_tmp_data[((((i + tmp_size[1]) + c_tmp_size[1]) + out_size
                                 [1]) + n_tmp_size[1]) + 41] = q_tmp_data[i];
                  }

                  s_tmp_data[((((tmp_size[1] + c_tmp_size[1]) + out_size[1]) +
                               n_tmp_size[1]) + o_tmp_size[1]) + 41] = ',';
                  loop_ub = p_tmp_size[1];
                  for (i = 0; i < loop_ub; i++) {
                    s_tmp_data[(((((i + tmp_size[1]) + c_tmp_size[1]) +
                                  out_size[1]) + n_tmp_size[1]) + o_tmp_size[1])
                      + 42] = r_tmp_data[i];
                  }

                  for (i = 0; i < 5; i++) {
                    s_tmp_data[((((((i + tmp_size[1]) + c_tmp_size[1]) +
                                   out_size[1]) + n_tmp_size[1]) + o_tmp_size[1])
                                + p_tmp_size[1]) + 42] = cv43[i];
                  }

                  b_st.site = &aeb_emlrtRSI;
                  disp(&b_st, w_emlrt_marshallOut(&b_st, s_tmp_data, r_tmp_size),
                       &u_emlrtMCI);
                }

                if (c_i > out->mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                    &og_emlrtBCI, &st);
                }

                b_st.site = &cb_emlrtRSI;
                int2str(&b_st, out->mmd->data[c_i - 1], reb_emlrtRSI.data,
                        reb_emlrtRSI.size);
                b_st.site = &cb_emlrtRSI;
                int2str(&b_st, n, reb_emlrtRSI.data, reb_emlrtRSI.size);
                if ((c_i - 1 < 1) || (c_i - 1 > out->mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mmd->size[0],
                    &bh_emlrtBCI, &st);
                }

                b_st.site = &cb_emlrtRSI;
                int2str(&b_st, out->mmd->data[c_i - 2], reb_emlrtRSI.data,
                        reb_emlrtRSI.size);
                b_st.site = &cb_emlrtRSI;
                int2str(&b_st, n, reb_emlrtRSI.data, reb_emlrtRSI.size);
                if ((int32_T)(c_i + 1U) > out->mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->
                    mmd->size[0], &nh_emlrtBCI, &st);
                }

                b_st.site = &cb_emlrtRSI;
                int2str(&b_st, out->mmd->data[c_i], reb_emlrtRSI.data,
                        reb_emlrtRSI.size);
                b_st.site = &cb_emlrtRSI;
                int2str(&b_st, n, reb_emlrtRSI.data, reb_emlrtRSI.size);
                if ((c_i + -1 < 1) || (c_i + -1 > out->mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(c_i + -1, 1, out->mmd->size[0],
                    &mj_emlrtBCI, &st);
                }

                if (c_i > out->mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                    &mj_emlrtBCI, &st);
                }

                if (c_i + 1 > out->mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, out->mmd->size[0],
                    &mj_emlrtBCI, &st);
                }

                if (1 > out->mmd->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(1, 1, out->mmd->size[1],
                    &lj_emlrtBCI, &st);
                }

                if (2 > out->mmd->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                    &lj_emlrtBCI, &st);
                }
              }
            }
          }

          if (2 > out->mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &dc_emlrtBCI,
              &st);
          }

          if ((c_i - 1 < 1) || (c_i - 1 > out->mmd->size[0])) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mmd->size[0],
              &gg_emlrtBCI, &st);
          }

          if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0],
              &hg_emlrtBCI, &st);
          }

          if (c999 > gmin->size[1]) {
            emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &hg_emlrtBCI,
              &st);
          }

          if (out->mmd->data[(c_i + out->mmd->size[0]) - 2] > gmin->data[(c_i +
               gmin->size[0] * (c999 - 1)) - 2]) {
            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &cc_emlrtBCI, &st);
            }

            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &mg_emlrtBCI, &st);
            }

            if (c_i > gmin->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &ng_emlrtBCI,
                &st);
            }

            if (c999 > gmin->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &ng_emlrtBCI,
                &st);
            }

            if (d > b_tmp) {
              if (2 > out->mmd->size[1]) {
                emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                  &bc_emlrtBCI, &st);
              }

              if ((int32_T)(c_i + 1U) > out->mmd->size[0]) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->
                  mmd->size[0], &yg_emlrtBCI, &st);
              }

              if ((int32_T)(c_i + 1U) > gmin->size[0]) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->
                  size[0], &ah_emlrtBCI, &st);
              }

              if (c99 > gmin->size[1]) {
                emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1],
                  &ah_emlrtBCI, &st);
              }

              if (out->mmd->data[c_i + out->mmd->size[0]] > gmin->data[c_i +
                  gmin->size[0] * (c99 - 1)]) {
                if (msg) {
                  if ((c_i - 1 < 1) || (c_i - 1 > out->mmd->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mmd->size[0],
                      &mh_emlrtBCI, &st);
                  }

                  b_st.site = &db_emlrtRSI;
                  int2str(&b_st, out->mmd->data[c_i - 2], tmp_data, tmp_size);
                  b_st.site = &db_emlrtRSI;
                  int2str(&b_st, n, b_tmp_data, c_tmp_size);
                  if (c_i > out->mmd->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                      &vh_emlrtBCI, &st);
                  }

                  b_st.site = &db_emlrtRSI;
                  int2str(&b_st, out->mmd->data[c_i - 1], n_tmp_data, out_size);
                  b_st.site = &db_emlrtRSI;
                  int2str(&b_st, n, o_tmp_data, n_tmp_size);
                  if ((int32_T)(c_i + 1U) > out->mmd->size[0]) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1,
                      out->mmd->size[0], &gi_emlrtBCI, &st);
                  }

                  b_st.site = &db_emlrtRSI;
                  int2str(&b_st, out->mmd->data[c_i], q_tmp_data, o_tmp_size);
                  b_st.site = &db_emlrtRSI;
                  int2str(&b_st, n, r_tmp_data, p_tmp_size);
                  t_tmp_size[0] = 1;
                  t_tmp_size[1] = (((((tmp_size[1] + c_tmp_size[1]) + out_size[1])
                                     + n_tmp_size[1]) + o_tmp_size[1]) +
                                   p_tmp_size[1]) + 48;
                  for (i = 0; i < 6; i++) {
                    v_tmp_data[i] = cv38[i];
                  }

                  loop_ub = tmp_size[1];
                  if (0 <= loop_ub - 1) {
                    memcpy(&v_tmp_data[6], &tmp_data[0], loop_ub * sizeof(char_T));
                  }

                  v_tmp_data[tmp_size[1] + 6] = ',';
                  loop_ub = c_tmp_size[1];
                  for (i = 0; i < loop_ub; i++) {
                    v_tmp_data[(i + tmp_size[1]) + 7] = b_tmp_data[i];
                  }

                  for (i = 0; i < 17; i++) {
                    v_tmp_data[((i + tmp_size[1]) + c_tmp_size[1]) + 7] = cv36[i];
                  }

                  loop_ub = out_size[1];
                  for (i = 0; i < loop_ub; i++) {
                    v_tmp_data[((i + tmp_size[1]) + c_tmp_size[1]) + 24] =
                      n_tmp_data[i];
                  }

                  v_tmp_data[((tmp_size[1] + c_tmp_size[1]) + out_size[1]) + 24]
                    = ',';
                  loop_ub = n_tmp_size[1];
                  for (i = 0; i < loop_ub; i++) {
                    v_tmp_data[(((i + tmp_size[1]) + c_tmp_size[1]) + out_size[1])
                      + 25] = o_tmp_data[i];
                  }

                  for (i = 0; i < 17; i++) {
                    v_tmp_data[((((i + tmp_size[1]) + c_tmp_size[1]) + out_size
                                 [1]) + n_tmp_size[1]) + 25] = cv41[i];
                  }

                  loop_ub = o_tmp_size[1];
                  for (i = 0; i < loop_ub; i++) {
                    v_tmp_data[((((i + tmp_size[1]) + c_tmp_size[1]) + out_size
                                 [1]) + n_tmp_size[1]) + 42] = q_tmp_data[i];
                  }

                  v_tmp_data[((((tmp_size[1] + c_tmp_size[1]) + out_size[1]) +
                               n_tmp_size[1]) + o_tmp_size[1]) + 42] = ',';
                  loop_ub = p_tmp_size[1];
                  for (i = 0; i < loop_ub; i++) {
                    v_tmp_data[(((((i + tmp_size[1]) + c_tmp_size[1]) +
                                  out_size[1]) + n_tmp_size[1]) + o_tmp_size[1])
                      + 43] = r_tmp_data[i];
                  }

                  for (i = 0; i < 5; i++) {
                    v_tmp_data[((((((i + tmp_size[1]) + c_tmp_size[1]) +
                                   out_size[1]) + n_tmp_size[1]) + o_tmp_size[1])
                                + p_tmp_size[1]) + 43] = cv43[i];
                  }

                  b_st.site = &ydb_emlrtRSI;
                  disp(&b_st, w_emlrt_marshallOut(&b_st, v_tmp_data, t_tmp_size),
                       &y_emlrtMCI);
                }

                if (c_i > out->mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                    &rh_emlrtBCI, &st);
                }

                b_st.site = &eb_emlrtRSI;
                int2str(&b_st, out->mmd->data[c_i - 1], reb_emlrtRSI.data,
                        reb_emlrtRSI.size);
                b_st.site = &eb_emlrtRSI;
                int2str(&b_st, n, reb_emlrtRSI.data, reb_emlrtRSI.size);
                if ((c_i - 1 < 1) || (c_i - 1 > out->mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mmd->size[0],
                    &bi_emlrtBCI, &st);
                }

                b_st.site = &eb_emlrtRSI;
                int2str(&b_st, out->mmd->data[c_i - 2], reb_emlrtRSI.data,
                        reb_emlrtRSI.size);
                b_st.site = &eb_emlrtRSI;
                int2str(&b_st, n, reb_emlrtRSI.data, reb_emlrtRSI.size);
                if ((int32_T)(c_i + 1U) > out->mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->
                    mmd->size[0], &ki_emlrtBCI, &st);
                }

                b_st.site = &eb_emlrtRSI;
                int2str(&b_st, out->mmd->data[c_i], reb_emlrtRSI.data,
                        reb_emlrtRSI.size);
                b_st.site = &eb_emlrtRSI;
                int2str(&b_st, n, reb_emlrtRSI.data, reb_emlrtRSI.size);
                if ((c_i + -1 < 1) || (c_i + -1 > out->mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(c_i + -1, 1, out->mmd->size[0],
                    &kj_emlrtBCI, &st);
                }

                if (c_i > out->mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                    &kj_emlrtBCI, &st);
                }

                if (c_i + 1 > out->mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, out->mmd->size[0],
                    &kj_emlrtBCI, &st);
                }

                if (1 > out->mmd->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(1, 1, out->mmd->size[1],
                    &jj_emlrtBCI, &st);
                }

                if (2 > out->mmd->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                    &jj_emlrtBCI, &st);
                }
              }
            }
          }

          if (2 > out->mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &ac_emlrtBCI,
              &st);
          }

          if (c_i > out->mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
              &dh_emlrtBCI, &st);
          }

          if (gmin->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
              &eh_emlrtBCI, &st);
          }

          if (c99 > gmin->size[1]) {
            emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &eh_emlrtBCI,
              &st);
          }

          if (d > gmin->data[(gmin->size[0] + gmin->size[0] * (c99 - 1)) - 1]) {
            if (msg) {
              if (c_i > out->mmd->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                  &qh_emlrtBCI, &st);
              }

              b_st.site = &fb_emlrtRSI;
              int2str(&b_st, out->mmd->data[c_i - 1], tmp_data, tmp_size);
              b_st.site = &fb_emlrtRSI;
              int2str(&b_st, n, b_tmp_data, c_tmp_size);
              j_tmp_size[0] = 1;
              j_tmp_size[1] = (tmp_size[1] + c_tmp_size[1]) + 77;
              for (i = 0; i < 5; i++) {
                k_tmp_data[i] = cv18[i];
              }

              loop_ub = tmp_size[1];
              if (0 <= loop_ub - 1) {
                memcpy(&k_tmp_data[5], &tmp_data[0], loop_ub * sizeof(char_T));
              }

              k_tmp_data[tmp_size[1] + 5] = ',';
              loop_ub = c_tmp_size[1];
              for (i = 0; i < loop_ub; i++) {
                k_tmp_data[(i + tmp_size[1]) + 6] = b_tmp_data[i];
              }

              memcpy(&k_tmp_data[(tmp_size[1] + c_tmp_size[1]) + 6], &cv26[0],
                     71U * sizeof(char_T));
              b_st.site = &xdb_emlrtRSI;
              disp(&b_st, w_emlrt_marshallOut(&b_st, k_tmp_data, j_tmp_size),
                   &ab_emlrtMCI);
            }

            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &uh_emlrtBCI, &st);
            }

            b_st.site = &gb_emlrtRSI;
            int2str(&b_st, out->mmd->data[c_i - 1], reb_emlrtRSI.data,
                    reb_emlrtRSI.size);
            b_st.site = &gb_emlrtRSI;
            int2str(&b_st, n, reb_emlrtRSI.data, reb_emlrtRSI.size);
            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &yb_emlrtBCI, &st);
            }

            if (1 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out->mmd->size[1],
                &ij_emlrtBCI, &st);
            }

            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &ij_emlrtBCI, &st);
            }
          }

          /*  Extreme single value */
          if (2 > out->mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &xb_emlrtBCI,
              &st);
          }

          if (c_i > out->mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
              &yh_emlrtBCI, &st);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &ai_emlrtBCI,
              &st);
          }

          if ((c99999 < 1) || (c99999 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1], &ai_emlrtBCI,
              &st);
          }

          if (d > gmin->data[(c_i + gmin->size[0] * (c99999 - 1)) - 1]) {
            if (msg) {
              if (c_i > out->mmd->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                  &ji_emlrtBCI, &st);
              }

              b_st.site = &hb_emlrtRSI;
              int2str(&b_st, out->mmd->data[c_i - 1], tmp_data, tmp_size);
              b_st.site = &hb_emlrtRSI;
              int2str(&b_st, n, b_tmp_data, c_tmp_size);
              h_tmp_size[0] = 1;
              h_tmp_size[1] = (tmp_size[1] + c_tmp_size[1]) + 15;
              for (i = 0; i < 5; i++) {
                h_tmp_data[i] = cv18[i];
              }

              loop_ub = tmp_size[1];
              if (0 <= loop_ub - 1) {
                memcpy(&h_tmp_data[5], &tmp_data[0], loop_ub * sizeof(char_T));
              }

              h_tmp_data[tmp_size[1] + 5] = ',';
              loop_ub = c_tmp_size[1];
              for (i = 0; i < loop_ub; i++) {
                h_tmp_data[(i + tmp_size[1]) + 6] = b_tmp_data[i];
              }

              for (i = 0; i < 9; i++) {
                h_tmp_data[((i + tmp_size[1]) + c_tmp_size[1]) + 6] = cv27[i];
              }

              b_st.site = &wdb_emlrtRSI;
              disp(&b_st, w_emlrt_marshallOut(&b_st, h_tmp_data, h_tmp_size),
                   &cb_emlrtMCI);
            }

            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &li_emlrtBCI, &st);
            }

            b_st.site = &ib_emlrtRSI;
            int2str(&b_st, out->mmd->data[c_i - 1], reb_emlrtRSI.data,
                    reb_emlrtRSI.size);
            b_st.site = &ib_emlrtRSI;
            int2str(&b_st, n, reb_emlrtRSI.data, reb_emlrtRSI.size);
            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &wb_emlrtBCI, &st);
            }

            if (1 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out->mmd->size[1],
                &hj_emlrtBCI, &st);
            }

            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &hj_emlrtBCI, &st);
            }
          }

          /*  Signal is always considered true if it takes place in the */
          /*  final part of the search */
          NoFalseSig = true;
          b_signal = 1;
        }

        if (b_guard1) {
          if (2 > out->mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &qb_emlrtBCI,
              &st);
          }

          if (c_i > out->mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
              &ie_emlrtBCI, &st);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &je_emlrtBCI,
              &st);
          }

          if ((c99 < 1) || (c99 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &je_emlrtBCI,
              &st);
          }

          if ((d > gmin->data[(c_i + gmin->size[0] * (c99 - 1)) - 1]) && (c_i ==
               out->mmd->size[0])) {
            /*  a single outlier */
            b_signal = 1;
            if (msg) {
              b_st.site = &heb_emlrtRSI;
              disp(&b_st, bb_emlrt_marshallOut(&b_st, cv16), &k_emlrtMCI);
            }

            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &ef_emlrtBCI, &st);
            }

            b_st.site = &nb_emlrtRSI;
            int2str(&b_st, out->mmd->data[c_i - 1], reb_emlrtRSI.data,
                    reb_emlrtRSI.size);
            b_st.site = &nb_emlrtRSI;
            int2str(&b_st, n, reb_emlrtRSI.data, reb_emlrtRSI.size);
            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &pb_emlrtBCI, &st);
            }

            if (1 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out->mmd->size[1],
                &oj_emlrtBCI, &st);
            }

            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &oj_emlrtBCI, &st);
            }
          }
        }

        /*         %% Stage 1b: signal validation */
        if (b_signal == 1) {
          if (msg) {
            for (i = 0; i < 19; i++) {
              b_cv13[i] = '-';
            }

            b_st.site = &kcb_emlrtRSI;
            disp(&b_st, h_emlrt_marshallOut(&b_st, b_cv13), &r_emlrtMCI);
            b_st.site = &ieb_emlrtRSI;
            disp(&b_st, cb_emlrt_marshallOut(&b_st, cv14), &s_emlrtMCI);
          }

          /*  mdag is $m^\dagger$ */
          if (c_i > out->mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
              &ag_emlrtBCI, &st);
          }

          incre = out->mmd->data[c_i - 1];
          if (c_i > out->mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
              &bg_emlrtBCI, &st);
          }

          if (incre < (real_T)n - 2.0) {
            /*  Check if the signal is incontrovertible */
            /*  Incontrovertible signal = 3 consecutive values of d_min > */
            /*  99.999% threshold */
            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &ob_emlrtBCI, &st);
            }

            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &wg_emlrtBCI, &st);
            }

            if (c_i > gmin->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &xg_emlrtBCI,
                &st);
            }

            if ((c99999 < 1) || (c99999 > gmin->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1],
                &xg_emlrtBCI, &st);
            }

            if (out->mmd->data[(c_i + out->mmd->size[0]) - 1] > gmin->data[(c_i
                 + gmin->size[0] * (c99999 - 1)) - 1]) {
              if (2 > out->mmd->size[1]) {
                emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                  &nb_emlrtBCI, &st);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > out->mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mmd->size[0],
                  &kh_emlrtBCI, &st);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0],
                  &lh_emlrtBCI, &st);
              }

              if (c99999 > gmin->size[1]) {
                emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1],
                  &lh_emlrtBCI, &st);
              }

              if (out->mmd->data[(c_i + out->mmd->size[0]) - 2] > gmin->data
                  [(c_i + gmin->size[0] * (c99999 - 1)) - 2]) {
                if (2 > out->mmd->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                    &mb_emlrtBCI, &st);
                }

                if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > out->
                     mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->
                    mmd->size[0], &sh_emlrtBCI, &st);
                }

                if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) >
                     gmin->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1,
                    gmin->size[0], &th_emlrtBCI, &st);
                }

                if (c99999 > gmin->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1],
                    &th_emlrtBCI, &st);
                }

                if (out->mmd->data[c_i + out->mmd->size[0]] > gmin->data[c_i +
                    gmin->size[0] * (c99999 - 1)]) {
                  if (msg) {
                    if (c_i > out->mmd->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                        &fi_emlrtBCI, &st);
                    }

                    b_st.site = &ob_emlrtRSI;
                    int2str(&b_st, out->mmd->data[c_i - 1], tmp_data, tmp_size);
                    s_tmp_size[0] = 1;
                    s_tmp_size[1] = tmp_size[1] + 74;
                    memcpy(&u_tmp_data[0], &cv33[0], 74U * sizeof(char_T));
                    loop_ub = tmp_size[1];
                    if (0 <= loop_ub - 1) {
                      memcpy(&u_tmp_data[74], &tmp_data[0], loop_ub * sizeof
                             (char_T));
                    }

                    b_st.site = &rdb_emlrtRSI;
                    disp(&b_st, w_emlrt_marshallOut(&b_st, u_tmp_data,
                          s_tmp_size), &bb_emlrtMCI);
                  }

                  NoFalseSig = true;
                  extram3_size[0] = 1;
                  extram3_size[1] = 14;
                  for (i = 0; i < 14; i++) {
                    extram3_data[i] = cv34[i];
                  }
                }
              }
            }
          } else {
            NoFalseSig = true;
          }

          /*  if the following statement is true, observed curve of d_min is */
          /*  above 99.99% and later is below 1%: peak followed by dip */
          if (1 > out->mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, out->mmd->size[0], &lb_emlrtBCI,
              &st);
          }

          if (out->mmd->size[0] > (incre - out->mmd->data[0]) + 31.0) {
            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &kb_emlrtBCI, &st);
            }

            for (i = 0; i < 31; i++) {
              uv[i] = ((uint32_T)i + c_i) + 1U;
            }

            for (i = 0; i < 31; i++) {
              i1 = (int32_T)uv[i];
              if ((i1 < 1) || (i1 > out->mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, out->mmd->size[0],
                  &xh_emlrtBCI, &st);
              }
            }

            for (i = 0; i < 31; i++) {
              i1 = (int32_T)uv[i];
              if ((i1 < 1) || (i1 > gmin->size[0])) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, gmin->size[0], &ii_emlrtBCI,
                  &st);
              }
            }

            if ((c001 < 1) || (c001 > gmin->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c001, 1, gmin->size[1], &jb_emlrtBCI,
                &st);
            }

            for (i = 0; i < 31; i++) {
              irank = (int32_T)uv[i] - 1;
              b_x[i] = (out->mmd->data[irank + out->mmd->size[0]] < gmin->
                        data[irank + gmin->size[0] * (c001 - 1)]);
            }

            irank = b_x[0];
            for (k = 0; k < 30; k++) {
              irank += b_x[k + 1];
            }

            if (irank >= 2) {
              NoFalseSig = true;

              /*  Peak followed by dip */
              extram2_size[0] = 1;
              extram2_size[1] = 106;
              memcpy(&extram2_data[0], &cv29[0], 106U * sizeof(char_T));
            }
          } else {
            if (c_i + 1U > (uint32_T)out->mmd->size[0]) {
              i = -1;
              i1 = -1;
            } else {
              if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > out->
                   mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->
                  mmd->size[0], &ib_emlrtBCI, &st);
              }

              i = c_i - 1;
              if (out->mmd->size[0] < 1) {
                emlrtDynamicBoundsCheckR2012b(out->mmd->size[0], 1, out->
                  mmd->size[0], &hb_emlrtBCI, &st);
              }

              i1 = out->mmd->size[0] - 1;
            }

            if (c_i + 1U > (uint32_T)gmin->size[0]) {
              k = -1;
              a = 0;
            } else {
              if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > gmin->
                   size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->
                  size[0], &fb_emlrtBCI, &st);
              }

              k = c_i - 1;
              if (gmin->size[0] < 1) {
                emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
                  &eb_emlrtBCI, &st);
              }

              a = gmin->size[0];
            }

            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &gb_emlrtBCI, &st);
            }

            if ((c001 < 1) || (c001 > gmin->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c001, 1, gmin->size[1], &db_emlrtBCI,
                &st);
            }

            loop_ub = i1 - i;
            i1 = (a - k) - 1;
            if (loop_ub != i1) {
              emlrtSizeEqCheck1DR2012b(loop_ub, i1, &c_emlrtECI, &st);
            }

            b_st.site = &pb_emlrtRSI;
            i1 = x->size[0];
            x->size[0] = loop_ub;
            emxEnsureCapacity_boolean_T(&b_st, x, i1, &bd_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              x->data[i1] = (out->mmd->data[((i + i1) + out->mmd->size[0]) + 1] <
                             gmin->data[((k + i1) + gmin->size[0] * (c001 - 1))
                             + 1]);
            }

            c_st.site = &gj_emlrtRSI;
            d_st.site = &hj_emlrtRSI;
            irank = combineVectorElements(&d_st, x);
            if (irank >= 2) {
              NoFalseSig = true;

              /* Peak followed by dip in the final part of the search'; */
              extram2_size[0] = 1;
              extram2_size[1] = 107;
              memcpy(&extram2_data[0], &cv35[0], 107U * sizeof(char_T));
            }
          }

          /*  if at this point NoFalseSig==0 it means that: */
          /*  1) n9999<10 */
          /*  2) signal tool place in the central part of the search */
          /*  3) signal was not incontrovertible */
          /*  4) there was not a peak followed by dip */
          if (!NoFalseSig) {
            /*  Compute the final value of the envelope based on */
            /*  mmd(i+1,1)=mdagger+1 observations */
            b_st.site = &qb_emlrtRSI;
            b_FSMenvmmd(&b_st, incre + 1.0, v, incre, gval);
            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                &cb_emlrtBCI, &st);
            }

            if (1 > gval->size[0]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, gval->size[0], &bb_emlrtBCI,
                &st);
            }

            if (2 > gval->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, gval->size[1], &ab_emlrtBCI,
                &st);
            }

            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &ti_emlrtBCI, &st);
            }

            if (out->mmd->data[(c_i + out->mmd->size[0]) - 1] < gval->data
                [gval->size[0]]) {
              if (msg) {
                b_st.site = &gcb_emlrtRSI;
                disp(&b_st, g_emlrt_marshallOut(&b_st, cv39), &hb_emlrtMCI);
                b_st.site = &rb_emlrtRSI;
                int2str(&b_st, incre, tmp_data, tmp_size);
                u_tmp_size[0] = 1;
                u_tmp_size[1] = tmp_size[1] + 5;
                for (i = 0; i < 5; i++) {
                  w_tmp_data[i] = cv40[i];
                }

                loop_ub = tmp_size[1];
                if (0 <= loop_ub - 1) {
                  memcpy(&w_tmp_data[5], &tmp_data[0], loop_ub * sizeof(char_T));
                }

                b_st.site = &qdb_emlrtRSI;
                disp(&b_st, w_emlrt_marshallOut(&b_st, w_tmp_data, u_tmp_size),
                     &ib_emlrtMCI);
              }

              /*  increase mdag of the search by one unit */
              incre = 0.0;
            } else {
              NoFalseSig = true;
            }
          }

          /*  If the signal has been validated get out of the signal detection */
          /*  loop and move to stage 2: superimposition of the envelopes */
          if (NoFalseSig) {
            if (msg) {
              b_st.site = &jeb_emlrtRSI;
              disp(&b_st, db_emlrt_marshallOut(&b_st, cv32), &fb_emlrtMCI);
            }

            exitg2 = true;
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }
      } else {
        /*  Outlier detection based on Bonferroni threshold */
        if (2 > out->mmd->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &y_emlrtBCI,
            &st);
        }

        if ((c_i < 1) || (c_i > out->mmd->size[0])) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0], &ud_emlrtBCI,
            &st);
        }

        if (c_i > gbonf->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, gbonf->size[0], &vd_emlrtBCI,
            &st);
        }

        if (gbonf->size[1] < 1) {
          emlrtDynamicBoundsCheckR2012b(gbonf->size[1], 1, gbonf->size[1],
            &vd_emlrtBCI, &st);
        }

        if (out->mmd->data[(c_i + out->mmd->size[0]) - 1] > gbonf->data[(c_i +
             gbonf->size[0] * (gbonf->size[1] - 1)) - 1]) {
          if (msg) {
            if (c_i > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
                &yd_emlrtBCI, &st);
            }

            b_st.site = &sb_emlrtRSI;
            int2str(&b_st, out->mmd->data[c_i - 1], tmp_data, tmp_size);
            b_st.site = &sb_emlrtRSI;
            int2str(&b_st, n, b_tmp_data, c_tmp_size);
            d_tmp_size[0] = 1;
            d_tmp_size[1] = (tmp_size[1] + c_tmp_size[1]) + 31;
            for (i = 0; i < 8; i++) {
              d_tmp_data[i] = b_cv8[i];
            }

            loop_ub = tmp_size[1];
            if (0 <= loop_ub - 1) {
              memcpy(&d_tmp_data[8], &tmp_data[0], loop_ub * sizeof(char_T));
            }

            d_tmp_data[tmp_size[1] + 8] = ',';
            loop_ub = c_tmp_size[1];
            for (i = 0; i < loop_ub; i++) {
              d_tmp_data[(i + tmp_size[1]) + 9] = b_tmp_data[i];
            }

            for (i = 0; i < 22; i++) {
              d_tmp_data[((i + tmp_size[1]) + c_tmp_size[1]) + 9] = b_cv10[i];
            }

            b_st.site = &deb_emlrtRSI;
            disp(&b_st, w_emlrt_marshallOut(&b_st, d_tmp_data, d_tmp_size),
                 &c_emlrtMCI);
          }

          if (c_i > out->mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0],
              &ae_emlrtBCI, &st);
          }

          b_st.site = &tb_emlrtRSI;
          int2str(&b_st, out->mmd->data[c_i - 1], reb_emlrtRSI.data,
                  reb_emlrtRSI.size);
          b_st.site = &tb_emlrtRSI;
          int2str(&b_st, n, reb_emlrtRSI.data, reb_emlrtRSI.size);
          if (c_i > out->mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mmd->size[0], &x_emlrtBCI,
              &st);
          }

          if (1 > out->mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, out->mmd->size[1], &pj_emlrtBCI,
              &st);
          }

          if (2 > out->mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &pj_emlrtBCI,
              &st);
          }

          b_signal = 1;
          exitg2 = true;
        } else {
          guard1 = true;
        }
      }

      if (guard1) {
        c_i++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
    }

    emxFree_real_T(&gval);
    emxFree_real_T(&gmin);
    emxFree_real_T(&gbonf);

    /*  Create figure containing mmd + envelopes based on all the observations. */
    /*  if plo is a structure or if it is a scalar different from 0 */
    /*  then produce a plot */
    /*  Part 2: envelope resuperimposition */
    /*  if a validated signal tool place, superimposition of the envelopes starts */
    /*  from m^\dagger-1 */
    if (b_signal == 1) {
      if ((bonflev_size[0] == 0) || (bonflev_size[1] == 0)) {
        if (msg) {
          for (i = 0; i < 31; i++) {
            b_cv3[i] = '-';
          }

          b_st.site = &keb_emlrtRSI;
          disp(&b_st, eb_emlrt_marshallOut(&b_st, b_cv3), &e_emlrtMCI);
          b_st.site = &ub_emlrtRSI;
          int2str(&b_st, incre - 1.0, tmp_data, tmp_size);
          b_tmp_size[0] = 1;
          b_tmp_size[1] = tmp_size[1] + 44;
          for (i = 0; i < 44; i++) {
            c_tmp_data[i] = b_cv7[i];
          }

          loop_ub = tmp_size[1];
          if (0 <= loop_ub - 1) {
            memcpy(&c_tmp_data[44], &tmp_data[0], loop_ub * sizeof(char_T));
          }

          b_st.site = &pdb_emlrtRSI;
          disp(&b_st, w_emlrt_marshallOut(&b_st, c_tmp_data, b_tmp_size),
               &g_emlrtMCI);
        }

        /*  First resuperimposed envelope is based on mdag-1 observations */
        /*  Notice that mmd(i,1) = m dagger */
        i = (int32_T)((real_T)b_Y->size[0] + (1.0 - (incre - 1.0)));
        emlrtForLoopVectorCheckR2021a(incre - 1.0, 1.0, b_Y->size[0],
          mxDOUBLE_CLASS, i, &e_emlrtRTEI, &st);
        ndecl = incre - 1.0;
        idx = 0;
        exitg2 = false;
        while ((!exitg2) && (idx <= i - 1)) {
          ndecl = (incre - 1.0) + (real_T)idx;

          /*  Compute theoretical envelopes based on tr observations */
          b_st.site = &vb_emlrtRSI;
          c_FSMenvmmd(&b_st, ndecl, v, init_contents, gmin1);
          i1 = (gmin1->size[0] - b_i) + 1;
          ii = (uint32_T)(b_i - 1);
          irank = 0;
          exitg3 = false;
          while ((!exitg3) && (irank <= i1)) {
            ii = ((uint32_T)b_i + irank) - 1U;

            /*  CHECK IF STOPPING RULE IS FULFILLED */
            /*  ii>=size(gmin1,1)-2 = final, penultimate or antepenultimate value */
            /*  of the resuperimposed envelope based on tr observations */
            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &w_emlrtBCI,
                &st);
            }

            if (((int32_T)ii < 1) || ((int32_T)ii > out->mmd->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out->mmd->size[0],
                &di_emlrtBCI, &st);
            }

            if (((int32_T)ii < 1) || ((int32_T)ii > gmin1->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, gmin1->size[0],
                &ei_emlrtBCI, &st);
            }

            if ((c99 < 1) || (c99 > gmin1->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c99, 1, gmin1->size[1], &ei_emlrtBCI,
                &st);
            }

            d = out->mmd->data[((int32_T)ii + out->mmd->size[0]) - 1];
            if ((d > gmin1->data[((int32_T)ii + gmin1->size[0] * (c99 - 1)) - 1])
                && ((int32_T)ii >= gmin1->size[0] - 2)) {
              /*  Condition S1 */
              if (((int32_T)ii < 1) || ((int32_T)ii > out->mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out->mmd->size[0],
                  &mi_emlrtBCI, &st);
              }

              b_st.site = &wb_emlrtRSI;
              int2str(&b_st, out->mmd->data[(int32_T)ii - 1], tmp_data, tmp_size);
              b_st.site = &wb_emlrtRSI;
              int2str(&b_st, ndecl, b_tmp_data, c_tmp_size);
              mes_size[0] = 1;
              mes_size[1] = (tmp_size[1] + c_tmp_size[1]) + 26;
              for (i1 = 0; i1 < 9; i1++) {
                mes_data[i1] = cv17[i1];
              }

              loop_ub = tmp_size[1];
              if (0 <= loop_ub - 1) {
                memcpy(&mes_data[9], &tmp_data[0], loop_ub * sizeof(char_T));
              }

              mes_data[tmp_size[1] + 9] = ',';
              loop_ub = c_tmp_size[1];
              for (i1 = 0; i1 < loop_ub; i1++) {
                mes_data[(i1 + tmp_size[1]) + 10] = b_tmp_data[i1];
              }

              for (i1 = 0; i1 < 16; i1++) {
                mes_data[((i1 + tmp_size[1]) + c_tmp_size[1]) + 10] = cv19[i1];
              }

              if (msg) {
                if (((int32_T)ii < 1) || ((int32_T)ii > out->mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out->mmd->size[0],
                    &ri_emlrtBCI, &st);
                }

                b_st.site = &xb_emlrtRSI;
                int2str(&b_st, out->mmd->data[(int32_T)ii - 1], tmp_data,
                        tmp_size);
                b_st.site = &xb_emlrtRSI;
                int2str(&b_st, ndecl, b_tmp_data, c_tmp_size);
                l_tmp_size[0] = 1;
                l_tmp_size[1] = (tmp_size[1] + c_tmp_size[1]) + 55;
                for (i1 = 0; i1 < 40; i1++) {
                  m_tmp_data[i1] = cv23[i1];
                }

                loop_ub = tmp_size[1];
                if (0 <= loop_ub - 1) {
                  memcpy(&m_tmp_data[40], &tmp_data[0], loop_ub * sizeof(char_T));
                }

                m_tmp_data[tmp_size[1] + 40] = ',';
                loop_ub = c_tmp_size[1];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  m_tmp_data[(i1 + tmp_size[1]) + 41] = b_tmp_data[i1];
                }

                for (i1 = 0; i1 < 14; i1++) {
                  m_tmp_data[((i1 + tmp_size[1]) + c_tmp_size[1]) + 41] =
                    cv30[i1];
                }

                b_st.site = &ndb_emlrtRSI;
                disp(&b_st, w_emlrt_marshallOut(&b_st, m_tmp_data, l_tmp_size),
                     &db_emlrtMCI);
                b_st.site = &mdb_emlrtRSI;
                disp(&b_st, w_emlrt_marshallOut(&b_st, mes_data, mes_size),
                     &eb_emlrtMCI);
              }

              sto = 1;
              exitg3 = true;
            } else {
              guard1 = false;
              if ((int32_T)ii < gmin1->size[0] - 2) {
                if (2 > out->mmd->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1],
                    &v_emlrtBCI, &st);
                }

                if (((int32_T)ii < 1) || ((int32_T)ii > out->mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out->mmd->size[0],
                    &oi_emlrtBCI, &st);
                }

                if (((int32_T)ii < 1) || ((int32_T)ii > gmin1->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, gmin1->size[0],
                    &pi_emlrtBCI, &st);
                }

                if ((c999 < 1) || (c999 > gmin1->size[1])) {
                  emlrtDynamicBoundsCheckR2012b(c999, 1, gmin1->size[1],
                    &pi_emlrtBCI, &st);
                }

                if (d > gmin1->data[((int32_T)ii + gmin1->size[0] * (c999 - 1))
                    - 1]) {
                  /*  Condition S2 */
                  if (((int32_T)ii < 1) || ((int32_T)ii > out->mmd->size[0])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out->mmd->
                      size[0], &qi_emlrtBCI, &st);
                  }

                  b_st.site = &yb_emlrtRSI;
                  int2str(&b_st, out->mmd->data[(int32_T)ii - 1],
                          reb_emlrtRSI.data, reb_emlrtRSI.size);
                  b_st.site = &yb_emlrtRSI;
                  int2str(&b_st, ndecl, reb_emlrtRSI.data, reb_emlrtRSI.size);
                  if (msg) {
                    if (((int32_T)ii < 1) || ((int32_T)ii > out->mmd->size[0]))
                    {
                      emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out->
                        mmd->size[0], &si_emlrtBCI, &st);
                    }

                    b_st.site = &ac_emlrtRSI;
                    int2str(&b_st, out->mmd->data[(int32_T)ii - 1], tmp_data,
                            tmp_size);
                    b_st.site = &ac_emlrtRSI;
                    int2str(&b_st, ndecl, b_tmp_data, c_tmp_size);
                    k_tmp_size[0] = 1;
                    k_tmp_size[1] = (tmp_size[1] + c_tmp_size[1]) + 57;
                    for (i1 = 0; i1 < 40; i1++) {
                      l_tmp_data[i1] = cv23[i1];
                    }

                    loop_ub = tmp_size[1];
                    if (0 <= loop_ub - 1) {
                      memcpy(&l_tmp_data[40], &tmp_data[0], loop_ub * sizeof
                             (char_T));
                    }

                    l_tmp_data[tmp_size[1] + 40] = ',';
                    loop_ub = c_tmp_size[1];
                    for (i1 = 0; i1 < loop_ub; i1++) {
                      l_tmp_data[(i1 + tmp_size[1]) + 41] = b_tmp_data[i1];
                    }

                    for (i1 = 0; i1 < 16; i1++) {
                      l_tmp_data[((i1 + tmp_size[1]) + c_tmp_size[1]) + 41] =
                        cv28[i1];
                    }

                    b_st.site = &odb_emlrtRSI;
                    disp(&b_st, w_emlrt_marshallOut(&b_st, l_tmp_data,
                          k_tmp_size), &gb_emlrtMCI);
                  }

                  sto = 1;
                  exitg3 = true;
                } else {
                  guard1 = true;
                }
              } else {
                guard1 = true;
              }

              if (guard1) {
                /*  mmd is inside the envelopes, so keep resuperimposing */
                irank++;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(&st);
                }
              }
            }
          }

          /*  The following is the only one non graphical instruction */
          if (sto == 1) {
            exitg2 = true;
          } else {
            idx++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
        }

        /*         %% Stage 2a: subset validation */
        /*  In this part we check whether the subset is homogeneous. In other */
        /*  words we verify conditions H1 and H2 */
        /*  tr= m^\dagger+k+1 */
        /*  m^\dagger+k=tr-1 */
        /*  m*=mmd(ii,1) */
        /*  Condition H2 */
        /*  Check if stopping rule takes place at m* <m^\dagger+k */
        if (((int32_T)ii < 1) || ((int32_T)ii > out->mmd->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out->mmd->size[0],
            &jh_emlrtBCI, &st);
        }

        if (out->mmd->data[(int32_T)ii - 1] < ndecl - 1.0) {
          /*  Condition H2b and H2a */
          if (ii + 1U > (uint32_T)gmin1->size[0]) {
            i = -1;
            i1 = -1;
            k = -1;
            a = 0;
          } else {
            if (((int32_T)(ii + 1U) < 1) || ((int32_T)(ii + 1U) > gmin1->size[0]))
            {
              emlrtDynamicBoundsCheckR2012b((int32_T)(ii + 1U), 1, gmin1->size[0],
                &u_emlrtBCI, &st);
            }

            i = (int32_T)ii - 1;
            if (gmin1->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(gmin1->size[0], 1, gmin1->size[0],
                &t_emlrtBCI, &st);
            }

            i1 = gmin1->size[0] - 1;
            if (((int32_T)(ii + 1U) < 1) || ((int32_T)(ii + 1U) > out->mmd->
                 size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(ii + 1U), 1, out->
                mmd->size[0], &r_emlrtBCI, &st);
            }

            k = (int32_T)ii - 1;
            if ((gmin1->size[0] < 1) || (gmin1->size[0] > out->mmd->size[0])) {
              emlrtDynamicBoundsCheckR2012b(gmin1->size[0], 1, out->mmd->size[0],
                &q_emlrtBCI, &st);
            }

            a = gmin1->size[0];
          }

          if (4 > gmin1->size[1]) {
            emlrtDynamicBoundsCheckR2012b(4, 1, gmin1->size[1], &s_emlrtBCI, &st);
          }

          if (2 > out->mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &p_emlrtBCI,
              &st);
          }

          loop_ub = i1 - i;
          i1 = (a - k) - 1;
          if (loop_ub != i1) {
            emlrtSizeEqCheck1DR2012b(loop_ub, i1, &b_emlrtECI, &st);
          }

          b_st.site = &bc_emlrtRSI;
          i1 = x->size[0];
          x->size[0] = loop_ub;
          emxEnsureCapacity_boolean_T(&b_st, x, i1, &wc_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            x->data[i1] = (gmin1->data[((i + i1) + gmin1->size[0] * 3) + 1] >
                           out->mmd->data[((k + i1) + out->mmd->size[0]) + 1]);
          }

          c_st.site = &gj_emlrtRSI;
          d_st.site = &hj_emlrtRSI;
          irank = combineVectorElements(&d_st, x);
          if (irank > 0) {
            if (msg) {
              b_st.site = &cc_emlrtRSI;
              int2str(&b_st, ndecl - 1.0, tmp_data, tmp_size);
              i_tmp_size[0] = 1;
              i_tmp_size[1] = tmp_size[1] + 99;
              for (i = 0; i < 13; i++) {
                j_tmp_data[i] = cv21[i];
              }

              loop_ub = tmp_size[1];
              if (0 <= loop_ub - 1) {
                memcpy(&j_tmp_data[13], &tmp_data[0], loop_ub * sizeof(char_T));
              }

              memcpy(&j_tmp_data[tmp_size[1] + 13], &cv22[0], 86U * sizeof
                     (char_T));
              b_st.site = &kdb_emlrtRSI;
              disp(&b_st, w_emlrt_marshallOut(&b_st, j_tmp_data, i_tmp_size),
                   &kb_emlrtMCI);
              for (i = 0; i < 40; i++) {
                cv25[i] = '-';
              }

              b_st.site = &rcb_emlrtRSI;
              disp(&b_st, m_emlrt_marshallOut(&b_st, cv25), &lb_emlrtMCI);
            }

            /*  Find m^{1%} that is the step where mmd goes below the 1% */
            /*  threshold for the first time */
            /*  ginfd = concatenate all the steps from m^*+1 to m^\dagger+k-1 */
            if (b_i + 1U > (uint32_T)gmin1->size[0]) {
              i = -1;
              i1 = -1;
              k = -1;
              a = -1;
              irank = -1;
              idx = 0;
            } else {
              if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) >
                   gmin1->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1,
                  gmin1->size[0], &o_emlrtBCI, &st);
              }

              i = b_i - 1;
              if (gmin1->size[0] < 1) {
                emlrtDynamicBoundsCheckR2012b(gmin1->size[0], 1, gmin1->size[0],
                  &n_emlrtBCI, &st);
              }

              i1 = gmin1->size[0] - 1;
              if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) >
                   gmin1->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1,
                  gmin1->size[0], &l_emlrtBCI, &st);
              }

              k = b_i - 1;
              if (gmin1->size[0] < 1) {
                emlrtDynamicBoundsCheckR2012b(gmin1->size[0], 1, gmin1->size[0],
                  &k_emlrtBCI, &st);
              }

              a = gmin1->size[0] - 1;
              if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) > out->
                   mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, out->
                  mmd->size[0], &i_emlrtBCI, &st);
              }

              irank = b_i - 1;
              if ((gmin1->size[0] < 1) || (gmin1->size[0] > out->mmd->size[0]))
              {
                emlrtDynamicBoundsCheckR2012b(gmin1->size[0], 1, out->mmd->size
                  [0], &h_emlrtBCI, &st);
              }

              idx = gmin1->size[0];
            }

            if (4 > gmin1->size[1]) {
              emlrtDynamicBoundsCheckR2012b(4, 1, gmin1->size[1], &j_emlrtBCI,
                &st);
            }

            if (2 > out->mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mmd->size[1], &g_emlrtBCI,
                &st);
            }

            loop_ub = a - k;
            a = (idx - irank) - 1;
            if (loop_ub != a) {
              emlrtSizeEqCheck1DR2012b(loop_ub, a, &emlrtECI, &st);
            }

            if (1 > gmin1->size[1]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, gmin1->size[1], &m_emlrtBCI,
                &st);
            }

            b_st.site = &dc_emlrtRSI;
            a = x->size[0];
            x->size[0] = loop_ub;
            emxEnsureCapacity_boolean_T(&b_st, x, a, &cd_emlrtRTEI);
            for (a = 0; a < loop_ub; a++) {
              x->data[a] = (gmin1->data[((k + a) + gmin1->size[0] * 3) + 1] >
                            out->mmd->data[((irank + a) + out->mmd->size[0]) + 1]);
            }

            c_st.site = &th_emlrtRSI;
            d_st.site = &uh_emlrtRSI;
            loop_ub = i1 - i;
            if (x->size[0] != loop_ub) {
              emlrtErrorWithMessageIdR2018a(&d_st, &c_emlrtRTEI,
                "MATLAB:catenate:matrixDimensionMismatch",
                "MATLAB:catenate:matrixDimensionMismatch", 0);
            }

            emxInit_real_T(&d_st, &gfind, 2, &dd_emlrtRTEI, true);
            i1 = gfind->size[0] * gfind->size[1];
            gfind->size[0] = loop_ub;
            gfind->size[1] = 2;
            emxEnsureCapacity_real_T(&c_st, gfind, i1, &dd_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              gfind->data[i1] = gmin1->data[(i + i1) + 1];
            }

            loop_ub = x->size[0];
            for (i = 0; i < loop_ub; i++) {
              gfind->data[i + gfind->size[0]] = x->data[i];
            }

            /*  select from gfind the steps where mmd was below 1% threshold */
            /*  gfind(1,1) contains the first step where mmd was below 1% */
            loop_ub = gfind->size[0];
            i = x->size[0];
            x->size[0] = gfind->size[0];
            emxEnsureCapacity_boolean_T(&st, x, i, &ed_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              x->data[i] = (gfind->data[i + gfind->size[0]] > 0.0);
            }

            idx = x->size[0];
            for (c_i = 0; c_i < idx; c_i++) {
              if (x->data[c_i] && (c_i + 1 > gfind->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, gfind->size[0],
                  &emlrtBCI, &st);
              }
            }

            /*  find maximum in the interval m^\dagger=mmd(i,1) to the step */
            /*  prior to the one where mmd goes below 1% envelope */
            loop_ub = gfind->size[0];
            i = x->size[0];
            x->size[0] = gfind->size[0];
            emxEnsureCapacity_boolean_T(&st, x, i, &ed_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              x->data[i] = (gfind->data[i + gfind->size[0]] > 0.0);
            }

            idx = x->size[0] - 1;
            a = 0;
            for (c_i = 0; c_i <= idx; c_i++) {
              if (x->data[c_i]) {
                a++;
              }
            }

            emxInit_int32_T(&st, &r5, 1, &ed_emlrtRTEI, true);
            i = r5->size[0];
            r5->size[0] = a;
            emxEnsureCapacity_int32_T(&st, r5, i, &qc_emlrtRTEI);
            irank = 0;
            for (c_i = 0; c_i <= idx; c_i++) {
              if (x->data[c_i]) {
                r5->data[irank] = c_i + 1;
                irank++;
              }
            }

            if (1 > r5->size[0]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, r5->size[0], &f_emlrtBCI, &st);
            }

            emxFree_int32_T(&r5);
            if (1 > out->mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out->mmd->size[0], &e_emlrtBCI,
                &st);
            }

            loop_ub = gfind->size[0];
            i = x->size[0];
            x->size[0] = gfind->size[0];
            emxEnsureCapacity_boolean_T(&st, x, i, &ed_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              x->data[i] = (gfind->data[i + gfind->size[0]] > 0.0);
            }

            idx = x->size[0] - 1;
            a = 0;
            for (c_i = 0; c_i <= idx; c_i++) {
              if (x->data[c_i]) {
                a++;
              }
            }

            emxInit_int32_T(&st, &r6, 1, &ed_emlrtRTEI, true);
            i = r6->size[0];
            r6->size[0] = a;
            emxEnsureCapacity_int32_T(&st, r6, i, &qc_emlrtRTEI);
            irank = 0;
            for (c_i = 0; c_i <= idx; c_i++) {
              if (x->data[c_i]) {
                r6->data[irank] = c_i + 1;
                irank++;
              }
            }

            d = gfind->data[r6->data[0] - 1] - out->mmd->data[0];
            emxFree_int32_T(&r6);
            if (b_i > d) {
              i = 0;
              i1 = 0;
            } else {
              if ((b_i < 1) || (b_i > out->mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b(b_i, 1, out->mmd->size[0],
                  &d_emlrtBCI, &st);
              }

              i = b_i - 1;
              if (d != (int32_T)muDoubleScalarFloor(d)) {
                emlrtIntegerCheckR2012b(d, &b_emlrtDCI, &st);
              }

              if (((int32_T)d < 1) || ((int32_T)d > out->mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, out->mmd->size[0],
                  &c_emlrtBCI, &st);
              }

              i1 = (int32_T)d;
            }

            loop_ub = i1 - i;
            i1 = gfind->size[0] * gfind->size[1];
            gfind->size[0] = loop_ub;
            gfind->size[1] = 2;
            emxEnsureCapacity_real_T(&st, gfind, i1, &fd_emlrtRTEI);
            for (i1 = 0; i1 < 2; i1++) {
              for (k = 0; k < loop_ub; k++) {
                if (i1 + 1 > out->mmd->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(i1 + 1, 1, out->mmd->size[1],
                    &aj_emlrtBCI, &st);
                }

                gfind->data[k + gfind->size[0] * i1] = out->mmd->data[(i + k) +
                  out->mmd->size[0] * i1];
              }
            }

            b_st.site = &ec_emlrtRSI;
            d_sortrows(&b_st, gfind);
            if (gfind->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(gfind->size[0], 1, gfind->size[0],
                &bj_emlrtBCI, &st);
            }

            ndecl = gfind->data[gfind->size[0] - 1];
            emxFree_real_T(&gfind);
            if (msg) {
              b_st.site = &ocb_emlrtRSI;
              disp(&b_st, j_emlrt_marshallOut(&b_st, cv47), &ob_emlrtMCI);
              b_st.site = &fc_emlrtRSI;
              int2str(&b_st, ndecl, tmp_data, tmp_size);
              v_tmp_size[0] = 1;
              v_tmp_size[1] = tmp_size[1] + 68;
              memcpy(&y_tmp_data[0], &cv48[0], 68U * sizeof(char_T));
              loop_ub = tmp_size[1];
              if (0 <= loop_ub - 1) {
                memcpy(&y_tmp_data[68], &tmp_data[0], loop_ub * sizeof(char_T));
              }

              b_st.site = &jdb_emlrtRSI;
              disp(&b_st, w_emlrt_marshallOut(&b_st, y_tmp_data, v_tmp_size),
                   &pb_emlrtMCI);
            }

            /*  tr is redefined and is associated with the step associated to */
            /*  the maximum value of d_min */
            /*  try=sormcl[rows(sormcl),1]+1; */
            ndecl++;
          } else if (msg) {
            b_st.site = &gc_emlrtRSI;
            int2str(&b_st, ndecl - 1.0, tmp_data, tmp_size);
            i_tmp_size[0] = 1;
            i_tmp_size[1] = tmp_size[1] + 34;
            for (i = 0; i < 13; i++) {
              i_tmp_data[i] = cv21[i];
            }

            loop_ub = tmp_size[1];
            if (0 <= loop_ub - 1) {
              memcpy(&i_tmp_data[13], &tmp_data[0], loop_ub * sizeof(char_T));
            }

            for (i = 0; i < 21; i++) {
              i_tmp_data[(i + tmp_size[1]) + 13] = cv24[i];
            }

            b_st.site = &ldb_emlrtRSI;
            disp(&b_st, w_emlrt_marshallOut(&b_st, i_tmp_data, i_tmp_size),
                 &jb_emlrtMCI);
          }
        }

        ndecl = ((real_T)b_Y->size[0] - ndecl) + 1.0;
      } else {
        if ((b_i < 1) || (b_i > out->mmd->size[0])) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, out->mmd->size[0], &he_emlrtBCI,
            &st);
        }

        ndecl = (real_T)b_Y->size[0] - out->mmd->data[b_i - 1];
      }

      if (msg) {
        for (i = 0; i < 28; i++) {
          b_cv5[i] = '-';
        }

        b_st.site = &xbb_emlrtRSI;
        disp(&b_st, emlrt_marshallOut(&b_st, b_cv5), &h_emlrtMCI);
        b_st.site = &qcb_emlrtRSI;
        disp(&b_st, l_emlrt_marshallOut(&b_st, b_cv6), &i_emlrtMCI);
        b_st.site = &hc_emlrtRSI;
        int2str(&b_st, ndecl, tmp_data, tmp_size);
        e_tmp_size[0] = 1;
        e_tmp_size[1] = tmp_size[1] + 37;
        for (i = 0; i < 37; i++) {
          e_tmp_data[i] = b_cv9[i];
        }

        loop_ub = tmp_size[1];
        if (0 <= loop_ub - 1) {
          memcpy(&e_tmp_data[37], &tmp_data[0], loop_ub * sizeof(char_T));
        }

        b_st.site = &idb_emlrtRSI;
        disp(&b_st, w_emlrt_marshallOut(&b_st, e_tmp_data, e_tmp_size),
             &j_emlrtMCI);
      }
    } else {
      if (msg) {
        b_st.site = &feb_emlrtRSI;
        disp(&b_st, ab_emlrt_marshallOut(&b_st, b_cv2), &d_emlrtMCI);
      }

      ndecl = 0.0;
    }

    emxFree_real_T(&gmin1);

    /*  End of the forward search */
    if (msg) {
      if ((bonflev_size[0] == 0) || (bonflev_size[1] == 0)) {
        b_st.site = &pcb_emlrtRSI;
        disp(&b_st, k_emlrt_marshallOut(&b_st, b_cv4), &m_emlrtMCI);
        b_st.site = &meb_emlrtRSI;
        disp(&b_st, fb_emlrt_marshallOut(out->nout.data, out->nout.size),
             &o_emlrtMCI);
      }

      if (extram3_size[1] != 0) {
        b_st.site = &hdb_emlrtRSI;
        disp(&b_st, w_emlrt_marshallOut(&b_st, extram3_data, extram3_size),
             &q_emlrtMCI);
      }

      if (extram2_size[1] != 0) {
        b_st.site = &gdb_emlrtRSI;
        disp(&b_st, w_emlrt_marshallOut(&b_st, extram2_data, extram2_size),
             &t_emlrtMCI);
      }
    }

    emxInit_real_T(&st, &outliers, 1, &kd_emlrtRTEI, true);
    if (ndecl > 0.0) {
      /*  Now find the list of the units declared as outliers */
      /*  bsel=~isnan(bb(:,tr-init+1)); */
      /*  ListOut=setdiff(1:n,bsel,1); */
      if (b_Y->size[0] < 5000) {
        d = (real_T)out->cov->size[1] - ndecl;
        if (d != (int32_T)muDoubleScalarFloor(d)) {
          emlrtIntegerCheckR2012b(d, &emlrtDCI, &st);
        }

        if (((int32_T)d < 1) || ((int32_T)d > out->cov->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, out->cov->size[1],
            &b_emlrtBCI, &st);
        }

        loop_ub = out->cov->size[0];
        i = b_m0->size[0];
        b_m0->size[0] = out->cov->size[0];
        emxEnsureCapacity_real_T(&st, b_m0, i, &rc_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          b_m0->data[i] = out->cov->data[i + out->cov->size[0] * ((int32_T)d - 1)];
        }

        i = x->size[0];
        x->size[0] = b_m0->size[0];
        emxEnsureCapacity_boolean_T(&st, x, i, &tc_emlrtRTEI);
        loop_ub = b_m0->size[0];
        for (i = 0; i < loop_ub; i++) {
          x->data[i] = muDoubleScalarIsNaN(b_m0->data[i]);
        }

        idx = x->size[0] - 1;
        a = 0;
        for (b_i = 0; b_i <= idx; b_i++) {
          if (x->data[b_i]) {
            a++;
          }
        }

        i = outliers->size[0];
        outliers->size[0] = a;
        emxEnsureCapacity_real_T(&st, outliers, i, &qc_emlrtRTEI);
        irank = 0;
        for (b_i = 0; b_i <= idx; b_i++) {
          if (x->data[b_i]) {
            if (b_i + 1 > seq->size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                &ci_emlrtBCI, &st);
            }

            outliers->data[irank] = seq->data[b_i];
            irank++;
          }
        }
      } else {
        emxInit_real_T(&st, &a__1, 2, &ld_emlrtRTEI, true);
        b_st.site = &ic_emlrtRSI;
        FSMbsb(&b_st, b_Y, b_m0, (real_T)b_Y->size[0] - ndecl, (real_T)b_Y->
               size[0] - ndecl, a__1, out->cov);
        i = r->size[0] * r->size[1];
        r->size[0] = out->cov->size[0];
        r->size[1] = out->cov->size[1];
        emxEnsureCapacity_boolean_T(&st, r, i, &pc_emlrtRTEI);
        loop_ub = out->cov->size[0] * out->cov->size[1];
        emxFree_real_T(&a__1);
        for (i = 0; i < loop_ub; i++) {
          r->data[i] = muDoubleScalarIsNaN(out->cov->data[i]);
        }

        idx = r->size[0] * r->size[1] - 1;
        a = 0;
        for (b_i = 0; b_i <= idx; b_i++) {
          if (r->data[b_i]) {
            a++;
          }
        }

        i = outliers->size[0];
        outliers->size[0] = a;
        emxEnsureCapacity_real_T(&st, outliers, i, &qc_emlrtRTEI);
        irank = 0;
        for (b_i = 0; b_i <= idx; b_i++) {
          if (r->data[b_i]) {
            if ((b_i + 1 < 1) || (b_i + 1 > seq->size[0])) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                &ni_emlrtBCI, &st);
            }

            outliers->data[irank] = seq->data[b_i];
            irank++;
          }
        }
      }

      loop_ub = outliers->size[0];
      for (i = 0; i < loop_ub; i++) {
        i1 = (int32_T)outliers->data[i];
        if (outliers->data[i] != i1) {
          emlrtIntegerCheckR2012b(outliers->data[i], &i_emlrtDCI, &st);
        }

        if (i1 > b_Y->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, b_Y->size[0], &hi_emlrtBCI, &st);
        }
      }
    } else {
      i = outliers->size[0];
      outliers->size[0] = 1;
      emxEnsureCapacity_real_T(&st, outliers, i, &oc_emlrtRTEI);
      outliers->data[0] = rtNaN;
    }

    emxFree_boolean_T(&x);

    /* compute locatione and covariance matrix */
    if (b_Y->size[0] < 1) {
      loc->size[0] = 1;
      loc->size[1] = 0;
    } else {
      i = loc->size[0] * loc->size[1];
      loc->size[0] = 1;
      loc->size[1] = b_Y->size[0];
      emxEnsureCapacity_real_T(&st, loc, i, &vb_emlrtRTEI);
      loop_ub = b_Y->size[0] - 1;
      for (i = 0; i <= loop_ub; i++) {
        loc->data[i] = (real_T)i + 1.0;
      }
    }

    b_st.site = &jc_emlrtRSI;
    c_st.site = &rbb_emlrtRSI;
    d_st.site = &ibb_emlrtRSI;
    b_do_vectors(&d_st, loc, outliers, goodobs, ia, &irank);
    loop_ub = b_Y->size[1];
    i = c_Y->size[0] * c_Y->size[1];
    c_Y->size[0] = goodobs->size[1];
    c_Y->size[1] = b_Y->size[1];
    emxEnsureCapacity_real_T(&st, c_Y, i, &uc_emlrtRTEI);
    emxFree_int32_T(&ia);
    for (i = 0; i < loop_ub; i++) {
      irank = goodobs->size[1];
      for (i1 = 0; i1 < irank; i1++) {
        if (goodobs->data[i1] != (int32_T)muDoubleScalarFloor(goodobs->data[i1]))
        {
          emlrtIntegerCheckR2012b(goodobs->data[i1], &h_emlrtDCI, &st);
        }

        k = (int32_T)goodobs->data[i1];
        if ((k < 1) || (k > b_Y->size[0])) {
          emlrtDynamicBoundsCheckR2012b(k, 1, b_Y->size[0], &ih_emlrtBCI, &st);
        }

        c_Y->data[i1 + c_Y->size[0] * i] = b_Y->data[(k + b_Y->size[0] * i) - 1];
      }
    }

    b_st.site = &kc_emlrtRSI;
    b_mean(&b_st, c_Y, loc);
    loop_ub = b_Y->size[1];
    i = c_Y->size[0] * c_Y->size[1];
    c_Y->size[0] = goodobs->size[1];
    c_Y->size[1] = b_Y->size[1];
    emxEnsureCapacity_real_T(&st, c_Y, i, &vc_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      irank = goodobs->size[1];
      for (i1 = 0; i1 < irank; i1++) {
        k = (int32_T)goodobs->data[i1];
        if ((k < 1) || (k > b_Y->size[0])) {
          emlrtDynamicBoundsCheckR2012b(k, 1, b_Y->size[0], &wh_emlrtBCI, &st);
        }

        c_Y->data[i1 + c_Y->size[0] * i] = b_Y->data[(k + b_Y->size[0] * i) - 1];
      }
    }

    b_st.site = &lc_emlrtRSI;
    cov(&b_st, c_Y, out->cov);
    b_st.site = &mc_emlrtRSI;
    mahalFS(&b_st, b_Y, loc, out->cov, b_m0);

    /*  Scatter plot matrix with the outliers shown with a different symbol */
    /*  Structure returned by function FSM */
    /*  If you wish that the output also contains the list of units not declared */
    /*  as outliers, please uncomment the two following lines. */
    /* ListIn=seq(~isnan(bb(:,end-ndecl))); */
    /* out.ListIn=ListIn; */
    i = out->outliers->size[0] * out->outliers->size[1];
    out->outliers->size[0] = outliers->size[0];
    out->outliers->size[1] = 1;
    emxEnsureCapacity_real_T(&st, out->outliers, i, &xc_emlrtRTEI);
    loop_ub = outliers->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->outliers->data[i] = outliers->data[i];
    }

    emxFree_real_T(&outliers);
    i = out->loc->size[0] * out->loc->size[1];
    out->loc->size[0] = 1;
    out->loc->size[1] = loc->size[1];
    emxEnsureCapacity_real_T(&st, out->loc, i, &yc_emlrtRTEI);
    loop_ub = loc->size[1];
    for (i = 0; i < loop_ub; i++) {
      out->loc->data[i] = loc->data[i];
    }

    i = out->md->size[0] * out->md->size[1];
    out->md->size[0] = b_m0->size[0];
    out->md->size[1] = 1;
    emxEnsureCapacity_real_T(&st, out->md, i, &ad_emlrtRTEI);
    loop_ub = b_m0->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->md->data[i] = b_m0->data[i];
    }

    if ((bonflev_size[0] != 0) && (bonflev_size[1] != 0)) {
      out->nout.size[0] = 1;
      out->nout.size[1] = 1;
      out->nout.data[0] = rtNaN;
    }

    out->class.size[0] = 1;
    out->class.size[1] = 3;
    out->class.data[0] = 'F';
    out->class.data[1] = 'S';
    out->class.data[2] = 'M';
  }

  emxFree_real_T(&c_m0);
  emxFree_real_T(&c_Y);
  emxFree_boolean_T(&r);
  emxFree_real_T(&loc);
  emxFree_real_T(&goodobs);
  emxFree_real_T(&b_m0);
  emxFree_real_T(&seq);
  emxFree_real_T(&b_Y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (FSM_wrapper.c) */
