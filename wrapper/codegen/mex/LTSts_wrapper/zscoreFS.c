/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * zscoreFS.c
 *
 * Code generation for function 'zscoreFS'
 *
 */

/* Include files */
#include "zscoreFS.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_mexutil.h"
#include "LTSts_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "median.h"
#include "mod.h"
#include "pdist.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "vvarstd.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo vt_emlrtRSI = {
    272,                                               /* lineNo */
    "zscoreFS",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\zscoreFS.m" /* pathName */
};

static emlrtRSInfo wt_emlrtRSI = {
    336,                                               /* lineNo */
    "zscoreFS/zscoreFScore",                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\zscoreFS.m" /* pathName */
};

static emlrtRSInfo xt_emlrtRSI = {
    403,                                               /* lineNo */
    "zscoreFS/zscoreFScore",                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\zscoreFS.m" /* pathName */
};

static emlrtRSInfo yt_emlrtRSI = {
    32,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m" /* pathName
                                                                         */
};

static emlrtRSInfo au_emlrtRSI = {
    98,                                               /* lineNo */
    "Qn",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m" /* pathName */
};

static emlrtRSInfo bu_emlrtRSI = {
    143,                                              /* lineNo */
    "Qn/Qncore",                                      /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m" /* pathName */
};

static emlrtRSInfo cu_emlrtRSI = {
    149,                                              /* lineNo */
    "Qn/Qncore",                                      /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m" /* pathName */
};

static emlrtRSInfo du_emlrtRSI = {
    151,                                              /* lineNo */
    "Qn/Qncore",                                      /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m" /* pathName */
};

static emlrtRSInfo eu_emlrtRSI = {
    162,                                              /* lineNo */
    "Qn/Qncore",                                      /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m" /* pathName */
};

static emlrtRSInfo fu_emlrtRSI = {
    183,                                              /* lineNo */
    "Qn/Qncore",                                      /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m" /* pathName */
};

static emlrtRSInfo vu_emlrtRSI = {
    400,                                               /* lineNo */
    "zscoreFS/zscoreFScore",                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\zscoreFS.m" /* pathName */
};

static emlrtRSInfo wu_emlrtRSI = {
    104,                                              /* lineNo */
    "Sn",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m" /* pathName */
};

static emlrtRSInfo xu_emlrtRSI = {
    149,                                              /* lineNo */
    "Sn/Sncore",                                      /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m" /* pathName */
};

static emlrtRSInfo yu_emlrtRSI = {
    155,                                              /* lineNo */
    "Sn/Sncore",                                      /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m" /* pathName */
};

static emlrtRSInfo av_emlrtRSI = {
    157,                                              /* lineNo */
    "Sn/Sncore",                                      /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m" /* pathName */
};

static emlrtRSInfo bv_emlrtRSI = {
    164,                                              /* lineNo */
    "Sn/Sncore",                                      /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m" /* pathName */
};

static emlrtRSInfo cv_emlrtRSI = {
    170,                                              /* lineNo */
    "Sn/Sncore",                                      /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m" /* pathName */
};

static emlrtRSInfo dv_emlrtRSI = {
    406,                                               /* lineNo */
    "zscoreFS/zscoreFScore",                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\zscoreFS.m" /* pathName */
};

static emlrtRSInfo ev_emlrtRSI = {
    102,      /* lineNo */
    "varstd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\varstd"
    ".m" /* pathName */
};

