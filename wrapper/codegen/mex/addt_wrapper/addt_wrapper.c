/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * addt_wrapper.c
 *
 * Code generation for function 'addt_wrapper'
 *
 */

/* Include files */
#include "addt_wrapper.h"
#include "addt_wrapper_data.h"
#include "addt_wrapper_emxutil.h"
#include "addt_wrapper_types.h"
#include "chkinputR.h"
#include "eml_mtimes_helper.h"
#include "ifWhileCond.h"
#include "indexShapeCheck.h"
#include "log.h"
#include "mean.h"
#include "mpower.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "power.h"
#include "qr.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "tcdf.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    38,             /* lineNo */
    "addt_wrapper", /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\addt_wrapper.m" /* pathName
                                                                       */
};

static emlrtRSInfo b_emlrtRSI = {
    154,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    194,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    195,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    196,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    205,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    214,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    216,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    217,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    219,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    225,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI = {
    226,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    227,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI = {
    228,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI = {
    229,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    243,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI = {
    244,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI = {
    246,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo s_emlrtRSI = {
    248,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo t_emlrtRSI = {
    250,                                            /* lineNo */
    "addt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pathName */
};

static emlrtRSInfo yd_emlrtRSI = {
    20,                /* lineNo */
    "mrdivide_helper", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_"
    "helper.m" /* pathName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                                              /* iFirst */
    -1,                                              /* iLast */
    205,                                             /* lineNo */
    15,                                              /* colNo */
    "A",                                             /* aName */
    "addt",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m", /* pName */
    0                                                /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                                              /* iFirst */
    -1,                                              /* iLast */
    205,                                             /* lineNo */
    3,                                               /* colNo */
    "A",                                             /* aName */
    "addt",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m", /* pName */
    0                                                /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    205,                                             /* lineNo */
    3,                                               /* colNo */
    "addt",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m", /* pName */
    1                                                /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = {
    16,                /* lineNo */
    19,                /* colNo */
    "mrdivide_helper", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_"
    "helper.m" /* pName */
};

static emlrtECInfo emlrtECI = {
    -1,                                             /* nDims */
    243,                                            /* lineNo */
    13,                                             /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtECInfo b_emlrtECI = {
    2,                                              /* nDims */
    243,                                            /* lineNo */
    13,                                             /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtECInfo c_emlrtECI = {
    -1,                                             /* nDims */
    205,                                            /* lineNo */
    1,                                              /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtECInfo d_emlrtECI = {
    2,                                              /* nDims */
    202,                                            /* lineNo */
    10,                                             /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI = {
    154,                                            /* lineNo */
    2,                                              /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI = {
    154,                                            /* lineNo */
    4,                                              /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI = {
    196,                                            /* lineNo */
    5,                                              /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI = {
    197,                                            /* lineNo */
    1,                                              /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    202,                                            /* lineNo */
    16,                                             /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    202,                                            /* lineNo */
    1,                                              /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    205,                                            /* lineNo */
    3,                                              /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    205,                                            /* lineNo */
    11,                                             /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    222,                                            /* lineNo */
    5,                                              /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    214,                                            /* lineNo */
    16,                                             /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    217,                                            /* lineNo */
    9,                                              /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    195,                                            /* lineNo */
    1,                                              /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    196,                                            /* lineNo */
    1,                                              /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    225,                                            /* lineNo */
    1,                                              /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    227,                                            /* lineNo */
    1,                                              /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    217,                                            /* lineNo */
    13,                                             /* colNo */
    "addt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\addt.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    1,              /* lineNo */
    16,             /* colNo */
    "addt_wrapper", /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\addt_wrapper.m" /* pName
                                                                       */
};

/* Function Definitions */
void addt_wrapper(const emlrtStack *sp, const emxArray_real_T *y,
                  const emxArray_real_T *X, const emxArray_real_T *w,
                  boolean_T intercept, const real_T la_data[],
                  const int32_T la_size[2], boolean_T nocheck,
                  struct_addt_T *out)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_int32_T *r1;
  emxArray_real_T *A;
  emxArray_real_T *Aw;
  emxArray_real_T *Az;
  emxArray_real_T *E;
  emxArray_real_T *R;
  emxArray_real_T *a__1;
  emxArray_real_T *b_y;
  emxArray_real_T *r;
  emxArray_real_T *sel;
  emxArray_real_T *z;
  real_T G;
  real_T Sz_data;
  real_T n;
  real_T p;
  real_T r_data;
  real_T wAw;
  real_T zAw_data;
  int32_T b_la_size[2];
  int32_T b_size[2];
  int32_T iv[2];
  int32_T r_size[2];
  int32_T Sz_size;
  int32_T i;
  int32_T loop_ub;
  int32_T nx;
  int32_T zAw_size;
  uint32_T siz_idx_0;
  boolean_T b_la_data;
  boolean_T c_y;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_y, 1, &lb_emlrtRTEI, true);
  /*  Example wrapper function for addt. NV pair names are not taken as */
  /*  inputs. Instead, just the values are taken as inputs. */
  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  ARGS{1}{1} = coder.typeof(0,[Inf 1],[1 0]); */
  /*  X: an array of doubles of any dimensions */
  /*  ARGS{1}{2} = coder.typeof(0,[Inf Inf],[1 1]); */
  /*  w: a column vector of doubles of any length */
  /*  ARGS{1}{3} = coder.typeof(0,[Inf 1],[1 0]); */
  /*  Optional input arguments (name / pairs) */
  /*  intercept = a scalar boolean (first varargin) */
  /*  ARGS{1}{4} = coder.Constant('intercept'); */
  /*  ARGS{1}{5} = coder.typeof(true); */
  /*  la a scalar of type double or empty value (second varargin) */
  /*  ARGS{1}{6} = coder.Constant('la'); */
  /*  ARGS{1}{7} = coder.typeof(1,[1 1],[1 1]); */
  /*  nocheck a logical */
  st.site = &emlrtRSI;
  /* addt produces the t test for an additional explanatory variable */
  /*  */
  /* <a href="matlab: docsearchFS('addt')">Link to the help page for this
   * function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*        y:  A vector with n elements that contains the response variable. */
  /*            y can be both a row of column vector. */
  /*        X:  Data matrix of explanatory variables (also called */
  /*            'regressors'). */
  /*            Rows of X represent observations and columns represent */
  /*            variables. */
  /*            Missing values (NaN's) and infinite values (Inf's) are allowed,
   */
  /*            since observations (rows) with missing or infinite values will
   */
  /*            automatically be excluded from the computations. */
  /*        w:  added variable. Vector. n-times-1 vector containing the
   * additional */
  /*            explanatory variable whose t test must be computed. */
  /*  */
  /*  Optional input arguments: */
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
  /*    la:         Transformation parameter. Scalar | '' (empty value). */
  /*                It specifies for which Box Cox */
  /*                transformation parameter it is necessary to compute the t */
  /*                statistic for the additional variable. If la is an empty */
  /*                value (default) no transformation is used. */
  /*                Example - 'la',0.5 tests square root transformation */
  /*                Data Types - double */
  /*  */
  /*  nocheck :     Check input arguments. Boolean. */
  /*                If nocheck is equal to true no check is performed on */
  /*                matrix y and matrix X. Notice that y and X are left */
  /*                unchanged. In other words the additional column of ones */
  /*                for the intercept is not added. As default nocheck=false. */
  /*                Example - 'nocheck',true */
  /*                Data Types - logical */
  /*  */
  /*    plots:      Plot on the screen. Scalar. */
  /*                If plots=1 the added variable */
  /*                plot is produced else (default) no plot is produced. */
  /*                Example - 'plots',1 */
  /*                Data Types - double */
  /*  */
  /*    FontSize:   Label font size inside plot. Scalar. It controls the */
  /*                fontsize of the labels of the axes and eventual plot */
  /*                labels. Default value is 10 */
  /*                Example - 'FontSize',14 */
  /*                Data Types - double */
  /*  */
  /*    SizeAxesNum: Font size of axes numbers. Scalar. It controls the */
  /*                fontsize of the numbers of the */
  /*                axes. Default value is 10 */
  /*                Example - SizeAxesNum,12 */
  /*                Data Types - double */
  /*    textlab:    Labels of units in the plot. Boolean. If textlab=false */
  /*                (default) no text label is written on the plot */
  /*                for units else text label of units are added on the plot */
  /*                Example - 'textlab',true */
  /*                Data Types - boolean */
  /*  */
  /*    units:      Units to remove. Vector. */
  /*                Vector containing the list of */
  /*                units which has to be removed in the computation of the */
  /*                test. The default is to use all units */
  /*                Example - 'units',[1,3] removes units 1 and 3 */
  /*                Data Types - double */
  /*  */
  /*  */
  /*  Output: */
  /*  */
  /*          out:   structure which contains the following fields */
  /*  */
  /*        out.b=          estimate of the slope for additional explanatory */
  /*                        variable */
  /*        out.S2add=  estimate of $s^2$ of the model which contains the */
  /*                        additional explanatory variable */
  /*        out.Tadd=         t statistic for additional explanatory variable */
  /*        out.pval=         p-value of the t statistic */
  /*  */
  /*  */
  /*  See also FSRaddt */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2000), "Robust Diagnostic Regression */
  /*  Analysis", Springer Verlag, New York. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('addt')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     %% addt with all default options. */
  /*     % Compute the t test for an additional regressor. */
  /*     XX=load('wool.txt'); */
  /*     y=log(XX(:,end)); */
  /*     X=XX(:,1:end-2); */
  /*     w=XX(:,end-1); */
  /*     [out]=addt(y,X,w); */
  /*      */
  /*     % out.Tadd (equal to -8.9707) is exactly equal to stats.tstat.t(4) */
  /*     % obtained as */
  /*      */
  /*     whichstats = {'tstat','mse'}; */
  /*     stats = regstats(y,XX(:,1:end-1),'linear',whichstats); */
  /*      */
  /*     % Similarly out.S2add (equal to 0.0345) is exactly equal to stats.mse
   * (estimate of */
  /*     % \sigma^2 for augmented model) */
  /* } */
  /* { */
  /*     %% addt with optional arguments. */
  /*     % Excluding one observation from the sample; compare the added variable
   * plot */
  /*     % based on all units with that which excludes unit 43. */
  /*     load('multiple_regression.txt'); */
  /*     y=multiple_regression(:,4); */
  /*     X=multiple_regression(:,1:3); */
  /*     [out]=addt(y,X(:,2:3),X(:,1),'plots',1,'units',[43],'textlab',true); */
  /* } */
  /* { */
  /*     %% Excluding more than one observation from the sample. */
  /*     % Compare the added variable plot based on all units with that which
   * excludes units */
  /*     % 9,21,30,31,38 and 47. */
  /*     load('multiple_regression.txt'); */
  /*     y=multiple_regression(:,4); */
  /*     X=multiple_regression(:,1:3); */
  /*     [out]=addt(y,X(:,2:3),X(:,1),'plots',1,'units',[9 21 30 31 38
   * 47]','textlab',true); */
  /* } */
  /*  */
  /*  */
  /*  Beginning of code */
  i = b_y->size[0];
  b_y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(&st, b_y, i, &v_emlrtRTEI);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = y->data[i];
  }
  emxInit_real_T(&st, &A, 2, &ib_emlrtRTEI, true);
  i = A->size[0] * A->size[1];
  A->size[0] = X->size[0];
  A->size[1] = X->size[1];
  emxEnsureCapacity_real_T(&st, A, i, &w_emlrtRTEI);
  loop_ub = X->size[0] * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    A->data[i] = X->data[i];
  }
  emxInit_real_T(&st, &a__1, 2, &x_emlrtRTEI, true);
  emxInit_real_T(&st, &R, 2, &mb_emlrtRTEI, true);
  b_st.site = &b_emlrtRSI;
  chkinputR(&b_st, b_y, A, intercept, nocheck, &n, &p);
  /*  Insert code for intercept */
  /*  t test for an additional explanatory variable */
  b_st.site = &c_emlrtRSI;
  qr(&b_st, A, a__1, R);
  b_st.site = &d_emlrtRSI;
  if (R->size[1] != A->size[1]) {
    emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  emxInit_real_T(&b_st, &E, 2, &hb_emlrtRTEI, true);
  c_st.site = &yd_emlrtRSI;
  mrdiv(&c_st, A, R, E);
  b_st.site = &e_emlrtRSI;
  i = a__1->size[0] * a__1->size[1];
  a__1->size[0] = E->size[0];
  a__1->size[1] = E->size[1];
  emxEnsureCapacity_real_T(&b_st, a__1, i, &x_emlrtRTEI);
  loop_ub = E->size[0] * E->size[1];
  emxFree_real_T(&R);
  for (i = 0; i < loop_ub; i++) {
    a__1->data[i] = -E->data[i];
  }
  c_st.site = &ib_emlrtRSI;
  b_dynamic_size_checks(&c_st, a__1, E, a__1->size[1], E->size[1]);
  c_st.site = &hb_emlrtRSI;
  b_mtimes(&c_st, a__1, E, A);
  emxFree_real_T(&E);
  emxFree_real_T(&a__1);
  emxInit_real_T(&st, &sel, 2, &y_emlrtRTEI, true);
  if (muDoubleScalarIsNaN(n)) {
    i = sel->size[0] * sel->size[1];
    sel->size[0] = 1;
    sel->size[1] = 1;
    emxEnsureCapacity_real_T(&st, sel, i, &y_emlrtRTEI);
    sel->data[0] = rtNaN;
  } else if (n < 1.0) {
    sel->size[0] = 1;
    sel->size[1] = 0;
  } else if (muDoubleScalarIsInf(n) && (1.0 == n)) {
    i = sel->size[0] * sel->size[1];
    sel->size[0] = 1;
    sel->size[1] = 1;
    emxEnsureCapacity_real_T(&st, sel, i, &y_emlrtRTEI);
    sel->data[0] = rtNaN;
  } else {
    i = sel->size[0] * sel->size[1];
    sel->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor(n - 1.0);
    sel->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&st, sel, i, &y_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      sel->data[i] = (real_T)i + 1.0;
    }
  }
  emxInit_real_T(&st, &r, 2, &mb_emlrtRTEI, true);
  siz_idx_0 = (uint32_T)A->size[0];
  /*  Find linear indexes */
  /*  It is better to compute linind directly rather than calling sub2ind */
  /*  linind=sub2ind(siz,sel,sel); */
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = sel->size[1];
  emxEnsureCapacity_real_T(&st, r, i, &ab_emlrtRTEI);
  loop_ub = sel->size[1];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (sel->data[i] - 1.0) * (real_T)siz_idx_0;
  }
  b_size[0] = (*(int32_T(*)[2])sel->size)[0];
  b_size[1] = (*(int32_T(*)[2])sel->size)[1];
  iv[0] = (*(int32_T(*)[2])r->size)[0];
  iv[1] = (*(int32_T(*)[2])r->size)[1];
  emlrtSizeEqCheckNDR2012b(&b_size[0], &iv[0], &d_emlrtECI, &st);
  i = sel->size[0] * sel->size[1];
  sel->size[0] = 1;
  emxEnsureCapacity_real_T(&st, sel, i, &bb_emlrtRTEI);
  loop_ub = sel->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    sel->data[i] += r->data[i];
  }
  emxFree_real_T(&r);
  emxInit_int32_T(&st, &r1, 2, &mb_emlrtRTEI, true);
  b_st.site = &f_emlrtRSI;
  indexShapeCheck(&b_st, *(int32_T(*)[2])A->size, *(int32_T(*)[2])sel->size);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = sel->size[1];
  emxEnsureCapacity_int32_T(&st, r1, i, &cb_emlrtRTEI);
  nx = A->size[0] * A->size[1];
  loop_ub = sel->size[1];
  for (i = 0; i < loop_ub; i++) {
    zAw_size = (int32_T)sel->data[i];
    if (sel->data[i] != zAw_size) {
      emlrtIntegerCheckR2012b(sel->data[i], &emlrtDCI, &st);
    }
    if ((zAw_size < 1) || (zAw_size > nx)) {
      emlrtDynamicBoundsCheckR2012b(zAw_size, 1, nx, &b_emlrtBCI, &st);
    }
    r1->data[i] = zAw_size;
  }
  nx = A->size[0] * A->size[1];
  loop_ub = sel->size[1];
  for (i = 0; i < loop_ub; i++) {
    zAw_size = (int32_T)sel->data[i];
    if ((zAw_size < 1) || (zAw_size > nx)) {
      emlrtDynamicBoundsCheckR2012b(zAw_size, 1, nx, &emlrtBCI, &st);
    }
  }
  if (r1->size[1] != sel->size[1]) {
    emlrtSubAssignSizeCheck1dR2017a(r1->size[1], sel->size[1], &c_emlrtECI,
                                    &st);
  }
  emxInit_real_T(&st, &Aw, 1, &kb_emlrtRTEI, true);
  loop_ub = sel->size[1];
  i = Aw->size[0];
  Aw->size[0] = sel->size[1];
  emxEnsureCapacity_real_T(&st, Aw, i, &db_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    Aw->data[i] = A->data[(int32_T)sel->data[i] - 1] + 1.0;
  }
  emxFree_real_T(&sel);
  loop_ub = Aw->size[0];
  for (i = 0; i < loop_ub; i++) {
    A->data[r1->data[i] - 1] = Aw->data[i];
  }
  emxFree_int32_T(&r1);
  /*  Notice that: */
  /*  -E*E' = matrix -H = -X*inv(X'X)*X' computed through qr decomposition */
  /*  A = Matrix I - H */
  emxInit_real_T(&st, &z, 2, &gb_emlrtRTEI, true);
  if ((la_size[0] != 0) && (la_size[1] != 0)) {
    /* geometric mean of the y */
    i = Aw->size[0];
    Aw->size[0] = b_y->size[0];
    emxEnsureCapacity_real_T(&st, Aw, i, &fb_emlrtRTEI);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      Aw->data[i] = b_y->data[i];
    }
    b_st.site = &g_emlrtRSI;
    b_log(&b_st, Aw);
    b_st.site = &g_emlrtRSI;
    G = mean(&b_st, Aw);
    G = muDoubleScalarExp(G);
    /*   if la1==0 */
    b_la_size[0] = 1;
    b_la_size[1] = 1;
    b_la_data = (la_data[0] == 0.0);
    b_st.site = &h_emlrtRSI;
    if (ifWhileCond((boolean_T *)&b_la_data, b_la_size)) {
      b_st.site = &i_emlrtRSI;
      b_log(&b_st, b_y);
      loop_ub = b_y->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_y->data[i] *= G;
      }
      i = z->size[0] * z->size[1];
      z->size[0] = b_y->size[0];
      z->size[1] = 1;
      emxEnsureCapacity_real_T(&st, z, i, &gb_emlrtRTEI);
      loop_ub = b_y->size[0];
      for (i = 0; i < loop_ub; i++) {
        z->data[i] = b_y->data[i];
      }
    } else {
      b_st.site = &j_emlrtRSI;
      G = muDoubleScalarPower(G, la_data[0] - 1.0);
      r_size[0] = 1;
      r_size[1] = 1;
      r_data = la_data[0] * G;
      b_st.site = &j_emlrtRSI;
      c_st.site = &j_emlrtRSI;
      power(&c_st, b_y, la_data[0], Aw);
      loop_ub = Aw->size[0];
      for (i = 0; i < loop_ub; i++) {
        Aw->data[i]--;
      }
      c_st.site = &yd_emlrtRSI;
      b_mrdiv(&c_st, Aw, (real_T *)&r_data, r_size, z);
    }
  } else {
    i = z->size[0] * z->size[1];
    z->size[0] = b_y->size[0];
    z->size[1] = 1;
    emxEnsureCapacity_real_T(&st, z, i, &eb_emlrtRTEI);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      z->data[i] = b_y->data[i];
    }
  }
  emxFree_real_T(&b_y);
  emxInit_real_T(&st, &Az, 2, &jb_emlrtRTEI, true);
  b_st.site = &k_emlrtRSI;
  c_st.site = &ib_emlrtRSI;
  b_dynamic_size_checks(&c_st, A, z, A->size[1], z->size[0]);
  c_st.site = &hb_emlrtRSI;
  c_mtimes(&c_st, A, z, Az);
  b_st.site = &l_emlrtRSI;
  c_st.site = &ib_emlrtRSI;
  b_dynamic_size_checks(&c_st, z, Az, z->size[0], Az->size[0]);
  d_mtimes(z, Az, (real_T *)&r_data, r_size);
  b_st.site = &m_emlrtRSI;
  c_st.site = &ib_emlrtRSI;
  dynamic_size_checks(&c_st, A, w, A->size[1], w->size[0]);
  c_st.site = &hb_emlrtRSI;
  mtimes(&c_st, A, w, Aw);
  b_st.site = &n_emlrtRSI;
  c_st.site = &ib_emlrtRSI;
  dynamic_size_checks(&c_st, z, Aw, z->size[0], Aw->size[0]);
  e_mtimes(z, Aw, (real_T *)&zAw_data, &zAw_size);
  b_st.site = &o_emlrtRSI;
  c_st.site = &ib_emlrtRSI;
  emxFree_real_T(&Az);
  emxFree_real_T(&z);
  emxFree_real_T(&A);
  if (w->size[0] != Aw->size[0]) {
    if ((w->size[0] == 1) || (Aw->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  if (w->size[0] < 1) {
    wAw = 0.0;
  } else {
    n_t = (ptrdiff_t)w->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    wAw = ddot(&n_t, &w->data[0], &incx_t, &Aw->data[0], &incy_t);
  }
  emxFree_real_T(&Aw);
  if (wAw < 1.0E-12) {
    out->S2add.size[0] = 1;
    out->S2add.data[0] = rtNaN;
    out->Tadd.size[0] = 1;
    out->Tadd.size[1] = 1;
    out->Tadd.data[0] = rtNaN;
    out->b.size[0] = 1;
    out->b.data[0] = rtNaN;
    out->pval.size[0] = 1;
    out->pval.size[1] = 1;
    out->pval.data[0] = rtNaN;
  } else {
    /*  b=regress(Az,Aw); */
    out->b.size[0] = zAw_size;
    for (i = 0; i < zAw_size; i++) {
      out->b.data[0] = zAw_data / wAw;
    }
    if (1 != r_size[1]) {
      emlrtDimSizeEqCheckR2012b(1, 0, &b_emlrtECI, &st);
    }
    b_st.site = &p_emlrtRSI;
    mpower(&b_st, (real_T *)&zAw_data, zAw_size, (real_T *)&Sz_data, &Sz_size);
    for (i = 0; i < Sz_size; i++) {
      Sz_data /= wAw;
    }
    if (r_size[0] != Sz_size) {
      emlrtSizeEqCheck1DR2012b(r_size[0], Sz_size, &emlrtECI, &st);
    }
    loop_ub = r_size[0];
    Sz_size = r_size[0];
    for (i = 0; i < loop_ub; i++) {
      Sz_data = r_data - Sz_data;
    }
    b_st.site = &p_emlrtRSI;
    b_sqrt(&b_st, (real_T *)&Sz_data, &Sz_size);
    /*  See Atkinson (1985) p. 98 */
    b_st.site = &q_emlrtRSI;
    mpower(&b_st, (real_T *)&Sz_data, Sz_size, (real_T *)&G, &nx);
    r_data = (n - p) - 1.0;
    out->S2add.size[0] = nx;
    for (i = 0; i < nx; i++) {
      out->S2add.data[0] = G / r_data;
    }
    b_st.site = &r_emlrtRSI;
    if (0 <= Sz_size - 1) {
      G = muDoubleScalarAbs(Sz_data);
    }
    b_st.site = &r_emlrtRSI;
    for (i = 0; i < Sz_size; i++) {
      b_la_data = (G > 1.0E-7);
    }
    c_y = (Sz_size != 0);
    if (c_y) {
      loop_ub = 0;
      exitg1 = false;
      while ((!exitg1) && (loop_ub <= Sz_size - 1)) {
        if (!b_la_data) {
          c_y = false;
          exitg1 = true;
        } else {
          loop_ub = 1;
        }
      }
    }
    if (c_y) {
      /*  Compute t-statistic */
      b_st.site = &s_emlrtRSI;
      if (r_data < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      G = muDoubleScalarSqrt(r_data);
      for (i = 0; i < zAw_size; i++) {
        zAw_data *= G;
      }
      b_st.site = &s_emlrtRSI;
      G = muDoubleScalarSqrt(wAw);
      for (i = 0; i < Sz_size; i++) {
        Sz_data *= G;
      }
      if ((zAw_size == 0) || (Sz_size == 0)) {
        out->Tadd.size[0] = zAw_size;
        out->Tadd.size[1] = Sz_size;
        loop_ub = zAw_size * Sz_size;
        for (i = 0; i < loop_ub; i++) {
          out->Tadd.data[0] = 0.0;
        }
      } else {
        out->Tadd.size[0] = 1;
        out->Tadd.size[1] = 1;
        out->Tadd.data[0] = zAw_data / Sz_data;
      }
      /*  Compute p-value of t-statistic */
      b_st.site = &t_emlrtRSI;
      nx = out->Tadd.size[0] * out->Tadd.size[1];
      r_size[0] = out->Tadd.size[0];
      r_size[1] = out->Tadd.size[1];
      for (loop_ub = 0; loop_ub < nx; loop_ub++) {
        r_data = muDoubleScalarAbs(out->Tadd.data[0]);
      }
      b_st.site = &t_emlrtRSI;
      tcdf(&b_st, (real_T *)&r_data, r_size, (n - p) - 1.0, (real_T *)&G,
           b_size);
      nx = b_size[0] * b_size[1];
      for (i = 0; i < nx; i++) {
        G = 1.0 - G;
      }
      out->pval.size[0] = b_size[0];
      out->pval.size[1] = b_size[1];
      for (i = 0; i < nx; i++) {
        out->pval.data[0] = 2.0 * G;
      }
    } else {
      out->Tadd.size[0] = 1;
      out->Tadd.size[1] = 1;
      out->Tadd.data[0] = rtNaN;
      out->pval.size[0] = 1;
      out->pval.size[1] = 1;
      out->pval.data[0] = rtNaN;
    }
  }
  /*  Store results in structure out. */
  /*  Added variable plot */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (addt_wrapper.c) */
