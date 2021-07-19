/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Score.c
 *
 * Code generation for function 'Score'
 *
 */

/* Include files */
#include "Score.h"
#include "FSRfan_wrapper_data.h"
#include "FSRfan_wrapper_emxutil.h"
#include "FSRfan_wrapper_types.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "error.h"
#include "exp.h"
#include "eye.h"
#include "log.h"
#include "mldivide.h"
#include "mtimes.h"
#include "qr.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "sum.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo sp_emlrtRSI = {
    120,                                             /* lineNo */
    "Score",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pathName */
};

static emlrtRSInfo tp_emlrtRSI = {
    121,                                             /* lineNo */
    "Score",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pathName */
};

static emlrtRSInfo up_emlrtRSI = {
    161,                                             /* lineNo */
    "Score",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pathName */
};

static emlrtRSInfo vp_emlrtRSI = {
    162,                                             /* lineNo */
    "Score",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pathName */
};

static emlrtRSInfo wp_emlrtRSI = {
    163,                                             /* lineNo */
    "Score",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pathName */
};

static emlrtRSInfo xp_emlrtRSI = {
    176,                                             /* lineNo */
    "Score",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pathName */
};

static emlrtRSInfo yp_emlrtRSI = {
    187,                                             /* lineNo */
    "Score",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pathName */
};

static emlrtRSInfo aq_emlrtRSI = {
    188,                                             /* lineNo */
    "Score",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pathName */
};

static emlrtRSInfo bq_emlrtRSI = {
    189,                                             /* lineNo */
    "Score",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pathName */
};

static emlrtRSInfo cq_emlrtRSI = {
    190,                                             /* lineNo */
    "Score",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pathName */
};

static emlrtRSInfo dq_emlrtRSI = {
    192,                                             /* lineNo */
    "Score",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pathName */
};

static emlrtRSInfo eq_emlrtRSI = {
    194,                                             /* lineNo */
    "Score",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pathName */
};

static emlrtRSInfo fq_emlrtRSI = {
    195,                                             /* lineNo */
    "Score",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pathName */
};

static emlrtRSInfo gq_emlrtRSI = {
    196,                                             /* lineNo */
    "Score",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pathName */
};

