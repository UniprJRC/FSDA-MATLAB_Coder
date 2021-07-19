/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRenvmdr.c
 *
 * Code generation for function 'FSRenvmdr'
 *
 */

/* Include files */
#include "FSRenvmdr.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "abs.h"
#include "colon.h"
#include "eml_int_forloop_overflow_check.h"
#include "error.h"
#include "finv.h"
#include "norminv.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "tinv.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ulb_emlrtRSI = {
    132,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo vlb_emlrtRSI = {
    136,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo wlb_emlrtRSI = {
    172,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo xlb_emlrtRSI = {
    189,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo ylb_emlrtRSI = {
    193,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo amb_emlrtRSI = {
    196,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo bmb_emlrtRSI = {
    200,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo cmb_emlrtRSI = {
    203,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo dmb_emlrtRSI = {
    208,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo emb_emlrtRSI = {
    210,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo fmb_emlrtRSI = {
    212,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtBCInfo dgb_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    20,        /* lineNo */
    32,        /* colNo */
    "",        /* aName */
    "normpdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\normpdf.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtECInfo td_emlrtECI = {
    2,                                                   /* nDims */
    210,                                                 /* lineNo */
    8,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtECInfo ud_emlrtECI = {
    2,                                                   /* nDims */
    200,                                                 /* lineNo */
    12,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtECInfo vd_emlrtECI = {
    2,                                                   /* nDims */
    200,                                                 /* lineNo */
    17,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtBCInfo egb_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    25,        /* lineNo */
    9,         /* colNo */
    "",        /* aName */
    "normpdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\normpdf.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtECInfo wd_emlrtECI = {
    -1,                                                  /* nDims */
    200,                                                 /* lineNo */
    17,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtECInfo xd_emlrtECI = {
    -1,                                                  /* nDims */
    200,                                                 /* lineNo */
    12,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtECInfo yd_emlrtECI = {
    -1,                                                  /* nDims */
    210,                                                 /* lineNo */
    8,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo cgb_emlrtRTEI = {
    189,                                                 /* lineNo */
    1,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo dgb_emlrtRTEI = {
    196,                                                 /* lineNo */
    34,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo egb_emlrtRTEI = {
    196,                                                 /* lineNo */
    43,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo fgb_emlrtRTEI = {
    200,                                                 /* lineNo */
    17,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo ggb_emlrtRTEI = {
    200,                                                 /* lineNo */
    12,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo hgb_emlrtRTEI = {
    203,                                                 /* lineNo */
    29,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo igb_emlrtRTEI = {
    210,                                                 /* lineNo */
    8,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo jgb_emlrtRTEI = {
    17,        /* lineNo */
    5,         /* colNo */
    "normpdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\normpdf.m" /* pName
                                                                         */
};

static emlrtRTEInfo kgb_emlrtRTEI = {
    212,                                                 /* lineNo */
    19,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo lgb_emlrtRTEI = {
    212,                                                 /* lineNo */
    1,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo mgb_emlrtRTEI = {
    193,                                                 /* lineNo */
    1,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo ngb_emlrtRTEI = {
    196,                                                 /* lineNo */
    1,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo ogb_emlrtRTEI = {
    203,                                                 /* lineNo */
    1,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo pgb_emlrtRTEI = {
    208,                                                 /* lineNo */
    1,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo qgb_emlrtRTEI = {
    1,                                                   /* lineNo */
    21,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo rgb_emlrtRTEI = {
    189,                                                 /* lineNo */
    5,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo sgb_emlrtRTEI = {
    196,                                                 /* lineNo */
    12,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

/* Function Definitions */
void FSRenvmdr(const emlrtStack *sp, real_T n, real_T p, real_T varargin_4,
               emxArray_real_T *MDRenv)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_real_T *MinSca;
  emxArray_real_T *a;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *y;
  int32_T b_iv[2];
  int32_T z_size[2];
  int32_T b_MinSca;
  int32_T csz_idx_1;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int8_T input_sizes_idx_1;
  boolean_T b_p;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* FSRenvmdr computes the theoretical envelopes of Minimum Deletion Residual
   * outside subset during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     n : number of observations. Scalar. Number of observations on which */
  /*        the envelopes are based. */
  /*     p : number of explanatory variables (including the intercept if */
  /*     present). Scalar. Number of expl. variables on which */
  /*        the envelopes are based. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    init:       Search initialization. Scalar. */
  /*                Scalar which specifies the initial subset size to monitor */
  /*                minimum deletion residual, if init is not specified it will
   */
  /*                be set equal to */
  /*                    p+1, if the sample size is smaller than 40; */
  /*                    min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                Example - 'init',100 starts monitoring from step m=100 */
  /*                Data Types - double */
  /*  */
  /*   prob:    quantiles for which envelopes have */
  /*                to be computed. Vector. */
  /*                1 x k vector containing quantiles for which envelopes have
   */
  /*                to be computed. The default is to produce 1%, 50% and 99% */
  /*                envelopes. */
  /*                Example - 'prob',[0.01 0.99] */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*   MDRenv:      forward envelopes of mdr. Matrix. Matrix with n-m0+1 rows */
  /*                and length(prob)+1 columns. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob(1); */
  /*                3rd col = envelope for quantile prob(2) */
  /*                ... */
  /*                (k+1) col = envelope for quantile prob(k). */
  /*  */
  /*  */
  /*  See also: LXS.m, FSReda.m */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2006), Distribution theory and */
  /*  simulations for tests of outliers in regression, "Journal of */
  /*  Computational and Graphical Statistics", Vol. 15, pp. 460-476. */
  /*  Riani, M. and Atkinson, A.C. (2007), Fast calibrations of the forward */
  /*  search for testing multiple outliers in regression, "Advances in Data */
  /*  Analysis and Classification", Vol. 1, pp. 123-141. */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSRenvmdr with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent */
  /*     % envelopes based on 1000 observations and 5 explanatory variables */
  /*     MDRenv=FSRenvmdr(10000,5); */
  /* } */
  /* { */
  /*     % Example with plot of the envelopes. */
  /*     % Example of creation of 1%, 50% and 99% */
  /*     % envelopes based on 100 observations and 5 explanatory variables */
  /*     Menv=FSRenvmdr(100,5); */
  /*     plot(Menv(:,1),Menv(:,2:4)); */
  /* } */
  /* { */
  /*     %%Comparing the accuracy of the envelopes computed with order
   * statistics with the simulated ones. */
  /*     % Fix a seed */
  /*     state=1000; */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     %RandStream.setDefaultStream(mtstream); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     %defaultStream = RandStream.getDefaultStream(); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous four lines with */
  /*     % randn('state', 1000); */
  /*  */
  /*     n=200; */
  /*     p=3; */
  /*     X=randn(n,p); */
  /*  */
  /*     init=20; */
  /*     nsimul=1000; */
  /*     mdrStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         y=randn(n,1); */
  /*         [out]=LXS(y,X,'nsamp',1000','msg',0); */
  /*         mdr = FSRmdr(y,X,out.bs,'init',init); */
  /*         mdrStore(:,j)=mdr(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mdrStore */
  /*     mdrStore=sort(mdrStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mdr(:,1),mdrStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mdrT=FSRenvmdr(n,p+1,'init',init); */
  /*     line(mdrT(:,1),mdrT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  if (muDoubleScalarIsNaN(n)) {
    st.site = &ulb_emlrtRSI;
    s_error(&st);
  }
  if (muDoubleScalarIsNaN(p)) {
    st.site = &vlb_emlrtRSI;
    t_error(&st);
  }
  /*  Check that the initial subset size is not greater than n-1 */
  if (varargin_4 > n - 1.0) {
    st.site = &wlb_emlrtRSI;
    u_error(&st, varargin_4, n - 1.0);
  }
  emxInit_real_T(sp, &y, 2, &rgb_emlrtRTEI, true);
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  st.site = &xlb_emlrtRSI;
  b_st.site = &fd_emlrtRSI;
  if (muDoubleScalarIsNaN(varargin_4) || muDoubleScalarIsNaN(n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &hd_emlrtRTEI);
    y->data[0] = rtNaN;
  } else if (n - 1.0 < varargin_4) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((muDoubleScalarIsInf(varargin_4) ||
              muDoubleScalarIsInf(n - 1.0)) &&
             (varargin_4 == n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &hd_emlrtRTEI);
    y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(varargin_4) == varargin_4) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor((n - 1.0) - varargin_4);
    y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &hd_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      y->data[i] = varargin_4 + (real_T)i;
    }
  } else {
    c_st.site = &gd_emlrtRSI;
    eml_float_colon(&c_st, varargin_4, n - 1.0, y);
  }
  emxInit_real_T(&b_st, &m, 1, &cgb_emlrtRTEI, true);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(sp, m, i, &cgb_emlrtRTEI);
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    m->data[i] = y->data[i];
  }
  emxFree_real_T(&y);
  emxInit_real_T(sp, &mm, 2, &mgb_emlrtRTEI, true);
  emxInit_real_T(sp, &a, 2, &pgb_emlrtRTEI, true);
  /*  mm = fwd search index replicated lp times. */
  st.site = &ylb_emlrtRSI;
  e_repmat(&st, m, mm);
  /*  finv finds the inverse of the F distribution. */
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = 7;
  emxEnsureCapacity_real_T(sp, a, i, &dgb_emlrtRTEI);
  loop_ub = mm->size[0] * 7;
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = n - mm->data[i];
  }
  emxInit_real_T(sp, &MinSca, 2, &ogb_emlrtRTEI, true);
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = mm->size[0];
  MinSca->size[1] = 7;
  emxEnsureCapacity_real_T(sp, MinSca, i, &egb_emlrtRTEI);
  loop_ub = mm->size[0] * 7;
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] = mm->data[i] + 1.0;
  }
  emxInit_real_T(sp, &r, 2, &sgb_emlrtRTEI, true);
  emxInit_real_T(sp, &r1, 2, &us_emlrtRTEI, true);
  st.site = &amb_emlrtRSI;
  f_repmat(&st, m->size[0], r);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = a->size[0];
  r1->size[1] = 7;
  emxEnsureCapacity_real_T(sp, r1, i, &us_emlrtRTEI);
  loop_ub = a->size[0] * 7;
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = 2.0 * a->data[i];
  }
  emxInit_real_T(sp, &r2, 2, &us_emlrtRTEI, true);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = MinSca->size[0];
  r2->size[1] = 7;
  emxEnsureCapacity_real_T(sp, r2, i, &us_emlrtRTEI);
  loop_ub = MinSca->size[0] * 7;
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = 2.0 * MinSca->data[i];
  }
  emxInit_real_T(sp, &quant, 2, &ngb_emlrtRTEI, true);
  st.site = &amb_emlrtRSI;
  d_finv(&st, r, r1, r2, quant);
  /*  from the equivalence with Incomplete beta distribution. */
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])quant->size)[0];
  b_iv[1] = (*(int32_T(*)[2])quant->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &vd_emlrtECI, (emlrtCTX)sp);
  loop_ub = a->size[0] * 7;
  i = a->size[0] * a->size[1];
  a->size[1] = 7;
  emxEnsureCapacity_real_T(sp, a, i, &fgb_emlrtRTEI);
  emxFree_real_T(&r2);
  for (i = 0; i < loop_ub; i++) {
    a->data[i] *= quant->data[i];
  }
  emxFree_real_T(&quant);
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &ud_emlrtECI, (emlrtCTX)sp);
  st.site = &bmb_emlrtRSI;
  loop_ub = mm->size[0] * 7;
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = 7;
  emxEnsureCapacity_real_T(&st, a, i, &ggb_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    a->data[i] += mm->data[i] + 1.0;
  }
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (MinSca->size[0] <= a->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = a->size[0];
  }
  z_size[1] = 7;
  empty_non_axis_sizes = true;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != MinSca->size[loop_ub]) {
      b_p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (b_p) {
    b_p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != a->size[loop_ub]) {
        b_p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&f_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &od_emlrtRSI;
  g_st.site = &pd_emlrtRSI;
  if (MinSca->size[0] <= a->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = a->size[0];
  }
  z_size[1] = 7;
  empty_non_axis_sizes = true;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != MinSca->size[loop_ub]) {
      b_p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (b_p) {
    b_p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != a->size[loop_ub]) {
        b_p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (MinSca->size[0] <= a->size[0]) {
    b_MinSca = MinSca->size[0];
  } else {
    b_MinSca = a->size[0];
  }
  loop_ub = b_MinSca * 7;
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  i = r1->size[0] * r1->size[1];
  r1->size[0] = MinSca->size[0];
  r1->size[1] = 7;
  emxEnsureCapacity_real_T(sp, r1, i, &us_emlrtRTEI);
  loop_ub = MinSca->size[0] * 7;
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = 0.5 * (MinSca->data[i] / a->data[i] + 1.0);
  }
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = 7;
  emxEnsureCapacity_real_T(sp, a, i, &hgb_emlrtRTEI);
  loop_ub = mm->size[0] * 7;
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = mm->data[i] - p;
  }
  st.site = &cmb_emlrtRSI;
  c_tinv(&st, r1, a, r);
  st.site = &cmb_emlrtRSI;
  d_abs(&st, r, MinSca);
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  i = r->size[0] * r->size[1];
  r->size[0] = mm->size[0];
  r->size[1] = 7;
  emxEnsureCapacity_real_T(sp, r, i, &us_emlrtRTEI);
  loop_ub = mm->size[0] * 7;
  emxFree_real_T(&r1);
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = 0.5 * (mm->data[i] / n + 1.0);
  }
  st.site = &dmb_emlrtRSI;
  b_norminv(&st, r, a);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  loop_ub = mm->size[0] * 7;
  i = mm->size[0] * mm->size[1];
  mm->size[1] = 7;
  emxEnsureCapacity_real_T(sp, mm, i, &igb_emlrtRTEI);
  emxFree_real_T(&r);
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = 2.0 * (n / mm->data[i]);
  }
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &td_emlrtECI, (emlrtCTX)sp);
  loop_ub = mm->size[0] * 7;
  i = mm->size[0] * mm->size[1];
  mm->size[1] = 7;
  emxEnsureCapacity_real_T(sp, mm, i, &igb_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] *= a->data[i];
  }
  emxInit_real_T(sp, &r3, 2, &qgb_emlrtRTEI, true);
  st.site = &emb_emlrtRSI;
  i = r3->size[0] * r3->size[1];
  r3->size[0] = a->size[0];
  r3->size[1] = 7;
  emxEnsureCapacity_real_T(&st, r3, i, &jgb_emlrtRTEI);
  i = a->size[0] * 7;
  for (loop_ub = 0; loop_ub < i; loop_ub++) {
    i1 = a->size[0] * 7;
    if ((loop_ub + 1 < 1) || (loop_ub + 1 > i1)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, i1, &dgb_emlrtBCI, &st);
    }
    i1 = r3->size[0] * 7;
    if (((int32_T)(loop_ub + 1U) < 1) || ((int32_T)(loop_ub + 1U) > i1)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(loop_ub + 1U), 1, i1,
                                    &egb_emlrtBCI, &st);
    }
    r3->data[loop_ub] =
        muDoubleScalarExp(-0.5 * a->data[loop_ub] * a->data[loop_ub]) /
        2.5066282746310002;
  }
  emxFree_real_T(&a);
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])r3->size)[0];
  b_iv[1] = (*(int32_T(*)[2])r3->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &td_emlrtECI, (emlrtCTX)sp);
  st.site = &fmb_emlrtRSI;
  loop_ub = mm->size[0] * 7;
  i = mm->size[0] * mm->size[1];
  mm->size[1] = 7;
  emxEnsureCapacity_real_T(&st, mm, i, &kgb_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = 1.0 - mm->data[i] * r3->data[i];
  }
  emxFree_real_T(&r3);
  b_st.site = &fmb_emlrtRSI;
  e_sqrt(&b_st, mm);
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (MinSca->size[0] <= mm->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  z_size[1] = 7;
  empty_non_axis_sizes = true;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != MinSca->size[loop_ub]) {
      b_p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (b_p) {
    b_p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != mm->size[loop_ub]) {
        b_p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&f_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &od_emlrtRSI;
  g_st.site = &pd_emlrtRSI;
  if (MinSca->size[0] <= mm->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  z_size[1] = 7;
  empty_non_axis_sizes = true;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != MinSca->size[loop_ub]) {
      b_p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (b_p) {
    b_p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != mm->size[loop_ub]) {
        b_p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (MinSca->size[0] <= mm->size[0]) {
    b_MinSca = MinSca->size[0];
  } else {
    b_MinSca = mm->size[0];
  }
  loop_ub = b_MinSca * 7;
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  loop_ub = MinSca->size[0] * 7;
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[1] = 7;
  emxEnsureCapacity_real_T(&b_st, MinSca, i, &icb_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] /= mm->data[i];
  }
  emxFree_real_T(&mm);
  st.site = &fmb_emlrtRSI;
  b_st.site = &mbb_emlrtRSI;
  if (m->size[0] != 0) {
    b_MinSca = m->size[0];
  } else if (MinSca->size[0] != 0) {
    b_MinSca = MinSca->size[0];
  } else {
    b_MinSca = 0;
  }
  c_st.site = &gl_emlrtRSI;
  if ((m->size[0] != b_MinSca) && (m->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((MinSca->size[0] != b_MinSca) && (MinSca->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (b_MinSca == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (MinSca->size[0] != 0)) {
    csz_idx_1 = 7;
  } else {
    csz_idx_1 = 0;
  }
  i = MDRenv->size[0] * MDRenv->size[1];
  MDRenv->size[0] = b_MinSca;
  MDRenv->size[1] = input_sizes_idx_1 + csz_idx_1;
  emxEnsureCapacity_real_T(&b_st, MDRenv, i, &lgb_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < b_MinSca; i1++) {
      MDRenv->data[i1] = m->data[i1];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < csz_idx_1; i++) {
    for (i1 = 0; i1 < b_MinSca; i1++) {
      MDRenv->data[i1 + MDRenv->size[0] * (i + input_sizes_idx_1)] =
          MinSca->data[i1 + b_MinSca * i];
    }
  }
  emxFree_real_T(&MinSca);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void b_FSRenvmdr(const emlrtStack *sp, real_T n, real_T p, real_T varargin_4,
                 emxArray_real_T *MDRenv)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_real_T *MinSca;
  emxArray_real_T *a;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *y;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T loop_ub;
  boolean_T b_p;
  boolean_T c_p;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* FSRenvmdr computes the theoretical envelopes of Minimum Deletion Residual
   * outside subset during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     n : number of observations. Scalar. Number of observations on which */
  /*        the envelopes are based. */
  /*     p : number of explanatory variables (including the intercept if */
  /*     present). Scalar. Number of expl. variables on which */
  /*        the envelopes are based. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    init:       Search initialization. Scalar. */
  /*                Scalar which specifies the initial subset size to monitor */
  /*                minimum deletion residual, if init is not specified it will
   */
  /*                be set equal to */
  /*                    p+1, if the sample size is smaller than 40; */
  /*                    min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                Example - 'init',100 starts monitoring from step m=100 */
  /*                Data Types - double */
  /*  */
  /*   prob:    quantiles for which envelopes have */
  /*                to be computed. Vector. */
  /*                1 x k vector containing quantiles for which envelopes have
   */
  /*                to be computed. The default is to produce 1%, 50% and 99% */
  /*                envelopes. */
  /*                Example - 'prob',[0.01 0.99] */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*   MDRenv:      forward envelopes of mdr. Matrix. Matrix with n-m0+1 rows */
  /*                and length(prob)+1 columns. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob(1); */
  /*                3rd col = envelope for quantile prob(2) */
  /*                ... */
  /*                (k+1) col = envelope for quantile prob(k). */
  /*  */
  /*  */
  /*  See also: LXS.m, FSReda.m */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2006), Distribution theory and */
  /*  simulations for tests of outliers in regression, "Journal of */
  /*  Computational and Graphical Statistics", Vol. 15, pp. 460-476. */
  /*  Riani, M. and Atkinson, A.C. (2007), Fast calibrations of the forward */
  /*  search for testing multiple outliers in regression, "Advances in Data */
  /*  Analysis and Classification", Vol. 1, pp. 123-141. */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSRenvmdr with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent */
  /*     % envelopes based on 1000 observations and 5 explanatory variables */
  /*     MDRenv=FSRenvmdr(10000,5); */
  /* } */
  /* { */
  /*     % Example with plot of the envelopes. */
  /*     % Example of creation of 1%, 50% and 99% */
  /*     % envelopes based on 100 observations and 5 explanatory variables */
  /*     Menv=FSRenvmdr(100,5); */
  /*     plot(Menv(:,1),Menv(:,2:4)); */
  /* } */
  /* { */
  /*     %%Comparing the accuracy of the envelopes computed with order
   * statistics with the simulated ones. */
  /*     % Fix a seed */
  /*     state=1000; */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     %RandStream.setDefaultStream(mtstream); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     %defaultStream = RandStream.getDefaultStream(); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous four lines with */
  /*     % randn('state', 1000); */
  /*  */
  /*     n=200; */
  /*     p=3; */
  /*     X=randn(n,p); */
  /*  */
  /*     init=20; */
  /*     nsimul=1000; */
  /*     mdrStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         y=randn(n,1); */
  /*         [out]=LXS(y,X,'nsamp',1000','msg',0); */
  /*         mdr = FSRmdr(y,X,out.bs,'init',init); */
  /*         mdrStore(:,j)=mdr(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mdrStore */
  /*     mdrStore=sort(mdrStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mdr(:,1),mdrStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mdrT=FSRenvmdr(n,p+1,'init',init); */
  /*     line(mdrT(:,1),mdrT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  if (muDoubleScalarIsNaN(n)) {
    st.site = &ulb_emlrtRSI;
    s_error(&st);
  }
  if (muDoubleScalarIsNaN(p)) {
    st.site = &vlb_emlrtRSI;
    t_error(&st);
  }
  /*  Check that the initial subset size is not greater than n-1 */
  if (varargin_4 > n - 1.0) {
    st.site = &wlb_emlrtRSI;
    u_error(&st, varargin_4, n - 1.0);
  }
  emxInit_real_T(sp, &y, 2, &rgb_emlrtRTEI, true);
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  st.site = &xlb_emlrtRSI;
  b_st.site = &fd_emlrtRSI;
  if (muDoubleScalarIsNaN(varargin_4) || muDoubleScalarIsNaN(n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &hd_emlrtRTEI);
    y->data[0] = rtNaN;
  } else if (n - 1.0 < varargin_4) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((muDoubleScalarIsInf(varargin_4) ||
              muDoubleScalarIsInf(n - 1.0)) &&
             (varargin_4 == n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &hd_emlrtRTEI);
    y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(varargin_4) == varargin_4) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor((n - 1.0) - varargin_4);
    y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &hd_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      y->data[i] = varargin_4 + (real_T)i;
    }
  } else {
    c_st.site = &gd_emlrtRSI;
    eml_float_colon(&c_st, varargin_4, n - 1.0, y);
  }
  emxInit_real_T(&b_st, &m, 1, &cgb_emlrtRTEI, true);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(sp, m, i, &cgb_emlrtRTEI);
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    m->data[i] = y->data[i];
  }
  emxFree_real_T(&y);
  emxInit_real_T(sp, &mm, 1, &mgb_emlrtRTEI, true);
  emxInit_real_T(sp, &a, 1, &pgb_emlrtRTEI, true);
  /*  mm = fwd search index replicated lp times. */
  st.site = &ylb_emlrtRSI;
  g_repmat(&st, m, mm);
  /*  finv finds the inverse of the F distribution. */
  i = a->size[0];
  a->size[0] = mm->size[0];
  emxEnsureCapacity_real_T(sp, a, i, &dgb_emlrtRTEI);
  loop_ub = mm->size[0];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = n - mm->data[i];
  }
  emxInit_real_T(sp, &MinSca, 1, &ogb_emlrtRTEI, true);
  i = MinSca->size[0];
  MinSca->size[0] = mm->size[0];
  emxEnsureCapacity_real_T(sp, MinSca, i, &egb_emlrtRTEI);
  loop_ub = mm->size[0];
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] = mm->data[i] + 1.0;
  }
  emxInit_real_T(sp, &r, 1, &sgb_emlrtRTEI, true);
  emxInit_real_T(sp, &r1, 1, &us_emlrtRTEI, true);
  st.site = &amb_emlrtRSI;
  h_repmat(&st, m->size[0], r);
  i = r1->size[0];
  r1->size[0] = a->size[0];
  emxEnsureCapacity_real_T(sp, r1, i, &us_emlrtRTEI);
  loop_ub = a->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = 2.0 * a->data[i];
  }
  emxInit_real_T(sp, &r2, 1, &us_emlrtRTEI, true);
  i = r2->size[0];
  r2->size[0] = MinSca->size[0];
  emxEnsureCapacity_real_T(sp, r2, i, &us_emlrtRTEI);
  loop_ub = MinSca->size[0];
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = 2.0 * MinSca->data[i];
  }
  emxInit_real_T(sp, &quant, 1, &ngb_emlrtRTEI, true);
  st.site = &amb_emlrtRSI;
  e_finv(&st, r, r1, r2, quant);
  /*  from the equivalence with Incomplete beta distribution. */
  emxFree_real_T(&r2);
  emxFree_real_T(&r1);
  if (mm->size[0] != quant->size[0]) {
    emlrtSizeEqCheck1DR2012b(mm->size[0], quant->size[0], &wd_emlrtECI,
                             (emlrtCTX)sp);
  }
  loop_ub = a->size[0];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] *= quant->data[i];
  }
  emxFree_real_T(&quant);
  if (mm->size[0] != a->size[0]) {
    emlrtSizeEqCheck1DR2012b(mm->size[0], a->size[0], &xd_emlrtECI,
                             (emlrtCTX)sp);
  }
  st.site = &bmb_emlrtRSI;
  i = a->size[0];
  a->size[0] = mm->size[0];
  emxEnsureCapacity_real_T(&st, a, i, &ggb_emlrtRTEI);
  loop_ub = mm->size[0];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] += mm->data[i] + 1.0;
  }
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (MinSca->size[0] <= a->size[0]) {
    loop_ub = MinSca->size[0];
  } else {
    loop_ub = a->size[0];
  }
  b_p = true;
  c_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (k + 1 <= 1) {
      i = loop_ub;
      i1 = MinSca->size[0];
    } else {
      i = 1;
      i1 = 1;
    }
    if (i != i1) {
      c_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (c_p) {
    c_p = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 2)) {
      if (k + 1 <= 1) {
        i = loop_ub;
        i1 = a->size[0];
      } else {
        i = 1;
        i1 = 1;
      }
      if (i != i1) {
        c_p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
    if (!c_p) {
      b_p = false;
    }
  } else {
    b_p = false;
  }
  if (!b_p) {
    emlrtErrorWithMessageIdR2018a(&f_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &od_emlrtRSI;
  g_st.site = &pd_emlrtRSI;
  if (MinSca->size[0] <= a->size[0]) {
    loop_ub = MinSca->size[0];
  } else {
    loop_ub = a->size[0];
  }
  b_p = true;
  c_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (k + 1 <= 1) {
      i = loop_ub;
      i1 = MinSca->size[0];
    } else {
      i = 1;
      i1 = 1;
    }
    if (i != i1) {
      c_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (c_p) {
    c_p = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 2)) {
      if (k + 1 <= 1) {
        i = loop_ub;
        i1 = a->size[0];
      } else {
        i = 1;
        i1 = 1;
      }
      if (i != i1) {
        c_p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
    if (!c_p) {
      b_p = false;
    }
  } else {
    b_p = false;
  }
  if (!b_p) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  loop_ub = MinSca->size[0];
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] = 0.5 * (MinSca->data[i] / a->data[i] + 1.0);
  }
  i = a->size[0];
  a->size[0] = mm->size[0];
  emxEnsureCapacity_real_T(sp, a, i, &hgb_emlrtRTEI);
  loop_ub = mm->size[0];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = mm->data[i] - p;
  }
  st.site = &cmb_emlrtRSI;
  d_tinv(&st, MinSca, a, r);
  st.site = &cmb_emlrtRSI;
  b_abs(&st, r, MinSca);
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  i = r->size[0];
  r->size[0] = mm->size[0];
  emxEnsureCapacity_real_T(sp, r, i, &us_emlrtRTEI);
  loop_ub = mm->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = 0.5 * (mm->data[i] / n + 1.0);
  }
  st.site = &dmb_emlrtRSI;
  c_norminv(&st, r, a);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  loop_ub = mm->size[0];
  emxFree_real_T(&r);
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = 2.0 * (n / mm->data[i]);
  }
  if (mm->size[0] != a->size[0]) {
    emlrtSizeEqCheck1DR2012b(mm->size[0], a->size[0], &yd_emlrtECI,
                             (emlrtCTX)sp);
  }
  loop_ub = mm->size[0];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] *= a->data[i];
  }
  emxInit_real_T(sp, &r3, 1, &qgb_emlrtRTEI, true);
  st.site = &emb_emlrtRSI;
  i = r3->size[0];
  r3->size[0] = a->size[0];
  emxEnsureCapacity_real_T(&st, r3, i, &jgb_emlrtRTEI);
  i = a->size[0];
  for (k = 0; k < i; k++) {
    if (k + 1 > a->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, a->size[0], &dgb_emlrtBCI, &st);
    }
    if (k + 1 > r3->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, r3->size[0], &egb_emlrtBCI, &st);
    }
    r3->data[k] =
        muDoubleScalarExp(-0.5 * a->data[k] * a->data[k]) / 2.5066282746310002;
  }
  emxFree_real_T(&a);
  if (mm->size[0] != r3->size[0]) {
    emlrtSizeEqCheck1DR2012b(mm->size[0], r3->size[0], &yd_emlrtECI,
                             (emlrtCTX)sp);
  }
  st.site = &fmb_emlrtRSI;
  loop_ub = mm->size[0];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = 1.0 - mm->data[i] * r3->data[i];
  }
  emxFree_real_T(&r3);
  b_st.site = &fmb_emlrtRSI;
  b_sqrt(&b_st, mm);
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (MinSca->size[0] <= mm->size[0]) {
    loop_ub = MinSca->size[0];
  } else {
    loop_ub = mm->size[0];
  }
  b_p = true;
  c_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (k + 1 <= 1) {
      i = loop_ub;
      i1 = MinSca->size[0];
    } else {
      i = 1;
      i1 = 1;
    }
    if (i != i1) {
      c_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (c_p) {
    c_p = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 2)) {
      if (k + 1 <= 1) {
        i = loop_ub;
        i1 = mm->size[0];
      } else {
        i = 1;
        i1 = 1;
      }
      if (i != i1) {
        c_p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
    if (!c_p) {
      b_p = false;
    }
  } else {
    b_p = false;
  }
  if (!b_p) {
    emlrtErrorWithMessageIdR2018a(&f_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &od_emlrtRSI;
  g_st.site = &pd_emlrtRSI;
  if (MinSca->size[0] <= mm->size[0]) {
    loop_ub = MinSca->size[0];
  } else {
    loop_ub = mm->size[0];
  }
  b_p = true;
  c_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (k + 1 <= 1) {
      i = loop_ub;
      i1 = MinSca->size[0];
    } else {
      i = 1;
      i1 = 1;
    }
    if (i != i1) {
      c_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (c_p) {
    c_p = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 2)) {
      if (k + 1 <= 1) {
        i = loop_ub;
        i1 = mm->size[0];
      } else {
        i = 1;
        i1 = 1;
      }
      if (i != i1) {
        c_p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
    if (!c_p) {
      b_p = false;
    }
  } else {
    b_p = false;
  }
  if (!b_p) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  loop_ub = MinSca->size[0];
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] /= mm->data[i];
  }
  emxFree_real_T(&mm);
  st.site = &fmb_emlrtRSI;
  b_st.site = &fl_emlrtRSI;
  c_st.site = &gl_emlrtRSI;
  if (MinSca->size[0] != m->size[0]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  i = MDRenv->size[0] * MDRenv->size[1];
  MDRenv->size[0] = m->size[0];
  MDRenv->size[1] = 2;
  emxEnsureCapacity_real_T(&b_st, MDRenv, i, &lgb_emlrtRTEI);
  loop_ub = m->size[0];
  for (i = 0; i < loop_ub; i++) {
    MDRenv->data[i] = m->data[i];
  }
  emxFree_real_T(&m);
  loop_ub = MinSca->size[0];
  for (i = 0; i < loop_ub; i++) {
    MDRenv->data[i + MDRenv->size[0]] = MinSca->data[i];
  }
  emxFree_real_T(&MinSca);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void c_FSRenvmdr(const emlrtStack *sp, real_T n, real_T p, real_T varargin_4,
                 emxArray_real_T *MDRenv)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_real_T *MinSca;
  emxArray_real_T *a;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *y;
  int32_T b_iv[2];
  int32_T z_size[2];
  int32_T b_MinSca;
  int32_T csz_idx_1;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int8_T input_sizes_idx_1;
  boolean_T b_p;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* FSRenvmdr computes the theoretical envelopes of Minimum Deletion Residual
   * outside subset during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     n : number of observations. Scalar. Number of observations on which */
  /*        the envelopes are based. */
  /*     p : number of explanatory variables (including the intercept if */
  /*     present). Scalar. Number of expl. variables on which */
  /*        the envelopes are based. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    init:       Search initialization. Scalar. */
  /*                Scalar which specifies the initial subset size to monitor */
  /*                minimum deletion residual, if init is not specified it will
   */
  /*                be set equal to */
  /*                    p+1, if the sample size is smaller than 40; */
  /*                    min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                Example - 'init',100 starts monitoring from step m=100 */
  /*                Data Types - double */
  /*  */
  /*   prob:    quantiles for which envelopes have */
  /*                to be computed. Vector. */
  /*                1 x k vector containing quantiles for which envelopes have
   */
  /*                to be computed. The default is to produce 1%, 50% and 99% */
  /*                envelopes. */
  /*                Example - 'prob',[0.01 0.99] */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*   MDRenv:      forward envelopes of mdr. Matrix. Matrix with n-m0+1 rows */
  /*                and length(prob)+1 columns. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob(1); */
  /*                3rd col = envelope for quantile prob(2) */
  /*                ... */
  /*                (k+1) col = envelope for quantile prob(k). */
  /*  */
  /*  */
  /*  See also: LXS.m, FSReda.m */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2006), Distribution theory and */
  /*  simulations for tests of outliers in regression, "Journal of */
  /*  Computational and Graphical Statistics", Vol. 15, pp. 460-476. */
  /*  Riani, M. and Atkinson, A.C. (2007), Fast calibrations of the forward */
  /*  search for testing multiple outliers in regression, "Advances in Data */
  /*  Analysis and Classification", Vol. 1, pp. 123-141. */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSRenvmdr with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent */
  /*     % envelopes based on 1000 observations and 5 explanatory variables */
  /*     MDRenv=FSRenvmdr(10000,5); */
  /* } */
  /* { */
  /*     % Example with plot of the envelopes. */
  /*     % Example of creation of 1%, 50% and 99% */
  /*     % envelopes based on 100 observations and 5 explanatory variables */
  /*     Menv=FSRenvmdr(100,5); */
  /*     plot(Menv(:,1),Menv(:,2:4)); */
  /* } */
  /* { */
  /*     %%Comparing the accuracy of the envelopes computed with order
   * statistics with the simulated ones. */
  /*     % Fix a seed */
  /*     state=1000; */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     %RandStream.setDefaultStream(mtstream); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     %defaultStream = RandStream.getDefaultStream(); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous four lines with */
  /*     % randn('state', 1000); */
  /*  */
  /*     n=200; */
  /*     p=3; */
  /*     X=randn(n,p); */
  /*  */
  /*     init=20; */
  /*     nsimul=1000; */
  /*     mdrStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         y=randn(n,1); */
  /*         [out]=LXS(y,X,'nsamp',1000','msg',0); */
  /*         mdr = FSRmdr(y,X,out.bs,'init',init); */
  /*         mdrStore(:,j)=mdr(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mdrStore */
  /*     mdrStore=sort(mdrStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mdr(:,1),mdrStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mdrT=FSRenvmdr(n,p+1,'init',init); */
  /*     line(mdrT(:,1),mdrT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  if (muDoubleScalarIsNaN(n)) {
    st.site = &ulb_emlrtRSI;
    s_error(&st);
  }
  if (muDoubleScalarIsNaN(p)) {
    st.site = &vlb_emlrtRSI;
    t_error(&st);
  }
  /*  Check that the initial subset size is not greater than n-1 */
  if (varargin_4 > n - 1.0) {
    st.site = &wlb_emlrtRSI;
    u_error(&st, varargin_4, n - 1.0);
  }
  emxInit_real_T(sp, &y, 2, &rgb_emlrtRTEI, true);
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  st.site = &xlb_emlrtRSI;
  b_st.site = &fd_emlrtRSI;
  if (muDoubleScalarIsNaN(varargin_4) || muDoubleScalarIsNaN(n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &hd_emlrtRTEI);
    y->data[0] = rtNaN;
  } else if (n - 1.0 < varargin_4) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((muDoubleScalarIsInf(varargin_4) ||
              muDoubleScalarIsInf(n - 1.0)) &&
             (varargin_4 == n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &hd_emlrtRTEI);
    y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(varargin_4) == varargin_4) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor((n - 1.0) - varargin_4);
    y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &hd_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      y->data[i] = varargin_4 + (real_T)i;
    }
  } else {
    c_st.site = &gd_emlrtRSI;
    eml_float_colon(&c_st, varargin_4, n - 1.0, y);
  }
  emxInit_real_T(&b_st, &m, 1, &cgb_emlrtRTEI, true);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(sp, m, i, &cgb_emlrtRTEI);
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    m->data[i] = y->data[i];
  }
  emxFree_real_T(&y);
  emxInit_real_T(sp, &mm, 2, &mgb_emlrtRTEI, true);
  emxInit_real_T(sp, &a, 2, &pgb_emlrtRTEI, true);
  /*  mm = fwd search index replicated lp times. */
  st.site = &ylb_emlrtRSI;
  i_repmat(&st, m, mm);
  /*  finv finds the inverse of the F distribution. */
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = 4;
  emxEnsureCapacity_real_T(sp, a, i, &dgb_emlrtRTEI);
  loop_ub = mm->size[0] * 4;
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = n - mm->data[i];
  }
  emxInit_real_T(sp, &MinSca, 2, &ogb_emlrtRTEI, true);
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = mm->size[0];
  MinSca->size[1] = 4;
  emxEnsureCapacity_real_T(sp, MinSca, i, &egb_emlrtRTEI);
  loop_ub = mm->size[0] * 4;
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] = mm->data[i] + 1.0;
  }
  emxInit_real_T(sp, &r, 2, &sgb_emlrtRTEI, true);
  emxInit_real_T(sp, &r1, 2, &us_emlrtRTEI, true);
  st.site = &amb_emlrtRSI;
  j_repmat(&st, m->size[0], r);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = a->size[0];
  r1->size[1] = 4;
  emxEnsureCapacity_real_T(sp, r1, i, &us_emlrtRTEI);
  loop_ub = a->size[0] * 4;
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = 2.0 * a->data[i];
  }
  emxInit_real_T(sp, &r2, 2, &us_emlrtRTEI, true);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = MinSca->size[0];
  r2->size[1] = 4;
  emxEnsureCapacity_real_T(sp, r2, i, &us_emlrtRTEI);
  loop_ub = MinSca->size[0] * 4;
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = 2.0 * MinSca->data[i];
  }
  emxInit_real_T(sp, &quant, 2, &ngb_emlrtRTEI, true);
  st.site = &amb_emlrtRSI;
  f_finv(&st, r, r1, r2, quant);
  /*  from the equivalence with Incomplete beta distribution. */
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])quant->size)[0];
  b_iv[1] = (*(int32_T(*)[2])quant->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &vd_emlrtECI, (emlrtCTX)sp);
  loop_ub = a->size[0] * 4;
  i = a->size[0] * a->size[1];
  a->size[1] = 4;
  emxEnsureCapacity_real_T(sp, a, i, &fgb_emlrtRTEI);
  emxFree_real_T(&r2);
  for (i = 0; i < loop_ub; i++) {
    a->data[i] *= quant->data[i];
  }
  emxFree_real_T(&quant);
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &ud_emlrtECI, (emlrtCTX)sp);
  st.site = &bmb_emlrtRSI;
  loop_ub = mm->size[0] * 4;
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = 4;
  emxEnsureCapacity_real_T(&st, a, i, &ggb_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    a->data[i] += mm->data[i] + 1.0;
  }
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (MinSca->size[0] <= a->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = a->size[0];
  }
  z_size[1] = 4;
  empty_non_axis_sizes = true;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != MinSca->size[loop_ub]) {
      b_p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (b_p) {
    b_p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != a->size[loop_ub]) {
        b_p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&f_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &od_emlrtRSI;
  g_st.site = &pd_emlrtRSI;
  if (MinSca->size[0] <= a->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = a->size[0];
  }
  z_size[1] = 4;
  empty_non_axis_sizes = true;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != MinSca->size[loop_ub]) {
      b_p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (b_p) {
    b_p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != a->size[loop_ub]) {
        b_p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (MinSca->size[0] <= a->size[0]) {
    b_MinSca = MinSca->size[0];
  } else {
    b_MinSca = a->size[0];
  }
  loop_ub = b_MinSca << 2;
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  i = r1->size[0] * r1->size[1];
  r1->size[0] = MinSca->size[0];
  r1->size[1] = 4;
  emxEnsureCapacity_real_T(sp, r1, i, &us_emlrtRTEI);
  loop_ub = MinSca->size[0] * 4;
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = 0.5 * (MinSca->data[i] / a->data[i] + 1.0);
  }
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = 4;
  emxEnsureCapacity_real_T(sp, a, i, &hgb_emlrtRTEI);
  loop_ub = mm->size[0] * 4;
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = mm->data[i] - p;
  }
  st.site = &cmb_emlrtRSI;
  e_tinv(&st, r1, a, r);
  st.site = &cmb_emlrtRSI;
  e_abs(&st, r, MinSca);
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  i = r->size[0] * r->size[1];
  r->size[0] = mm->size[0];
  r->size[1] = 4;
  emxEnsureCapacity_real_T(sp, r, i, &us_emlrtRTEI);
  loop_ub = mm->size[0] * 4;
  emxFree_real_T(&r1);
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = 0.5 * (mm->data[i] / n + 1.0);
  }
  st.site = &dmb_emlrtRSI;
  d_norminv(&st, r, a);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  loop_ub = mm->size[0] * 4;
  i = mm->size[0] * mm->size[1];
  mm->size[1] = 4;
  emxEnsureCapacity_real_T(sp, mm, i, &igb_emlrtRTEI);
  emxFree_real_T(&r);
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = 2.0 * (n / mm->data[i]);
  }
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &td_emlrtECI, (emlrtCTX)sp);
  loop_ub = mm->size[0] * 4;
  i = mm->size[0] * mm->size[1];
  mm->size[1] = 4;
  emxEnsureCapacity_real_T(sp, mm, i, &igb_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] *= a->data[i];
  }
  emxInit_real_T(sp, &r3, 2, &qgb_emlrtRTEI, true);
  st.site = &emb_emlrtRSI;
  i = r3->size[0] * r3->size[1];
  r3->size[0] = a->size[0];
  r3->size[1] = 4;
  emxEnsureCapacity_real_T(&st, r3, i, &jgb_emlrtRTEI);
  i = a->size[0] << 2;
  for (loop_ub = 0; loop_ub < i; loop_ub++) {
    i1 = a->size[0] << 2;
    if ((loop_ub + 1 < 1) || (loop_ub + 1 > i1)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, i1, &dgb_emlrtBCI, &st);
    }
    i1 = r3->size[0] << 2;
    if (((int32_T)(loop_ub + 1U) < 1) || ((int32_T)(loop_ub + 1U) > i1)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(loop_ub + 1U), 1, i1,
                                    &egb_emlrtBCI, &st);
    }
    r3->data[loop_ub] =
        muDoubleScalarExp(-0.5 * a->data[loop_ub] * a->data[loop_ub]) /
        2.5066282746310002;
  }
  emxFree_real_T(&a);
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])r3->size)[0];
  b_iv[1] = (*(int32_T(*)[2])r3->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &td_emlrtECI, (emlrtCTX)sp);
  st.site = &fmb_emlrtRSI;
  loop_ub = mm->size[0] * 4;
  i = mm->size[0] * mm->size[1];
  mm->size[1] = 4;
  emxEnsureCapacity_real_T(&st, mm, i, &kgb_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = 1.0 - mm->data[i] * r3->data[i];
  }
  emxFree_real_T(&r3);
  b_st.site = &fmb_emlrtRSI;
  f_sqrt(&b_st, mm);
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (MinSca->size[0] <= mm->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  z_size[1] = 4;
  empty_non_axis_sizes = true;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != MinSca->size[loop_ub]) {
      b_p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (b_p) {
    b_p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != mm->size[loop_ub]) {
        b_p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&f_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &od_emlrtRSI;
  g_st.site = &pd_emlrtRSI;
  if (MinSca->size[0] <= mm->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  z_size[1] = 4;
  empty_non_axis_sizes = true;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != MinSca->size[loop_ub]) {
      b_p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (b_p) {
    b_p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != mm->size[loop_ub]) {
        b_p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (MinSca->size[0] <= mm->size[0]) {
    b_MinSca = MinSca->size[0];
  } else {
    b_MinSca = mm->size[0];
  }
  loop_ub = b_MinSca << 2;
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  loop_ub = MinSca->size[0] * 4;
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[1] = 4;
  emxEnsureCapacity_real_T(&b_st, MinSca, i, &icb_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] /= mm->data[i];
  }
  emxFree_real_T(&mm);
  st.site = &fmb_emlrtRSI;
  b_st.site = &mbb_emlrtRSI;
  if (m->size[0] != 0) {
    b_MinSca = m->size[0];
  } else if (MinSca->size[0] != 0) {
    b_MinSca = MinSca->size[0];
  } else {
    b_MinSca = 0;
  }
  c_st.site = &gl_emlrtRSI;
  if ((m->size[0] != b_MinSca) && (m->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((MinSca->size[0] != b_MinSca) && (MinSca->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (b_MinSca == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (MinSca->size[0] != 0)) {
    csz_idx_1 = 4;
  } else {
    csz_idx_1 = 0;
  }
  i = MDRenv->size[0] * MDRenv->size[1];
  MDRenv->size[0] = b_MinSca;
  MDRenv->size[1] = input_sizes_idx_1 + csz_idx_1;
  emxEnsureCapacity_real_T(&b_st, MDRenv, i, &lgb_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < b_MinSca; i1++) {
      MDRenv->data[i1] = m->data[i1];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < csz_idx_1; i++) {
    for (i1 = 0; i1 < b_MinSca; i1++) {
      MDRenv->data[i1 + MDRenv->size[0] * (i + input_sizes_idx_1)] =
          MinSca->data[i1 + b_MinSca * i];
    }
  }
  emxFree_real_T(&MinSca);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void d_FSRenvmdr(const emlrtStack *sp, real_T n, real_T p, real_T varargin_4,
                 emxArray_real_T *MDRenv)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_real_T *MinSca;
  emxArray_real_T *a;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *y;
  int32_T b_iv[2];
  int32_T z_size[2];
  int32_T b_MinSca;
  int32_T csz_idx_1;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int8_T input_sizes_idx_1;
  boolean_T b_p;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* FSRenvmdr computes the theoretical envelopes of Minimum Deletion Residual
   * outside subset during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     n : number of observations. Scalar. Number of observations on which */
  /*        the envelopes are based. */
  /*     p : number of explanatory variables (including the intercept if */
  /*     present). Scalar. Number of expl. variables on which */
  /*        the envelopes are based. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    init:       Search initialization. Scalar. */
  /*                Scalar which specifies the initial subset size to monitor */
  /*                minimum deletion residual, if init is not specified it will
   */
  /*                be set equal to */
  /*                    p+1, if the sample size is smaller than 40; */
  /*                    min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                Example - 'init',100 starts monitoring from step m=100 */
  /*                Data Types - double */
  /*  */
  /*   prob:    quantiles for which envelopes have */
  /*                to be computed. Vector. */
  /*                1 x k vector containing quantiles for which envelopes have
   */
  /*                to be computed. The default is to produce 1%, 50% and 99% */
  /*                envelopes. */
  /*                Example - 'prob',[0.01 0.99] */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*   MDRenv:      forward envelopes of mdr. Matrix. Matrix with n-m0+1 rows */
  /*                and length(prob)+1 columns. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob(1); */
  /*                3rd col = envelope for quantile prob(2) */
  /*                ... */
  /*                (k+1) col = envelope for quantile prob(k). */
  /*  */
  /*  */
  /*  See also: LXS.m, FSReda.m */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2006), Distribution theory and */
  /*  simulations for tests of outliers in regression, "Journal of */
  /*  Computational and Graphical Statistics", Vol. 15, pp. 460-476. */
  /*  Riani, M. and Atkinson, A.C. (2007), Fast calibrations of the forward */
  /*  search for testing multiple outliers in regression, "Advances in Data */
  /*  Analysis and Classification", Vol. 1, pp. 123-141. */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSRenvmdr with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent */
  /*     % envelopes based on 1000 observations and 5 explanatory variables */
  /*     MDRenv=FSRenvmdr(10000,5); */
  /* } */
  /* { */
  /*     % Example with plot of the envelopes. */
  /*     % Example of creation of 1%, 50% and 99% */
  /*     % envelopes based on 100 observations and 5 explanatory variables */
  /*     Menv=FSRenvmdr(100,5); */
  /*     plot(Menv(:,1),Menv(:,2:4)); */
  /* } */
  /* { */
  /*     %%Comparing the accuracy of the envelopes computed with order
   * statistics with the simulated ones. */
  /*     % Fix a seed */
  /*     state=1000; */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     %RandStream.setDefaultStream(mtstream); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     %defaultStream = RandStream.getDefaultStream(); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous four lines with */
  /*     % randn('state', 1000); */
  /*  */
  /*     n=200; */
  /*     p=3; */
  /*     X=randn(n,p); */
  /*  */
  /*     init=20; */
  /*     nsimul=1000; */
  /*     mdrStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         y=randn(n,1); */
  /*         [out]=LXS(y,X,'nsamp',1000','msg',0); */
  /*         mdr = FSRmdr(y,X,out.bs,'init',init); */
  /*         mdrStore(:,j)=mdr(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mdrStore */
  /*     mdrStore=sort(mdrStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mdr(:,1),mdrStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mdrT=FSRenvmdr(n,p+1,'init',init); */
  /*     line(mdrT(:,1),mdrT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  if (muDoubleScalarIsNaN(n)) {
    st.site = &ulb_emlrtRSI;
    s_error(&st);
  }
  if (muDoubleScalarIsNaN(p)) {
    st.site = &vlb_emlrtRSI;
    t_error(&st);
  }
  /*  Check that the initial subset size is not greater than n-1 */
  if (varargin_4 > n - 1.0) {
    st.site = &wlb_emlrtRSI;
    u_error(&st, varargin_4, n - 1.0);
  }
  emxInit_real_T(sp, &y, 2, &rgb_emlrtRTEI, true);
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  st.site = &xlb_emlrtRSI;
  b_st.site = &fd_emlrtRSI;
  if (muDoubleScalarIsNaN(varargin_4) || muDoubleScalarIsNaN(n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &hd_emlrtRTEI);
    y->data[0] = rtNaN;
  } else if (n - 1.0 < varargin_4) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((muDoubleScalarIsInf(varargin_4) ||
              muDoubleScalarIsInf(n - 1.0)) &&
             (varargin_4 == n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &hd_emlrtRTEI);
    y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(varargin_4) == varargin_4) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor((n - 1.0) - varargin_4);
    y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &hd_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      y->data[i] = varargin_4 + (real_T)i;
    }
  } else {
    c_st.site = &gd_emlrtRSI;
    eml_float_colon(&c_st, varargin_4, n - 1.0, y);
  }
  emxInit_real_T(&b_st, &m, 1, &cgb_emlrtRTEI, true);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(sp, m, i, &cgb_emlrtRTEI);
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    m->data[i] = y->data[i];
  }
  emxFree_real_T(&y);
  emxInit_real_T(sp, &mm, 2, &mgb_emlrtRTEI, true);
  emxInit_real_T(sp, &a, 2, &pgb_emlrtRTEI, true);
  /*  mm = fwd search index replicated lp times. */
  st.site = &ylb_emlrtRSI;
  i_repmat(&st, m, mm);
  /*  finv finds the inverse of the F distribution. */
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = 4;
  emxEnsureCapacity_real_T(sp, a, i, &dgb_emlrtRTEI);
  loop_ub = mm->size[0] * 4;
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = n - mm->data[i];
  }
  emxInit_real_T(sp, &MinSca, 2, &ogb_emlrtRTEI, true);
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = mm->size[0];
  MinSca->size[1] = 4;
  emxEnsureCapacity_real_T(sp, MinSca, i, &egb_emlrtRTEI);
  loop_ub = mm->size[0] * 4;
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] = mm->data[i] + 1.0;
  }
  emxInit_real_T(sp, &r, 2, &sgb_emlrtRTEI, true);
  emxInit_real_T(sp, &r1, 2, &us_emlrtRTEI, true);
  st.site = &amb_emlrtRSI;
  k_repmat(&st, m->size[0], r);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = a->size[0];
  r1->size[1] = 4;
  emxEnsureCapacity_real_T(sp, r1, i, &us_emlrtRTEI);
  loop_ub = a->size[0] * 4;
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = 2.0 * a->data[i];
  }
  emxInit_real_T(sp, &r2, 2, &us_emlrtRTEI, true);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = MinSca->size[0];
  r2->size[1] = 4;
  emxEnsureCapacity_real_T(sp, r2, i, &us_emlrtRTEI);
  loop_ub = MinSca->size[0] * 4;
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = 2.0 * MinSca->data[i];
  }
  emxInit_real_T(sp, &quant, 2, &ngb_emlrtRTEI, true);
  st.site = &amb_emlrtRSI;
  f_finv(&st, r, r1, r2, quant);
  /*  from the equivalence with Incomplete beta distribution. */
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])quant->size)[0];
  b_iv[1] = (*(int32_T(*)[2])quant->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &vd_emlrtECI, (emlrtCTX)sp);
  loop_ub = a->size[0] * 4;
  i = a->size[0] * a->size[1];
  a->size[1] = 4;
  emxEnsureCapacity_real_T(sp, a, i, &fgb_emlrtRTEI);
  emxFree_real_T(&r2);
  for (i = 0; i < loop_ub; i++) {
    a->data[i] *= quant->data[i];
  }
  emxFree_real_T(&quant);
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &ud_emlrtECI, (emlrtCTX)sp);
  st.site = &bmb_emlrtRSI;
  loop_ub = mm->size[0] * 4;
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = 4;
  emxEnsureCapacity_real_T(&st, a, i, &ggb_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    a->data[i] += mm->data[i] + 1.0;
  }
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (MinSca->size[0] <= a->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = a->size[0];
  }
  z_size[1] = 4;
  empty_non_axis_sizes = true;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != MinSca->size[loop_ub]) {
      b_p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (b_p) {
    b_p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != a->size[loop_ub]) {
        b_p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&f_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &od_emlrtRSI;
  g_st.site = &pd_emlrtRSI;
  if (MinSca->size[0] <= a->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = a->size[0];
  }
  z_size[1] = 4;
  empty_non_axis_sizes = true;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != MinSca->size[loop_ub]) {
      b_p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (b_p) {
    b_p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != a->size[loop_ub]) {
        b_p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (MinSca->size[0] <= a->size[0]) {
    b_MinSca = MinSca->size[0];
  } else {
    b_MinSca = a->size[0];
  }
  loop_ub = b_MinSca << 2;
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  i = r1->size[0] * r1->size[1];
  r1->size[0] = MinSca->size[0];
  r1->size[1] = 4;
  emxEnsureCapacity_real_T(sp, r1, i, &us_emlrtRTEI);
  loop_ub = MinSca->size[0] * 4;
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = 0.5 * (MinSca->data[i] / a->data[i] + 1.0);
  }
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = 4;
  emxEnsureCapacity_real_T(sp, a, i, &hgb_emlrtRTEI);
  loop_ub = mm->size[0] * 4;
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = mm->data[i] - p;
  }
  st.site = &cmb_emlrtRSI;
  e_tinv(&st, r1, a, r);
  st.site = &cmb_emlrtRSI;
  e_abs(&st, r, MinSca);
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  i = r->size[0] * r->size[1];
  r->size[0] = mm->size[0];
  r->size[1] = 4;
  emxEnsureCapacity_real_T(sp, r, i, &us_emlrtRTEI);
  loop_ub = mm->size[0] * 4;
  emxFree_real_T(&r1);
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = 0.5 * (mm->data[i] / n + 1.0);
  }
  st.site = &dmb_emlrtRSI;
  d_norminv(&st, r, a);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  loop_ub = mm->size[0] * 4;
  i = mm->size[0] * mm->size[1];
  mm->size[1] = 4;
  emxEnsureCapacity_real_T(sp, mm, i, &igb_emlrtRTEI);
  emxFree_real_T(&r);
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = 2.0 * (n / mm->data[i]);
  }
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &td_emlrtECI, (emlrtCTX)sp);
  loop_ub = mm->size[0] * 4;
  i = mm->size[0] * mm->size[1];
  mm->size[1] = 4;
  emxEnsureCapacity_real_T(sp, mm, i, &igb_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] *= a->data[i];
  }
  emxInit_real_T(sp, &r3, 2, &qgb_emlrtRTEI, true);
  st.site = &emb_emlrtRSI;
  i = r3->size[0] * r3->size[1];
  r3->size[0] = a->size[0];
  r3->size[1] = 4;
  emxEnsureCapacity_real_T(&st, r3, i, &jgb_emlrtRTEI);
  i = a->size[0] << 2;
  for (loop_ub = 0; loop_ub < i; loop_ub++) {
    i1 = a->size[0] << 2;
    if ((loop_ub + 1 < 1) || (loop_ub + 1 > i1)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, i1, &dgb_emlrtBCI, &st);
    }
    i1 = r3->size[0] << 2;
    if (((int32_T)(loop_ub + 1U) < 1) || ((int32_T)(loop_ub + 1U) > i1)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(loop_ub + 1U), 1, i1,
                                    &egb_emlrtBCI, &st);
    }
    r3->data[loop_ub] =
        muDoubleScalarExp(-0.5 * a->data[loop_ub] * a->data[loop_ub]) /
        2.5066282746310002;
  }
  emxFree_real_T(&a);
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])r3->size)[0];
  b_iv[1] = (*(int32_T(*)[2])r3->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &td_emlrtECI, (emlrtCTX)sp);
  st.site = &fmb_emlrtRSI;
  loop_ub = mm->size[0] * 4;
  i = mm->size[0] * mm->size[1];
  mm->size[1] = 4;
  emxEnsureCapacity_real_T(&st, mm, i, &kgb_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = 1.0 - mm->data[i] * r3->data[i];
  }
  emxFree_real_T(&r3);
  b_st.site = &fmb_emlrtRSI;
  f_sqrt(&b_st, mm);
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (MinSca->size[0] <= mm->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  z_size[1] = 4;
  empty_non_axis_sizes = true;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != MinSca->size[loop_ub]) {
      b_p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (b_p) {
    b_p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != mm->size[loop_ub]) {
        b_p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&f_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &od_emlrtRSI;
  g_st.site = &pd_emlrtRSI;
  if (MinSca->size[0] <= mm->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  z_size[1] = 4;
  empty_non_axis_sizes = true;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != MinSca->size[loop_ub]) {
      b_p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (b_p) {
    b_p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != mm->size[loop_ub]) {
        b_p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (MinSca->size[0] <= mm->size[0]) {
    b_MinSca = MinSca->size[0];
  } else {
    b_MinSca = mm->size[0];
  }
  loop_ub = b_MinSca << 2;
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  loop_ub = MinSca->size[0] * 4;
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[1] = 4;
  emxEnsureCapacity_real_T(&b_st, MinSca, i, &icb_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] /= mm->data[i];
  }
  emxFree_real_T(&mm);
  st.site = &fmb_emlrtRSI;
  b_st.site = &mbb_emlrtRSI;
  if (m->size[0] != 0) {
    b_MinSca = m->size[0];
  } else if (MinSca->size[0] != 0) {
    b_MinSca = MinSca->size[0];
  } else {
    b_MinSca = 0;
  }
  c_st.site = &gl_emlrtRSI;
  if ((m->size[0] != b_MinSca) && (m->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((MinSca->size[0] != b_MinSca) && (MinSca->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (b_MinSca == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (MinSca->size[0] != 0)) {
    csz_idx_1 = 4;
  } else {
    csz_idx_1 = 0;
  }
  i = MDRenv->size[0] * MDRenv->size[1];
  MDRenv->size[0] = b_MinSca;
  MDRenv->size[1] = input_sizes_idx_1 + csz_idx_1;
  emxEnsureCapacity_real_T(&b_st, MDRenv, i, &lgb_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < b_MinSca; i1++) {
      MDRenv->data[i1] = m->data[i1];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < csz_idx_1; i++) {
    for (i1 = 0; i1 < b_MinSca; i1++) {
      MDRenv->data[i1 + MDRenv->size[0] * (i + input_sizes_idx_1)] =
          MinSca->data[i1 + b_MinSca * i];
    }
  }
  emxFree_real_T(&MinSca);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (FSRenvmdr.c) */