static emlrtBCInfo en_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    174,                                               /* lineNo */
    27,                                                /* colNo */
    "distord",                                         /* aName */
    "Qn/Qncore",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo ii_emlrtDCI = {
    174,                                               /* lineNo */
    27,                                                /* colNo */
    "Qn/Qncore",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo fn_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    151,                                               /* lineNo */
    60,                                                /* colNo */
    "sy",                                              /* aName */
    "Qn/Qncore",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo gn_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    151,                                               /* lineNo */
    43,                                                /* colNo */
    "sy",                                              /* aName */
    "Qn/Qncore",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo hn_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    149,                                               /* lineNo */
    60,                                                /* colNo */
    "sy",                                              /* aName */
    "Qn/Qncore",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo in_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    149,                                               /* lineNo */
    43,                                                /* colNo */
    "sy",                                              /* aName */
    "Qn/Qncore",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo jn_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    272,                                                /* lineNo */
    5,                                                  /* colNo */
    "xsor",                                             /* aName */
    "zscoreFS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\zscoreFS.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtBCInfo kn_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    149,                                               /* lineNo */
    21,                                                /* colNo */
    "xbinned",                                         /* aName */
    "Qn/Qncore",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ln_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    151,                                               /* lineNo */
    21,                                                /* colNo */
    "xbinned",                                         /* aName */
    "Qn/Qncore",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo tn_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    171,                                               /* lineNo */
    25,                                                /* colNo */
    "med_i",                                           /* aName */
    "Sn/Sncore",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo un_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    168,                                               /* lineNo */
    30,                                                /* colNo */
    "dist_xi_xj_sor",                                  /* aName */
    "Sn/Sncore",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo vn_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    157,                                               /* lineNo */
    60,                                                /* colNo */
    "sy",                                              /* aName */
    "Sn/Sncore",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo wn_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    157,                                               /* lineNo */
    43,                                                /* colNo */
    "sy",                                              /* aName */
    "Sn/Sncore",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo xn_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    155,                                               /* lineNo */
    60,                                                /* colNo */
    "sy",                                              /* aName */
    "Sn/Sncore",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo yn_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    155,                                               /* lineNo */
    43,                                                /* colNo */
    "sy",                                              /* aName */
    "Sn/Sncore",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ao_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    155,                                               /* lineNo */
    21,                                                /* colNo */
    "xbinned",                                         /* aName */
    "Sn/Sncore",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo bo_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    157,                                               /* lineNo */
    21,                                                /* colNo */
    "xbinned",                                         /* aName */
    "Sn/Sncore",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtRTEInfo us_emlrtRTEI = {
    336,                                               /* lineNo */
    13,                                                /* colNo */
    "zscoreFS",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\zscoreFS.m" /* pName */
};

static emlrtRTEInfo vs_emlrtRTEI = {
    403,                                               /* lineNo */
    22,                                                /* colNo */
    "zscoreFS",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\zscoreFS.m" /* pName */
};

static emlrtRTEInfo ws_emlrtRTEI = {
    98,                                               /* lineNo */
    24,                                               /* colNo */
    "Qn",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m" /* pName */
};

static emlrtRTEInfo xs_emlrtRTEI = {
    154,                                              /* lineNo */
    13,                                               /* colNo */
    "Qn",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m" /* pName */
};

static emlrtRTEInfo ys_emlrtRTEI = {
    149,                                              /* lineNo */
    40,                                               /* colNo */
    "Qn",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m" /* pName */
};

static emlrtRTEInfo at_emlrtRTEI = {
    151,                                              /* lineNo */
    40,                                               /* colNo */
    "Qn",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m" /* pName */
};

static emlrtRTEInfo bt_emlrtRTEI = {
    145,                                              /* lineNo */
    13,                                               /* colNo */
    "Qn",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m" /* pName */
};

static emlrtRTEInfo ct_emlrtRTEI = {
    162,                                              /* lineNo */
    9,                                                /* colNo */
    "Qn",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Qn.m" /* pName */
};

static emlrtRTEInfo lt_emlrtRTEI = {
    400,                                               /* lineNo */
    22,                                                /* colNo */
    "zscoreFS",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\zscoreFS.m" /* pName */
};

static emlrtRTEInfo mt_emlrtRTEI = {
    104,                                              /* lineNo */
    24,                                               /* colNo */
    "Sn",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m" /* pName */
};

static emlrtRTEInfo nt_emlrtRTEI = {
    160,                                              /* lineNo */
    13,                                               /* colNo */
    "Sn",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m" /* pName */
};

static emlrtRTEInfo ot_emlrtRTEI = {
    155,                                              /* lineNo */
    40,                                               /* colNo */
    "Sn",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m" /* pName */
};

static emlrtRTEInfo pt_emlrtRTEI = {
    157,                                              /* lineNo */
    40,                                               /* colNo */
    "Sn",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m" /* pName */
};

static emlrtRTEInfo qt_emlrtRTEI = {
    170,                                              /* lineNo */
    9,                                                /* colNo */
    "Sn",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m" /* pName */
};

static emlrtRTEInfo rt_emlrtRTEI = {
    151,                                              /* lineNo */
    13,                                               /* colNo */
    "Sn",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m" /* pName */
};

static emlrtRTEInfo st_emlrtRTEI = {
    164,                                              /* lineNo */
    9,                                                /* colNo */
    "Sn",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m" /* pName */
};

static emlrtRTEInfo tt_emlrtRTEI = {
    168,                                              /* lineNo */
    9,                                                /* colNo */
    "Sn",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m" /* pName */
};

static emlrtRTEInfo ut_emlrtRTEI = {
    164,                                              /* lineNo */
    33,                                               /* colNo */
    "Sn",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\Sn.m" /* pName */
};

/* Function Definitions */
void b_zscoreFS(const emlrtStack *sp, const emxArray_real_T *X,
                emxArray_real_T *Z, real_T *mu, real_T *sigma)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_real_T *b_xsor;
  emxArray_real_T *c;
  emxArray_real_T *dist_xi_xj_sor;
  emxArray_real_T *med_j;
  emxArray_real_T *xbinned;
  emxArray_real_T *xsor;
  real_T b_nbins;
  real_T d;
  real_T ninbins;
  int32_T c_xsor[2];
  int32_T acoef;
  int32_T b_k;
  int32_T half;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T loop_ub;
  int32_T nbins;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &xsor, 1, &us_emlrtRTEI, true);
  /* zscoreFS computes (robust) standardized z scores */
  /*  */
  /* <a href="matlab: docsearchFS('zscoreFS')">Link to the help function</a> */
  /*  */
  /*  */
  /*     X can be a vector of length(n) or data matrix containing n observations
   * on v */
  /*        variables or 3D array of size n-by-v-by-r. */
  /*    Z = zscoreFS(X) returns a centered, scaled version of X, with the same
   * size */
  /*    as X. For vector input X, Z is the vector of z-scores */
  /*  */
  /*       (X-median(X)) ./ (1.4826* mad(X)). */
  /*  */
  /*    Z=zscoreFS(X,loc,scale) returns a centered, scaled version of X, the */
  /*    same size as X using location and scale are specified in input */
  /*    parameters 'loc' and 'scale'. For vector input X, Z is the vector of */
  /*    z-scores */
  /*  */
  /*       (X-location(X)) ./ scale(X). */
  /*  */
  /*    where scaled(X) is the corrected estimator of scale (corrected in the */
  /*    sense that it is multiplied by a coefficient to achieve consistency for
   */
  /*    normally distributed data).   */
  /*  */
  /*  */
  /*    Z=zscoreFS(X,loc,scale) computes robust standardized zscores using the
   */
  /*    estimates of location and scale specified in loc and scale strings. If
   */
  /*    X is a 2D matrix, zscores are computed using loc and scale along each */
  /*    column of X. If X is a 3D array zscores are */
  /*    computed using the location and scale along the first */
  /*    non-singleton dimension. For example if X is n-by-v-by-r (with n>1) and
   */
  /*    loc='median'; n-by-r medians are computed for each of the n rows of X */
  /*    and each third dimension r. */
  /*  */
  /*  */
  /*    Z=zscoreFS(X,loc) computes standardized zscores using the */
  /*    estimates of location specified in loc and the mad as measure of */
  /*    dispersion. */
  /*  */
  /*  */
  /*    [Z,mu,sigma] = zscoreFS(X) also returns median(X) in mu and mad in */
  /*    sigma. */
  /*  */
  /*    [Z,mu,sigma] = zscoreFS(X,loc,scale) also returns the estimates of
   * location */
  /*    in mu and of scale in sigma as specified in loc and scale strings. */
  /*  */
  /*    Z=zscoreFS(X,loc,scale,dim) computes robust standardized zscores along
   */
  /*    the dimension dim of X using the estimates of location and scale */
  /*    specified in loc and scale strings. dim standardizes X by working along
   */
  /*    the dimension dim of X. For example if X is a two dimensional matrix */
  /*    dim=2 (default) standardizes the columns of X else if dim=1 */
  /*    standardizes the rows. If X is a three dimensional dim = 1 standardizes
   */
  /*    the columns, dim =2 standardizes the rows and dim =3 standardizes the */
  /*    third dimension. */
  /*  */
  /*    zscoreFS is an extension of function zscore of statistic toolbox */
  /*    because it enables to specify alternative measures of location and */
  /*    scale. */
  /*  */
  /*  */
  /*   Required input arguments: */
  /*    */
  /*  X :           Input data. Vector or Matrix or 3D array. Vector  of */
  /*                length n or data matrix containing n */
  /*                observations on v variables or 3D array of size */
  /*                n-by-v-by-r. */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
  /*  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    loc : location measure to use. 'median' (default) or 'mean'. */
  /*          String which specifies the location measure to use. The default */
  /*          value is 'median'.  */
  /*                Example - 'median' */
  /*                Data Types - character */
  /*  scale : scale measure to use. 'mad' (default) or 'Qn' or 'Sn' or 'std' or
   */
  /*          moddmadp'. */
  /*          String which specifies the dispersion measure to use */
  /*            'mad' is the default. Traditional (corrected) mad is */
  /*            $Me(|x_i-Me(X)|)/norminv(3/4)$; */
  /*            'Qn' first quartile of interpoint distances $|x_i-x_j|$
   * corrected */
  /*            by the consistency factor. See function Qn.m; */
  /*            'Sn' robust Gini's average difference index corrected by the */
  /*            consistency factor. See function Sn.m; */
  /*            'std' Unbiased standard deviations. See function std.m;  */
  /*            'modmadp'. Modified mad where the last letter(s) p of string
   * modmap */
  /*                  is (are) a number converted to string necessary to */
  /*                  compute the modified MAD.  */
  /*        Modified MAD = (order statistic $ceil((n+p-1)/2)$ of $|x_i-Me(X)|$
   */
  /*                  + order statistic $floor((n+p-1)/2+1)$ of $|x_i-Me(X)|)$
   */
  /*                  / $(2 \sigma)$ where $\sigma= */
  /*                  norminv(0.5*((n+p-1)/(2*n)+1))$. */
  /*                   Note that $p$ is different from $v$ (columns of X if X is
   * a */
  /*                   matrix) and must be supplied by the user. */
  /*                    For example if p=5 then the user can supply the string
   * 'modmad5' */
  /*                    as follows.  p=5; modmadp=['modmap' num2str(p)]; */
  /*                Example - 'mad' */
  /*                Data Types - character */
  /*   dim  :   Dimension to operate along. Positive integer scalar.  */
  /*            Dimension to operate along, specified as a positive integer */
  /*            scalar. If no value is specified, then the default is the first
   */
  /*            array dimension whose size does not equal 1. */
  /*                Example - 2 */
  /*            Data Types -single | double | int8 | int16 | int32 | int64
   * |uint8 | uint16 | uint32 | uint64 */
  /*  */
  /*  */
  /*   Output:  */
  /*  */
  /*        Z : centered, scaled version of X. Array with the same dimension as
   * input X. */
  /*            Array with the same size as X using location and scale are
   * specified in input */
  /*            parameters 'loc' and 'scale'. For vector input X, Z is the
   * vector of */
  /*             z-scores */
  /*            (X-location(X)) ./ scale(X). */
  /*    mu : location estimate. Scalar, vector or matrix depending on the size
   * of input matrix X. */
  /*            Estimates of location specified in loc input string. */
  /*   sigma : scale estimate. Scalar, vector or matrix depending on the size of
   * input matrix X. */
  /*            Estimates of scale specified in scale input string. */
  /*  */
  /*  See also: zscore, Qn, Sn, MCD, Smult, MMmult, FSM */
  /*  */
  /*  */
  /*  References: */
  /*  */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('zscoreFS')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples */
  /* { */
  /*     % Scale using medians and mads. */
  /*     % zscoreFS with all default options (that is remove the medians and */
  /*     % divide by mads) */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+10; */
  /*     [out]=zscoreFS(Ycont); */
  /* } */
  /* { */
  /*     % Scale using mean and mads. */
  /*     % Computes standardized zscores using mean and mads */
  /*     % estimates of location the medians and the measure of dispersion */
  /*     % specified in scale */
  /*     loc='mean' */
  /*     X=randn(10,2); */
  /*     Z=zscoreFS(X,loc,'mad');  */
  /* } */
  /* { */
  /*     % Remove the medians and divide by Qn. */
  /*     n=200; */
  /*     v=1; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+10; */
  /*     [out]=zscoreFS(Ycont,[],'Qn'); */
  /*     % Alternatively it is possible to use the following sintax */
  /*     [out]=zscoreFS(Ycont,'median','Qn'); */
  /* } */
  /* { */
  /*     % Examples with 3D arrays. */
  /*     n=200; */
  /*     v=3; */
  /*     q=5; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v,q); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:,:)=Ycont(1:5,:,:)+10; */
  /*     [out1,Mu,Sigma]=zscoreFS(Ycont,[],'Sn',1); */
  /*     % [out,Mu1,Sigma1]=zscoreFS(Ycont,[],'Sn',1); */
  /* } */
  /* { */
  /*     % Report also location and scale measures which have have been used. */
  /*     % zscoreFS produces the same output as function zscore of statistics */
  /*     % toolbox if centroid is arithmetic mean and scale measure is the */
  /*     % standard deviation */
  /*     X=randn(10,3,6); */
  /*     [Z,mu,sig]=zscoreFS(X,'mean','std',3); */
  /*     [Z1,mu1,sig1]=zscore(X,[],3); */
  /*     if isequal(Z,Z1) + isequal(mu,mu1) + isequal(sig,sig) ==3 */
  /*         disp('Everything is equal') */
  /*     else */
  /*         disp('Equality not reached') */
  /*     end */
  /* } */
  /* { */
  /*     % 3D arrays with dim=1, dim=2 and dim=3. */
  /*     n=200; */
  /*     v=3; */
  /*     q=5; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v,q); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:,:)=Ycont(1:5,:,:)+10; */
  /*     scale='Qn'; */
  /*     loc='mean'; */
  /*     dim=2; % work along rows */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Ycont,loc,scale,dim); */
  /*     isequal(Z(3,:,2)',zscoreFS(Ycont(3,:,2),loc,scale)) */
  /*  */
  /*     scale='Qn'; */
  /*     loc='median'; */
  /*     dim=1; % work along columns */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Ycont,loc,scale,dim); */
  /*     isequal(Z(:,2,4),zscoreFS(Ycont(:,2,4),loc,scale)) */
  /*  */
  /*     scale='Sn'; */
  /*     loc='median'; */
  /*     dim=3; % work along third dimension */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Ycont,loc,scale,dim); */
  /*     isequal(squeeze(Z(7,2,:)),zscoreFS(squeeze(Ycont(7,2,:)),loc,scale)) */
  /* } */
  /* { */
  /*     % Example of use of modmad as a scale measure. */
  /*     p=3; */
  /*     X=randn(100,p); */
  /*     loc='median'; */
  /*     scale=['modmad' num2str(p)]; */
  /*     % Project the data using v vectors    */
  /*     v=10; */
  /*     proj=randn(p,v); */
  /*     Y=X*proj; */
  /*     % Standardize the n projected points using median and modified MAD */
  /*     % Note that Y has v columns but the original matrix X has p columns */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Y,loc,scale);    */
  /*  */
  /* } */
  /*  Beginning of code */
  /*  Input is a column  vector */
  st.site = &vt_emlrtRSI;
  half = (int32_T)muDoubleScalarFloor((real_T)X->size[0] / 2.0);
  b_st.site = &wt_emlrtRSI;
  i = xsor->size[0];
  xsor->size[0] = X->size[0];
  emxEnsureCapacity_real_T(&b_st, xsor, i, &us_emlrtRTEI);
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    xsor->data[i] = X->data[i];
  }
  c_st.site = &yt_emlrtRSI;
  b_sort(&c_st, xsor);
  if (half + 1 > xsor->size[0]) {
    emlrtDynamicBoundsCheckR2012b(half + 1, 1, xsor->size[0], &jn_emlrtBCI,
                                  &st);
  }
  *mu = xsor->data[half];
  if (half << 1 == X->size[0]) {
    /*  Average if even number of elements */
    if ((half < 1) || (half > xsor->size[0])) {
      emlrtDynamicBoundsCheckR2012b(half, 1, xsor->size[0], &jn_emlrtBCI, &st);
    }
    *mu = (xsor->data[half - 1] + xsor->data[half]) / 2.0;
  }
  b_st.site = &vu_emlrtRSI;
  /* Sn robust estimator of scale (robust version of Gini's average difference)
   */
  /*  */
  /* <a href="matlab: docsearchFS('Sn')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*   */
  /*     X  :   Input array. Vector | matrix | 3D array. */
  /*            Input array, specified as a vector, matrix, or 3D  array. */
  /*            For vectors, Qn(X) is the scale estimator of the elements in X.
   * For */
  /*            matrices, Qn(X) is a row vector containing the scale estimator
   */
  /*            value of each column.  For 3D arrays, Qn(X) is the robust scale
   */
  /*            estimator of the elements along the first non-singleton
   * dimension */
  /*            of X. */
  /*            Data Types -single | double | int8 | int16 | int32 | int64
   * |uint8 | uint16 | uint32 | uint64 */
  /*   dim  :   Dimension to operate along. Positive integer scalar.  */
  /*            Dimension to operate along, specified as a positive integer */
  /*            scalar. If no value is specified, then the default is the first
   */
  /*            array dimension whose size does not equal 1. */
  /*            Data Types -single | double | int8 | int16 | int32 | int64
   * |uint8 | uint16 | uint32 | uint64 */
  /*   */
  /*  Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*     y  :    robust estimator of scale. Scalar | Vector or 3D array.  */
  /*             Sn(X,dim) takes the robust estimator of scale along the */
  /*             dimension dim of X. */
  /*  */
  /*  More About: */
  /*  */
  /*    For vectors, Sn(X) is the scale estimator of the elements in X. For */
  /*    matrices, Sn(X) is a row vector containing the scale estimator value of
   */
  /*    each column.  For 3D arrays, Sn(X) is the robust scale estimator of the
   */
  /*    elements along the first non-singleton dimension of X. */
  /*  */
  /*    Sn(X,dim) takes the robust estimator along the dimension dim of X. */
  /*  */
  /*    $Sn= cn \times c \times med_i { med_j |x_i-x_j|}$, $i=1,2, ...n$, $j=1,
   * 2, ..., n$. */
  /*    For each $i$ we compute the median of $|x_i-x_j|$, $j=1, 2, ..., n$. */
  /*    This yields $n$ numbers, the median of which gives the final estimate of
   */
  /*    $S_n$. This estimator is the robust version of Gini's average
   * difference, */
  /*    which one would obtain when replacing medians by averages */
  /*    More in detail $Sn = cn \times c \times lomed_i { highmed_j */
  /*    |x_i-x_j|}$, $i=1,2, ...n$, $j=1, 2, ..., n$, where $lomed$ (low */
  /*    median) is $[(n+1)/2]$-th order statistic out of $n$ numbers) and */
  /*    $himed$ (high median) is the $([n/2]+1)$-th order statistic out of the
   */
  /*    $n$ numbers. $c$ is the so called asymptotic consistency factor and is
   */
  /*    equal to 1.1926 while $cn$ is a finite sample correction factor to make
   */
  /*    the estimator unbiased. */
  /*   */
  /*  See also: Qn */
  /*  */
  /*  References: */
  /*  */
  /*  Rousseeuw P.J. and Croux C., (1993), Alternatives to the median absolute
   */
  /*  deviation, "Journal of American Statistical Association", Vol. 88, pp. */
  /*  1273-1283 */
  /*  Croux C. and Rousseeuw P.J. (1992), Time-efficient algorithms for two */
  /*  highly robust estimators of scale, in "Computational Statistics", Volume
   * 1, */
  /*  eds. Y . Dodge and J. Whittaker, Heidelberg: Physika-Verlag, 41 1-428. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('Sn')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /* {  */
  /*     %% Sn with all default otpions. */
  /*     X = [1 2 4 4  7; */
  /*          3 4 6 6  8; */
  /*          5 6 8 8  10; */
  /*          5 7 10 12 1500]; */
  /*     y1=Sn(X) */
  /*     y2=Sn(X,2) */
  /* } */
  /*  Beginning of code */
  /*  Input is at least a two dimensional array */
  /*  Input is a matrix  dim=1 compute along columns */
  c_st.site = &wu_emlrtRSI;
  loop_ub = X->size[0];
  i = xsor->size[0];
  xsor->size[0] = X->size[0];
  emxEnsureCapacity_real_T(&c_st, xsor, i, &lt_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    xsor->data[i] = X->data[i];
  }
  i = X->size[0] - 1;
  nbins = X->size[0];
  /*  Do binning for big n */
  if (X->size[0] > 10000) {
    emxInit_real_T(&c_st, &xbinned, 1, &rt_emlrtRTEI, true);
    d_st.site = &xu_emlrtRSI;
    e_st.site = &yt_emlrtRSI;
    b_sort(&e_st, xsor);
    nbins = (int32_T)muDoubleScalarFloor((real_T)X->size[0] / 10.0);
    i1 = xbinned->size[0];
    xbinned->size[0] = nbins;
    emxEnsureCapacity_real_T(&c_st, xbinned, i1, &mt_emlrtRTEI);
    ninbins = muDoubleScalarFloor((real_T)X->size[0] / (real_T)nbins);
    emxInit_real_T(&c_st, &b_xsor, 1, &pt_emlrtRTEI, true);
    for (loop_ub = 0; loop_ub < nbins; loop_ub++) {
      if ((b_mod((real_T)i + 1.0, nbins) != 0.0) && (loop_ub + 1 == nbins)) {
        b_nbins = (((real_T)loop_ub + 1.0) - 1.0) * ninbins + 1.0;
        if (b_nbins > (real_T)i + 1.0) {
          i1 = 0;
          acoef = 0;
        } else {
          if ((int32_T)b_nbins > xsor->size[0]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_nbins, 1, xsor->size[0],
                                          &yn_emlrtBCI, &c_st);
          }
          i1 = (int32_T)b_nbins - 1;
          if ((i + 1 < 1) || (i + 1 > xsor->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i + 1, 1, xsor->size[0], &xn_emlrtBCI,
                                          &c_st);
          }
          acoef = i + 1;
        }
        c_xsor[0] = 1;
        half = acoef - i1;
        c_xsor[1] = half;
        d_st.site = &yu_emlrtRSI;
        indexShapeCheck(&d_st, xsor->size[0], c_xsor);
        acoef = b_xsor->size[0];
        b_xsor->size[0] = half;
        emxEnsureCapacity_real_T(&c_st, b_xsor, acoef, &ot_emlrtRTEI);
        for (acoef = 0; acoef < half; acoef++) {
          b_xsor->data[acoef] = xsor->data[i1 + acoef];
        }
        if (loop_ub + 1 > xbinned->size[0]) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, xbinned->size[0],
                                        &ao_emlrtBCI, &c_st);
        }
        d_st.site = &yu_emlrtRSI;
        xbinned->data[loop_ub] = median(&d_st, b_xsor);
      } else {
        b_nbins = (((real_T)loop_ub + 1.0) - 1.0) * ninbins + 1.0;
        d = ((real_T)loop_ub + 1.0) * ninbins;
        if (b_nbins > d) {
          i1 = 0;
          acoef = 0;
        } else {
          if (((int32_T)b_nbins < 1) || ((int32_T)b_nbins > xsor->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_nbins, 1, xsor->size[0],
                                          &wn_emlrtBCI, &c_st);
          }
          i1 = (int32_T)b_nbins - 1;
          if (((int32_T)d < 1) || ((int32_T)d > xsor->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, xsor->size[0],
                                          &vn_emlrtBCI, &c_st);
          }
          acoef = (int32_T)d;
        }
        c_xsor[0] = 1;
        half = acoef - i1;
        c_xsor[1] = half;
        d_st.site = &av_emlrtRSI;
        indexShapeCheck(&d_st, xsor->size[0], c_xsor);
        acoef = b_xsor->size[0];
        b_xsor->size[0] = half;
        emxEnsureCapacity_real_T(&c_st, b_xsor, acoef, &pt_emlrtRTEI);
        for (acoef = 0; acoef < half; acoef++) {
          b_xsor->data[acoef] = xsor->data[i1 + acoef];
        }
        if (loop_ub + 1 > xbinned->size[0]) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, xbinned->size[0],
                                        &bo_emlrtBCI, &c_st);
        }
        d_st.site = &av_emlrtRSI;
        xbinned->data[loop_ub] = median(&d_st, b_xsor);
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&c_st);
      }
    }
    emxFree_real_T(&b_xsor);
    i = xsor->size[0];
    xsor->size[0] = xbinned->size[0];
    emxEnsureCapacity_real_T(&c_st, xsor, i, &nt_emlrtRTEI);
    loop_ub = xbinned->size[0];
    for (i = 0; i < loop_ub; i++) {
      xsor->data[i] = xbinned->data[i];
    }
    emxFree_real_T(&xbinned);
    /*  Redefine x with binned x */
    /*  Redefine n with number of bins */
  }
  emxInit_real_T(&c_st, &c, 2, &ut_emlrtRTEI, true);
  d_st.site = &bv_emlrtRSI;
  i = c->size[0] * c->size[1];
  c->size[0] = xsor->size[0];
  c->size[1] = xsor->size[0];
  emxEnsureCapacity_real_T(&d_st, c, i, &kl_emlrtRTEI);
  if (xsor->size[0] != 0) {
    half = (xsor->size[0] != 1);
    i = xsor->size[0] - 1;
    for (k = 0; k <= i; k++) {
      loop_ub = half * k;
      acoef = (xsor->size[0] != 1);
      i1 = c->size[0] - 1;
      for (b_k = 0; b_k <= i1; b_k++) {
        c->data[b_k + c->size[0] * k] =
            xsor->data[acoef * b_k] - xsor->data[loop_ub];
      }
    }
  }
  emxInit_real_T(&d_st, &dist_xi_xj_sor, 2, &st_emlrtRTEI, true);
  e_st.site = &bv_emlrtRSI;
  f_st.site = &vr_emlrtRSI;
  half = c->size[0] * c->size[1];
  i = dist_xi_xj_sor->size[0] * dist_xi_xj_sor->size[1];
  dist_xi_xj_sor->size[0] = c->size[0];
  dist_xi_xj_sor->size[1] = c->size[1];
  emxEnsureCapacity_real_T(&f_st, dist_xi_xj_sor, i, &yr_emlrtRTEI);
  g_st.site = &wr_emlrtRSI;
  if ((1 <= half) && (half > 2147483646)) {
    h_st.site = &pf_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  for (k = 0; k < half; k++) {
    dist_xi_xj_sor->data[k] = muDoubleScalarAbs(c->data[k]);
  }
  emxFree_real_T(&c);
  e_st.site = &yt_emlrtRSI;
  d_sort(&e_st, dist_xi_xj_sor);
  /*  For each i compute the median of |x_i-x_j| that is take di order */
  /*  statistic of rank [(n+1)/2] */
  half = (int32_T)muDoubleScalarFloor(((real_T)nbins + 1.0) / 2.0);
  if ((half < 1) || (half > dist_xi_xj_sor->size[0])) {
    emlrtDynamicBoundsCheckR2012b(half, 1, dist_xi_xj_sor->size[0],
                                  &un_emlrtBCI, &c_st);
  }
  emxInit_real_T(&c_st, &med_j, 2, &tt_emlrtRTEI, true);
  d_st.site = &cv_emlrtRSI;
  loop_ub = dist_xi_xj_sor->size[1];
  i = med_j->size[0] * med_j->size[1];
  med_j->size[0] = 1;
  med_j->size[1] = dist_xi_xj_sor->size[1];
  emxEnsureCapacity_real_T(&d_st, med_j, i, &qt_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    med_j->data[i] =
        dist_xi_xj_sor->data[(half + dist_xi_xj_sor->size[0] * i) - 1];
  }
  emxFree_real_T(&dist_xi_xj_sor);
  e_st.site = &yt_emlrtRSI;
  c_sort(&e_st, med_j);
  half = (int32_T)muDoubleScalarFloor((real_T)nbins / 2.0);
  if (half + 1 > med_j->size[1]) {
    emlrtDynamicBoundsCheckR2012b(half + 1, 1, med_j->size[1], &tn_emlrtBCI,
                                  &c_st);
  }
  /*  Multiply the estimator also by cn a finite sample correction */
  /*  factor to make the estimator unbiased for finite samples (see p. 3 */
  /*  of Croux and Rousseeuw, 1992) or */
  /*  http://www.google.it/url?sa=t&rct=j&q=&esrc=s&source=web&cd=1&ved=0CDUQFjAA&url=http%3A%2F%2Fwww.researchgate.net%2Fpublication%2F228595593_Time-efficient_algorithms_for_two_highly_robust_estimators_of_scale%2Ffile%2F79e4150f52c2fcabb0.pdf&ei=ZCE5U_qHIqjU4QTMuIHwAQ&usg=AFQjCNERh4HiLgtkUGF1w4JU1380xhvKhA&bvm=bv.63808443,d.bGE
   */
  ninbins = 1.0;
  switch (nbins) {
  case 2:
    ninbins = 0.743;
    break;
  case 3:
    ninbins = 1.851;
    break;
  case 4:
    ninbins = 0.954;
    break;
  case 5:
    ninbins = 1.351;
    break;
  case 6:
    ninbins = 0.993;
    break;
  case 7:
    ninbins = 1.198;
    break;
  case 8:
    ninbins = 1.005;
    break;
  case 9:
    ninbins = 1.131;
    break;
  default:
    if (nbins == 0) {
      b_nbins = 0.0;
    } else {
      b_nbins = muDoubleScalarRem(nbins, 2.0);
    }
    if (b_nbins == 1.0) {
      ninbins = (real_T)nbins / ((real_T)nbins - 0.9);
    }
    break;
  }
  *sigma = ninbins * (1.1926 * med_j->data[half]);
  i = xsor->size[0];
  xsor->size[0] = X->size[0];
  emxEnsureCapacity_real_T(&st, xsor, i, &kl_emlrtRTEI);
  emxFree_real_T(&med_j);
  if (X->size[0] != 0) {
    acoef = (X->size[0] != 1);
    i = X->size[0] - 1;
    for (k = 0; k <= i; k++) {
      xsor->data[k] = X->data[acoef * k] - *mu;
    }
  }
  i = Z->size[0];
  Z->size[0] = xsor->size[0];
  emxEnsureCapacity_real_T(&st, Z, i, &kl_emlrtRTEI);
  if (xsor->size[0] != 0) {
    acoef = (xsor->size[0] != 1);
    i = xsor->size[0] - 1;
    for (k = 0; k <= i; k++) {
      Z->data[k] = xsor->data[acoef * k] / *sigma;
    }
  }
  emxFree_real_T(&xsor);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void c_zscoreFS(const emlrtStack *sp, const emxArray_real_T *X,
                emxArray_real_T *Z, real_T *mu, real_T *sigma)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *xsor;
  int32_T half;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &xsor, 1, &us_emlrtRTEI, true);
  /* zscoreFS computes (robust) standardized z scores */
  /*  */
  /* <a href="matlab: docsearchFS('zscoreFS')">Link to the help function</a> */
  /*  */
  /*  */
  /*     X can be a vector of length(n) or data matrix containing n observations
   * on v */
  /*        variables or 3D array of size n-by-v-by-r. */
  /*    Z = zscoreFS(X) returns a centered, scaled version of X, with the same
   * size */
  /*    as X. For vector input X, Z is the vector of z-scores */
  /*  */
  /*       (X-median(X)) ./ (1.4826* mad(X)). */
  /*  */
  /*    Z=zscoreFS(X,loc,scale) returns a centered, scaled version of X, the */
  /*    same size as X using location and scale are specified in input */
  /*    parameters 'loc' and 'scale'. For vector input X, Z is the vector of */
  /*    z-scores */
  /*  */
  /*       (X-location(X)) ./ scale(X). */
  /*  */
  /*    where scaled(X) is the corrected estimator of scale (corrected in the */
  /*    sense that it is multiplied by a coefficient to achieve consistency for
   */
  /*    normally distributed data).   */
  /*  */
  /*  */
  /*    Z=zscoreFS(X,loc,scale) computes robust standardized zscores using the
   */
  /*    estimates of location and scale specified in loc and scale strings. If
   */
  /*    X is a 2D matrix, zscores are computed using loc and scale along each */
  /*    column of X. If X is a 3D array zscores are */
  /*    computed using the location and scale along the first */
  /*    non-singleton dimension. For example if X is n-by-v-by-r (with n>1) and
   */
  /*    loc='median'; n-by-r medians are computed for each of the n rows of X */
  /*    and each third dimension r. */
  /*  */
  /*  */
  /*    Z=zscoreFS(X,loc) computes standardized zscores using the */
  /*    estimates of location specified in loc and the mad as measure of */
  /*    dispersion. */
  /*  */
  /*  */
  /*    [Z,mu,sigma] = zscoreFS(X) also returns median(X) in mu and mad in */
  /*    sigma. */
  /*  */
  /*    [Z,mu,sigma] = zscoreFS(X,loc,scale) also returns the estimates of
   * location */
  /*    in mu and of scale in sigma as specified in loc and scale strings. */
  /*  */
  /*    Z=zscoreFS(X,loc,scale,dim) computes robust standardized zscores along
   */
  /*    the dimension dim of X using the estimates of location and scale */
  /*    specified in loc and scale strings. dim standardizes X by working along
   */
  /*    the dimension dim of X. For example if X is a two dimensional matrix */
  /*    dim=2 (default) standardizes the columns of X else if dim=1 */
  /*    standardizes the rows. If X is a three dimensional dim = 1 standardizes
   */
  /*    the columns, dim =2 standardizes the rows and dim =3 standardizes the */
  /*    third dimension. */
  /*  */
  /*    zscoreFS is an extension of function zscore of statistic toolbox */
  /*    because it enables to specify alternative measures of location and */
  /*    scale. */
  /*  */
  /*  */
  /*   Required input arguments: */
  /*    */
  /*  X :           Input data. Vector or Matrix or 3D array. Vector  of */
  /*                length n or data matrix containing n */
  /*                observations on v variables or 3D array of size */
  /*                n-by-v-by-r. */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
  /*  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    loc : location measure to use. 'median' (default) or 'mean'. */
  /*          String which specifies the location measure to use. The default */
  /*          value is 'median'.  */
  /*                Example - 'median' */
  /*                Data Types - character */
  /*  scale : scale measure to use. 'mad' (default) or 'Qn' or 'Sn' or 'std' or
   */
  /*          moddmadp'. */
  /*          String which specifies the dispersion measure to use */
  /*            'mad' is the default. Traditional (corrected) mad is */
  /*            $Me(|x_i-Me(X)|)/norminv(3/4)$; */
  /*            'Qn' first quartile of interpoint distances $|x_i-x_j|$
   * corrected */
  /*            by the consistency factor. See function Qn.m; */
  /*            'Sn' robust Gini's average difference index corrected by the */
  /*            consistency factor. See function Sn.m; */
  /*            'std' Unbiased standard deviations. See function std.m;  */
  /*            'modmadp'. Modified mad where the last letter(s) p of string
   * modmap */
  /*                  is (are) a number converted to string necessary to */
  /*                  compute the modified MAD.  */
  /*        Modified MAD = (order statistic $ceil((n+p-1)/2)$ of $|x_i-Me(X)|$
   */
  /*                  + order statistic $floor((n+p-1)/2+1)$ of $|x_i-Me(X)|)$
   */
  /*                  / $(2 \sigma)$ where $\sigma= */
  /*                  norminv(0.5*((n+p-1)/(2*n)+1))$. */
  /*                   Note that $p$ is different from $v$ (columns of X if X is
   * a */
  /*                   matrix) and must be supplied by the user. */
  /*                    For example if p=5 then the user can supply the string
   * 'modmad5' */
  /*                    as follows.  p=5; modmadp=['modmap' num2str(p)]; */
  /*                Example - 'mad' */
  /*                Data Types - character */
  /*   dim  :   Dimension to operate along. Positive integer scalar.  */
  /*            Dimension to operate along, specified as a positive integer */
  /*            scalar. If no value is specified, then the default is the first
   */
  /*            array dimension whose size does not equal 1. */
  /*                Example - 2 */
  /*            Data Types -single | double | int8 | int16 | int32 | int64
   * |uint8 | uint16 | uint32 | uint64 */
  /*  */
  /*  */
  /*   Output:  */
  /*  */
  /*        Z : centered, scaled version of X. Array with the same dimension as
   * input X. */
  /*            Array with the same size as X using location and scale are
   * specified in input */
  /*            parameters 'loc' and 'scale'. For vector input X, Z is the
   * vector of */
  /*             z-scores */
  /*            (X-location(X)) ./ scale(X). */
  /*    mu : location estimate. Scalar, vector or matrix depending on the size
   * of input matrix X. */
  /*            Estimates of location specified in loc input string. */
  /*   sigma : scale estimate. Scalar, vector or matrix depending on the size of
   * input matrix X. */
  /*            Estimates of scale specified in scale input string. */
  /*  */
  /*  See also: zscore, Qn, Sn, MCD, Smult, MMmult, FSM */
  /*  */
  /*  */
  /*  References: */
  /*  */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('zscoreFS')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples */
  /* { */
  /*     % Scale using medians and mads. */
  /*     % zscoreFS with all default options (that is remove the medians and */
  /*     % divide by mads) */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+10; */
  /*     [out]=zscoreFS(Ycont); */
  /* } */
  /* { */
  /*     % Scale using mean and mads. */
  /*     % Computes standardized zscores using mean and mads */
  /*     % estimates of location the medians and the measure of dispersion */
  /*     % specified in scale */
  /*     loc='mean' */
  /*     X=randn(10,2); */
  /*     Z=zscoreFS(X,loc,'mad');  */
  /* } */
  /* { */
  /*     % Remove the medians and divide by Qn. */
  /*     n=200; */
  /*     v=1; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+10; */
  /*     [out]=zscoreFS(Ycont,[],'Qn'); */
  /*     % Alternatively it is possible to use the following sintax */
  /*     [out]=zscoreFS(Ycont,'median','Qn'); */
  /* } */
  /* { */
  /*     % Examples with 3D arrays. */
  /*     n=200; */
  /*     v=3; */
  /*     q=5; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v,q); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:,:)=Ycont(1:5,:,:)+10; */
  /*     [out1,Mu,Sigma]=zscoreFS(Ycont,[],'Sn',1); */
  /*     % [out,Mu1,Sigma1]=zscoreFS(Ycont,[],'Sn',1); */
  /* } */
  /* { */
  /*     % Report also location and scale measures which have have been used. */
  /*     % zscoreFS produces the same output as function zscore of statistics */
  /*     % toolbox if centroid is arithmetic mean and scale measure is the */
  /*     % standard deviation */
  /*     X=randn(10,3,6); */
  /*     [Z,mu,sig]=zscoreFS(X,'mean','std',3); */
  /*     [Z1,mu1,sig1]=zscore(X,[],3); */
  /*     if isequal(Z,Z1) + isequal(mu,mu1) + isequal(sig,sig) ==3 */
  /*         disp('Everything is equal') */
  /*     else */
  /*         disp('Equality not reached') */
  /*     end */
  /* } */
  /* { */
  /*     % 3D arrays with dim=1, dim=2 and dim=3. */
  /*     n=200; */
  /*     v=3; */
  /*     q=5; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v,q); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:,:)=Ycont(1:5,:,:)+10; */
  /*     scale='Qn'; */
  /*     loc='mean'; */
  /*     dim=2; % work along rows */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Ycont,loc,scale,dim); */
  /*     isequal(Z(3,:,2)',zscoreFS(Ycont(3,:,2),loc,scale)) */
  /*  */
  /*     scale='Qn'; */
  /*     loc='median'; */
  /*     dim=1; % work along columns */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Ycont,loc,scale,dim); */
  /*     isequal(Z(:,2,4),zscoreFS(Ycont(:,2,4),loc,scale)) */
  /*  */
  /*     scale='Sn'; */
  /*     loc='median'; */
  /*     dim=3; % work along third dimension */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Ycont,loc,scale,dim); */
  /*     isequal(squeeze(Z(7,2,:)),zscoreFS(squeeze(Ycont(7,2,:)),loc,scale)) */
  /* } */
  /* { */
  /*     % Example of use of modmad as a scale measure. */
  /*     p=3; */
  /*     X=randn(100,p); */
  /*     loc='median'; */
  /*     scale=['modmad' num2str(p)]; */
  /*     % Project the data using v vectors    */
  /*     v=10; */
  /*     proj=randn(p,v); */
  /*     Y=X*proj; */
  /*     % Standardize the n projected points using median and modified MAD */
  /*     % Note that Y has v columns but the original matrix X has p columns */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Y,loc,scale);    */
  /*  */
  /* } */
  /*  Beginning of code */
  /*  Input is a column  vector */
  st.site = &vt_emlrtRSI;
  half = (int32_T)muDoubleScalarFloor((real_T)X->size[0] / 2.0);
  b_st.site = &wt_emlrtRSI;
  i = xsor->size[0];
  xsor->size[0] = X->size[0];
  emxEnsureCapacity_real_T(&b_st, xsor, i, &us_emlrtRTEI);
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    xsor->data[i] = X->data[i];
  }
  c_st.site = &yt_emlrtRSI;
  b_sort(&c_st, xsor);
  if (half + 1 > xsor->size[0]) {
    emlrtDynamicBoundsCheckR2012b(half + 1, 1, xsor->size[0], &jn_emlrtBCI,
                                  &st);
  }
  *mu = xsor->data[half];
  if (half << 1 == X->size[0]) {
    /*  Average if even number of elements */
    if ((half < 1) || (half > xsor->size[0])) {
      emlrtDynamicBoundsCheckR2012b(half, 1, xsor->size[0], &jn_emlrtBCI, &st);
    }
    *mu = (xsor->data[half - 1] + xsor->data[half]) / 2.0;
  }
  b_st.site = &dv_emlrtRSI;
  c_st.site = &ts_emlrtRSI;
  d_st.site = &ev_emlrtRSI;
  *sigma = vvarstd(&d_st, X, X->size[0]);
  i = xsor->size[0];
  xsor->size[0] = X->size[0];
  emxEnsureCapacity_real_T(&st, xsor, i, &kl_emlrtRTEI);
  if (X->size[0] != 0) {
    half = (X->size[0] != 1);
    i = X->size[0] - 1;
    for (loop_ub = 0; loop_ub <= i; loop_ub++) {
      xsor->data[loop_ub] = X->data[half * loop_ub] - *mu;
    }
  }
  i = Z->size[0];
  Z->size[0] = xsor->size[0];
  emxEnsureCapacity_real_T(&st, Z, i, &kl_emlrtRTEI);
  if (xsor->size[0] != 0) {
    half = (xsor->size[0] != 1);
    i = xsor->size[0] - 1;
    for (loop_ub = 0; loop_ub <= i; loop_ub++) {
      Z->data[loop_ub] = xsor->data[half * loop_ub] / *sigma;
    }
  }
  emxFree_real_T(&xsor);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void zscoreFS(const emlrtStack *sp, const emxArray_real_T *X,
              emxArray_real_T *Z, real_T *mu, real_T *sigma)
{
  static const int32_T iv[2] = {1, 17};
  static const int32_T iv1[2] = {1, 21};
  static const char_T varargin_2[21] = {'S', 'a', 'm', 'p', 'l', 'e', ' ',
                                        's', 'i', 'z', 'e', ' ', 't', 'o',
                                        'o', ' ', 's', 'm', 'a', 'l', 'l'};
  static const char_T varargin_1[17] = {'F', 'S', 'D', 'A', ':', 'Q',
                                        'n', ':', 'T', 'o', 'o', 'S',
                                        'm', 'a', 'l', 'l', 'n'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T *b_xsor;
  emxArray_real_T *distord;
  emxArray_real_T *xbinned;
  emxArray_real_T *xsor;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T d;
  real_T d1;
  real_T ninbins;
  int32_T c_xsor[2];
  int32_T half;
  int32_T i;
  int32_T i1;
  int32_T ii;
  int32_T loop_ub;
  int32_T nbins;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &xsor, 1, &us_emlrtRTEI, true);
  /* zscoreFS computes (robust) standardized z scores */
  /*  */
  /* <a href="matlab: docsearchFS('zscoreFS')">Link to the help function</a> */
  /*  */
  /*  */
  /*     X can be a vector of length(n) or data matrix containing n observations
   * on v */
  /*        variables or 3D array of size n-by-v-by-r. */
  /*    Z = zscoreFS(X) returns a centered, scaled version of X, with the same
   * size */
  /*    as X. For vector input X, Z is the vector of z-scores */
  /*  */
  /*       (X-median(X)) ./ (1.4826* mad(X)). */
  /*  */
  /*    Z=zscoreFS(X,loc,scale) returns a centered, scaled version of X, the */
  /*    same size as X using location and scale are specified in input */
  /*    parameters 'loc' and 'scale'. For vector input X, Z is the vector of */
  /*    z-scores */
  /*  */
  /*       (X-location(X)) ./ scale(X). */
  /*  */
  /*    where scaled(X) is the corrected estimator of scale (corrected in the */
  /*    sense that it is multiplied by a coefficient to achieve consistency for
   */
  /*    normally distributed data).   */
  /*  */
  /*  */
  /*    Z=zscoreFS(X,loc,scale) computes robust standardized zscores using the
   */
  /*    estimates of location and scale specified in loc and scale strings. If
   */
  /*    X is a 2D matrix, zscores are computed using loc and scale along each */
  /*    column of X. If X is a 3D array zscores are */
  /*    computed using the location and scale along the first */
  /*    non-singleton dimension. For example if X is n-by-v-by-r (with n>1) and
   */
  /*    loc='median'; n-by-r medians are computed for each of the n rows of X */
  /*    and each third dimension r. */
  /*  */
  /*  */
  /*    Z=zscoreFS(X,loc) computes standardized zscores using the */
  /*    estimates of location specified in loc and the mad as measure of */
  /*    dispersion. */
  /*  */
  /*  */
  /*    [Z,mu,sigma] = zscoreFS(X) also returns median(X) in mu and mad in */
  /*    sigma. */
  /*  */
  /*    [Z,mu,sigma] = zscoreFS(X,loc,scale) also returns the estimates of
   * location */
  /*    in mu and of scale in sigma as specified in loc and scale strings. */
  /*  */
  /*    Z=zscoreFS(X,loc,scale,dim) computes robust standardized zscores along
   */
  /*    the dimension dim of X using the estimates of location and scale */
  /*    specified in loc and scale strings. dim standardizes X by working along
   */
  /*    the dimension dim of X. For example if X is a two dimensional matrix */
  /*    dim=2 (default) standardizes the columns of X else if dim=1 */
  /*    standardizes the rows. If X is a three dimensional dim = 1 standardizes
   */
  /*    the columns, dim =2 standardizes the rows and dim =3 standardizes the */
  /*    third dimension. */
  /*  */
  /*    zscoreFS is an extension of function zscore of statistic toolbox */
  /*    because it enables to specify alternative measures of location and */
  /*    scale. */
  /*  */
  /*  */
  /*   Required input arguments: */
  /*    */
  /*  X :           Input data. Vector or Matrix or 3D array. Vector  of */
  /*                length n or data matrix containing n */
  /*                observations on v variables or 3D array of size */
  /*                n-by-v-by-r. */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
  /*  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    loc : location measure to use. 'median' (default) or 'mean'. */
  /*          String which specifies the location measure to use. The default */
  /*          value is 'median'.  */
  /*                Example - 'median' */
  /*                Data Types - character */
  /*  scale : scale measure to use. 'mad' (default) or 'Qn' or 'Sn' or 'std' or
   */
  /*          moddmadp'. */
  /*          String which specifies the dispersion measure to use */
  /*            'mad' is the default. Traditional (corrected) mad is */
  /*            $Me(|x_i-Me(X)|)/norminv(3/4)$; */
  /*            'Qn' first quartile of interpoint distances $|x_i-x_j|$
   * corrected */
  /*            by the consistency factor. See function Qn.m; */
  /*            'Sn' robust Gini's average difference index corrected by the */
  /*            consistency factor. See function Sn.m; */
  /*            'std' Unbiased standard deviations. See function std.m;  */
  /*            'modmadp'. Modified mad where the last letter(s) p of string
   * modmap */
  /*                  is (are) a number converted to string necessary to */
  /*                  compute the modified MAD.  */
  /*        Modified MAD = (order statistic $ceil((n+p-1)/2)$ of $|x_i-Me(X)|$
   */
  /*                  + order statistic $floor((n+p-1)/2+1)$ of $|x_i-Me(X)|)$
   */
  /*                  / $(2 \sigma)$ where $\sigma= */
  /*                  norminv(0.5*((n+p-1)/(2*n)+1))$. */
  /*                   Note that $p$ is different from $v$ (columns of X if X is
   * a */
  /*                   matrix) and must be supplied by the user. */
  /*                    For example if p=5 then the user can supply the string
   * 'modmad5' */
  /*                    as follows.  p=5; modmadp=['modmap' num2str(p)]; */
  /*                Example - 'mad' */
  /*                Data Types - character */
  /*   dim  :   Dimension to operate along. Positive integer scalar.  */
  /*            Dimension to operate along, specified as a positive integer */
  /*            scalar. If no value is specified, then the default is the first
   */
  /*            array dimension whose size does not equal 1. */
  /*                Example - 2 */
  /*            Data Types -single | double | int8 | int16 | int32 | int64
   * |uint8 | uint16 | uint32 | uint64 */
  /*  */
  /*  */
  /*   Output:  */
  /*  */
  /*        Z : centered, scaled version of X. Array with the same dimension as
   * input X. */
  /*            Array with the same size as X using location and scale are
   * specified in input */
  /*            parameters 'loc' and 'scale'. For vector input X, Z is the
   * vector of */
  /*             z-scores */
  /*            (X-location(X)) ./ scale(X). */
  /*    mu : location estimate. Scalar, vector or matrix depending on the size
   * of input matrix X. */
  /*            Estimates of location specified in loc input string. */
  /*   sigma : scale estimate. Scalar, vector or matrix depending on the size of
   * input matrix X. */
  /*            Estimates of scale specified in scale input string. */
  /*  */
  /*  See also: zscore, Qn, Sn, MCD, Smult, MMmult, FSM */
  /*  */
  /*  */
  /*  References: */
  /*  */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('zscoreFS')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples */
  /* { */
  /*     % Scale using medians and mads. */
  /*     % zscoreFS with all default options (that is remove the medians and */
  /*     % divide by mads) */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+10; */
  /*     [out]=zscoreFS(Ycont); */
  /* } */
  /* { */
  /*     % Scale using mean and mads. */
  /*     % Computes standardized zscores using mean and mads */
  /*     % estimates of location the medians and the measure of dispersion */
  /*     % specified in scale */
  /*     loc='mean' */
  /*     X=randn(10,2); */
  /*     Z=zscoreFS(X,loc,'mad');  */
  /* } */
  /* { */
  /*     % Remove the medians and divide by Qn. */
  /*     n=200; */
  /*     v=1; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+10; */
  /*     [out]=zscoreFS(Ycont,[],'Qn'); */
  /*     % Alternatively it is possible to use the following sintax */
  /*     [out]=zscoreFS(Ycont,'median','Qn'); */
  /* } */
  /* { */
  /*     % Examples with 3D arrays. */
  /*     n=200; */
  /*     v=3; */
  /*     q=5; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v,q); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:,:)=Ycont(1:5,:,:)+10; */
  /*     [out1,Mu,Sigma]=zscoreFS(Ycont,[],'Sn',1); */
  /*     % [out,Mu1,Sigma1]=zscoreFS(Ycont,[],'Sn',1); */
  /* } */
  /* { */
  /*     % Report also location and scale measures which have have been used. */
  /*     % zscoreFS produces the same output as function zscore of statistics */
  /*     % toolbox if centroid is arithmetic mean and scale measure is the */
  /*     % standard deviation */
  /*     X=randn(10,3,6); */
  /*     [Z,mu,sig]=zscoreFS(X,'mean','std',3); */
  /*     [Z1,mu1,sig1]=zscore(X,[],3); */
  /*     if isequal(Z,Z1) + isequal(mu,mu1) + isequal(sig,sig) ==3 */
  /*         disp('Everything is equal') */
  /*     else */
  /*         disp('Equality not reached') */
  /*     end */
  /* } */
  /* { */
  /*     % 3D arrays with dim=1, dim=2 and dim=3. */
  /*     n=200; */
  /*     v=3; */
  /*     q=5; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v,q); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:,:)=Ycont(1:5,:,:)+10; */
  /*     scale='Qn'; */
  /*     loc='mean'; */
  /*     dim=2; % work along rows */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Ycont,loc,scale,dim); */
  /*     isequal(Z(3,:,2)',zscoreFS(Ycont(3,:,2),loc,scale)) */
  /*  */
  /*     scale='Qn'; */
  /*     loc='median'; */
  /*     dim=1; % work along columns */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Ycont,loc,scale,dim); */
  /*     isequal(Z(:,2,4),zscoreFS(Ycont(:,2,4),loc,scale)) */
  /*  */
  /*     scale='Sn'; */
  /*     loc='median'; */
  /*     dim=3; % work along third dimension */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Ycont,loc,scale,dim); */
  /*     isequal(squeeze(Z(7,2,:)),zscoreFS(squeeze(Ycont(7,2,:)),loc,scale)) */
  /* } */
  /* { */
  /*     % Example of use of modmad as a scale measure. */
  /*     p=3; */
  /*     X=randn(100,p); */
  /*     loc='median'; */
  /*     scale=['modmad' num2str(p)]; */
  /*     % Project the data using v vectors    */
  /*     v=10; */
  /*     proj=randn(p,v); */
  /*     Y=X*proj; */
  /*     % Standardize the n projected points using median and modified MAD */
  /*     % Note that Y has v columns but the original matrix X has p columns */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Y,loc,scale);    */
  /*  */
  /* } */
  /*  Beginning of code */
  /*  Input is a column  vector */
  st.site = &vt_emlrtRSI;
  half = (int32_T)muDoubleScalarFloor((real_T)X->size[0] / 2.0);
  b_st.site = &wt_emlrtRSI;
  i = xsor->size[0];
  xsor->size[0] = X->size[0];
  emxEnsureCapacity_real_T(&b_st, xsor, i, &us_emlrtRTEI);
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    xsor->data[i] = X->data[i];
  }
  c_st.site = &yt_emlrtRSI;
  b_sort(&c_st, xsor);
  if (half + 1 > xsor->size[0]) {
    emlrtDynamicBoundsCheckR2012b(half + 1, 1, xsor->size[0], &jn_emlrtBCI,
                                  &st);
  }
  *mu = xsor->data[half];
  if (half << 1 == X->size[0]) {
    /*  Average if even number of elements */
    if ((half < 1) || (half > xsor->size[0])) {
      emlrtDynamicBoundsCheckR2012b(half, 1, xsor->size[0], &jn_emlrtBCI, &st);
    }
    *mu = (xsor->data[half - 1] + xsor->data[half]) / 2.0;
  }
  b_st.site = &xt_emlrtRSI;
  /* Qn robust estimator of scale (first quartile of interpoint distances
   * $|x_i-x_j|$) */
  /*  */
  /* <a href="matlab: docsearchFS('Qn')">Link to the help function</a> */
  /*  */
  /*  */
  /*  Required input arguments: */
  /*   */
  /*     X  :   Input array. Vector | matrix | 3D array. */
  /*            Input array, specified as a vector, matrix, or 3D  array. */
  /*            For vectors, Qn(X) is the scale estimator of the elements in X.
   * For */
  /*            matrices, Qn(X) is a row vector containing the scale estimator
   */
  /*            value of each column.  For 3D arrays, Qn(X) is the robust scale
   */
  /*            estimator of the elements along the first non-singleton
   * dimension */
  /*            of X. */
  /*            Data Types -single | double | int8 | int16 | int32 | int64
   * |uint8 | uint16 | uint32 | uint64 */
  /*   dim  :   Dimension to operate along. Positive integer scalar.  */
  /*            Dimension to operate along, specified as a positive integer */
  /*            scalar. If no value is specified, then the default is the first
   */
  /*            array dimension whose size does not equal 1. */
  /*            Data Types -single | double | int8 | int16 | int32 | int64
   * |uint8 | uint16 | uint32 | uint64 */
  /*   */
  /*  Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*     y  :    robust estimator of scale. Scalar | Vector or 3D array.  */
  /*             Qn(X,dim) takes the robust estimator of scale along the */
  /*             dimension dim of X. */
  /*  */
  /*  More About: */
  /*  */
  /*    $Q_n$ is the first quartile of the distances { $|x_i-x_j|$; $i <j$} Note
   * that */
  /*    $Q_n$ does not need any location estimate. More in detail, let  */
  /*    $d_{(1)} \leq d_{(2)} \leq ... \leq d_{(m)}$ the ordered values of the
   */
  /*    $m$ */
  /*    differences $|x_i-x_j|$ with $i>j$ and $m = {n \choose 2}$.
   * $Q_n=d_{(k)}$ where */
  /*    $k= {[n/2]+1 \choose 2}$. Since $k$ is approximately $m/4$, $Q_n$ is
   * approximately */
  /*    the first quartile of the ordered distances $d_{(1)} \leq d_{(2)} \leq
   */
  /*    ... \leq d_{(m)}$. $Q_n$ is multiplyed by $c$ and $c_n$.  */
  /*    $c$ is the so called */
  /*    asymptotic consistency factor and is equal to 2.2219 while $c_n$ is a */
  /*    finite sample correction factor to make the estimator unbiased. */
  /*  */
  /*  */
  /*  See also: Sn */
  /*  */
  /*  References: */
  /*  */
  /*  Rousseeuw P.J. and Croux C., (1993), Alternatives to the median absolute
   */
  /*  deviation, "Journal of American Statistical Association", Vol. 88, pp. */
  /*  1273-1283 */
  /*  Croux C. and Rousseeuw P.J.(1992)  Time-efficient algorithms for two */
  /*  highly robust estimators of scale, in "Computational Statistics", Vol. 1,
   */
  /*  eds. Y . Dodge and J. Whittaker, Heidelberg: Physika-Verlag, 41 1-428. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('Qn')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /* {  */
  /*     %% Qn with all default otpions. */
  /*     X = [1 2 4 4  7; */
  /*          3 4 6 6  8; */
  /*          5 6 8 8  10; */
  /*          5 7 10 12 1500]; */
  /*     y1=Qn(X) */
  /*     y2=Qn(X,2) */
  /* } */
  /*  Beginning of code */
  /*  Input is at least a two dimensional array */
  /*  Input is a matrix  dim=1 compute along columns */
  c_st.site = &au_emlrtRSI;
  loop_ub = X->size[0];
  i = xsor->size[0];
  xsor->size[0] = X->size[0];
  emxEnsureCapacity_real_T(&c_st, xsor, i, &vs_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    xsor->data[i] = X->data[i];
  }
  i = X->size[0] - 1;
  nbins = X->size[0];
  /*  Do binning for big n */
  if (X->size[0] > 10000) {
    emxInit_real_T(&c_st, &xbinned, 1, &bt_emlrtRTEI, true);
    d_st.site = &bu_emlrtRSI;
    e_st.site = &yt_emlrtRSI;
    b_sort(&e_st, xsor);
    nbins = (int32_T)muDoubleScalarFloor((real_T)X->size[0] / 10.0);
    half = xbinned->size[0];
    xbinned->size[0] = nbins;
    emxEnsureCapacity_real_T(&c_st, xbinned, half, &ws_emlrtRTEI);
    ninbins = muDoubleScalarFloor((real_T)X->size[0] / (real_T)nbins);
    emxInit_real_T(&c_st, &b_xsor, 1, &at_emlrtRTEI, true);
    for (ii = 0; ii < nbins; ii++) {
      if ((b_mod((real_T)i + 1.0, nbins) != 0.0) && (ii + 1 == nbins)) {
        d = (((real_T)ii + 1.0) - 1.0) * ninbins + 1.0;
        if (d > (real_T)i + 1.0) {
          half = 0;
          i1 = 0;
        } else {
          if ((int32_T)d > xsor->size[0]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, xsor->size[0],
                                          &in_emlrtBCI, &c_st);
          }
          half = (int32_T)d - 1;
          if ((i + 1 < 1) || (i + 1 > xsor->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i + 1, 1, xsor->size[0], &hn_emlrtBCI,
                                          &c_st);
          }
          i1 = i + 1;
        }
        c_xsor[0] = 1;
        loop_ub = i1 - half;
        c_xsor[1] = loop_ub;
        d_st.site = &cu_emlrtRSI;
        indexShapeCheck(&d_st, xsor->size[0], c_xsor);
        i1 = b_xsor->size[0];
        b_xsor->size[0] = loop_ub;
        emxEnsureCapacity_real_T(&c_st, b_xsor, i1, &ys_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_xsor->data[i1] = xsor->data[half + i1];
        }
        if (ii + 1 > xbinned->size[0]) {
          emlrtDynamicBoundsCheckR2012b(ii + 1, 1, xbinned->size[0],
                                        &kn_emlrtBCI, &c_st);
        }
        d_st.site = &cu_emlrtRSI;
        xbinned->data[ii] = median(&d_st, b_xsor);
      } else {
        d = (((real_T)ii + 1.0) - 1.0) * ninbins + 1.0;
        d1 = ((real_T)ii + 1.0) * ninbins;
        if (d > d1) {
          half = 0;
          i1 = 0;
        } else {
          if (((int32_T)d < 1) || ((int32_T)d > xsor->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, xsor->size[0],
                                          &gn_emlrtBCI, &c_st);
          }
          half = (int32_T)d - 1;
          if (((int32_T)d1 < 1) || ((int32_T)d1 > xsor->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d1, 1, xsor->size[0],
                                          &fn_emlrtBCI, &c_st);
          }
          i1 = (int32_T)d1;
        }
        c_xsor[0] = 1;
        loop_ub = i1 - half;
        c_xsor[1] = loop_ub;
        d_st.site = &du_emlrtRSI;
        indexShapeCheck(&d_st, xsor->size[0], c_xsor);
        i1 = b_xsor->size[0];
        b_xsor->size[0] = loop_ub;
        emxEnsureCapacity_real_T(&c_st, b_xsor, i1, &at_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_xsor->data[i1] = xsor->data[half + i1];
        }
        if (ii + 1 > xbinned->size[0]) {
          emlrtDynamicBoundsCheckR2012b(ii + 1, 1, xbinned->size[0],
                                        &ln_emlrtBCI, &c_st);
        }
        d_st.site = &du_emlrtRSI;
        xbinned->data[ii] = median(&d_st, b_xsor);
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&c_st);
      }
    }
    emxFree_real_T(&b_xsor);
    i = xsor->size[0];
    xsor->size[0] = xbinned->size[0];
    emxEnsureCapacity_real_T(&c_st, xsor, i, &xs_emlrtRTEI);
    loop_ub = xbinned->size[0];
    for (i = 0; i < loop_ub; i++) {
      xsor->data[i] = xbinned->data[i];
    }
    emxFree_real_T(&xbinned);
    /*  Redefine x with binned x */
    /*  Redefine n with number of bins */
  }
  emxInit_real_T(&c_st, &distord, 2, &ct_emlrtRTEI, true);
  half = (int32_T)muDoubleScalarFloor((real_T)nbins / 2.0);
  /*  Compute the n*(n-1)/2 pairwise ordered distances */
  /*  Use function pdist of statistics toolbox */
  d_st.site = &eu_emlrtRSI;
  e_st.site = &eu_emlrtRSI;
  pdist(&e_st, xsor, distord);
  e_st.site = &yt_emlrtRSI;
  c_sort(&e_st, distord);
  /*         If statistic toolbox is not present it is possible to use the
   * following code */
  /*          distord = zeros(1,n*(n-1)./2); */
  /*          kkk = 1; */
  /*          for iii = 1:n-1 */
  /*              d = abs(x(iii) - x((iii+1):n)); */
  /*              distord(kkk:(kkk+n-iii-1)) = d; */
  /*              kkk = kkk + (n-iii); */
  /*          end */
  /*          distord=sort(distord); */
  d = 0.5 * ((real_T)half + 1.0) * (((real_T)half + 1.0) - 1.0);
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &ii_emlrtDCI, &c_st);
  }
  if (((int32_T)d < 1) || ((int32_T)d > distord->size[1])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, distord->size[1], &en_emlrtBCI,
                                  &c_st);
  }
  /*  Multiply the estimator also by cn a finite sample correction */
  /*  factor to make the estimator unbiased for finite samples (see p. 10 */
  /*  of Croux and Rousseeuw, 1992) or */
  /*  http://www.google.it/url?sa=t&rct=j&q=&esrc=s&source=web&cd=1&ved=0CDUQFjAA&url=http%3A%2F%2Fwww.researchgate.net%2Fpublication%2F228595593_Time-efficient_algorithms_for_two_highly_robust_estimators_of_scale%2Ffile%2F79e4150f52c2fcabb0.pdf&ei=ZCE5U_qHIqjU4QTMuIHwAQ&usg=AFQjCNERh4HiLgtkUGF1w4JU1380xhvKhA&bvm=bv.63808443,d.bGE
   */
  ninbins = 0.0;
  switch (nbins) {
  case 1:
    d_st.site = &fu_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&d_st, 17, m, &varargin_1[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&d_st, 21, m, &varargin_2[0]);
    emlrtAssign(&b_y, m);
    e_st.site = &tcb_emlrtRSI;
    l_error(&e_st, y, b_y, &d_emlrtMCI);
    break;
  case 2:
    ninbins = 0.399;
    break;
  case 3:
    ninbins = 0.994;
    break;
  case 4:
    ninbins = 0.512;
    break;
  case 5:
    ninbins = 0.844;
    break;
  case 6:
    ninbins = 0.611;
    break;
  case 7:
    ninbins = 0.857;
    break;
  case 8:
    ninbins = 0.669;
    break;
  case 9:
    ninbins = 0.872;
    break;
  default:
    if (nbins == 0) {
      i = 0;
    } else {
      i = (int32_T)muDoubleScalarRem(nbins, 2.0);
    }
    if (i == 1) {
      ninbins = (real_T)nbins / ((real_T)nbins + 1.4);
    } else if (i == 0) {
      ninbins = (real_T)nbins / ((real_T)nbins + 3.8);
    }
    break;
  }
  *sigma = ninbins *
           (2.2219 * distord->data[(int32_T)(0.5 * ((real_T)half + 1.0) *
                                             (((real_T)half + 1.0) - 1.0)) -
                                   1]);
  i = xsor->size[0];
  xsor->size[0] = X->size[0];
  emxEnsureCapacity_real_T(&st, xsor, i, &kl_emlrtRTEI);
  emxFree_real_T(&distord);
  if (X->size[0] != 0) {
    half = (X->size[0] != 1);
    i = X->size[0] - 1;
    for (loop_ub = 0; loop_ub <= i; loop_ub++) {
      xsor->data[loop_ub] = X->data[half * loop_ub] - *mu;
    }
  }
  i = Z->size[0];
  Z->size[0] = xsor->size[0];
  emxEnsureCapacity_real_T(&st, Z, i, &kl_emlrtRTEI);
  if (xsor->size[0] != 0) {
    half = (xsor->size[0] != 1);
    i = xsor->size[0] - 1;
    for (loop_ub = 0; loop_ub <= i; loop_ub++) {
      Z->data[loop_ub] = xsor->data[half * loop_ub] / *sigma;
    }
  }
  emxFree_real_T(&xsor);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (zscoreFS.c) */