static emlrtRSInfo hq_emlrtRSI = {
    185,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo iq_emlrtRSI = {
    867,                    /* lineNo */
    "minRealVectorOmitNaN", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo jq_emlrtRSI = {
    62,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo kq_emlrtRSI = {
    54,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo lq_emlrtRSI = {
    103,         /* lineNo */
    "findFirst", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo mq_emlrtRSI = {
    120,                        /* lineNo */
    "minOrMaxRealVectorKernel", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtECInfo q_emlrtECI = {
    -1,                                              /* nDims */
    171,                                             /* lineNo */
    11,                                              /* colNo */
    "Score",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pName */
};

static emlrtECInfo r_emlrtECI = {
    -1,                                              /* nDims */
    179,                                             /* lineNo */
    12,                                              /* colNo */
    "Score",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pName */
};

static emlrtECInfo s_emlrtECI = {
    -1,                                              /* nDims */
    190,                                             /* lineNo */
    17,                                              /* colNo */
    "Score",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pName */
};

static emlrtBCInfo ud_emlrtBCI = {
    -1,                                               /* iFirst */
    -1,                                               /* iLast */
    197,                                              /* lineNo */
    14,                                               /* colNo */
    "beta",                                           /* aName */
    "Score",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m", /* pName */
    0                                                 /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = {
    -1,                                               /* iFirst */
    -1,                                               /* iLast */
    197,                                              /* lineNo */
    24,                                               /* colNo */
    "se",                                             /* aName */
    "Score",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m", /* pName */
    0                                                 /* checkKind */
};

static emlrtRTEInfo gi_emlrtRTEI = {
    161,                                             /* lineNo */
    1,                                               /* colNo */
    "Score",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pName */
};

static emlrtRTEInfo hi_emlrtRTEI = {
    170,                                             /* lineNo */
    11,                                              /* colNo */
    "Score",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pName */
};

static emlrtRTEInfo ii_emlrtRTEI = {
    171,                                             /* lineNo */
    20,                                              /* colNo */
    "Score",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pName */
};

static emlrtRTEInfo ji_emlrtRTEI = {
    176,                                             /* lineNo */
    9,                                               /* colNo */
    "Score",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pName */
};

static emlrtRTEInfo ki_emlrtRTEI = {
    171,                                             /* lineNo */
    9,                                               /* colNo */
    "Score",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pName */
};

static emlrtRTEInfo li_emlrtRTEI = {
    177,                                             /* lineNo */
    9,                                               /* colNo */
    "Score",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pName */
};

static emlrtRTEInfo mi_emlrtRTEI = {
    178,                                             /* lineNo */
    9,                                               /* colNo */
    "Score",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pName */
};

static emlrtRTEInfo ni_emlrtRTEI = {
    187,                                             /* lineNo */
    5,                                               /* colNo */
    "Score",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pName */
};

static emlrtRTEInfo oi_emlrtRTEI =
    {
        91,                  /* lineNo */
        5,                   /* colNo */
        "eml_mtimes_helper", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pName */
};

static emlrtRTEInfo pi_emlrtRTEI = {
    196,                                             /* lineNo */
    20,                                              /* colNo */
    "Score",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pName */
};

static emlrtRTEInfo qi_emlrtRTEI = {
    170,                                             /* lineNo */
    9,                                               /* colNo */
    "Score",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pName */
};

static emlrtRTEInfo ri_emlrtRTEI = {
    194,                                             /* lineNo */
    5,                                               /* colNo */
    "Score",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pName */
};

static emlrtRTEInfo si_emlrtRTEI = {
    1,                                               /* lineNo */
    18,                                              /* colNo */
    "Score",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\Score.m" /* pName */
};

/* Function Definitions */
void Score(const emlrtStack *sp, const emxArray_real_T *y,
           const emxArray_real_T *X, real_T varargin_2,
           real_T outSC_Score_data[], int32_T *outSC_Score_size,
           real_T *outSC_Lik)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_real_T *R;
  emxArray_real_T *Xw;
  emxArray_real_T *logy;
  emxArray_real_T *ri;
  emxArray_real_T *ylai;
  emxArray_real_T *ylaim1;
  emxArray_real_T *z;
  real_T G;
  real_T b_X;
  real_T logG;
  int32_T a;
  int32_T i;
  int32_T idx;
  int32_T k;
  int32_T last;
  char_T TRANSA1;
  char_T TRANSB1;
  int8_T sizes_idx_1;
  boolean_T empty_non_axis_sizes;
  boolean_T exitg1;
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
  /* Score computes the score test for transformation */
  /*  */
  /* <a href="matlab: docsearchFS('Score')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     y:         Response variable. Vector. A vector with n elements that */
  /*                contains the response */
  /*                variable.  It can be either a row or a column vector. */
  /*     X :        Predictor variables. Matrix. Data matrix of explanatory */
  /*                variables (also called 'regressors') */
  /*                of dimension (n x p-1). Rows of X represent observations,
   * and */
  /*                columns represent variables. */
  /*                Missing values (NaN's) and infinite values (Inf's) are
   * allowed, */
  /*                since observations (rows) with missing or infinite values
   * will */
  /*                automatically be excluded from the computations. */
  /*  */
  /*   Optional input arguments: */
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
  /*            la  :transformation parameter. Vector. It specifies for which
   * values of the */
  /*                  transformation parameter it is necessary to compute the */
  /*                  score test. */
  /*                  Default value of lambda is la=[-1 -0.5 0 0.5 1]; that */
  /*                  is the five most common values of lambda */
  /*                Example - 'la',[0 0.5] */
  /*                Data Types - double */
  /*  */
  /*            Lik : likelihood for the augmented model. Boolean. */
  /*                    If true the value of the likelihood for the augmented */
  /*                    model will be produced */
  /*                  else (default) only the value of the score test will be */
  /*                  given */
  /*                Example - 'Lik',false */
  /*                Data Types - logical */
  /*  */
  /*        nocheck : Check input arguments. Boolean. */
  /*                If nocheck is equal to true no check is performed on */
  /*                  matrix y and matrix X. Notice that y and X are left */
  /*                  unchanged. In other words the additional column of ones */
  /*                  for the intercept is not added. As default nocheck=false.
   */
  /*                Example - 'nocheck',true */
  /*                Data Types - boolean */
  /*  */
  /*   Output: */
  /*  */
  /*   The output consists of a structure 'outSC' containing the following
   * fields: */
  /*  */
  /*         outSC.Score    =    score test. Vector. Vector of length */
  /*                             length(lambda) which contains the value of the
   */
  /*                             score test for each value of lambda specfied */
  /*                             in optional input parameter la. If la is not */
  /*                             specified, the vector will be of length 5 and
   */
  /*                             contains the values of the score test for the
   */
  /*                             5 most common values of lambda. */
  /*         outSC.Lik      =    value of the likelihood. Scalar. This output */
  /*                            is produced only if input value Lik =1 */
  /*  */
  /*  See also: FSRfan, ScoreYJ, ScoreYJpn, normBoxCox, normYJ */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2000), "Robust Diagnostic Regression */
  /*  Analysis", Springer Verlag, New York. [see equation 2.30 for the */
  /*  expression for score test statistic] */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('Score')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples */
  /* { */
  /*     %% Score with all default options. */
  /*     % Wool data. */
  /*     XX=load('wool.txt'); */
  /*     y=XX(:,end); */
  /*     X=XX(:,1:end-1); */
  /*     % Score test using the five most common values of lambda */
  /*     [outSC]=Score(y,X); */
  /*     disp('Values of the score test') */
  /*     disp({'la=-1' 'la=-0.5' 'la=0' 'la=0.5' 'la=1'}) */
  /*     disp(outSC.Score') */
  /* } */
  /* { */
  /*     % Score with optional arguments. */
  /*     % Loyalty cards data. */
  /*     load('loyalty.txt'); */
  /*     y=loyalty(:,4); */
  /*     X=loyalty(:,1:3); */
  /*     % la = vector containing the values of the transformation */
  /*     % parameters which have to be tested */
  /*     la=[0.25 1/3 0.4 0.5]; */
  /*     [outSc]=Score(y,X,'la',la,'intercept',false); */
  /* } */
  /*  Beginning of code */
  /* chkinputR makes some input parameters and user options checking in
   * regression */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  y:            Response variable. Vector. */
  /*                A vector with n elements that contains the response */
  /*                variables, possibly with missing values (NaN's) and */
  /*                infinite values (Inf's). */
  /*  X :           Predictor variables. Matrix. */
  /*                Data matrix of explanatory variables (also called */
  /*                'regressors') of dimension (n x p-1), possibly with missing
   */
  /*                values (NaN's) and infinite values (Inf's). Rows of X */
  /*                represent observations, and columns represent variables. */
  /*  nnargin:      nargin. Scalar. The number of input arguments specified for
   * the caller */
  /*                function. */
  /*  vvarargin:    nvarargin. Scalar. The variable length input argument list
   */
  /*                specified for the */
  /*                caller function. */
  /*  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*  y:            response without missing and infs. Vector. The new response
   * variable, with observations (rows) with */
  /*                missing or infinite values excluded. */
  /*  X:            Predictor variables without infs and missings. Matrix. */
  /*                The new matrix of explanatory variables, with missing or */
  /*                infinite values excluded. */
  /*  n:            Number of rows of X (observations). Scalar.  Number of */
  /*                rows after listwise exclusion. */
  /*  p:            Number of columns of X (variables). Scalar. */
  /*                Number of parameters to be estimated. */
  /*  */
  /*  */
  /*  More About: */
  /*  */
  /*  This routines preforms the following operations: */
  /*  1) If y is a row vector it is transformed in a column vector; */
  /*  2) Checks that X is a matrix that has not more than two dimensions; */
  /*  3) Checks dimension consistency of X and y; */
  /*  4) Removes observations with missing or infinite values from X or y */
  /*  (listwise exclusion); */
  /*  5) Adds to matrix X a column of ones if option intercept is 1; */
  /*  6) Checks if there are constant columns in matrix X. In other words, if */
  /*  Xj is a generic column of X (excluding the column which contains the */
  /*  intercept) it removes it if max(Xj)=min(Xj) and produces a warning. */
  /*  7) Computes final values of n and p after previous operations; */
  /*  8) Makes sure than n>=p; */
  /*  9) Makes sure that new X is full rank */
  /*  */
  /*  See also chkinputRB */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Example: */
  /* { */
  /*  example_producing_error */
  /*     %To examplify the behaviour of chkinputR, we call function FSR without
   * a */
  /*     %compulsory parameter ('y'). */
  /*     n=200; */
  /*     p=3; */
  /*     state1=123498; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     [out]=FSR(X); */
  /* } */
  /*  Beginning of code */
  /*  chklist is the vector containing the names of optional arguments */
  /*  chkchk is the position of the option nocheck in vector chklist */
  /*  chkchk = strmatch('nocheck',chklist,'exact'); */
  /*  chkint is the position of the option intercept in vector chklist */
  /*  chkint = strmatch('intercept',chklist,'exact'); */
  /*  If nocheck=true, then skip checks on y and X */
  /*  Add the extra check on vector y */
  st.site = &sp_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
  c_st.site = &bc_emlrtRSI;
  d_st.site = &cc_emlrtRSI;
  if (y->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &ob_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &hq_emlrtRSI;
  f_st.site = &iq_emlrtRSI;
  last = y->size[0];
  if (y->size[0] <= 2) {
    if (y->size[0] == 1) {
      G = y->data[0];
    } else if ((y->data[0] > y->data[1]) ||
               (muDoubleScalarIsNaN(y->data[0]) &&
                (!muDoubleScalarIsNaN(y->data[1])))) {
      G = y->data[1];
    } else {
      G = y->data[0];
    }
  } else {
    g_st.site = &kq_emlrtRSI;
    if (!muDoubleScalarIsNaN(y->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &lq_emlrtRSI;
      if (y->size[0] > 2147483646) {
        i_st.site = &ob_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(y->data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      G = y->data[0];
    } else {
      g_st.site = &jq_emlrtRSI;
      G = y->data[idx - 1];
      a = idx + 1;
      h_st.site = &mq_emlrtRSI;
      if ((idx + 1 <= y->size[0]) && (y->size[0] > 2147483646)) {
        i_st.site = &ob_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (k = a; k <= last; k++) {
        logG = y->data[k - 1];
        if (G > logG) {
          G = logG;
        }
      }
    }
  }
  if (G < 0.0) {
    st.site = &tp_emlrtRSI;
    g_error(&st);
  }
  emxInit_real_T(sp, &logy, 1, &gi_emlrtRTEI, true);
  /*  Write in structure 'options' the options chosen by the user */
  /*   Sc= vector which contains the t test for constructed variables for the */
  /*   values of \lambda specified in vector la */
  /*  Lik is a vector which contains the likelihoods for diff. values of la */
  /*  Geometric mean of the observations */
  k = logy->size[0];
  logy->size[0] = y->size[0];
  emxEnsureCapacity_real_T(sp, logy, k, &gi_emlrtRTEI);
  last = y->size[0];
  for (k = 0; k < last; k++) {
    logy->data[k] = y->data[k];
  }
  st.site = &up_emlrtRSI;
  b_log(&st, logy);
  st.site = &vp_emlrtRSI;
  G = sum(&st, logy) / (real_T)X->size[0];
  G = muDoubleScalarExp(G);
  st.site = &wp_emlrtRSI;
  logG = muDoubleScalarLog(G);
  /*  loop over the values of \lambda */
  *outSC_Score_size = 1;
  b_X = (real_T)(X->size[0] - X->size[1]) - 1.0;
  /*  Define transformed and constructed variable */
  emxInit_real_T(sp, &z, 1, &qi_emlrtRTEI, true);
  emxInit_real_T(sp, &ylai, 1, &ji_emlrtRTEI, true);
  emxInit_real_T(sp, &ylaim1, 1, &li_emlrtRTEI, true);
  if (muDoubleScalarAbs(varargin_2) < 1.0E-8) {
    last = logy->size[0];
    k = z->size[0];
    z->size[0] = logy->size[0];
    emxEnsureCapacity_real_T(sp, z, k, &hi_emlrtRTEI);
    k = ylai->size[0];
    ylai->size[0] = logy->size[0];
    emxEnsureCapacity_real_T(sp, ylai, k, &ii_emlrtRTEI);
    for (k = 0; k < last; k++) {
      z->data[k] = G * logy->data[k];
      ylai->data[k] = logy->data[k] / 2.0;
    }
    if (z->size[0] != ylai->size[0]) {
      emlrtSizeEqCheck1DR2012b(z->size[0], ylai->size[0], &q_emlrtECI,
                               (emlrtCTX)sp);
    }
    k = ylai->size[0];
    ylai->size[0] = z->size[0];
    emxEnsureCapacity_real_T(sp, ylai, k, &ki_emlrtRTEI);
    last = z->size[0];
    for (k = 0; k < last; k++) {
      ylai->data[k] = z->data[k] * (ylai->data[k] - logG);
    }
  } else {
    /*  laiGlaim1=lai*G^(lai-1); */
    G = varargin_2 * muDoubleScalarExp((varargin_2 - 1.0) * logG);
    /*  ylai=y.^lai; */
    last = logy->size[0];
    k = ylai->size[0];
    ylai->size[0] = logy->size[0];
    emxEnsureCapacity_real_T(sp, ylai, k, &ji_emlrtRTEI);
    for (k = 0; k < last; k++) {
      ylai->data[k] = varargin_2 * logy->data[k];
    }
    st.site = &xp_emlrtRSI;
    b_exp(&st, ylai);
    k = ylaim1->size[0];
    ylaim1->size[0] = ylai->size[0];
    emxEnsureCapacity_real_T(sp, ylaim1, k, &li_emlrtRTEI);
    last = ylai->size[0];
    for (k = 0; k < last; k++) {
      ylaim1->data[k] = ylai->data[k] - 1.0;
    }
    k = z->size[0];
    z->size[0] = ylaim1->size[0];
    emxEnsureCapacity_real_T(sp, z, k, &mi_emlrtRTEI);
    last = ylaim1->size[0];
    for (k = 0; k < last; k++) {
      z->data[k] = ylaim1->data[k] / G;
    }
    if (ylai->size[0] != logy->size[0]) {
      emlrtSizeEqCheck1DR2012b(ylai->size[0], logy->size[0], &r_emlrtECI,
                               (emlrtCTX)sp);
    }
    last = ylai->size[0];
    for (k = 0; k < last; k++) {
      ylai->data[k] *= logy->data[k];
    }
    logG += 1.0 / varargin_2;
    last = ylaim1->size[0];
    for (k = 0; k < last; k++) {
      ylaim1->data[k] *= logG;
    }
    if (ylai->size[0] != ylaim1->size[0]) {
      emlrtSizeEqCheck1DR2012b(ylai->size[0], ylaim1->size[0], &r_emlrtECI,
                               (emlrtCTX)sp);
    }
    last = ylai->size[0];
    for (k = 0; k < last; k++) {
      ylai->data[k] = (ylai->data[k] - ylaim1->data[k]) / G;
    }
    /*  OLD slow code */
    /*  z=(y.^la(i)-1)/(la(i)*G^(la(i)-1)); */
    /*  w=(y.^la(i).*log(y)-(y.^la(i)-1)*(1/la(i)+log(G)))/(la(i)*G^(la(i)-1));
     */
  }
  emxFree_real_T(&logy);
  /*  Define augmented X matrix */
  st.site = &yp_emlrtRSI;
  b_st.site = &de_emlrtRSI;
  if ((X->size[0] != 0) && (X->size[1] != 0)) {
    idx = X->size[0];
  } else if (ylai->size[0] != 0) {
    idx = ylai->size[0];
  } else {
    idx = X->size[0];
  }
  c_st.site = &ee_emlrtRSI;
  if ((X->size[0] != idx) && ((X->size[0] != 0) && (X->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((ylai->size[0] != idx) && (ylai->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (idx == 0);
  if (empty_non_axis_sizes || ((X->size[0] != 0) && (X->size[1] != 0))) {
    last = X->size[1];
  } else {
    last = 0;
  }
  if (empty_non_axis_sizes || (ylai->size[0] != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }
  emxInit_real_T(&b_st, &Xw, 2, &ni_emlrtRTEI, true);
  k = Xw->size[0] * Xw->size[1];
  Xw->size[0] = idx;
  Xw->size[1] = last + sizes_idx_1;
  emxEnsureCapacity_real_T(&b_st, Xw, k, &ni_emlrtRTEI);
  for (k = 0; k < last; k++) {
    for (i = 0; i < idx; i++) {
      Xw->data[i + Xw->size[0] * k] = X->data[i + idx * k];
    }
  }
  a = sizes_idx_1;
  for (k = 0; k < a; k++) {
    for (i = 0; i < idx; i++) {
      Xw->data[i + Xw->size[0] * last] = ylai->data[i];
    }
  }
  emxInit_real_T(&b_st, &ri, 2, &ri_emlrtRTEI, true);
  emxInit_real_T(&b_st, &R, 2, &si_emlrtRTEI, true);
  st.site = &aq_emlrtRSI;
  qr(&st, Xw, ri, R);
  st.site = &bq_emlrtRSI;
  b_st.site = &mb_emlrtRSI;
  dynamic_size_checks(&b_st, ri, z, ri->size[0], z->size[0]);
  b_st.site = &lb_emlrtRSI;
  if ((ri->size[0] == 0) || (ri->size[1] == 0) || (z->size[0] == 0)) {
    last = ri->size[1];
    k = ylai->size[0];
    ylai->size[0] = ri->size[1];
    emxEnsureCapacity_real_T(&b_st, ylai, k, &oi_emlrtRTEI);
    for (k = 0; k < last; k++) {
      ylai->data[k] = 0.0;
    }
  } else {
    c_st.site = &nb_emlrtRSI;
    d_st.site = &pb_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    G = 1.0;
    logG = 0.0;
    m_t = (ptrdiff_t)ri->size[1];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)ri->size[0];
    lda_t = (ptrdiff_t)ri->size[0];
    ldb_t = (ptrdiff_t)z->size[0];
    ldc_t = (ptrdiff_t)ri->size[1];
    k = ylai->size[0];
    ylai->size[0] = ri->size[1];
    emxEnsureCapacity_real_T(&d_st, ylai, k, &ce_emlrtRTEI);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &G, &ri->data[0], &lda_t,
          &z->data[0], &ldb_t, &logG, &ylai->data[0], &ldc_t);
  }
  st.site = &bq_emlrtRSI;
  mldivide(&st, R, ylai, ylaim1);
  st.site = &cq_emlrtRSI;
  b_st.site = &mb_emlrtRSI;
  dynamic_size_checks(&b_st, Xw, ylaim1, Xw->size[1], ylaim1->size[0]);
  b_st.site = &lb_emlrtRSI;
  mtimes(&b_st, Xw, ylaim1, ylai);
  if (z->size[0] != ylai->size[0]) {
    emlrtSizeEqCheck1DR2012b(z->size[0], ylai->size[0], &s_emlrtECI,
                             (emlrtCTX)sp);
  }
  last = z->size[0];
  for (k = 0; k < last; k++) {
    z->data[k] -= ylai->data[k];
  }
  /*  Sum of squares of residuals */
  st.site = &dq_emlrtRSI;
  if (z->size[0] == 0) {
    G = 0.0;
  } else {
    n_t = (ptrdiff_t)z->size[0];
    m_t = (ptrdiff_t)1;
    G = dnrm2(&n_t, &z->data[0], &m_t);
  }
  emxFree_real_T(&z);
  b_st.site = &il_emlrtRSI;
  c_st.site = &qf_emlrtRSI;
  logG = muDoubleScalarPower(G, 2.0);
  /*  Compute t stat for constructed added variable */
  st.site = &eq_emlrtRSI;
  eye(&st, (real_T)X->size[1] + 1.0, Xw);
  st.site = &eq_emlrtRSI;
  b_mldivide(&st, R, Xw, ri);
  st.site = &fq_emlrtRSI;
  b_st.site = &mb_emlrtRSI;
  b_dynamic_size_checks(&b_st, ri, ri, ri->size[1], ri->size[1]);
  b_st.site = &lb_emlrtRSI;
  b_mtimes(&b_st, ri, ri, Xw);
  k = ri->size[0] * ri->size[1];
  ri->size[0] = Xw->size[0];
  ri->size[1] = Xw->size[1];
  emxEnsureCapacity_real_T(sp, ri, k, &pi_emlrtRTEI);
  last = Xw->size[0] * Xw->size[1];
  emxFree_real_T(&R);
  for (k = 0; k < last; k++) {
    ri->data[k] = Xw->data[k] * logG / b_X;
  }
  emxFree_real_T(&Xw);
  st.site = &gq_emlrtRSI;
  diag(&st, ri, ylai);
  st.site = &gq_emlrtRSI;
  b_sqrt(&st, ylai);
  emxFree_real_T(&ri);
  if (ylaim1->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(ylaim1->size[0], 1, ylaim1->size[0],
                                  &ud_emlrtBCI, (emlrtCTX)sp);
  }
  if (ylai->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(ylai->size[0], 1, ylai->size[0], &vd_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  outSC_Score_data[0] =
      -ylaim1->data[ylaim1->size[0] - 1] / ylai->data[ylai->size[0] - 1];
  /*  Store the value of the likelihood for the model which also contains */
  /*  the constructed variable */
  emxFree_real_T(&ylaim1);
  emxFree_real_T(&ylai);
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b((emlrtCTX)sp);
  }
  /*  Store values of the score test inside structure outSC */
  /*  Store values of the likelihood inside structure outSC */
  *outSC_Lik = rtNaN;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (Score.c) */
