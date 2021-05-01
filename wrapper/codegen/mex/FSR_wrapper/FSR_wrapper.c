/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSR_wrapper.c
 *
 * Code generation for function 'FSR_wrapper'
 *
 */

/* Include files */
#include "FSR_wrapper.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_mexutil.h"
#include "FSR_wrapper_types.h"
#include "FSRcore.h"
#include "FSRmdr.h"
#include "LXS.h"
#include "bc.h"
#include "chkinputR.h"
#include "colon.h"
#include "error.h"
#include "ifWhileCond.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    52,            /* lineNo */
    "FSR_wrapper", /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSR_wrapper.m" /* pathName
                                                                      */
};

static emlrtRSInfo b_emlrtRSI = {
    844,                                           /* lineNo */
    "FSR",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    841,                                           /* lineNo */
    "FSR",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    750,                                           /* lineNo */
    "FSR",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    725,                                           /* lineNo */
    "FSR",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    710,                                           /* lineNo */
    "FSR",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    655,                                           /* lineNo */
    "FSR",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    650,                                           /* lineNo */
    "FSR",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    570,                                           /* lineNo */
    "FSR",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    564,                                           /* lineNo */
    "FSR",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pathName */
};

static emlrtMCInfo emlrtMCI = {
    715,                                           /* lineNo */
    9,                                             /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    838,                                            /* lineNo */
    13,                                             /* colNo */
    "S2",                                           /* aName */
    "FSR",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    739,                                            /* lineNo */
    20,                                             /* colNo */
    "iniseq",                                       /* aName */
    "FSR",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m", /* pName */
    0                                               /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,                                            /* nDims */
    847,                                           /* lineNo */
    21,                                            /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = {
    564,                                           /* lineNo */
    2,                                             /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = {
    564,                                           /* lineNo */
    4,                                             /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = {
    725,                                           /* lineNo */
    5,                                             /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = {
    736,                                           /* lineNo */
    13,                                            /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo id_emlrtRTEI = {
    738,                                           /* lineNo */
    13,                                            /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = {
    52,            /* lineNo */
    9,             /* colNo */
    "FSR_wrapper", /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSR_wrapper.m" /* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = {
    721,                                           /* lineNo */
    8,                                             /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = {
    740,                                           /* lineNo */
    13,                                            /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo md_emlrtRTEI = {
    833,                                           /* lineNo */
    1,                                             /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = {
    835,                                           /* lineNo */
    1,                                             /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo od_emlrtRTEI = {
    838,                                           /* lineNo */
    1,                                             /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = {
    842,                                           /* lineNo */
    1,                                             /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = {
    52,            /* lineNo */
    1,             /* colNo */
    "FSR_wrapper", /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSR_wrapper.m" /* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = {
    846,                                           /* lineNo */
    1,                                             /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = {
    847,                                           /* lineNo */
    1,                                             /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo td_emlrtRTEI = {
    681,                                           /* lineNo */
    21,                                            /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = {
    728,                                           /* lineNo */
    9,                                             /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = {
    828,                                           /* lineNo */
    1,                                             /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = {
    1,             /* lineNo */
    16,            /* colNo */
    "FSR_wrapper", /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSR_wrapper.m" /* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = {
    725,                                           /* lineNo */
    13,                                            /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = {
    710,                                           /* lineNo */
    5,                                             /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = {
    841,                                           /* lineNo */
    1,                                             /* colNo */
    "FSR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pName */
};

static emlrtRSInfo upb_emlrtRSI = {
    715,                                           /* lineNo */
    "FSR",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSR.m" /* pathName */
};

/* Function Definitions */
void FSR_wrapper(FSR_wrapperStackData *SD, const emlrtStack *sp,
                 const emxArray_real_T *y, const emxArray_real_T *X,
                 boolean_T bsbmfullrank, const real_T bonflev_data[],
                 const int32_T bonflev_size[2], real_T h, real_T init,
                 boolean_T intercept, real_T lms, boolean_T msg,
                 boolean_T nocheck, real_T nsamp,
                 const real_T threshoutX_data[],
                 const int32_T threshoutX_size[2], boolean_T weak,
                 struct0_T *out)
{
  static const int32_T b_iv[2] = {1, 76};
  static const char_T u[76] = {
      'M', 'o', 'r', 'e', ' ', 't', 'h', 'a', 'n', ' ', 'h', 'a', 'l',
      'f', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 'o', 'b', 's', 'e',
      'r', 'v', 'a', 't', 'i', 'o', 'n', 's', ' ', 'p', 'r', 'o', 'd',
      'u', 'c', 'e', ' ', 'a', ' ', 'l', 'i', 'n', 'e', 'a', 'r', ' ',
      'm', 'o', 'd', 'e', 'l', ' ', 'w', 'i', 't', 'h', ' ', 'a', ' ',
      'p', 'e', 'r', 'f', 'e', 'c', 't', ' ', 'f', 'i', 't'};
  b_struct_T expl_temp;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_boolean_T b_threshoutX_data;
  emxArray_real_T *INP_Bcoeff;
  emxArray_real_T *INP_S2;
  emxArray_real_T *INP_Un;
  emxArray_real_T *INP_bb;
  emxArray_real_T *INP_mdr;
  emxArray_real_T *S2;
  emxArray_real_T *Un;
  emxArray_real_T *b_X;
  emxArray_real_T *b_expl_temp;
  emxArray_real_T *b_y;
  emxArray_real_T *bsbstepdef;
  emxArray_real_T *constr;
  emxArray_real_T *d_y;
  emxArray_real_T *iniseq;
  const mxArray *c_y;
  const mxArray *m;
  struct_T c_expl_temp;
  real_T bonflevoutX_data;
  real_T initdef;
  real_T n;
  real_T p;
  real_T threshlevoutX_data;
  int32_T b_threshoutX_size[2];
  int32_T bonflevoutX_size[2];
  int32_T threshlevoutX_size[2];
  int32_T i;
  int32_T loop_ub;
  int32_T partialTrueCount;
  int32_T trueCount;
  boolean_T c_threshoutX_data;
  (void)bsbmfullrank;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_y, 1, &wd_emlrtRTEI, true);
  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  X: an array of doubles of any dimension */
  /*  Optional input arguments (name / pairs) */
  /*  bsbmfullrank */
  /*  bonflev a scalar double or an empty value */
  /*  h a scalar double */
  /*  init a scalar double */
  /*  intercept */
  /*  lms a scalar double */
  /*  msg is a boolean */
  /*  nocheck is a boolean */
  /*  nsamp a scalar double */
  /*  threshoutX a scalar double or an empty value */
  /*  weak is a boolean */
  st.site = &emlrtRSI;
  /* FSR computes forward search estimator in linear regression */
  /*  */
  /* <a href="matlab: docsearchFS('FSR')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*     y:         Response variable. Vector. Response variable, specified as
   */
  /*                a vector of length n, where n is the number of */
  /*                observations. Each entry in y is the response for the */
  /*                corresponding row of X. */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*   X :          Predictor variables. Matrix. Matrix of explanatory */
  /*                variables (also called 'regressors') of dimension n x (p-1)
   */
  /*                where p denotes the number of explanatory variables */
  /*                including the intercept. */
  /*                Rows of X represent observations, and columns represent */
  /*                variables. By default, there is a constant term in the */
  /*                model, unless you explicitly remove it using input option */
  /*                intercept, so do not include a column of 1s in X. Missing */
  /*                values (NaN's) and infinite values (Inf's) are allowed, */
  /*                since observations (rows) with missing or infinite values */
  /*                will automatically be excluded from the computations. */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  bsbmfullrank : Dealing with singular X matrix. Boolean. This option tells
   */
  /*                  how to behave in case subset at step m */
  /*                  (say bsbm) produces a singular X. In other words, */
  /*                  this options controls what to do when rank(X(bsbm,:)) is
   */
  /*                  smaller then number of explanatory variables. If */
  /*                  bsbmfullrank =true (default) these units (whose number is
   */
  /*                  say mnofullrank) are constrained to enter the search in */
  /*                  the final n-mnofullrank steps else the search continues */
  /*                  using as estimate of beta at step m the estimate of beta
   */
  /*                  found in the previous step. */
  /*                Example - 'bsbmfullrank',false */
  /*                Data Types - logical */
  /*  */
  /*       bonflev  : Signal to use to identify outliers. Scalar or empty value
   * (default). */
  /*                Option to be used if the distribution of the data is */
  /*                  strongly non normal and, thus, the general signal */
  /*                  detection rule based on consecutive exceedances cannot be
   */
  /*                  used. In this case bonflev can be: */
  /*                  - a scalar smaller than 1 which specifies the confidence
   */
  /*                    level for a signal and a stopping rule based on the */
  /*                    comparison of the minimum MD with a */
  /*                    Bonferroni bound. For example if bonflev=0.99 the */
  /*                    procedure stops when the trajectory exceeds for the */
  /*                    first time the 99% bonferroni bound. */
  /*                  - A scalar value greater than 1. In this case the */
  /*                    procedure stops when the residual trajectory exceeds */
  /*                    for the first time this value. */
  /*                  Default value is '', which means to rely on general rules
   */
  /*                  based on consecutive exceedances. */
  /*                Example - 'bonflev',0.99 */
  /*                Data Types - double */
  /*  */
  /*  */
  /*            h   : The number of observations that have determined the least
   */
  /*                  trimmed squares estimator. Scalar. h is an integer */
  /*                  greater or equal than p but smaller then n. Generally if
   */
  /*                  the purpose is outlier detection h=[0.5*(n+p+1)] (default
   */
  /*                  value). h can be smaller than this threshold if the */
  /*                  purpose is to find subgroups of homogeneous observations.
   */
  /*                  In this function the LTS/LMS estimator is used just to */
  /*                  initialize the search. */
  /*                  Example - 'h',round(n*0,75) */
  /*                  Data Types - double */
  /*  */
  /*        init    : Search initialization. Scalar. It specifies the initial */
  /*                  subset size to start monitoring exceedances of minimum */
  /*                  deletion residual, if init is not specified it set equal
   */
  /*                  to: */
  /*                    p+1, if the sample size is smaller than 40; */
  /*                    min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                Example - 'init',100 starts monitoring from step m=100 */
  /*                Data Types - double */
  /*  */
  /*     intercept :  Indicator for constant term. true (default) | false. */
  /*                  Indicator for the constant term (intercept) in the fit, */
  /*                  specified as the comma-separated pair consisting of */
  /*                  'Intercept' and either true to include or false to remove
   */
  /*                  the constant term from the model. */
  /*                  Example - 'intercept',false */
  /*                  Data Types - boolean */
  /*  */
  /*  */
  /*        lms     : Criterion to use to find the initial */
  /*                  subset to initialize the search. Scalar,  vector or
   * structure. */
  /*                  lms specifies the criterion to use to find the initial */
  /*                  subset to initialize the search (LMS, LTS with */
  /*                  concentration steps, LTS without concentration steps */
  /*                  or subset supplied directly by the user). */
  /*                  The default value is 1 (Least Median of Squares */
  /*                  is computed to initialize the search). On the other hand,
   */
  /*                  if the user wants to initialze the search with LTS with */
  /*                  all the default options for concentration steps then */
  /*                  lms=2. If the user wants to use LTS without */
  /*                  concentration steps, lms can be a scalar different from 1
   */
  /*                  or 2. If lms is a struct it is possible to control a */
  /*                  series of options for concentration steps (for more */
  /*                  details see option lms inside LXS.m) */
  /*                  LXS.m. */
  /*                  If, on the other hand, the user wants to initialize the */
  /*                  search with a prespecified set of units there are two */
  /*                  possibilities: */
  /*                  1) lms can be a vector with length greater than 1 which */
  /*                  contains the list of units forming the initial subset. For
   */
  /*                  example, if the user wants to initialize the search */
  /*                  with units 4, 6 and 10 then lms=[4 6 10]; */
  /*                  2) lms is a struct which contains a field named bsb which
   */
  /*                  contains the list of units to initialize the search. For
   */
  /*                  example, in the case of simple regression through the */
  /*                  origin with just one explanatory variable, if the user */
  /*                  wants to initialize the search with unit 3 then */
  /*                  lms=struct; lms.bsb=3; */
  /*                  Example - 'lms',1 */
  /*                  Data Types - double */
  /*  */
  /*  */
  /*        msg    :  Level of output to display. Boolean. It controls whether
   */
  /*                  to display or not messages on the screen */
  /*                  If msg==true (default) messages are displayed on the
   * screen about */
  /*                    step in which signal took place */
  /*                  else no message is displayed on the screen. */
  /*                Example - 'msg',false */
  /*                Data Types - logical */
  /*  */
  /*  */
  /*        nocheck : Check input arguments. Boolean. If nocheck is equal to */
  /*                  true no check is performed on matrix y and matrix X. */
  /*                  Notice that y and X are left unchanged. In other words */
  /*                  the additional column of ones for the intercept is not */
  /*                  added. As default nocheck=false. */
  /*                Example - 'nocheck',true */
  /*                Data Types - double */
  /*  */
  /*        nsamp   : Number of subsamples which will be extracted to find the
   */
  /*                  robust estimator. Scalar. If nsamp=0 all subsets will be
   * extracted. */
  /*                  They will be (n choose p). */
  /*                  If the number of all possible subset is <1000 the */
  /*                  default is to extract all subsets otherwise just 1000. */
  /*                  Example - 'nsamp',1000 */
  /*                  Data Types - double */
  /*  */
  /*   threshoutX  : threshold to bound the effect of high leverage units. */
  /*                 empty value (default) or scalar or structure. */
  /*                If the design matrix X contains several high leverage units
   */
  /*                (that is units which are very far from the bulk of the */
  /*                data), it may happen that the best subset of LXS may include
   * some */
  /*                of these units, or it may happen that these units have a */
  /*                deletion residual which is very small due to their */
  /*                extremely high value of $h_i$. bonflevoutX=1 imposes the */
  /*                constraints that: */
  /*                1) the extracted subsets which contain */
  /*                at least one unit declared as outlier in the X space by FSM
   */
  /*                using a Bonferronized confidence level of 0.99 */
  /*                are removed from the list of candidate subsets to find the
   */
  /*                LXS solution. */
  /*                2) imposes the contrainst that $h_i(m^*)$ */
  /*                cannot exceed $10 \times p/m$. */
  /*                If threshoutX is a structure, it contains the following */
  /*                fields: */
  /*                threshoutX.bonflevoutX = specifies the Bonferronized */
  /*                confidence level to be used to find the outliers in the X */
  /*                space. If this field is not present a 99 per cent */
  /*                confidence level is used. */
  /*                threshoutX.threshlevoutX = specifies the threshold to bound
   */
  /*                the effect of high leverage units in the computation of */
  /*                deletion residuals. In the computation of */
  /*                the quantity $h_i(m^*) = x_i^T\{X(m^*)^TX(m^*)\}^{-1}x_i$,
   */
  /*                $i \notin S^{(m)}_*$, units which very far from the bulk of
   */
  /*                the data (represented by $X(m^*)$) will have a huge value */
  /*                of $h_i(m^*)$ and consequently of the deletion residuals. */
  /*                In order to tackle this problem it is possible to put a */
  /*                bound to the value of $h_i(m^*)$. For example */
  /*                threshoutX.threshlevoutX=r imposes the contrainst that
   * $h_i(m^*)$ */
  /*                cannot exceed $r \times p/m$. If this field is not present
   */
  /*                the default threshold of 10 is imposed. */
  /*                Example - 'threshoutX',1 */
  /*                Data Types - double */
  /*  */
  /*      weak:     Indicator to use a different decision rule to detect */
  /*                the signal and flag outliers. false (default) | true. */
  /*                If weak=false default FSRcore values are used, */
  /*                if weak=true 'stronger' quantiles are used  as a */
  /*                decision rule to trim outliers and VIOM outliers */
  /* 				are the ones entering the Search after the first signal.
   */
  /*                Example - 'weak',true */
  /*                Data Types - logical */
  /*  */
  /*        plots   : Plot on the screen. Scalar. */
  /*                  If plots=1 (default) the plot of minimum deletion */
  /*                  residual with envelopes based on n observations and the */
  /*                  scatterplot matrix with the outliers highlighted is */
  /*                  produced. */
  /*                  If plots=2 the user can also monitor the intermediate */
  /*                  plots based on envelope superimposition. */
  /*                  Else no plot is produced. */
  /*                  Example - 'plots',1 */
  /*                  Data Types - double */
  /*  */
  /*     bivarfit : Superimpose bivariate least square lines. Character. This
   * option adds */
  /*                  one or more least squares lines, based on */
  /*                  SIMPLE REGRESSION of y on Xi, to the plots of y|Xi. */
  /*                  bivarfit = '' */
  /*                    is the default: no line is fitted. */
  /*                  bivarfit = '1' */
  /*                    fits a single ols line to all points of each bivariate
   */
  /*                    plot in the scatter matrix y|X. */
  /*                  bivarfit = '2' */
  /*                    fits two ols lines: one to all points and another to */
  /*                    the group of the genuine observations. The group of the
   */
  /*                    potential outliers is not fitted. */
  /*                  bivarfit = '0' */
  /*                    fits one ols line to each group. This is useful for the
   */
  /*                    purpose of fitting mixtures of regression lines. */
  /*                  bivarfit = 'i1' or 'i2' or 'i3' etc. fits */
  /*                    an ols line to a specific group, the one with */
  /*                    index 'i' equal to 1, 2, 3 etc. Again, useful in case */
  /*                    of mixtures. */
  /*                Example - 'bivarfit','2' */
  /*                Data Types - char */
  /*  */
  /*       labeladd : Add outlier labels in plot. Character. If this option is
   */
  /*                  '1',  we label the outliers with the */
  /*                  unit row index in matrices X and y. The default value is
   */
  /*                  labeladd='', i.e. no label is added. */
  /*                Example - 'labeladd','1' */
  /*                Data Types - char */
  /*  */
  /*        multivarfit : Superimpose multivariate least square lines.
   * Character. */
  /*                  This option adds one or more least square lines, based on
   */
  /*                  MULTIVARIATE REGRESSION of y on X, to the plots of y|Xi.
   */
  /*                  multivarfit = '' */
  /*                    is the default: no line is fitted. */
  /*                  multivarfit = '1' */
  /*                    fits a single ols line to all points of each bivariate
   */
  /*                    plot in the scatter matrix y|X. The line added to the */
  /*                    scatter plot y|Xi is avconst + Ci*Xi, where Ci is the */
  /*                    coefficient of Xi in the multivariate regression and */
  /*                    avconst is the effect of all the other explanatory */
  /*                    variables different from Xi evaluated at their centroid
   */
  /*                    (that is overline{y}'C)) */
  /*                  multivarfit = '2' */
  /*                    equal to multivarfit ='1' but this time we also add the
   */
  /*                    line based on the group of unselected observations */
  /*                    (i.e. the normal units). */
  /*                Example - 'multivarfit','1' */
  /*                Data Types - char */
  /*  */
  /*  */
  /*        nameX  : Add variable labels in plot. Cell array of strings. Cell */
  /*                  array of strings of length p containing the labels of */
  /*                  the variables of the regression dataset. If it is empty */
  /*                  (default) the sequence X1, ..., Xp will be created */
  /*                  automatically */
  /*                Example - 'nameX',{'NameVar1','NameVar2'} */
  /*                Data Types - cell */
  /*  */
  /*        namey  :  Add response label. Character. String containing the */
  /*                  label of the response */
  /*                Example - 'namey','NameOfResponse' */
  /*                Data Types - char */
  /*  */
  /*         tag    : tags to the plots which are created. */
  /*                  character or cell array of characters. */
  /*                  This option enables to add a tag to the plots which are */
  /*                  created. The default tag names are: */
  /*                  fsr_mdrplot for the plot of mdr based on all the */
  /*                  observations; */
  /*                  fsr_yXplot for the plot of y against each column of X */
  /*                  with the outliers highlighted; */
  /*                  fsr_resuperplot for the plot of resuperimposed envelopes.
   * The */
  /*                  first plot with 4 panel of resuperimposed envelopes has */
  /*                  tag fsr_resuperplot1, the second  fsr_resuperplot2 ... */
  /*                  If tag is character or a cell of characters of length 1,
   */
  /*                  it is possible to specify the tag for the plot of mdr */
  /*                  based on all the observations; */
  /*                  If tag is a cell of length 2 it is possible to control */
  /*                  both the tag for the plot of mdr based on all the */
  /*                  observations and the tag for the yXplot with outliers */
  /*                  highlighted. */
  /*                  If tag is a cell of length 3 the third element specifies
   */
  /*                  the names of the plots of resuperimposed envelopes. */
  /*                  Example - 'tag',{'plmdr' 'plyXplot'}; */
  /*                  Data Types - char or cell */
  /*  */
  /*        xlim   : Control x scale in plot. Vector. Vector with two elements
   */
  /*                minimum and maximum on the x axis. Default value is '' */
  /*                (automatic scale) */
  /*                Example - 'xlim',[0,10] sets the minimum value to 0 and the
   */
  /*                max to 10 on the x axis */
  /*                Data Types - double */
  /*  */
  /*        ylim   :  Control y scale in plot. Vector. Vector with two elements
   */
  /*                  controlling minimum and maximum on the y axis. */
  /*                  Default value is '' (automatic scale) */
  /*                Example - 'ylim',[0,10] sets the minimum value to 0 and the
   */
  /*                max to 10 on the y axis */
  /*                Data Types - double */
  /*  */
  /*  */
  /*  Output: */
  /*  */
  /*          out:   structure which contains the following fields */
  /*  */
  /*  out.ListOut  = k x 1 vector containing the list of the units declared as
   */
  /*                 outliers or NaN if the sample is homogeneous */
  /*  out.outliers = out.ListOut. This field is added for homogeneity with the
   */
  /*                 other robust estimators. */
  /*  out.beta   =  p-by-1 vector containing the estimated regression */
  /*                parameters (in step n-k). */
  /*  out.scale  =  scalar containing the estimate of the scale (sigma). */
  /*  */
  /*  out.residuals= n x 1 vector containing the estimates of the robust */
  /*                 scaled residuals. */
  /*  out.fittedvalues= n x 1 vector containing the fitted values. */
  /*  out.mdr    =  (n-init) x 2 matrix */
  /*                1st col = fwd search index */
  /*                2nd col = value of minimum deletion residual in each step */
  /*                of the fwd search */
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
  /*  out.constr  = This output is produced only if the search found at a */
  /*                certain step X is a singular matrix. In this case the */
  /*                search runs in a constrained mode, that is including the */
  /*                units which produced a non singular matrix in the last
   * n-constr */
  /*                steps. out.constr is a vector which contains the list of */
  /*                units which produced a singular X matrix */
  /*  out.class  =  'FSR'. */
  /*  out.VIOMout = m x 1 vector containing the list of the units declared as */
  /*                VIOM outliers or NaN if they are not present. */
  /*                This field is present only if weak = true. */
  /*  out.ListCl  = (n-m) x 1 vector of non-outlying units. */
  /*                This field is present only if weak = true. */
  /*  */
  /*  See also: FSReda, LXS.m */
  /*  */
  /*  References: */
  /*  */
  /*  Riani, M., Atkinson, A.C. and Cerioli, A. (2009), Finding an unknown */
  /*  number of multivariate outliers, "Journal of the Royal Statistical */
  /*  Society Series B", Vol. 71, pp. 201-221. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSR')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSR with all default options. */
  /*     % Run this code to see the output shown in the help file. */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     % Uncontaminated data */
  /*     y=randn(n,1); */
  /*     % Contaminated data */
  /*     ycont=y; */
  /*     ycont(1:5)=ycont(1:5)+6; */
  /*     [out]=FSR(ycont,X,'plots',2); */
  /* } */
  /* { */
  /*     %% FSR with optional arguments. */
  /*     % Run this code to see the output shown in the help file. */
  /*     state=100; */
  /*     randn('state', state); */
  /*     n=100; */
  /*     X=randn(n,3); */
  /*     bet=[3;4;5]; */
  /*     y=3*randn(n,1)+X*bet; */
  /*     y(1:20)=y(1:20)+13; */
  /*     [outFS]=FSR(y,X,'plots',2); */
  /*     % The envelopes based on all the observations show that in the central
   */
  /*     % part of the search the observed curve is well beyond the extreme */
  /*     % thresholds. More precisely, the message inside the graph informs that
   */
  /*     % the signal took place in step 81 because the value of minimum
   * deletion */
  /*     % residual in this step was greater than 99.999% threshold. */
  /*     % Once a signal takes place the envelopes are resuperimposed until a */
  /*     % stopping rule is fulfilled. */
  /*     % The procedure of resuperimposing envelopes in this case stops when */
  /*     % n = 85, the first time in which we have a value of rmin(m) for */
  /*     % $n>=m^\dagger-1$ greater than the 99% threshold. The group can */
  /*     % therefore be considered as homogeneous up to when we include 84
   * units. */
  /* } */
  /* { */
  /*     % FSR with optional arguments. */
  /*     % Monitor the exceedances from m=60 without showing plots. */
  /*     n=200; */
  /*     p=3; */
  /*     X=rand(n,p); */
  /*     y=rand(n,1); */
  /*     [out]=FSR(y,X,'init',60,'plots',0); */
  /* } */
  /* { */
  /*     % Initialize the search with the subsample which produces the smallest
   */
  /*     % [h/n] quantile of squared residuals. */
  /*     n=200; */
  /*     p=3; */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     [out]=FSR(y,X,'h',120); */
  /* } */
  /* { */
  /*     % Extract all possible subsamples in order to find susbet to initialize
   */
  /*     % the search. */
  /*     n=50; */
  /*     p=3; */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     [out]=FSR(y,X,'nsamp',0); */
  /* } */
  /* { */
  /*     %% Example for various combinations of the labeladd, bivarfit */
  /*     % and multivarfit options. */
  /*     n=200; */
  /*     p=3; */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     [out]=FSR(y,X, 'labeladd','1','bivarfit','1','multivarfit','1'); */
  /* } */
  /* { */
  /*     % Example of use of options xlim and ylim (Hawkins data). */
  /*     load('hawkins.txt','hawkins'); */
  /*     y=hawkins(:,9); */
  /*     X=hawkins(:,1:8); */
  /*     % Use of FSR starting with 1000 subsamples */
  /*     [out]=FSR(y,X,'nsamp',1000); */
  /*     % Use of FSR starting with 1000 subsamples */
  /*     % focusing in the output plots to the interval 1-6 on the y axis and */
  /*     % to steps 30-90. */
  /*     [out]=FSR(y,X,'nsamp',1000,'ylim',[1 6],'xlim',[30 90]); */
  /* } */
  /* { */
  /*     % Example of use of options nameX and nameY with contaminated data. */
  /*     n=200; */
  /*     p=3; */
  /*     state1=123498; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     kk=33; */
  /*     % shift contamination of the first 33 units of the response */
  /*     y(1:kk)=y(1:kk)+6; */
  /*     nameX={'age', 'salary', 'position'}; */
  /*     namey='salary'; */
  /*     [out]=FSR(y,X,'nameX',nameX,'namey',namey); */
  /* } */
  /* { */
  /*     % Example of point mass contamination. */
  /*     n=130; */
  /*     p=5; */
  /*     state1=123498; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     kk=30; */
  /*     % point mass contamination of the first kk units */
  /*     X(1:kk,:)=1; */
  /*     y(1:kk)=3; */
  /*     [out]=FSR(y,X); */
  /* } */
  /* { */
  /*     % Example of the use of option threshoutX. */
  /*     % In this example a set of remote units is added to a cloud of points.
   */
  /*     % The purpose of this example is to show that in presence of units very
   * far */
  /*     % from the bulk of th data (bad or good elverage points) it is
   * necessary to */
  /*     % bound their effect putting a constraint on their leverage
   * hi=xi'(X'X)xi */
  /*     rng('default') */
  /*     rng(10000) */
  /*     n=100; */
  /*     p=1; */
  /*     X=randn(n,p); */
  /*     epsil=10; */
  /*     beta=ones(p,1); */
  /*     y=X*beta+randn(n,1)*epsil; */
  /*     % Add 10 very remote points */
  /*     add=3; */
  /*     Xadd=X(1:add,:)+5000; */
  /*     yadd=y(1:add)+200; */
  /*     Xall=[X;Xadd]; */
  /*     yall=[y;yadd]; */
  /*     outNoLevConstr=FSR(yall,Xall,'msg',0,'ylim',[0 5]); */
  /*     xylim=axis; */
  /*     ylabel('mdr') */
  /*     title('FS without bound on the leverage') */
  /*     % threshoutX is passed s astructure */
  /*     threshoutX=struct; */
  /*     threshoutX.threshlevoutX=5; */
  /*     % Use the instruction below if you wish to change the confidence level
   * to */
  /*     % be used to find outlierd in the X space */
  /*     % threshoutX.bonflevoutX=0.99 */
  /*     outWithLevConstr=FSR(yall,Xall,'threshoutX',threshoutX,'msg',0,'ylim',[0
   * 5]); */
  /*     title('FS with bound on the leverage') */
  /* } */
  /* { */
  /*     %% Example to detect both VIOM and MSOM outliers using weak=true. */
  /*     % loyalty data */
  /*     load('loyalty'); */
  /*     y = loyalty{:,end}; */
  /*     X = loyalty{:,1}; */
  /*     xla = 'Number of visits'; */
  /*     yla = 'Amount spent (in Euros)'; */
  /*     n = size(X,1); */
  /*     % run FSR to detect a weaker signal indicating VIOM */
  /*     FSRoutw = FSR(y, X, 'intercept', false, ... */
  /*         'init', floor(n/2)-1, 'msg', 0, 'plots', 1, 'weak', true); */
  /*     trim_FSR =  FSRoutw.outliers; */
  /*     down_FSR =  FSRoutw.VIOMout; */
  /*     clean_FSR = FSRoutw.ListCl; */
  /*     % plotting */
  /*     figure */
  /*     plot(X(clean_FSR, :), y(clean_FSR), 'b.', 'MarkerSize', 15,
   * 'DisplayName', 'clean'); */
  /*     hold('on') */
  /*     plot(X(trim_FSR, :), y(trim_FSR), 'r.', 'MarkerSize', 15,
   * 'DisplayName', 'MSOM'); */
  /*     plot(X(down_FSR, :), y(down_FSR), 'g.', 'MarkerSize', 15,
   * 'DisplayName', 'VIOM'); */
  /*     drawnow */
  /*     clb = clickableMultiLegend(gca, 'Location', 'northeast'); */
  /*     set(clb,'FontSize',12); */
  /*     xlabel(xla); */
  /*     ylabel(yla); */
  /*     box */
  /*     cascade */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  i = b_y->size[0];
  b_y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(&st, b_y, i, &dd_emlrtRTEI);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = y->data[i];
  }
  emxInit_real_T(&st, &b_X, 2, &wd_emlrtRTEI, true);
  i = b_X->size[0] * b_X->size[1];
  b_X->size[0] = X->size[0];
  b_X->size[1] = X->size[1];
  emxEnsureCapacity_real_T(&st, b_X, i, &ed_emlrtRTEI);
  loop_ub = X->size[0] * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_X->data[i] = X->data[i];
  }
  b_st.site = &j_emlrtRSI;
  chkinputR(&b_st, b_y, b_X, intercept, nocheck, &n, &p);
  /*  User options */
  /*  If the number of all possible subsets is <1000 the default is to extract
   */
  /*  all subsets, otherwise just 1000. */
  b_st.site = &i_emlrtRSI;
  bc(&b_st, n, p);
  /*  Notice that a fast approximation of the bc computed above is: */
  /*  ncomb=floor(exp( gammaln(n+1) - gammaln(n-p+1) - gammaln(p+1) ) + .5); */
  /*  The default value of h is floor(0.5*(n+p+1)) */
  /*  ini0=init; */
  /*  tag */
  /*  Write in structure 'options' the options chosen by the user */
  /*  Make sure that nsamp and h are not empty */
  if ((threshoutX_size[0] == 0) || (threshoutX_size[1] == 0)) {
    bonflevoutX_size[0] = 0;
    bonflevoutX_size[1] = 0;
    threshlevoutX_size[0] = 0;
    threshlevoutX_size[1] = 0;
  } else {
    b_threshoutX_size[0] = 1;
    b_threshoutX_size[1] = 1;
    for (i = 0; i < 1; i++) {
      c_threshoutX_data = (threshoutX_data[0] == 1.0);
    }
    b_threshoutX_data.data = &c_threshoutX_data;
    b_threshoutX_data.size = &b_threshoutX_size[0];
    b_threshoutX_data.allocatedSize = 1;
    b_threshoutX_data.numDimensions = 2;
    b_threshoutX_data.canFreeData = false;
    b_st.site = &h_emlrtRSI;
    if (ifWhileCond(&b_st, &b_threshoutX_data)) {
      bonflevoutX_size[0] = 1;
      bonflevoutX_size[1] = 1;
      bonflevoutX_data = 0.99;
      threshlevoutX_size[0] = 1;
      threshlevoutX_size[1] = 1;
      threshlevoutX_data = 10.0;
    } else {
      b_st.site = &g_emlrtRSI;
      b_error(&b_st);
    }
  }
  emxInit_real_T(&st, &INP_mdr, 2, &vd_emlrtRTEI, true);
  emxInitStruct_struct_T(&st, &expl_temp, &yd_emlrtRTEI, true);
  /*  Start of the forward search */
  /*  Initialization necessary for MATLAB C-Coder */
  /*  Use as initial subset the one supplied by the user or the best according
   */
  /*  to LMS or LTS */
  /*  initial subset is not supplied by the user */
  /*  Find initial subset to initialize the search */
  b_st.site = &f_emlrtRSI;
  LXS(SD, &b_st, b_y, b_X, lms, h, nsamp, msg, (real_T *)&bonflevoutX_data,
      bonflevoutX_size, &expl_temp);
  if (expl_temp.scale == 0.0) {
    c_y = NULL;
    m = emlrtCreateCharArray(2, &b_iv[0]);
    emlrtInitCharArrayR2013a(&st, 76, m, &u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &upb_emlrtRSI;
    disp(&b_st, c_y, &emlrtMCI);
    /*  Just return the outliers found by LXS */
    /* out.ListOut=out.outliers; */
    /* return */
  }
  emxInit_real_T(&st, &d_y, 2, &xd_emlrtRTEI, true);
  /*  Necessary for MATLAb C Coder initialization */
  /*  Initialize constr as a column vector of variable size whose elements */
  /*  are greater than n is such a way that no unit is constrained to enter the
   * final steps  */
  b_st.site = &e_emlrtRSI;
  bonflevoutX_data = 2.0 * n;
  c_st.site = &xc_emlrtRSI;
  if (muDoubleScalarIsNaN(n + 1.0) || muDoubleScalarIsNaN(bonflevoutX_data)) {
    i = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    d_y->size[1] = 1;
    emxEnsureCapacity_real_T(&c_st, d_y, i, &fd_emlrtRTEI);
    d_y->data[0] = rtNaN;
  } else if (bonflevoutX_data < n + 1.0) {
    d_y->size[0] = 1;
    d_y->size[1] = 0;
  } else if ((muDoubleScalarIsInf(n + 1.0) ||
              muDoubleScalarIsInf(bonflevoutX_data)) &&
             (n + 1.0 == bonflevoutX_data)) {
    i = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    d_y->size[1] = 1;
    emxEnsureCapacity_real_T(&c_st, d_y, i, &fd_emlrtRTEI);
    d_y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(n + 1.0) == n + 1.0) {
    i = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor(bonflevoutX_data - (n + 1.0));
    d_y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&c_st, d_y, i, &fd_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      d_y->data[i] = (n + 1.0) + (real_T)i;
    }
  } else {
    d_st.site = &yc_emlrtRSI;
    eml_float_colon(&d_st, n + 1.0, bonflevoutX_data, d_y);
  }
  emxInit_real_T(&c_st, &constr, 1, &gd_emlrtRTEI, true);
  i = constr->size[0];
  constr->size[0] = d_y->size[1];
  emxEnsureCapacity_real_T(&st, constr, i, &gd_emlrtRTEI);
  loop_ub = d_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    constr->data[i] = d_y->data[i];
  }
  emxFree_real_T(&d_y);
  if (n < 40.0) {
    initdef = p + 1.0;
  } else {
    initdef = muDoubleScalarMin(3.0 * p + 1.0,
                                muDoubleScalarFloor(0.5 * ((n + p) + 1.0)));
  }
  emxInit_real_T(&st, &bsbstepdef, 2, &ud_emlrtRTEI, true);
  if (n <= 5000.0) {
    i = bsbstepdef->size[0] * bsbstepdef->size[1];
    bsbstepdef->size[0] = 1;
    bsbstepdef->size[1] = 1;
    emxEnsureCapacity_real_T(&st, bsbstepdef, i, &hd_emlrtRTEI);
    bsbstepdef->data[0] = 0.0;
  } else {
    bonflevoutX_data = 100.0 * muDoubleScalarFloor(n / 100.0);
    emxInit_real_T(&st, &iniseq, 2, &id_emlrtRTEI, true);
    if (muDoubleScalarIsNaN(bonflevoutX_data)) {
      i = iniseq->size[0] * iniseq->size[1];
      iniseq->size[0] = 1;
      iniseq->size[1] = 1;
      emxEnsureCapacity_real_T(&st, iniseq, i, &id_emlrtRTEI);
      iniseq->data[0] = rtNaN;
    } else {
      i = iniseq->size[0] * iniseq->size[1];
      iniseq->size[0] = 1;
      loop_ub =
          (int32_T)muDoubleScalarFloor((bonflevoutX_data - 100.0) / 100.0);
      iniseq->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(&st, iniseq, i, &id_emlrtRTEI);
      for (i = 0; i <= loop_ub; i++) {
        iniseq->data[i] = 100.0 * (real_T)i + 100.0;
      }
    }
    loop_ub = iniseq->size[1] - 1;
    trueCount = 0;
    for (i = 0; i <= loop_ub; i++) {
      if (iniseq->data[i] > initdef) {
        trueCount++;
      }
    }
    partialTrueCount = 0;
    for (i = 0; i <= loop_ub; i++) {
      if (iniseq->data[i] > initdef) {
        if (i + 1 > iniseq->size[1]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, iniseq->size[1], &b_emlrtBCI,
                                        &st);
        }
        iniseq->data[partialTrueCount] = iniseq->data[i];
        partialTrueCount++;
      }
    }
    i = iniseq->size[0] * iniseq->size[1];
    iniseq->size[0] = 1;
    iniseq->size[1] = trueCount;
    emxEnsureCapacity_real_T(&st, iniseq, i, &jd_emlrtRTEI);
    i = bsbstepdef->size[0] * bsbstepdef->size[1];
    bsbstepdef->size[0] = 1;
    bsbstepdef->size[1] = trueCount + 1;
    emxEnsureCapacity_real_T(&st, bsbstepdef, i, &ld_emlrtRTEI);
    bsbstepdef->data[0] = initdef;
    for (i = 0; i < trueCount; i++) {
      bsbstepdef->data[i + 1] = iniseq->data[i];
    }
    emxFree_real_T(&iniseq);
  }
  emxInit_real_T(&st, &S2, 2, &td_emlrtRTEI, true);
  emxInit_real_T(&st, &INP_Un, 2, &vd_emlrtRTEI, true);
  emxInit_real_T(&st, &INP_bb, 2, &vd_emlrtRTEI, true);
  emxInit_real_T(&st, &INP_Bcoeff, 2, &vd_emlrtRTEI, true);
  emxInit_real_T(&st, &b_expl_temp, 1, &kd_emlrtRTEI, true);
  /*  Matlab C Coder initializations. */
  loop_ub = expl_temp.bs->size[1];
  /*  Compute Minimum Deletion Residual for each step of the search */
  /*  The instruction below is surely executed once. */
  i = b_expl_temp->size[0];
  b_expl_temp->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, b_expl_temp, i, &kd_emlrtRTEI);
  loop_ub--;
  for (i = 0; i <= loop_ub; i++) {
    b_expl_temp->data[i] = expl_temp.bs->data[i];
  }
  emxFreeStruct_struct_T(&expl_temp);
  emxInit_real_T(&st, &INP_S2, 2, &vd_emlrtRTEI, true);
  emxInit_real_T(&st, &Un, 2, &wd_emlrtRTEI, true);
  b_st.site = &d_emlrtRSI;
  FSRmdr(&b_st, b_y, b_X, b_expl_temp, init, msg, constr,
         (real_T *)&threshlevoutX_data, threshlevoutX_size, bsbstepdef, INP_S2,
         Un, INP_bb, INP_Bcoeff, S2);
  i = INP_mdr->size[0] * INP_mdr->size[1];
  INP_mdr->size[0] = INP_S2->size[0];
  INP_mdr->size[1] = 2;
  emxEnsureCapacity_real_T(&st, INP_mdr, i, &md_emlrtRTEI);
  loop_ub = INP_S2->size[0] * 2;
  emxFree_real_T(&b_expl_temp);
  emxFree_real_T(&bsbstepdef);
  for (i = 0; i < loop_ub; i++) {
    INP_mdr->data[i] = INP_S2->data[i];
  }
  i = INP_Un->size[0] * INP_Un->size[1];
  INP_Un->size[0] = Un->size[0];
  INP_Un->size[1] = 11;
  emxEnsureCapacity_real_T(&st, INP_Un, i, &nd_emlrtRTEI);
  loop_ub = Un->size[0] * 11;
  for (i = 0; i < loop_ub; i++) {
    INP_Un->data[i] = Un->data[i];
  }
  emxFree_real_T(&Un);
  /*  If FSRmdr runs without problems mdr has two columns. In the second */
  /*  column it contains the value of the minimum deletion residual */
  /*  monitored in each step of the search */
  /*  If mdr has just one columns then one of the following two cases took
   * place: */
  /*  isnan(mdr)=1 ==> in this case initial subset was not full rank */
  /*  mdr has just one column ==> in this case, even if the initial */
  /*     subset was full rank, the search has found at a certain step */
  /*     m<n/2 a list of units which produce a singular matrix. In this */
  /*     case LXS is rerun excluding these units which gave rise to a */
  /*     singular matrix */
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b(&st);
  }
  loop_ub = S2->size[0];
  i = INP_S2->size[0] * INP_S2->size[1];
  INP_S2->size[0] = S2->size[0];
  INP_S2->size[1] = 2;
  emxEnsureCapacity_real_T(&st, INP_S2, i, &od_emlrtRTEI);
  for (i = 0; i < 2; i++) {
    for (partialTrueCount = 0; partialTrueCount < loop_ub; partialTrueCount++) {
      if (i + 1 > S2->size[1]) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, S2->size[1], &emlrtBCI, &st);
      }
      INP_S2->data[partialTrueCount + INP_S2->size[0] * i] =
          S2->data[partialTrueCount + S2->size[0] * i];
    }
  }
  emxFree_real_T(&S2);
  emxInitStruct_struct_T1(&st, &c_expl_temp, &ae_emlrtRTEI, true);
  /*  Call core function which computes exceedances to thresholds of mdr */
  b_st.site = &c_emlrtRSI;
  FSRcore(&b_st, b_y, b_X, n, p, INP_mdr, init, INP_Un, INP_bb, INP_Bcoeff,
          INP_S2, weak, bonflev_data, bonflev_size, msg, &c_expl_temp);
  i = out->ListOut->size[0] * out->ListOut->size[1];
  out->ListOut->size[0] = 1;
  out->ListOut->size[1] = c_expl_temp.ListOut->size[1];
  emxEnsureCapacity_real_T(&st, out->ListOut, i, &pd_emlrtRTEI);
  loop_ub = c_expl_temp.ListOut->size[1];
  emxFree_real_T(&INP_S2);
  emxFree_real_T(&INP_Bcoeff);
  emxFree_real_T(&INP_bb);
  emxFree_real_T(&INP_Un);
  emxFree_real_T(&INP_mdr);
  for (i = 0; i < loop_ub; i++) {
    out->ListOut->data[i] = c_expl_temp.ListOut->data[i];
  }
  i = out->outliers->size[0] * out->outliers->size[1];
  out->outliers->size[0] = 1;
  out->outliers->size[1] = c_expl_temp.outliers->size[1];
  emxEnsureCapacity_real_T(&st, out->outliers, i, &pd_emlrtRTEI);
  loop_ub = c_expl_temp.outliers->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->outliers->data[i] = c_expl_temp.outliers->data[i];
  }
  i = out->mdr->size[0] * out->mdr->size[1];
  out->mdr->size[0] = c_expl_temp.mdr->size[0];
  out->mdr->size[1] = c_expl_temp.mdr->size[1];
  emxEnsureCapacity_real_T(&st, out->mdr, i, &pd_emlrtRTEI);
  loop_ub = c_expl_temp.mdr->size[0] * c_expl_temp.mdr->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->mdr->data[i] = c_expl_temp.mdr->data[i];
  }
  i = out->Un->size[0] * out->Un->size[1];
  out->Un->size[0] = c_expl_temp.Un->size[0];
  out->Un->size[1] = c_expl_temp.Un->size[1];
  emxEnsureCapacity_real_T(&st, out->Un, i, &pd_emlrtRTEI);
  loop_ub = c_expl_temp.Un->size[0] * c_expl_temp.Un->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->Un->data[i] = c_expl_temp.Un->data[i];
  }
  i = out->nout->size[0] * out->nout->size[1];
  out->nout->size[0] = c_expl_temp.nout.size[0];
  out->nout->size[1] = c_expl_temp.nout.size[1];
  emxEnsureCapacity_real_T(&st, out->nout, i, &pd_emlrtRTEI);
  loop_ub = c_expl_temp.nout.size[0] * c_expl_temp.nout.size[1];
  for (i = 0; i < loop_ub; i++) {
    out->nout->data[i] = c_expl_temp.nout.data[i];
  }
  i = out->beta->size[0];
  out->beta->size[0] = c_expl_temp.beta->size[0];
  emxEnsureCapacity_real_T(&st, out->beta, i, &qd_emlrtRTEI);
  loop_ub = c_expl_temp.beta->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->beta->data[i] = c_expl_temp.beta->data[i];
  }
  out->scale = c_expl_temp.scale;
  i = out->mdag->size[0] * out->mdag->size[1];
  out->mdag->size[0] = c_expl_temp.mdag.size[0];
  out->mdag->size[1] = c_expl_temp.mdag.size[1];
  emxEnsureCapacity_real_T(&st, out->mdag, i, &pd_emlrtRTEI);
  loop_ub = c_expl_temp.mdag.size[0] * c_expl_temp.mdag.size[1];
  for (i = 0; i < loop_ub; i++) {
    out->mdag->data[0] = c_expl_temp.mdag.data[0];
  }
  i = out->ListCl->size[0] * out->ListCl->size[1];
  out->ListCl->size[0] = 1;
  out->ListCl->size[1] = c_expl_temp.ListCl->size[1];
  emxEnsureCapacity_real_T(&st, out->ListCl, i, &pd_emlrtRTEI);
  loop_ub = c_expl_temp.ListCl->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->ListCl->data[i] = c_expl_temp.ListCl->data[i];
  }
  i = out->VIOMout->size[0] * out->VIOMout->size[1];
  out->VIOMout->size[0] = 1;
  out->VIOMout->size[1] = c_expl_temp.VIOMout->size[1];
  emxEnsureCapacity_real_T(&st, out->VIOMout, i, &pd_emlrtRTEI);
  loop_ub = c_expl_temp.VIOMout->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->VIOMout->data[i] = c_expl_temp.VIOMout->data[i];
  }
  /*  compute and store in output structure the S robust scaled residuals */
  b_st.site = &b_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  if (c_expl_temp.beta->size[0] != b_X->size[1]) {
    if (((b_X->size[0] == 1) && (b_X->size[1] == 1)) ||
        (c_expl_temp.beta->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &j_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&c_st, &k_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  c_st.site = &w_emlrtRSI;
  mtimes(&c_st, b_X, c_expl_temp.beta, constr);
  i = out->fittedvalues->size[0] * out->fittedvalues->size[1];
  out->fittedvalues->size[0] = constr->size[0];
  out->fittedvalues->size[1] = 1;
  emxEnsureCapacity_real_T(&st, out->fittedvalues, i, &rd_emlrtRTEI);
  loop_ub = constr->size[0];
  emxFree_real_T(&b_X);
  for (i = 0; i < loop_ub; i++) {
    out->fittedvalues->data[i] = constr->data[i];
  }
  if (b_y->size[0] != constr->size[0]) {
    emlrtSizeEqCheck1DR2012b(b_y->size[0], constr->size[0], &emlrtECI, &st);
  }
  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = (b_y->data[i] - constr->data[i]) / c_expl_temp.scale;
  }
  emxFreeStruct_struct_T1(&c_expl_temp);
  emxFree_real_T(&constr);
  i = out->residuals->size[0] * out->residuals->size[1];
  out->residuals->size[0] = b_y->size[0];
  out->residuals->size[1] = 1;
  emxEnsureCapacity_real_T(&st, out->residuals, i, &sd_emlrtRTEI);
  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] = b_y->data[i];
  }
  emxFree_real_T(&b_y);
  out->class[0] = 'F';
  out->class[1] = 'S';
  out->class[2] = 'R';
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (FSR_wrapper.c) */
