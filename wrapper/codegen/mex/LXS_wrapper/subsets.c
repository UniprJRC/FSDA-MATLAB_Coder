/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * subsets.c
 *
 * Code generation for function 'subsets'
 *
 */

/* Include files */
#include "subsets.h"
#include "LXS_wrapper_data.h"
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_mexutil.h"
#include "LXS_wrapper_types.h"
#include "bc.h"
#include "colon.h"
#include "error.h"
#include "find.h"
#include "indexShapeCheck.h"
#include "isequal.h"
#include "lexunrank.h"
#include "pascal.h"
#include "randperm.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo we_emlrtRSI = {
    349,                                                  /* lineNo */
    "subsets",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pathName */
};

static emlrtRSInfo xe_emlrtRSI = {
    361,                                                  /* lineNo */
    "subsets",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pathName */
};

static emlrtRSInfo ye_emlrtRSI = {
    431,                                                  /* lineNo */
    "subsets",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pathName */
};

static emlrtRSInfo af_emlrtRSI = {
    435,                                                  /* lineNo */
    "subsets",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pathName */
};

static emlrtRSInfo bf_emlrtRSI = {
    455,                                                  /* lineNo */
    "subsets",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pathName */
};

static emlrtRSInfo cf_emlrtRSI = {
    457,                                                  /* lineNo */
    "subsets",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pathName */
};

static emlrtRSInfo df_emlrtRSI = {
    460,                                                  /* lineNo */
    "subsets",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pathName */
};

static emlrtRSInfo ef_emlrtRSI = {
    92,                                                   /* lineNo */
    "combsFS",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pathName */
};

static emlrtRSInfo ff_emlrtRSI = {
    103,                                                  /* lineNo */
    "combsFS",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pathName */
};

static emlrtRSInfo gf_emlrtRSI = {
    109,                                                  /* lineNo */
    "combsFS",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pathName */
};

static emlrtRSInfo hf_emlrtRSI = {
    123,                                                  /* lineNo */
    "combsFS",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pathName */
};

static emlrtRSInfo jf_emlrtRSI = {
    168,                                                       /* lineNo */
    "randsampleFS",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\randsampleFS.m" /* pathName */
};

static emlrtRSInfo tf_emlrtRSI = {
    341,                                                    /* lineNo */
    "lexunrank",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m" /* pathName */
};

