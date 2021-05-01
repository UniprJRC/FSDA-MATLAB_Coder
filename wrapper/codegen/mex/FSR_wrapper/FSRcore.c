/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRcore.c
 *
 * Code generation for function 'FSRcore'
 *
 */

/* Include files */
#include "FSRcore.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_internal_types.h"
#include "FSR_wrapper_mexutil.h"
#include "FSR_wrapper_types.h"
#include "FSRbonfbound.h"
#include "FSRbsb.h"
#include "FSRenvmdr.h"
#include "any.h"
#include "colon.h"
#include "combineVectorElements.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "eml_setop.h"
#include "error.h"
#include "find.h"
#include "ifWhileCond.h"
#include "indexShapeCheck.h"
#include "int2str.h"
#include "isequal.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sortrows.h"
#include "unique.h"
#include "mwmathutil.h"
#include <stdio.h>
#include <string.h>

/* Variable Definitions */
static emlrtRTEInfo d_emlrtRTEI = { 459,/* lineNo */
  21,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 465,/* lineNo */
  25,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 474,/* lineNo */
  25,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 483,/* lineNo */
  25,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 493,/* lineNo */
  25,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 550,/* lineNo */
  17,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRSInfo fib_emlrtRSI = { 1639,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo gib_emlrtRSI = { 1637,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo hib_emlrtRSI = { 1425,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo iib_emlrtRSI = { 1406,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo jib_emlrtRSI = { 1355,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo kib_emlrtRSI = { 1354,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo lib_emlrtRSI = { 1342,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo mib_emlrtRSI = { 1341,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo nib_emlrtRSI = { 1329,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo oib_emlrtRSI = { 1302,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo pib_emlrtRSI = { 1298,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo qib_emlrtRSI = { 1294,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo rib_emlrtRSI = { 1245,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo sib_emlrtRSI = { 1086,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo tib_emlrtRSI = { 1078,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo uib_emlrtRSI = { 1068,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo vib_emlrtRSI = { 1056,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo wib_emlrtRSI = { 1050,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo xib_emlrtRSI = { 1048,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo yib_emlrtRSI = { 922,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo ajb_emlrtRSI = { 920,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo bjb_emlrtRSI = { 913,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo cjb_emlrtRSI = { 911,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo djb_emlrtRSI = { 901,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo ejb_emlrtRSI = { 898,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo fjb_emlrtRSI = { 869,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo gjb_emlrtRSI = { 629,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo hjb_emlrtRSI = { 627,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo ijb_emlrtRSI = { 598,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo jjb_emlrtRSI = { 594,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo kjb_emlrtRSI = { 579,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo ljb_emlrtRSI = { 562,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo mjb_emlrtRSI = { 550,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo njb_emlrtRSI = { 534,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo ojb_emlrtRSI = { 525,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo pjb_emlrtRSI = { 523,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo qjb_emlrtRSI = { 518,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo rjb_emlrtRSI = { 516,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo sjb_emlrtRSI = { 500,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo tjb_emlrtRSI = { 495,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo ujb_emlrtRSI = { 493,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo vjb_emlrtRSI = { 485,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo wjb_emlrtRSI = { 483,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo xjb_emlrtRSI = { 476,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo yjb_emlrtRSI = { 474,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo akb_emlrtRSI = { 467,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo bkb_emlrtRSI = { 465,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo ckb_emlrtRSI = { 459,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo dkb_emlrtRSI = { 423,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo ekb_emlrtRSI = { 421,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo fkb_emlrtRSI = { 415,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo gkb_emlrtRSI = { 413,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo hkb_emlrtRSI = { 407,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo ikb_emlrtRSI = { 405,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo jkb_emlrtRSI = { 401,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo kkb_emlrtRSI = { 371,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo lkb_emlrtRSI = { 359,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo mkb_emlrtRSI = { 350,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo nkb_emlrtRSI = { 306,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo okb_emlrtRSI = { 290,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo pkb_emlrtRSI = { 275,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo qkb_emlrtRSI = { 274,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo rkb_emlrtRSI = { 224,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo skb_emlrtRSI = { 223,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo tkb_emlrtRSI = { 199,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo jmb_emlrtRSI = { 44,/* lineNo */
  "unique",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"/* pathName */
};

static emlrtMCInfo ub_emlrtMCI = { 381,/* lineNo */
  5,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo vb_emlrtMCI = { 382,/* lineNo */
  5,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo wb_emlrtMCI = { 627,/* lineNo */
  17,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo xb_emlrtMCI = { 1249,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo yb_emlrtMCI = { 511,/* lineNo */
  17,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo ac_emlrtMCI = { 868,/* lineNo */
  13,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo bc_emlrtMCI = { 869,/* lineNo */
  13,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo cc_emlrtMCI = { 532,/* lineNo */
  17,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo dc_emlrtMCI = { 516,/* lineNo */
  21,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo ec_emlrtMCI = { 401,/* lineNo */
  21,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo fc_emlrtMCI = { 1258,/* lineNo */
  5,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo gc_emlrtMCI = { 1259,/* lineNo */
  5,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo hc_emlrtMCI = { 523,/* lineNo */
  21,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo ic_emlrtMCI = { 1264,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo jc_emlrtMCI = { 1243,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo kc_emlrtMCI = { 1244,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo lc_emlrtMCI = { 1269,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo mc_emlrtMCI = { 1245,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo nc_emlrtMCI = { 405,/* lineNo */
  25,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo oc_emlrtMCI = { 551,/* lineNo */
  17,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo pc_emlrtMCI = { 413,/* lineNo */
  25,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo qc_emlrtMCI = { 421,/* lineNo */
  25,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo rc_emlrtMCI = { 562,/* lineNo */
  25,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo sc_emlrtMCI = { 913,/* lineNo */
  25,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo tc_emlrtMCI = { 914,/* lineNo */
  25,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo uc_emlrtMCI = { 611,/* lineNo */
  21,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo vc_emlrtMCI = { 922,/* lineNo */
  25,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo wc_emlrtMCI = { 597,/* lineNo */
  25,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo xc_emlrtMCI = { 598,/* lineNo */
  25,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo yc_emlrtMCI = { 1086,/* lineNo */
  21,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo ad_emlrtMCI = { 1050,/* lineNo */
  21,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo bd_emlrtMCI = { 1051,/* lineNo */
  21,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo cd_emlrtMCI = { 353,/* lineNo */
  13,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo dd_emlrtMCI = { 354,/* lineNo */
  13,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtMCInfo ed_emlrtMCI = { 1076,/* lineNo */
  21,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 46,/* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 76,/* lineNo */
  9,                                   /* colNo */
  "sumprod",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

static emlrtECInfo hd_emlrtECI = { 2,  /* nDims */
  223,                                 /* lineNo */
  22,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtBCInfo cu_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  330,                                 /* lineNo */
  22,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo du_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  330,                                 /* lineNo */
  30,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eu_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  335,                                 /* lineNo */
  19,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fu_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  335,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo id_emlrtECI = { -1, /* nDims */
  335,                                 /* lineNo */
  13,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtBCInfo gu_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  336,                                 /* lineNo */
  19,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hu_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  336,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo jd_emlrtECI = { -1, /* nDims */
  336,                                 /* lineNo */
  13,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtBCInfo iu_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  337,                                 /* lineNo */
  19,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ju_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  337,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo kd_emlrtECI = { -1, /* nDims */
  337,                                 /* lineNo */
  13,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtBCInfo ku_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  338,                                 /* lineNo */
  19,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lu_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  338,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ld_emlrtECI = { -1, /* nDims */
  338,                                 /* lineNo */
  13,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtBCInfo mu_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  339,                                 /* lineNo */
  19,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nu_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  339,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo md_emlrtECI = { -1, /* nDims */
  339,                                 /* lineNo */
  13,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtBCInfo ou_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  399,                                 /* lineNo */
  24,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pu_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  399,                                 /* lineNo */
  52,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qu_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  399,                                 /* lineNo */
  82,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ru_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  399,                                 /* lineNo */
  111,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo su_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  399,                                 /* lineNo */
  137,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tu_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  403,                                 /* lineNo */
  27,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uu_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  403,                                 /* lineNo */
  55,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vu_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  403,                                 /* lineNo */
  85,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wu_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  411,                                 /* lineNo */
  27,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xu_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  419,                                 /* lineNo */
  27,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yu_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  424,                                 /* lineNo */
  32,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo av_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  432,                                 /* lineNo */
  25,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  432,                                 /* lineNo */
  27,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  432,                                 /* lineNo */
  35,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  432,                                 /* lineNo */
  37,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ev_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  451,                                 /* lineNo */
  33,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  451,                                 /* lineNo */
  66,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  451,                                 /* lineNo */
  97,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  452,                                 /* lineNo */
  35,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo iv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  452,                                 /* lineNo */
  64,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  452,                                 /* lineNo */
  97,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  453,                                 /* lineNo */
  32,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  454,                                 /* lineNo */
  32,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  459,                                 /* lineNo */
  89,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  465,                                 /* lineNo */
  116,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ov_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  465,                                 /* lineNo */
  127,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  465,                                 /* lineNo */
  140,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  474,                                 /* lineNo */
  116,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  474,                                 /* lineNo */
  129,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  474,                                 /* lineNo */
  140,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  483,                                 /* lineNo */
  128,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  486,                                 /* lineNo */
  32,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  493,                                 /* lineNo */
  66,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  496,                                 /* lineNo */
  32,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  507,                                 /* lineNo */
  23,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yv_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  507,                                 /* lineNo */
  48,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo aw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  514,                                 /* lineNo */
  23,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  521,                                 /* lineNo */
  23,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  527,                                 /* lineNo */
  24,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  528,                                 /* lineNo */
  23,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ew_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  535,                                 /* lineNo */
  24,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  537,                                 /* lineNo */
  20,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  537,                                 /* lineNo */
  22,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  537,                                 /* lineNo */
  30,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo iw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  537,                                 /* lineNo */
  32,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  560,                                 /* lineNo */
  26,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  560,                                 /* lineNo */
  55,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  560,                                 /* lineNo */
  87,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  573,                                 /* lineNo */
  37,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  574,                                 /* lineNo */
  37,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ow_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  574,                                 /* lineNo */
  54,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  579,                                 /* lineNo */
  28,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  579,                                 /* lineNo */
  32,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  579,                                 /* lineNo */
  36,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  579,                                 /* lineNo */
  46,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  579,                                 /* lineNo */
  50,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  579,                                 /* lineNo */
  54,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo nd_emlrtECI = { -1, /* nDims */
  579,                                 /* lineNo */
  24,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtBCInfo vw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  595,                                 /* lineNo */
  26,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ww_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  595,                                 /* lineNo */
  34,                                  /* colNo */
  "gval",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  595,                                 /* lineNo */
  36,                                  /* colNo */
  "gval",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yw_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  625,                                 /* lineNo */
  19,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ax_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  630,                                 /* lineNo */
  24,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo vc_emlrtRTEI = { 895,/* lineNo */
  16,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = { 904,/* lineNo */
  20,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtBCInfo bx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  909,                                 /* lineNo */
  27,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  918,                                 /* lineNo */
  54,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1048,                                /* lineNo */
  26,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ex_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1048,                                /* lineNo */
  31,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1048,                                /* lineNo */
  35,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1048,                                /* lineNo */
  42,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1048,                                /* lineNo */
  47,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ix_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1048,                                /* lineNo */
  61,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo od_emlrtECI = { -1, /* nDims */
  1048,                                /* lineNo */
  20,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtBCInfo jx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1056,                                /* lineNo */
  30,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1056,                                /* lineNo */
  35,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1056,                                /* lineNo */
  39,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1056,                                /* lineNo */
  48,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1056,                                /* lineNo */
  53,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ox_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1056,                                /* lineNo */
  57,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo px_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1056,                                /* lineNo */
  64,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1056,                                /* lineNo */
  69,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1056,                                /* lineNo */
  83,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo pd_emlrtECI = { -1, /* nDims */
  1056,                                /* lineNo */
  42,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtBCInfo sx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1067,                                /* lineNo */
  30,                                  /* colNo */
  "gfind",                             /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1067,                                /* lineNo */
  39,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ux_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1068,                                /* lineNo */
  49,                                  /* colNo */
  "gfind",                             /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1068,                                /* lineNo */
  58,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1068,                                /* lineNo */
  41,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qd_emlrtDCI = { 1068,/* lineNo */
  43,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1068,                                /* lineNo */
  43,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yx_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1329,                                /* lineNo */
  38,                                  /* colNo */
  "BB",                                /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rd_emlrtDCI = { 1334,/* lineNo */
  32,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ay_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1334,                                /* lineNo */
  32,                                  /* colNo */
  "bb",                                /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo sd_emlrtDCI = { 1346,/* lineNo */
  31,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo by_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1346,                                /* lineNo */
  31,                                  /* colNo */
  "Xy",                                /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo td_emlrtDCI = { 1346,/* lineNo */
  45,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cy_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1346,                                /* lineNo */
  45,                                  /* colNo */
  "Xy",                                /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dy_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1354,                                /* lineNo */
  21,                                  /* colNo */
  "add",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ey_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1354,                                /* lineNo */
  23,                                  /* colNo */
  "add",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ud_emlrtDCI = { 1405,/* lineNo */
  23,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fy_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1405,                                /* lineNo */
  23,                                  /* colNo */
  "Bcoeff",                            /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gy_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1424,                                /* lineNo */
  23,                                  /* colNo */
  "Bcoeff",                            /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo vd_emlrtDCI = { 1635,/* lineNo */
  32,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hy_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1635,                                /* lineNo */
  32,                                  /* colNo */
  "bb",                                /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo wd_emlrtDCI = { 290,/* lineNo */
  41,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo xd_emlrtDCI = { 290,/* lineNo */
  41,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo iy_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  329,                                 /* lineNo */
  13,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jy_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  330,                                 /* lineNo */
  15,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ky_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  625,                                 /* lineNo */
  13,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ly_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  625,                                 /* lineNo */
  22,                                  /* colNo */
  "bonfthresh",                        /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo my_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  627,                                 /* lineNo */
  38,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ny_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  507,                                 /* lineNo */
  17,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oy_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  507,                                 /* lineNo */
  26,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo py_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  629,                                 /* lineNo */
  38,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qy_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  507,                                 /* lineNo */
  42,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ry_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  507,                                 /* lineNo */
  51,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sy_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1239,                                /* lineNo */
  17,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ty_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  399,                                 /* lineNo */
  18,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uy_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  399,                                 /* lineNo */
  27,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vy_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  528,                                 /* lineNo */
  17,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wy_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  528,                                 /* lineNo */
  26,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xy_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  399,                                 /* lineNo */
  44,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yy_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  399,                                 /* lineNo */
  55,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo aab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  451,                                 /* lineNo */
  27,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  451,                                 /* lineNo */
  40,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  399,                                 /* lineNo */
  105,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  399,                                 /* lineNo */
  114,                                 /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  399,                                 /* lineNo */
  74,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  399,                                 /* lineNo */
  85,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  514,                                 /* lineNo */
  17,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  514,                                 /* lineNo */
  26,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo iab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  451,                                 /* lineNo */
  58,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  451,                                 /* lineNo */
  71,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  399,                                 /* lineNo */
  131,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  399,                                 /* lineNo */
  140,                                 /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  516,                                 /* lineNo */
  43,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  534,                                 /* lineNo */
  42,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  521,                                 /* lineNo */
  17,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  521,                                 /* lineNo */
  26,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  518,                                 /* lineNo */
  46,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  451,                                 /* lineNo */
  89,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  451,                                 /* lineNo */
  102,                                 /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  401,                                 /* lineNo */
  93,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  523,                                 /* lineNo */
  44,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  452,                                 /* lineNo */
  27,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  452,                                 /* lineNo */
  40,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  403,                                 /* lineNo */
  21,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  403,                                 /* lineNo */
  30,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo abb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  525,                                 /* lineNo */
  46,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  452,                                 /* lineNo */
  58,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  452,                                 /* lineNo */
  71,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  403,                                 /* lineNo */
  47,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ebb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  403,                                 /* lineNo */
  58,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  452,                                 /* lineNo */
  89,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  452,                                 /* lineNo */
  102,                                 /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  403,                                 /* lineNo */
  77,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ibb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  403,                                 /* lineNo */
  88,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  411,                                 /* lineNo */
  21,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  411,                                 /* lineNo */
  30,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  453,                                 /* lineNo */
  26,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  453,                                 /* lineNo */
  39,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  405,                                 /* lineNo */
  48,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo obb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  554,                                 /* lineNo */
  18,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  413,                                 /* lineNo */
  47,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  407,                                 /* lineNo */
  50,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  556,                                 /* lineNo */
  16,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  454,                                 /* lineNo */
  26,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  454,                                 /* lineNo */
  39,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ubb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  419,                                 /* lineNo */
  21,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  419,                                 /* lineNo */
  30,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  415,                                 /* lineNo */
  50,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xbb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  405,                                 /* lineNo */
  102,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ybb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1046,                                /* lineNo */
  13,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo acb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  407,                                 /* lineNo */
  110,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bcb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  421,                                 /* lineNo */
  47,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ccb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  405,                                 /* lineNo */
  158,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dcb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  423,                                 /* lineNo */
  50,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ecb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  407,                                 /* lineNo */
  172,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fcb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  560,                                 /* lineNo */
  20,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gcb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  560,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hcb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1425,                                /* lineNo */
  21,                                  /* colNo */
  "S2",                                /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo icb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  560,                                 /* lineNo */
  47,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jcb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  560,                                 /* lineNo */
  58,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kcb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  909,                                 /* lineNo */
  20,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lcb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  909,                                 /* lineNo */
  30,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mcb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  560,                                 /* lineNo */
  79,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ncb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  560,                                 /* lineNo */
  90,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ocb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  574,                                 /* lineNo */
  28,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pcb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  467,                                 /* lineNo */
  50,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qcb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  911,                                 /* lineNo */
  48,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rcb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  562,                                 /* lineNo */
  116,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo scb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  918,                                 /* lineNo */
  47,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tcb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  918,                                 /* lineNo */
  57,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ucb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  574,                                 /* lineNo */
  45,                                  /* colNo */
  "gmin",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vcb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  476,                                 /* lineNo */
  50,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wcb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  467,                                 /* lineNo */
  109,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xcb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1334,                                /* lineNo */
  21,                                  /* colNo */
  "seq",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ycb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  920,                                 /* lineNo */
  48,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo adb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  485,                                 /* lineNo */
  50,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bdb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  476,                                 /* lineNo */
  109,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cdb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  467,                                 /* lineNo */
  168,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ddb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  913,                                 /* lineNo */
  82,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo edb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  476,                                 /* lineNo */
  170,                                 /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fdb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  922,                                 /* lineNo */
  82,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gdb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  495,                                 /* lineNo */
  50,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo yd_emlrtDCI = { 1340,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hdb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1298,                                /* lineNo */
  28,                                  /* colNo */
  "bb",                                /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo idb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  595,                                 /* lineNo */
  20,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jdb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  335,                                 /* lineNo */
  13,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kdb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  336,                                 /* lineNo */
  13,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ldb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  337,                                 /* lineNo */
  13,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mdb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  338,                                 /* lineNo */
  13,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ndb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  339,                                 /* lineNo */
  13,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo odb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1635,                                /* lineNo */
  20,                                  /* colNo */
  "seq",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pdb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1637,                                /* lineNo */
  26,                                  /* colNo */
  "S2",                                /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ae_emlrtDCI = { 1637,/* lineNo */
  26,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qdb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1346,                                /* lineNo */
  31,                                  /* colNo */
  "good",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rdb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1346,                                /* lineNo */
  45,                                  /* colNo */
  "ListOut",                           /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sdb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1331,                                /* lineNo */
  36,                                  /* colNo */
  "bb",                                /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tdb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1299,                                /* lineNo */
  33,                                  /* colNo */
  "bb",                                /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo udb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1348,                                /* lineNo */
  29,                                  /* colNo */
  "good",                              /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vdb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1348,                                /* lineNo */
  21,                                  /* colNo */
  "add",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wdb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1406,                                /* lineNo */
  21,                                  /* colNo */
  "S2",                                /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo be_emlrtDCI = { 1406,/* lineNo */
  21,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xdb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1331,                                /* lineNo */
  25,                                  /* colNo */
  "seq",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ce_emlrtDCI = { 1408,/* lineNo */
  11,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ydb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1408,                                /* lineNo */
  11,                                  /* colNo */
  "group",                             /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo aeb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1299,                                /* lineNo */
  21,                                  /* colNo */
  "seq",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo beb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1059,                                /* lineNo */
  29,                                  /* colNo */
  "gfind",                             /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ceb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1071,                                /* lineNo */
  25,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo deb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1068,                                /* lineNo */
  63,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eeb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1069,                                /* lineNo */
  25,                                  /* colNo */
  "tr",                                /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo feb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  424,                                 /* lineNo */
  34,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo geb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  416,                                 /* lineNo */
  40,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo heb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  416,                                 /* lineNo */
  32,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ieb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  408,                                 /* lineNo */
  40,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jeb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  408,                                 /* lineNo */
  32,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo keb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  496,                                 /* lineNo */
  36,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo leb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  486,                                 /* lineNo */
  36,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo meb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  477,                                 /* lineNo */
  40,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo neb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  477,                                 /* lineNo */
  32,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oeb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  468,                                 /* lineNo */
  40,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo peb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  468,                                 /* lineNo */
  32,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qeb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  527,                                 /* lineNo */
  28,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo reb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  535,                                 /* lineNo */
  28,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo seb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  630,                                 /* lineNo */
  28,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ibb_emlrtRTEI = { 202,/* lineNo */
  1,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo jbb_emlrtRTEI = { 1616,/* lineNo */
  1,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo kbb_emlrtRTEI = { 223,/* lineNo */
  22,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo lbb_emlrtRTEI = { 234,/* lineNo */
  15,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo mbb_emlrtRTEI = { 297,/* lineNo */
  5,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo nbb_emlrtRTEI = { 294,/* lineNo */
  5,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo obb_emlrtRTEI = { 290,/* lineNo */
  41,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo pbb_emlrtRTEI = { 328,/* lineNo */
  5,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo qbb_emlrtRTEI = { 363,/* lineNo */
  1,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo rbb_emlrtRTEI = { 1,/* lineNo */
  16,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo sbb_emlrtRTEI = { 290,/* lineNo */
  21,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo tbb_emlrtRTEI = { 329,/* lineNo */
  5,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo ubb_emlrtRTEI = { 330,/* lineNo */
  15,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo vbb_emlrtRTEI = { 290,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo wbb_emlrtRTEI = { 330,/* lineNo */
  10,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo xbb_emlrtRTEI = { 330,/* lineNo */
  5,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo ybb_emlrtRTEI = { 1412,/* lineNo */
  5,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo acb_emlrtRTEI = { 1424,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo bcb_emlrtRTEI = { 1334,/* lineNo */
  27,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo ccb_emlrtRTEI = { 1334,/* lineNo */
  21,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo dcb_emlrtRTEI = { 1608,/* lineNo */
  1,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo ecb_emlrtRTEI = { 1294,/* lineNo */
  20,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo fcb_emlrtRTEI = { 1048,/* lineNo */
  20,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo gcb_emlrtRTEI = { 1334,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo hcb_emlrtRTEI = { 1624,/* lineNo */
  1,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo icb_emlrtRTEI = { 1340,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo jcb_emlrtRTEI = { 1649,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo kcb_emlrtRTEI = { 1643,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo lcb_emlrtRTEI = { 1298,/* lineNo */
  16,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo mcb_emlrtRTEI = { 1635,/* lineNo */
  27,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo ncb_emlrtRTEI = { 579,/* lineNo */
  24,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo ocb_emlrtRTEI = { 1056,/* lineNo */
  42,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo pcb_emlrtRTEI = { 1635,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo qcb_emlrtRTEI = { 1056,/* lineNo */
  17,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo rcb_emlrtRTEI = { 1342,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo scb_emlrtRTEI = { 1636,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo tcb_emlrtRTEI = { 1331,/* lineNo */
  25,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo ucb_emlrtRTEI = { 1299,/* lineNo */
  21,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo vcb_emlrtRTEI = { 1059,/* lineNo */
  29,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo wcb_emlrtRTEI = { 1331,/* lineNo */
  13,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo xcb_emlrtRTEI = { 1354,/* lineNo */
  13,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo ycb_emlrtRTEI = { 1355,/* lineNo */
  24,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo adb_emlrtRTEI = { 1639,/* lineNo */
  36,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo bdb_emlrtRTEI = { 1302,/* lineNo */
  38,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo cdb_emlrtRTEI = { 1346,/* lineNo */
  28,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo ddb_emlrtRTEI = { 1405,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo edb_emlrtRTEI = { 1346,/* lineNo */
  42,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo fdb_emlrtRTEI = { 1329,/* lineNo */
  33,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo gdb_emlrtRTEI = { 1068,/* lineNo */
  25,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo hdb_emlrtRTEI = { 70,/* lineNo */
  35,                                  /* colNo */
  "eml_setop",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"/* pName */
};

static emlrtRTEInfo idb_emlrtRTEI = { 275,/* lineNo */
  10,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo jdb_emlrtRTEI = { 1341,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo kdb_emlrtRTEI = { 1392,/* lineNo */
  9,                                   /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo ldb_emlrtRTEI = { 335,/* lineNo */
  13,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo mdb_emlrtRTEI = { 336,/* lineNo */
  13,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo ndb_emlrtRTEI = { 337,/* lineNo */
  13,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo odb_emlrtRTEI = { 338,/* lineNo */
  13,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo pdb_emlrtRTEI = { 339,/* lineNo */
  13,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo qdb_emlrtRTEI = { 1635,/* lineNo */
  20,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo rdb_emlrtRTEI = { 290,/* lineNo */
  33,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRTEInfo sdb_emlrtRTEI = { 15,/* lineNo */
  9,                                   /* colNo */
  "sum",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pName */
};

static emlrtRTEInfo tdb_emlrtRTEI = { 329,/* lineNo */
  13,                                  /* colNo */
  "FSRcore",                           /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pName */
};

static emlrtRSInfo smb_emlrtRSI = { 1243,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo xmb_emlrtRSI = { 382,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo anb_emlrtRSI = { 381,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo knb_emlrtRSI = { 597,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo onb_emlrtRSI = { 1258,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo pnb_emlrtRSI = { 354,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo tnb_emlrtRSI = { 511,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo unb_emlrtRSI = { 1076,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo vnb_emlrtRSI = { 1244,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo wnb_emlrtRSI = { 1051,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo dob_emlrtRSI = { 1269,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo eob_emlrtRSI = { 1264,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo fob_emlrtRSI = { 1245,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo gob_emlrtRSI = { 1050,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo hob_emlrtRSI = { 1086,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo iob_emlrtRSI = { 914,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo job_emlrtRSI = { 913,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo kob_emlrtRSI = { 922,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo lob_emlrtRSI = { 869,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo mob_emlrtRSI = { 598,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo nob_emlrtRSI = { 562,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo oob_emlrtRSI = { 421,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo pob_emlrtRSI = { 413,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo qob_emlrtRSI = { 405,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo rob_emlrtRSI = { 401,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo sob_emlrtRSI = { 523,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo tob_emlrtRSI = { 516,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo uob_emlrtRSI = { 627,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo bpb_emlrtRSI = { 1249,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo dpb_emlrtRSI = { 353,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo epb_emlrtRSI = { 532,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo fpb_emlrtRSI = { 551,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo gpb_emlrtRSI = { 611,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo hpb_emlrtRSI = { 868,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

static emlrtRSInfo jpb_emlrtRSI = { 1259,/* lineNo */
  "FSRcore",                           /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRcore.m"/* pathName */
};

/* Function Declarations */
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [25]);
static const mxArray *db_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [75]);
static const mxArray *eb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [51]);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[28]);
static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [23]);
static const mxArray *f_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, const
  mxArray *g, const mxArray *h, const mxArray *i, const mxArray *j, emlrtMCInfo *
  location);
static const mxArray *gb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [73]);
static const mxArray *hb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [53]);
static const mxArray *ib_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [76]);
static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [20]);
static const mxArray *jb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [88]);
static const mxArray *kb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [37]);
static const mxArray *l_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [26]);
static const mxArray *lb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [47]);
static const mxArray *mb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [16]);
static const mxArray *nb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [31]);
static const mxArray *ob_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2]);
static const mxArray *q_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [43]);
static const mxArray *s_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [12]);
static const mxArray *t_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [40]);

/* Function Definitions */
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [25])
{
  static const int32_T b_iv[2] = { 1, 25 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 25, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *db_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [75])
{
  static const int32_T b_iv[2] = { 1, 75 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 75, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *eb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [51])
{
  static const int32_T b_iv[2] = { 1, 51 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 51, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[28])
{
  static const int32_T b_iv[2] = { 1, 28 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 28, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [23])
{
  static const int32_T b_iv[2] = { 1, 23 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 23, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *f_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, const
  mxArray *g, const mxArray *h, const mxArray *i, const mxArray *j, emlrtMCInfo *
  location)
{
  const mxArray *pArrays[9];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  pArrays[5] = g;
  pArrays[6] = h;
  pArrays[7] = i;
  pArrays[8] = j;
  return emlrtCallMATLABR2012b((emlrtCTX)sp, 1, &m, 9, &pArrays[0], (const
    char_T *)"feval", true, location);
}

static const mxArray *gb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [73])
{
  static const int32_T b_iv[2] = { 1, 73 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 73, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *hb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [53])
{
  static const int32_T b_iv[2] = { 1, 53 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 53, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *ib_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [76])
{
  static const int32_T b_iv[2] = { 1, 76 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 76, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [20])
{
  static const int32_T b_iv[2] = { 1, 20 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 20, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *jb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [88])
{
  static const int32_T b_iv[2] = { 1, 88 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 88, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *kb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [37])
{
  static const int32_T b_iv[2] = { 1, 37 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 37, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *l_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [26])
{
  static const int32_T b_iv[2] = { 1, 26 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 26, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *lb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [47])
{
  static const int32_T b_iv[2] = { 1, 47 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 47, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *mb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [16])
{
  static const int32_T b_iv[2] = { 1, 16 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 16, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *nb_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [31])
{
  static const int32_T b_iv[2] = { 1, 31 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 31, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *ob_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2])
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  y = NULL;
  b_iv[0] = u_size[0];
  b_iv[1] = u_size[1];
  m = emlrtCreateNumericArray(2, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u_size[1]; b_i++) {
    for (c_i = 0; c_i < u_size[0]; c_i++) {
      pData[i] = u_data[c_i + u_size[0] * b_i];
      i++;
    }
  }

  emlrtAssign(&y, m);
  return y;
}

static const mxArray *q_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [43])
{
  static const int32_T b_iv[2] = { 1, 43 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 43, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *s_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [12])
{
  static const int32_T b_iv[2] = { 1, 12 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 12, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *t_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [40])
{
  static const int32_T b_iv[2] = { 1, 40 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 40, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

void FSRcore(const emlrtStack *sp, const emxArray_real_T *INP_y, const
             emxArray_real_T *INP_X, real_T INP_n, real_T INP_p, const
             emxArray_real_T *INP_mdr, real_T INP_init, const emxArray_real_T
             *INP_Un, const emxArray_real_T *INP_bb, const emxArray_real_T
             *INP_Bcoeff, const emxArray_real_T *INP_S2, boolean_T INP_weak,
             const real_T options_bonflev_data[], const int32_T
             options_bonflev_size[2], boolean_T options_msg, struct_T *out)
{
  static const char_T cv40[104] = { 'P', 'e', 'a', 'k', ' ', 'f', 'o', 'l', 'l',
    'o', 'w', 'e', 'd', ' ', 'b', 'y', ' ', 'd', 'i', 'p', ' ', '(', 'r', '_',
    'm', 'i', 'n', ' ', 'i', 's', ' ', 'a', 'b', 'o', 'v', 'e', ' ', '9', '9',
    '.', '9', '9', '%', ' ', 't', 'h', 'r', 'e', 's', 'h', 'o', 'l', 'd', ' ',
    'a', 'n', 'd', ' ', 'i', 'n', ' ', 't', 'h', 'e', ' ', 's', 'u', 'c', 'e',
    's', 's', 'i', 'v', 'e', ' ', 's', 't', 'e', 'p', 's', ' ', 'g', 'o', 'e',
    's', ' ', 'b', 'e', 'l', 'o', 'w', ' ', '1', '%', ' ', 'e', 'n', 'v', 'e',
    'l', 'o', 'p', 'e', ')' };

  static const char_T cv27[103] = { 'P', 'e', 'a', 'k', ' ', 'f', 'o', 'l', 'l',
    'o', 'w', 'e', 'd', ' ', 'b', 'y', ' ', 'd', 'i', 'p', ' ', '(', 'd', '_',
    'm', 'i', 'n', ' ', 'i', 's', ' ', 'a', 'b', 'o', 'v', 'e', ' ', '9', '9',
    '.', '9', '9', '%', ' ', 't', 'h', 'r', 'e', 's', 'h', 'o', 'l', 'd', ' ',
    'a', 'n', 'd', ' ', 'i', 'n', ' ', 't', 'h', 'e', ' ', 's', 'u', 'c', 'e',
    's', 's', 'i', 'v', 'e', ' ', 's', 't', 'e', 'p', 's', ' ', 'g', 'o', 'e',
    's', ' ', 'b', 'e', 'l', 'o', 'w', ' ', '1', '%', ' ', 'e', 'n', 'v', 'e',
    'l', 'o', 'p', 'e' };

  static const char_T cv29[88] = { '\\', 'n', 'r', 'm', 'i', 'n', '(', '%', '.',
    '0', 'f', ',', '%', '.', '0', 'f', ')', '>', '9', '9', '%', '%', ' ', 'a',
    't', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 's', 't', 'e', 'p', ':', ' ', 'B',
    'o', 'n', 'f', 'e', 'r', 'r', 'o', 'n', 'i', ' ', 's', 'i', 'g', 'n', 'a',
    'l', ' ', 'i', 'n', ' ', 't', 'h', 'e', ' ', 'f', 'i', 'n', 'a', 'l', ' ',
    'p', 'a', 'r', 't', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 's', 'e', 'a',
    'r', 'c', 'h', '.' };

  static const char_T cv25[86] = { ' ', 'u', 'n', 'i', 't', 's', ' ', 'i', 's',
    ' ', 'n', 'o', 't', ' ', 'h', 'o', 'm', 'o', 'g', 'e', 'n', 'e', 'o', 'u',
    's', ' ', 'b', 'e', 'c', 'a', 'u', 's', 'e', ' ', 't', 'h', 'e', ' ', 'c',
    'u', 'r', 'v', 'e', ' ', 'w', 'a', 's', ' ', 'a', 'b', 'o', 'v', 'e', ' ',
    '9', '9', '.', '9', '9', '%', ' ', 'a', 'n', 'd', ' ', 'l', 'a', 't', 'e',
    'r', ' ', 'i', 't', ' ', 'w', 'a', 's', ' ', 'b', 'e', 'l', 'o', 'w', ' ',
    '1', '%' };

  static const char_T cv30[76] = { '\\', 'n', 'r', 'm', 'i', 'n', '(', '%', '.',
    '0', 'f', ',', '%', '.', '0', 'f', ')', '>', '9', '9', '.', '9', '%', '%',
    ' ', 'a', 'n', 'd', ' ', 'r', 'm', 'i', 'n', '(', '%', '.', '0', 'f', ',',
    '%', '.', '0', 'f', ')', '>', '9', '9', '.', '9', '%', '%', ' ', 'a', 'n',
    'd', ' ', 'r', 'm', 'i', 'n', '(', '%', '.', '0', 'f', ',', '%', '.', '0',
    'f', ')', '>', '9', '9', '%', '%' };

  static const char_T cv46[75] = { 'U', 's', 'i', 'n', 'g', ' ', 't', 'h', 'e',
    ' ', 'c', 'r', 'i', 't', 'e', 'r', 'i', 'o', 'n', ' ', 'o', 'f', ' ', 't',
    'h', 'e', ' ', 'm', 'a', 'x', 'i', 'm', 'u', 'm', ',', ' ', 't', 'h', 'e',
    ' ', 'g', 'r', 'o', 'u', 'p', ' ', 'o', 'f', ' ', 'h', 'o', 'm', 'o', 'g',
    'e', 'n', 'o', 'u', 's', ' ', 'o', 'b', 's', '.', ' ', 'i', 's', '=', ' ',
    '%', '.', '0', 'f', '\\', 'n' };

  static const char_T cv36[74] = { '3', ' ', 'c', 'o', 'n', 's', 'e', 'c', 'u',
    't', 'i', 'v', 'e', ' ', 'v', 'a', 'l', 'u', 'e', 's', ' ', 'o', 'f', ' ',
    'r', '_', 'm', 'i', 'n', ' ', 'g', 'r', 'e', 'a', 't', 'e', 'r', ' ', 't',
    'h', 'a', 'n', ' ', '9', '9', '.', '9', '9', '9', '%', ' ', 'e', 'n', 'v',
    'e', 'l', 'o', 'p', 'e', ' ', 'i', 'n', ' ', 's', 't', 'e', 'p', ' ', 'm',
    'd', 'a', 'g', '=', ' ' };

  static const char_T cv34[73] = { ')', '>', '9', '9', '%', ' ', 'a', 't', ' ',
    'f', 'i', 'n', 'a', 'l', ' ', 's', 't', 'e', 'p', ':', ' ', 'B', 'o', 'n',
    'f', 'e', 'r', 'r', 'o', 'n', 'i', ' ', 's', 'i', 'g', 'n', 'a', 'l', ' ',
    'i', 'n', ' ', 't', 'h', 'e', ' ', 'c', 'e', 'n', 't', 'r', 'a', 'l', ' ',
    'p', 'a', 'r', 't', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 's', 'e', 'a',
    'r', 'c', 'h', '.' };

  static const char_T cv47[73] = { 'O', 'b', 's', 'e', 'r', 'v', 'e', 'd', ' ',
    'c', 'u', 'r', 'v', 'e', ' ', 'o', 'f', ' ', 'r', '_', 'm', 'i', 'n', ' ',
    'i', 's', ' ', 'a', 't', ' ', 'l', 'e', 'a', 's', 't', ' ', '1', '0', ' ',
    't', 'i', 'm', 'e', 's', ' ', 'g', 'r', 'e', 'a', 't', 'e', 'r', ' ', 't',
    'h', 'a', 'n', ' ', '9', '9', '.', '9', '9', '%', ' ', 'e', 'n', 'v', 'e',
    'l', 'o', 'p', 'e' };

  static const char_T cv23[71] = { ')', '>', '9', '9', '%', ' ', 'a', 't', ' ',
    'f', 'i', 'n', 'a', 'l', ' ', 's', 't', 'e', 'p', ':', ' ', 'B', 'o', 'n',
    'f', 'e', 'r', 'r', 'o', 'n', 'i', ' ', 's', 'i', 'g', 'n', 'a', 'l', ' ',
    'i', 'n', ' ', 't', 'h', 'e', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 'p', 'a',
    'r', 't', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 's', 'e', 'a', 'r', 'c',
    'h', '.' };

  static const char_T b_cv11[55] = { 'T', 'e', 'n', 't', 'a', 't', 'i', 'v', 'e',
    ' ', 's', 'i', 'g', 'n', 'a', 'l', ' ', 'i', 'n', ' ', 'c', 'e', 'n', 't',
    'r', 'a', 'l', ' ', 'p', 'a', 'r', 't', ' ', 'o', 'f', ' ', 't', 'h', 'e',
    ' ', 's', 'e', 'a', 'r', 'c', 'h', ':', ' ', 's', 't', 'e', 'p', ' ', 'm',
    '=' };

  static const char_T cv21[53] = { 'S', 'i', 'g', 'n', 'a', 'l', ' ', 'i', 'n',
    ' ', 'f', 'i', 'n', 'a', 'l', ' ', 'p', 'a', 'r', 't', ' ', 'o', 'f', ' ',
    't', 'h', 'e', ' ', 's', 'e', 'a', 'r', 'c', 'h', ':', ' ', 's', 't', 'e',
    'p', ' ', '%', '.', '0', 'f', ' ', 'b', 'e', 'c', 'a', 'u', 's', 'e' };

  static const char_T b_cv2[51] = { 'S', 'a', 'm', 'p', 'l', 'e', ' ', 's', 'e',
    'e', 'm', 's', ' ', 'h', 'o', 'm', 'o', 'g', 'e', 'n', 'e', 'o', 'u', 's',
    ',', ' ', 'n', 'o', ' ', 'o', 'u', 't', 'l', 'i', 'e', 'r', ' ', 'h', 'a',
    's', ' ', 'b', 'e', 'e', 'n', ' ', 'f', 'o', 'u', 'n', 'd' };

  static const char_T cv32[50] = { '\\', 'n', '-', '-', '-', '-', '-', '-', '-',
    '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
    '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-',
    '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-' };

  static const char_T b_cv14[47] = { 'S', 'i', 'g', 'n', 'a', 'l', ' ', 'v', 'a',
    'l', 'i', 'd', 'a', 't', 'i', 'o', 'n', ' ', 'e', 'x', 'c', 'e', 'e', 'd',
    'a', 'n', 'c', 'e', ' ', 'o', 'f', ' ', 'u', 'p', 'p', 'e', 'r', ' ', 'e',
    'n', 'v', 'e', 'l', 'o', 'p', 'e', 's' };

  static const char_T b_cv7[44] = { 'S', 't', 'a', 'r', 't', ' ', 'r', 'e', 's',
    'u', 'p', 'e', 'r', 'i', 'm', 'p', 'o', 's', 'i', 'n', 'g', ' ', 'e', 'n',
    'v', 'e', 'l', 'o', 'p', 'e', 's', ' ', 'f', 'r', 'o', 'm', ' ', 's', 't',
    'e', 'p', ' ', 'm', '=' };

  static const char_T b_cv9[43] = { 'S', 'i', 'g', 'n', 'a', 'l', ' ', 'i', 's',
    ' ', 'i', 'n', ' ', 'p', 'e', 'n', 'u', 'l', 't', 'i', 'm', 'a', 't', 'e',
    ' ', 's', 't', 'e', 'p', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 's', 'e',
    'a', 'r', 'c', 'h' };

  static const char_T cv45[41] = { 'P', 'r', 'o', 'b', 'a', 'b', 'l', 'y', ' ',
    't', 'h', 'e', 'r', 'e', ' ', 'a', 'r', 'e', ' ', 't', 'w', 'o', ' ', 'o',
    'v', 'e', 'r', 'l', 'a', 'p', 'p', 'i', 'n', 'g', ' ', 'g', 'r', 'o', 'u',
    'p', 's' };

  static const char_T cv28[40] = { 'S', 'u', 'p', 'e', 'r', 'i', 'm', 'p', 'o',
    's', 'i', 't', 'i', 'o', 'n', ' ', 's', 't', 'o', 'p', 'p', 'e', 'd', ' ',
    'b', 'e', 'c', 'a', 'u', 's', 'e', ' ', 'r', '_', '{', 'm', 'i', 'n', '}',
    '(' };

  static const char_T b_cv16[37] = { 'S', 'i', 'g', 'n', 'a', 'l', ' ', 'i', 's',
    ' ', 'i', 'n', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 's', 't', 'e', 'p', ' ',
    'o', 'f', ' ', 't', 'h', 'e', ' ', 's', 'e', 'a', 'r', 'c', 'h' };

  static const char_T b_cv8[37] = { 'N', 'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f',
    ' ', 'u', 'n', 'i', 't', 's', ' ', 'd', 'e', 'c', 'l', 'a', 'r', 'e', 'd',
    ' ', 'a', 's', ' ', 'o', 'u', 't', 'l', 'i', 'e', 'r', 's', '=' };

  static const char_T b_cv4[26] = { 'S', 'u', 'm', 'm', 'a', 'r', 'y', ' ', 'o',
    'f', ' ', 't', 'h', 'e', ' ', 'e', 'x', 'c', 'e', 'e', 'd', 'a', 'n', 'c',
    'e', 's' };

  static const char_T cv33[26] = { '\\', 'n', 'r', 'm', 'i', 'n', '(', '%', '.',
    '0', 'f', ',', '%', '.', '0', 'f', ')', '>', '9', '9', '.', '9', '9', '9',
    '%', '%' };

  static const char_T b_cv13[23] = { '\\', 'n', '-', '-', '-', '-', '-', '-',
    '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '\\', 'n' };

  static const char_T b_cv10[22] = { ')', '>', '9', '9', '%', ' ', 'B', 'o', 'n',
    'f', 'e', 'r', 'r', 'o', 'n', 'i', ' ', 'l', 'e', 'v', 'e', 'l' };

  static const char_T b_cv1[21] = { 'S', 'i', 'g', 'n', 'a', 'l', ' ', 'd', 'e',
    't', 'e', 'c', 't', 'i', 'o', 'n', ' ', 'l', 'o', 'o', 'p' };

  static const char_T cv26[21] = { ' ', 'u', 'n', 'i', 't', 's', ' ', 'i', 's',
    ' ', 'h', 'o', 'm', 'o', 'g', 'e', 'n', 'e', 'o', 'u', 's' };

  static const char_T cv42[20] = { 'f', 'a', 'l', 's', 'e', ' ', 's', 'i', 'g',
    'n', 'a', 'l', ' ', 'i', 'n', ' ', 's', 't', 'e', 'p' };

  static const char_T cv41[18] = { ')', '>', '9', '9', '.', '9', '9', '%', ' ',
    'a', 'n', 'd', ' ', 'r', 'm', 'i', 'n', '(' };

  static const char_T b_cv20[16] = { ')', '>', '9', '9', '$', '\\', '%', ' ',
    'e', 'n', 'v', 'e', 'l', 'o', 'p', 'e' };

  static const char_T cv35[16] = { 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'd',
    ' ', 's', 'i', 'g', 'n', 'a', 'l' };

  static const char_T cv37[16] = { ')', '>', '9', '9', '.', '9', '%', ' ', 'e',
    'n', 'v', 'e', 'l', 'o', 'p', 'e' };

  static const char_T cv38[14] = { 'E', 'x', 't', 'r', 'e', 'm', 'e', ' ', 's',
    'i', 'g', 'n', 'a', 'l' };

  static const char_T cv39[14] = { ')', '>', '9', '9', '%', ' ', 'e', 'n', 'v',
    'e', 'l', 'o', 'p', 'e' };

  static const char_T cv22[13] = { 'S', 'u', 'b', 's', 'a', 'm', 'p', 'l', 'e',
    ' ', 'o', 'f', ' ' };

  static const char_T b_cv6[12] = { 'F', 'i', 'n', 'a', 'l', ' ', 'o', 'u', 't',
    'p', 'u', 't' };

  static const char_T b_cv18[9] = { '$', 'r', '_', '{', 'm', 'i', 'n', '}', '('
  };

  static const char_T cv24[9] = { ')', '>', '9', '9', '.', '9', '9', '9', '%' };

  static const char_T b_cv15[8] = { ' ', 'b', 'e', 'c', 'a', 'u', 's', 'e' };

  static const char_T cv44[8] = { ')', '>', '9', '9', '.', '9', '9', '%' };

  static const char_T b_cv12[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  static const char_T b_cv19[7] = { ')', '>', '9', '9', '.', '9', '%' };

  static const char_T b_cv17[5] = { 'r', 'm', 'i', 'n', '(' };

  static const char_T cv43[5] = { 'm', 'd', 'a', 'g', '=' };

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
  emxArray_boolean_T ii_data;
  emxArray_boolean_T out_data;
  emxArray_boolean_T *b_beta;
  emxArray_boolean_T *b_bool;
  emxArray_boolean_T *b_x;
  emxArray_boolean_T *r2;
  emxArray_char_T_1x310 dqb_emlrtRSI;
  emxArray_int32_T *ia;
  emxArray_int32_T *nz;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_int32_T *r6;
  emxArray_int32_T *r7;
  emxArray_int32_T *r8;
  emxArray_int32_T *r9;
  emxArray_real32_T *BB;
  emxArray_real32_T *b_BB;
  emxArray_real_T c_options_bonflev_data;
  emxArray_real_T d_options_bonflev_data;
  emxArray_real_T *Un;
  emxArray_real_T *Xy;
  emxArray_real_T *add;
  emxArray_real_T *b_Xy;
  emxArray_real_T *beta;
  emxArray_real_T *gbonf;
  emxArray_real_T *gfind;
  emxArray_real_T *gmin;
  emxArray_real_T *gmin1;
  emxArray_real_T *good;
  emxArray_real_T *y;
  real_T b;
  real_T d;
  real_T ii;
  real_T mdag;
  real_T ndecl;
  int32_T b_ii_size[2];
  int32_T b_options_bonflev_size[2];
  int32_T b_tmp_size[2];
  int32_T c_ii_size[2];
  int32_T c_tmp_size[2];
  int32_T d_tmp_size[2];
  int32_T e_tmp_size[2];
  int32_T extram2_size[2];
  int32_T extram3_size[2];
  int32_T f_tmp_size[2];
  int32_T g_tmp_size[2];
  int32_T h_tmp_size[2];
  int32_T i_tmp_size[2];
  int32_T ii_size[2];
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
  int32_T tmp_size[2];
  int32_T b_i;
  int32_T c001;
  int32_T c99;
  int32_T c999;
  int32_T c9999;
  int32_T c99999;
  int32_T c_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub;
  int32_T m;
  int32_T n;
  int32_T nmdr;
  int32_T sto;
  uint32_T uv[31];
  uint32_T uv1[10];
  uint32_T ij;
  char_T r_tmp_data[1012];
  char_T p_tmp_data[677];
  char_T q_tmp_data[675];
  char_T mes_data[648];
  char_T k_tmp_data[409];
  char_T m_tmp_data[399];
  char_T h_tmp_data[397];
  char_T s_tmp_data[384];
  char_T e_tmp_data[373];
  char_T c_tmp_data[354];
  char_T d_tmp_data[347];
  char_T j_tmp_data[344];
  char_T g_tmp_data[335];
  char_T f_tmp_data[333];
  char_T t_tmp_data[315];
  char_T b_tmp_data[310];
  char_T i_tmp_data[310];
  char_T l_tmp_data[310];
  char_T n_tmp_data[310];
  char_T o_tmp_data[310];
  char_T tmp_data[310];
  char_T extram2_data[104];
  char_T cv48[50];
  char_T cv31[40];
  char_T b_cv3[31];
  char_T b_cv5[28];
  char_T b_cv[25];
  char_T extram3_data[14];
  int8_T v_tmp_data[5];
  int8_T sizes_idx_1;
  boolean_T x[31];
  boolean_T b_out_data[5];
  boolean_T u_tmp_data[5];
  boolean_T NoFalseSig;
  boolean_T b_b;
  boolean_T b_guard1 = false;
  boolean_T b_ii_data;
  boolean_T b_options_bonflev_data;
  boolean_T condition2;
  boolean_T condition3;
  boolean_T condition4;
  boolean_T exitg1;
  boolean_T exitg2;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T p;
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
  j_st.prev = &b_st;
  j_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &tkb_emlrtRSI;
  b_st.site = &xf_emlrtRSI;
  st.site = &tkb_emlrtRSI;
  b_st.site = &xf_emlrtRSI;
  st.site = &tkb_emlrtRSI;
  b_st.site = &xf_emlrtRSI;
  st.site = &tkb_emlrtRSI;
  b_st.site = &xf_emlrtRSI;
  st.site = &tkb_emlrtRSI;
  b_st.site = &xf_emlrtRSI;
  st.site = &tkb_emlrtRSI;
  b_st.site = &xf_emlrtRSI;

  /* FSRcore scans the trajectory of mdr to check for exceedances */
  /*  */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*     INP    :   Structure containing monitoring of mdr and other quantities. Structure. */
  /*                Structure containing the following fields. */
  /*    INP.y   =   Response variable. Vector. Response variable, specified as */
  /*                a vector of length n, where n is the number of */
  /*                observations. Each entry in y is the response for the */
  /*                corresponding row of X. */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*   INP.X =      Predictor variables. Matrix. Matrix of explanatory */
  /*                variables (also called 'regressors') of dimension n x p */
  /*                where p denotes the number of explanatory variables */
  /*                including the intercept. */
  /*   INP.n =      Number of observations. Scalar. Number of rows of matrix X. */
  /*   INP.p =      Number of predictor variables. Scalar. Number of columns of */
  /*                matrix X. */
  /*   INP.mdr =    Minimum deletion residual. Matrix.  n -init x 2 matrix */
  /*                which contains the monitoring of minimum deletion residual */
  /*                at each step of the forward search. */
  /*                1st col = fwd search index (from init to n-1). */
  /*                2nd col = minimum deletion residual. */
  /*                Depending on the string 'model', mdr refers to OLS */
  /*                mdr, GLS mdr or Bayes regression mdr. */
  /*   INP.init =   Search initialization. Scalar. */
  /*                It specifies the point where the user has started */
  /*                monitoring mdr. */
  /*   INP.Un  =    Units included in each step. Matrix. */
  /*                (n-init) x 11 matrix which contains the unit(s) included */
  /*                in the subset at each step of the fwd search. */
  /*                REMARK: in every step the new subset is compared with the */
  /*                old subset. Un contains the unit(s) present in the new */
  /*                subset but not in the old one. Un(1,2) for example contains */
  /*                the unit included in step init+1. Un(end,2) contains the */
  /*                units included in the final step of the search. */
  /*                Un has 11 columns because we store up to 10 units */
  /*                simultaneously in each step. */
  /*    INP.bb=     Units included in each step. Matrix. */
  /*                n-by-(n-init+1) or matrix n-by-r matrix which the units */
  /*                belonging to the subset at each step of the forward search */
  /*                or at selected steps. */
  /*   INP.Bcoeff=  Estimated regression coefficients. Matrix. */
  /*                (n-init+1) x (p+1) matrix containing the monitoring of */
  /*                estimated beta coefficients in each step of the forward */
  /*                search. The first column contains the fwd search index. */
  /*                Depending on the string 'model', Bcoeff refers to OLS */
  /*                coefficents, GLS coefficients or Bayes regression */
  /*                coefficients. */
  /*  INP.Hetero=  Estimated coefficients in the skedastic equation. Matrix. */
  /*                (n-init+1) x (r+1) matrix containing the monitoring of */
  /*                estimated skedastic coefficients in each step of the forward */
  /*                search. The first column contains the fwd search index. */
  /*                This input is used just if strcmp(model,'H') */
  /*   INP.S2 =   Estimate of $sigma^2$.  (n-init+1)-by-2 matrix containing the */
  /*                monitoring of S2.  Depending on the string 'model', S2 */
  /*                refers to OLS, GLS or in the Baysian case it is the */
  /*                posterior estimate of $\sigma^2$. */
  /*    INP.Z =     Predictor variables in the regression equation (necessary */
  /*                input just if model='H'). Matrix. */
  /*                n x r matrix or vector of length r. */
  /*                If Z is a n x r matrix it contains the r variables which */
  /*                form the scedastic function as follows (if input option art==1) */
  /*                \[ */
  /*                \omega_i = 1 + exp(\gamma_0 + \gamma_1 Z(i,1) + ...+ \gamma_{r} Z(i,r)) */
  /*                \] */
  /*                If Z is a vector of length r it contains the indexes of the */
  /*                columns of matrix X which form the scedastic function as */
  /*                follows */
  /*                \[ */
  /*                \omega_i = 1 +  exp(\gamma_0 + \gamma_1 X(i,Z(1)) + ...+ */
  /*                \gamma_{r} X(i,Z(r))) */
  /*                \] */
  /*  */
  /*    INP.beta0 = Prior mean of $\beta$ (necessary */
  /*                input just if model='B'). p-times-1 vector. */
  /*    INP.R     = Matrix associated with covariance matrix of $\beta$ (necessary */
  /*                input just if model='B'). p-times-p */
  /*                positive definite matrix. */
  /*                It can be interpreted as X0'X0 where X0 is a n0 x p */
  /*                matrix coming from previous experiments (assuming that the */
  /*                intercept is included in the model) */
  /*  */
  /*                The prior distribution of $\tau_0$ is a gamma distribution with */
  /*                parameters $a_0$ and $b_0$, that is */
  /*  */
  /*                 \[     p(\tau_0) \propto \tau^{a_0-1} \exp (-b_0 \tau) */
  /*                        \qquad   E(\tau_0)= a_0/b_0               \] */
  /*  */
  /*    INP.tau0 =  Prior estimate of tau (necessary */
  /*                input just if model='B'). Scalar. Prior estimate of $\tau=1/ \sigma^2 =a_0/b_0$. */
  /*      INP.n0 =  Number of previous experiments (necessary */
  /*                input just if model='B'). Scalar. Sometimes it helps */
  /*                to think of the prior information as coming from n0 */
  /*                previous experiments. Therefore we assume that matrix X0 */
  /*                (which defines R), was made up of n0 observations. */
  /*                  Data Types - struct */
  /*   model :      type of regression model. Character. */
  /*                Possible values are '' (default) | 'H' | 'B'. */
  /*                '' stands for linear regression; */
  /*                'H' stands for heteroskedastic regression; */
  /*                'B' stands for Bayesian regression. */
  /*                This input is used to reconstruct the units belonging to */
  /*                subset at step n-decl where decl is the number of units */
  /*                declared as outliers. More precisely, if n>5000 matrix BB */
  /*                just contains the units belonging to subset in selected */
  /*                steps, therefore in order to find the units inside subset at */
  /*                step n-decl, FSRcore calls: */
  /*                routine FSRbsb.m in presence of linear regression; */
  /*                routine FSRHbsb.m in presence of heteroskedastic regression; */
  /*                routine FSRBbsb.m in presence of Bayesian regression; */
  /*                  Data Types - char */
  /*     options:   Additional options. Stucture. Structure containing optional */
  /*                parameters which are passed to directly through functions */
  /*                FSR.m, FSRH.m or FSRB.m. */
  /*                  Data Types - struct */
  /*  */
  /*      weak:     Indicator to use a different decision rule to detect */
  /*                the signal and flag outliers. false (default) | true. */
  /*                If weak==false default FSRcore values are used, */
  /*                if weak==true 'stronger' quantiles are used  as a */
  /*                decision rule to trim outliers and VIOM outliers */
  /* 				are the ones entering the Search after the first signal. */
  /*                Example - 'weak',true */
  /*                Data Types - boolean */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*      out :     A structure containing the following fields */
  /*  out.ListOut  =  k x 1 vector containing the list of the units declared as */
  /*                  outliers or NaN if the sample is homogeneous. */
  /*  out.outliers =  out.ListOut. This field is added for homogeneity with the */
  /*                  other robust estimators. */
  /*  out.beta   =  p-by-1 vector containing the estimated regression */
  /*                parameter in step n-k. Depending on the string 'model', */
  /*                beta refers to OLS coefficents, GLS coefficients or Bayes */
  /*                regression coefficients. */
  /*  out.scale   = estimate of the scale. Depending on the string 'model', */
  /*                beta refers to OLS coefficents, GLS coefficients or it is */
  /*                the inverse of the posterior estimate of the square root of tau. */
  /*  out.mdr    =  (n-init) x 2 matrix */
  /*                1st col = fwd search index */
  /*                2nd col = value of minimum deletion residual in each step */
  /*                of the fwd search. Depending on the string 'model', */
  /*                mdr is found using linear regression, heteroskedastic */
  /*                regression or Bayes regression. */
  /*  out.Un     =  (n-init) x 11 matrix which contains the unit(s) included */
  /*                in the subset at each step of the fwd search. */
  /*                REMARK: in every step the new subset is compared with the */
  /*                old subset. Un contains the unit(s) present in the new */
  /*                subset but not in the old one. */
  /*                Un(1,2) for example contains the unit included in step */
  /*                init+1. */
  /*                Un(end,2) contains the units included in the final step */
  /*                of the search. */
  /*  out.nout    = 2 x 5 matrix containing the number of times mdr went out */
  /*                of particular quantiles. */
  /*                First row contains quantiles 1 99 99.9 99.99 99.999. */
  /*                Second row contains the frequency distribution. */
  /*  out.outliersVIOM = m x 1 vector containing the list of the units declared as */
  /*                     VIOM outliers or NaN if they are not present. */
  /*                     Present only if weak == true. */
  /*  out.ListCl =  (n-m-k) x 1 vector of non-outlying units. */
  /*                Present only if weak == true. */
  /*  */
  /*  More About: */
  /*  */
  /*  The rules for declaring units as outliers are the same for standard */
  /*  regression, heteroskedastic regression and Bayesian regression. Therefore */
  /*  this function is called by: */
  /*  FSR.m  = outlier detection procedure for linear regression; */
  /*  FSRB.m = outlier detection procedure in Bayesian linear regression; */
  /*  FSRH.m = outlier detection procedure for heteroskedastic models; */
  /*  If ndecl units are declared as outliers, it is necessary to find the */
  /*  units forming subset at step n-decl. If n<=5000 input matrix INP.bb */
  /*  contains the storing of the units belonging to subset in all steps, else */
  /*  if INP.bb does not contain the units in step n-decl procedure calls */
  /*  routine FSRbsb.m or FSRHbsb.m or FSRBbsb.m. */
  /*  */
  /*  See also: FSR.m, FSRH.m, FSRB.m */
  /*  */
  /*  References: */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Beginning of code */
  /*  Extract required input variables */
  i = out->mdr->size[0] * out->mdr->size[1];
  out->mdr->size[0] = INP_mdr->size[0];
  out->mdr->size[1] = INP_mdr->size[1];
  emxEnsureCapacity_real_T(sp, out->mdr, i, &ibb_emlrtRTEI);
  loop_ub = INP_mdr->size[0] * INP_mdr->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->mdr->data[i] = INP_mdr->data[i];
  }

  i = out->Un->size[0] * out->Un->size[1];
  out->Un->size[0] = INP_Un->size[0];
  out->Un->size[1] = INP_Un->size[1];
  emxEnsureCapacity_real_T(sp, out->Un, i, &jbb_emlrtRTEI);
  loop_ub = INP_Un->size[0] * INP_Un->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->Un->data[i] = INP_Un->data[i];
  }

  /*  Set the intercept */
  /*  intcolumn = the index of the first constant column found in X, or empty. */
  /*  Used here to check if X includes the constant term for the intercept. */
  /*  The variable 'intercept' will be used later for plotting. */
  st.site = &skb_emlrtRSI;
  b_st.site = &db_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  d_st.site = &fb_emlrtRSI;
  if (INP_X->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &lb_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  emxInit_real_T(&d_st, &beta, 2, &kdb_emlrtRTEI, true);
  e_st.site = &gb_emlrtRSI;
  f_st.site = &hb_emlrtRSI;
  g_st.site = &ib_emlrtRSI;
  m = INP_X->size[0];
  n = INP_X->size[1];
  i = beta->size[0] * beta->size[1];
  beta->size[0] = 1;
  beta->size[1] = INP_X->size[1];
  emxEnsureCapacity_real_T(&g_st, beta, i, &jh_emlrtRTEI);
  if (INP_X->size[1] >= 1) {
    h_st.site = &kb_emlrtRSI;
    if (INP_X->size[1] > 2147483646) {
      i_st.site = &ab_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }

    for (nmdr = 0; nmdr < n; nmdr++) {
      beta->data[nmdr] = INP_X->data[INP_X->size[0] * nmdr];
      h_st.site = &jb_emlrtRSI;
      if ((2 <= m) && (m > 2147483646)) {
        i_st.site = &ab_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }

      for (b_i = 2; b_i <= m; b_i++) {
        ndecl = beta->data[nmdr];
        b = INP_X->data[(b_i + INP_X->size[0] * nmdr) - 1];
        p = ((!muDoubleScalarIsNaN(b)) && (muDoubleScalarIsNaN(ndecl) || (ndecl <
               b)));
        if (p) {
          beta->data[nmdr] = b;
        }
      }
    }
  }

  emxInit_real_T(&g_st, &good, 2, &jdb_emlrtRTEI, true);
  st.site = &skb_emlrtRSI;
  b_st.site = &lb_emlrtRSI;
  c_st.site = &mb_emlrtRSI;
  d_st.site = &nb_emlrtRSI;
  e_st.site = &gb_emlrtRSI;
  f_st.site = &hb_emlrtRSI;
  g_st.site = &ib_emlrtRSI;
  m = INP_X->size[0];
  n = INP_X->size[1];
  i = good->size[0] * good->size[1];
  good->size[0] = 1;
  good->size[1] = INP_X->size[1];
  emxEnsureCapacity_real_T(&g_st, good, i, &jh_emlrtRTEI);
  if (INP_X->size[1] >= 1) {
    h_st.site = &kb_emlrtRSI;
    for (nmdr = 0; nmdr < n; nmdr++) {
      good->data[nmdr] = INP_X->data[INP_X->size[0] * nmdr];
      h_st.site = &jb_emlrtRSI;
      if ((2 <= m) && (m > 2147483646)) {
        i_st.site = &ab_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }

      for (b_i = 2; b_i <= m; b_i++) {
        ndecl = good->data[nmdr];
        b = INP_X->data[(b_i + INP_X->size[0] * nmdr) - 1];
        p = ((!muDoubleScalarIsNaN(b)) && (muDoubleScalarIsNaN(ndecl) || (ndecl >
               b)));
        if (p) {
          good->data[nmdr] = b;
        }
      }
    }
  }

  emxInit_boolean_T(&g_st, &b_beta, 2, &kbb_emlrtRTEI, true);
  ii_size[0] = (*(int32_T (*)[2])beta->size)[0];
  ii_size[1] = (*(int32_T (*)[2])beta->size)[1];
  tmp_size[0] = (*(int32_T (*)[2])good->size)[0];
  tmp_size[1] = (*(int32_T (*)[2])good->size)[1];
  emlrtSizeEqCheckNDR2012b(&ii_size[0], &tmp_size[0], &hd_emlrtECI, (emlrtCTX)sp);
  st.site = &skb_emlrtRSI;
  i = b_beta->size[0] * b_beta->size[1];
  b_beta->size[0] = 1;
  b_beta->size[1] = beta->size[1];
  emxEnsureCapacity_boolean_T(&st, b_beta, i, &kbb_emlrtRTEI);
  loop_ub = beta->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_beta->data[i] = (beta->data[i] - good->data[i] == 0.0);
  }

  b_st.site = &ob_emlrtRSI;
  d_eml_find(&b_st, b_beta, (int32_T *)&m, ii_size);
  b_ii_size[0] = 1;
  b_ii_size[1] = ii_size[1];
  loop_ub = ii_size[1];
  for (i = 0; i < loop_ub; i++) {
    ndecl = m;
  }

  st.site = &rkb_emlrtRSI;
  b_any((real_T *)&ndecl, b_ii_size);
  if (muDoubleScalarIsNaN(INP_n)) {
    i = out->ListCl->size[0] * out->ListCl->size[1];
    out->ListCl->size[0] = 1;
    out->ListCl->size[1] = 1;
    emxEnsureCapacity_real_T(sp, out->ListCl, i, &lbb_emlrtRTEI);
    out->ListCl->data[0] = rtNaN;
  } else if (INP_n < 1.0) {
    out->ListCl->size[0] = 1;
    out->ListCl->size[1] = 0;
  } else if (muDoubleScalarIsInf(INP_n) && (1.0 == INP_n)) {
    i = out->ListCl->size[0] * out->ListCl->size[1];
    out->ListCl->size[0] = 1;
    out->ListCl->size[1] = 1;
    emxEnsureCapacity_real_T(sp, out->ListCl, i, &lbb_emlrtRTEI);
    out->ListCl->data[0] = rtNaN;
  } else {
    i = out->ListCl->size[0] * out->ListCl->size[1];
    out->ListCl->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor(INP_n - 1.0);
    out->ListCl->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(sp, out->ListCl, i, &lbb_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      out->ListCl->data[i] = (real_T)i + 1.0;
    }
  }

  /*  Model-related settings */
  /*  correction in case of Bayesian model to account for number of */
  /*  (fictitious) observations in the prior */
  emxInit_real_T(sp, &gbonf, 2, &idb_emlrtRTEI, true);
  emxInit_real_T(sp, &gmin, 2, &nbb_emlrtRTEI, true);
  emxInit_boolean_T(sp, &b_bool, 1, &pbb_emlrtRTEI, true);
  emxInit_real_T(sp, &gmin1, 2, &qbb_emlrtRTEI, true);
  emxInit_real_T(sp, &add, 1, &icb_emlrtRTEI, true);
  emxInit_real_T(sp, &y, 1, &rdb_emlrtRTEI, true);
  emxInit_int32_T(sp, &ia, 1, &tdb_emlrtRTEI, true);
  if ((options_bonflev_size[0] != 0) && (options_bonflev_size[1] != 0)) {
    b_options_bonflev_size[0] = 1;
    b_options_bonflev_size[1] = 1;
    for (i = 0; i < 1; i++) {
      b_options_bonflev_data = (options_bonflev_data[0] < 1.0);
    }

    out_data.data = &b_options_bonflev_data;
    out_data.size = &b_options_bonflev_size[0];
    out_data.allocatedSize = 1;
    out_data.numDimensions = 2;
    out_data.canFreeData = false;
    st.site = &qkb_emlrtRSI;
    if (ifWhileCond(&st, &out_data)) {
      st.site = &pkb_emlrtRSI;
      FSRbonfbound(&st, INP_n, INP_p, options_bonflev_data, options_bonflev_size,
                   INP_init, gbonf);

      /*  correction in case of Bayesian model to account for prior */
      /*  observations */
    } else {
      /*  in this case the threshold is constant therefore there is no need */
      /*  to change n */
      st.site = &okb_emlrtRSI;
      b_st.site = &xc_emlrtRSI;
      if (muDoubleScalarIsNaN(INP_init) || muDoubleScalarIsNaN(INP_n - 1.0)) {
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = 1;
        emxEnsureCapacity_real_T(&b_st, beta, i, &fd_emlrtRTEI);
        beta->data[0] = rtNaN;
      } else if (INP_n - 1.0 < INP_init) {
        beta->size[0] = 1;
        beta->size[1] = 0;
      } else if ((muDoubleScalarIsInf(INP_init) || muDoubleScalarIsInf(INP_n -
                   1.0)) && (INP_init == INP_n - 1.0)) {
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = 1;
        emxEnsureCapacity_real_T(&b_st, beta, i, &fd_emlrtRTEI);
        beta->data[0] = rtNaN;
      } else if (muDoubleScalarFloor(INP_init) == INP_init) {
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        loop_ub = (int32_T)muDoubleScalarFloor((INP_n - 1.0) - INP_init);
        beta->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(&b_st, beta, i, &fd_emlrtRTEI);
        for (i = 0; i <= loop_ub; i++) {
          beta->data[i] = INP_init + (real_T)i;
        }
      } else {
        c_st.site = &yc_emlrtRSI;
        eml_float_colon(&c_st, INP_init, INP_n - 1.0, beta);
      }

      st.site = &okb_emlrtRSI;
      d = INP_n - INP_init;
      if (!(d >= 0.0)) {
        emlrtNonNegativeCheckR2012b(d, &xd_emlrtDCI, &st);
      }

      b = (int32_T)muDoubleScalarFloor(d);
      if (d != b) {
        emlrtIntegerCheckR2012b(d, &wd_emlrtDCI, &st);
      }

      i = add->size[0];
      loop_ub = (int32_T)d;
      add->size[0] = (int32_T)d;
      emxEnsureCapacity_real_T(&st, add, i, &obb_emlrtRTEI);
      if (d != b) {
        emlrtIntegerCheckR2012b(d, &wd_emlrtDCI, &st);
      }

      for (i = 0; i < loop_ub; i++) {
        add->data[i] = 1.0;
      }

      c_options_bonflev_data.data = (real_T *)&options_bonflev_data[0];
      c_options_bonflev_data.size = (int32_T *)&options_bonflev_size[0];
      c_options_bonflev_data.allocatedSize = -1;
      c_options_bonflev_data.numDimensions = 2;
      c_options_bonflev_data.canFreeData = false;
      b_st.site = &x_emlrtRSI;
      dynamic_size_checks(&b_st, &c_options_bonflev_data, add, 1, (int32_T)
                          (INP_n - INP_init));
      d_options_bonflev_data.data = (real_T *)&options_bonflev_data[0];
      d_options_bonflev_data.size = (int32_T *)&options_bonflev_size[0];
      d_options_bonflev_data.allocatedSize = -1;
      d_options_bonflev_data.numDimensions = 2;
      d_options_bonflev_data.canFreeData = false;
      b_st.site = &w_emlrtRSI;
      mtimes(&b_st, &d_options_bonflev_data, add, y);
      st.site = &okb_emlrtRSI;
      i = add->size[0];
      add->size[0] = beta->size[1];
      emxEnsureCapacity_real_T(&st, add, i, &sbb_emlrtRTEI);
      loop_ub = beta->size[1];
      for (i = 0; i < loop_ub; i++) {
        add->data[i] = beta->data[i];
      }

      b_st.site = &xk_emlrtRSI;
      c_st.site = &yk_emlrtRSI;
      if (y->size[0] != add->size[0]) {
        emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      i = gbonf->size[0] * gbonf->size[1];
      gbonf->size[0] = add->size[0];
      gbonf->size[1] = 2;
      emxEnsureCapacity_real_T(sp, gbonf, i, &vbb_emlrtRTEI);
      loop_ub = add->size[0];
      for (i = 0; i < loop_ub; i++) {
        gbonf->data[i] = add->data[i];
      }

      loop_ub = y->size[0];
      for (i = 0; i < loop_ub; i++) {
        gbonf->data[i + gbonf->size[0]] = y->data[i];
      }
    }

    ndecl = 0.0;

    /*  declarations necessary for MATLAB C coder */
    c99 = 0;
    c999 = 0;
    c9999 = 0;
    c99999 = 0;
    c001 = 0;
    i = gmin->size[0] * gmin->size[1];
    gmin->size[0] = 1;
    gmin->size[1] = 1;
    emxEnsureCapacity_real_T(sp, gmin, i, &nbb_emlrtRTEI);
    gmin->data[0] = 0.0;
    NoFalseSig = true;
    out->nout.size[0] = 1;
    out->nout.size[1] = 1;
    out->nout.data[0] = 0.0;
  } else {
    i = gbonf->size[0] * gbonf->size[1];
    gbonf->size[0] = 1;
    gbonf->size[1] = 1;
    emxEnsureCapacity_real_T(sp, gbonf, i, &mbb_emlrtRTEI);
    gbonf->data[0] = 0.0;

    /*  Initialization necessary for MATLAB C coder */
    /*  lowexceed=false means than outlier detection is just based on upper */
    /*  exceedances */
    /*  Compute theoretical envelopes based on all observations */
    /*  Compute theoretical envelopes for minimum deletion residual based on all */
    /*  the observations for the above quantiles. */
    st.site = &nkb_emlrtRSI;
    FSRenvmdr(&st, INP_n, INP_p, INP_init, gmin);

    /*  gmin = the matrix which contains envelopes based on all observations. */
    /*  1st col of gmin = fwd search index */
    /*  2nd col of gmin = 99% envelope */
    /*  3rd col of gmin = 99.9% envelope */
    /*  4th col of gmin = 99.99% envelope */
    /*  5th col of gmin = 99.999% envelope */
    /*  6th col of gmin = 1% envelope */
    /*  7th col of gmin = 50% envelope */
    /*  correction in case of Bayesian model to account for number of */
    /*  (fictitious) observations in the prior */
    /*  Thus, set the columns of gmin where the theoretical quantiles are located. */
    c99 = 2;
    c999 = 3;
    c9999 = 4;
    c99999 = 5;
    c001 = 6;
    loop_ub = INP_mdr->size[0];
    i = b_bool->size[0];
    b_bool->size[0] = INP_mdr->size[0];
    emxEnsureCapacity_boolean_T(sp, b_bool, i, &pbb_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      b_bool->data[i] = (INP_mdr->data[i] >= INP_init);
    }

    n = b_bool->size[0] - 1;
    nmdr = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if (b_bool->data[b_i]) {
        nmdr++;
      }
    }

    i = ia->size[0];
    ia->size[0] = nmdr;
    emxEnsureCapacity_int32_T(sp, ia, i, &rbb_emlrtRTEI);
    m = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if (b_bool->data[b_i]) {
        ia->data[m] = b_i + 1;
        m++;
      }
    }

    loop_ub = INP_mdr->size[1];
    i = out->mdr->size[0] * out->mdr->size[1];
    out->mdr->size[0] = ia->size[0];
    out->mdr->size[1] = INP_mdr->size[1];
    emxEnsureCapacity_real_T(sp, out->mdr, i, &tbb_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      m = ia->size[0];
      for (i1 = 0; i1 < m; i1++) {
        if (ia->data[i1] > INP_mdr->size[0]) {
          emlrtDynamicBoundsCheckR2012b(ia->data[i1], 1, INP_mdr->size[0],
            &iy_emlrtBCI, (emlrtCTX)sp);
        }

        out->mdr->data[i1 + out->mdr->size[0] * i] = INP_mdr->data[(ia->data[i1]
          + INP_mdr->size[0] * i) - 1];
      }
    }

    if (1 > gmin->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, gmin->size[1], &cu_emlrtBCI, (emlrtCTX)
        sp);
    }

    if (1 > ia->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, ia->size[0], &du_emlrtBCI, (emlrtCTX)
        sp);
    }

    ndecl = INP_mdr->data[ia->data[0] - 1];
    loop_ub = gmin->size[0];
    i = b_bool->size[0];
    b_bool->size[0] = gmin->size[0];
    emxEnsureCapacity_boolean_T(sp, b_bool, i, &ubb_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      b_bool->data[i] = (gmin->data[i] >= ndecl);
    }

    n = b_bool->size[0] - 1;
    nmdr = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if (b_bool->data[b_i]) {
        nmdr++;
      }
    }

    emxInit_int32_T(sp, &r, 1, &ubb_emlrtRTEI, true);
    i = r->size[0];
    r->size[0] = nmdr;
    emxEnsureCapacity_int32_T(sp, r, i, &rbb_emlrtRTEI);
    m = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if (b_bool->data[b_i]) {
        r->data[m] = b_i + 1;
        m++;
      }
    }

    m = gmin->size[1] - 1;
    i = gmin1->size[0] * gmin1->size[1];
    gmin1->size[0] = r->size[0];
    gmin1->size[1] = gmin->size[1];
    emxEnsureCapacity_real_T(sp, gmin1, i, &wbb_emlrtRTEI);
    for (i = 0; i <= m; i++) {
      loop_ub = r->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        if (r->data[i1] > gmin->size[0]) {
          emlrtDynamicBoundsCheckR2012b(r->data[i1], 1, gmin->size[0],
            &jy_emlrtBCI, (emlrtCTX)sp);
        }

        gmin1->data[i1 + gmin1->size[0] * i] = gmin->data[(r->data[i1] +
          gmin->size[0] * i) - 1];
      }
    }

    emxFree_int32_T(&r);
    i = gmin->size[0] * gmin->size[1];
    gmin->size[0] = gmin1->size[0];
    gmin->size[1] = gmin1->size[1];
    emxEnsureCapacity_real_T(sp, gmin, i, &xbb_emlrtRTEI);
    loop_ub = gmin1->size[0] * gmin1->size[1];
    for (i = 0; i < loop_ub; i++) {
      gmin->data[i] = gmin1->data[i];
    }

    /*  Store in nout the number of times the observed mdr (d_min) lies above: */
    if (2 > INP_mdr->size[1]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, INP_mdr->size[1], &eu_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (2 > gmin->size[1]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, gmin->size[1], &fu_emlrtBCI, (emlrtCTX)
        sp);
    }

    if (ia->size[0] != gmin->size[0]) {
      emlrtSizeEqCheck1DR2012b(ia->size[0], gmin->size[0], &id_emlrtECI,
        (emlrtCTX)sp);
    }

    if (2 > INP_mdr->size[1]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, INP_mdr->size[1], &gu_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (3 > gmin->size[1]) {
      emlrtDynamicBoundsCheckR2012b(3, 1, gmin->size[1], &hu_emlrtBCI, (emlrtCTX)
        sp);
    }

    if (ia->size[0] != gmin->size[0]) {
      emlrtSizeEqCheck1DR2012b(ia->size[0], gmin->size[0], &jd_emlrtECI,
        (emlrtCTX)sp);
    }

    if (2 > INP_mdr->size[1]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, INP_mdr->size[1], &iu_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (4 > gmin->size[1]) {
      emlrtDynamicBoundsCheckR2012b(4, 1, gmin->size[1], &ju_emlrtBCI, (emlrtCTX)
        sp);
    }

    if (ia->size[0] != gmin->size[0]) {
      emlrtSizeEqCheck1DR2012b(ia->size[0], gmin->size[0], &kd_emlrtECI,
        (emlrtCTX)sp);
    }

    if (2 > INP_mdr->size[1]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, INP_mdr->size[1], &ku_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (5 > gmin->size[1]) {
      emlrtDynamicBoundsCheckR2012b(5, 1, gmin->size[1], &lu_emlrtBCI, (emlrtCTX)
        sp);
    }

    if (ia->size[0] != gmin->size[0]) {
      emlrtSizeEqCheck1DR2012b(ia->size[0], gmin->size[0], &ld_emlrtECI,
        (emlrtCTX)sp);
    }

    if (2 > INP_mdr->size[1]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, INP_mdr->size[1], &mu_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (6 > gmin->size[1]) {
      emlrtDynamicBoundsCheckR2012b(6, 1, gmin->size[1], &nu_emlrtBCI, (emlrtCTX)
        sp);
    }

    if (ia->size[0] != gmin->size[0]) {
      emlrtSizeEqCheck1DR2012b(ia->size[0], gmin->size[0], &md_emlrtECI,
        (emlrtCTX)sp);
    }

    n = ia->size[0] - 1;
    nmdr = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if (out->mdr->data[b_i + out->mdr->size[0]] > gmin->data[b_i + gmin->size
          [0]]) {
        nmdr++;
      }
    }

    emxInit_int32_T(sp, &r3, 1, &ldb_emlrtRTEI, true);
    i = r3->size[0];
    r3->size[0] = nmdr;
    emxEnsureCapacity_int32_T(sp, r3, i, &rbb_emlrtRTEI);
    m = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if (out->mdr->data[b_i + out->mdr->size[0]] > gmin->data[b_i + gmin->size
          [0]]) {
        r3->data[m] = b_i + 1;
        m++;
      }
    }

    n = ia->size[0] - 1;
    nmdr = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if (out->mdr->data[b_i + out->mdr->size[0]] > gmin->data[b_i + gmin->size
          [0] * 2]) {
        nmdr++;
      }
    }

    emxInit_int32_T(sp, &r4, 1, &mdb_emlrtRTEI, true);
    i = r4->size[0];
    r4->size[0] = nmdr;
    emxEnsureCapacity_int32_T(sp, r4, i, &rbb_emlrtRTEI);
    m = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if (out->mdr->data[b_i + out->mdr->size[0]] > gmin->data[b_i + gmin->size
          [0] * 2]) {
        r4->data[m] = b_i + 1;
        m++;
      }
    }

    n = ia->size[0] - 1;
    nmdr = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if (out->mdr->data[b_i + out->mdr->size[0]] > gmin->data[b_i + gmin->size
          [0] * 3]) {
        nmdr++;
      }
    }

    emxInit_int32_T(sp, &r5, 1, &ndb_emlrtRTEI, true);
    i = r5->size[0];
    r5->size[0] = nmdr;
    emxEnsureCapacity_int32_T(sp, r5, i, &rbb_emlrtRTEI);
    m = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if (out->mdr->data[b_i + out->mdr->size[0]] > gmin->data[b_i + gmin->size
          [0] * 3]) {
        r5->data[m] = b_i + 1;
        m++;
      }
    }

    n = ia->size[0] - 1;
    nmdr = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if (out->mdr->data[b_i + out->mdr->size[0]] > gmin->data[b_i + gmin->size
          [0] * 4]) {
        nmdr++;
      }
    }

    emxInit_int32_T(sp, &r6, 1, &odb_emlrtRTEI, true);
    i = r6->size[0];
    r6->size[0] = nmdr;
    emxEnsureCapacity_int32_T(sp, r6, i, &rbb_emlrtRTEI);
    m = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if (out->mdr->data[b_i + out->mdr->size[0]] > gmin->data[b_i + gmin->size
          [0] * 4]) {
        r6->data[m] = b_i + 1;
        m++;
      }
    }

    n = ia->size[0] - 1;
    nmdr = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if (out->mdr->data[b_i + out->mdr->size[0]] < gmin->data[b_i + gmin->size
          [0] * 5]) {
        nmdr++;
      }
    }

    emxInit_int32_T(sp, &r7, 1, &pdb_emlrtRTEI, true);
    i = r7->size[0];
    r7->size[0] = nmdr;
    emxEnsureCapacity_int32_T(sp, r7, i, &rbb_emlrtRTEI);
    m = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if (out->mdr->data[b_i + out->mdr->size[0]] < gmin->data[b_i + gmin->size
          [0] * 5]) {
        r7->data[m] = b_i + 1;
        m++;
      }
    }

    loop_ub = r3->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (r3->data[i] > ia->size[0]) {
        emlrtDynamicBoundsCheckR2012b(r3->data[i], 1, ia->size[0], &jdb_emlrtBCI,
          (emlrtCTX)sp);
      }
    }

    loop_ub = r4->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (r4->data[i] > ia->size[0]) {
        emlrtDynamicBoundsCheckR2012b(r4->data[i], 1, ia->size[0], &kdb_emlrtBCI,
          (emlrtCTX)sp);
      }
    }

    loop_ub = r5->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (r5->data[i] > ia->size[0]) {
        emlrtDynamicBoundsCheckR2012b(r5->data[i], 1, ia->size[0], &ldb_emlrtBCI,
          (emlrtCTX)sp);
      }
    }

    loop_ub = r6->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (r6->data[i] > ia->size[0]) {
        emlrtDynamicBoundsCheckR2012b(r6->data[i], 1, ia->size[0], &mdb_emlrtBCI,
          (emlrtCTX)sp);
      }
    }

    loop_ub = r7->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (r7->data[i] > ia->size[0]) {
        emlrtDynamicBoundsCheckR2012b(r7->data[i], 1, ia->size[0], &ndb_emlrtBCI,
          (emlrtCTX)sp);
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

    uv1[1] = (uint32_T)r7->size[0];
    uv1[3] = (uint32_T)r3->size[0];
    uv1[5] = (uint32_T)r4->size[0];
    uv1[7] = (uint32_T)r5->size[0];
    uv1[9] = (uint32_T)r6->size[0];
    out->nout.size[0] = 2;
    out->nout.size[1] = 5;
    emxFree_int32_T(&r7);
    emxFree_int32_T(&r6);
    emxFree_int32_T(&r5);
    emxFree_int32_T(&r4);
    emxFree_int32_T(&r3);
    for (i = 0; i < 10; i++) {
      out->nout.data[i] = uv1[i];
    }

    /*  NoFalseSig = boolean linked to the fact that the signal is good or not */
    NoFalseSig = false;

    /*  NoFalseSig is set to 1 if the condition for an INCONTROVERTIBLE SIGNAL is */
    /*  fulfilled. */
    nmdr = 0;
    for (b_i = 0; b_i < 5; b_i++) {
      p = (out->nout.data[out->nout.size[0] * b_i] == 9999.0);
      u_tmp_data[b_i] = p;
      if (p) {
        nmdr++;
      }
    }

    m = 0;
    for (b_i = 0; b_i < 5; b_i++) {
      if (u_tmp_data[b_i]) {
        v_tmp_data[m] = (int8_T)(b_i + 1);
        m++;
      }
    }

    out_size[0] = 1;
    out_size[1] = nmdr;
    for (i = 0; i < nmdr; i++) {
      b_out_data[i] = (out->nout.data[out->nout.size[0] * (v_tmp_data[i] - 1) +
                       1] >= 10.0);
    }

    out_data.data = &b_out_data[0];
    out_data.size = &out_size[0];
    out_data.allocatedSize = 5;
    out_data.numDimensions = 2;
    out_data.canFreeData = false;
    st.site = &mkb_emlrtRSI;
    if (c_ifWhileCond(&out_data)) {
      NoFalseSig = true;
      if (options_msg) {
        st.site = &dpb_emlrtRSI;
        disp(&st, gb_emlrt_marshallOut(&st, cv47), &cd_emlrtMCI);

        /*  exact number is int2str(n9999) */
        for (i = 0; i < 50; i++) {
          cv48[i] = '-';
        }

        st.site = &pnb_emlrtRSI;
        disp(&st, m_emlrt_marshallOut(&st, cv48), &dd_emlrtMCI);
      }
    }

    /*  Divide central part from final part of the search */
    d = INP_n / 200.0;
    st.site = &lkb_emlrtRSI;
    if (d < 0.0) {
      emlrtErrorWithMessageIdR2018a(&st, &ac_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "sqrt");
    }

    d = muDoubleScalarSqrt(d);
    ndecl = INP_n - muDoubleScalarFloor(13.0 * d);
  }

  /*  Initialization necessary for MATLAB C Coder */
  i = gmin1->size[0] * gmin1->size[1];
  gmin1->size[0] = 1;
  gmin1->size[1] = 1;
  emxEnsureCapacity_real_T(sp, gmin1, i, &qbb_emlrtRTEI);
  gmin1->data[0] = 0.0;
  ii = 0.0;

  /*  Part 1. Signal detection and validation */
  nmdr = out->mdr->size[0] - 1;
  if ((out->mdr->size[0] < 4) && ((options_bonflev_size[0] == 0) ||
       (options_bonflev_size[1] == 0))) {
    st.site = &kkb_emlrtRSI;
    u_error(&st);
  }

  n = 0;
  sto = 0;
  extram3_size[0] = 1;
  extram3_size[1] = 0;
  extram2_size[0] = 1;
  extram2_size[1] = 0;
  mdag = -1.0;
  if (options_msg) {
    for (i = 0; i < 25; i++) {
      b_cv[i] = '-';
    }

    st.site = &anb_emlrtRSI;
    disp(&st, d_emlrt_marshallOut(&st, b_cv), &ub_emlrtMCI);
    st.site = &xmb_emlrtRSI;
    disp(&st, c_emlrt_marshallOut(&st, b_cv1), &vb_emlrtMCI);
  }

  /*  Stage 1a: signal detection */
  /*  Signal dection is based on monitoring consecutive triplets or single */
  /*  extreme values */
  /*  Check if signal must be based on consecutive exceedances of envelope */
  /*  of mdr or on exceedance of global Bonferroni level */
  if ((options_bonflev_size[0] == 0) || (options_bonflev_size[1] == 0)) {
    /*  Signal detection loop */
    b_i = 3;
    c_i = 3;
    exitg2 = false;
    while ((!exitg2) && (c_i - 3 <= nmdr - 2)) {
      b_i = c_i;
      guard1 = false;
      guard2 = false;
      guard3 = false;
      guard4 = false;
      if ((real_T)(c_i - 3) + 3.0 < (ndecl - INP_init) + 1.0) {
        /*  CENTRAL PART OF THE SEARCH */
        /*  Extreme triplet or an extreme single value */
        /*  Three consecutive values of d_min above the 99.99% threshold or 1 */
        /*  above 99.999% envelope */
        if (2 > out->mdr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &ou_emlrtBCI,
            (emlrtCTX)sp);
        }

        if ((c_i < 1) || (c_i > out->mdr->size[0])) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0], &ty_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (c_i > gmin->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &uy_emlrtBCI,
            (emlrtCTX)sp);
        }

        if ((c9999 < 1) || (c9999 > gmin->size[1])) {
          emlrtDynamicBoundsCheckR2012b(c9999, 1, gmin->size[1], &uy_emlrtBCI,
            (emlrtCTX)sp);
        }

        d = out->mdr->data[(c_i + out->mdr->size[0]) - 1];
        b = gmin->data[(c_i + gmin->size[0] * (c9999 - 1)) - 1];
        if (d > b) {
          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &pu_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > out->mdr->
               size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->mdr->
              size[0], &xy_emlrtBCI, (emlrtCTX)sp);
          }

          if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > gmin->size[0]))
          {
            emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->size[0],
              &yy_emlrtBCI, (emlrtCTX)sp);
          }

          if (c9999 > gmin->size[1]) {
            emlrtDynamicBoundsCheckR2012b(c9999, 1, gmin->size[1], &yy_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (out->mdr->data[c_i + out->mdr->size[0]] > gmin->data[c_i +
              gmin->size[0] * (c9999 - 1)]) {
            if (2 > out->mdr->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1],
                &qu_emlrtBCI, (emlrtCTX)sp);
            }

            if ((c_i - 1 < 1) || (c_i - 1 > out->mdr->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mdr->size[0],
                &eab_emlrtBCI, (emlrtCTX)sp);
            }

            if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0],
                &fab_emlrtBCI, (emlrtCTX)sp);
            }

            if (c9999 > gmin->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c9999, 1, gmin->size[1],
                &fab_emlrtBCI, (emlrtCTX)sp);
            }

            if (out->mdr->data[(c_i + out->mdr->size[0]) - 2] > gmin->data[(c_i
                 + gmin->size[0] * (c9999 - 1)) - 2]) {
              guard2 = true;
            } else {
              guard4 = true;
            }
          } else {
            guard4 = true;
          }
        } else {
          guard4 = true;
        }
      } else if (c_i < out->mdr->size[0] - 1) {
        /*  FINAL PART OF THE SEARCH */
        /*  Extreme couple adjacent to an exceedance */
        /*  Two consecutive values of mdr above the 99.99% envelope and 1 above 99% */
        /*              if ( (mdr(i,2)   > gmin(i,c999)   && mdr(i+1,2) > gmin(i+1,c999) && mdr(i-1,2) > gmin(i-1,c99)) || ... */
        /*                   (mdr(i-1,2) > gmin(i-1,c999) && mdr(i,2)   > gmin(i,c999)   && mdr(i+1,2) > gmin(i+1,c99)) || ... */
        /*                    mdr(i,2)   > gmin(end,c99)  || ... */
        /*                    mdr(i,2)   > gmin(i,c99999) ) */
        if (2 > out->mdr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &ev_emlrtBCI,
            (emlrtCTX)sp);
        }

        if ((c_i < 1) || (c_i > out->mdr->size[0])) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0], &aab_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (c_i > gmin->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &bab_emlrtBCI,
            (emlrtCTX)sp);
        }

        if ((c999 < 1) || (c999 > gmin->size[1])) {
          emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &bab_emlrtBCI,
            (emlrtCTX)sp);
        }

        d = out->mdr->data[(c_i + out->mdr->size[0]) - 1];
        b = gmin->data[(c_i + gmin->size[0] * (c999 - 1)) - 1];
        if (d > b) {
          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &fv_emlrtBCI,
              (emlrtCTX)sp);
          }

          if ((int32_T)(c_i + 1U) > out->mdr->size[0]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->mdr->
              size[0], &iab_emlrtBCI, (emlrtCTX)sp);
          }

          if ((int32_T)(c_i + 1U) > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->size[0],
              &jab_emlrtBCI, (emlrtCTX)sp);
          }

          if (c999 > gmin->size[1]) {
            emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &jab_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (out->mdr->data[c_i + out->mdr->size[0]] > gmin->data[c_i +
              gmin->size[0] * (c999 - 1)]) {
            if (2 > out->mdr->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1],
                &gv_emlrtBCI, (emlrtCTX)sp);
            }

            if ((c_i - 1 < 1) || (c_i - 1 > out->mdr->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mdr->size[0],
                &rab_emlrtBCI, (emlrtCTX)sp);
            }

            if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0],
                &sab_emlrtBCI, (emlrtCTX)sp);
            }

            if ((c99 < 1) || (c99 > gmin->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &sab_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (out->mdr->data[(c_i + out->mdr->size[0]) - 2] > gmin->data[(c_i
                 + gmin->size[0] * (c99 - 1)) - 2]) {
              p = true;
            } else {
              p = false;
            }
          } else {
            p = false;
          }
        } else {
          p = false;
        }

        if (2 > out->mdr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &hv_emlrtBCI,
            (emlrtCTX)sp);
        }

        if ((c_i - 1 < 1) || (c_i - 1 > out->mdr->size[0])) {
          emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mdr->size[0],
            &vab_emlrtBCI, (emlrtCTX)sp);
        }

        if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
          emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0], &wab_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (c999 > gmin->size[1]) {
          emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &wab_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (out->mdr->data[(c_i + out->mdr->size[0]) - 2] > gmin->data[(c_i +
             gmin->size[0] * (c999 - 1)) - 2]) {
          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &iv_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > out->mdr->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
              &bbb_emlrtBCI, (emlrtCTX)sp);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &cbb_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c999 > gmin->size[1]) {
            emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &cbb_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (d > b) {
            if (2 > out->mdr->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1],
                &jv_emlrtBCI, (emlrtCTX)sp);
            }

            if ((int32_T)(c_i + 1U) > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->
                mdr->size[0], &fbb_emlrtBCI, (emlrtCTX)sp);
            }

            if ((int32_T)(c_i + 1U) > gmin->size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->size[0],
                &gbb_emlrtBCI, (emlrtCTX)sp);
            }

            if ((c99 < 1) || (c99 > gmin->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &gbb_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (out->mdr->data[c_i + out->mdr->size[0]] > gmin->data[c_i +
                gmin->size[0] * (c99 - 1)]) {
              condition2 = true;
            } else {
              condition2 = false;
            }
          } else {
            condition2 = false;
          }
        } else {
          condition2 = false;
        }

        if (2 > out->mdr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &kv_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (c_i > out->mdr->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0], &lbb_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (gmin->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
            &mbb_emlrtBCI, (emlrtCTX)sp);
        }

        if ((c99 < 1) || (c99 > gmin->size[1])) {
          emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &mbb_emlrtBCI,
            (emlrtCTX)sp);
        }

        condition3 = (d > gmin->data[(gmin->size[0] + gmin->size[0] * (c99 - 1))
                      - 1]);
        if (2 > out->mdr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &lv_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (c_i > out->mdr->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0], &sbb_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (c_i > gmin->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &tbb_emlrtBCI,
            (emlrtCTX)sp);
        }

        if ((c99999 < 1) || (c99999 > gmin->size[1])) {
          emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1], &tbb_emlrtBCI,
            (emlrtCTX)sp);
        }

        condition4 = (d > gmin->data[(c_i + gmin->size[0] * (c99999 - 1)) - 1]);
        if (p || condition2 || condition3 || condition4) {
          if (options_msg) {
            /*  disp(['Signal in final part of the search: step ' num2str(mdr(i,1)) ' because']); */
            st.site = &ckb_emlrtRSI;
            if (c_i > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                &mv_emlrtBCI, &st);
            }

            b_st.site = &sv_emlrtRSI;
            c_st.site = &jnb_emlrtRSI;
            j_st.site = &inb_emlrtRSI;
            b = g_emlrt_marshallIn(&c_st, d_feval(&c_st, g_emlrt_marshallOut
              (&c_st, b_cv12), i_emlrt_marshallOut(1.0), hb_emlrt_marshallOut
              (&j_st, cv21), i_emlrt_marshallOut(out->mdr->data[c_i - 1]),
              &ab_emlrtMCI), "<output of feval>");
            emlrtDisplayR2012b(i_emlrt_marshallOut(b), (char_T *)"ans",
                               &d_emlrtRTEI, (emlrtCTX)sp);
          }

          if (p) {
            if (options_msg) {
              /*  disp(['rmin('  int2str(mdr(i,1)) ',' int2str(n) ')>99.9% and rmin('  int2str(mdr(i+1,1)) ',' int2str(n) ')>99.9% and rmin('  int2str(mdr(i-1,1)) ',' int2str(n) ')>99%']); */
              st.site = &bkb_emlrtRSI;
              if (c_i > out->mdr->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                  &nv_emlrtBCI, &st);
              }

              if (c_i + 1 > out->mdr->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, out->mdr->size[0],
                  &ov_emlrtBCI, &st);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > out->mdr->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mdr->size[0],
                  &pv_emlrtBCI, &st);
              }

              b_st.site = &sv_emlrtRSI;
              c_st.site = &jnb_emlrtRSI;
              j_st.site = &inb_emlrtRSI;
              b = g_emlrt_marshallIn(&c_st, f_feval(&c_st, g_emlrt_marshallOut
                (&c_st, b_cv12), i_emlrt_marshallOut(1.0), ib_emlrt_marshallOut(
                &j_st, cv30), i_emlrt_marshallOut(out->mdr->data[c_i - 1]),
                i_emlrt_marshallOut(INP_n), i_emlrt_marshallOut(out->mdr->
                data[c_i]), i_emlrt_marshallOut(INP_n), i_emlrt_marshallOut
                (out->mdr->data[c_i - 2]), i_emlrt_marshallOut(INP_n),
                &ab_emlrtMCI), "<output of feval>");
              emlrtDisplayR2012b(i_emlrt_marshallOut(b), (char_T *)"ans",
                                 &e_emlrtRTEI, (emlrtCTX)sp);
            }

            if (c_i > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                &pcb_emlrtBCI, (emlrtCTX)sp);
            }

            st.site = &akb_emlrtRSI;
            int2str(&st, out->mdr->data[c_i - 1], dqb_emlrtRSI.data,
                    dqb_emlrtRSI.size);
            st.site = &akb_emlrtRSI;
            int2str(&st, INP_n, dqb_emlrtRSI.data, dqb_emlrtRSI.size);
            if ((c_i - 1 < 1) || (c_i - 1 > out->mdr->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mdr->size[0],
                &wcb_emlrtBCI, (emlrtCTX)sp);
            }

            st.site = &akb_emlrtRSI;
            int2str(&st, out->mdr->data[c_i - 2], dqb_emlrtRSI.data,
                    dqb_emlrtRSI.size);
            st.site = &akb_emlrtRSI;
            int2str(&st, INP_n, dqb_emlrtRSI.data, dqb_emlrtRSI.size);
            if ((int32_T)(c_i + 1U) > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->
                mdr->size[0], &cdb_emlrtBCI, (emlrtCTX)sp);
            }

            st.site = &akb_emlrtRSI;
            int2str(&st, out->mdr->data[c_i], dqb_emlrtRSI.data,
                    dqb_emlrtRSI.size);
            st.site = &akb_emlrtRSI;
            int2str(&st, INP_n, dqb_emlrtRSI.data, dqb_emlrtRSI.size);
            if ((c_i + -1 < 1) || (c_i + -1 > out->mdr->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i + -1, 1, out->mdr->size[0],
                &peb_emlrtBCI, (emlrtCTX)sp);
            }

            if (c_i > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                &peb_emlrtBCI, (emlrtCTX)sp);
            }

            if (c_i + 1 > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, out->mdr->size[0],
                &peb_emlrtBCI, (emlrtCTX)sp);
            }

            if (1 > out->mdr->size[1]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out->mdr->size[1],
                &oeb_emlrtBCI, (emlrtCTX)sp);
            }

            if (2 > out->mdr->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1],
                &oeb_emlrtBCI, (emlrtCTX)sp);
            }
          }

          if (condition2) {
            if (options_msg) {
              /*    disp(['rmin('  int2str(mdr(i-1,1)) ',' int2str(n) ')>99.9% and rmin('  int2str(mdr(i,1)) ',' int2str(n) ')>99.9% and rmin('  int2str(mdr(i+1,1)) ',' int2str(n) ')>99%']); */
              st.site = &yjb_emlrtRSI;
              if ((c_i - 1 < 1) || (c_i - 1 > out->mdr->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mdr->size[0],
                  &qv_emlrtBCI, &st);
              }

              if (c_i > out->mdr->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                  &rv_emlrtBCI, &st);
              }

              if (c_i + 1 > out->mdr->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, out->mdr->size[0],
                  &sv_emlrtBCI, &st);
              }

              b_st.site = &sv_emlrtRSI;
              c_st.site = &jnb_emlrtRSI;
              j_st.site = &inb_emlrtRSI;
              b = g_emlrt_marshallIn(&c_st, f_feval(&c_st, g_emlrt_marshallOut
                (&c_st, b_cv12), i_emlrt_marshallOut(1.0), ib_emlrt_marshallOut(
                &j_st, cv30), i_emlrt_marshallOut(out->mdr->data[c_i - 2]),
                i_emlrt_marshallOut(INP_n), i_emlrt_marshallOut(out->mdr->
                data[c_i - 1]), i_emlrt_marshallOut(INP_n), i_emlrt_marshallOut
                (out->mdr->data[c_i]), i_emlrt_marshallOut(INP_n), &ab_emlrtMCI),
                "<output of feval>");
              emlrtDisplayR2012b(i_emlrt_marshallOut(b), (char_T *)"ans",
                                 &f_emlrtRTEI, (emlrtCTX)sp);
            }

            if (c_i > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                &vcb_emlrtBCI, (emlrtCTX)sp);
            }

            st.site = &xjb_emlrtRSI;
            int2str(&st, out->mdr->data[c_i - 1], dqb_emlrtRSI.data,
                    dqb_emlrtRSI.size);
            st.site = &xjb_emlrtRSI;
            int2str(&st, INP_n, dqb_emlrtRSI.data, dqb_emlrtRSI.size);
            if ((c_i - 1 < 1) || (c_i - 1 > out->mdr->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mdr->size[0],
                &bdb_emlrtBCI, (emlrtCTX)sp);
            }

            st.site = &xjb_emlrtRSI;
            int2str(&st, out->mdr->data[c_i - 2], dqb_emlrtRSI.data,
                    dqb_emlrtRSI.size);
            st.site = &xjb_emlrtRSI;
            int2str(&st, INP_n, dqb_emlrtRSI.data, dqb_emlrtRSI.size);
            if ((int32_T)(c_i + 1U) > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->
                mdr->size[0], &edb_emlrtBCI, (emlrtCTX)sp);
            }

            st.site = &xjb_emlrtRSI;
            int2str(&st, out->mdr->data[c_i], dqb_emlrtRSI.data,
                    dqb_emlrtRSI.size);
            st.site = &xjb_emlrtRSI;
            int2str(&st, INP_n, dqb_emlrtRSI.data, dqb_emlrtRSI.size);
            if ((c_i + -1 < 1) || (c_i + -1 > out->mdr->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i + -1, 1, out->mdr->size[0],
                &neb_emlrtBCI, (emlrtCTX)sp);
            }

            if (c_i > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                &neb_emlrtBCI, (emlrtCTX)sp);
            }

            if (c_i + 1 > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, out->mdr->size[0],
                &neb_emlrtBCI, (emlrtCTX)sp);
            }

            if (1 > out->mdr->size[1]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out->mdr->size[1],
                &meb_emlrtBCI, (emlrtCTX)sp);
            }

            if (2 > out->mdr->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1],
                &meb_emlrtBCI, (emlrtCTX)sp);
            }
          }

          if (condition3) {
            if (options_msg) {
              /*  disp(['rmin('  int2str(mdr(i,1)) ',' int2str(n) ')>99% at final step: Bonferroni signal in the final part of the search.']); */
              st.site = &wjb_emlrtRSI;
              if (c_i > out->mdr->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                  &tv_emlrtBCI, &st);
              }

              b_st.site = &sv_emlrtRSI;
              c_st.site = &jnb_emlrtRSI;
              j_st.site = &inb_emlrtRSI;
              b = g_emlrt_marshallIn(&c_st, e_feval(&c_st, g_emlrt_marshallOut
                (&c_st, b_cv12), i_emlrt_marshallOut(1.0), jb_emlrt_marshallOut(
                &j_st, cv29), i_emlrt_marshallOut(out->mdr->data[c_i - 1]),
                i_emlrt_marshallOut(INP_n), &ab_emlrtMCI), "<output of feval>");
              emlrtDisplayR2012b(i_emlrt_marshallOut(b), (char_T *)"ans",
                                 &g_emlrtRTEI, (emlrtCTX)sp);
            }

            if (c_i > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                &adb_emlrtBCI, (emlrtCTX)sp);
            }

            st.site = &vjb_emlrtRSI;
            int2str(&st, out->mdr->data[c_i - 1], dqb_emlrtRSI.data,
                    dqb_emlrtRSI.size);
            st.site = &vjb_emlrtRSI;
            int2str(&st, INP_n, dqb_emlrtRSI.data, dqb_emlrtRSI.size);
            if (c_i > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                &uv_emlrtBCI, (emlrtCTX)sp);
            }

            if (1 > out->mdr->size[1]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out->mdr->size[1],
                &leb_emlrtBCI, (emlrtCTX)sp);
            }

            if (2 > out->mdr->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1],
                &leb_emlrtBCI, (emlrtCTX)sp);
            }
          }

          /*  Extreme single value above the upper threshold */
          if (condition4) {
            if (options_msg) {
              /*  disp(['rmin('  int2str(mdr(i,1)) ',' int2str(n) ')>99.999%']); */
              st.site = &ujb_emlrtRSI;
              if (c_i > out->mdr->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                  &vv_emlrtBCI, &st);
              }

              b_st.site = &sv_emlrtRSI;
              c_st.site = &jnb_emlrtRSI;
              j_st.site = &inb_emlrtRSI;
              b = g_emlrt_marshallIn(&c_st, e_feval(&c_st, g_emlrt_marshallOut
                (&c_st, b_cv12), i_emlrt_marshallOut(1.0), l_emlrt_marshallOut
                (&j_st, cv33), i_emlrt_marshallOut(out->mdr->data[c_i - 1]),
                i_emlrt_marshallOut(INP_n), &ab_emlrtMCI), "<output of feval>");
              emlrtDisplayR2012b(i_emlrt_marshallOut(b), (char_T *)"ans",
                                 &h_emlrtRTEI, (emlrtCTX)sp);
            }

            if (c_i > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                &gdb_emlrtBCI, (emlrtCTX)sp);
            }

            st.site = &tjb_emlrtRSI;
            int2str(&st, out->mdr->data[c_i - 1], dqb_emlrtRSI.data,
                    dqb_emlrtRSI.size);
            st.site = &tjb_emlrtRSI;
            int2str(&st, INP_n, dqb_emlrtRSI.data, dqb_emlrtRSI.size);
            if (c_i > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                &wv_emlrtBCI, (emlrtCTX)sp);
            }

            if (1 > out->mdr->size[1]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out->mdr->size[1],
                &keb_emlrtBCI, (emlrtCTX)sp);
            }

            if (2 > out->mdr->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1],
                &keb_emlrtBCI, (emlrtCTX)sp);
            }
          }

          if (options_msg) {
            st.site = &sjb_emlrtRSI;
            b_st.site = &whb_emlrtRSI;
            c_st.site = &jnb_emlrtRSI;
            j_st.site = &inb_emlrtRSI;
            g_emlrt_marshallIn(&c_st, feval(&c_st, g_emlrt_marshallOut(&c_st,
              b_cv12), i_emlrt_marshallOut(1.0), m_emlrt_marshallOut(&j_st, cv32),
              &ab_emlrtMCI), "<output of feval>");
          }

          /*  Signal is always considered true if it takes place in the */
          /*  final part of the search */
          NoFalseSig = true;
          n = 1;
        }
      } else {
        if (2 > out->mdr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &xv_emlrtBCI,
            (emlrtCTX)sp);
        }

        if ((c_i < 1) || (c_i > out->mdr->size[0])) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0], &ny_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (c_i > gmin->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &oy_emlrtBCI,
            (emlrtCTX)sp);
        }

        if ((c999 < 1) || (c999 > gmin->size[1])) {
          emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &oy_emlrtBCI,
            (emlrtCTX)sp);
        }

        d = out->mdr->data[(c_i + out->mdr->size[0]) - 1];
        b = gmin->data[(c_i + gmin->size[0] * (c999 - 1)) - 1];
        if (d > b) {
          guard3 = true;
        } else {
          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &yv_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > out->mdr->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
              &qy_emlrtBCI, (emlrtCTX)sp);
          }

          if (gmin->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
              &ry_emlrtBCI, (emlrtCTX)sp);
          }

          if ((c99 < 1) || (c99 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &ry_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (d > gmin->data[(gmin->size[0] + gmin->size[0] * (c99 - 1)) - 1]) {
            guard3 = true;
          } else {
            guard1 = true;
          }
        }
      }

      if (guard4) {
        if (2 > out->mdr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &ru_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (c_i > out->mdr->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0], &cab_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (gmin->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
            &dab_emlrtBCI, (emlrtCTX)sp);
        }

        if ((c99 < 1) || (c99 > gmin->size[1])) {
          emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &dab_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (d > gmin->data[(gmin->size[0] + gmin->size[0] * (c99 - 1)) - 1]) {
          guard2 = true;
        } else {
          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &su_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > out->mdr->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
              &kab_emlrtBCI, (emlrtCTX)sp);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &lab_emlrtBCI,
              (emlrtCTX)sp);
          }

          if ((c99999 < 1) || (c99999 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1],
              &lab_emlrtBCI, (emlrtCTX)sp);
          }

          if (d > gmin->data[(c_i + gmin->size[0] * (c99999 - 1)) - 1]) {
            guard2 = true;
          } else {
            if (2 > out->mdr->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1],
                &bv_emlrtBCI, (emlrtCTX)sp);
            }

            if (c_i > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                &av_emlrtBCI, (emlrtCTX)sp);
            }

            if (c_i > gmin->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &cv_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (gmin->size[1] < 1) {
              emlrtDynamicBoundsCheckR2012b(gmin->size[1], 1, gmin->size[1],
                &dv_emlrtBCI, (emlrtCTX)sp);
            }
          }
        }
      }

      if (guard3) {
        if (c_i == out->mdr->size[0] - 1) {
          /*  potential couple of outliers */
          n = 1;
          if (options_msg) {
            st.site = &tnb_emlrtRSI;
            disp(&st, q_emlrt_marshallOut(&st, b_cv9), &yb_emlrtMCI);
          }

          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &aw_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > out->mdr->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
              &gab_emlrtBCI, (emlrtCTX)sp);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &hab_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c999 > gmin->size[1]) {
            emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &hab_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (d > b) {
            if (options_msg) {
              if (c_i > out->mdr->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                  &mab_emlrtBCI, (emlrtCTX)sp);
              }

              st.site = &rjb_emlrtRSI;
              int2str(&st, out->mdr->data[c_i - 1], tmp_data, ii_size);
              st.site = &rjb_emlrtRSI;
              int2str(&st, INP_n, b_tmp_data, tmp_size);
              e_tmp_size[0] = 1;
              e_tmp_size[1] = (ii_size[1] + tmp_size[1]) + 13;
              for (i = 0; i < 5; i++) {
                f_tmp_data[i] = b_cv17[i];
              }

              loop_ub = ii_size[1];
              if (0 <= loop_ub - 1) {
                memcpy(&f_tmp_data[5], &tmp_data[0], loop_ub * sizeof(char_T));
              }

              f_tmp_data[ii_size[1] + 5] = ',';
              loop_ub = tmp_size[1];
              for (i = 0; i < loop_ub; i++) {
                f_tmp_data[(i + ii_size[1]) + 6] = b_tmp_data[i];
              }

              for (i = 0; i < 7; i++) {
                f_tmp_data[((i + ii_size[1]) + tmp_size[1]) + 6] = b_cv19[i];
              }

              st.site = &tob_emlrtRSI;
              disp(&st, cb_emlrt_marshallOut(&st, f_tmp_data, e_tmp_size),
                   &dc_emlrtMCI);
            }

            if (c_i > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                &qab_emlrtBCI, (emlrtCTX)sp);
            }

            st.site = &qjb_emlrtRSI;
            int2str(&st, out->mdr->data[c_i - 1], dqb_emlrtRSI.data,
                    dqb_emlrtRSI.size);
            st.site = &qjb_emlrtRSI;
            int2str(&st, INP_n, dqb_emlrtRSI.data, dqb_emlrtRSI.size);
          }

          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &bw_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > out->mdr->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
              &oab_emlrtBCI, (emlrtCTX)sp);
          }

          if (gmin->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
              &pab_emlrtBCI, (emlrtCTX)sp);
          }

          if ((c99 < 1) || (c99 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &pab_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (d > gmin->data[(gmin->size[0] + gmin->size[0] * (c99 - 1)) - 1]) {
            if (options_msg) {
              if (c_i > out->mdr->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                  &uab_emlrtBCI, (emlrtCTX)sp);
              }

              st.site = &pjb_emlrtRSI;
              int2str(&st, out->mdr->data[c_i - 1], tmp_data, ii_size);
              st.site = &pjb_emlrtRSI;
              int2str(&st, INP_n, b_tmp_data, tmp_size);
              g_tmp_size[0] = 1;
              g_tmp_size[1] = (ii_size[1] + tmp_size[1]) + 77;
              for (i = 0; i < 5; i++) {
                h_tmp_data[i] = b_cv17[i];
              }

              loop_ub = ii_size[1];
              if (0 <= loop_ub - 1) {
                memcpy(&h_tmp_data[5], &tmp_data[0], loop_ub * sizeof(char_T));
              }

              h_tmp_data[ii_size[1] + 5] = ',';
              loop_ub = tmp_size[1];
              for (i = 0; i < loop_ub; i++) {
                h_tmp_data[(i + ii_size[1]) + 6] = b_tmp_data[i];
              }

              memcpy(&h_tmp_data[(ii_size[1] + tmp_size[1]) + 6], &cv23[0], 71U *
                     sizeof(char_T));
              st.site = &sob_emlrtRSI;
              disp(&st, cb_emlrt_marshallOut(&st, h_tmp_data, g_tmp_size),
                   &hc_emlrtMCI);
            }

            if (c_i > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                &abb_emlrtBCI, (emlrtCTX)sp);
            }

            st.site = &ojb_emlrtRSI;
            int2str(&st, out->mdr->data[c_i - 1], dqb_emlrtRSI.data,
                    dqb_emlrtRSI.size);
            st.site = &ojb_emlrtRSI;
            int2str(&st, INP_n, dqb_emlrtRSI.data, dqb_emlrtRSI.size);
          }

          if (c_i > out->mdr->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
              &cw_emlrtBCI, (emlrtCTX)sp);
          }

          if (1 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, out->mdr->size[1], &qeb_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &qeb_emlrtBCI,
              (emlrtCTX)sp);
          }
        } else {
          guard1 = true;
        }
      }

      if (guard2) {
        if (options_msg) {
          if (c_i > out->mdr->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
              &tab_emlrtBCI, (emlrtCTX)sp);
          }

          st.site = &jkb_emlrtRSI;
          int2str(&st, out->mdr->data[c_i - 1], tmp_data, ii_size);
          d_tmp_size[0] = 1;
          d_tmp_size[1] = ii_size[1] + 63;
          for (i = 0; i < 55; i++) {
            e_tmp_data[i] = b_cv11[i];
          }

          loop_ub = ii_size[1];
          if (0 <= loop_ub - 1) {
            memcpy(&e_tmp_data[55], &tmp_data[0], loop_ub * sizeof(char_T));
          }

          for (i = 0; i < 8; i++) {
            e_tmp_data[(i + ii_size[1]) + 55] = b_cv15[i];
          }

          st.site = &rob_emlrtRSI;
          disp(&st, cb_emlrt_marshallOut(&st, e_tmp_data, d_tmp_size),
               &ec_emlrtMCI);
        }

        if (2 > out->mdr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &tu_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (c_i > out->mdr->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0], &xab_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (c_i > gmin->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &yab_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (c9999 > gmin->size[1]) {
          emlrtDynamicBoundsCheckR2012b(c9999, 1, gmin->size[1], &yab_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (d > b) {
          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &uu_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > out->mdr->
               size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->mdr->
              size[0], &dbb_emlrtBCI, (emlrtCTX)sp);
          }

          if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > gmin->size[0]))
          {
            emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->size[0],
              &ebb_emlrtBCI, (emlrtCTX)sp);
          }

          if (c9999 > gmin->size[1]) {
            emlrtDynamicBoundsCheckR2012b(c9999, 1, gmin->size[1], &ebb_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (out->mdr->data[c_i + out->mdr->size[0]] > gmin->data[c_i +
              gmin->size[0] * (c9999 - 1)]) {
            if (2 > out->mdr->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1],
                &vu_emlrtBCI, (emlrtCTX)sp);
            }

            if ((c_i - 1 < 1) || (c_i - 1 > out->mdr->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mdr->size[0],
                &hbb_emlrtBCI, (emlrtCTX)sp);
            }

            if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0],
                &ibb_emlrtBCI, (emlrtCTX)sp);
            }

            if (c9999 > gmin->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c9999, 1, gmin->size[1],
                &ibb_emlrtBCI, (emlrtCTX)sp);
            }

            if (out->mdr->data[(c_i + out->mdr->size[0]) - 2] > gmin->data[(c_i
                 + gmin->size[0] * (c9999 - 1)) - 2]) {
              if (options_msg) {
                if (c_i > out->mdr->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                    &nbb_emlrtBCI, (emlrtCTX)sp);
                }

                st.site = &ikb_emlrtRSI;
                int2str(&st, out->mdr->data[c_i - 1], tmp_data, ii_size);
                st.site = &ikb_emlrtRSI;
                int2str(&st, INP_n, b_tmp_data, tmp_size);
                if ((c_i - 1 < 1) || (c_i - 1 > out->mdr->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mdr->size[0],
                    &xbb_emlrtBCI, (emlrtCTX)sp);
                }

                st.site = &ikb_emlrtRSI;
                int2str(&st, out->mdr->data[c_i - 2], i_tmp_data, b_ii_size);
                st.site = &ikb_emlrtRSI;
                int2str(&st, INP_n, l_tmp_data, j_tmp_size);
                if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > out->
                     mdr->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->
                    mdr->size[0], &ccb_emlrtBCI, (emlrtCTX)sp);
                }

                st.site = &ikb_emlrtRSI;
                int2str(&st, out->mdr->data[c_i], n_tmp_data, l_tmp_size);
                st.site = &ikb_emlrtRSI;
                int2str(&st, INP_n, o_tmp_data, n_tmp_size);
                o_tmp_size[0] = 1;
                m = (ii_size[1] + tmp_size[1]) + b_ii_size[1];
                n = (m + j_tmp_size[1]) + l_tmp_size[1];
                o_tmp_size[1] = (n + n_tmp_size[1]) + 52;
                for (i = 0; i < 5; i++) {
                  r_tmp_data[i] = b_cv17[i];
                }

                loop_ub = ii_size[1];
                if (0 <= loop_ub - 1) {
                  memcpy(&r_tmp_data[5], &tmp_data[0], loop_ub * sizeof(char_T));
                }

                r_tmp_data[ii_size[1] + 5] = ',';
                loop_ub = tmp_size[1];
                for (i = 0; i < loop_ub; i++) {
                  r_tmp_data[(i + ii_size[1]) + 6] = b_tmp_data[i];
                }

                for (i = 0; i < 18; i++) {
                  r_tmp_data[((i + ii_size[1]) + tmp_size[1]) + 6] = cv41[i];
                }

                loop_ub = b_ii_size[1];
                for (i = 0; i < loop_ub; i++) {
                  r_tmp_data[((i + ii_size[1]) + tmp_size[1]) + 24] =
                    i_tmp_data[i];
                }

                r_tmp_data[m + 24] = ',';
                loop_ub = j_tmp_size[1];
                for (i = 0; i < loop_ub; i++) {
                  r_tmp_data[(((i + ii_size[1]) + tmp_size[1]) + b_ii_size[1]) +
                    25] = l_tmp_data[i];
                }

                for (i = 0; i < 18; i++) {
                  r_tmp_data[((((i + ii_size[1]) + tmp_size[1]) + b_ii_size[1])
                              + j_tmp_size[1]) + 25] = cv41[i];
                }

                loop_ub = l_tmp_size[1];
                for (i = 0; i < loop_ub; i++) {
                  r_tmp_data[((((i + ii_size[1]) + tmp_size[1]) + b_ii_size[1])
                              + j_tmp_size[1]) + 43] = n_tmp_data[i];
                }

                r_tmp_data[n + 43] = ',';
                loop_ub = n_tmp_size[1];
                for (i = 0; i < loop_ub; i++) {
                  r_tmp_data[(((((i + ii_size[1]) + tmp_size[1]) + b_ii_size[1])
                               + j_tmp_size[1]) + l_tmp_size[1]) + 44] =
                    o_tmp_data[i];
                }

                for (i = 0; i < 8; i++) {
                  r_tmp_data[((((((i + ii_size[1]) + tmp_size[1]) + b_ii_size[1])
                                + j_tmp_size[1]) + l_tmp_size[1]) + n_tmp_size[1])
                    + 44] = cv44[i];
                }

                st.site = &qob_emlrtRSI;
                disp(&st, cb_emlrt_marshallOut(&st, r_tmp_data, o_tmp_size),
                     &nc_emlrtMCI);
              }

              if (c_i > out->mdr->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                  &qbb_emlrtBCI, (emlrtCTX)sp);
              }

              st.site = &hkb_emlrtRSI;
              int2str(&st, out->mdr->data[c_i - 1], dqb_emlrtRSI.data,
                      dqb_emlrtRSI.size);
              st.site = &hkb_emlrtRSI;
              int2str(&st, INP_n, dqb_emlrtRSI.data, dqb_emlrtRSI.size);
              if ((c_i - 1 < 1) || (c_i - 1 > out->mdr->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mdr->size[0],
                  &acb_emlrtBCI, (emlrtCTX)sp);
              }

              st.site = &hkb_emlrtRSI;
              int2str(&st, out->mdr->data[c_i - 2], dqb_emlrtRSI.data,
                      dqb_emlrtRSI.size);
              st.site = &hkb_emlrtRSI;
              int2str(&st, INP_n, dqb_emlrtRSI.data, dqb_emlrtRSI.size);
              if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > out->
                   mdr->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->
                  mdr->size[0], &ecb_emlrtBCI, (emlrtCTX)sp);
              }

              st.site = &hkb_emlrtRSI;
              int2str(&st, out->mdr->data[c_i], dqb_emlrtRSI.data,
                      dqb_emlrtRSI.size);
              st.site = &hkb_emlrtRSI;
              int2str(&st, INP_n, dqb_emlrtRSI.data, dqb_emlrtRSI.size);
              if ((c_i + -1 < 1) || (c_i + -1 > out->mdr->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i + -1, 1, out->mdr->size[0],
                  &jeb_emlrtBCI, (emlrtCTX)sp);
              }

              if (c_i > out->mdr->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                  &jeb_emlrtBCI, (emlrtCTX)sp);
              }

              if ((c_i + 1 < 1) || (c_i + 1 > out->mdr->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, out->mdr->size[0],
                  &jeb_emlrtBCI, (emlrtCTX)sp);
              }

              if (1 > out->mdr->size[1]) {
                emlrtDynamicBoundsCheckR2012b(1, 1, out->mdr->size[1],
                  &ieb_emlrtBCI, (emlrtCTX)sp);
              }

              if (2 > out->mdr->size[1]) {
                emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1],
                  &ieb_emlrtBCI, (emlrtCTX)sp);
              }
            }
          }
        }

        if (2 > out->mdr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &wu_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (c_i > out->mdr->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0], &jbb_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (c_i > gmin->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &kbb_emlrtBCI,
            (emlrtCTX)sp);
        }

        if ((c99999 < 1) || (c99999 > gmin->size[1])) {
          emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1], &kbb_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (d > gmin->data[(c_i + gmin->size[0] * (c99999 - 1)) - 1]) {
          if (options_msg) {
            if (c_i > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                &pbb_emlrtBCI, (emlrtCTX)sp);
            }

            st.site = &gkb_emlrtRSI;
            int2str(&st, out->mdr->data[c_i - 1], tmp_data, ii_size);
            st.site = &gkb_emlrtRSI;
            int2str(&st, INP_n, b_tmp_data, tmp_size);
            f_tmp_size[0] = 1;
            f_tmp_size[1] = (ii_size[1] + tmp_size[1]) + 15;
            for (i = 0; i < 5; i++) {
              g_tmp_data[i] = b_cv17[i];
            }

            loop_ub = ii_size[1];
            if (0 <= loop_ub - 1) {
              memcpy(&g_tmp_data[5], &tmp_data[0], loop_ub * sizeof(char_T));
            }

            g_tmp_data[ii_size[1] + 5] = ',';
            loop_ub = tmp_size[1];
            for (i = 0; i < loop_ub; i++) {
              g_tmp_data[(i + ii_size[1]) + 6] = b_tmp_data[i];
            }

            for (i = 0; i < 9; i++) {
              g_tmp_data[((i + ii_size[1]) + tmp_size[1]) + 6] = cv24[i];
            }

            st.site = &pob_emlrtRSI;
            disp(&st, cb_emlrt_marshallOut(&st, g_tmp_data, f_tmp_size),
                 &pc_emlrtMCI);
          }

          if (c_i > out->mdr->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
              &wbb_emlrtBCI, (emlrtCTX)sp);
          }

          st.site = &fkb_emlrtRSI;
          int2str(&st, out->mdr->data[c_i - 1], dqb_emlrtRSI.data,
                  dqb_emlrtRSI.size);
          st.site = &fkb_emlrtRSI;
          int2str(&st, INP_n, dqb_emlrtRSI.data, dqb_emlrtRSI.size);
          if ((c_i + -1 < 1) || (c_i + -1 > out->mdr->size[0])) {
            emlrtDynamicBoundsCheckR2012b(c_i + -1, 1, out->mdr->size[0],
              &heb_emlrtBCI, (emlrtCTX)sp);
          }

          if (c_i > out->mdr->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
              &heb_emlrtBCI, (emlrtCTX)sp);
          }

          if ((c_i + 1 < 1) || (c_i + 1 > out->mdr->size[0])) {
            emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, out->mdr->size[0],
              &heb_emlrtBCI, (emlrtCTX)sp);
          }

          if (1 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, out->mdr->size[1], &geb_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &geb_emlrtBCI,
              (emlrtCTX)sp);
          }
        }

        if (2 > out->mdr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &xu_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (c_i > out->mdr->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0], &ubb_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (gmin->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
            &vbb_emlrtBCI, (emlrtCTX)sp);
        }

        if ((c99 < 1) || (c99 > gmin->size[1])) {
          emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &vbb_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (d > gmin->data[(gmin->size[0] + gmin->size[0] * (c99 - 1)) - 1]) {
          if (options_msg) {
            if (c_i > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                &bcb_emlrtBCI, (emlrtCTX)sp);
            }

            st.site = &ekb_emlrtRSI;
            int2str(&st, out->mdr->data[c_i - 1], tmp_data, ii_size);
            st.site = &ekb_emlrtRSI;
            int2str(&st, INP_n, b_tmp_data, tmp_size);
            i_tmp_size[0] = 1;
            i_tmp_size[1] = (ii_size[1] + tmp_size[1]) + 79;
            for (i = 0; i < 5; i++) {
              m_tmp_data[i] = b_cv17[i];
            }

            loop_ub = ii_size[1];
            if (0 <= loop_ub - 1) {
              memcpy(&m_tmp_data[5], &tmp_data[0], loop_ub * sizeof(char_T));
            }

            m_tmp_data[ii_size[1] + 5] = ',';
            loop_ub = tmp_size[1];
            for (i = 0; i < loop_ub; i++) {
              m_tmp_data[(i + ii_size[1]) + 6] = b_tmp_data[i];
            }

            memcpy(&m_tmp_data[(ii_size[1] + tmp_size[1]) + 6], &cv34[0], 73U *
                   sizeof(char_T));
            st.site = &oob_emlrtRSI;
            disp(&st, cb_emlrt_marshallOut(&st, m_tmp_data, i_tmp_size),
                 &qc_emlrtMCI);
          }

          if (c_i > out->mdr->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
              &dcb_emlrtBCI, (emlrtCTX)sp);
          }

          st.site = &dkb_emlrtRSI;
          int2str(&st, out->mdr->data[c_i - 1], dqb_emlrtRSI.data,
                  dqb_emlrtRSI.size);
          st.site = &dkb_emlrtRSI;
          int2str(&st, INP_n, dqb_emlrtRSI.data, dqb_emlrtRSI.size);
          if (c_i > out->mdr->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
              &yu_emlrtBCI, (emlrtCTX)sp);
          }

          if (1 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, out->mdr->size[1], &feb_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &feb_emlrtBCI,
              (emlrtCTX)sp);
          }

          NoFalseSig = true;

          /*  i.e., no need of further validation */
        }

        /* '------------------------------------------------'; */
        n = 1;
      }

      if (guard1) {
        if (2 > out->mdr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &dw_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (c_i > out->mdr->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0], &vy_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (c_i > gmin->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &wy_emlrtBCI,
            (emlrtCTX)sp);
        }

        if ((c99 < 1) || (c99 > gmin->size[1])) {
          emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &wy_emlrtBCI,
            (emlrtCTX)sp);
        }

        if ((d > gmin->data[(c_i + gmin->size[0] * (c99 - 1)) - 1]) && (c_i ==
             out->mdr->size[0])) {
          /*  a single outlier */
          n = 1;
          if (options_msg) {
            st.site = &epb_emlrtRSI;
            disp(&st, kb_emlrt_marshallOut(&st, b_cv16), &cc_emlrtMCI);
          }

          if (c_i > out->mdr->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
              &nab_emlrtBCI, (emlrtCTX)sp);
          }

          st.site = &njb_emlrtRSI;
          int2str(&st, out->mdr->data[c_i - 1], dqb_emlrtRSI.data,
                  dqb_emlrtRSI.size);
          st.site = &njb_emlrtRSI;
          int2str(&st, INP_n, dqb_emlrtRSI.data, dqb_emlrtRSI.size);
          if (c_i > out->mdr->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
              &ew_emlrtBCI, (emlrtCTX)sp);
          }

          if (1 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, out->mdr->size[1], &reb_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &reb_emlrtBCI,
              (emlrtCTX)sp);
          }
        } else {
          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &gw_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > out->mdr->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
              &fw_emlrtBCI, (emlrtCTX)sp);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &hw_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (gmin->size[1] < 1) {
            emlrtDynamicBoundsCheckR2012b(gmin->size[1], 1, gmin->size[1],
              &iw_emlrtBCI, (emlrtCTX)sp);
          }
        }
      }

      /*         %% Stage 1b: signal validation */
      b_guard1 = false;
      if (n == 1) {
        if (options_msg) {
          st.site = &mjb_emlrtRSI;
          b_st.site = &whb_emlrtRSI;
          c_st.site = &jnb_emlrtRSI;
          j_st.site = &inb_emlrtRSI;
          b = g_emlrt_marshallIn(&c_st, feval(&c_st, g_emlrt_marshallOut(&c_st,
            b_cv12), i_emlrt_marshallOut(1.0), f_emlrt_marshallOut(&j_st, b_cv13),
            &ab_emlrtMCI), "<output of feval>");
          emlrtDisplayR2012b(i_emlrt_marshallOut(b), (char_T *)"ans",
                             &i_emlrtRTEI, (emlrtCTX)sp);
          st.site = &fpb_emlrtRSI;
          disp(&st, lb_emlrt_marshallOut(&st, b_cv14), &oc_emlrtMCI);
        }

        /*  mdag is $m^\dagger$ */
        if (c_i > out->mdr->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0], &obb_emlrtBCI,
            (emlrtCTX)sp);
        }

        mdag = out->mdr->data[c_i - 1];
        if (c_i > out->mdr->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0], &rbb_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (mdag < INP_n - 2.0) {
          /*  Check if the signal is incontrovertible */
          /*  Incontrovertible signal = 3 consecutive values of d_min > */
          /*  99.999% threshold */
          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &jw_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > out->mdr->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
              &fcb_emlrtBCI, (emlrtCTX)sp);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &gcb_emlrtBCI,
              (emlrtCTX)sp);
          }

          if ((c99999 < 1) || (c99999 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1],
              &gcb_emlrtBCI, (emlrtCTX)sp);
          }

          if (out->mdr->data[(c_i + out->mdr->size[0]) - 1] > gmin->data[(c_i +
               gmin->size[0] * (c99999 - 1)) - 1]) {
            if (2 > out->mdr->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1],
                &kw_emlrtBCI, (emlrtCTX)sp);
            }

            if ((c_i - 1 < 1) || (c_i - 1 > out->mdr->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out->mdr->size[0],
                &icb_emlrtBCI, (emlrtCTX)sp);
            }

            if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0],
                &jcb_emlrtBCI, (emlrtCTX)sp);
            }

            if (c99999 > gmin->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1],
                &jcb_emlrtBCI, (emlrtCTX)sp);
            }

            if (out->mdr->data[(c_i + out->mdr->size[0]) - 2] > gmin->data[(c_i
                 + gmin->size[0] * (c99999 - 1)) - 2]) {
              if (2 > out->mdr->size[1]) {
                emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1],
                  &lw_emlrtBCI, (emlrtCTX)sp);
              }

              if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > out->
                   mdr->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->
                  mdr->size[0], &mcb_emlrtBCI, (emlrtCTX)sp);
              }

              if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > gmin->
                   size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->
                  size[0], &ncb_emlrtBCI, (emlrtCTX)sp);
              }

              if (c99999 > gmin->size[1]) {
                emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1],
                  &ncb_emlrtBCI, (emlrtCTX)sp);
              }

              if (out->mdr->data[c_i + out->mdr->size[0]] > gmin->data[c_i +
                  gmin->size[0] * (c99999 - 1)]) {
                if (options_msg) {
                  if (c_i > out->mdr->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
                      &rcb_emlrtBCI, (emlrtCTX)sp);
                  }

                  st.site = &ljb_emlrtRSI;
                  int2str(&st, out->mdr->data[c_i - 1], tmp_data, ii_size);
                  p_tmp_size[0] = 1;
                  p_tmp_size[1] = ii_size[1] + 74;
                  memcpy(&s_tmp_data[0], &cv36[0], 74U * sizeof(char_T));
                  loop_ub = ii_size[1];
                  if (0 <= loop_ub - 1) {
                    memcpy(&s_tmp_data[74], &tmp_data[0], loop_ub * sizeof
                           (char_T));
                  }

                  st.site = &nob_emlrtRSI;
                  disp(&st, cb_emlrt_marshallOut(&st, s_tmp_data, p_tmp_size),
                       &rc_emlrtMCI);
                }

                NoFalseSig = true;
                extram3_size[0] = 1;
                extram3_size[1] = 14;
                for (i = 0; i < 14; i++) {
                  extram3_data[i] = cv38[i];
                }
              }
            }
          }
        } else {
          NoFalseSig = true;
        }

        /*  if the following statement is true, observed curve of r_min is */
        /*  above 99.99% and later is below 1%: peak followed by dip */
        if (1 > out->mdr->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, out->mdr->size[0], &mw_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (out->mdr->size[0] > (mdag - out->mdr->data[0]) + 31.0) {
          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &nw_emlrtBCI,
              (emlrtCTX)sp);
          }

          for (i = 0; i < 31; i++) {
            uv[i] = ((uint32_T)i + c_i) + 1U;
          }

          for (i = 0; i < 31; i++) {
            i1 = (int32_T)uv[i];
            if ((i1 < 1) || (i1 > out->mdr->size[0])) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, out->mdr->size[0],
                &ocb_emlrtBCI, (emlrtCTX)sp);
            }
          }

          for (i = 0; i < 31; i++) {
            i1 = (int32_T)uv[i];
            if ((i1 < 1) || (i1 > gmin->size[0])) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, gmin->size[0], &ucb_emlrtBCI,
                (emlrtCTX)sp);
            }
          }

          if ((c001 < 1) || (c001 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c001, 1, gmin->size[1], &ow_emlrtBCI,
              (emlrtCTX)sp);
          }

          for (i = 0; i < 31; i++) {
            m = (int32_T)uv[i] - 1;
            x[i] = (out->mdr->data[m + out->mdr->size[0]] < gmin->data[m +
                    gmin->size[0] * (c001 - 1)]);
          }

          m = x[0];
          for (loop_ub = 0; loop_ub < 30; loop_ub++) {
            m += x[loop_ub + 1];
          }

          if (m >= 2) {
            NoFalseSig = true;

            /*  Peak followed by dip */
            extram2_size[0] = 1;
            extram2_size[1] = 103;
            memcpy(&extram2_data[0], &cv27[0], 103U * sizeof(char_T));
          }
        } else {
          if (c_i + 1U > (uint32_T)out->mdr->size[0]) {
            i = -1;
            i1 = -1;
          } else {
            if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > out->
                 mdr->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, out->
                mdr->size[0], &pw_emlrtBCI, (emlrtCTX)sp);
            }

            i = c_i - 1;
            if (out->mdr->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(out->mdr->size[0], 1, out->mdr->
                size[0], &qw_emlrtBCI, (emlrtCTX)sp);
            }

            i1 = out->mdr->size[0] - 1;
          }

          if (c_i + 1U > (uint32_T)gmin->size[0]) {
            i2 = -1;
            i3 = 0;
          } else {
            if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > gmin->size[0]))
            {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->size[0],
                &sw_emlrtBCI, (emlrtCTX)sp);
            }

            i2 = c_i - 1;
            if (gmin->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
                &tw_emlrtBCI, (emlrtCTX)sp);
            }

            i3 = gmin->size[0];
          }

          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &rw_emlrtBCI,
              (emlrtCTX)sp);
          }

          if ((c001 < 1) || (c001 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c001, 1, gmin->size[1], &uw_emlrtBCI,
              (emlrtCTX)sp);
          }

          loop_ub = i1 - i;
          i1 = (i3 - i2) - 1;
          if (loop_ub != i1) {
            emlrtSizeEqCheck1DR2012b(loop_ub, i1, &nd_emlrtECI, (emlrtCTX)sp);
          }

          st.site = &kjb_emlrtRSI;
          i1 = b_bool->size[0];
          b_bool->size[0] = loop_ub;
          emxEnsureCapacity_boolean_T(&st, b_bool, i1, &ncb_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_bool->data[i1] = (out->mdr->data[((i + i1) + out->mdr->size[0]) +
                                1] < gmin->data[((i2 + i1) + gmin->size[0] *
              (c001 - 1)) + 1]);
          }

          b_st.site = &km_emlrtRSI;
          c_st.site = &ld_emlrtRSI;
          m = combineVectorElements(&c_st, b_bool);
          if (m >= 2) {
            NoFalseSig = true;

            /* Peak followed by dip in the final part of the search'; */
            extram2_size[0] = 1;
            extram2_size[1] = 104;
            memcpy(&extram2_data[0], &cv40[0], 104U * sizeof(char_T));
          }
        }

        /*  if at this point NoFalseSig==0 it means that: */
        /*  1) n9999<10 */
        /*  2) signal tool place in the central part of the search */
        /*  3) signal was not incontrovertible */
        /*  4) there was not a peak followed by dip */
        if (!NoFalseSig) {
          /*  Compute the final value of the envelope based on */
          /*  mdr(i+1,1)=mdagger+1 observations */
          /* [gval]=FSRenvmdr(mdag+1,p,'prob',0.01,'m0',mdag); */
          st.site = &jjb_emlrtRSI;
          b_FSRenvmdr(&st, mdag + 1.0, INP_p, mdag, gbonf);
          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &vw_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (1 > gbonf->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, gbonf->size[0], &ww_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (2 > gbonf->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, gbonf->size[1], &xw_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > out->mdr->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
              &idb_emlrtBCI, (emlrtCTX)sp);
          }

          if (out->mdr->data[(c_i + out->mdr->size[0]) - 1] < gbonf->data
              [gbonf->size[0]]) {
            if (options_msg) {
              st.site = &knb_emlrtRSI;
              disp(&st, j_emlrt_marshallOut(&st, cv42), &wc_emlrtMCI);
              st.site = &ijb_emlrtRSI;
              int2str(&st, mdag, tmp_data, ii_size);
              q_tmp_size[0] = 1;
              q_tmp_size[1] = ii_size[1] + 5;
              for (i = 0; i < 5; i++) {
                t_tmp_data[i] = cv43[i];
              }

              loop_ub = ii_size[1];
              if (0 <= loop_ub - 1) {
                memcpy(&t_tmp_data[5], &tmp_data[0], loop_ub * sizeof(char_T));
              }

              st.site = &mob_emlrtRSI;
              disp(&st, cb_emlrt_marshallOut(&st, t_tmp_data, q_tmp_size),
                   &xc_emlrtMCI);
            }

            /*  increase mdag of the search by one unit */
            mdag = 0.0;
          } else {
            NoFalseSig = true;
          }
        }

        /*  If the signal has been validated get out of the signal detection */
        /*  loop and move to stage 2: superimposition of the envelopes */
        if (NoFalseSig) {
          if (options_msg) {
            st.site = &gpb_emlrtRSI;
            disp(&st, mb_emlrt_marshallOut(&st, cv35), &uc_emlrtMCI);
          }

          exitg2 = true;
        } else {
          b_guard1 = true;
        }
      } else {
        b_guard1 = true;
      }

      if (b_guard1) {
        c_i++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      }
    }
  } else {
    b_i = 1;
    c_i = 1;
    exitg1 = false;
    while ((!exitg1) && (c_i - 1 <= nmdr)) {
      b_i = c_i;

      /*  Outlier detection based on Bonferroni threshold */
      if (2 > out->mdr->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &yw_emlrtBCI,
          (emlrtCTX)sp);
      }

      if ((c_i < 1) || (c_i > out->mdr->size[0])) {
        emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0], &ky_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (c_i > gbonf->size[0]) {
        emlrtDynamicBoundsCheckR2012b(c_i, 1, gbonf->size[0], &ly_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (gbonf->size[1] < 1) {
        emlrtDynamicBoundsCheckR2012b(gbonf->size[1], 1, gbonf->size[1],
          &ly_emlrtBCI, (emlrtCTX)sp);
      }

      if (out->mdr->data[(c_i + out->mdr->size[0]) - 1] > gbonf->data[(c_i +
           gbonf->size[0] * (gbonf->size[1] - 1)) - 1]) {
        if (options_msg) {
          if (c_i > out->mdr->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0],
              &my_emlrtBCI, (emlrtCTX)sp);
          }

          st.site = &hjb_emlrtRSI;
          int2str(&st, out->mdr->data[c_i - 1], tmp_data, ii_size);
          st.site = &hjb_emlrtRSI;
          int2str(&st, INP_n, b_tmp_data, tmp_size);
          c_tmp_size[0] = 1;
          c_tmp_size[1] = (ii_size[1] + tmp_size[1]) + 27;
          d_tmp_data[0] = 'm';
          d_tmp_data[1] = 'd';
          d_tmp_data[2] = 'r';
          d_tmp_data[3] = '(';
          loop_ub = ii_size[1];
          if (0 <= loop_ub - 1) {
            memcpy(&d_tmp_data[4], &tmp_data[0], loop_ub * sizeof(char_T));
          }

          d_tmp_data[ii_size[1] + 4] = ',';
          loop_ub = tmp_size[1];
          for (i = 0; i < loop_ub; i++) {
            d_tmp_data[(i + ii_size[1]) + 5] = b_tmp_data[i];
          }

          for (i = 0; i < 22; i++) {
            d_tmp_data[((i + ii_size[1]) + tmp_size[1]) + 5] = b_cv10[i];
          }

          st.site = &uob_emlrtRSI;
          disp(&st, cb_emlrt_marshallOut(&st, d_tmp_data, c_tmp_size),
               &wb_emlrtMCI);
        }

        if (c_i > out->mdr->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0], &py_emlrtBCI,
            (emlrtCTX)sp);
        }

        st.site = &gjb_emlrtRSI;
        int2str(&st, out->mdr->data[c_i - 1], dqb_emlrtRSI.data,
                dqb_emlrtRSI.size);
        st.site = &gjb_emlrtRSI;
        int2str(&st, INP_n, dqb_emlrtRSI.data, dqb_emlrtRSI.size);
        if (c_i > out->mdr->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, out->mdr->size[0], &ax_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (1 > out->mdr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, out->mdr->size[1], &seb_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (2 > out->mdr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &seb_emlrtBCI,
            (emlrtCTX)sp);
        }

        n = 1;
        exitg1 = true;
      } else {
        c_i++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      }
    }
  }

  emxFree_real_T(&gmin);
  emxFree_real_T(&gbonf);

  /*  Create figure containing mdr + envelopes based on all the observations. */
  /*  Part 2: envelope resuperimposition */
  /*  if a validated signal took place, superimposition of the envelopes starts */
  /*  from m^\dagger-1 */
  if (n == 1) {
    if ((options_bonflev_size[0] == 0) || (options_bonflev_size[1] == 0)) {
      if (options_msg) {
        for (i = 0; i < 31; i++) {
          b_cv3[i] = '-';
        }

        st.site = &hpb_emlrtRSI;
        disp(&st, nb_emlrt_marshallOut(&st, b_cv3), &ac_emlrtMCI);
        st.site = &fjb_emlrtRSI;
        int2str(&st, mdag - 1.0, tmp_data, ii_size);
        b_tmp_size[0] = 1;
        b_tmp_size[1] = ii_size[1] + 44;
        for (i = 0; i < 44; i++) {
          c_tmp_data[i] = b_cv7[i];
        }

        loop_ub = ii_size[1];
        if (0 <= loop_ub - 1) {
          memcpy(&c_tmp_data[44], &tmp_data[0], loop_ub * sizeof(char_T));
        }

        st.site = &lob_emlrtRSI;
        disp(&st, cb_emlrt_marshallOut(&st, c_tmp_data, b_tmp_size),
             &bc_emlrtMCI);
      }

      /*  First resuperimposed envelope is based on mdag-1 observations */
      /*  Notice that mdr(i,1) = m dagger */
      i = (int32_T)(INP_n + (1.0 - (mdag - 1.0)));
      emlrtForLoopVectorCheckR2021a(mdag - 1.0, 1.0, INP_n, mxDOUBLE_CLASS, i,
        &vc_emlrtRTEI, (emlrtCTX)sp);
      b = mdag - 1.0;
      n = 0;
      exitg1 = false;
      while ((!exitg1) && (n <= i - 1)) {
        b = (mdag - 1.0) + (real_T)n;

        /*  Compute theoretical envelopes based on tr observations */
        if (!INP_weak) {
          st.site = &ejb_emlrtRSI;
          c_FSRenvmdr(&st, b, INP_p, INP_init, gmin1);
        } else {
          /*  use a stronger decision rule to flag outliers (useful in presence of VIOMs) */
          st.site = &djb_emlrtRSI;
          d_FSRenvmdr(&st, b, INP_p, INP_init, gmin1);
        }

        i1 = (gmin1->size[0] - b_i) + 1;
        emlrtForLoopVectorCheckR2021a((real_T)b_i - 1.0, 1.0, gmin1->size[0],
          mxDOUBLE_CLASS, i1 + 1, &wc_emlrtRTEI, (emlrtCTX)sp);
        ii = (real_T)b_i - 1.0;
        m = 0;
        exitg2 = false;
        while ((!exitg2) && (m <= i1)) {
          ii = ((real_T)b_i - 1.0) + (real_T)m;

          /*  CHECK IF STOPPING RULE IS FULFILLED */
          /*  ii>=size(gmin1,1)-2 = final, penultimate or antepenultimate value */
          /*  of the resuperimposed envelope based on tr observations */
          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &bx_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (((int32_T)ii < 1) || ((int32_T)ii > out->mdr->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out->mdr->size[0],
              &kcb_emlrtBCI, (emlrtCTX)sp);
          }

          if (((int32_T)ii < 1) || ((int32_T)ii > gmin1->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, gmin1->size[0],
              &lcb_emlrtBCI, (emlrtCTX)sp);
          }

          if ((c99 < 1) || (c99 > gmin1->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c99, 1, gmin1->size[1], &lcb_emlrtBCI,
              (emlrtCTX)sp);
          }

          d = out->mdr->data[((int32_T)ii + out->mdr->size[0]) - 1];
          if ((d > gmin1->data[((int32_T)ii + gmin1->size[0] * (c99 - 1)) - 1]) &&
              ((int32_T)ii >= gmin1->size[0] - 2)) {
            /*  Condition S1 */
            if (((int32_T)ii < 1) || ((int32_T)ii > out->mdr->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out->mdr->size[0],
                &qcb_emlrtBCI, (emlrtCTX)sp);
            }

            st.site = &cjb_emlrtRSI;
            int2str(&st, out->mdr->data[(int32_T)ii - 1], tmp_data, ii_size);
            st.site = &cjb_emlrtRSI;
            int2str(&st, b, b_tmp_data, tmp_size);
            mes_size[0] = 1;
            mes_size[1] = (ii_size[1] + tmp_size[1]) + 26;
            for (i1 = 0; i1 < 9; i1++) {
              mes_data[i1] = b_cv18[i1];
            }

            loop_ub = ii_size[1];
            if (0 <= loop_ub - 1) {
              memcpy(&mes_data[9], &tmp_data[0], loop_ub * sizeof(char_T));
            }

            mes_data[ii_size[1] + 9] = ',';
            loop_ub = tmp_size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              mes_data[(i1 + ii_size[1]) + 10] = b_tmp_data[i1];
            }

            for (i1 = 0; i1 < 16; i1++) {
              mes_data[((i1 + ii_size[1]) + tmp_size[1]) + 10] = b_cv20[i1];
            }

            if (options_msg) {
              if (((int32_T)ii < 1) || ((int32_T)ii > out->mdr->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out->mdr->size[0],
                  &ddb_emlrtBCI, (emlrtCTX)sp);
              }

              st.site = &bjb_emlrtRSI;
              int2str(&st, out->mdr->data[(int32_T)ii - 1], tmp_data, ii_size);
              st.site = &bjb_emlrtRSI;
              int2str(&st, b, b_tmp_data, tmp_size);
              m_tmp_size[0] = 1;
              m_tmp_size[1] = (ii_size[1] + tmp_size[1]) + 55;
              for (i1 = 0; i1 < 40; i1++) {
                q_tmp_data[i1] = cv28[i1];
              }

              loop_ub = ii_size[1];
              if (0 <= loop_ub - 1) {
                memcpy(&q_tmp_data[40], &tmp_data[0], loop_ub * sizeof(char_T));
              }

              q_tmp_data[ii_size[1] + 40] = ',';
              loop_ub = tmp_size[1];
              for (i1 = 0; i1 < loop_ub; i1++) {
                q_tmp_data[(i1 + ii_size[1]) + 41] = b_tmp_data[i1];
              }

              for (i1 = 0; i1 < 14; i1++) {
                q_tmp_data[((i1 + ii_size[1]) + tmp_size[1]) + 41] = cv39[i1];
              }

              st.site = &job_emlrtRSI;
              disp(&st, cb_emlrt_marshallOut(&st, q_tmp_data, m_tmp_size),
                   &sc_emlrtMCI);
              st.site = &iob_emlrtRSI;
              disp(&st, cb_emlrt_marshallOut(&st, mes_data, mes_size),
                   &tc_emlrtMCI);
            }

            sto = 1;
            exitg2 = true;
          } else {
            b_guard1 = false;
            if ((int32_T)ii < gmin1->size[0] - 2) {
              if (2 > out->mdr->size[1]) {
                emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1],
                  &cx_emlrtBCI, (emlrtCTX)sp);
              }

              if (((int32_T)ii < 1) || ((int32_T)ii > out->mdr->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out->mdr->size[0],
                  &scb_emlrtBCI, (emlrtCTX)sp);
              }

              if (((int32_T)ii < 1) || ((int32_T)ii > gmin1->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, gmin1->size[0],
                  &tcb_emlrtBCI, (emlrtCTX)sp);
              }

              if ((c999 < 1) || (c999 > gmin1->size[1])) {
                emlrtDynamicBoundsCheckR2012b(c999, 1, gmin1->size[1],
                  &tcb_emlrtBCI, (emlrtCTX)sp);
              }

              if (d > gmin1->data[((int32_T)ii + gmin1->size[0] * (c999 - 1)) -
                  1]) {
                /*  Condition S2 */
                if (((int32_T)ii < 1) || ((int32_T)ii > out->mdr->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out->mdr->size[0],
                    &ycb_emlrtBCI, (emlrtCTX)sp);
                }

                st.site = &ajb_emlrtRSI;
                int2str(&st, out->mdr->data[(int32_T)ii - 1], dqb_emlrtRSI.data,
                        dqb_emlrtRSI.size);
                st.site = &ajb_emlrtRSI;
                int2str(&st, b, dqb_emlrtRSI.data, dqb_emlrtRSI.size);
                if (options_msg) {
                  if (((int32_T)ii < 1) || ((int32_T)ii > out->mdr->size[0])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out->mdr->
                      size[0], &fdb_emlrtBCI, (emlrtCTX)sp);
                  }

                  st.site = &yib_emlrtRSI;
                  int2str(&st, out->mdr->data[(int32_T)ii - 1], tmp_data,
                          ii_size);
                  st.site = &yib_emlrtRSI;
                  int2str(&st, b, b_tmp_data, tmp_size);
                  k_tmp_size[0] = 1;
                  k_tmp_size[1] = (ii_size[1] + tmp_size[1]) + 57;
                  for (i1 = 0; i1 < 40; i1++) {
                    p_tmp_data[i1] = cv28[i1];
                  }

                  loop_ub = ii_size[1];
                  if (0 <= loop_ub - 1) {
                    memcpy(&p_tmp_data[40], &tmp_data[0], loop_ub * sizeof
                           (char_T));
                  }

                  p_tmp_data[ii_size[1] + 40] = ',';
                  loop_ub = tmp_size[1];
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    p_tmp_data[(i1 + ii_size[1]) + 41] = b_tmp_data[i1];
                  }

                  for (i1 = 0; i1 < 16; i1++) {
                    p_tmp_data[((i1 + ii_size[1]) + tmp_size[1]) + 41] = cv37[i1];
                  }

                  st.site = &kob_emlrtRSI;
                  disp(&st, cb_emlrt_marshallOut(&st, p_tmp_data, k_tmp_size),
                       &vc_emlrtMCI);
                }

                sto = 1;
                exitg2 = true;
              } else {
                b_guard1 = true;
              }
            } else {
              b_guard1 = true;
            }

            if (b_guard1) {
              /*  mdr is inside the envelopes, so keep resuperimposing */
              m++;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b((emlrtCTX)sp);
              }
            }
          }
        }

        if (sto == 1) {
          exitg1 = true;
        } else {
          n++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtCTX)sp);
          }
        }
      }

      /*         %% Stage 2a: subset validation */
      /*  In this part we check whether the subset is homogeneous. In other */
      /*  words we verify conditions H1 and H2 */
      /*  tr= m^\dagger+k+1 */
      /*  m^\dagger+k=tr-1 */
      /*  m*=mdr(ii,1) */
      /*  Condition H2 */
      /*  Check if stopping rule takes place at m* <m^\dagger+k */
      if (((int32_T)ii < 1) || ((int32_T)ii > out->mdr->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out->mdr->size[0],
          &ybb_emlrtBCI, (emlrtCTX)sp);
      }

      if (out->mdr->data[(int32_T)ii - 1] < b - 1.0) {
        /*  Condition H2b and H2a */
        if ((uint32_T)ii + 1U > (uint32_T)gmin1->size[0]) {
          i = -1;
          i1 = -1;
          i2 = -1;
          i3 = 0;
        } else {
          if (((int32_T)((uint32_T)ii + 1U) < 1) || ((int32_T)((uint32_T)ii + 1U)
               > gmin1->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)ii + 1U), 1,
              gmin1->size[0], &dx_emlrtBCI, (emlrtCTX)sp);
          }

          i = (int32_T)(uint32_T)ii - 1;
          if (gmin1->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(gmin1->size[0], 1, gmin1->size[0],
              &ex_emlrtBCI, (emlrtCTX)sp);
          }

          i1 = gmin1->size[0] - 1;
          if (((int32_T)((uint32_T)ii + 1U) < 1) || ((int32_T)((uint32_T)ii + 1U)
               > out->mdr->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)ii + 1U), 1,
              out->mdr->size[0], &gx_emlrtBCI, (emlrtCTX)sp);
          }

          i2 = (int32_T)(uint32_T)ii - 1;
          if ((gmin1->size[0] < 1) || (gmin1->size[0] > out->mdr->size[0])) {
            emlrtDynamicBoundsCheckR2012b(gmin1->size[0], 1, out->mdr->size[0],
              &hx_emlrtBCI, (emlrtCTX)sp);
          }

          i3 = gmin1->size[0];
        }

        if (4 > gmin1->size[1]) {
          emlrtDynamicBoundsCheckR2012b(4, 1, gmin1->size[1], &fx_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (2 > out->mdr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &ix_emlrtBCI,
            (emlrtCTX)sp);
        }

        loop_ub = i1 - i;
        i1 = (i3 - i2) - 1;
        if (loop_ub != i1) {
          emlrtSizeEqCheck1DR2012b(loop_ub, i1, &od_emlrtECI, (emlrtCTX)sp);
        }

        st.site = &xib_emlrtRSI;
        i1 = b_bool->size[0];
        b_bool->size[0] = loop_ub;
        emxEnsureCapacity_boolean_T(&st, b_bool, i1, &fcb_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_bool->data[i1] = (gmin1->data[((i + i1) + gmin1->size[0] * 3) + 1] >
                              out->mdr->data[((i2 + i1) + out->mdr->size[0]) + 1]);
        }

        b_st.site = &km_emlrtRSI;
        c_st.site = &ld_emlrtRSI;
        m = combineVectorElements(&c_st, b_bool);
        if (m > 0) {
          if (options_msg) {
            st.site = &wib_emlrtRSI;
            int2str(&st, b - 1.0, tmp_data, ii_size);
            h_tmp_size[0] = 1;
            h_tmp_size[1] = ii_size[1] + 99;
            for (i = 0; i < 13; i++) {
              k_tmp_data[i] = cv22[i];
            }

            loop_ub = ii_size[1];
            if (0 <= loop_ub - 1) {
              memcpy(&k_tmp_data[13], &tmp_data[0], loop_ub * sizeof(char_T));
            }

            memcpy(&k_tmp_data[ii_size[1] + 13], &cv25[0], 86U * sizeof(char_T));
            st.site = &gob_emlrtRSI;
            disp(&st, cb_emlrt_marshallOut(&st, k_tmp_data, h_tmp_size),
                 &ad_emlrtMCI);
            for (i = 0; i < 40; i++) {
              cv31[i] = '-';
            }

            st.site = &wnb_emlrtRSI;
            disp(&st, t_emlrt_marshallOut(&st, cv31), &bd_emlrtMCI);
          }

          /*  Find m^{1%} that is the step where mdr goes below the 1% */
          /*  threshold for the first time */
          /*  gfind = concatenate all the steps from m^*+1 to m^\dagger+k-1 */
          if ((uint32_T)ii + 1U > (uint32_T)gmin1->size[0]) {
            i = -1;
            i1 = -1;
            i2 = -1;
            i3 = -1;
            m = -1;
            n = 0;
          } else {
            if (((int32_T)((uint32_T)ii + 1U) < 1) || ((int32_T)((uint32_T)ii +
                  1U) > gmin1->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)ii + 1U), 1,
                gmin1->size[0], &jx_emlrtBCI, (emlrtCTX)sp);
            }

            i = (int32_T)(uint32_T)ii - 1;
            if (gmin1->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(gmin1->size[0], 1, gmin1->size[0],
                &kx_emlrtBCI, (emlrtCTX)sp);
            }

            i1 = gmin1->size[0] - 1;
            if (((int32_T)((uint32_T)ii + 1U) < 1) || ((int32_T)((uint32_T)ii +
                  1U) > gmin1->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)ii + 1U), 1,
                gmin1->size[0], &mx_emlrtBCI, (emlrtCTX)sp);
            }

            i2 = (int32_T)(uint32_T)ii - 1;
            if (gmin1->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(gmin1->size[0], 1, gmin1->size[0],
                &nx_emlrtBCI, (emlrtCTX)sp);
            }

            i3 = gmin1->size[0] - 1;
            if (((int32_T)((uint32_T)ii + 1U) < 1) || ((int32_T)((uint32_T)ii +
                  1U) > out->mdr->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)ii + 1U), 1,
                out->mdr->size[0], &px_emlrtBCI, (emlrtCTX)sp);
            }

            m = (int32_T)(uint32_T)ii - 1;
            if ((gmin1->size[0] < 1) || (gmin1->size[0] > out->mdr->size[0])) {
              emlrtDynamicBoundsCheckR2012b(gmin1->size[0], 1, out->mdr->size[0],
                &qx_emlrtBCI, (emlrtCTX)sp);
            }

            n = gmin1->size[0];
          }

          if (4 > gmin1->size[1]) {
            emlrtDynamicBoundsCheckR2012b(4, 1, gmin1->size[1], &ox_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (2 > out->mdr->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out->mdr->size[1], &rx_emlrtBCI,
              (emlrtCTX)sp);
          }

          loop_ub = i3 - i2;
          i3 = (n - m) - 1;
          if (loop_ub != i3) {
            emlrtSizeEqCheck1DR2012b(loop_ub, i3, &pd_emlrtECI, (emlrtCTX)sp);
          }

          if (1 > gmin1->size[1]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, gmin1->size[1], &lx_emlrtBCI,
              (emlrtCTX)sp);
          }

          st.site = &vib_emlrtRSI;
          i3 = b_bool->size[0];
          b_bool->size[0] = loop_ub;
          emxEnsureCapacity_boolean_T(&st, b_bool, i3, &ocb_emlrtRTEI);
          for (i3 = 0; i3 < loop_ub; i3++) {
            b_bool->data[i3] = (gmin1->data[((i2 + i3) + gmin1->size[0] * 3) + 1]
                                > out->mdr->data[((m + i3) + out->mdr->size[0])
                                + 1]);
          }

          b_st.site = &xk_emlrtRSI;
          c_st.site = &yk_emlrtRSI;
          loop_ub = i1 - i;
          if (b_bool->size[0] != loop_ub) {
            emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
              "MATLAB:catenate:matrixDimensionMismatch",
              "MATLAB:catenate:matrixDimensionMismatch", 0);
          }

          emxInit_real_T(&c_st, &gfind, 2, &qcb_emlrtRTEI, true);
          i1 = gfind->size[0] * gfind->size[1];
          gfind->size[0] = loop_ub;
          gfind->size[1] = 2;
          emxEnsureCapacity_real_T(&b_st, gfind, i1, &qcb_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            gfind->data[i1] = gmin1->data[(i + i1) + 1];
          }

          loop_ub = b_bool->size[0];
          for (i = 0; i < loop_ub; i++) {
            gfind->data[i + gfind->size[0]] = b_bool->data[i];
          }

          /*  select from gfind the steps where mdr was below 1% threshold */
          /*  gfind(1,1) contains the first step where mdr was below 1% */
          loop_ub = gfind->size[0];
          i = b_bool->size[0];
          b_bool->size[0] = gfind->size[0];
          emxEnsureCapacity_boolean_T(sp, b_bool, i, &vcb_emlrtRTEI);
          for (i = 0; i < loop_ub; i++) {
            b_bool->data[i] = (gfind->data[i + gfind->size[0]] > 0.0);
          }

          n = b_bool->size[0] - 1;
          nmdr = 0;
          for (c_i = 0; c_i <= n; c_i++) {
            if (b_bool->data[c_i]) {
              nmdr++;
            }
          }

          emxInit_int32_T(sp, &r9, 1, &vcb_emlrtRTEI, true);
          i = r9->size[0];
          r9->size[0] = nmdr;
          emxEnsureCapacity_int32_T(sp, r9, i, &rbb_emlrtRTEI);
          m = 0;
          for (c_i = 0; c_i <= n; c_i++) {
            if (b_bool->data[c_i]) {
              r9->data[m] = c_i + 1;
              m++;
            }
          }

          loop_ub = r9->size[0];
          for (i = 0; i < loop_ub; i++) {
            if (r9->data[i] > gfind->size[0]) {
              emlrtDynamicBoundsCheckR2012b(r9->data[i], 1, gfind->size[0],
                &beb_emlrtBCI, (emlrtCTX)sp);
            }
          }

          /*  find maximum in the interval m^\dagger=mdr(i,1) to the step */
          /*  prior to the one where mdr goes below 1% envelope */
          if (r9->size[0] == 1) {
            for (i = 0; i < 1; i++) {
              ndecl = gfind->data[r9->data[0] - 1];
            }
          } else {
            /*  Make sure that gfind(1,1)-mdr(1,1) is not smaller */
            /*  than i otherwise tr  becomes empty */
            if (1 > r9->size[0]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, r9->size[0], &sx_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (1 > out->mdr->size[0]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out->mdr->size[0],
                &tx_emlrtBCI, (emlrtCTX)sp);
            }

            d = gfind->data[r9->data[0] - 1] - out->mdr->data[0];
            if (d >= b_i) {
              if (1 > r9->size[0]) {
                emlrtDynamicBoundsCheckR2012b(1, 1, r9->size[0], &ux_emlrtBCI,
                  (emlrtCTX)sp);
              }

              if (1 > out->mdr->size[0]) {
                emlrtDynamicBoundsCheckR2012b(1, 1, out->mdr->size[0],
                  &vx_emlrtBCI, (emlrtCTX)sp);
              }

              if (b_i > d) {
                i = 0;
                i1 = 0;
              } else {
                if ((b_i < 1) || (b_i > out->mdr->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(b_i, 1, out->mdr->size[0],
                    &wx_emlrtBCI, (emlrtCTX)sp);
                }

                i = b_i - 1;
                if (d != (int32_T)muDoubleScalarFloor(d)) {
                  emlrtIntegerCheckR2012b(d, &qd_emlrtDCI, (emlrtCTX)sp);
                }

                if (((int32_T)d < 1) || ((int32_T)d > out->mdr->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, out->mdr->size[0],
                    &xx_emlrtBCI, (emlrtCTX)sp);
                }

                i1 = (int32_T)d;
              }

              loop_ub = i1 - i;
              i1 = gfind->size[0] * gfind->size[1];
              gfind->size[0] = loop_ub;
              gfind->size[1] = 2;
              emxEnsureCapacity_real_T(sp, gfind, i1, &gdb_emlrtRTEI);
              for (i1 = 0; i1 < 2; i1++) {
                for (i2 = 0; i2 < loop_ub; i2++) {
                  if (i1 + 1 > out->mdr->size[1]) {
                    emlrtDynamicBoundsCheckR2012b(i1 + 1, 1, out->mdr->size[1],
                      &deb_emlrtBCI, (emlrtCTX)sp);
                  }

                  gfind->data[i2 + gfind->size[0] * i1] = out->mdr->data[(i + i2)
                    + out->mdr->size[0] * i1];
                }
              }

              st.site = &uib_emlrtRSI;
              d_sortrows(&st, gfind);
              if (gfind->size[0] < 1) {
                emlrtDynamicBoundsCheckR2012b(gfind->size[0], 1, gfind->size[0],
                  &eeb_emlrtBCI, (emlrtCTX)sp);
              }

              ndecl = gfind->data[gfind->size[0] - 1];
            } else {
              if ((b_i < 1) || (b_i > out->mdr->size[0])) {
                emlrtDynamicBoundsCheckR2012b(b_i, 1, out->mdr->size[0],
                  &ceb_emlrtBCI, (emlrtCTX)sp);
              }

              ndecl = out->mdr->data[b_i - 1];
            }
          }

          emxFree_int32_T(&r9);
          emxFree_real_T(&gfind);

          /*  Instruction necessary for MATlAB C coder */
          if (options_msg) {
            st.site = &unb_emlrtRSI;
            disp(&st, r_emlrt_marshallOut(&st, cv45), &ed_emlrtMCI);

            /*  disp(['Using the criterion of the maximum, the group of homogenous obs. is=' int2str(tr)]); */
            st.site = &tib_emlrtRSI;
            b_st.site = &sv_emlrtRSI;
            c_st.site = &jnb_emlrtRSI;
            j_st.site = &inb_emlrtRSI;
            g_emlrt_marshallIn(&c_st, d_feval(&c_st, g_emlrt_marshallOut(&c_st,
              b_cv12), i_emlrt_marshallOut(1.0), db_emlrt_marshallOut(&j_st,
              cv46), i_emlrt_marshallOut(ndecl), &ab_emlrtMCI),
                               "<output of feval>");
          }

          /*  tr is redefined and is associated with the step associated to */
          /*  the maximum value of r_min */
          /*  try=sormcl[rows(sormcl),1]+1; */
          b = ndecl + 1.0;
        } else if (options_msg) {
          st.site = &sib_emlrtRSI;
          int2str(&st, b - 1.0, tmp_data, ii_size);
          h_tmp_size[0] = 1;
          h_tmp_size[1] = ii_size[1] + 34;
          for (i = 0; i < 13; i++) {
            j_tmp_data[i] = cv22[i];
          }

          loop_ub = ii_size[1];
          if (0 <= loop_ub - 1) {
            memcpy(&j_tmp_data[13], &tmp_data[0], loop_ub * sizeof(char_T));
          }

          for (i = 0; i < 21; i++) {
            j_tmp_data[(i + ii_size[1]) + 13] = cv26[i];
          }

          st.site = &hob_emlrtRSI;
          disp(&st, cb_emlrt_marshallOut(&st, j_tmp_data, h_tmp_size),
               &yc_emlrtMCI);
        }
      }

      ndecl = (INP_n - b) + 1.0;
    } else {
      if ((b_i < 1) || (b_i > out->mdr->size[0])) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, out->mdr->size[0], &sy_emlrtBCI,
          (emlrtCTX)sp);
      }

      ndecl = INP_n - out->mdr->data[b_i - 1];
    }

    if (options_msg) {
      for (i = 0; i < 28; i++) {
        b_cv5[i] = '-';
      }

      st.site = &smb_emlrtRSI;
      disp(&st, emlrt_marshallOut(&st, b_cv5), &jc_emlrtMCI);
      st.site = &vnb_emlrtRSI;
      disp(&st, s_emlrt_marshallOut(&st, b_cv6), &kc_emlrtMCI);
      st.site = &rib_emlrtRSI;
      int2str(&st, ndecl, tmp_data, ii_size);
      c_tmp_size[0] = 1;
      c_tmp_size[1] = ii_size[1] + 37;
      for (i = 0; i < 37; i++) {
        d_tmp_data[i] = b_cv8[i];
      }

      loop_ub = ii_size[1];
      if (0 <= loop_ub - 1) {
        memcpy(&d_tmp_data[37], &tmp_data[0], loop_ub * sizeof(char_T));
      }

      st.site = &fob_emlrtRSI;
      disp(&st, cb_emlrt_marshallOut(&st, d_tmp_data, c_tmp_size), &mc_emlrtMCI);
    }
  } else {
    if (options_msg) {
      st.site = &bpb_emlrtRSI;
      disp(&st, eb_emlrt_marshallOut(&st, b_cv2), &xb_emlrtMCI);
    }

    ndecl = 0.0;
  }

  emxFree_real_T(&gmin1);

  /*  End of the forward search */
  if (options_msg) {
    if ((options_bonflev_size[0] == 0) || (options_bonflev_size[1] == 0)) {
      st.site = &onb_emlrtRSI;
      disp(&st, l_emlrt_marshallOut(&st, b_cv4), &fc_emlrtMCI);
      ii_size[0] = out->nout.size[0];
      ii_size[1] = out->nout.size[1];
      st.site = &jpb_emlrtRSI;
      disp(&st, ob_emlrt_marshallOut(out->nout.data, ii_size), &gc_emlrtMCI);
    }

    if (extram3_size[1] != 0) {
      st.site = &eob_emlrtRSI;
      disp(&st, cb_emlrt_marshallOut(&st, extram3_data, extram3_size),
           &ic_emlrtMCI);
    }

    if (extram2_size[1] != 0) {
      st.site = &dob_emlrtRSI;
      disp(&st, cb_emlrt_marshallOut(&st, extram2_data, extram2_size),
           &lc_emlrtMCI);
    }
  }

  /*  Plot entry order of the untis */
  /*  plot([Un(1,1)-1;Un(:,1)],bb','x') */
  emxInit_real_T(sp, &Xy, 2, &edb_emlrtRTEI, true);
  if (ndecl > 0.0) {
    /*  Now find the list of the units declared as outliers */
    /*  bsel=~isnan(bb(:,tr-init+1)); */
    /*  ListOut=setdiff(1:n,bsel,1); */
    /*  REMARK: If the units forming subset have not been stored for all */
    /*  steps of the fwd search then it is necessary to call procedure FSRbsb */
    /*  to find unit forming subset in step n-decl */
    emxInit_int32_T(sp, &r1, 1, &ccb_emlrtRTEI, true);
    if (INP_bb->size[1] < (INP_n - INP_init) + 1.0) {
      emxInit_boolean_T(sp, &r2, 2, &oh_emlrtRTEI, true);

      /*  then it is necessary to understand what are the units belonging to */
      /*  subset in step n-ndecl. */
      /*  colbb is the column number of bb which contains the units forming */
      /*  subset in the largest step which has been stored among those */
      /*  which are smaller or equal than n-decl. */
      /*  The units in column colbb of matrix bb will form the initial */
      /*  subset in the call of routine FSRbsb */
      st.site = &qib_emlrtRSI;
      b_st.site = &km_emlrtRSI;
      i = r2->size[0] * r2->size[1];
      r2->size[0] = INP_bb->size[0];
      r2->size[1] = INP_bb->size[1];
      emxEnsureCapacity_boolean_T(&b_st, r2, i, &oh_emlrtRTEI);
      loop_ub = INP_bb->size[0] * INP_bb->size[1];
      for (i = 0; i < loop_ub; i++) {
        r2->data[i] = muDoubleScalarIsNaN(INP_bb->data[i]);
      }

      emxInit_int32_T(&b_st, &nz, 2, &sdb_emlrtRTEI, true);
      c_st.site = &ld_emlrtRSI;
      c_combineVectorElements(&c_st, r2, nz);
      st.site = &qib_emlrtRSI;
      i = b_beta->size[0] * b_beta->size[1];
      b_beta->size[0] = 1;
      b_beta->size[1] = nz->size[1];
      emxEnsureCapacity_boolean_T(&st, b_beta, i, &ecb_emlrtRTEI);
      loop_ub = nz->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_beta->data[i] = (nz->data[i] >= ndecl);
      }

      emxFree_int32_T(&nz);
      b_st.site = &ob_emlrtRSI;
      e_eml_find(&b_st, b_beta, (int32_T *)&m, ii_size);

      /*   if sum(~isnan(bb(:,colbb)))<n-ndecl then it is necessary to call */
      /*   procedure FSRbsb or FSRHbsb or FSRBbsb */
      st.site = &pib_emlrtRSI;
      nmdr = ii_size[1];
      loop_ub = ii_size[1];
      for (i = 0; i < loop_ub; i++) {
        n = m;
      }

      loop_ub = ii_size[1];
      for (i = 0; i < loop_ub; i++) {
        if ((n < 1) || (n > INP_bb->size[1])) {
          emlrtDynamicBoundsCheckR2012b(n, 1, INP_bb->size[1], &hdb_emlrtBCI,
            &st);
        }
      }

      loop_ub = INP_bb->size[0];
      i = r2->size[0] * r2->size[1];
      r2->size[0] = INP_bb->size[0];
      r2->size[1] = ii_size[1];
      emxEnsureCapacity_boolean_T(&st, r2, i, &oh_emlrtRTEI);
      m = ii_size[1];
      for (i = 0; i < m; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          r2->data[i1] = muDoubleScalarIsNaN(INP_bb->data[i1 + INP_bb->size[0] *
            (n - 1)]);
        }
      }

      emxInit_boolean_T(&st, &b_x, 2, &lcb_emlrtRTEI, true);
      i = b_x->size[0] * b_x->size[1];
      b_x->size[0] = r2->size[0];
      b_x->size[1] = r2->size[1];
      emxEnsureCapacity_boolean_T(&st, b_x, i, &lcb_emlrtRTEI);
      loop_ub = r2->size[0] * r2->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_x->data[i] = !r2->data[i];
      }

      b_st.site = &km_emlrtRSI;
      if (((b_x->size[0] != 1) || (b_x->size[1] != 1)) && (b_x->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &r_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility",
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      if (c_isequal(b_x)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &uc_emlrtRTEI,
          "Coder:toolbox:UnsupportedSpecialEmpty",
          "Coder:toolbox:UnsupportedSpecialEmpty", 0);
      }

      c_st.site = &ld_emlrtRSI;
      d_combineVectorElements(&c_st, b_x, (int32_T *)&m, ii_size);
      b = INP_n - ndecl;
      c_ii_size[0] = 1;
      c_ii_size[1] = ii_size[1];
      loop_ub = ii_size[1];
      for (i = 0; i < loop_ub; i++) {
        b_ii_data = (m < b);
      }

      ii_data.data = &b_ii_data;
      ii_data.size = &c_ii_size[0];
      ii_data.allocatedSize = 1;
      ii_data.numDimensions = 2;
      ii_data.canFreeData = false;
      st.site = &pib_emlrtRSI;
      if (c_ifWhileCond(&ii_data)) {
        for (i = 0; i < nmdr; i++) {
          if ((n < 1) || (n > INP_bb->size[1])) {
            emlrtDynamicBoundsCheckR2012b(n, 1, INP_bb->size[1], &tdb_emlrtBCI,
              (emlrtCTX)sp);
          }
        }

        loop_ub = INP_bb->size[0];
        i = r2->size[0] * r2->size[1];
        r2->size[0] = INP_bb->size[0];
        r2->size[1] = nmdr;
        emxEnsureCapacity_boolean_T(sp, r2, i, &oh_emlrtRTEI);
        for (i = 0; i < nmdr; i++) {
          for (i1 = 0; i1 < loop_ub; i1++) {
            r2->data[i1] = muDoubleScalarIsNaN(INP_bb->data[i1 + INP_bb->size[0]
              * (n - 1)]);
          }
        }

        i = b_x->size[0] * b_x->size[1];
        b_x->size[0] = r2->size[0];
        b_x->size[1] = r2->size[1];
        emxEnsureCapacity_boolean_T(sp, b_x, i, &ucb_emlrtRTEI);
        loop_ub = r2->size[0] * r2->size[1];
        for (i = 0; i < loop_ub; i++) {
          b_x->data[i] = !r2->data[i];
        }

        n = b_x->size[0] * b_x->size[1] - 1;
        nmdr = 0;
        for (b_i = 0; b_i <= n; b_i++) {
          if (b_x->data[b_i]) {
            nmdr++;
          }
        }

        i = r1->size[0];
        r1->size[0] = nmdr;
        emxEnsureCapacity_int32_T(sp, r1, i, &rbb_emlrtRTEI);
        m = 0;
        for (b_i = 0; b_i <= n; b_i++) {
          if (b_x->data[b_i]) {
            r1->data[m] = b_i + 1;
            m++;
          }
        }

        loop_ub = r1->size[0];
        for (i = 0; i < loop_ub; i++) {
          if (r1->data[i] > out->ListCl->size[1]) {
            emlrtDynamicBoundsCheckR2012b(r1->data[i], 1, out->ListCl->size[1],
              &aeb_emlrtBCI, (emlrtCTX)sp);
          }
        }

        /*  Call procedure FSRbsb */
        i = y->size[0];
        y->size[0] = r1->size[0];
        emxEnsureCapacity_real_T(sp, y, i, &bdb_emlrtRTEI);
        loop_ub = r1->size[0];
        for (i = 0; i < loop_ub; i++) {
          y->data[i] = out->ListCl->data[r1->data[i] - 1];
        }

        emxInit_real_T(sp, &Un, 2, &rbb_emlrtRTEI, true);
        emxInit_real32_T(sp, &BB, 2, &rbb_emlrtRTEI, true);
        st.site = &oib_emlrtRSI;
        FSRbsb(&st, INP_y, INP_X, y, INP_n - ndecl, Un, BB);
        i = out->Un->size[0] * out->Un->size[1];
        out->Un->size[0] = Un->size[0];
        out->Un->size[1] = 11;
        emxEnsureCapacity_real_T(sp, out->Un, i, &jbb_emlrtRTEI);
        loop_ub = Un->size[0] * 11;
        for (i = 0; i < loop_ub; i++) {
          out->Un->data[i] = Un->data[i];
        }

        emxFree_real_T(&Un);

        /*  The first column of BB contains the units forming subset in */
        /*  step n-ndecl */
        if (1 > BB->size[1]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, BB->size[1], &yx_emlrtBCI,
            (emlrtCTX)sp);
        }

        emxInit_real32_T(sp, &b_BB, 1, &fdb_emlrtRTEI, true);
        st.site = &nib_emlrtRSI;
        b_st.site = &aeb_emlrtRSI;
        loop_ub = BB->size[0];
        i = b_BB->size[0];
        b_BB->size[0] = BB->size[0];
        emxEnsureCapacity_real32_T(&b_st, b_BB, i, &fdb_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          b_BB->data[i] = BB->data[i];
        }

        emxFree_real32_T(&BB);
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = out->ListCl->size[1];
        emxEnsureCapacity_real_T(&b_st, beta, i, &hdb_emlrtRTEI);
        loop_ub = out->ListCl->size[0] * out->ListCl->size[1] - 1;
        for (i = 0; i <= loop_ub; i++) {
          beta->data[i] = out->ListCl->data[i];
        }

        c_st.site = &pdb_emlrtRSI;
        f_do_vectors(&c_st, beta, b_BB, out->ListOut, ia, &m);
        emxFree_real32_T(&b_BB);
      } else {
        for (i = 0; i < nmdr; i++) {
          if ((n < 1) || (n > INP_bb->size[1])) {
            emlrtDynamicBoundsCheckR2012b(n, 1, INP_bb->size[1], &sdb_emlrtBCI,
              (emlrtCTX)sp);
          }
        }

        loop_ub = INP_bb->size[0];
        i = r2->size[0] * r2->size[1];
        r2->size[0] = INP_bb->size[0];
        r2->size[1] = nmdr;
        emxEnsureCapacity_boolean_T(sp, r2, i, &tcb_emlrtRTEI);
        for (i = 0; i < nmdr; i++) {
          for (i1 = 0; i1 < loop_ub; i1++) {
            r2->data[i1] = muDoubleScalarIsNaN(INP_bb->data[i1 + INP_bb->size[0]
              * (n - 1)]);
          }
        }

        n = r2->size[0] * r2->size[1] - 1;
        nmdr = 0;
        for (b_i = 0; b_i <= n; b_i++) {
          if (r2->data[b_i]) {
            nmdr++;
          }
        }

        i = r1->size[0];
        r1->size[0] = nmdr;
        emxEnsureCapacity_int32_T(sp, r1, i, &rbb_emlrtRTEI);
        m = 0;
        for (b_i = 0; b_i <= n; b_i++) {
          if (r2->data[b_i]) {
            r1->data[m] = b_i + 1;
            m++;
          }
        }

        i = out->ListOut->size[0] * out->ListOut->size[1];
        out->ListOut->size[0] = 1;
        out->ListOut->size[1] = r1->size[0];
        emxEnsureCapacity_real_T(sp, out->ListOut, i, &wcb_emlrtRTEI);
        loop_ub = r1->size[0];
        for (i = 0; i < loop_ub; i++) {
          if (r1->data[i] > out->ListCl->size[1]) {
            emlrtDynamicBoundsCheckR2012b(r1->data[i], 1, out->ListCl->size[1],
              &xdb_emlrtBCI, (emlrtCTX)sp);
          }

          out->ListOut->data[i] = out->ListCl->data[r1->data[i] - 1];
        }
      }

      emxFree_boolean_T(&r2);
      emxFree_boolean_T(&b_x);
    } else {
      d = (real_T)INP_bb->size[1] - ndecl;
      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &rd_emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)d < 1) || ((int32_T)d > INP_bb->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, INP_bb->size[1],
          &ay_emlrtBCI, (emlrtCTX)sp);
      }

      loop_ub = INP_bb->size[0];
      i = add->size[0];
      add->size[0] = INP_bb->size[0];
      emxEnsureCapacity_real_T(sp, add, i, &bcb_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        add->data[i] = INP_bb->data[i + INP_bb->size[0] * ((int32_T)d - 1)];
      }

      i = b_bool->size[0];
      b_bool->size[0] = add->size[0];
      emxEnsureCapacity_boolean_T(sp, b_bool, i, &ccb_emlrtRTEI);
      loop_ub = add->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_bool->data[i] = muDoubleScalarIsNaN(add->data[i]);
      }

      n = b_bool->size[0] - 1;
      nmdr = 0;
      for (b_i = 0; b_i <= n; b_i++) {
        if (b_bool->data[b_i]) {
          nmdr++;
        }
      }

      i = r1->size[0];
      r1->size[0] = nmdr;
      emxEnsureCapacity_int32_T(sp, r1, i, &rbb_emlrtRTEI);
      m = 0;
      for (b_i = 0; b_i <= n; b_i++) {
        if (b_bool->data[b_i]) {
          r1->data[m] = b_i + 1;
          m++;
        }
      }

      i = out->ListOut->size[0] * out->ListOut->size[1];
      out->ListOut->size[0] = 1;
      out->ListOut->size[1] = r1->size[0];
      emxEnsureCapacity_real_T(sp, out->ListOut, i, &gcb_emlrtRTEI);
      loop_ub = r1->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (r1->data[i] > out->ListCl->size[1]) {
          emlrtDynamicBoundsCheckR2012b(r1->data[i], 1, out->ListCl->size[1],
            &xcb_emlrtBCI, (emlrtCTX)sp);
        }

        out->ListOut->data[i] = out->ListCl->data[r1->data[i] - 1];
      }
    }

    emxFree_int32_T(&r1);

    /*  Add to ListOut all the units which have equal values in terms of X */
    /*  and to y to those declared as outliers */
    b = muDoubleScalarRound(INP_n * 5.0);
    if (b != (int32_T)b) {
      emlrtIntegerCheckR2012b(b, &yd_emlrtDCI, (emlrtCTX)sp);
    }

    i = add->size[0];
    add->size[0] = (int32_T)b;
    emxEnsureCapacity_real_T(sp, add, i, &icb_emlrtRTEI);
    if (b != (int32_T)b) {
      emlrtIntegerCheckR2012b(b, &yd_emlrtDCI, (emlrtCTX)sp);
    }

    loop_ub = (int32_T)b;
    for (i = 0; i < loop_ub; i++) {
      add->data[i] = 0.0;
    }

    st.site = &mib_emlrtRSI;
    b_st.site = &aeb_emlrtRSI;
    c_st.site = &pdb_emlrtRSI;
    g_do_vectors(&c_st, out->ListCl, out->ListOut, good, ia, &m);
    st.site = &lib_emlrtRSI;
    b_st.site = &fbb_emlrtRSI;
    if (INP_X->size[1] != 0) {
      n = INP_X->size[0];
    } else if (INP_y->size[0] != 0) {
      n = INP_y->size[0];
    } else {
      n = INP_X->size[0];
    }

    c_st.site = &yk_emlrtRSI;
    if ((INP_X->size[0] == n) || (INP_X->size[1] == 0)) {
      b_b = true;
    } else {
      emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((INP_y->size[0] != n) && (INP_y->size[0] != 0)) {
      b_b = false;
    }

    if (!b_b) {
      emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    emxInit_real_T(&c_st, &b_Xy, 2, &rcb_emlrtRTEI, true);
    if (INP_X->size[1] != 0) {
      m = INP_X->size[1];
    } else {
      m = 0;
    }

    sizes_idx_1 = (int8_T)(INP_y->size[0] != 0);
    if (INP_X->size[1] != 0) {
      nmdr = INP_X->size[1];
    } else {
      nmdr = 0;
    }

    i = b_Xy->size[0] * b_Xy->size[1];
    b_Xy->size[0] = n;
    b_Xy->size[1] = m + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, b_Xy, i, &rcb_emlrtRTEI);
    for (i = 0; i < m; i++) {
      for (i1 = 0; i1 < n; i1++) {
        b_Xy->data[i1 + b_Xy->size[0] * i] = INP_X->data[i1 + n * i];
      }
    }

    loop_ub = sizes_idx_1;
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < n; i1++) {
        b_Xy->data[i1 + b_Xy->size[0] * nmdr] = INP_y->data[i1];
      }
    }

    ij = 0U;
    i = out->ListOut->size[1];
    for (b_i = 0; b_i < i; b_i++) {
      i1 = good->size[1];
      for (nmdr = 0; nmdr < i1; nmdr++) {
        if (nmdr + 1 > good->size[1]) {
          emlrtDynamicBoundsCheckR2012b(nmdr + 1, 1, good->size[1],
            &qdb_emlrtBCI, (emlrtCTX)sp);
        }

        d = good->data[nmdr];
        if (d != (int32_T)muDoubleScalarFloor(d)) {
          emlrtIntegerCheckR2012b(d, &sd_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)d < 1) || ((int32_T)d > b_Xy->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, b_Xy->size[0],
            &by_emlrtBCI, (emlrtCTX)sp);
        }

        if (b_i + 1 > out->ListOut->size[1]) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, out->ListOut->size[1],
            &rdb_emlrtBCI, (emlrtCTX)sp);
        }

        b = out->ListOut->data[b_i];
        if (b != (int32_T)muDoubleScalarFloor(b)) {
          emlrtIntegerCheckR2012b(b, &td_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)b < 1) || ((int32_T)b > b_Xy->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b, 1, b_Xy->size[0],
            &cy_emlrtBCI, (emlrtCTX)sp);
        }

        loop_ub = b_Xy->size[1];
        i2 = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = b_Xy->size[1];
        emxEnsureCapacity_real_T(sp, beta, i2, &cdb_emlrtRTEI);
        i2 = Xy->size[0] * Xy->size[1];
        Xy->size[0] = 1;
        Xy->size[1] = b_Xy->size[1];
        emxEnsureCapacity_real_T(sp, Xy, i2, &edb_emlrtRTEI);
        for (i2 = 0; i2 < loop_ub; i2++) {
          beta->data[i2] = b_Xy->data[((int32_T)d + b_Xy->size[0] * i2) - 1];
          Xy->data[i2] = b_Xy->data[((int32_T)b + b_Xy->size[0] * i2) - 1];
        }

        if (b_isequal(beta, Xy)) {
          ij++;
          if (nmdr + 1 > good->size[1]) {
            emlrtDynamicBoundsCheckR2012b(nmdr + 1, 1, good->size[1],
              &udb_emlrtBCI, (emlrtCTX)sp);
          }

          if (((int32_T)ij < 1) || ((int32_T)ij > add->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)ij, 1, add->size[0],
              &vdb_emlrtBCI, (emlrtCTX)sp);
          }

          add->data[(int32_T)ij - 1] = good->data[nmdr];
        }

        /*    disp(['i' num2str(i) 'j' num2str(j)]) */
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    emxFree_real_T(&b_Xy);
    if ((int32_T)ij > 0) {
      if (1 > add->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, add->size[0], &dy_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (((int32_T)ij < 1) || ((int32_T)ij > add->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)ij, 1, add->size[0], &ey_emlrtBCI,
          (emlrtCTX)sp);
      }

      ii_size[0] = 1;
      ii_size[1] = (int32_T)ij;
      st.site = &kib_emlrtRSI;
      b_indexShapeCheck(&st, add->size[0], ii_size);
      i = add->size[0];
      add->size[0] = (int32_T)ij;
      emxEnsureCapacity_real_T(sp, add, i, &xcb_emlrtRTEI);
      st.site = &jib_emlrtRSI;
      i = y->size[0];
      y->size[0] = add->size[0];
      emxEnsureCapacity_real_T(&st, y, i, &ycb_emlrtRTEI);
      loop_ub = add->size[0] - 1;
      for (i = 0; i <= loop_ub; i++) {
        y->data[i] = add->data[i];
      }

      b_st.site = &jmb_emlrtRSI;
      unique_vector(&b_st, y, add);
      i = out->ListOut->size[1];
      loop_ub = add->size[0];
      i1 = out->ListOut->size[0] * out->ListOut->size[1];
      out->ListOut->size[1] += add->size[0];
      emxEnsureCapacity_real_T(sp, out->ListOut, i1, &rbb_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        out->ListOut->data[i + i1] = add->data[i1];
      }
    }

    /*  Store the values of beta coefficients in step n-ndecl */
    /*  Remark: if ndecl>n-init then the number of outliers is set to n-init */
    ndecl = muDoubleScalarMin(INP_n - INP_init, out->ListOut->size[1]);

    /*  Note that the S2 which comes out from procedure FSRBmdr (differently */
    /*  from FSRmdr and FSRHmdr is rescaled, that is it has been inflated by */
    /*  the consistency term, therefore in order to find the unrescaled one */
    /*  we have to recall procedure regressB). Given that the estimate of beta */
    /*  is also affected we also need to recompute it */
    if (2 > INP_Bcoeff->size[1]) {
      i = 0;
      i1 = 0;
    } else {
      i = 1;
      i1 = INP_Bcoeff->size[1];
    }

    d = (real_T)INP_Bcoeff->size[0] - ndecl;
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &ud_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)d < 1) || ((int32_T)d > INP_Bcoeff->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, INP_Bcoeff->size[0],
        &fy_emlrtBCI, (emlrtCTX)sp);
    }

    i2 = beta->size[0] * beta->size[1];
    beta->size[0] = 1;
    loop_ub = i1 - i;
    beta->size[1] = loop_ub;
    emxEnsureCapacity_real_T(sp, beta, i2, &ddb_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      beta->data[i1] = INP_Bcoeff->data[((int32_T)d + INP_Bcoeff->size[0] * (i +
        i1)) - 1];
    }

    d = (real_T)INP_S2->size[0] - ndecl;
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &be_emlrtDCI, (emlrtCTX)sp);
    }

    if (((int32_T)d < 1) || ((int32_T)d > INP_S2->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, INP_S2->size[0],
        &wdb_emlrtBCI, (emlrtCTX)sp);
    }

    out->scale = INP_S2->data[((int32_T)d + INP_S2->size[0]) - 1];
    st.site = &iib_emlrtRSI;
    if (out->scale < 0.0) {
      emlrtErrorWithMessageIdR2018a(&st, &ac_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "sqrt");
    }

    out->scale = muDoubleScalarSqrt(out->scale);
    loop_ub = out->ListOut->size[1];
    for (i = 0; i < loop_ub; i++) {
      if (out->ListOut->data[i] != (int32_T)muDoubleScalarFloor(out->
           ListOut->data[i])) {
        emlrtIntegerCheckR2012b(out->ListOut->data[i], &ce_emlrtDCI, (emlrtCTX)
          sp);
      }

      i1 = (int32_T)out->ListOut->data[i];
      if ((i1 < 1) || (i1 > (int32_T)INP_n)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, (int32_T)INP_n, &ydb_emlrtBCI,
          (emlrtCTX)sp);
      }
    }
  } else {
    /*  No outlier is found. */
    /*  Store the values of beta coefficients in final step of the fwd search */
    i = out->ListOut->size[0] * out->ListOut->size[1];
    out->ListOut->size[0] = 1;
    out->ListOut->size[1] = 1;
    emxEnsureCapacity_real_T(sp, out->ListOut, i, &ybb_emlrtRTEI);
    out->ListOut->data[0] = rtNaN;
    if (2 > INP_Bcoeff->size[1]) {
      i = 0;
      i1 = 0;
    } else {
      i = 1;
      i1 = INP_Bcoeff->size[1];
    }

    if (INP_Bcoeff->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(INP_Bcoeff->size[0], 1, INP_Bcoeff->size[0],
        &gy_emlrtBCI, (emlrtCTX)sp);
    }

    i2 = beta->size[0] * beta->size[1];
    beta->size[0] = 1;
    loop_ub = i1 - i;
    beta->size[1] = loop_ub;
    emxEnsureCapacity_real_T(sp, beta, i2, &acb_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      beta->data[i1] = INP_Bcoeff->data[(INP_Bcoeff->size[0] + INP_Bcoeff->size
        [0] * (i + i1)) - 1];
    }

    if (INP_S2->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(INP_S2->size[0], 1, INP_S2->size[0],
        &hcb_emlrtBCI, (emlrtCTX)sp);
    }

    out->scale = INP_S2->data[(INP_S2->size[0] + INP_S2->size[0]) - 1];
    st.site = &hib_emlrtRSI;
    if (out->scale < 0.0) {
      emlrtErrorWithMessageIdR2018a(&st, &ac_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "sqrt");
    }

    out->scale = muDoubleScalarSqrt(out->scale);
  }

  emxFree_boolean_T(&b_beta);
  emxFree_real_T(&y);

  /*  Plots */
  /*  the plots section has been placed after the output structures to resure */
  /*  "as is" plot sections copied from other functions: LTSts in paeticular. */
  /*  Scatter plot matrix with the outliers shown with a different symbol */
  /*  Structure returned by function FSR */
  i = out->outliers->size[0] * out->outliers->size[1];
  out->outliers->size[0] = 1;
  out->outliers->size[1] = out->ListOut->size[1];
  emxEnsureCapacity_real_T(sp, out->outliers, i, &dcb_emlrtRTEI);
  loop_ub = out->ListOut->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    out->outliers->data[i] = out->ListOut->data[i];
  }

  /*  If you wish that the output also contains the list of units not declared */
  /*  as outliers, please uncomment the two following lines. */
  /*  ListIn=seq(~isnan(bb(:,end-ndecl))); */
  /*  out.ListIn=ListIn; */
  if ((options_bonflev_size[0] != 0) && (options_bonflev_size[1] != 0)) {
    out->nout.size[0] = 0;
    out->nout.size[1] = 0;
  }

  i = out->beta->size[0];
  out->beta->size[0] = beta->size[1];
  emxEnsureCapacity_real_T(sp, out->beta, i, &hcb_emlrtRTEI);
  loop_ub = beta->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->beta->data[i] = beta->data[i];
  }

  if (INP_weak) {
    if (mdag > -1.0) {
      out->mdag.size[0] = 1;
      out->mdag.size[1] = 1;
      out->mdag.data[0] = mdag;
      d = INP_n - mdag;
      b = (real_T)INP_bb->size[1] - d;
      if (b != (int32_T)muDoubleScalarFloor(b)) {
        emlrtIntegerCheckR2012b(b, &vd_emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)b < 1) || ((int32_T)b > INP_bb->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b, 1, INP_bb->size[1],
          &hy_emlrtBCI, (emlrtCTX)sp);
      }

      loop_ub = INP_bb->size[0];
      i = add->size[0];
      add->size[0] = INP_bb->size[0];
      emxEnsureCapacity_real_T(sp, add, i, &mcb_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        add->data[i] = INP_bb->data[i + INP_bb->size[0] * ((int32_T)b - 1)];
      }

      i = b_bool->size[0];
      b_bool->size[0] = add->size[0];
      emxEnsureCapacity_boolean_T(sp, b_bool, i, &oh_emlrtRTEI);
      loop_ub = add->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_bool->data[i] = muDoubleScalarIsNaN(add->data[i]);
      }

      loop_ub = b_bool->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_bool->data[i] = !b_bool->data[i];
      }

      n = b_bool->size[0] - 1;
      nmdr = 0;
      for (b_i = 0; b_i <= n; b_i++) {
        if (b_bool->data[b_i]) {
          nmdr++;
        }
      }

      emxInit_int32_T(sp, &r8, 1, &qdb_emlrtRTEI, true);
      i = r8->size[0];
      r8->size[0] = nmdr;
      emxEnsureCapacity_int32_T(sp, r8, i, &rbb_emlrtRTEI);
      m = 0;
      for (b_i = 0; b_i <= n; b_i++) {
        if (b_bool->data[b_i]) {
          r8->data[m] = b_i + 1;
          m++;
        }
      }

      i = good->size[0] * good->size[1];
      good->size[0] = 1;
      good->size[1] = r8->size[0];
      emxEnsureCapacity_real_T(sp, good, i, &pcb_emlrtRTEI);
      loop_ub = r8->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (r8->data[i] > out->ListCl->size[1]) {
          emlrtDynamicBoundsCheckR2012b(r8->data[i], 1, out->ListCl->size[1],
            &odb_emlrtBCI, (emlrtCTX)sp);
        }

        good->data[i] = out->ListCl->data[r8->data[i] - 1];
      }

      emxFree_int32_T(&r8);
      i = out->ListCl->size[0] * out->ListCl->size[1];
      out->ListCl->size[0] = 1;
      out->ListCl->size[1] = good->size[1];
      emxEnsureCapacity_real_T(sp, out->ListCl, i, &scb_emlrtRTEI);
      loop_ub = good->size[1];
      for (i = 0; i < loop_ub; i++) {
        out->ListCl->data[i] = good->data[i];
      }

      d = (real_T)INP_S2->size[0] - d;
      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &ae_emlrtDCI, (emlrtCTX)sp);
      }

      if (((int32_T)d < 1) || ((int32_T)d > INP_S2->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, INP_S2->size[0],
          &pdb_emlrtBCI, (emlrtCTX)sp);
      }

      out->scale = INP_S2->data[((int32_T)d + INP_S2->size[0]) - 1];
      st.site = &gib_emlrtRSI;
      if (out->scale < 0.0) {
        emlrtErrorWithMessageIdR2018a(&st, &ac_emlrtRTEI,
          "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3,
          4, 4, "sqrt");
      }

      out->scale = muDoubleScalarSqrt(out->scale);

      /*  out.outliersVIOM = setdiff(1:n, [out.ListCl, ListOut]); */
      if (muDoubleScalarIsNaN(INP_n)) {
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = 1;
        emxEnsureCapacity_real_T(sp, beta, i, &fd_emlrtRTEI);
        beta->data[0] = rtNaN;
      } else if (INP_n < 1.0) {
        beta->size[0] = 1;
        beta->size[1] = 0;
      } else if (muDoubleScalarIsInf(INP_n) && (1.0 == INP_n)) {
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = 1;
        emxEnsureCapacity_real_T(sp, beta, i, &fd_emlrtRTEI);
        beta->data[0] = rtNaN;
      } else {
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = (int32_T)muDoubleScalarFloor(INP_n - 1.0) + 1;
        emxEnsureCapacity_real_T(sp, beta, i, &fd_emlrtRTEI);
        loop_ub = (int32_T)muDoubleScalarFloor(INP_n - 1.0);
        for (i = 0; i <= loop_ub; i++) {
          beta->data[i] = (real_T)i + 1.0;
        }
      }

      st.site = &fib_emlrtRSI;
      b_st.site = &aeb_emlrtRSI;
      i = Xy->size[0] * Xy->size[1];
      Xy->size[0] = 1;
      Xy->size[1] = good->size[1] + out->ListOut->size[1];
      emxEnsureCapacity_real_T(&b_st, Xy, i, &adb_emlrtRTEI);
      loop_ub = good->size[1];
      for (i = 0; i < loop_ub; i++) {
        Xy->data[i] = good->data[i];
      }

      loop_ub = out->ListOut->size[1];
      for (i = 0; i < loop_ub; i++) {
        Xy->data[i + good->size[1]] = out->ListOut->data[i];
      }

      c_st.site = &pdb_emlrtRSI;
      g_do_vectors(&c_st, beta, Xy, out->VIOMout, ia, &m);
    } else {
      out->mdag.size[0] = 1;
      out->mdag.size[1] = 1;
      out->mdag.data[0] = INP_n;
      i = out->VIOMout->size[0] * out->VIOMout->size[1];
      out->VIOMout->size[0] = 1;
      out->VIOMout->size[1] = 1;
      emxEnsureCapacity_real_T(sp, out->VIOMout, i, &kcb_emlrtRTEI);
      out->VIOMout->data[0] = rtNaN;
    }
  } else {
    out->mdag.size[0] = 0;
    out->mdag.size[1] = 0;
    i = out->VIOMout->size[0] * out->VIOMout->size[1];
    out->VIOMout->size[0] = 1;
    out->VIOMout->size[1] = 1;
    emxEnsureCapacity_real_T(sp, out->VIOMout, i, &jcb_emlrtRTEI);
    out->VIOMout->data[0] = rtNaN;
  }

  emxFree_real_T(&Xy);
  emxFree_int32_T(&ia);
  emxFree_real_T(&beta);
  emxFree_real_T(&good);
  emxFree_real_T(&add);
  emxFree_boolean_T(&b_bool);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (FSRcore.c) */
