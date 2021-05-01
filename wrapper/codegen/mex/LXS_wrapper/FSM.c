/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSM.c
 *
 * Code generation for function 'FSM'
 *
 */

/* Include files */
#include "FSM.h"
#include "FSMbonfbound.h"
#include "FSMbsb.h"
#include "FSMenvmmd.h"
#include "FSMmmd.h"
#include "LXS_wrapper_data.h"
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_types.h"
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
static emlrtRSInfo ag_emlrtRSI = { 7,  /* lineNo */
  "ref/ref",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\ref.m"/* pathName */
};

static emlrtRSInfo bg_emlrtRSI = { 1360,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo cg_emlrtRSI = { 1359,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo dg_emlrtRSI = { 1358,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo eg_emlrtRSI = { 1357,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo fg_emlrtRSI = { 1347,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo gg_emlrtRSI = { 1284,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo hg_emlrtRSI = { 1278,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ig_emlrtRSI = { 1270,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo jg_emlrtRSI = { 1121,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo kg_emlrtRSI = { 1112,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo lg_emlrtRSI = { 1104,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo mg_emlrtRSI = { 687,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ng_emlrtRSI = { 659,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 645,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo pg_emlrtRSI = { 609,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 600,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 593,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 572,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo tg_emlrtRSI = { 563,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ug_emlrtRSI = { 555,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo vg_emlrtRSI = { 547,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 530,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo xg_emlrtRSI = { 522,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo yg_emlrtRSI = { 514,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 490,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo bh_emlrtRSI = { 481,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ch_emlrtRSI = { 452,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo dh_emlrtRSI = { 445,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo eh_emlrtRSI = { 434,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo fh_emlrtRSI = { 431,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo gh_emlrtRSI = { 430,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 395,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 391,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 389,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 372,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 359,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 357,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 355,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 353,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 348,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 289,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 287,/* lineNo */
  "FSM",                               /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pathName */
};

static emlrtRSInfo deb_emlrtRSI = { 19,/* lineNo */
  "setdiff",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\setdiff.m"/* pathName */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1281,                                /* lineNo */
  29,                                  /* colNo */
  "gfind",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  363,                                 /* lineNo */
  12,                                  /* colNo */
  "fre",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  363,                                 /* lineNo */
  14,                                  /* colNo */
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

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  373,                                 /* lineNo */
  16,                                  /* colNo */
  "fre",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  373,                                 /* lineNo */
  18,                                  /* colNo */
  "fre",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  466,                                 /* lineNo */
  19,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  466,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo j_emlrtECI = { -1,  /* nDims */
  466,                                 /* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  467,                                 /* lineNo */
  19,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  467,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo k_emlrtECI = { -1,  /* nDims */
  467,                                 /* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  468,                                 /* lineNo */
  19,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  468,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  468,                                 /* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  469,                                 /* lineNo */
  19,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  469,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo m_emlrtECI = { -1,  /* nDims */
  469,                                 /* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  470,                                 /* lineNo */
  19,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  470,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo n_emlrtECI = { -1,  /* nDims */
  470,                                 /* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  24,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  52,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  82,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  111,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  137,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  27,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  55,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  85,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  518,                                 /* lineNo */
  27,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  526,                                 /* lineNo */
  27,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  531,                                 /* lineNo */
  32,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  24,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  51,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  80,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  110,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  137,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  164,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  191,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  217,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  542,                                 /* lineNo */
  66,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  543,                                 /* lineNo */
  27,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  543,                                 /* lineNo */
  54,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  543,                                 /* lineNo */
  83,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  29,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  56,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  83,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  559,                                 /* lineNo */
  27,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  564,                                 /* lineNo */
  32,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  568,                                 /* lineNo */
  26,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  573,                                 /* lineNo */
  32,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  582,                                 /* lineNo */
  23,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  582,                                 /* lineNo */
  48,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  589,                                 /* lineNo */
  23,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  596,                                 /* lineNo */
  23,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  602,                                 /* lineNo */
  24,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  603,                                 /* lineNo */
  23,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  610,                                 /* lineNo */
  24,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  26,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  55,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  87,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  639,                                 /* lineNo */
  37,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  640,                                 /* lineNo */
  37,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  640,                                 /* lineNo */
  54,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  645,                                 /* lineNo */
  28,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  645,                                 /* lineNo */
  32,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  645,                                 /* lineNo */
  36,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  645,                                 /* lineNo */
  46,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo se_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  645,                                 /* lineNo */
  50,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  645,                                 /* lineNo */
  54,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo o_emlrtECI = { -1,  /* nDims */
  645,                                 /* lineNo */
  24,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo ue_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  660,                                 /* lineNo */
  26,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ve_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  660,                                 /* lineNo */
  34,                                  /* colNo */
  "gval",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo we_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  660,                                 /* lineNo */
  36,                                  /* colNo */
  "gval",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  683,                                 /* lineNo */
  19,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ye_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  688,                                 /* lineNo */
  24,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo hb_emlrtRTEI = { 1102,/* lineNo */
  16,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo af_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1110,                                /* lineNo */
  27,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1119,                                /* lineNo */
  54,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1270,                                /* lineNo */
  26,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo df_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1270,                                /* lineNo */
  31,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ef_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1270,                                /* lineNo */
  35,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ff_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1270,                                /* lineNo */
  42,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1270,                                /* lineNo */
  47,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1270,                                /* lineNo */
  61,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo p_emlrtECI = { -1,  /* nDims */
  1270,                                /* lineNo */
  20,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo if_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1278,                                /* lineNo */
  30,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1278,                                /* lineNo */
  34,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1278,                                /* lineNo */
  38,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1278,                                /* lineNo */
  47,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1278,                                /* lineNo */
  51,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1278,                                /* lineNo */
  55,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo of_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1278,                                /* lineNo */
  62,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1278,                                /* lineNo */
  66,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1278,                                /* lineNo */
  80,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo q_emlrtECI = { -1,  /* nDims */
  1278,                                /* lineNo */
  41,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtBCInfo rf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1284,                                /* lineNo */
  41,                                  /* colNo */
  "gfind",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1284,                                /* lineNo */
  50,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1284,                                /* lineNo */
  33,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 1284,/* lineNo */
  35,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo uf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1284,                                /* lineNo */
  35,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1285,                                /* lineNo */
  23,                                  /* colNo */
  "tr",                                /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 1345,/* lineNo */
  33,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1345,                                /* lineNo */
  33,                                  /* colNo */
  "bb",                                /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 372, /* lineNo */
  19,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  372,                                 /* lineNo */
  19,                                  /* colNo */
  "Y",                                 /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  372,                                 /* lineNo */
  42,                                  /* colNo */
  "Y",                                 /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ag_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  372,                                 /* lineNo */
  57,                                  /* colNo */
  "Y",                                 /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 434, /* lineNo */
  28,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 434, /* lineNo */
  28,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo bg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  683,                                 /* lineNo */
  13,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  683,                                 /* lineNo */
  22,                                  /* colNo */
  "bonfthresh",                        /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  687,                                 /* lineNo */
  41,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  582,                                 /* lineNo */
  17,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  582,                                 /* lineNo */
  26,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  582,                                 /* lineNo */
  42,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  582,                                 /* lineNo */
  51,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ig_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  18,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  27,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  18,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  27,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1303,                                /* lineNo */
  17,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ng_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  603,                                 /* lineNo */
  17,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo og_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  603,                                 /* lineNo */
  26,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  43,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  54,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  44,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  55,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  589,                                 /* lineNo */
  17,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ug_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  589,                                 /* lineNo */
  26,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  593,                                 /* lineNo */
  46,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  102,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  113,                                 /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yg_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  72,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ah_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  83,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  105,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ch_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  114,                                 /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  74,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  85,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  609,                                 /* lineNo */
  42,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  596,                                 /* lineNo */
  17,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  596,                                 /* lineNo */
  26,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ih_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  131,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  140,                                 /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  131,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  140,                                 /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  600,                                 /* lineNo */
  46,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  185,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  194,                                 /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ph_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  156,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  167,                                 /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  21,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  30,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo th_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  211,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  220,                                 /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  543,                                 /* lineNo */
  21,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  543,                                 /* lineNo */
  30,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  47,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yh_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  58,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ai_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  620,                                 /* lineNo */
  18,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  622,                                 /* lineNo */
  16,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ci_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  543,                                 /* lineNo */
  46,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo di_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  543,                                 /* lineNo */
  57,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ei_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  77,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  510,                                 /* lineNo */
  88,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  518,                                 /* lineNo */
  21,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  518,                                 /* lineNo */
  30,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ii_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  514,                                 /* lineNo */
  50,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ji_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  543,                                 /* lineNo */
  75,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ki_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  543,                                 /* lineNo */
  86,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo li_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  522,                                 /* lineNo */
  50,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  21,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ni_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  32,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  547,                                 /* lineNo */
  50,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  514,                                 /* lineNo */
  110,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  526,                                 /* lineNo */
  21,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ri_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  526,                                 /* lineNo */
  30,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo si_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1358,                                /* lineNo */
  12,                                  /* colNo */
  "Y",                                 /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 1358,/* lineNo */
  12,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ti_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  20,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ui_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  50,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  59,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  547,                                 /* lineNo */
  109,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yi_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  530,                                 /* lineNo */
  50,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo aj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  514,                                 /* lineNo */
  172,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1268,                                /* lineNo */
  13,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  47,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  58,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ej_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  75,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  551,                                 /* lineNo */
  86,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  547,                                 /* lineNo */
  168,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1359,                                /* lineNo */
  12,                                  /* colNo */
  "Y",                                 /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ij_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  559,                                 /* lineNo */
  21,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  559,                                 /* lineNo */
  30,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  555,                                 /* lineNo */
  50,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1345,                                /* lineNo */
  18,                                  /* colNo */
  "seq",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  79,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  90,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  563,                                 /* lineNo */
  50,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 1350,/* lineNo */
  11,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1350,                                /* lineNo */
  11,                                  /* colNo */
  "group",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  640,                                 /* lineNo */
  28,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  555,                                 /* lineNo */
  109,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1110,                                /* lineNo */
  20,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1110,                                /* lineNo */
  30,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  640,                                 /* lineNo */
  45,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  568,                                 /* lineNo */
  20,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  568,                                 /* lineNo */
  29,                                  /* colNo */
  "gmin",                              /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  555,                                 /* lineNo */
  170,                                 /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yj_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1348,                                /* lineNo */
  18,                                  /* colNo */
  "seq",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ak_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  572,                                 /* lineNo */
  50,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1112,                                /* lineNo */
  48,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ck_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1119,                                /* lineNo */
  47,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1119,                                /* lineNo */
  57,                                  /* colNo */
  "gmin1",                             /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ek_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1121,                                /* lineNo */
  48,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  660,                                 /* lineNo */
  20,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  466,                                 /* lineNo */
  13,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  467,                                 /* lineNo */
  13,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ik_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  468,                                 /* lineNo */
  13,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  469,                                 /* lineNo */
  13,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  470,                                 /* lineNo */
  13,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1284,                                /* lineNo */
  55,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  531,                                 /* lineNo */
  36,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  523,                                 /* lineNo */
  40,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ok_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  523,                                 /* lineNo */
  32,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  515,                                 /* lineNo */
  40,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  515,                                 /* lineNo */
  32,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  573,                                 /* lineNo */
  36,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  564,                                 /* lineNo */
  36,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  556,                                 /* lineNo */
  40,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  556,                                 /* lineNo */
  32,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  548,                                 /* lineNo */
  40,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  548,                                 /* lineNo */
  32,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  602,                                 /* lineNo */
  28,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yk_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  610,                                 /* lineNo */
  28,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo al_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  688,                                 /* lineNo */
  28,                                  /* colNo */
  "mmd",                               /* aName */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo gg_emlrtRTEI = { 292,/* lineNo */
  1,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = { 363,/* lineNo */
  5,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo ig_emlrtRTEI = { 372,/* lineNo */
  17,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = { 373,/* lineNo */
  9,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo lg_emlrtRTEI = { 372,/* lineNo */
  36,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo mg_emlrtRTEI = { 391,/* lineNo */
  25,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo ng_emlrtRTEI = { 389,/* lineNo */
  28,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo og_emlrtRTEI = { 392,/* lineNo */
  5,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo qg_emlrtRTEI = { 442,/* lineNo */
  5,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = { 442,/* lineNo */
  34,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo sg_emlrtRTEI = { 434,/* lineNo */
  28,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo tg_emlrtRTEI = { 439,/* lineNo */
  5,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo ug_emlrtRTEI = { 439,/* lineNo */
  44,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo vg_emlrtRTEI = { 434,/* lineNo */
  9,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo wg_emlrtRTEI = { 1353,/* lineNo */
  5,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = { 1348,/* lineNo */
  22,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = { 1345,/* lineNo */
  28,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = { 1,/* lineNo */
  16,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo bh_emlrtRTEI = { 1345,/* lineNo */
  22,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo ch_emlrtRTEI = { 1358,/* lineNo */
  10,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo dh_emlrtRTEI = { 1359,/* lineNo */
  10,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo eh_emlrtRTEI = { 1270,/* lineNo */
  20,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo fh_emlrtRTEI = { 1388,/* lineNo */
  1,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo gh_emlrtRTEI = { 1389,/* lineNo */
  1,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo hh_emlrtRTEI = { 1391,/* lineNo */
  1,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo ih_emlrtRTEI = { 645,/* lineNo */
  24,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo jh_emlrtRTEI = { 1278,/* lineNo */
  41,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo kh_emlrtRTEI = { 1278,/* lineNo */
  17,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = { 1281,/* lineNo */
  29,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo mh_emlrtRTEI = { 1284,/* lineNo */
  17,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo nh_emlrtRTEI = { 339,/* lineNo */
  5,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo oh_emlrtRTEI = { 348,/* lineNo */
  6,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo ph_emlrtRTEI = { 431,/* lineNo */
  10,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo qh_emlrtRTEI = { 659,/* lineNo */
  18,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo rh_emlrtRTEI = { 1345,/* lineNo */
  9,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo sh_emlrtRTEI = { 1357,/* lineNo */
  1,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo th_emlrtRTEI = { 1358,/* lineNo */
  1,                                   /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo uh_emlrtRTEI = { 467,/* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo vh_emlrtRTEI = { 468,/* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo wh_emlrtRTEI = { 469,/* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo xh_emlrtRTEI = { 470,/* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

static emlrtRTEInfo yh_emlrtRTEI = { 466,/* lineNo */
  13,                                  /* colNo */
  "FSM",                               /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSM.m"/* pName */
};

/* Function Definitions */
void FSM(LXS_wrapperStackData *SD, const emlrtStack *sp, emxArray_real_T *Y,
         const real_T varargin_4_data[], const int32_T varargin_4_size[2],
         real_T varargin_8, const char_T varargin_10_data[], const int32_T
         varargin_10_size[2], real_T varargin_12, emxArray_real_T *out_outliers,
         emxArray_real_T *out_loc, emxArray_real_T *out_cov, emxArray_real_T
         *out_md, emxArray_real_T *out_mmd, emxArray_real_T *out_Un, real_T
         out_nout_data[], int32_T out_nout_size[2], char_T out_class_data[],
         int32_T out_class_size[2])
{
  static const int32_T iv2[5] = { 1, 99, 999, 9999, 99999 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_boolean_T b_varargin_4_data;
  emxArray_boolean_T *r;
  emxArray_boolean_T *x;
  emxArray_char_T_1x310 nib_emlrtRSI;
  emxArray_int32_T *ia;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_int32_T *r6;
  emxArray_real_T d_varargin_4_data;
  emxArray_real_T e_varargin_4_data;
  emxArray_real_T *a__1;
  emxArray_real_T *b;
  emxArray_real_T *b_Y;
  emxArray_real_T *b_bs;
  emxArray_real_T *bs;
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
  int32_T b_varargin_4_size[2];
  int32_T iv[2];
  int32_T iv1[2];
  int32_T nout_size[2];
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
  int32_T nout_size_idx_0;
  int32_T nout_size_idx_1;
  int32_T sto;
  int32_T v;
  uint32_T uv[31];
  uint32_T nout_data[10];
  uint32_T uv1[10];
  uint32_T ii;
  int8_T tmp_data[5];
  boolean_T b_x[31];
  boolean_T b_nout_data[5];
  boolean_T NoFalseSig;
  boolean_T b_b;
  boolean_T b_guard1 = false;
  boolean_T c_varargin_4_data;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &loc, 2, &th_emlrtRTEI, true);
  st.site = &rh_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
  st.site = &rh_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
  st.site = &rh_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
  st.site = &rh_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
  st.site = &rh_emlrtRSI;
  b_st.site = &ag_emlrtRSI;
  st.site = &rh_emlrtRSI;
  b_st.site = &ag_emlrtRSI;

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
  st.site = &qh_emlrtRSI;
  chkinputM(&st, Y);
  v = Y->size[1];
  n = Y->size[0];
  if (Y->size[0] < 1) {
    loc->size[0] = 1;
    loc->size[1] = 0;
  } else {
    i = loc->size[0] * loc->size[1];
    loc->size[0] = 1;
    loc->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(sp, loc, i, &oc_emlrtRTEI);
    loop_ub = Y->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      loc->data[i] = (real_T)i + 1.0;
    }
  }

  emxInit_real_T(sp, &seq, 1, &gg_emlrtRTEI, true);
  i = seq->size[0];
  seq->size[0] = loc->size[1];
  emxEnsureCapacity_real_T(sp, seq, i, &gg_emlrtRTEI);
  loop_ub = loc->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq->data[i] = loc->data[i];
  }

  emxInit_real_T(sp, &fre, 2, &oh_emlrtRTEI, true);

  /*  Write in structure 'options' the options chosen by the user */
  init_contents = varargin_8;

  /*  fsizeannot is a scalar which Font Size of the annotations which are */
  /*  shown on the screen */
  /*  Start of the forward search */
  /*  m0(1) necessary for MATLAB C coder */
  /*  Confidence level for robust bivariate ellipses */
  /*  Find initial subset to initialize the search */
  st.site = &ph_emlrtRSI;
  unibiv(SD, &st, Y, fre);
  if (b_strcmp(varargin_10_data, varargin_10_size)) {
    /*  The user has chosen to select the intial subset according to the */
    /*  smallest m0 pseudo MD Select only the potential bivariate outliers */
    st.site = &oh_emlrtRSI;
    sortrows(&st, fre);
  } else if (c_strcmp(varargin_10_data, varargin_10_size)) {
    st.site = &nh_emlrtRSI;
    b_sortrows(&st, fre);
  } else if (d_strcmp(varargin_10_data, varargin_10_size)) {
    st.site = &mh_emlrtRSI;
    c_sortrows(&st, fre);
  } else {
    st.site = &lh_emlrtRSI;
    f_error(&st);
  }

  /*  initial subset */
  if (1 > fre->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, fre->size[0], &hc_emlrtBCI, (emlrtCTX)sp);
  }

  irank = (int32_T)varargin_12;
  if (((int32_T)varargin_12 < 1) || ((int32_T)varargin_12 > fre->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)varargin_12, 1, fre->size[0],
      &ic_emlrtBCI, (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &bs, 1, &nh_emlrtRTEI, true);
  i = bs->size[0];
  bs->size[0] = (int32_T)varargin_12;
  emxEnsureCapacity_real_T(sp, bs, i, &hg_emlrtRTEI);
  for (i = 0; i < irank; i++) {
    bs->data[i] = fre->data[i];
  }

  emxInit_real_T(sp, &b_Y, 2, &ig_emlrtRTEI, true);

  /*  the subset need to be incremented if it is not full rank. We also */
  /*  treat the unfortunate case when the rank of the matrix is v but a */
  /*  column is constant. */
  incre = 1.0;

  /* the second condition is added to treat subset with a constant */
  /* variable. This situation does not decrease the rank of Y, but it */
  /* decreases the rank of ym (i.e. Y-mean(Y)) inside FSMmmd. */
  loop_ub = Y->size[1];
  emxInit_real_T(sp, &goodobs, 2, &sh_emlrtRTEI, true);
  do {
    exitg1 = 0;
    st.site = &kh_emlrtRSI;
    irank = bs->size[0];
    for (i = 0; i < irank; i++) {
      if (bs->data[i] != (int32_T)muDoubleScalarFloor(bs->data[i])) {
        emlrtIntegerCheckR2012b(bs->data[i], &w_emlrtDCI, &st);
      }

      i1 = (int32_T)bs->data[i];
      if ((i1 < 1) || (i1 > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Y->size[0], &xf_emlrtBCI, &st);
      }
    }

    i = b_Y->size[0] * b_Y->size[1];
    b_Y->size[0] = bs->size[0];
    b_Y->size[1] = loop_ub;
    emxEnsureCapacity_real_T(&st, b_Y, i, &ig_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      irank = bs->size[0];
      for (i1 = 0; i1 < irank; i1++) {
        b_Y->data[i1 + b_Y->size[0] * i] = Y->data[((int32_T)bs->data[i1] +
          Y->size[0] * i) - 1];
      }
    }

    b_st.site = &nd_emlrtRSI;
    irank = local_rank(&b_st, b_Y);
    guard1 = false;
    if (irank < v) {
      guard1 = true;
    } else {
      st.site = &kh_emlrtRSI;
      irank = bs->size[0];
      for (i = 0; i < irank; i++) {
        i1 = (int32_T)bs->data[i];
        if ((i1 < 1) || (i1 > Y->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, Y->size[0], &yf_emlrtBCI, &st);
        }
      }

      b_st.site = &lc_emlrtRSI;
      c_st.site = &mc_emlrtRSI;
      d_st.site = &nc_emlrtRSI;
      if (((bs->size[0] != 1) || (Y->size[1] != 1)) && (bs->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&d_st, &fb_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility",
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      e_st.site = &oc_emlrtRSI;
      f_st.site = &pc_emlrtRSI;
      g_st.site = &qc_emlrtRSI;
      irank = bs->size[0];
      i = Y->size[1] - 1;
      i1 = goodobs->size[0] * goodobs->size[1];
      goodobs->size[0] = 1;
      goodobs->size[1] = Y->size[1];
      emxEnsureCapacity_real_T(&g_st, goodobs, i1, &kg_emlrtRTEI);
      if (Y->size[1] >= 1) {
        h_st.site = &sc_emlrtRSI;
        if (Y->size[1] > 2147483646) {
          i_st.site = &ic_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }

        for (idx = 0; idx <= i; idx++) {
          goodobs->data[idx] = Y->data[((int32_T)bs->data[0] + Y->size[0] * idx)
            - 1];
          h_st.site = &rc_emlrtRSI;
          if ((2 <= irank) && (irank > 2147483646)) {
            i_st.site = &ic_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }

          for (b_i = 2; b_i <= irank; b_i++) {
            ndecl = goodobs->data[idx];
            b_tmp = Y->data[((int32_T)bs->data[b_i - 1] + Y->size[0] * idx) - 1];
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

      st.site = &kh_emlrtRSI;
      irank = bs->size[0];
      for (i = 0; i < irank; i++) {
        i1 = (int32_T)bs->data[i];
        if ((i1 < 1) || (i1 > Y->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, Y->size[0], &ag_emlrtBCI, &st);
        }
      }

      b_st.site = &tc_emlrtRSI;
      c_st.site = &uc_emlrtRSI;
      d_st.site = &vc_emlrtRSI;
      if (((bs->size[0] != 1) || (Y->size[1] != 1)) && (bs->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(&d_st, &fb_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility",
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      e_st.site = &oc_emlrtRSI;
      f_st.site = &pc_emlrtRSI;
      g_st.site = &qc_emlrtRSI;
      irank = bs->size[0];
      i = Y->size[1] - 1;
      i1 = loc->size[0] * loc->size[1];
      loc->size[0] = 1;
      loc->size[1] = Y->size[1];
      emxEnsureCapacity_real_T(&g_st, loc, i1, &kg_emlrtRTEI);
      if (Y->size[1] >= 1) {
        h_st.site = &sc_emlrtRSI;
        if (Y->size[1] > 2147483646) {
          i_st.site = &ic_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }

        for (idx = 0; idx <= i; idx++) {
          loc->data[idx] = Y->data[((int32_T)bs->data[0] + Y->size[0] * idx) - 1];
          h_st.site = &rc_emlrtRSI;
          if ((2 <= irank) && (irank > 2147483646)) {
            i_st.site = &ic_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }

          for (b_i = 2; b_i <= irank; b_i++) {
            ndecl = loc->data[idx];
            b_tmp = Y->data[((int32_T)bs->data[b_i - 1] + Y->size[0] * idx) - 1];
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

      iv[0] = (*(int32_T (*)[2])goodobs->size)[0];
      iv[1] = (*(int32_T (*)[2])goodobs->size)[1];
      iv1[0] = (*(int32_T (*)[2])loc->size)[0];
      iv1[1] = (*(int32_T (*)[2])loc->size)[1];
      emlrtSizeEqCheckNDR2012b(&iv[0], &iv1[0], &i_emlrtECI, (emlrtCTX)sp);
      st.site = &kh_emlrtRSI;
      i = goodobs->size[0] * goodobs->size[1];
      goodobs->size[0] = 1;
      emxEnsureCapacity_real_T(&st, goodobs, i, &lg_emlrtRTEI);
      irank = goodobs->size[1] - 1;
      for (i = 0; i <= irank; i++) {
        goodobs->data[i] -= loc->data[i];
      }

      b_st.site = &tc_emlrtRSI;
      c_st.site = &uc_emlrtRSI;
      d_st.site = &vc_emlrtRSI;
      if (goodobs->size[1] < 1) {
        emlrtErrorWithMessageIdR2018a(&d_st, &eb_emlrtRTEI,
          "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }

      e_st.site = &ft_emlrtRSI;
      f_st.site = &gt_emlrtRSI;
      irank = goodobs->size[1];
      if (goodobs->size[1] <= 2) {
        if (goodobs->size[1] == 1) {
          ndecl = goodobs->data[0];
        } else if ((goodobs->data[0] > goodobs->data[1]) || (muDoubleScalarIsNaN
                    (goodobs->data[0]) && (!muDoubleScalarIsNaN(goodobs->data[1]))))
        {
          ndecl = goodobs->data[1];
        } else {
          ndecl = goodobs->data[0];
        }
      } else {
        g_st.site = &it_emlrtRSI;
        if (!muDoubleScalarIsNaN(goodobs->data[0])) {
          idx = 1;
        } else {
          idx = 0;
          h_st.site = &jt_emlrtRSI;
          if (goodobs->size[1] > 2147483646) {
            i_st.site = &ic_emlrtRSI;
            check_forloop_overflow_error(&i_st);
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
          g_st.site = &ht_emlrtRSI;
          ndecl = goodobs->data[idx - 1];
          a = idx + 1;
          h_st.site = &kt_emlrtRSI;
          if ((idx + 1 <= goodobs->size[1]) && (goodobs->size[1] > 2147483646))
          {
            i_st.site = &ic_emlrtRSI;
            check_forloop_overflow_error(&i_st);
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
      if (1 > fre->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, fre->size[0], &jc_emlrtBCI,
          (emlrtCTX)sp);
      }

      irank = (int32_T)(varargin_12 + incre);
      if ((irank < 1) || (irank > fre->size[0])) {
        emlrtDynamicBoundsCheckR2012b(irank, 1, fre->size[0], &kc_emlrtBCI,
          (emlrtCTX)sp);
      }

      i = bs->size[0];
      bs->size[0] = irank;
      emxEnsureCapacity_real_T(sp, bs, i, &jg_emlrtRTEI);
      for (i = 0; i < irank; i++) {
        bs->data[i] = fre->data[i];
      }

      incre++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
  } while (exitg1 == 0);

  emxFree_real_T(&fre);

  /*  To make sure that new value of init is minimum lenght of bs for which */
  /*  the Y matrix is full rank */
  if (varargin_8 < bs->size[0]) {
    init_contents = bs->size[0];
  }

  /*  Compute Minimum Mahalanobis Distance for each step of the search */
  emxInit_real_T(sp, &b_bs, 1, &mg_emlrtRTEI, true);
  if (Y->size[0] < 5000) {
    i = b_bs->size[0];
    b_bs->size[0] = bs->size[0];
    emxEnsureCapacity_real_T(sp, b_bs, i, &ng_emlrtRTEI);
    loop_ub = bs->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_bs->data[i] = bs->data[i];
    }

    st.site = &jh_emlrtRSI;
    FSMmmd(&st, Y, b_bs, init_contents, out_mmd, out_Un, out_cov);
  } else {
    i = b_bs->size[0];
    b_bs->size[0] = bs->size[0];
    emxEnsureCapacity_real_T(sp, b_bs, i, &mg_emlrtRTEI);
    loop_ub = bs->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_bs->data[i] = bs->data[i];
    }

    st.site = &ih_emlrtRSI;
    b_FSMmmd(&st, Y, b_bs, init_contents, out_mmd, out_Un);
    i = out_cov->size[0] * out_cov->size[1];
    out_cov->size[0] = 1;
    out_cov->size[1] = 1;
    emxEnsureCapacity_real_T(sp, out_cov, i, &og_emlrtRTEI);
    out_cov->data[0] = 0.0;
  }

  emxInit_boolean_T(sp, &r, 2, &pg_emlrtRTEI, true);
  i = r->size[0] * r->size[1];
  r->size[0] = out_mmd->size[0];
  r->size[1] = out_mmd->size[1];
  emxEnsureCapacity_boolean_T(sp, r, i, &pg_emlrtRTEI);
  loop_ub = out_mmd->size[0] * out_mmd->size[1];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = muDoubleScalarIsNaN(out_mmd->data[i]);
  }

  st.site = &hh_emlrtRSI;
  if (b_ifWhileCond(&st, r)) {
    out_outliers->size[0] = 0;
    out_outliers->size[1] = 0;
    out_loc->size[0] = 0;
    out_loc->size[1] = 0;
    out_cov->size[0] = 0;
    out_cov->size[1] = 0;
    out_md->size[0] = 0;
    out_md->size[1] = 0;
    out_mmd->size[0] = 0;
    out_mmd->size[1] = 0;
    out_Un->size[0] = 0;
    out_Un->size[1] = 0;
    out_nout_size[0] = 0;
    out_nout_size[1] = 0;
    out_class_size[0] = 1;
    out_class_size[1] = 0;

    /*  all(structfun(@isempty,out)) */
  } else {
    /*  Part 1. Signal detection and validation */
    b_signal = 0;
    sto = 0;
    emxInit_real_T(sp, &gbonf, 2, &ph_emlrtRTEI, true);
    emxInit_real_T(sp, &gmin, 2, &tg_emlrtRTEI, true);
    emxInit_real_T(sp, &gmin1, 2, &ug_emlrtRTEI, true);
    emxInit_int32_T(sp, &ia, 1, &yh_emlrtRTEI, true);
    if ((varargin_4_size[0] != 0) && (varargin_4_size[1] != 0)) {
      b_varargin_4_size[0] = 1;
      b_varargin_4_size[1] = 1;
      for (i = 0; i < 1; i++) {
        c_varargin_4_data = (varargin_4_data[0] < 1.0);
      }

      b_varargin_4_data.data = &c_varargin_4_data;
      b_varargin_4_data.size = &b_varargin_4_size[0];
      b_varargin_4_data.allocatedSize = 1;
      b_varargin_4_data.numDimensions = 2;
      b_varargin_4_data.canFreeData = false;
      st.site = &gh_emlrtRSI;
      if (b_ifWhileCond(&st, &b_varargin_4_data)) {
        st.site = &fh_emlrtRSI;
        FSMbonfbound(&st, Y->size[0], Y->size[1], varargin_4_data,
                     varargin_4_size, init_contents, gbonf);
      } else {
        emxInit_real_T(sp, &b, 1, &sg_emlrtRTEI, true);
        st.site = &eh_emlrtRSI;
        d = (real_T)Y->size[0] - init_contents;
        if (!(d >= 0.0)) {
          emlrtNonNegativeCheckR2012b(d, &y_emlrtDCI, &st);
        }

        if (d != (int32_T)muDoubleScalarFloor(d)) {
          emlrtIntegerCheckR2012b(d, &x_emlrtDCI, &st);
        }

        i = b->size[0];
        b->size[0] = (int32_T)d;
        emxEnsureCapacity_real_T(&st, b, i, &sg_emlrtRTEI);
        d = (real_T)Y->size[0] - init_contents;
        if (!(d >= 0.0)) {
          emlrtNonNegativeCheckR2012b(d, &y_emlrtDCI, &st);
        }

        if (d != (int32_T)muDoubleScalarFloor(d)) {
          emlrtIntegerCheckR2012b(d, &x_emlrtDCI, &st);
        }

        loop_ub = (int32_T)d;
        for (i = 0; i < loop_ub; i++) {
          b->data[i] = 1.0;
        }

        d_varargin_4_data.data = (real_T *)&varargin_4_data[0];
        d_varargin_4_data.size = (int32_T *)&varargin_4_size[0];
        d_varargin_4_data.allocatedSize = -1;
        d_varargin_4_data.numDimensions = 2;
        d_varargin_4_data.canFreeData = false;
        b_st.site = &gc_emlrtRSI;
        dynamic_size_checks(&b_st, &d_varargin_4_data, b, 1, (int32_T)((real_T)
          Y->size[0] - init_contents));
        e_varargin_4_data.data = (real_T *)&varargin_4_data[0];
        e_varargin_4_data.size = (int32_T *)&varargin_4_size[0];
        e_varargin_4_data.allocatedSize = -1;
        e_varargin_4_data.numDimensions = 2;
        e_varargin_4_data.canFreeData = false;
        b_st.site = &fc_emlrtRSI;
        mtimes(&b_st, &e_varargin_4_data, b, b_bs);
        i = gbonf->size[0] * gbonf->size[1];
        gbonf->size[0] = b_bs->size[0];
        gbonf->size[1] = 1;
        emxEnsureCapacity_real_T(sp, gbonf, i, &vg_emlrtRTEI);
        loop_ub = b_bs->size[0];
        emxFree_real_T(&b);
        for (i = 0; i < loop_ub; i++) {
          gbonf->data[i] = b_bs->data[i];
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
      emxEnsureCapacity_real_T(sp, gmin, i, &tg_emlrtRTEI);
      gmin->data[0] = 0.0;
      NoFalseSig = true;
      incre = 0.0;
      ii = 0U;
      i = gmin1->size[0] * gmin1->size[1];
      gmin1->size[0] = 1;
      gmin1->size[1] = 1;
      emxEnsureCapacity_real_T(sp, gmin1, i, &ug_emlrtRTEI);
      gmin1->data[0] = 0.0;
      nout_size_idx_0 = 1;
      nout_size_idx_1 = 1;
      nout_data[0] = 0U;
    } else {
      /*  declaration necessary for C coder */
      i = gbonf->size[0] * gbonf->size[1];
      gbonf->size[0] = 1;
      gbonf->size[1] = 1;
      emxEnsureCapacity_real_T(sp, gbonf, i, &qg_emlrtRTEI);
      gbonf->data[0] = 0.0;
      incre = 0.0;
      ii = 0U;
      i = gmin1->size[0] * gmin1->size[1];
      gmin1->size[0] = 1;
      gmin1->size[1] = 1;
      emxEnsureCapacity_real_T(sp, gmin1, i, &rg_emlrtRTEI);
      gmin1->data[0] = 0.0;
      if (out_mmd->size[0] < 4) {
        st.site = &dh_emlrtRSI;
        j_error(&st);
      }

      /*  Compute theoretical envelops for minimum Mahalanobis Distance based on all */
      /*  the observations for the above quantiles. */
      st.site = &ch_emlrtRSI;
      FSMenvmmd(&st, Y->size[0], Y->size[1], init_contents, gmin);

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
      if (2 > out_mmd->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &lc_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (2 > gmin->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, gmin->size[1], &mc_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (out_mmd->size[0] != gmin->size[0]) {
        emlrtSizeEqCheck1DR2012b(out_mmd->size[0], gmin->size[0], &j_emlrtECI,
          (emlrtCTX)sp);
      }

      if (2 > out_mmd->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &nc_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (3 > gmin->size[1]) {
        emlrtDynamicBoundsCheckR2012b(3, 1, gmin->size[1], &oc_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (out_mmd->size[0] != gmin->size[0]) {
        emlrtSizeEqCheck1DR2012b(out_mmd->size[0], gmin->size[0], &k_emlrtECI,
          (emlrtCTX)sp);
      }

      if (2 > out_mmd->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &pc_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (4 > gmin->size[1]) {
        emlrtDynamicBoundsCheckR2012b(4, 1, gmin->size[1], &qc_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (out_mmd->size[0] != gmin->size[0]) {
        emlrtSizeEqCheck1DR2012b(out_mmd->size[0], gmin->size[0], &l_emlrtECI,
          (emlrtCTX)sp);
      }

      if (2 > out_mmd->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &rc_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (5 > gmin->size[1]) {
        emlrtDynamicBoundsCheckR2012b(5, 1, gmin->size[1], &sc_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (out_mmd->size[0] != gmin->size[0]) {
        emlrtSizeEqCheck1DR2012b(out_mmd->size[0], gmin->size[0], &m_emlrtECI,
          (emlrtCTX)sp);
      }

      if (2 > out_mmd->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &tc_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (6 > gmin->size[1]) {
        emlrtDynamicBoundsCheckR2012b(6, 1, gmin->size[1], &uc_emlrtBCI,
          (emlrtCTX)sp);
      }

      if (out_mmd->size[0] != gmin->size[0]) {
        emlrtSizeEqCheck1DR2012b(out_mmd->size[0], gmin->size[0], &n_emlrtECI,
          (emlrtCTX)sp);
      }

      idx = out_mmd->size[0] - 1;
      a = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] > gmin->data[b_i + gmin->size
            [0]]) {
          a++;
        }
      }

      i = ia->size[0];
      ia->size[0] = a;
      emxEnsureCapacity_int32_T(sp, ia, i, &ah_emlrtRTEI);
      irank = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] > gmin->data[b_i + gmin->size
            [0]]) {
          ia->data[irank] = b_i + 1;
          irank++;
        }
      }

      idx = out_mmd->size[0] - 1;
      a = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] > gmin->data[b_i + gmin->size
            [0] * 2]) {
          a++;
        }
      }

      emxInit_int32_T(sp, &r1, 1, &uh_emlrtRTEI, true);
      i = r1->size[0];
      r1->size[0] = a;
      emxEnsureCapacity_int32_T(sp, r1, i, &ah_emlrtRTEI);
      irank = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] > gmin->data[b_i + gmin->size
            [0] * 2]) {
          r1->data[irank] = b_i + 1;
          irank++;
        }
      }

      idx = out_mmd->size[0] - 1;
      a = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] > gmin->data[b_i + gmin->size
            [0] * 3]) {
          a++;
        }
      }

      emxInit_int32_T(sp, &r2, 1, &vh_emlrtRTEI, true);
      i = r2->size[0];
      r2->size[0] = a;
      emxEnsureCapacity_int32_T(sp, r2, i, &ah_emlrtRTEI);
      irank = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] > gmin->data[b_i + gmin->size
            [0] * 3]) {
          r2->data[irank] = b_i + 1;
          irank++;
        }
      }

      idx = out_mmd->size[0] - 1;
      a = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] > gmin->data[b_i + gmin->size
            [0] * 4]) {
          a++;
        }
      }

      emxInit_int32_T(sp, &r3, 1, &wh_emlrtRTEI, true);
      i = r3->size[0];
      r3->size[0] = a;
      emxEnsureCapacity_int32_T(sp, r3, i, &ah_emlrtRTEI);
      irank = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] > gmin->data[b_i + gmin->size
            [0] * 4]) {
          r3->data[irank] = b_i + 1;
          irank++;
        }
      }

      idx = out_mmd->size[0] - 1;
      a = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] < gmin->data[b_i + gmin->size
            [0] * 5]) {
          a++;
        }
      }

      emxInit_int32_T(sp, &r4, 1, &xh_emlrtRTEI, true);
      i = r4->size[0];
      r4->size[0] = a;
      emxEnsureCapacity_int32_T(sp, r4, i, &ah_emlrtRTEI);
      irank = 0;
      for (b_i = 0; b_i <= idx; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] < gmin->data[b_i + gmin->size
            [0] * 5]) {
          r4->data[irank] = b_i + 1;
          irank++;
        }
      }

      loop_ub = ia->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (ia->data[i] > out_mmd->size[0]) {
          emlrtDynamicBoundsCheckR2012b(ia->data[i], 1, out_mmd->size[0],
            &gk_emlrtBCI, (emlrtCTX)sp);
        }
      }

      loop_ub = r1->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (r1->data[i] > out_mmd->size[0]) {
          emlrtDynamicBoundsCheckR2012b(r1->data[i], 1, out_mmd->size[0],
            &hk_emlrtBCI, (emlrtCTX)sp);
        }
      }

      loop_ub = r2->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (r2->data[i] > out_mmd->size[0]) {
          emlrtDynamicBoundsCheckR2012b(r2->data[i], 1, out_mmd->size[0],
            &ik_emlrtBCI, (emlrtCTX)sp);
        }
      }

      loop_ub = r3->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (r3->data[i] > out_mmd->size[0]) {
          emlrtDynamicBoundsCheckR2012b(r3->data[i], 1, out_mmd->size[0],
            &jk_emlrtBCI, (emlrtCTX)sp);
        }
      }

      loop_ub = r4->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (r4->data[i] > out_mmd->size[0]) {
          emlrtDynamicBoundsCheckR2012b(r4->data[i], 1, out_mmd->size[0],
            &kk_emlrtBCI, (emlrtCTX)sp);
        }
      }

      /*        % the 99% envelope */
      /*       % the 99.9% envelope */
      /*      % the 99.99% envelope */
      /*     % the 99.999% envelope */
      /*  the 1% envelope */
      for (i = 0; i < 5; i++) {
        uv1[i << 1] = (uint32_T)iv2[i];
      }

      uv1[1] = (uint32_T)r4->size[0];
      uv1[3] = (uint32_T)ia->size[0];
      uv1[5] = (uint32_T)r1->size[0];
      uv1[7] = (uint32_T)r2->size[0];
      uv1[9] = (uint32_T)r3->size[0];
      nout_size_idx_0 = 2;
      nout_size_idx_1 = 5;
      emxFree_int32_T(&r4);
      emxFree_int32_T(&r3);
      emxFree_int32_T(&r2);
      emxFree_int32_T(&r1);
      for (i = 0; i < 10; i++) {
        nout_data[i] = uv1[i];
      }

      /*  NoFalseSig = boolean linked to the fact that the signal is good or not */
      NoFalseSig = false;

      /*  NoFalseSig is set to 1 if the condition for an INCONTROVERTIBLE SIGNAL is */
      /*  fulfilled. */
      a = 0;
      irank = 0;
      for (b_i = 0; b_i < 5; b_i++) {
        b_b = ((int32_T)nout_data[2 * b_i] == 9999);
        if (b_b) {
          a++;
          tmp_data[irank] = (int8_T)(b_i + 1);
          irank++;
        }
      }

      nout_size[0] = 1;
      nout_size[1] = a;
      for (i = 0; i < a; i++) {
        b_nout_data[i] = ((int32_T)nout_data[2 * (tmp_data[i] - 1) + 1] >= 10);
      }

      st.site = &bh_emlrtRSI;
      if (c_ifWhileCond(b_nout_data, nout_size)) {
        NoFalseSig = true;
      }

      /*  Divide central part from final part of the search */
      d = (real_T)Y->size[0] / 200.0;
      st.site = &ah_emlrtRSI;
      if (d < 0.0) {
        emlrtErrorWithMessageIdR2018a(&st, &sb_emlrtRTEI,
          "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3,
          4, 4, "sqrt");
      }

      d = muDoubleScalarSqrt(d);
      ndecl = (real_T)Y->size[0] - muDoubleScalarFloor(13.0 * d);
    }

    /*  Stage 1a: signal detection */
    /*  Signal detection is based on monitoring consecutive triplets or single */
    /*  extreme values */
    /*  Signal detection loop */
    b_i = 3;
    c_i = 3;
    emxInit_real_T(sp, &gval, 2, &qh_emlrtRTEI, true);
    emxInit_boolean_T(sp, &x, 1, &ih_emlrtRTEI, true);
    exitg2 = false;
    while ((!exitg2) && (c_i - 3 <= out_mmd->size[0] - 3)) {
      b_i = c_i;
      guard1 = false;
      if ((varargin_4_size[0] == 0) || (varargin_4_size[1] == 0)) {
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
          if (2 > out_mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &vc_emlrtBCI,
              (emlrtCTX)sp);
          }

          if ((c_i < 1) || (c_i > out_mmd->size[0])) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0], &kg_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &lg_emlrtBCI,
              (emlrtCTX)sp);
          }

          if ((c9999 < 1) || (c9999 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c9999, 1, gmin->size[1], &lg_emlrtBCI,
              (emlrtCTX)sp);
          }

          d = out_mmd->data[(c_i + out_mmd->size[0]) - 1];
          b_tmp = gmin->data[(c_i + gmin->size[0] * (c9999 - 1)) - 1];
          if (d > b_tmp) {
            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &wc_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) >
                 out_mmd->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1,
                out_mmd->size[0], &rg_emlrtBCI, (emlrtCTX)sp);
            }

            if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > gmin->size[0]))
            {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->size[0],
                &sg_emlrtBCI, (emlrtCTX)sp);
            }

            if (c9999 > gmin->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c9999, 1, gmin->size[1],
                &sg_emlrtBCI, (emlrtCTX)sp);
            }

            if (out_mmd->data[c_i + out_mmd->size[0]] > gmin->data[c_i +
                gmin->size[0] * (c9999 - 1)]) {
              if (2 > out_mmd->size[1]) {
                emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1],
                  &xc_emlrtBCI, (emlrtCTX)sp);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > out_mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out_mmd->size[0],
                  &dh_emlrtBCI, (emlrtCTX)sp);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0],
                  &eh_emlrtBCI, (emlrtCTX)sp);
              }

              if (c9999 > gmin->size[1]) {
                emlrtDynamicBoundsCheckR2012b(c9999, 1, gmin->size[1],
                  &eh_emlrtBCI, (emlrtCTX)sp);
              }

              if (out_mmd->data[(c_i + out_mmd->size[0]) - 2] > gmin->data[(c_i
                   + gmin->size[0] * (c9999 - 1)) - 2]) {
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
        } else if (c_i < out_mmd->size[0] - 1) {
          /*  FINAL PART OF THE SEARCH */
          /*  Extreme couple adjacent to an exceedance */
          /*  Two consecutive values of mmd above the 99.99% envelope and 1 above 99% */
          if (2 > out_mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &hd_emlrtBCI,
              (emlrtCTX)sp);
          }

          if ((c_i < 1) || (c_i > out_mmd->size[0])) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0], &ig_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &jg_emlrtBCI,
              (emlrtCTX)sp);
          }

          if ((c999 < 1) || (c999 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &jg_emlrtBCI,
              (emlrtCTX)sp);
          }

          d = out_mmd->data[(c_i + out_mmd->size[0]) - 1];
          b_tmp = gmin->data[(c_i + gmin->size[0] * (c999 - 1)) - 1];
          if (d > b_tmp) {
            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &id_emlrtBCI,
                (emlrtCTX)sp);
            }

            if ((int32_T)(c_i + 1U) > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1,
                out_mmd->size[0], &pg_emlrtBCI, (emlrtCTX)sp);
            }

            if ((int32_T)(c_i + 1U) > gmin->size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->size[0],
                &qg_emlrtBCI, (emlrtCTX)sp);
            }

            if (c999 > gmin->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &qg_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (out_mmd->data[c_i + out_mmd->size[0]] > gmin->data[c_i +
                gmin->size[0] * (c999 - 1)]) {
              if (2 > out_mmd->size[1]) {
                emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1],
                  &jd_emlrtBCI, (emlrtCTX)sp);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > out_mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out_mmd->size[0],
                  &yg_emlrtBCI, (emlrtCTX)sp);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0],
                  &ah_emlrtBCI, (emlrtCTX)sp);
              }

              if ((c99 < 1) || (c99 > gmin->size[1])) {
                emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1],
                  &ah_emlrtBCI, (emlrtCTX)sp);
              }

              if (out_mmd->data[(c_i + out_mmd->size[0]) - 2] > gmin->data[(c_i
                   + gmin->size[0] * (c99 - 1)) - 2]) {
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
          if (2 > out_mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &be_emlrtBCI,
              (emlrtCTX)sp);
          }

          if ((c_i < 1) || (c_i > out_mmd->size[0])) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0], &eg_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &fg_emlrtBCI,
              (emlrtCTX)sp);
          }

          if ((c999 < 1) || (c999 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &fg_emlrtBCI,
              (emlrtCTX)sp);
          }

          d = out_mmd->data[(c_i + out_mmd->size[0]) - 1];
          b_tmp = gmin->data[(c_i + gmin->size[0] * (c999 - 1)) - 1];
          if (d > b_tmp) {
            guard4 = true;
          } else {
            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &ce_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &gg_emlrtBCI, (emlrtCTX)sp);
            }

            if (gmin->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
                &hg_emlrtBCI, (emlrtCTX)sp);
            }

            if ((c99 < 1) || (c99 > gmin->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &hg_emlrtBCI,
                (emlrtCTX)sp);
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
          if (2 > out_mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &kd_emlrtBCI,
              (emlrtCTX)sp);
          }

          if ((c_i - 1 < 1) || (c_i - 1 > out_mmd->size[0])) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out_mmd->size[0],
              &wg_emlrtBCI, (emlrtCTX)sp);
          }

          if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0],
              &xg_emlrtBCI, (emlrtCTX)sp);
          }

          if (c999 > gmin->size[1]) {
            emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &xg_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (out_mmd->data[(c_i + out_mmd->size[0]) - 2] > gmin->data[(c_i +
               gmin->size[0] * (c999 - 1)) - 2]) {
            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &ld_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &ih_emlrtBCI, (emlrtCTX)sp);
            }

            if (c_i > gmin->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &jh_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (c999 > gmin->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &jh_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (d > b_tmp) {
              if (2 > out_mmd->size[1]) {
                emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1],
                  &md_emlrtBCI, (emlrtCTX)sp);
              }

              if ((int32_T)(c_i + 1U) > out_mmd->size[0]) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1,
                  out_mmd->size[0], &ph_emlrtBCI, (emlrtCTX)sp);
              }

              if ((int32_T)(c_i + 1U) > gmin->size[0]) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->
                  size[0], &qh_emlrtBCI, (emlrtCTX)sp);
              }

              if ((c99 < 1) || (c99 > gmin->size[1])) {
                emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1],
                  &qh_emlrtBCI, (emlrtCTX)sp);
              }

              if (out_mmd->data[c_i + out_mmd->size[0]] > gmin->data[c_i +
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
          if (2 > out_mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &yc_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > out_mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0], &bh_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (gmin->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
              &ch_emlrtBCI, (emlrtCTX)sp);
          }

          if ((c99 < 1) || (c99 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &ch_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (d > gmin->data[(gmin->size[0] + gmin->size[0] * (c99 - 1)) - 1]) {
            guard3 = true;
          } else {
            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &ad_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &kh_emlrtBCI, (emlrtCTX)sp);
            }

            if (c_i > gmin->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &lh_emlrtBCI,
                (emlrtCTX)sp);
            }

            if ((c99999 < 1) || (c99999 > gmin->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1],
                &lh_emlrtBCI, (emlrtCTX)sp);
            }

            if (d > gmin->data[(c_i + gmin->size[0] * (c99999 - 1)) - 1]) {
              guard3 = true;
            }
          }
        }

        if (guard5) {
          if (2 > out_mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &nd_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > out_mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0], &nh_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (gmin->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
              &oh_emlrtBCI, (emlrtCTX)sp);
          }

          if ((c99 < 1) || (c99 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &oh_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (d > gmin->data[(gmin->size[0] + gmin->size[0] * (c99 - 1)) - 1]) {
            guard2 = true;
          } else {
            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &od_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &th_emlrtBCI, (emlrtCTX)sp);
            }

            if (c_i > gmin->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &uh_emlrtBCI,
                (emlrtCTX)sp);
            }

            if ((c99999 < 1) || (c99999 > gmin->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1],
                &uh_emlrtBCI, (emlrtCTX)sp);
            }

            if (d > gmin->data[(c_i + gmin->size[0] * (c99999 - 1)) - 1]) {
              guard2 = true;
            }
          }
        }

        if (guard4) {
          if (c_i == out_mmd->size[0] - 1) {
            /*  potential couple of outliers */
            b_signal = 1;
            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &de_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &tg_emlrtBCI, (emlrtCTX)sp);
            }

            if (c_i > gmin->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &ug_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (c999 > gmin->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &ug_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (d > b_tmp) {
              if (c_i > out_mmd->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                  &vg_emlrtBCI, (emlrtCTX)sp);
              }

              st.site = &rg_emlrtRSI;
              int2str(&st, out_mmd->data[c_i - 1], nib_emlrtRSI.data,
                      nib_emlrtRSI.size);
              st.site = &rg_emlrtRSI;
              int2str(&st, n, nib_emlrtRSI.data, nib_emlrtRSI.size);
            }

            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &ee_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &gh_emlrtBCI, (emlrtCTX)sp);
            }

            if (gmin->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
                &hh_emlrtBCI, (emlrtCTX)sp);
            }

            if ((c99 < 1) || (c99 > gmin->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &hh_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (d > gmin->data[(gmin->size[0] + gmin->size[0] * (c99 - 1)) - 1])
            {
              if (c_i > out_mmd->size[0]) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                  &mh_emlrtBCI, (emlrtCTX)sp);
              }

              st.site = &qg_emlrtRSI;
              int2str(&st, out_mmd->data[c_i - 1], nib_emlrtRSI.data,
                      nib_emlrtRSI.size);
              st.site = &qg_emlrtRSI;
              int2str(&st, n, nib_emlrtRSI.data, nib_emlrtRSI.size);
            }

            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &fe_emlrtBCI, (emlrtCTX)sp);
            }

            if (1 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out_mmd->size[1], &xk_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &xk_emlrtBCI,
                (emlrtCTX)sp);
            }
          } else {
            b_guard1 = true;
          }
        }

        if (guard3) {
          if (2 > out_mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &bd_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > out_mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0], &rh_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &sh_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c9999 > gmin->size[1]) {
            emlrtDynamicBoundsCheckR2012b(c9999, 1, gmin->size[1], &sh_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (d > b_tmp) {
            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &cd_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) >
                 out_mmd->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1,
                out_mmd->size[0], &xh_emlrtBCI, (emlrtCTX)sp);
            }

            if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > gmin->size[0]))
            {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->size[0],
                &yh_emlrtBCI, (emlrtCTX)sp);
            }

            if (c9999 > gmin->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c9999, 1, gmin->size[1],
                &yh_emlrtBCI, (emlrtCTX)sp);
            }

            if (out_mmd->data[c_i + out_mmd->size[0]] > gmin->data[c_i +
                gmin->size[0] * (c9999 - 1)]) {
              if (2 > out_mmd->size[1]) {
                emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1],
                  &dd_emlrtBCI, (emlrtCTX)sp);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > out_mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out_mmd->size[0],
                  &ei_emlrtBCI, (emlrtCTX)sp);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0],
                  &fi_emlrtBCI, (emlrtCTX)sp);
              }

              if (c9999 > gmin->size[1]) {
                emlrtDynamicBoundsCheckR2012b(c9999, 1, gmin->size[1],
                  &fi_emlrtBCI, (emlrtCTX)sp);
              }

              if (out_mmd->data[(c_i + out_mmd->size[0]) - 2] > gmin->data[(c_i
                   + gmin->size[0] * (c9999 - 1)) - 2]) {
                if (c_i > out_mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                    &ii_emlrtBCI, (emlrtCTX)sp);
                }

                st.site = &yg_emlrtRSI;
                int2str(&st, out_mmd->data[c_i - 1], nib_emlrtRSI.data,
                        nib_emlrtRSI.size);
                st.site = &yg_emlrtRSI;
                int2str(&st, n, nib_emlrtRSI.data, nib_emlrtRSI.size);
                if ((c_i - 1 < 1) || (c_i - 1 > out_mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out_mmd->size[0],
                    &pi_emlrtBCI, (emlrtCTX)sp);
                }

                st.site = &yg_emlrtRSI;
                int2str(&st, out_mmd->data[c_i - 2], nib_emlrtRSI.data,
                        nib_emlrtRSI.size);
                st.site = &yg_emlrtRSI;
                int2str(&st, n, nib_emlrtRSI.data, nib_emlrtRSI.size);
                if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) >
                     out_mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1,
                    out_mmd->size[0], &aj_emlrtBCI, (emlrtCTX)sp);
                }

                st.site = &yg_emlrtRSI;
                int2str(&st, out_mmd->data[c_i], nib_emlrtRSI.data,
                        nib_emlrtRSI.size);
                st.site = &yg_emlrtRSI;
                int2str(&st, n, nib_emlrtRSI.data, nib_emlrtRSI.size);
                if ((c_i + -1 < 1) || (c_i + -1 > out_mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(c_i + -1, 1, out_mmd->size[0],
                    &qk_emlrtBCI, (emlrtCTX)sp);
                }

                if (c_i > out_mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                    &qk_emlrtBCI, (emlrtCTX)sp);
                }

                if ((c_i + 1 < 1) || (c_i + 1 > out_mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, out_mmd->size[0],
                    &qk_emlrtBCI, (emlrtCTX)sp);
                }

                if (1 > out_mmd->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(1, 1, out_mmd->size[1],
                    &pk_emlrtBCI, (emlrtCTX)sp);
                }

                if (2 > out_mmd->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1],
                    &pk_emlrtBCI, (emlrtCTX)sp);
                }
              }
            }
          }

          if (2 > out_mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &ed_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > out_mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0], &gi_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &hi_emlrtBCI,
              (emlrtCTX)sp);
          }

          if ((c99999 < 1) || (c99999 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1], &hi_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (d > gmin->data[(c_i + gmin->size[0] * (c99999 - 1)) - 1]) {
            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &li_emlrtBCI, (emlrtCTX)sp);
            }

            st.site = &xg_emlrtRSI;
            int2str(&st, out_mmd->data[c_i - 1], nib_emlrtRSI.data,
                    nib_emlrtRSI.size);
            st.site = &xg_emlrtRSI;
            int2str(&st, n, nib_emlrtRSI.data, nib_emlrtRSI.size);
            if ((c_i + -1 < 1) || (c_i + -1 > out_mmd->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i + -1, 1, out_mmd->size[0],
                &ok_emlrtBCI, (emlrtCTX)sp);
            }

            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &ok_emlrtBCI, (emlrtCTX)sp);
            }

            if ((c_i + 1 < 1) || (c_i + 1 > out_mmd->size[0])) {
              emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, out_mmd->size[0],
                &ok_emlrtBCI, (emlrtCTX)sp);
            }

            if (1 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out_mmd->size[1], &nk_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &nk_emlrtBCI,
                (emlrtCTX)sp);
            }
          }

          if (2 > out_mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &fd_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > out_mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0], &qi_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (gmin->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
              &ri_emlrtBCI, (emlrtCTX)sp);
          }

          if ((c99 < 1) || (c99 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &ri_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (d > gmin->data[(gmin->size[0] + gmin->size[0] * (c99 - 1)) - 1]) {
            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &yi_emlrtBCI, (emlrtCTX)sp);
            }

            st.site = &wg_emlrtRSI;
            int2str(&st, out_mmd->data[c_i - 1], nib_emlrtRSI.data,
                    nib_emlrtRSI.size);
            st.site = &wg_emlrtRSI;
            int2str(&st, n, nib_emlrtRSI.data, nib_emlrtRSI.size);
            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &gd_emlrtBCI, (emlrtCTX)sp);
            }

            if (1 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out_mmd->size[1], &mk_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &mk_emlrtBCI,
                (emlrtCTX)sp);
            }

            NoFalseSig = true;

            /*  i.e., no need of further validation */
          }

          b_signal = 1;
        }

        if (guard2) {
          if (c_i > out_mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0], &pd_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (2 > out_mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &qd_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > out_mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0], &vh_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &wh_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c999 > gmin->size[1]) {
            emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &wh_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (d > b_tmp) {
            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &rd_emlrtBCI,
                (emlrtCTX)sp);
            }

            if ((int32_T)(c_i + 1U) > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1,
                out_mmd->size[0], &ci_emlrtBCI, (emlrtCTX)sp);
            }

            if ((int32_T)(c_i + 1U) > gmin->size[0]) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->size[0],
                &di_emlrtBCI, (emlrtCTX)sp);
            }

            if (c999 > gmin->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &di_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (out_mmd->data[c_i + out_mmd->size[0]] > gmin->data[c_i +
                gmin->size[0] * (c999 - 1)]) {
              if (2 > out_mmd->size[1]) {
                emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1],
                  &sd_emlrtBCI, (emlrtCTX)sp);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > out_mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out_mmd->size[0],
                  &ji_emlrtBCI, (emlrtCTX)sp);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0],
                  &ki_emlrtBCI, (emlrtCTX)sp);
              }

              if (c99 > gmin->size[1]) {
                emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1],
                  &ki_emlrtBCI, (emlrtCTX)sp);
              }

              if (out_mmd->data[(c_i + out_mmd->size[0]) - 2] > gmin->data[(c_i
                   + gmin->size[0] * (c99 - 1)) - 2]) {
                if (c_i > out_mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                    &oi_emlrtBCI, (emlrtCTX)sp);
                }

                st.site = &vg_emlrtRSI;
                int2str(&st, out_mmd->data[c_i - 1], nib_emlrtRSI.data,
                        nib_emlrtRSI.size);
                st.site = &vg_emlrtRSI;
                int2str(&st, n, nib_emlrtRSI.data, nib_emlrtRSI.size);
                if ((c_i - 1 < 1) || (c_i - 1 > out_mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out_mmd->size[0],
                    &xi_emlrtBCI, (emlrtCTX)sp);
                }

                st.site = &vg_emlrtRSI;
                int2str(&st, out_mmd->data[c_i - 2], nib_emlrtRSI.data,
                        nib_emlrtRSI.size);
                st.site = &vg_emlrtRSI;
                int2str(&st, n, nib_emlrtRSI.data, nib_emlrtRSI.size);
                if ((int32_T)(c_i + 1U) > out_mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1,
                    out_mmd->size[0], &gj_emlrtBCI, (emlrtCTX)sp);
                }

                st.site = &vg_emlrtRSI;
                int2str(&st, out_mmd->data[c_i], nib_emlrtRSI.data,
                        nib_emlrtRSI.size);
                st.site = &vg_emlrtRSI;
                int2str(&st, n, nib_emlrtRSI.data, nib_emlrtRSI.size);
                if ((c_i + -1 < 1) || (c_i + -1 > out_mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(c_i + -1, 1, out_mmd->size[0],
                    &wk_emlrtBCI, (emlrtCTX)sp);
                }

                if (c_i > out_mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                    &wk_emlrtBCI, (emlrtCTX)sp);
                }

                if (c_i + 1 > out_mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, out_mmd->size[0],
                    &wk_emlrtBCI, (emlrtCTX)sp);
                }

                if (1 > out_mmd->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(1, 1, out_mmd->size[1],
                    &vk_emlrtBCI, (emlrtCTX)sp);
                }

                if (2 > out_mmd->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1],
                    &vk_emlrtBCI, (emlrtCTX)sp);
                }
              }
            }
          }

          if (2 > out_mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &td_emlrtBCI,
              (emlrtCTX)sp);
          }

          if ((c_i - 1 < 1) || (c_i - 1 > out_mmd->size[0])) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out_mmd->size[0],
              &mi_emlrtBCI, (emlrtCTX)sp);
          }

          if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
            emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0],
              &ni_emlrtBCI, (emlrtCTX)sp);
          }

          if (c999 > gmin->size[1]) {
            emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &ni_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (out_mmd->data[(c_i + out_mmd->size[0]) - 2] > gmin->data[(c_i +
               gmin->size[0] * (c999 - 1)) - 2]) {
            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &ud_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &vi_emlrtBCI, (emlrtCTX)sp);
            }

            if (c_i > gmin->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &wi_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (c999 > gmin->size[1]) {
              emlrtDynamicBoundsCheckR2012b(c999, 1, gmin->size[1], &wi_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (d > b_tmp) {
              if (2 > out_mmd->size[1]) {
                emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1],
                  &vd_emlrtBCI, (emlrtCTX)sp);
              }

              if ((int32_T)(c_i + 1U) > out_mmd->size[0]) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1,
                  out_mmd->size[0], &ej_emlrtBCI, (emlrtCTX)sp);
              }

              if ((int32_T)(c_i + 1U) > gmin->size[0]) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->
                  size[0], &fj_emlrtBCI, (emlrtCTX)sp);
              }

              if (c99 > gmin->size[1]) {
                emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1],
                  &fj_emlrtBCI, (emlrtCTX)sp);
              }

              if (out_mmd->data[c_i + out_mmd->size[0]] > gmin->data[c_i +
                  gmin->size[0] * (c99 - 1)]) {
                if (c_i > out_mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                    &kj_emlrtBCI, (emlrtCTX)sp);
                }

                st.site = &ug_emlrtRSI;
                int2str(&st, out_mmd->data[c_i - 1], nib_emlrtRSI.data,
                        nib_emlrtRSI.size);
                st.site = &ug_emlrtRSI;
                int2str(&st, n, nib_emlrtRSI.data, nib_emlrtRSI.size);
                if ((c_i - 1 < 1) || (c_i - 1 > out_mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out_mmd->size[0],
                    &rj_emlrtBCI, (emlrtCTX)sp);
                }

                st.site = &ug_emlrtRSI;
                int2str(&st, out_mmd->data[c_i - 2], nib_emlrtRSI.data,
                        nib_emlrtRSI.size);
                st.site = &ug_emlrtRSI;
                int2str(&st, n, nib_emlrtRSI.data, nib_emlrtRSI.size);
                if ((int32_T)(c_i + 1U) > out_mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1,
                    out_mmd->size[0], &xj_emlrtBCI, (emlrtCTX)sp);
                }

                st.site = &ug_emlrtRSI;
                int2str(&st, out_mmd->data[c_i], nib_emlrtRSI.data,
                        nib_emlrtRSI.size);
                st.site = &ug_emlrtRSI;
                int2str(&st, n, nib_emlrtRSI.data, nib_emlrtRSI.size);
                if ((c_i + -1 < 1) || (c_i + -1 > out_mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(c_i + -1, 1, out_mmd->size[0],
                    &uk_emlrtBCI, (emlrtCTX)sp);
                }

                if (c_i > out_mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                    &uk_emlrtBCI, (emlrtCTX)sp);
                }

                if (c_i + 1 > out_mmd->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, out_mmd->size[0],
                    &uk_emlrtBCI, (emlrtCTX)sp);
                }

                if (1 > out_mmd->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(1, 1, out_mmd->size[1],
                    &tk_emlrtBCI, (emlrtCTX)sp);
                }

                if (2 > out_mmd->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1],
                    &tk_emlrtBCI, (emlrtCTX)sp);
                }
              }
            }
          }

          if (2 > out_mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &wd_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > out_mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0], &ij_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (gmin->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
              &jj_emlrtBCI, (emlrtCTX)sp);
          }

          if (c99 > gmin->size[1]) {
            emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &jj_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (d > gmin->data[(gmin->size[0] + gmin->size[0] * (c99 - 1)) - 1]) {
            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &oj_emlrtBCI, (emlrtCTX)sp);
            }

            st.site = &tg_emlrtRSI;
            int2str(&st, out_mmd->data[c_i - 1], nib_emlrtRSI.data,
                    nib_emlrtRSI.size);
            st.site = &tg_emlrtRSI;
            int2str(&st, n, nib_emlrtRSI.data, nib_emlrtRSI.size);
            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &xd_emlrtBCI, (emlrtCTX)sp);
            }

            if (1 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out_mmd->size[1], &sk_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &sk_emlrtBCI,
                (emlrtCTX)sp);
            }
          }

          /*  Extreme single value */
          if (2 > out_mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &yd_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > out_mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0], &vj_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &wj_emlrtBCI,
              (emlrtCTX)sp);
          }

          if ((c99999 < 1) || (c99999 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1], &wj_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (d > gmin->data[(c_i + gmin->size[0] * (c99999 - 1)) - 1]) {
            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &ak_emlrtBCI, (emlrtCTX)sp);
            }

            st.site = &sg_emlrtRSI;
            int2str(&st, out_mmd->data[c_i - 1], nib_emlrtRSI.data,
                    nib_emlrtRSI.size);
            st.site = &sg_emlrtRSI;
            int2str(&st, n, nib_emlrtRSI.data, nib_emlrtRSI.size);
            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &ae_emlrtBCI, (emlrtCTX)sp);
            }

            if (1 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out_mmd->size[1], &rk_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &rk_emlrtBCI,
                (emlrtCTX)sp);
            }
          }

          /*  Signal is always considered true if it takes place in the */
          /*  final part of the search */
          NoFalseSig = true;
          b_signal = 1;
        }

        if (b_guard1) {
          if (2 > out_mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &ge_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > out_mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0], &ng_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (c_i > gmin->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &og_emlrtBCI,
              (emlrtCTX)sp);
          }

          if ((c99 < 1) || (c99 > gmin->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c99, 1, gmin->size[1], &og_emlrtBCI,
              (emlrtCTX)sp);
          }

          if ((d > gmin->data[(c_i + gmin->size[0] * (c99 - 1)) - 1]) && (c_i ==
               out_mmd->size[0])) {
            /*  a single outlier */
            b_signal = 1;
            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &fh_emlrtBCI, (emlrtCTX)sp);
            }

            st.site = &pg_emlrtRSI;
            int2str(&st, out_mmd->data[c_i - 1], nib_emlrtRSI.data,
                    nib_emlrtRSI.size);
            st.site = &pg_emlrtRSI;
            int2str(&st, n, nib_emlrtRSI.data, nib_emlrtRSI.size);
            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &he_emlrtBCI, (emlrtCTX)sp);
            }

            if (1 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out_mmd->size[1], &yk_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &yk_emlrtBCI,
                (emlrtCTX)sp);
            }
          }
        }

        /*         %% Stage 1b: signal validation */
        if (b_signal == 1) {
          /*  mdag is $m^\dagger$ */
          if (c_i > out_mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0], &ai_emlrtBCI,
              (emlrtCTX)sp);
          }

          incre = out_mmd->data[c_i - 1];
          if (c_i > out_mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0], &bi_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (incre < (real_T)n - 2.0) {
            /*  Check if the signal is incontrovertible */
            /*  Incontrovertible signal = 3 consecutive values of d_min > */
            /*  99.999% threshold */
            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &ie_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &ti_emlrtBCI, (emlrtCTX)sp);
            }

            if (c_i > gmin->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, gmin->size[0], &ui_emlrtBCI,
                (emlrtCTX)sp);
            }

            if ((c99999 < 1) || (c99999 > gmin->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1],
                &ui_emlrtBCI, (emlrtCTX)sp);
            }

            if (out_mmd->data[(c_i + out_mmd->size[0]) - 1] > gmin->data[(c_i +
                 gmin->size[0] * (c99999 - 1)) - 1]) {
              if (2 > out_mmd->size[1]) {
                emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1],
                  &je_emlrtBCI, (emlrtCTX)sp);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > out_mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, out_mmd->size[0],
                  &cj_emlrtBCI, (emlrtCTX)sp);
              }

              if ((c_i - 1 < 1) || (c_i - 1 > gmin->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i - 1, 1, gmin->size[0],
                  &dj_emlrtBCI, (emlrtCTX)sp);
              }

              if (c99999 > gmin->size[1]) {
                emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1],
                  &dj_emlrtBCI, (emlrtCTX)sp);
              }

              if (out_mmd->data[(c_i + out_mmd->size[0]) - 2] > gmin->data[(c_i
                   + gmin->size[0] * (c99999 - 1)) - 2]) {
                if (2 > out_mmd->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1],
                    &ke_emlrtBCI, (emlrtCTX)sp);
                }

                if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) >
                     out_mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1,
                    out_mmd->size[0], &mj_emlrtBCI, (emlrtCTX)sp);
                }

                if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) >
                     gmin->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1,
                    gmin->size[0], &nj_emlrtBCI, (emlrtCTX)sp);
                }

                if (c99999 > gmin->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(c99999, 1, gmin->size[1],
                    &nj_emlrtBCI, (emlrtCTX)sp);
                }

                if (out_mmd->data[c_i + out_mmd->size[0]] > gmin->data[c_i +
                    gmin->size[0] * (c99999 - 1)]) {
                  NoFalseSig = true;
                }
              }
            }
          } else {
            NoFalseSig = true;
          }

          /*  if the following statement is true, observed curve of d_min is */
          /*  above 99.99% and later is below 1%: peak followed by dip */
          if (1 > out_mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, out_mmd->size[0], &le_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (out_mmd->size[0] > (incre - out_mmd->data[0]) + 31.0) {
            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &me_emlrtBCI,
                (emlrtCTX)sp);
            }

            for (i = 0; i < 31; i++) {
              uv[i] = ((uint32_T)i + c_i) + 1U;
            }

            for (i = 0; i < 31; i++) {
              i1 = (int32_T)uv[i];
              if ((i1 < 1) || (i1 > out_mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, out_mmd->size[0],
                  &qj_emlrtBCI, (emlrtCTX)sp);
              }
            }

            for (i = 0; i < 31; i++) {
              i1 = (int32_T)uv[i];
              if ((i1 < 1) || (i1 > gmin->size[0])) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, gmin->size[0], &uj_emlrtBCI,
                  (emlrtCTX)sp);
              }
            }

            if ((c001 < 1) || (c001 > gmin->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c001, 1, gmin->size[1], &ne_emlrtBCI,
                (emlrtCTX)sp);
            }

            for (i = 0; i < 31; i++) {
              irank = (int32_T)uv[i] - 1;
              b_x[i] = (out_mmd->data[irank + out_mmd->size[0]] < gmin->
                        data[irank + gmin->size[0] * (c001 - 1)]);
            }

            irank = b_x[0];
            for (k = 0; k < 30; k++) {
              irank += b_x[k + 1];
            }

            if (irank >= 2) {
              NoFalseSig = true;

              /*  Peak followed by dip */
            }
          } else {
            if (c_i + 1U > (uint32_T)out_mmd->size[0]) {
              i = -1;
              i1 = -1;
            } else {
              if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) >
                   out_mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1,
                  out_mmd->size[0], &oe_emlrtBCI, (emlrtCTX)sp);
              }

              i = c_i - 1;
              if (out_mmd->size[0] < 1) {
                emlrtDynamicBoundsCheckR2012b(out_mmd->size[0], 1, out_mmd->
                  size[0], &pe_emlrtBCI, (emlrtCTX)sp);
              }

              i1 = out_mmd->size[0] - 1;
            }

            if (c_i + 1U > (uint32_T)gmin->size[0]) {
              k = -1;
              a = 0;
            } else {
              if (((int32_T)(c_i + 1U) < 1) || ((int32_T)(c_i + 1U) > gmin->
                   size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(c_i + 1U), 1, gmin->
                  size[0], &re_emlrtBCI, (emlrtCTX)sp);
              }

              k = c_i - 1;
              if (gmin->size[0] < 1) {
                emlrtDynamicBoundsCheckR2012b(gmin->size[0], 1, gmin->size[0],
                  &se_emlrtBCI, (emlrtCTX)sp);
              }

              a = gmin->size[0];
            }

            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &qe_emlrtBCI,
                (emlrtCTX)sp);
            }

            if ((c001 < 1) || (c001 > gmin->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c001, 1, gmin->size[1], &te_emlrtBCI,
                (emlrtCTX)sp);
            }

            loop_ub = i1 - i;
            i1 = (a - k) - 1;
            if (loop_ub != i1) {
              emlrtSizeEqCheck1DR2012b(loop_ub, i1, &o_emlrtECI, (emlrtCTX)sp);
            }

            st.site = &og_emlrtRSI;
            i1 = x->size[0];
            x->size[0] = loop_ub;
            emxEnsureCapacity_boolean_T(&st, x, i1, &ih_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              x->data[i1] = (out_mmd->data[((i + i1) + out_mmd->size[0]) + 1] <
                             gmin->data[((k + i1) + gmin->size[0] * (c001 - 1))
                             + 1]);
            }

            b_st.site = &mm_emlrtRSI;
            c_st.site = &te_emlrtRSI;
            irank = combineVectorElements(&c_st, x);
            if (irank >= 2) {
              NoFalseSig = true;

              /* Peak followed by dip in the final part of the search'; */
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
            st.site = &ng_emlrtRSI;
            b_FSMenvmmd(&st, incre + 1.0, v, incre, gval);
            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &ue_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (1 > gval->size[0]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, gval->size[0], &ve_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (2 > gval->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, gval->size[1], &we_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (c_i > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0],
                &fk_emlrtBCI, (emlrtCTX)sp);
            }

            if (out_mmd->data[(c_i + out_mmd->size[0]) - 1] < gval->data
                [gval->size[0]]) {
              /*  increase mdag of the search by one unit */
              incre = 0.0;
            } else {
              NoFalseSig = true;
            }
          }

          /*  If the signal has been validated get out of the signal detection */
          /*  loop and move to stage 2: superimposition of the envelopes */
          if (NoFalseSig) {
            exitg2 = true;
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }
      } else {
        /*  Outlier detection based on Bonferroni threshold */
        if (2 > out_mmd->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &xe_emlrtBCI,
            (emlrtCTX)sp);
        }

        if ((c_i < 1) || (c_i > out_mmd->size[0])) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0], &bg_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (c_i > gbonf->size[0]) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, gbonf->size[0], &cg_emlrtBCI,
            (emlrtCTX)sp);
        }

        if (gbonf->size[1] < 1) {
          emlrtDynamicBoundsCheckR2012b(gbonf->size[1], 1, gbonf->size[1],
            &cg_emlrtBCI, (emlrtCTX)sp);
        }

        if (out_mmd->data[(c_i + out_mmd->size[0]) - 1] > gbonf->data[(c_i +
             gbonf->size[0] * (gbonf->size[1] - 1)) - 1]) {
          if (c_i > out_mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0], &dg_emlrtBCI,
              (emlrtCTX)sp);
          }

          st.site = &mg_emlrtRSI;
          int2str(&st, out_mmd->data[c_i - 1], nib_emlrtRSI.data,
                  nib_emlrtRSI.size);
          st.site = &mg_emlrtRSI;
          int2str(&st, n, nib_emlrtRSI.data, nib_emlrtRSI.size);
          if (c_i > out_mmd->size[0]) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, out_mmd->size[0], &ye_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (1 > out_mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, out_mmd->size[1], &al_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (2 > out_mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &al_emlrtBCI,
              (emlrtCTX)sp);
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
          emlrtBreakCheckR2012b((emlrtCTX)sp);
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
      if ((varargin_4_size[0] == 0) || (varargin_4_size[1] == 0)) {
        /*  First resuperimposed envelope is based on mdag-1 observations */
        /*  Notice that mmd(i,1) = m dagger */
        i = (int32_T)((real_T)Y->size[0] + (1.0 - (incre - 1.0)));
        emlrtForLoopVectorCheckR2021a(incre - 1.0, 1.0, Y->size[0],
          mxDOUBLE_CLASS, i, &hb_emlrtRTEI, (emlrtCTX)sp);
        ndecl = incre - 1.0;
        irank = 0;
        exitg2 = false;
        while ((!exitg2) && (irank <= i - 1)) {
          ndecl = (incre - 1.0) + (real_T)irank;

          /*  Compute theoretical envelopes based on tr observations */
          st.site = &lg_emlrtRSI;
          c_FSMenvmmd(&st, ndecl, v, init_contents, gmin1);
          i1 = (gmin1->size[0] - b_i) + 1;
          ii = (uint32_T)(b_i - 1);
          idx = 0;
          exitg3 = false;
          while ((!exitg3) && (idx <= i1)) {
            ii = ((uint32_T)b_i + idx) - 1U;

            /*  CHECK IF STOPPING RULE IS FULFILLED */
            /*  ii>=size(gmin1,1)-2 = final, penultimate or antepenultimate value */
            /*  of the resuperimposed envelope based on tr observations */
            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &af_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (((int32_T)ii < 1) || ((int32_T)ii > out_mmd->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out_mmd->size[0],
                &sj_emlrtBCI, (emlrtCTX)sp);
            }

            if (((int32_T)ii < 1) || ((int32_T)ii > gmin1->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, gmin1->size[0],
                &tj_emlrtBCI, (emlrtCTX)sp);
            }

            if ((c99 < 1) || (c99 > gmin1->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c99, 1, gmin1->size[1], &tj_emlrtBCI,
                (emlrtCTX)sp);
            }

            d = out_mmd->data[((int32_T)ii + out_mmd->size[0]) - 1];
            if ((d > gmin1->data[((int32_T)ii + gmin1->size[0] * (c99 - 1)) - 1])
                && ((int32_T)ii >= gmin1->size[0] - 2)) {
              /*  Condition S1 */
              if (((int32_T)ii < 1) || ((int32_T)ii > out_mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out_mmd->size[0],
                  &bk_emlrtBCI, (emlrtCTX)sp);
              }

              st.site = &kg_emlrtRSI;
              int2str(&st, out_mmd->data[(int32_T)ii - 1], nib_emlrtRSI.data,
                      nib_emlrtRSI.size);
              st.site = &kg_emlrtRSI;
              int2str(&st, ndecl, nib_emlrtRSI.data, nib_emlrtRSI.size);
              sto = 1;
              exitg3 = true;
            } else {
              guard1 = false;
              if ((int32_T)ii < gmin1->size[0] - 2) {
                if (2 > out_mmd->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1],
                    &bf_emlrtBCI, (emlrtCTX)sp);
                }

                if (((int32_T)ii < 1) || ((int32_T)ii > out_mmd->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out_mmd->size[0],
                    &ck_emlrtBCI, (emlrtCTX)sp);
                }

                if (((int32_T)ii < 1) || ((int32_T)ii > gmin1->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, gmin1->size[0],
                    &dk_emlrtBCI, (emlrtCTX)sp);
                }

                if ((c999 < 1) || (c999 > gmin1->size[1])) {
                  emlrtDynamicBoundsCheckR2012b(c999, 1, gmin1->size[1],
                    &dk_emlrtBCI, (emlrtCTX)sp);
                }

                if (d > gmin1->data[((int32_T)ii + gmin1->size[0] * (c999 - 1))
                    - 1]) {
                  /*  Condition S2 */
                  if (((int32_T)ii < 1) || ((int32_T)ii > out_mmd->size[0])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out_mmd->size
                      [0], &ek_emlrtBCI, (emlrtCTX)sp);
                  }

                  st.site = &jg_emlrtRSI;
                  int2str(&st, out_mmd->data[(int32_T)ii - 1], nib_emlrtRSI.data,
                          nib_emlrtRSI.size);
                  st.site = &jg_emlrtRSI;
                  int2str(&st, ndecl, nib_emlrtRSI.data, nib_emlrtRSI.size);
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
                idx++;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b((emlrtCTX)sp);
                }
              }
            }
          }

          /*  The following is the only one non graphical instruction */
          if (sto == 1) {
            exitg2 = true;
          } else {
            irank++;
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
        /*  m*=mmd(ii,1) */
        /*  Condition H2 */
        /*  Check if stopping rule takes place at m* <m^\dagger+k */
        if (((int32_T)ii < 1) || ((int32_T)ii > out_mmd->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)ii, 1, out_mmd->size[0],
            &bj_emlrtBCI, (emlrtCTX)sp);
        }

        if (out_mmd->data[(int32_T)ii - 1] < ndecl - 1.0) {
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
                &cf_emlrtBCI, (emlrtCTX)sp);
            }

            i = (int32_T)ii - 1;
            if (gmin1->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(gmin1->size[0], 1, gmin1->size[0],
                &df_emlrtBCI, (emlrtCTX)sp);
            }

            i1 = gmin1->size[0] - 1;
            if (((int32_T)(ii + 1U) < 1) || ((int32_T)(ii + 1U) > out_mmd->size
                 [0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(ii + 1U), 1, out_mmd->
                size[0], &ff_emlrtBCI, (emlrtCTX)sp);
            }

            k = (int32_T)ii - 1;
            if ((gmin1->size[0] < 1) || (gmin1->size[0] > out_mmd->size[0])) {
              emlrtDynamicBoundsCheckR2012b(gmin1->size[0], 1, out_mmd->size[0],
                &gf_emlrtBCI, (emlrtCTX)sp);
            }

            a = gmin1->size[0];
          }

          if (4 > gmin1->size[1]) {
            emlrtDynamicBoundsCheckR2012b(4, 1, gmin1->size[1], &ef_emlrtBCI,
              (emlrtCTX)sp);
          }

          if (2 > out_mmd->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &hf_emlrtBCI,
              (emlrtCTX)sp);
          }

          loop_ub = i1 - i;
          i1 = (a - k) - 1;
          if (loop_ub != i1) {
            emlrtSizeEqCheck1DR2012b(loop_ub, i1, &p_emlrtECI, (emlrtCTX)sp);
          }

          st.site = &ig_emlrtRSI;
          i1 = x->size[0];
          x->size[0] = loop_ub;
          emxEnsureCapacity_boolean_T(&st, x, i1, &eh_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            x->data[i1] = (gmin1->data[((i + i1) + gmin1->size[0] * 3) + 1] >
                           out_mmd->data[((k + i1) + out_mmd->size[0]) + 1]);
          }

          b_st.site = &mm_emlrtRSI;
          c_st.site = &te_emlrtRSI;
          irank = combineVectorElements(&c_st, x);
          if (irank > 0) {
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
                  gmin1->size[0], &if_emlrtBCI, (emlrtCTX)sp);
              }

              i = b_i - 1;
              if (gmin1->size[0] < 1) {
                emlrtDynamicBoundsCheckR2012b(gmin1->size[0], 1, gmin1->size[0],
                  &jf_emlrtBCI, (emlrtCTX)sp);
              }

              i1 = gmin1->size[0] - 1;
              if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) >
                   gmin1->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1,
                  gmin1->size[0], &lf_emlrtBCI, (emlrtCTX)sp);
              }

              k = b_i - 1;
              if (gmin1->size[0] < 1) {
                emlrtDynamicBoundsCheckR2012b(gmin1->size[0], 1, gmin1->size[0],
                  &mf_emlrtBCI, (emlrtCTX)sp);
              }

              a = gmin1->size[0] - 1;
              if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) >
                   out_mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1,
                  out_mmd->size[0], &of_emlrtBCI, (emlrtCTX)sp);
              }

              irank = b_i - 1;
              if ((gmin1->size[0] < 1) || (gmin1->size[0] > out_mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b(gmin1->size[0], 1, out_mmd->size[0],
                  &pf_emlrtBCI, (emlrtCTX)sp);
              }

              idx = gmin1->size[0];
            }

            if (4 > gmin1->size[1]) {
              emlrtDynamicBoundsCheckR2012b(4, 1, gmin1->size[1], &nf_emlrtBCI,
                (emlrtCTX)sp);
            }

            if (2 > out_mmd->size[1]) {
              emlrtDynamicBoundsCheckR2012b(2, 1, out_mmd->size[1], &qf_emlrtBCI,
                (emlrtCTX)sp);
            }

            loop_ub = a - k;
            a = (idx - irank) - 1;
            if (loop_ub != a) {
              emlrtSizeEqCheck1DR2012b(loop_ub, a, &q_emlrtECI, (emlrtCTX)sp);
            }

            if (1 > gmin1->size[1]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, gmin1->size[1], &kf_emlrtBCI,
                (emlrtCTX)sp);
            }

            st.site = &hg_emlrtRSI;
            a = x->size[0];
            x->size[0] = loop_ub;
            emxEnsureCapacity_boolean_T(&st, x, a, &jh_emlrtRTEI);
            for (a = 0; a < loop_ub; a++) {
              x->data[a] = (gmin1->data[((k + a) + gmin1->size[0] * 3) + 1] >
                            out_mmd->data[((irank + a) + out_mmd->size[0]) + 1]);
            }

            b_st.site = &al_emlrtRSI;
            c_st.site = &bl_emlrtRSI;
            loop_ub = i1 - i;
            if (x->size[0] != loop_ub) {
              emlrtErrorWithMessageIdR2018a(&c_st, &gb_emlrtRTEI,
                "MATLAB:catenate:matrixDimensionMismatch",
                "MATLAB:catenate:matrixDimensionMismatch", 0);
            }

            emxInit_real_T(&c_st, &gfind, 2, &kh_emlrtRTEI, true);
            i1 = gfind->size[0] * gfind->size[1];
            gfind->size[0] = loop_ub;
            gfind->size[1] = 2;
            emxEnsureCapacity_real_T(&b_st, gfind, i1, &kh_emlrtRTEI);
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
            emxEnsureCapacity_boolean_T(sp, x, i, &lh_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              x->data[i] = (gfind->data[i + gfind->size[0]] > 0.0);
            }

            idx = x->size[0];
            for (c_i = 0; c_i < idx; c_i++) {
              if (x->data[c_i] && (c_i + 1 > gfind->size[0])) {
                emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, gfind->size[0],
                  &gc_emlrtBCI, (emlrtCTX)sp);
              }
            }

            /*  find maximum in the interval m^\dagger=mmd(i,1) to the step */
            /*  prior to the one where mmd goes below 1% envelope */
            loop_ub = gfind->size[0];
            i = x->size[0];
            x->size[0] = gfind->size[0];
            emxEnsureCapacity_boolean_T(sp, x, i, &lh_emlrtRTEI);
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

            emxInit_int32_T(sp, &r5, 1, &lh_emlrtRTEI, true);
            i = r5->size[0];
            r5->size[0] = a;
            emxEnsureCapacity_int32_T(sp, r5, i, &ah_emlrtRTEI);
            irank = 0;
            for (c_i = 0; c_i <= idx; c_i++) {
              if (x->data[c_i]) {
                r5->data[irank] = c_i + 1;
                irank++;
              }
            }

            if (1 > r5->size[0]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, r5->size[0], &rf_emlrtBCI,
                (emlrtCTX)sp);
            }

            emxFree_int32_T(&r5);
            if (1 > out_mmd->size[0]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, out_mmd->size[0], &sf_emlrtBCI,
                (emlrtCTX)sp);
            }

            loop_ub = gfind->size[0];
            i = x->size[0];
            x->size[0] = gfind->size[0];
            emxEnsureCapacity_boolean_T(sp, x, i, &lh_emlrtRTEI);
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

            emxInit_int32_T(sp, &r6, 1, &lh_emlrtRTEI, true);
            i = r6->size[0];
            r6->size[0] = a;
            emxEnsureCapacity_int32_T(sp, r6, i, &ah_emlrtRTEI);
            irank = 0;
            for (c_i = 0; c_i <= idx; c_i++) {
              if (x->data[c_i]) {
                r6->data[irank] = c_i + 1;
                irank++;
              }
            }

            d = gfind->data[r6->data[0] - 1] - out_mmd->data[0];
            emxFree_int32_T(&r6);
            if (b_i > d) {
              i = 0;
              i1 = 0;
            } else {
              if ((b_i < 1) || (b_i > out_mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b(b_i, 1, out_mmd->size[0],
                  &tf_emlrtBCI, (emlrtCTX)sp);
              }

              i = b_i - 1;
              if (d != (int32_T)muDoubleScalarFloor(d)) {
                emlrtIntegerCheckR2012b(d, &u_emlrtDCI, (emlrtCTX)sp);
              }

              if (((int32_T)d < 1) || ((int32_T)d > out_mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, out_mmd->size[0],
                  &uf_emlrtBCI, (emlrtCTX)sp);
              }

              i1 = (int32_T)d;
            }

            loop_ub = i1 - i;
            i1 = gfind->size[0] * gfind->size[1];
            gfind->size[0] = loop_ub;
            gfind->size[1] = 2;
            emxEnsureCapacity_real_T(sp, gfind, i1, &mh_emlrtRTEI);
            for (i1 = 0; i1 < 2; i1++) {
              for (k = 0; k < loop_ub; k++) {
                if (i1 + 1 > out_mmd->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(i1 + 1, 1, out_mmd->size[1],
                    &lk_emlrtBCI, (emlrtCTX)sp);
                }

                gfind->data[k + gfind->size[0] * i1] = out_mmd->data[(i + k) +
                  out_mmd->size[0] * i1];
              }
            }

            st.site = &gg_emlrtRSI;
            d_sortrows(&st, gfind);
            if (gfind->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(gfind->size[0], 1, gfind->size[0],
                &vf_emlrtBCI, (emlrtCTX)sp);
            }

            /*  tr is redefined and is associated with the step associated to */
            /*  the maximum value of d_min */
            /*  try=sormcl[rows(sormcl),1]+1; */
            ndecl = gfind->data[gfind->size[0] - 1] + 1.0;
            emxFree_real_T(&gfind);
          }
        }

        ndecl = ((real_T)Y->size[0] - ndecl) + 1.0;
      } else {
        if ((b_i < 1) || (b_i > out_mmd->size[0])) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, out_mmd->size[0], &mg_emlrtBCI,
            (emlrtCTX)sp);
        }

        ndecl = (real_T)Y->size[0] - out_mmd->data[b_i - 1];
      }
    } else {
      ndecl = 0.0;
    }

    emxFree_real_T(&gmin1);

    /*  End of the forward search */
    emxInit_real_T(sp, &outliers, 1, &rh_emlrtRTEI, true);
    if (ndecl > 0.0) {
      /*  Now find the list of the units declared as outliers */
      /*  bsel=~isnan(bb(:,tr-init+1)); */
      /*  ListOut=setdiff(1:n,bsel,1); */
      if (Y->size[0] < 5000) {
        d = (real_T)out_cov->size[1] - ndecl;
        if (d != (int32_T)muDoubleScalarFloor(d)) {
          emlrtIntegerCheckR2012b(d, &v_emlrtDCI, (emlrtCTX)sp);
        }

        if (((int32_T)d < 1) || ((int32_T)d > out_cov->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, out_cov->size[1],
            &wf_emlrtBCI, (emlrtCTX)sp);
        }

        loop_ub = out_cov->size[0];
        i = bs->size[0];
        bs->size[0] = out_cov->size[0];
        emxEnsureCapacity_real_T(sp, bs, i, &yg_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          bs->data[i] = out_cov->data[i + out_cov->size[0] * ((int32_T)d - 1)];
        }

        i = x->size[0];
        x->size[0] = bs->size[0];
        emxEnsureCapacity_boolean_T(sp, x, i, &bh_emlrtRTEI);
        loop_ub = bs->size[0];
        for (i = 0; i < loop_ub; i++) {
          x->data[i] = muDoubleScalarIsNaN(bs->data[i]);
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
        emxEnsureCapacity_real_T(sp, outliers, i, &ah_emlrtRTEI);
        irank = 0;
        for (b_i = 0; b_i <= idx; b_i++) {
          if (x->data[b_i]) {
            if (b_i + 1 > seq->size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                &lj_emlrtBCI, (emlrtCTX)sp);
            }

            outliers->data[irank] = seq->data[b_i];
            irank++;
          }
        }
      } else {
        emxInit_real_T(sp, &a__1, 2, &ah_emlrtRTEI, true);
        st.site = &fg_emlrtRSI;
        FSMbsb(&st, Y, bs, (real_T)Y->size[0] - ndecl, (real_T)Y->size[0] -
               ndecl, a__1, out_cov);
        i = r->size[0] * r->size[1];
        r->size[0] = out_cov->size[0];
        r->size[1] = out_cov->size[1];
        emxEnsureCapacity_boolean_T(sp, r, i, &xg_emlrtRTEI);
        loop_ub = out_cov->size[0] * out_cov->size[1];
        emxFree_real_T(&a__1);
        for (i = 0; i < loop_ub; i++) {
          r->data[i] = muDoubleScalarIsNaN(out_cov->data[i]);
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
        emxEnsureCapacity_real_T(sp, outliers, i, &ah_emlrtRTEI);
        irank = 0;
        for (b_i = 0; b_i <= idx; b_i++) {
          if (r->data[b_i]) {
            if ((b_i + 1 < 1) || (b_i + 1 > seq->size[0])) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                &yj_emlrtBCI, (emlrtCTX)sp);
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
          emlrtIntegerCheckR2012b(outliers->data[i], &bb_emlrtDCI, (emlrtCTX)sp);
        }

        if (i1 > Y->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, Y->size[0], &pj_emlrtBCI,
            (emlrtCTX)sp);
        }
      }
    } else {
      i = outliers->size[0];
      outliers->size[0] = 1;
      emxEnsureCapacity_real_T(sp, outliers, i, &wg_emlrtRTEI);
      outliers->data[0] = rtNaN;
    }

    emxFree_boolean_T(&x);

    /* compute locatione and covariance matrix */
    if (Y->size[0] < 1) {
      loc->size[0] = 1;
      loc->size[1] = 0;
    } else {
      i = loc->size[0] * loc->size[1];
      loc->size[0] = 1;
      loc->size[1] = Y->size[0];
      emxEnsureCapacity_real_T(sp, loc, i, &oc_emlrtRTEI);
      loop_ub = Y->size[0] - 1;
      for (i = 0; i <= loop_ub; i++) {
        loc->data[i] = (real_T)i + 1.0;
      }
    }

    st.site = &eg_emlrtRSI;
    b_st.site = &deb_emlrtRSI;
    c_st.site = &tdb_emlrtRSI;
    b_do_vectors(&c_st, loc, outliers, goodobs, ia, &irank);
    loop_ub = Y->size[1];
    i = b_Y->size[0] * b_Y->size[1];
    b_Y->size[0] = goodobs->size[1];
    b_Y->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(sp, b_Y, i, &ch_emlrtRTEI);
    emxFree_int32_T(&ia);
    for (i = 0; i < loop_ub; i++) {
      irank = goodobs->size[1];
      for (i1 = 0; i1 < irank; i1++) {
        if (goodobs->data[i1] != (int32_T)muDoubleScalarFloor(goodobs->data[i1]))
        {
          emlrtIntegerCheckR2012b(goodobs->data[i1], &ab_emlrtDCI, (emlrtCTX)sp);
        }

        k = (int32_T)goodobs->data[i1];
        if ((k < 1) || (k > Y->size[0])) {
          emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &si_emlrtBCI,
            (emlrtCTX)sp);
        }

        b_Y->data[i1 + b_Y->size[0] * i] = Y->data[(k + Y->size[0] * i) - 1];
      }
    }

    st.site = &dg_emlrtRSI;
    b_mean(&st, b_Y, loc);
    loop_ub = Y->size[1];
    i = b_Y->size[0] * b_Y->size[1];
    b_Y->size[0] = goodobs->size[1];
    b_Y->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(sp, b_Y, i, &dh_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      irank = goodobs->size[1];
      for (i1 = 0; i1 < irank; i1++) {
        k = (int32_T)goodobs->data[i1];
        if ((k < 1) || (k > Y->size[0])) {
          emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &hj_emlrtBCI,
            (emlrtCTX)sp);
        }

        b_Y->data[i1 + b_Y->size[0] * i] = Y->data[(k + Y->size[0] * i) - 1];
      }
    }

    st.site = &cg_emlrtRSI;
    cov(&st, b_Y, out_cov);
    st.site = &bg_emlrtRSI;
    mahalFS(&st, Y, loc, out_cov, bs);

    /*  Scatter plot matrix with the outliers shown with a different symbol */
    /*  Structure returned by function FSM */
    /*  If you wish that the output also contains the list of units not declared */
    /*  as outliers, please uncomment the two following lines. */
    /* ListIn=seq(~isnan(bb(:,end-ndecl))); */
    /* out.ListIn=ListIn; */
    i = out_outliers->size[0] * out_outliers->size[1];
    out_outliers->size[0] = outliers->size[0];
    out_outliers->size[1] = 1;
    emxEnsureCapacity_real_T(sp, out_outliers, i, &fh_emlrtRTEI);
    loop_ub = outliers->size[0];
    for (i = 0; i < loop_ub; i++) {
      out_outliers->data[i] = outliers->data[i];
    }

    emxFree_real_T(&outliers);
    i = out_loc->size[0] * out_loc->size[1];
    out_loc->size[0] = 1;
    out_loc->size[1] = loc->size[1];
    emxEnsureCapacity_real_T(sp, out_loc, i, &gh_emlrtRTEI);
    loop_ub = loc->size[1];
    for (i = 0; i < loop_ub; i++) {
      out_loc->data[i] = loc->data[i];
    }

    i = out_md->size[0] * out_md->size[1];
    out_md->size[0] = bs->size[0];
    out_md->size[1] = 1;
    emxEnsureCapacity_real_T(sp, out_md, i, &hh_emlrtRTEI);
    loop_ub = bs->size[0];
    for (i = 0; i < loop_ub; i++) {
      out_md->data[i] = bs->data[i];
    }

    if ((varargin_4_size[0] == 0) || (varargin_4_size[1] == 0)) {
      out_nout_size[0] = nout_size_idx_0;
      out_nout_size[1] = nout_size_idx_1;
      loop_ub = nout_size_idx_0 * nout_size_idx_1;
      for (i = 0; i < loop_ub; i++) {
        out_nout_data[i] = nout_data[i];
      }
    } else {
      out_nout_size[0] = 1;
      out_nout_size[1] = 1;
      out_nout_data[0] = rtNaN;
    }

    out_class_size[0] = 1;
    out_class_size[1] = 3;
    out_class_data[0] = 'F';
    out_class_data[1] = 'S';
    out_class_data[2] = 'M';
  }

  emxFree_real_T(&b_bs);
  emxFree_real_T(&b_Y);
  emxFree_boolean_T(&r);
  emxFree_real_T(&loc);
  emxFree_real_T(&goodobs);
  emxFree_real_T(&bs);
  emxFree_real_T(&seq);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (FSM.c) */