static emlrtMCInfo f_emlrtMCI = {
    304,                                                  /* lineNo */
    9,                                                    /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtMCInfo g_emlrtMCI = {
    306,                                                  /* lineNo */
    5,                                                    /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtMCInfo h_emlrtMCI = {
    369,                                                  /* lineNo */
    9,                                                    /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtMCInfo i_emlrtMCI = {
    370,                                                  /* lineNo */
    9,                                                    /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtMCInfo j_emlrtMCI = {
    339,                                                  /* lineNo */
    17,                                                   /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtMCInfo k_emlrtMCI = {
    341,                                                  /* lineNo */
    13,                                                   /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    341,                                                     /* lineNo */
    32,                                                      /* colNo */
    "pascalM",                                               /* aName */
    "lexunrank",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    341,                                                     /* lineNo */
    27,                                                      /* colNo */
    "pascalM",                                               /* aName */
    "lexunrank",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    341,                                                     /* lineNo */
    25,                                                      /* colNo */
    "pascalM",                                               /* aName */
    "lexunrank",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtRTEInfo o_emlrtRTEI = {
    338,                                                    /* lineNo */
    14,                                                     /* colNo */
    "lexunrank",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m" /* pName */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    119,                                                   /* lineNo */
    31,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    119,                                                   /* lineNo */
    23,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    119,                                                   /* lineNo */
    23,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    119,                                                   /* lineNo */
    15,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    119,                                                   /* lineNo */
    15,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtECInfo e_emlrtECI = {
    -1,                                                   /* nDims */
    118,                                                  /* lineNo */
    13,                                                   /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    118,                                                   /* lineNo */
    35,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    118,                                                   /* lineNo */
    31,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    118,                                                   /* lineNo */
    23,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    118,                                                   /* lineNo */
    23,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    118,                                                   /* lineNo */
    15,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    118,                                                   /* lineNo */
    15,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    118,                                                   /* lineNo */
    59,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    118,                                                   /* lineNo */
    55,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    118,                                                   /* lineNo */
    50,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    118,                                                   /* lineNo */
    50,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    118,                                                   /* lineNo */
    42,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    118,                                                   /* lineNo */
    42,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    113,                                                   /* lineNo */
    21,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    113,                                                   /* lineNo */
    13,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    113,                                                   /* lineNo */
    13,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    113,                                                   /* lineNo */
    11,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo f_emlrtECI = {
    -1,                                                   /* nDims */
    109,                                                  /* lineNo */
    5,                                                    /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtBCInfo kb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    109,                                                   /* lineNo */
    17,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    109,                                                   /* lineNo */
    9,                                                     /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    109,                                                   /* lineNo */
    7,                                                     /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtRTEInfo p_emlrtRTEI = {
    114,                                                  /* lineNo */
    17,                                                   /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI = {
    110,                                                  /* lineNo */
    13,                                                   /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtECInfo g_emlrtECI = {
    -1,                                                   /* nDims */
    462,                                                  /* lineNo */
    13,                                                   /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtBCInfo nb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    462,                                                   /* lineNo */
    15,                                                    /* colNo */
    "C",                                                   /* aName */
    "subsets",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtRTEInfo r_emlrtRTEI = {
    451,                                                  /* lineNo */
    15,                                                   /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtDCInfo n_emlrtDCI = {
    105,                                                   /* lineNo */
    15,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = {
    105,                                                   /* lineNo */
    15,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    4                                                      /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = {
    449,                                                   /* lineNo */
    17,                                                    /* colNo */
    "subsets",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = {
    449,                                                   /* lineNo */
    17,                                                    /* colNo */
    "subsets",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m", /* pName */
    4                                                      /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    457,                                                   /* lineNo */
    37,                                                    /* colNo */
    "rndsi",                                               /* aName */
    "subsets",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    455,                                                   /* lineNo */
    37,                                                    /* colNo */
    "rndsi",                                               /* aName */
    "subsets",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = {
    349,                                                   /* lineNo */
    5,                                                     /* colNo */
    "subsets",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    123,                                                   /* lineNo */
    32,                                                    /* colNo */
    "v",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = {
    123,                                                   /* lineNo */
    32,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    363,                                                   /* lineNo */
    15,                                                    /* colNo */
    "C",                                                   /* aName */
    "subsets",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = {
    363,                                                   /* lineNo */
    15,                                                    /* colNo */
    "subsets",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    353,                                                     /* lineNo */
    9,                                                       /* colNo */
    "kcomb",                                                 /* aName */
    "lexunrank",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    356,                                                     /* lineNo */
    27,                                                      /* colNo */
    "pascalM",                                               /* aName */
    "lexunrank",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtRTEInfo ve_emlrtRTEI = {
    293,                                                  /* lineNo */
    1,                                                    /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtRTEInfo we_emlrtRTEI = {
    442,                                                  /* lineNo */
    13,                                                   /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = {
    443,                                                  /* lineNo */
    13,                                                   /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = {
    449,                                                  /* lineNo */
    11,                                                   /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtRTEInfo af_emlrtRTEI = {
    69,                                                   /* lineNo */
    5,                                                    /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = {
    69,                                                   /* lineNo */
    1,                                                    /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = {
    96,                                                   /* lineNo */
    9,                                                    /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtRTEInfo df_emlrtRTEI = {
    349,                                                  /* lineNo */
    5,                                                    /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = {
    109,                                                  /* lineNo */
    22,                                                   /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = {
    439,                                                  /* lineNo */
    17,                                                   /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = {
    118,                                                  /* lineNo */
    40,                                                   /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = {
    363,                                                  /* lineNo */
    13,                                                   /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtRTEInfo if_emlrtRTEI = {
    363,                                                  /* lineNo */
    9,                                                    /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = {
    455,                                                  /* lineNo */
    21,                                                   /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = {
    394,                                                  /* lineNo */
    21,                                                   /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = {
    414,                                                  /* lineNo */
    21,                                                   /* colNo */
    "subsets",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pName */
};

static emlrtRSInfo lhb_emlrtRSI = {
    339,                                                  /* lineNo */
    "subsets",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pathName */
};

static emlrtRSInfo mhb_emlrtRSI = {
    341,                                                  /* lineNo */
    "subsets",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pathName */
};

static emlrtRSInfo nhb_emlrtRSI = {
    370,                                                  /* lineNo */
    "subsets",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pathName */
};

static emlrtRSInfo gib_emlrtRSI = {
    369,                                                  /* lineNo */
    "subsets",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pathName */
};

static emlrtRSInfo hib_emlrtRSI = {
    306,                                                  /* lineNo */
    "subsets",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pathName */
};

static emlrtRSInfo iib_emlrtRSI = {
    304,                                                  /* lineNo */
    "subsets",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\subsets.m" /* pathName */
};

/* Function Declarations */
static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[50]);

static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[60]);

static const mxArray *k_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[39]);

/* Function Definitions */
static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[50])
{
  static const int32_T iv[2] = {1, 50};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 50, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[60])
{
  static const int32_T iv[2] = {1, 60};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 60, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *k_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[39])
{
  static const int32_T iv[2] = {1, 39};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 39, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

void subsets(const emlrtStack *sp, real_T nsamp, real_T n, real_T p,
             real_T ncomb, boolean_T msg, emxArray_real_T *C, real_T *nselected)
{
  static const int32_T iv[2] = {1, 89};
  static const int32_T iv1[2] = {1, 25};
  static const int32_T iv2[2] = {1, 63};
  static const char_T u[89] = {
      'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ', 'n', 'u', 'm', 'b', 'e', 'r',
      ' ', 'o', 'f', ' ', 's', 'u', 'b', 's', 'e', 't', 's', ' ', 'w', 'h', 'i',
      'c', 'h', ' ', 'h', 'a', 'v', 'e', ' ', 'b', 'e', 'e', 'n', ' ', 'c', 'h',
      'o', 's', 'e', 'n', ' ', 'a', 'r', 'e', ' ', 'g', 'r', 'e', 'a', 't', 'e',
      'r', ' ', 't', 'h', 'a', 'n', ' ', 't', 'h', 'e', 'i', 'r', ' ', 'p', 'o',
      's', 's', 'i', 'b', 'i', 'l', 'e', ' ', 'n', 'u', 'm', 'b', 'e', 'r'};
  static const char_T c_u[63] = {
      'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ', 'y', 'o', 'u', ' ',
      'h', 'a', 'v', 'e', ' ', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'e',
      'd', ' ', 't', 'o', ' ', 'e', 'x', 't', 'r', 'a', 'c', 't', ' ',
      'm', 'o', 'r', 'e', ' ', 't', 'h', 'a', 'n', ' ', '1', '0', '0',
      '0', '0', '0', ' ', 's', 'u', 'b', 's', 'e', 't', 's'};
  static const char_T b_cv1[60] = {
      'T', 'h', 'e', ' ', 'p', 'r', 'o', 'b', 'l', 'e', 'm', ' ',
      'i', 's', ' ', 'c', 'o', 'm', 'b', 'i', 'n', 'a', 't', 'o',
      'r', 'i', 'a', 'l', ' ', 'a', 'n', 'd', ' ', 't', 'h', 'e',
      ' ', 'r', 'u', 'n', ' ', 'm', 'a', 'y', ' ', 'b', 'e', ' ',
      'v', 'e', 'r', 'y', ' ', 'l', 'e', 'n', 'g', 't', 'h', 'y'};
  static const char_T b_cv[50] = {
      'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ', 'y', 'o', 'u', ' ',
      'h', 'a', 'v', 'e', ' ', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'e',
      'd', ' ', 't', 'o', ' ', 'e', 'x', 't', 'r', 'a', 'c', 't', ' ',
      'a', 'l', 'l', ' ', 's', 'u', 'b', 's', 'e', 't', 's'};
  static const char_T b_cv2[39] = {
      'T', 'o', ' ', 'i', 't', 'e', 'r', 'a', 't', 'e', ' ', 's', 'o',
      ' ', 'm', 'a', 'n', 'y', ' ', 't', 'i', 'm', 'e', 's', ' ', 'm',
      'a', 'y', ' ', 'b', 'e', ' ', 'l', 'e', 'n', 'g', 't', 'h', 'y'};
  static const char_T b_u[25] = {'A', 'l', 'l', ' ', 's', 'u', 'b', 's', 'e',
                                 't', 's', ' ', 'a', 'r', 'e', ' ', 'e', 'x',
                                 't', 'r', 'a', 'c', 't', 'e', 'd'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_boolean_T pascalM_data;
  emxArray_real_T *b_seq;
  emxArray_real_T *pascalM;
  emxArray_real_T *s;
  emxArray_real_T *seq;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T N_kk;
  real_T b_j;
  real_T d;
  real_T fromRow;
  real_T kk;
  real_T maxx;
  real_T toRow;
  int32_T c_seq[2];
  int32_T iv3[2];
  int32_T b_i;
  int32_T b_kk;
  int32_T b_n;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T ii_data;
  int32_T j;
  int32_T loop_ub;
  int32_T pascalM_size;
  boolean_T b_pascalM_data[20000];
  boolean_T usepascal;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* subsets creates a matrix of indexes where rows are distinct p-subsets
   * extracted from a set of n elements */
  /*  */
  /* <a href="matlab: docsearchFS('subsets')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*        nsamp : Number of subsamples which have to be extracted. Scalar; */
  /*                if nsamp=0 all subsets will be extracted; they will be (n */
  /*                choose p). */
  /*                Data Types - single|double */
  /*  */
  /*          n   : Number of observations of the dataset. Scalar. */
  /*                Data Types - single|double */
  /*  */
  /*          p   : Size of the subsets. Scalar. In regression with p */
  /*                explanatory variable the size of the elmental subsets is p;
   */
  /*                in multivariate analysis, in presence of v variables, */
  /*                the size of the elemental subsets is v+1. */
  /*                Data Types - single|double */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*        ncomb : scalar (n choose p). If the user has already computed this
   */
  /*                value it can supply it directly, otherwise the program will
   */
  /*                calculate it automatically. */
  /*                Example - C=subsets(20,10,3,120) */
  /*                Data Types - single|double */
  /*  */
  /*         msg  : scalar which controls whether to display or not messages */
  /*                on the screen. If msg=true (default), messages are displayed
   */
  /*                on the screen about estimated time. */
  /*                Example - C=subsets(20,10,3,120,0) */
  /*                Data Types - boolean */
  /*  */
  /*    method : Sampling methods. Scalar or vector. */
  /*             Methods used to extract the subsets. See section 'More About'
   */
  /*             of function randsampleFS.m for details about the sampling */
  /*             methods. Default is method = 1. */
  /*             - Scalar, from 0 to 3 determining the (random sample without */
  /*             replacement) method to be used. */
  /*             - Vector of weights: in such a case, Weighted Sampling Without
   */
  /*               Replacement is applied using that vector of weights. */
  /*             Example - randsampleFS(100,10,2) */
  /*             Data Types - single|double */
  /*  */
  /*  */
  /*   Output: */
  /*  */
  /*  */
  /*            C : The indices of the subsets which need to be extracted. */
  /*                Matrix with nselected rows and p columns (stored in int16
   * format). */
  /*                Data Types - single|double */
  /*  */
  /*    nselected : Number of rows of matrix C. Scalar. */
  /*                Data Types - single|double */
  /*  */
  /*  */
  /*  See also randsampleFS.m, lexunrank.m, bc.m */
  /*  */
  /*  References: */
  /*        See references in randsampleFS.m, lexunrank.m and bc.m. See also,
   * for */
  /*        weighted sampling, Pavlos S. Efraimidis, Paul G. Spirakis, Weighted
   */
  /*        random sampling with a reservoir, Information Processing Letters,
   * Volume */
  /*        97, Issue 5, 16 March 2006, Pages 181-185. */
  /*  */
  /*        Wong, C.K. and M.C. Easton (1980) "An Efficient Method for Weighted
   */
  /*        Sampling Without Replacement", SIAM Journal of Computing, */
  /*        9(1):111-113. */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('subsets')">Link to the help function</a> */
  /*  */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /*  */
  /* { */
  /*        %% Create a matrix with the indexes of 5 subsets when n=100, p=3. */
  /*        % Only default arguments used. */
  /*        C = subsets(5,100,3) */
  /* } */
  /* { */
  /*        %% Create a matrix with the indexes of 5 subsets when n=100, p=3. */
  /*        % Use information on the number of combinations to speed up
   * generation. */
  /*         ncomb = bc(100,3); */
  /*         C = subsets(5,100,3,ncomb) */
  /* } */
  /* { */
  /*        %% Create a matrix with the indexes of 5 subsets when n=100, p=3. */
  /*        % Also inform about the time taken for the operation. */
  /*         */
  /*        ncomb = bc(1000,5); */
  /*        C = subsets(500000,1000,5,ncomb,1); */
  /* } */
  /* { */
  /*        % Create a matrix with the indexes of 5 subsets when n=100, p=3. */
  /*        % As the previous example, but in addition returns in nselected the
   */
  /*        % number of combinations. */
  /*         */
  /*        ncomb = bc(1000,5); */
  /*        [C , nselected] = subsets(500000,1000,5,ncomb,1); */
  /* } */
  /* { */
  /*         % Extract 80000 subsets and check they are unique. */
  /*          */
  /*         C=subsets(80000,100,5); */
  /*         size(unique(C,'rows')) */
  /* } */
  /* { */
  /*     %% Sampling without replacement and the hypergeometric distribution. */
  /*  */
  /*     clear all; close all; */
  /*  */
  /*     % parameters */
  /*     n      = 100; */
  /*     p      = 3; */
  /*     nsamp  = 1000000; */
  /*     ncomb  = bc(n,p); */
  /*     msg    = 0; */
  /*      */
  /*     % Sampling without repetition nsamp p-subsets from a dataset of n
   * units. */
  /* 	C = subsets(nsamp, n, p, ncomb, msg); */
  /*     if verLessThan('matlab','8.4') */
  /*         hist(double(C(:))); xlim([1 n]); */
  /*     else */
  /*         histogram(double(C(:)),'Normalization','pdf','BinMethod','Integers');
   * xlim([1 n]); */
  /*         % this superimposes a line with the unit counts */
  /*         frC = tabulateFS(double(C(:))); */
  /*         hold on; plot(1:n,frC(:,3)/100,'r-','LineWidth',3); */
  /*     end */
  /*  */
  /*  */
  /*     % The hypergeometric distribution hygepdf(X,M,K,N) computes the
   * probability */
  /*     % of drawing exactly X of a possible K items in N drawings without */
  /*     % replacement from a group of M objects. For drawings with replacement,
   */
  /*     % the distribution would be binomial. */
  /*     hpdf = hygepdf(0:p,n,n/2,p); */
  /*  */
  /*     % Say that the n/2 target items (which determine the success of a draw)
   * are */
  /*     % in the subset formed by units 1,2,...n/2. Let's then count how many
   * times */
  /*     % we get units from this group. */
  /*     c   = C<=n/2; */
  /*     sc  = sum(c,2); */
  /*     tab = tabulateFS(sc); */
  /*     tab = (tab(:,2)/sum(tab(:,2)))'; */
  /*  */
  /*     disp('Probability of getting 0 to p successes in p drawns
   * (hypergeometric pdf):'); */
  /*     disp(hpdf); */
  /*     disp('Frequencies of the 0 to p successes in the p drawns (subsets
   * output):'); */
  /*     disp(tab); */
  /*  */
  /* } */
  /* { */
  /*     %% Weighted sampling without replacement and the non-central Wallenius
   * hypergeometric distribution. */
  /*  */
  /*     clear all; close all; */
  /*  */
  /*     % parameters */
  /*     n      = 500; */
  /*     p      = 3; */
  /*     nsamp  = 50000; */
  /*     ncomb  = bc(n,p); */
  /*     msg    = 0; */
  /*  */
  /*     % Sampling probability of the first n/2 units is 10 times larger than
   * the others n/2. */
  /*     method = [10*ones(n/2,1); ones(n/2,1)]; */
  /*     % no need to normalize weights: method = method(:)' / sum(method); */
  /*  */
  /* 	C = subsets(nsamp, n, p, ncomb, msg, method); */
  /*  */
  /*     if verLessThan('matlab','8.4') */
  /*         hist(double(C(:))); xlim([1 n]); */
  /*     else */
  /*         histogram(double(C(:)),'Normalization','pdf','BinMethod','Integers');
   */
  /*     end */
  /*  */
  /*     % Here we address the case when the sampling (without replacement) is
   * biased, */
  /*     % in the sense that the probabilities to select the units in the sample
   * are */
  /*     % proportional to weights provided using option 'method'. In this case,
   * the */
  /*     % extraction probabilities follow Wallenius' noncentral hypergeometric
   */
  /*     % distribution. The sampling scheme is the same of that of the
   * hypergeometric */
  /*     % distribution but, in addition, the success and failure are associated
   * with */
  /*     % weights w1 and w2 and we will say that the odds ratio is W = w1 / w2.
   * The */
  /*     % function is then called as: wpdf = WNChygepdf(x,N,K,M,W). */
  /*  */
  /*     for i = 0:p */
  /*         wpdf(i+1) = WNChygepdf(i,p,n/2,n,10); */
  /*     end */
  /*  */
  /*     % counts of the actual samples */
  /*     c   = C<=n/2; */
  /*     sc  = sum(c,2); */
  /*     tab = tabulateFS(sc); */
  /*     tab = (tab(:,2)/sum(tab(:,2)))'; */
  /*  */
  /*     disp('Probability of getting 0 to p successes in p weighted drawns
   * (non-central hypergeometric pdf):'); */
  /*     disp(wpdf); */
  /*     disp('Frequencies of the 0 to p successes in the p weighted drawns
   * (subsets output):'); */
  /*     disp(tab); */
  /*      */
  /*     % The non-central hypergeometric is also available in the R package */
  /*     % BiasedUrn. In the example above, where there are just two groups and
   * one */
  /*     % weight defining the ratio between the units in the two groups, the
   * function */
  /*     % to use is dWNCHypergeo (for Wallenius' distribution): */
  /*     % */
  /*     % dWNCHypergeo(c(0,1,2,3), 50, 50, 3, 10) */
  /*     % [1] 0.0007107089 0.0225823308 0.2296133830 0.7470935773 */
  /*     % */
  /*     % The general syntax of the function is: */
  /*     % dWNCHypergeo(x, m1, m2, n, odds) */
  /*     % x  = Number of red balls sampled. */
  /*     % m1 = Initial number of red balls in the urn. */
  /*     % m2 = Initial number of white balls in the urn. */
  /*     % n  = Total number of balls sampled. */
  /*     % N  = Total number of balls in urn before sampling. */
  /*     % odds = Probability ratio of red over white balls. */
  /*     % p = Cumulative probability. */
  /*     % nran = Number of random variates to generate. */
  /*     % mu = Mean x. */
  /*     % precision = Desired precision of calculation. */
  /*  */
  /* } */
  /* { */
  /*     % Weighted sampling without replacement, with negative weights. */
  /*  */
  /*     clear all; close all; */
  /*  */
  /*     n = 200; */
  /*     p = 3; */
  /*     nsamp = 10000; */
  /*     ncomb = bc(n,p); */
  /*     msg = 0; */
  /*     method = [-4*ones(n/4,1); -2*ones(n/4,1) ; -1*ones(n/4,1);
   * -4*ones(n/4,1)]; */
  /*     C = subsets(nsamp, n, p, ncomb, msg, method); */
  /*     if verLessThan('matlab','8.4') */
  /*         hist(double(C(:))); xlim([1 n]); */
  /*     else */
  /*         histogram(double(C(:)),'Normalization','pdf','BinMethod','Integers');
   */
  /*     end */
  /* } */
  /* { */
  /*     %% Function subset used in clustering or mixture modeling simulations.
   */
  /*  */
  /*     clear all; close all; */
  /*  */
  /*     % parameters */
  /*     n      = 100;       %number of units */
  /*     p      = 2;         %number of variables */
  /*     k      = 3;         %number of groups */
  /*     nsamp  = 500;       %number of samples */
  /*     ncomb  = bc(n,p); */
  /*     msg    = 0; */
  /*  */
  /*     % A dataset simulated using MixSim */
  /*     rng(372,'twister'); */
  /*     Q=MixSimreg(k,p,'BarOmega',0.001); */
  /*     [y,X,id]=simdatasetreg(n,Q.Pi,Q.Beta,Q.S,Q.Xdistrib); */
  /*  */
  /*     % Some user-defined weights for weighted sampling, provided as a vector
   * of "method" option. */
  /*     method = [1*ones(n/2,1); ones(n/2,1)]; */
  /*  */
  /*     % C must be a nsamp-by-k*p matrix, to contain the extraction of nsamp
   * p-combinations k times. */
  /*     % This can be easily done as follows: */
  /*     for i=1:k */
  /*         Ck(:,(i-1)*p+1:i*p) = subsets(nsamp, n, p, ncomb, msg, method); */
  /*     end */
  /*  */
  /*     % Ck is then provided, e.g., to tclustreg as follows: */
  /*     out=tclustreg(y,X,k,50,0.01,0.01,'nsamp',Ck); */
  /* } */
  /*  Beginning of code */
  /*  We cache the MATLAB memory information for better performance. */
  emxInit_real_T(sp, &seq, 2, &ve_emlrtRTEI, true);
  if (muDoubleScalarIsNaN(n)) {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = 1;
    emxEnsureCapacity_real_T(sp, seq, i, &ve_emlrtRTEI);
    seq->data[0] = rtNaN;
  } else if (n < 1.0) {
    seq->size[0] = 1;
    seq->size[1] = 0;
  } else if (muDoubleScalarIsInf(n) && (1.0 == n)) {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = 1;
    emxEnsureCapacity_real_T(sp, seq, i, &ve_emlrtRTEI);
    seq->data[0] = rtNaN;
  } else {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor(n - 1.0);
    seq->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(sp, seq, i, &ve_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      seq->data[i] = (real_T)i + 1.0;
    }
  }
  if (ncomb < nsamp) {
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 89, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &iib_emlrtRSI;
    disp(&st, y, &f_emlrtMCI);
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 25, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &hib_emlrtRSI;
    disp(&st, b_y, &g_emlrtMCI);
    nsamp = 0.0;
  }
  /*  this check is used in combination of randsampleFS, for computational */
  /*  efficiency */
  /*  Combinatorial part to extract the subsamples */
  /*  Key combinatorial variables used: */
  /*  C = matrix containing the indexes of the p-subsets. */
  /*  nselected = size(C,1), number of p-subsets to be selected. */
  /*  rndsi = vector of nselected indexes, randomly chosen between 1 e ncomb. */
  /*  Constants that determine the method used to extract the p-subsets */
  emxInit_real_T(sp, &pascalM, 2, &kf_emlrtRTEI, true);
  emxInit_real_T(sp, &s, 2, &lf_emlrtRTEI, true);
  emxInit_real_T(sp, &b_seq, 1, &cf_emlrtRTEI, true);
  if ((nsamp == 0.0) || (ncomb <= 5.0E+7)) {
    if (nsamp == 0.0) {
      if ((ncomb > 100000.0) && msg) {
        st.site = &lhb_emlrtRSI;
        disp(&st, h_emlrt_marshallOut(&st, b_cv), &j_emlrtMCI);
        st.site = &mhb_emlrtRSI;
        disp(&st, i_emlrt_marshallOut(&st, b_cv1), &k_emlrtMCI);
      }
      *nselected = ncomb;
    } else {
      *nselected = nsamp;
    }
    /*  If nsamp = 0 matrix C contains the indexes of all possible subsets */
    st.site = &we_emlrtRSI;
    /* combsFS is an iterative algorithm equivalent to the MATLAB combs.m */
    /*  */
    /*  It generates m-combinations without repetition taken in lexicographic */
    /*  order from the vector v. */
    /*  */
    /*  REMARK: the MATLAB function combs.m uses recursive calls and it is */
    /*  therefore very inefficient. Our iterative counterpart also makes better
     */
    /*  use of memory, first because it works iteratively, and then because we
     */
    /*  force computations in the lowest possible precision. This is not a */
    /*  limitation, because the algotithm first builds the matrix P of all */
    /*  m-combinations starting from the first n natural numbers, for which */
    /*  double precision is not at all needed. Then, if the input vector b is */
    /*  different from vector 1:v, then the desired P is simply obtained as P =
     */
    /*  v(P). Note also that we build the matrix P by going over colums rather
     */
    /*  than over lines. This is faster, as MATLAB indexes the elements of a */
    /*  matrix by column first. */
    /*  */
    /* <a href="matlab: docsearchFS('combsFS')">Link to the help function</a> */
    /*  */
    /*   Required input arguments: */
    /*  */
    /*     v:         A vector with n elements. It contains the response
     * variable. */
    /*                It can be either a row or a column vector. */
    /*                Data Types - single|double */
    /*  */
    /*     m:         Scalar. It specifies the size of the combinations. */
    /*                Data Types - single|double */
    /*  */
    /*  Optional input arguments: */
    /*  */
    /*  Output: */
    /*  */
    /*      P:        m-combinations without repetition taken in lexicographic
     */
    /*                order from the vector v. Matrix containing the */
    /*                m-combinations in the rows. */
    /*                Data Types - single|double */
    /*  */
    /*  See also: nchoosek */
    /*  */
    /*  References: */
    /*  */
    /*     Knuth, D. E. (1997). "The Art of Computer Programming", Volume 1: */
    /*     Fundamental Algorithms, Third ed. Addison-Wesley. [pp. 52--74]. */
    /*  */
    /*  Copyright 2008-2021. */
    /*  Written by FSDA team */
    /*  */
    /* <a href="matlab: docsearchFS('combsFS')">Link to the help function</a> */
    /*  */
    /*  */
    /* $LastChangedDate::                      $: Date of the last commit */
    /*  */
    /*  */
    /*  Examples: */
    /* { */
    /*     %% combsFS used to generate all possible combinations of size 3 of
     * elements 5, 8, 9, 10, 11. */
    /*     combsFS([5 8:11],3) */
    /* } */
    /*  Beginning of code */
    i = s->size[0] * s->size[1];
    s->size[0] = 1;
    s->size[1] = seq->size[1];
    emxEnsureCapacity_real_T(&st, s, i, &af_emlrtRTEI);
    loop_ub = seq->size[1];
    for (i = 0; i < loop_ub; i++) {
      s->data[i] = seq->data[i];
    }
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = s->size[1];
    emxEnsureCapacity_real_T(&st, seq, i, &bf_emlrtRTEI);
    loop_ub = s->size[1];
    for (i = 0; i < loop_ub; i++) {
      seq->data[i] = s->data[i];
    }
    /*  Make sure v is a row vector. */
    b_n = seq->size[1];
    /*  Elements of v. */
    if (p > seq->size[1]) {
      b_st.site = &ef_emlrtRSI;
      e_error(&b_st);
    } else if (seq->size[1] == p) {
      i = C->size[0] * C->size[1];
      C->size[0] = 1;
      C->size[1] = seq->size[1];
      emxEnsureCapacity_real_T(&st, C, i, &df_emlrtRTEI);
      loop_ub = seq->size[1];
      for (i = 0; i < loop_ub; i++) {
        C->data[i] = seq->data[i];
      }
    } else if (p == 1.0) {
      i = b_seq->size[0];
      b_seq->size[0] = seq->size[1];
      emxEnsureCapacity_real_T(&st, b_seq, i, &cf_emlrtRTEI);
      loop_ub = seq->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_seq->data[i] = seq->data[i];
      }
      i = C->size[0] * C->size[1];
      C->size[0] = seq->size[1];
      C->size[1] = 1;
      emxEnsureCapacity_real_T(&st, C, i, &df_emlrtRTEI);
      loop_ub = seq->size[1];
      for (i = 0; i < loop_ub; i++) {
        C->data[i] = b_seq->data[i];
      }
    } else if (p == 0.0) {
      C->size[0] = 0;
      C->size[1] = 0;
    } else {
      /* The binomial coefficient (n choose m) can be computed using */
      /* prod(np1-m:n)/prod(1:m). For large number of combinations */
      /* our function 'bc' is better. */
      b_st.site = &ff_emlrtRSI;
      maxx = bc(&b_st, seq->size[1], p);
      /*  initialise the matrix of all m-combinations */
      if (!(maxx >= 0.0)) {
        emlrtNonNegativeCheckR2012b(maxx, &o_emlrtDCI, &st);
      }
      d = (int32_T)muDoubleScalarFloor(maxx);
      if (maxx != d) {
        emlrtIntegerCheckR2012b(maxx, &n_emlrtDCI, &st);
      }
      i = C->size[0] * C->size[1];
      C->size[0] = (int32_T)maxx;
      C->size[1] = (int32_T)p;
      emxEnsureCapacity_real_T(&st, C, i, &df_emlrtRTEI);
      if (maxx != d) {
        emlrtIntegerCheckR2012b(maxx, &r_emlrtDCI, &st);
      }
      loop_ub = (int32_T)maxx * (int32_T)p;
      for (i = 0; i < loop_ub; i++) {
        C->data[i] = 0.0;
      }
      /*  do once here n+1 (needed in the internal loop) */
      toRow = ((real_T)seq->size[1] + 1.0) - p;
      /*  set the first n+1-m rows of the last column */
      if (1.0 > toRow) {
        i = 0;
      } else {
        if (1 > (int32_T)maxx) {
          emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)maxx, &mb_emlrtBCI, &st);
        }
        if (((int32_T)toRow < 1) || ((int32_T)toRow > (int32_T)maxx)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)toRow, 1, (int32_T)maxx,
                                        &lb_emlrtBCI, &st);
        }
        i = (int32_T)toRow;
      }
      if ((int32_T)p < 1) {
        emlrtDynamicBoundsCheckR2012b((int32_T)p, 1, (int32_T)p, &kb_emlrtBCI,
                                      &st);
      }
      b_st.site = &gf_emlrtRSI;
      c_st.site = &ge_emlrtRSI;
      if (muDoubleScalarIsNaN(p)) {
        i1 = s->size[0] * s->size[1];
        s->size[0] = 1;
        s->size[1] = 1;
        emxEnsureCapacity_real_T(&c_st, s, i1, &oc_emlrtRTEI);
        s->data[0] = rtNaN;
      } else if (seq->size[1] < p) {
        s->size[0] = 1;
        s->size[1] = 0;
      } else if (muDoubleScalarFloor(p) == p) {
        i1 = s->size[0] * s->size[1];
        s->size[0] = 1;
        s->size[1] = (int32_T)((real_T)seq->size[1] - p) + 1;
        emxEnsureCapacity_real_T(&c_st, s, i1, &oc_emlrtRTEI);
        loop_ub = (int32_T)((real_T)seq->size[1] - p);
        for (i1 = 0; i1 <= loop_ub; i1++) {
          s->data[i1] = p + (real_T)i1;
        }
      } else {
        d_st.site = &he_emlrtRSI;
        eml_float_colon(&d_st, p, seq->size[1], s);
      }
      i1 = b_seq->size[0];
      b_seq->size[0] = s->size[1];
      emxEnsureCapacity_real_T(&st, b_seq, i1, &ef_emlrtRTEI);
      loop_ub = s->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_seq->data[i1] = s->data[i1];
      }
      emlrtSubAssignSizeCheckR2012b(&i, 1, &b_seq->size[0], 1, &f_emlrtECI,
                                    &st);
      loop_ub = b_seq->size[0];
      for (i = 0; i < loop_ub; i++) {
        C->data[i + C->size[0] * ((int32_T)p - 1)] = b_seq->data[i];
      }
      i = (int32_T)(((-1.0 - (p - 1.0)) + 1.0) / -1.0);
      emlrtForLoopVectorCheckR2021a(p - 1.0, -1.0, 1.0, mxDOUBLE_CLASS, i,
                                    &q_emlrtRTEI, &st);
      for (b_i = 0; b_i < i; b_i++) {
        maxx = (p - 1.0) + -(real_T)b_i;
        /*  external loop over colums */
        N_kk = toRow;
        kk = toRow;
        /*  set the first n+1-m rows block of rows of colum i */
        if (1.0 > toRow) {
          loop_ub = 0;
        } else {
          if (1 > C->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, C->size[0], &jb_emlrtBCI, &st);
          }
          if (toRow != (int32_T)muDoubleScalarFloor(toRow)) {
            emlrtIntegerCheckR2012b(toRow, &m_emlrtDCI, &st);
          }
          if (((int32_T)toRow < 1) || ((int32_T)toRow > C->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)toRow, 1, C->size[0],
                                          &ib_emlrtBCI, &st);
          }
          loop_ub = (int32_T)toRow;
        }
        if (((int32_T)maxx < 1) || ((int32_T)maxx > C->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)maxx, 1, C->size[1],
                                        &hb_emlrtBCI, &st);
        }
        for (i1 = 0; i1 < loop_ub; i1++) {
          C->data[i1 + C->size[0] * ((int32_T)maxx - 1)] = maxx;
        }
        d = (maxx + (real_T)b_n) - p;
        i1 = (int32_T)(d + (1.0 - (maxx + 1.0)));
        emlrtForLoopVectorCheckR2021a(maxx + 1.0, 1.0, d, mxDOUBLE_CLASS, i1,
                                      &p_emlrtRTEI, &st);
        for (j = 0; j < i1; j++) {
          b_j = (maxx + 1.0) + (real_T)j;
          /*  internal loop */
          N_kk = N_kk * (((((real_T)b_n + 1.0) + maxx) - b_j) - p) /
                 (((real_T)b_n + 1.0) - b_j);
          fromRow = toRow + 1.0;
          toRow = ((toRow + 1.0) + N_kk) - 1.0;
          d = (kk - N_kk) + 1.0;
          if (d > kk) {
            i2 = -1;
            i3 = -1;
          } else {
            if (d != (int32_T)muDoubleScalarFloor(d)) {
              emlrtIntegerCheckR2012b(d, &l_emlrtDCI, &st);
            }
            if (((int32_T)d < 1) || ((int32_T)d > C->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, C->size[0],
                                            &gb_emlrtBCI, &st);
            }
            i2 = (int32_T)d - 2;
            if (kk != (int32_T)muDoubleScalarFloor(kk)) {
              emlrtIntegerCheckR2012b(kk, &k_emlrtDCI, &st);
            }
            if (((int32_T)kk < 1) || ((int32_T)kk > C->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)kk, 1, C->size[0],
                                            &fb_emlrtBCI, &st);
            }
            i3 = (int32_T)kk - 1;
          }
          if (maxx + 1.0 > p) {
            b_kk = -1;
            i4 = -1;
          } else {
            if (((int32_T)(maxx + 1.0) < 1) ||
                ((int32_T)(maxx + 1.0) > C->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(maxx + 1.0), 1,
                                            C->size[1], &eb_emlrtBCI, &st);
            }
            b_kk = (int32_T)(maxx + 1.0) - 2;
            if (((int32_T)p < 1) || ((int32_T)p > C->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)p, 1, C->size[1],
                                            &db_emlrtBCI, &st);
            }
            i4 = (int32_T)p - 1;
          }
          if (fromRow > toRow) {
            i5 = 0;
            ii_data = 0;
          } else {
            if (fromRow != (int32_T)muDoubleScalarFloor(fromRow)) {
              emlrtIntegerCheckR2012b(fromRow, &j_emlrtDCI, &st);
            }
            if (((int32_T)fromRow < 1) || ((int32_T)fromRow > C->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)fromRow, 1, C->size[0],
                                            &cb_emlrtBCI, &st);
            }
            i5 = (int32_T)fromRow - 1;
            if (toRow != (int32_T)muDoubleScalarFloor(toRow)) {
              emlrtIntegerCheckR2012b(toRow, &i_emlrtDCI, &st);
            }
            if (((int32_T)toRow < 1) || ((int32_T)toRow > C->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)toRow, 1, C->size[0],
                                            &bb_emlrtBCI, &st);
            }
            ii_data = (int32_T)toRow;
          }
          if (maxx + 1.0 > p) {
            i6 = 0;
            loop_ub = 0;
          } else {
            if (((int32_T)(maxx + 1.0) < 1) ||
                ((int32_T)(maxx + 1.0) > C->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(maxx + 1.0), 1,
                                            C->size[1], &ab_emlrtBCI, &st);
            }
            i6 = (int32_T)(maxx + 1.0) - 1;
            if (((int32_T)p < 1) || ((int32_T)p > C->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)p, 1, C->size[1],
                                            &y_emlrtBCI, &st);
            }
            loop_ub = (int32_T)p;
          }
          c_seq[0] = ii_data - i5;
          c_seq[1] = loop_ub - i6;
          loop_ub = i3 - i2;
          iv3[0] = loop_ub;
          ii_data = i4 - b_kk;
          iv3[1] = ii_data;
          emlrtSubAssignSizeCheckR2012b(&c_seq[0], 2, &iv3[0], 2, &e_emlrtECI,
                                        &st);
          i3 = pascalM->size[0] * pascalM->size[1];
          pascalM->size[0] = loop_ub;
          pascalM->size[1] = ii_data;
          emxEnsureCapacity_real_T(&st, pascalM, i3, &gf_emlrtRTEI);
          for (i3 = 0; i3 < ii_data; i3++) {
            for (i4 = 0; i4 < loop_ub; i4++) {
              pascalM->data[i4 + pascalM->size[0] * i3] =
                  C->data[((i2 + i4) + C->size[0] * ((b_kk + i3) + 1)) + 1];
            }
          }
          loop_ub = pascalM->size[1];
          for (i2 = 0; i2 < loop_ub; i2++) {
            ii_data = pascalM->size[0];
            for (i3 = 0; i3 < ii_data; i3++) {
              C->data[(i5 + i3) + C->size[0] * (i6 + i2)] =
                  pascalM->data[i3 + pascalM->size[0] * i2];
            }
          }
          if (fromRow > toRow) {
            i2 = 0;
            i3 = 0;
          } else {
            if (fromRow != (int32_T)muDoubleScalarFloor(fromRow)) {
              emlrtIntegerCheckR2012b(fromRow, &h_emlrtDCI, &st);
            }
            if (((int32_T)fromRow < 1) || ((int32_T)fromRow > C->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)fromRow, 1, C->size[0],
                                            &x_emlrtBCI, &st);
            }
            i2 = (int32_T)fromRow - 1;
            if (toRow != (int32_T)muDoubleScalarFloor(toRow)) {
              emlrtIntegerCheckR2012b(toRow, &g_emlrtDCI, &st);
            }
            if (((int32_T)toRow < 1) || ((int32_T)toRow > C->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)toRow, 1, C->size[0],
                                            &w_emlrtBCI, &st);
            }
            i3 = (int32_T)toRow;
          }
          if (((int32_T)maxx < 1) || ((int32_T)maxx > C->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)maxx, 1, C->size[1],
                                          &v_emlrtBCI, &st);
          }
          loop_ub = i3 - i2;
          for (i3 = 0; i3 < loop_ub; i3++) {
            C->data[(i2 + i3) + C->size[0] * ((int32_T)maxx - 1)] = b_j;
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      /*  find the true P if the vector of elements in v is not the default 1:n
       */
      if (seq->size[1] < 1) {
        s->size[0] = 1;
        s->size[1] = 0;
      } else {
        i = s->size[0] * s->size[1];
        s->size[0] = 1;
        s->size[1] = seq->size[1];
        emxEnsureCapacity_real_T(&st, s, i, &oc_emlrtRTEI);
        loop_ub = seq->size[1] - 1;
        for (i = 0; i <= loop_ub; i++) {
          s->data[i] = (real_T)i + 1.0;
        }
      }
      if (!b_isequal(seq, s)) {
        b_st.site = &hf_emlrtRSI;
        indexShapeCheck(&b_st, *(int32_T(*)[2])seq->size,
                        *(int32_T(*)[2])C->size);
        loop_ub = C->size[1];
        for (i = 0; i < loop_ub; i++) {
          ii_data = C->size[0];
          for (i1 = 0; i1 < ii_data; i1++) {
            if (C->data[i1 + C->size[0] * i] !=
                (int32_T)muDoubleScalarFloor(C->data[i1 + C->size[0] * i])) {
              emlrtIntegerCheckR2012b(C->data[i1 + C->size[0] * i], &s_emlrtDCI,
                                      &st);
            }
            i2 = (int32_T)C->data[i1 + C->size[0] * i];
            if ((i2 < 1) || (i2 > seq->size[1])) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, seq->size[1], &qb_emlrtBCI,
                                            &st);
            }
            C->data[i1 + C->size[0] * i] = seq->data[i2 - 1];
          }
        }
      }
    }
    /*  If nsamp is > 0 just select randomly ncomb rows from matrix C */
    if (nsamp > 0.0) {
      /*  Extract without replacement nsamp elements from ncomb */
      st.site = &xe_emlrtRSI;
      /* randsampleFS generates a random sample of k elements from the integers
       * 1 to n (k<=n) */
      /*  */
      /* <a href="matlab: docsearchFS('randsampleFS')">Link to the help
       * function</a> */
      /*  */
      /*   Required input arguments: */
      /*  */
      /*        n : A vector of numbers will be selected from the integers 1 to
       * n. */
      /*            Scalar, a positive integer. */
      /*            Data Types - single|double */
      /*  */
      /*       k  : The number of elements to be selected. Non negative integer.
       */
      /*            Data Types - single|double */
      /*  */
      /*   Optional input arguments: */
      /*  */
      /*    method : Sampling methods. Scalar or vector. */
      /*             Methods used to extract the subsets. See more about for
       * details. */
      /*             Default is method = 0. */
      /*             - Scalar from 0 to 3 determining the method used to extract
       */
      /*              (without replacement) the random sample. */
      /*             - Vector of weights: in such a case, a weighted sampling
       * without */
      /*               replacement algorithm is applied using that vector of
       * weights. */
      /*             Example - randsampleFS(100,10,2) */
      /*             Data Types - single|double */
      /*  */
      /*  */
      /*    Output: */
      /*  */
      /*    y :     A column vector of k values sampled at random from the
       * integers 1:n. */
      /*            For methods 0, 1, 2 and weighted sampling the elements
       * extracted */
      /*            are unique; For method 3 (included for historical reasons)
       * there is */
      /*            no guarantee that the elements extracted are unique. */
      /*            Data Types - single|double. */
      /*  */
      /*  More About: */
      /*  */
      /*    The method=0 uses MATLAB function randperm. In old MATLAB releases
       */
      /*    randperm was slower than FSDA function shuffling, which is used in
       */
      /*    method 1 (for example, in R2009a - MATLAB 7.8 - randperm was at
       * least */
      /*    50% slower). */
      /*  */
      /*    If method=1 the approach depends on the population and sample sizes:
       */
      /*    - if $n < 1000$ and $k < n/(10 + 0.007n)$, that is if the population
       * is */
      /*      relatively small and the desired sample is small compared to the
       */
      /*      population, we repeatedly sample with replacement until there are
       * k */
      /*      unique values; */
      /*    - otherwise, we do a random permutation of the population and return
       */
      /*      the first k elements. */
      /*    The threshold $k < n/(10 + 0.007n)$ has been determined by
       * simulation */
      /*    under MATLAB R2016b. Before, the threshold was $n < 4*k$. */
      /*  */
      /*    If method=2 systematic sampling is used, where the starting point is
       */
      /*    random and the step is also random. */
      /*  */
      /*    If method=3 random sampling is based on the old but well known
       * Linear */
      /*    Congruential Generator (LCG) method. In this case there is no
       * guarantee */
      /*    to get unique numbers. The method is included for historical
       * reasons. */
      /*  */
      /*    If method is a vector of n weights, then Weighted Sampling Without
       */
      /*    Replacement is applied. Our implementation follows Efraimidis and */
      /*    Spirakis (2006). MATLAB function datasample follows Wong and  Easton
       */
      /*    (1980), which is also quite fast; note however that function
       * datasample */
      /*    may be very slow if applied repetedly, for the large amount of time
       */
      /*    spent on options checking. */
      /*  */
      /*    Remark on computation performances. Method=2 (systematic sampling)
       * is */
      /*    by far the fastest for any practical population size $n$. For
       * example, */
      /*    for $n \approx 10^6$ method=2 is two orders of magniture faster than
       */
      /*    method=1. With recent MATLAB releases (after R2011b) method = 0
       * (which */
      /*    uses compiled MATLAB function randperm) has comparable performances,
       * at */
      /*    least for reasonably small $k$. In releases before 2012a, randperm
       * was */
      /*    considerably slow. */
      /*  */
      /*  See also: randsample, datasample, shuffling */
      /*  */
      /*  References: */
      /*  */
      /*  Fisher, R.A. and Yates, F. (1948), "Statistical tables */
      /*  for biological, agricultural and medical research (3rd ed.)", */
      /*  Oliver & Boyd, pp. 26-27. [For Method 1] */
      /*  Cochran, W.G. (1977), "Sampling techniques (Third ed.)", Wiley. [For
       */
      /*  Method 2] */
      /*  Knuth, D.E. (1997), "The Art of Computer Programming, Volume 2: */
      /*  Seminumerical Algorithms, Third Edition" Addison-Wesley, pp. 10-26.
       * [For */
      /*  Method 3. For details see: Section 3.2.1: The Linear Congruential
       * Method] */
      /*  Efraimidis, P.S. and Spirakis, P.G. (2006), Weighted random sampling
       * with */
      /*  a reservoir, "Information Processing Letters", Vol. 97, pp. 181-185.
       * [For */
      /*  Weighted Sampling Without Replacement] */
      /*  Wong, C.K. and Easton, M.C. (1980), An Efficient Method for Weighted
       */
      /*  Sampling Without Replacement, "SIAM Journal of Computing", Vol. 9, pp.
       * 111-113. */
      /*  */
      /*  Copyright 2008-2021. */
      /*  Written by FSDA team */
      /*  */
      /* <a href="matlab: docsearchFS('randsampleFS')">Link to the help
       * function</a> */
      /*  */
      /*  */
      /* $LastChangedDate::                      $: Date of the last commit */
      /*  */
      /*  Examples: */
      /* { */
      /*     %% randsampleFS with default options. */
      /*     % default method (1) is used. */
      /*     randsampleFS(1000,10) */
      /* } */
      /* { */
      /*     %% randsampleFS with optional argument set to method (2). */
      /*     method = 2; */
      /*     randsampleFS(100,10,method) */
      /* } */
      /* { */
      /*     % randsampleFS with optional arguments set to method (3). */
      /*     method = 3; */
      /*     % Here, being nsel so big wrt nsamp, it is likely to obtain
       * repetitions. */
      /*     randsampleFS(100,10,method) */
      /* } */
      /* { */
      /*     % randsampleFS Weighted Sampling Without Replacement. */
      /*     % Extract k=10 number in [-1000 -900] with gamma distributed
       * weights. */
      /*      population = -1000:1:-900; */
      /*      n = numel(population); */
      /*      wgts = sort(random('gamma',0.3,2,n,1),'descend'); */
      /*  */
      /*      k=10; */
      /*      y = randsampleFS(n,k,wgts); */
      /*      sample  = population(y); */
      /*       */
      /*      plot(wgts,'.r') */
      /*      hold on; */
      /*      text(y,wgts(y),'X'); */
      /*      title('Weight distribution with the extracted numbers
       * superimposed') */
      /* } */
      /*  Beginning of code */
      /*  randsampleFS needs to check the MATLAB version in use in order to: */
      /*  - decide the sampling method to use, and */
      /*  - use properly the optional parameter of randperm. */
      /*  In the first case  the release to check is R2012a, i.e. 7.14 */
      /*  In the second case the release to check is R2011b, i.e. 7.13 */
      /*  For the sake of computational efficiency, we just check the latest */
      /*  To pass the argument, use: */
      /*  after2012a = ~verLessThan('MATLAB','7.14'); */
      /*  choose the default sampling method */
      /*  Weighted Sampling Without Replacement */
      /*  This is done if the third argument is provided as a vector of weights.
       */
      /*  Extract a random sample of k integers between 1 and n. */
      b_st.site = &jf_emlrtRSI;
      randperm(&b_st, ncomb, nsamp, seq);
      /*  METHOD: it was set to 2 */
      ii_data = C->size[1] - 1;
      i = pascalM->size[0] * pascalM->size[1];
      pascalM->size[0] = seq->size[1];
      pascalM->size[1] = C->size[1];
      emxEnsureCapacity_real_T(sp, pascalM, i, &hf_emlrtRTEI);
      for (i = 0; i <= ii_data; i++) {
        loop_ub = seq->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          if (seq->data[i1] != (int32_T)muDoubleScalarFloor(seq->data[i1])) {
            emlrtIntegerCheckR2012b(seq->data[i1], &t_emlrtDCI, (emlrtCTX)sp);
          }
          i2 = (int32_T)seq->data[i1];
          if ((i2 < 1) || (i2 > C->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, C->size[0], &rb_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          pascalM->data[i1 + pascalM->size[0] * i] =
              C->data[(i2 + C->size[0] * i) - 1];
        }
      }
      i = C->size[0] * C->size[1];
      C->size[0] = pascalM->size[0];
      C->size[1] = pascalM->size[1];
      emxEnsureCapacity_real_T(sp, C, i, &if_emlrtRTEI);
      loop_ub = pascalM->size[0] * pascalM->size[1];
      for (i = 0; i < loop_ub; i++) {
        C->data[i] = pascalM->data[i];
      }
    }
  } else {
    if ((nsamp > 100000.0) && msg) {
      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a((emlrtCTX)sp, 63, m, &c_u[0]);
      emlrtAssign(&c_y, m);
      st.site = &gib_emlrtRSI;
      disp(&st, c_y, &h_emlrtMCI);
      st.site = &nhb_emlrtRSI;
      disp(&st, k_emlrt_marshallOut(&st, b_cv2), &i_emlrtMCI);
    }
    *nselected = nsamp;
    /*  usepascal: flag used to decide whether to use the Pascal triangle */
    /*  tric, which allows to reduce considerably the computation time */
    usepascal = true;
    if ((ncomb > 5.0E+7) && (ncomb < 1.0E+8)) {
      /*  Extract without replacement nsamp elements from ncomb */
      st.site = &ye_emlrtRSI;
      /* randsampleFS generates a random sample of k elements from the integers
       * 1 to n (k<=n) */
      /*  */
      /* <a href="matlab: docsearchFS('randsampleFS')">Link to the help
       * function</a> */
      /*  */
      /*   Required input arguments: */
      /*  */
      /*        n : A vector of numbers will be selected from the integers 1 to
       * n. */
      /*            Scalar, a positive integer. */
      /*            Data Types - single|double */
      /*  */
      /*       k  : The number of elements to be selected. Non negative integer.
       */
      /*            Data Types - single|double */
      /*  */
      /*   Optional input arguments: */
      /*  */
      /*    method : Sampling methods. Scalar or vector. */
      /*             Methods used to extract the subsets. See more about for
       * details. */
      /*             Default is method = 0. */
      /*             - Scalar from 0 to 3 determining the method used to extract
       */
      /*              (without replacement) the random sample. */
      /*             - Vector of weights: in such a case, a weighted sampling
       * without */
      /*               replacement algorithm is applied using that vector of
       * weights. */
      /*             Example - randsampleFS(100,10,2) */
      /*             Data Types - single|double */
      /*  */
      /*  */
      /*    Output: */
      /*  */
      /*    y :     A column vector of k values sampled at random from the
       * integers 1:n. */
      /*            For methods 0, 1, 2 and weighted sampling the elements
       * extracted */
      /*            are unique; For method 3 (included for historical reasons)
       * there is */
      /*            no guarantee that the elements extracted are unique. */
      /*            Data Types - single|double. */
      /*  */
      /*  More About: */
      /*  */
      /*    The method=0 uses MATLAB function randperm. In old MATLAB releases
       */
      /*    randperm was slower than FSDA function shuffling, which is used in
       */
      /*    method 1 (for example, in R2009a - MATLAB 7.8 - randperm was at
       * least */
      /*    50% slower). */
      /*  */
      /*    If method=1 the approach depends on the population and sample sizes:
       */
      /*    - if $n < 1000$ and $k < n/(10 + 0.007n)$, that is if the population
       * is */
      /*      relatively small and the desired sample is small compared to the
       */
      /*      population, we repeatedly sample with replacement until there are
       * k */
      /*      unique values; */
      /*    - otherwise, we do a random permutation of the population and return
       */
      /*      the first k elements. */
      /*    The threshold $k < n/(10 + 0.007n)$ has been determined by
       * simulation */
      /*    under MATLAB R2016b. Before, the threshold was $n < 4*k$. */
      /*  */
      /*    If method=2 systematic sampling is used, where the starting point is
       */
      /*    random and the step is also random. */
      /*  */
      /*    If method=3 random sampling is based on the old but well known
       * Linear */
      /*    Congruential Generator (LCG) method. In this case there is no
       * guarantee */
      /*    to get unique numbers. The method is included for historical
       * reasons. */
      /*  */
      /*    If method is a vector of n weights, then Weighted Sampling Without
       */
      /*    Replacement is applied. Our implementation follows Efraimidis and */
      /*    Spirakis (2006). MATLAB function datasample follows Wong and  Easton
       */
      /*    (1980), which is also quite fast; note however that function
       * datasample */
      /*    may be very slow if applied repetedly, for the large amount of time
       */
      /*    spent on options checking. */
      /*  */
      /*    Remark on computation performances. Method=2 (systematic sampling)
       * is */
      /*    by far the fastest for any practical population size $n$. For
       * example, */
      /*    for $n \approx 10^6$ method=2 is two orders of magniture faster than
       */
      /*    method=1. With recent MATLAB releases (after R2011b) method = 0
       * (which */
      /*    uses compiled MATLAB function randperm) has comparable performances,
       * at */
      /*    least for reasonably small $k$. In releases before 2012a, randperm
       * was */
      /*    considerably slow. */
      /*  */
      /*  See also: randsample, datasample, shuffling */
      /*  */
      /*  References: */
      /*  */
      /*  Fisher, R.A. and Yates, F. (1948), "Statistical tables */
      /*  for biological, agricultural and medical research (3rd ed.)", */
      /*  Oliver & Boyd, pp. 26-27. [For Method 1] */
      /*  Cochran, W.G. (1977), "Sampling techniques (Third ed.)", Wiley. [For
       */
      /*  Method 2] */
      /*  Knuth, D.E. (1997), "The Art of Computer Programming, Volume 2: */
      /*  Seminumerical Algorithms, Third Edition" Addison-Wesley, pp. 10-26.
       * [For */
      /*  Method 3. For details see: Section 3.2.1: The Linear Congruential
       * Method] */
      /*  Efraimidis, P.S. and Spirakis, P.G. (2006), Weighted random sampling
       * with */
      /*  a reservoir, "Information Processing Letters", Vol. 97, pp. 181-185.
       * [For */
      /*  Weighted Sampling Without Replacement] */
      /*  Wong, C.K. and Easton, M.C. (1980), An Efficient Method for Weighted
       */
      /*  Sampling Without Replacement, "SIAM Journal of Computing", Vol. 9, pp.
       * 111-113. */
      /*  */
      /*  Copyright 2008-2021. */
      /*  Written by FSDA team */
      /*  */
      /* <a href="matlab: docsearchFS('randsampleFS')">Link to the help
       * function</a> */
      /*  */
      /*  */
      /* $LastChangedDate::                      $: Date of the last commit */
      /*  */
      /*  Examples: */
      /* { */
      /*     %% randsampleFS with default options. */
      /*     % default method (1) is used. */
      /*     randsampleFS(1000,10) */
      /* } */
      /* { */
      /*     %% randsampleFS with optional argument set to method (2). */
      /*     method = 2; */
      /*     randsampleFS(100,10,method) */
      /* } */
      /* { */
      /*     % randsampleFS with optional arguments set to method (3). */
      /*     method = 3; */
      /*     % Here, being nsel so big wrt nsamp, it is likely to obtain
       * repetitions. */
      /*     randsampleFS(100,10,method) */
      /* } */
      /* { */
      /*     % randsampleFS Weighted Sampling Without Replacement. */
      /*     % Extract k=10 number in [-1000 -900] with gamma distributed
       * weights. */
      /*      population = -1000:1:-900; */
      /*      n = numel(population); */
      /*      wgts = sort(random('gamma',0.3,2,n,1),'descend'); */
      /*  */
      /*      k=10; */
      /*      y = randsampleFS(n,k,wgts); */
      /*      sample  = population(y); */
      /*       */
      /*      plot(wgts,'.r') */
      /*      hold on; */
      /*      text(y,wgts(y),'X'); */
      /*      title('Weight distribution with the extracted numbers
       * superimposed') */
      /* } */
      /*  Beginning of code */
      /*  randsampleFS needs to check the MATLAB version in use in order to: */
      /*  - decide the sampling method to use, and */
      /*  - use properly the optional parameter of randperm. */
      /*  In the first case  the release to check is R2012a, i.e. 7.14 */
      /*  In the second case the release to check is R2011b, i.e. 7.13 */
      /*  For the sake of computational efficiency, we just check the latest */
      /*  To pass the argument, use: */
      /*  after2012a = ~verLessThan('MATLAB','7.14'); */
      /*  choose the default sampling method */
      /*  Weighted Sampling Without Replacement */
      /*  This is done if the third argument is provided as a vector of weights.
       */
      /*  Extract a random sample of k integers between 1 and n. */
      b_st.site = &jf_emlrtRSI;
      randperm(&b_st, ncomb, nsamp, seq);
      /*  METHOD: it was set to 2 */
      /*  The Pascal triangle can be used only if there is enough memory. */
      if (n <= 20000.0) {
        st.site = &af_emlrtRSI;
        pascal(&st, n, pascalM);
      } else {
        usepascal = false;
        i = pascalM->size[0] * pascalM->size[1];
        pascalM->size[0] = 1;
        pascalM->size[1] = 1;
        emxEnsureCapacity_real_T(sp, pascalM, i, &ff_emlrtRTEI);
        pascalM->data[0] = 0.0;
        /*  C coder initialization */
      }
    } else {
      i = seq->size[0] * seq->size[1];
      seq->size[0] = 1;
      seq->size[1] = 1;
      emxEnsureCapacity_real_T(sp, seq, i, &we_emlrtRTEI);
      seq->data[0] = 0.0;
      /*  C coder initialization */
      i = pascalM->size[0] * pascalM->size[1];
      pascalM->size[0] = 1;
      pascalM->size[1] = 1;
      emxEnsureCapacity_real_T(sp, pascalM, i, &xe_emlrtRTEI);
      pascalM->data[0] = 0.0;
      /*  C coder initialization */
    }
    /*  Create matrix C which will contain in each row the indexes forming the
     */
    /*  subset which is extracted at step i, where i=1....number of selected */
    /*  subsamples (nselected) */
    if (!(nsamp >= 0.0)) {
      emlrtNonNegativeCheckR2012b(nsamp, &q_emlrtDCI, (emlrtCTX)sp);
    }
    if (nsamp != (int32_T)muDoubleScalarFloor(nsamp)) {
      emlrtIntegerCheckR2012b(nsamp, &p_emlrtDCI, (emlrtCTX)sp);
    }
    i = C->size[0] * C->size[1];
    i1 = (int32_T)nsamp;
    C->size[0] = (int32_T)nsamp;
    b_n = (int32_T)p;
    C->size[1] = (int32_T)p;
    emxEnsureCapacity_real_T(sp, C, i, &ye_emlrtRTEI);
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, nsamp, mxDOUBLE_CLASS,
                                  (int32_T)nsamp, &r_emlrtRTEI, (emlrtCTX)sp);
    if (0 <= (int32_T)nsamp - 1) {
      c_seq[0] = 1;
    }
    for (b_i = 0; b_i < i1; b_i++) {
      if ((ncomb > 5.0E+7) && (ncomb < 1.0E+8)) {
        if (usepascal) {
          st.site = &bf_emlrtRSI;
          if (((int32_T)(b_i + 1U) < 1) ||
              ((int32_T)(b_i + 1U) > seq->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, seq->size[1],
                                          &pb_emlrtBCI, &st);
          }
          N_kk = seq->data[b_i];
          /* lexunrank gives the the $k$-combination of $n$ elements of position
           * $N$ in the lexicographic order of all combinations */
          /*  */
          /* <a href="matlab: docsearchFS('lexunrank')">Link to the help
           * function</a> */
          /*  */
          /*  Required input arguments: */
          /*  */
          /*     n:  Number of elements. A non negative integer > k. */
          /*         Data Types - single|double */
          /*  */
          /*     k:  Items to choose from the set of n elements. A non negative
           * integer. */
          /*         Data Types - single|double */
          /*  */
          /*     N:  Position N in the reverse co-lexicographic order of such */
          /*         combinations. A non negative integer between 0 and
           * bc(n,p)-1. */
          /*         Data Types - single|double */
          /*  */
          /*  Optional input arguments: */
          /*  */
          /*   pascalM:  Pascal matrix.  */
          /*             Matrix. The Pascal matrix as given by the MATLAB
           * function pascal(n). */
          /*            In applications where lexunrank is called many times, it
           * is preferable */
          /*            to compute the Pascal matrix once outside lexunrank, and
           * pass it */
          /*            to lexunrank as optional argument. Otherwise, the
           * required binomial */
          /*            coeffients are computed inside lexunrank using function
           * bc and, when */
          /*            possible, using the traditional recurrent formula. */
          /*            Example - pascal(n) */
          /*            Data Types - single|double */
          /*  */
          /*  Output: */
          /*  */
          /*    kcomb : The $k$-combination of n elements at position */
          /*            N. Vector of length k. The position is relative to a
           * reverse */
          /*            co-lexicographic order of the combinations or,
           * equivalently, of */
          /*            position bc(n,k)-N in the lexicographic order of the
           * same */
          /*            combinations. Data Types - single|double */
          /*  */
          /*    calls : Binomial coefficients. Scalar. The number of binomial */
          /*            coefficients used to compute the $k$-combination. */
          /*            Data Types - single|double */
          /*  */
          /*  More About: */
          /*  */
          /*    REMARKS ON THE INPUT ARGUMENTS. */
          /*  */
          /*    Input checks are intentionally avoided, as lexunrank is supposed
           * to be */
          /*    called many times, for sampling subsets. Thus, please ensure
           * that: */
          /*    - k < n; */
          /*    - N is an integer between 0 and bc(n,p)-1. */
          /*    It is possible to enable checks, by changing an internal "if"
           * statement to 1. */
          /*  */
          /*    REMARKS ON THE OUTPUT ARGUMENTS. */
          /*  */
          /*    As $n$ increases, 'calls' becomes much smaller than 'ncomb'.
           * This means */
          /*    that lexunrank(n,k,N) is extremely convenient if you are
           * interested in */
          /*    one or several, but not all, $k$-combinations at given
           * generation */
          /*    order(s) N. */
          /*  */
          /*    To generate all combinations in lexicographic order, it is more
           */
          /*    convenient using the FSDA function combsFS. The MATLAB function
           */
          /*    with the same purpose, nchoosek(1:4,3), is much less efficient.
           */
          /*  */
          /*    ON THE LEXICOGRAPHIC ORDERING. */
          /*  */
          /*    lexunrank(n,k,N) gives the $k$-combination of n elements of
           * position N */
          /*    in the reverse co-lexicographic order of such combinations or,
           */
          /*    equivalently, of position bc(n,k)-N in the lexicographic order
           * of the */
          /*    same combinations. */
          /*     */
          /*    Note that, in this implementation of the lexicographic unrank, N
           * ranges */
          /*    over the integers between 0 and bc(n,k)-1. For details see the
           */
          /*    "combinatorial number system" discussed by Knuth (2005), pp.
           * 5-6. */
          /*  */
          /*    To clarify with an example the meaning of the different orders,
           * while */
          /*    the lexicographic order of the 2-combinations of 3 elements are:
           */
          /*     */
          /*    \[  */
          /*      \left(  */
          /*         \begin{array}{ccc} */
          /*            1  &   2  &   3     \\ */
          /*            1  &   2  &   4     \\ */
          /*            1  &   3  &   4     \\ */
          /*            2  &   3  &   4  */
          /*         \end{array}  */
          /*       \right) */
          /*    \]  */
          /*  */
          /*    the co-lexicographic order of the same combinations are */
          /*     */
          /*    \[  */
          /*      \left(  */
          /*         \begin{array}{ccc} */
          /*            3   &  2  &   1     \\ */
          /*            4   &  2  &   1     \\ */
          /*            4   &  3  &   1     \\ */
          /*            4   &  3  &   2 */
          /*         \end{array}  */
          /*       \right) */
          /*    \]  */
          /*     */
          /*    and the reverse co-lexicographic order of the original
           * combinations are: */
          /*  */
          /*    \[  */
          /*      \left(  */
          /*         \begin{array}{ccc} */
          /*            4   &  3  &   2     \\ */
          /*            4   &  3  &   1     \\ */
          /*            4   &  2  &   1     \\ */
          /*            3   &  2  &   1      */
          /*         \end{array}  */
          /*       \right) */
          /*    \]  */
          /*  */
          /*    The reasons for choosing a co-lexicographic unrank is that
           * right-to-left  */
          /*    array filling is much faster and elegant. The reverse is due to
           * a similar  */
          /*    motivation. */
          /*  */
          /*  */
          /*    ALGORITMIC DETAILS. */
          /*  */
          /*  Given the totally ordered set $S=\{1,2,\ldots,n\}$, a
           * $k$-combination is */
          /*  a subset $\{x_1, \ldots, x_k\}$ of $S$. Consider the $n$-lists of
           */
          /*  elements of the set $\{0,1\}$, i.e. the vertices of the hypercube
           * $V_n$. */
          /*  Each $k$-combination $\{x_1,\ldots,x_k\}$ can be associated to the
           */
          /*  $n$-list having a 1 at position $x_1$, \ldots, $x_k$, and a 0
           * elsewhere. */
          /*  */
          /*  Example: */
          /*    2-combinations of $\{1,2,3,4\}$: $\{1,2\}$, $\{1,3\}$,
           * $\{1,4\}$, */
          /*    $\{2,3\}$, $\{2,4\}$, $\{3,4\}$. Corresponding 4-lists of
           * $\{0,1\}$: */
          /*    $1100$,  $1010$,  $1001$,  $0110$, $0101$,  $0011$. */
          /*  */
          /*  The $n$-lists of $\{0,1\}$ containing $k$ times 1, and therefore
           */
          /*  equivalently the $k$-combinations of $n$-elements of $S$, can be
           */
          /*  generated in lexicographic order with an algorithm that builds the
           */
          /*  $k$-list of position $t+1$ using only the $k$-list of position
           * $t$, and */
          /*  which stops without counting the combinations generated. For
           * example, the */
          /*  MATLAB function NCHOOSEK(S,k), where $S$ is the row vector of
           * length $n$ */
          /*  of the elements of $S$, creates in lexicographic order a $k$
           * columns */
          /*  matrix whose rows consist of all possible combinations of the $n$
           */
          /*  elements of $S$ taken $k$ at a time. The number of such
           * combinations, */
          /*  given by the binomial coefficient $n!/((n-k)! k!)$, can be also
           * computed */
          /*  with the function NCHOOSEK by replacing the first argument, the
           * row */
          /*  vector $S$, with the scalar $n$. */
          /*  */
          /*  Unfortunately the binomial coefficient increases rapidly with $n$,
           * which */
          /*  makes the generation of all $k$-combinations computationally hard:
           * with */
          /*  NCHOOSEK the task is impractical even for values just above 15.
           * However, */
          /*  a lexicographic algorithm implements a one-to-one correspondence
           * between */
          /*  the $k$-combinations and the generation order, i.e. the set of
           * numbers $s */
          /*  = 1,\ldots,(n!/((n-k)!k!))$. This fact is used in our function to
           */
          /*  determine the $n$-list corresponding to the $k$-combination
           * $\{x_1, */
          /*  \ldots, x_k\}$ which would be generated by the lexicographic
           * algorithm at */
          /*  a given desired position $N$. This is useful in a number of
           * applications */
          /*  which require one or several, but not all, $k$-combinations at
           * given */
          /*  generation order(s). */
          /*  */
          /*  See also: combsFS, nchoosek, bc */
          /*  */
          /*  References: */
          /*  */
          /*    Lehmer, D. H. (1964). The machine tools of combinatorics. In E.
           * F. */
          /*    Beckenbach (Ed.), "Applied Combinatorial Mathematics", pp. 5-31.
           * New */
          /*    York, Wiley. */
          /*  */
          /*    Knuth, D. (2005). Generating All Combinations and Partitions.
           * The Art of */
          /*    Computer Programming, Vol. 4, Fascicle 3. Reading, Mass.,
           * Addison-Wesley. */
          /*  */
          /*  Copyright 2008-2021. */
          /*  Written by FSDA team */
          /*  */
          /* <a href="matlab: docsearchFS('lexunrank')">Link to the help
           * function</a> */
          /*  */
          /*  */
          /* $LastChangedDate::                      $: Date of the last commit
           */
          /*  */
          /*  Examples: */
          /* { */
          /*         %% 7th 2 combination chosen among 5 element. */
          /*         n = 5;  */
          /*         k = 2;  */
          /*         N = 7; */
          /*         kcomb=lexunrank(n,k,N) */
          /* } */
          /* { */
          /*         %% number of binomial coefficient calls necessary to
           * compute the 7th 2 combination chosen among 5 element. */
          /*         n = 5;  */
          /*         k = 2;  */
          /*         N = 7; */
          /*         [~,calls]=lexunrank(n,k,N) */
          /* } */
          /* { */
          /*         %% 7th 2 combination chosen among 5 element, using the
           * pascal matrix. */
          /*         n = 5;  */
          /*         k = 2;  */
          /*         N = 7; */
          /*         [kcomb,calls]=lexunrank(n,k,N,pascal(n)) */
          /* } */
          /* { */
          /*     % Additional example on the use of lexunrank. */
          /*     % Standard use. */
          /*     n = 4; p = 3; */
          /*     % number of p-combinations out of n */
          /*     n_bc = bc(n,p); */
          /*     % Pascal matrix */
          /*     pascalM=pascal(n); */
          /*     % n_bc is the Pascal cell in position (n-p+1,p+1) */
          /*     n_bc==pascalM(n-p+1,p+1) */
          /*     % all p-combinations in reverse-colex order generated by
           * lexunrank */
          /*     % using a loop with rank integers ranging from 0 to bc(n,p)-1
           */
          /*     all_recolex = nan(n_bc,p); */
          /*     for N_lex = 0:n_bc-1 */
          /*         all_recolex(N_lex+1,:) = lexunrank(n,p,N_lex); */
          /*     end */
          /*     all_recolex */
          /* } */
          /* { */
          /*     % Additional example on the use of lexunrank. */
          /*     n = 4; p = 3; */
          /*     n_bc = bc(n,p); */
          /*     pascalM=pascal(n); */
          /*     n_bc==pascalM(n-p+1,p+1) */
          /*     all_recolex = nan(n_bc,p); */
          /*     for N_lex = 0:n_bc-1 */
          /*         all_recolex(N_lex+1,:) = lexunrank(n,p,N_lex); */
          /*     end */
          /*     % To change from reverse-colex to colex. */
          /*     all_colex = flipud(all_recolex) */
          /*     % and to change from colex to lex, it is sufficient this */
          /*     all_lex = fliplr(all_colex) */
          /*  */
          /*     % all p-combinations in lexi order generated using combsFS */
          /*     all_lex_combs = combsFS(1:n,p) */
          /*  */
          /*     % the combination at Lexi position N_lex=3 is generated by
           * lexiunrank */
          /*     % in Colex position */
          /*     N_lex = 3; N_colex = n_bc - N_lex ; */
          /* } */
          /* { */
          /*     % Additional example on the use of lexunrank. */
          /*     n = 4; p = 3; */
          /*     n_bc = bc(n,p); */
          /*     pascalM=pascal(n); */
          /*     n_bc==pascalM(n-p+1,p+1); */
          /*     all_recolex = nan(n_bc,p); */
          /*     for N_lex = 0:n_bc-1 */
          /*         all_recolex(N_lex+1,:) = lexunrank(n,p,N_lex); */
          /*     end   */
          /*     N_colex = n_bc - N_lex ;    */
          /*     % Use of lexunrank with pascal matrix */
          /*     kcomb = lexunrank(n,p,N_colex,pascal(n)) */
          /*     % This is without Pascal matrix */
          /*     kcomb2 = lexunrank(n,p,N_colex) */
          /*     % Just as confirmation, the combination in the lexi order is */
          /*     all_lex_combs = combsFS(1:n,p) */
          /*     all_lex_combs(N_lex,:) */
          /* } */
          /*  Beginning of code */
          /*  REMARK: checks and unnecessary computations are intentionally
           * avoided, as */
          /*  this function in FSDA is supposed to be called many times, for
           * sampling */
          /*  subsets. To enable checks change the if statement to 1. */
          /*  initialise the row vector for the k-combination to unrank from N
           */
          i = s->size[0] * s->size[1];
          s->size[0] = 1;
          s->size[1] = (int32_T)p;
          emxEnsureCapacity_real_T(&st, s, i, &jf_emlrtRTEI);
          for (i = 0; i < b_n; i++) {
            s->data[i] = 0.0;
          }
          /*  initialise the count of the calls to binomial coefficient values
           * (via */
          /*  call to bc function or access to Pascal matrix cells) */
          /*     %% FAST OPTION: */
          /*  binomial coefficients are taken from the pascal matrix rather than
           */
          /*  computing them using bc. Of course this option is space greedy. */
          i = (int32_T)(((-1.0 - p) + 1.0) / -1.0);
          emlrtForLoopVectorCheckR2021a(p, -1.0, 1.0, mxDOUBLE_CLASS, i,
                                        &o_emlrtRTEI, &st);
          for (b_kk = 0; b_kk < i; b_kk++) {
            kk = p + -(real_T)b_kk;
            /*  istruction find faster than logical extraction */
            d = n - kk;
            if (1.0 > d) {
              loop_ub = 0;
            } else {
              if (1 > pascalM->size[0]) {
                emlrtDynamicBoundsCheckR2012b(1, 1, pascalM->size[0],
                                              &u_emlrtBCI, &st);
              }
              if (((int32_T)d < 1) || ((int32_T)d > pascalM->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, pascalM->size[0],
                                              &t_emlrtBCI, &st);
              }
              loop_ub = (int32_T)d;
            }
            b_st.site = &tf_emlrtRSI;
            if (((int32_T)(kk + 1.0) < 1) ||
                ((int32_T)(kk + 1.0) > pascalM->size[1])) {
              emlrtDynamicBoundsCheckR2012b(
                  (int32_T)(kk + 1.0), 1, pascalM->size[1], &s_emlrtBCI, &b_st);
            }
            pascalM_size = loop_ub;
            for (i2 = 0; i2 < loop_ub; i2++) {
              b_pascalM_data[i2] =
                  (pascalM->data[i2 + pascalM->size[0] *
                                          ((int32_T)(kk + 1.0) - 1)] > N_kk);
            }
            pascalM_data.data = &b_pascalM_data[0];
            pascalM_data.size = &pascalM_size;
            pascalM_data.allocatedSize = 20000;
            pascalM_data.numDimensions = 1;
            pascalM_data.canFreeData = false;
            c_st.site = &wc_emlrtRSI;
            b_eml_find(&c_st, &pascalM_data, (int32_T *)&ii_data, &loop_ub);
            /*  seqnmkk=1:n-kk; */
            /*  x=seqnmkk(pascalM(seqnmkk,kk+1) > N_kk); */
            if (loop_ub == 0) {
              /*  || x1==n-kk */
              maxx = n - 1.0;
            } else {
              maxx = ((real_T)ii_data + kk) - 2.0;
            }
            if (((int32_T)kk < 1) || ((int32_T)kk > s->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)kk, 1, s->size[1],
                                            &sb_emlrtBCI, &st);
            }
            s->data[(int32_T)kk - 1] = n - maxx;
            if (maxx >= kk) {
              i2 = (int32_T)((maxx - kk) + 1.0);
              if ((i2 < 1) || (i2 > pascalM->size[0])) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, pascalM->size[0],
                                              &tb_emlrtBCI, &st);
              }
              if (((int32_T)(kk + 1.0) < 1) ||
                  ((int32_T)(kk + 1.0) > pascalM->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(kk + 1.0), 1,
                                              pascalM->size[1], &tb_emlrtBCI,
                                              &st);
              }
              N_kk -= pascalM->data[(i2 + pascalM->size[0] *
                                              ((int32_T)(kk + 1.0) - 1)) -
                                    1];
              /*  this is: N_kk - bc(maxx,kk) */
            }
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
        } else {
          if (((int32_T)(b_i + 1U) < 1) ||
              ((int32_T)(b_i + 1U) > seq->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, seq->size[1],
                                          &ob_emlrtBCI, (emlrtCTX)sp);
          }
          st.site = &cf_emlrtRSI;
          lexunrank(&st, n, p, seq->data[b_i], s);
        }
      } else {
        st.site = &df_emlrtRSI;
        /* randsampleFS generates a random sample of k elements from the
         * integers 1 to n (k<=n) */
        /*  */
        /* <a href="matlab: docsearchFS('randsampleFS')">Link to the help
         * function</a> */
        /*  */
        /*   Required input arguments: */
        /*  */
        /*        n : A vector of numbers will be selected from the integers 1
         * to n. */
        /*            Scalar, a positive integer. */
        /*            Data Types - single|double */
        /*  */
        /*       k  : The number of elements to be selected. Non negative
         * integer. */
        /*            Data Types - single|double */
        /*  */
        /*   Optional input arguments: */
        /*  */
        /*    method : Sampling methods. Scalar or vector. */
        /*             Methods used to extract the subsets. See more about for
         * details. */
        /*             Default is method = 0. */
        /*             - Scalar from 0 to 3 determining the method used to
         * extract */
        /*              (without replacement) the random sample. */
        /*             - Vector of weights: in such a case, a weighted sampling
         * without */
        /*               replacement algorithm is applied using that vector of
         * weights. */
        /*             Example - randsampleFS(100,10,2) */
        /*             Data Types - single|double */
        /*  */
        /*  */
        /*    Output: */
        /*  */
        /*    y :     A column vector of k values sampled at random from the
         * integers 1:n. */
        /*            For methods 0, 1, 2 and weighted sampling the elements
         * extracted */
        /*            are unique; For method 3 (included for historical reasons)
         * there is */
        /*            no guarantee that the elements extracted are unique. */
        /*            Data Types - single|double. */
        /*  */
        /*  More About: */
        /*  */
        /*    The method=0 uses MATLAB function randperm. In old MATLAB releases
         */
        /*    randperm was slower than FSDA function shuffling, which is used in
         */
        /*    method 1 (for example, in R2009a - MATLAB 7.8 - randperm was at
         * least */
        /*    50% slower). */
        /*  */
        /*    If method=1 the approach depends on the population and sample
         * sizes: */
        /*    - if $n < 1000$ and $k < n/(10 + 0.007n)$, that is if the
         * population is */
        /*      relatively small and the desired sample is small compared to the
         */
        /*      population, we repeatedly sample with replacement until there
         * are k */
        /*      unique values; */
        /*    - otherwise, we do a random permutation of the population and
         * return */
        /*      the first k elements. */
        /*    The threshold $k < n/(10 + 0.007n)$ has been determined by
         * simulation */
        /*    under MATLAB R2016b. Before, the threshold was $n < 4*k$. */
        /*  */
        /*    If method=2 systematic sampling is used, where the starting point
         * is */
        /*    random and the step is also random. */
        /*  */
        /*    If method=3 random sampling is based on the old but well known
         * Linear */
        /*    Congruential Generator (LCG) method. In this case there is no
         * guarantee */
        /*    to get unique numbers. The method is included for historical
         * reasons. */
        /*  */
        /*    If method is a vector of n weights, then Weighted Sampling Without
         */
        /*    Replacement is applied. Our implementation follows Efraimidis and
         */
        /*    Spirakis (2006). MATLAB function datasample follows Wong and
         * Easton */
        /*    (1980), which is also quite fast; note however that function
         * datasample */
        /*    may be very slow if applied repetedly, for the large amount of
         * time */
        /*    spent on options checking. */
        /*  */
        /*    Remark on computation performances. Method=2 (systematic sampling)
         * is */
        /*    by far the fastest for any practical population size $n$. For
         * example, */
        /*    for $n \approx 10^6$ method=2 is two orders of magniture faster
         * than */
        /*    method=1. With recent MATLAB releases (after R2011b) method = 0
         * (which */
        /*    uses compiled MATLAB function randperm) has comparable
         * performances, at */
        /*    least for reasonably small $k$. In releases before 2012a, randperm
         * was */
        /*    considerably slow. */
        /*  */
        /*  See also: randsample, datasample, shuffling */
        /*  */
        /*  References: */
        /*  */
        /*  Fisher, R.A. and Yates, F. (1948), "Statistical tables */
        /*  for biological, agricultural and medical research (3rd ed.)", */
        /*  Oliver & Boyd, pp. 26-27. [For Method 1] */
        /*  Cochran, W.G. (1977), "Sampling techniques (Third ed.)", Wiley. [For
         */
        /*  Method 2] */
        /*  Knuth, D.E. (1997), "The Art of Computer Programming, Volume 2: */
        /*  Seminumerical Algorithms, Third Edition" Addison-Wesley, pp. 10-26.
         * [For */
        /*  Method 3. For details see: Section 3.2.1: The Linear Congruential
         * Method] */
        /*  Efraimidis, P.S. and Spirakis, P.G. (2006), Weighted random sampling
         * with */
        /*  a reservoir, "Information Processing Letters", Vol. 97, pp. 181-185.
         * [For */
        /*  Weighted Sampling Without Replacement] */
        /*  Wong, C.K. and Easton, M.C. (1980), An Efficient Method for Weighted
         */
        /*  Sampling Without Replacement, "SIAM Journal of Computing", Vol. 9,
         * pp. 111-113. */
        /*  */
        /*  Copyright 2008-2021. */
        /*  Written by FSDA team */
        /*  */
        /* <a href="matlab: docsearchFS('randsampleFS')">Link to the help
         * function</a> */
        /*  */
        /*  */
        /* $LastChangedDate::                      $: Date of the last commit */
        /*  */
        /*  Examples: */
        /* { */
        /*     %% randsampleFS with default options. */
        /*     % default method (1) is used. */
        /*     randsampleFS(1000,10) */
        /* } */
        /* { */
        /*     %% randsampleFS with optional argument set to method (2). */
        /*     method = 2; */
        /*     randsampleFS(100,10,method) */
        /* } */
        /* { */
        /*     % randsampleFS with optional arguments set to method (3). */
        /*     method = 3; */
        /*     % Here, being nsel so big wrt nsamp, it is likely to obtain
         * repetitions. */
        /*     randsampleFS(100,10,method) */
        /* } */
        /* { */
        /*     % randsampleFS Weighted Sampling Without Replacement. */
        /*     % Extract k=10 number in [-1000 -900] with gamma distributed
         * weights. */
        /*      population = -1000:1:-900; */
        /*      n = numel(population); */
        /*      wgts = sort(random('gamma',0.3,2,n,1),'descend'); */
        /*  */
        /*      k=10; */
        /*      y = randsampleFS(n,k,wgts); */
        /*      sample  = population(y); */
        /*       */
        /*      plot(wgts,'.r') */
        /*      hold on; */
        /*      text(y,wgts(y),'X'); */
        /*      title('Weight distribution with the extracted numbers
         * superimposed') */
        /* } */
        /*  Beginning of code */
        /*  randsampleFS needs to check the MATLAB version in use in order to:
         */
        /*  - decide the sampling method to use, and */
        /*  - use properly the optional parameter of randperm. */
        /*  In the first case  the release to check is R2012a, i.e. 7.14 */
        /*  In the second case the release to check is R2011b, i.e. 7.13 */
        /*  For the sake of computational efficiency, we just check the latest
         */
        /*  To pass the argument, use: */
        /*  after2012a = ~verLessThan('MATLAB','7.14'); */
        /*  choose the default sampling method */
        /*  Weighted Sampling Without Replacement */
        /*  This is done if the third argument is provided as a vector of
         * weights. */
        /*  Extract a random sample of k integers between 1 and n. */
        b_st.site = &jf_emlrtRSI;
        randperm(&b_st, n, p, s);
      }
      if ((b_i + 1 < 1) || (b_i + 1 > C->size[0])) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, C->size[0], &nb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      c_seq[1] = C->size[1];
      emlrtSubAssignSizeCheckR2012b(&c_seq[0], 2, &s->size[0], 2, &g_emlrtECI,
                                    (emlrtCTX)sp);
      loop_ub = s->size[1];
      for (i = 0; i < loop_ub; i++) {
        C->data[b_i + C->size[0] * i] = s->data[i];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
    /*          C=zeros(nselected,p); */
    /*          for i=1:nselected */
    /*              s=randsampleFS(n,p,method); */
    /*              C(i,:)=s; */
    /*          end */
  }
  emxFree_real_T(&b_seq);
  emxFree_real_T(&s);
  emxFree_real_T(&pascalM);
  emxFree_real_T(&seq);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (subsets.c) */
