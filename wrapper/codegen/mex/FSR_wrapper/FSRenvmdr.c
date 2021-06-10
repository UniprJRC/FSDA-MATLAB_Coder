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
#include "normpdf.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "tinv.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo flb_emlrtRSI = {
    210,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo glb_emlrtRSI = {
    208,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo hlb_emlrtRSI = {
    206,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo ilb_emlrtRSI = {
    201,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo jlb_emlrtRSI = {
    198,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo klb_emlrtRSI = {
    194,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo llb_emlrtRSI = {
    191,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo mlb_emlrtRSI = {
    187,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo nlb_emlrtRSI = {
    172,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo olb_emlrtRSI = {
    136,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtRSInfo plb_emlrtRSI = {
    132,                                                 /* lineNo */
    "FSRenvmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pathName */
};

static emlrtECInfo qd_emlrtECI = {
    2,                                                   /* nDims */
    198,                                                 /* lineNo */
    17,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtECInfo rd_emlrtECI = {
    2,                                                   /* nDims */
    198,                                                 /* lineNo */
    12,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtECInfo sd_emlrtECI = {
    2,                                                   /* nDims */
    208,                                                 /* lineNo */
    8,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo heb_emlrtRTEI = {
    187,                                                 /* lineNo */
    1,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo ieb_emlrtRTEI = {
    194,                                                 /* lineNo */
    33,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo jeb_emlrtRTEI = {
    194,                                                 /* lineNo */
    42,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo keb_emlrtRTEI = {
    198,                                                 /* lineNo */
    12,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo leb_emlrtRTEI = {
    201,                                                 /* lineNo */
    29,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo meb_emlrtRTEI = {
    210,                                                 /* lineNo */
    1,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo neb_emlrtRTEI = {
    191,                                                 /* lineNo */
    1,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo oeb_emlrtRTEI = {
    194,                                                 /* lineNo */
    1,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo peb_emlrtRTEI = {
    201,                                                 /* lineNo */
    1,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo qeb_emlrtRTEI = {
    206,                                                 /* lineNo */
    1,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo reb_emlrtRTEI = {
    187,                                                 /* lineNo */
    5,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo seb_emlrtRTEI = {
    194,                                                 /* lineNo */
    12,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo veb_emlrtRTEI = {
    208,                                                 /* lineNo */
    8,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo web_emlrtRTEI = {
    208,                                                 /* lineNo */
    22,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo xeb_emlrtRTEI = {
    210,                                                 /* lineNo */
    19,                                                  /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

static emlrtRTEInfo yeb_emlrtRTEI = {
    191,                                                 /* lineNo */
    6,                                                   /* colNo */
    "FSRenvmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRenvmdr.m" /* pName */
};

/* Function Definitions */
void FSRenvmdr(const emlrtStack *sp, real_T n, real_T p, real_T varargin_4,
               emxArray_real_T *MDRenv)
{
  static const real_T options_prob[7] = {0.99, 0.999, 0.9999, 0.99999,
                                         0.01, 0.5,   1.0E-5};
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
  emxArray_real_T *y;
  real_T options_prob_data[49];
  real_T tmp_data[7];
  int32_T b_iv[2];
  int32_T z_size[2];
  int32_T b_a;
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
    st.site = &plb_emlrtRSI;
    r_error(&st);
  }
  if (muDoubleScalarIsNaN(p)) {
    st.site = &olb_emlrtRSI;
    s_error(&st);
  }
  /*  Notice that prob must be a row vector */
  /*  Check that the initial subset size is not greater than n-1 */
  if (varargin_4 > n - 1.0) {
    st.site = &nlb_emlrtRSI;
    t_error(&st, varargin_4, n - 1.0);
  }
  emxInit_real_T(sp, &y, 2, &reb_emlrtRTEI, true);
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  st.site = &mlb_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  if (muDoubleScalarIsNaN(varargin_4) || muDoubleScalarIsNaN(n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &fd_emlrtRTEI);
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
    emxEnsureCapacity_real_T(&b_st, y, i, &fd_emlrtRTEI);
    y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(varargin_4) == varargin_4) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor((n - 1.0) - varargin_4);
    y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &fd_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      y->data[i] = varargin_4 + (real_T)i;
    }
  } else {
    c_st.site = &yc_emlrtRSI;
    eml_float_colon(&c_st, varargin_4, n - 1.0, y);
  }
  emxInit_real_T(&b_st, &m, 1, &heb_emlrtRTEI, true);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(sp, m, i, &heb_emlrtRTEI);
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    m->data[i] = y->data[i];
  }
  emxFree_real_T(&y);
  emxInit_real_T(sp, &mm, 2, &neb_emlrtRTEI, true);
  emxInit_real_T(sp, &MinSca, 2, &peb_emlrtRTEI, true);
  /*  mm = fwd search index replicated lp times. */
  st.site = &llb_emlrtRSI;
  b_repmat(&st, m, 7.0, mm);
  /*  finv finds the inverse of the F distribution. */
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = mm->size[0];
  MinSca->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, MinSca, i, &ieb_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] = n - mm->data[i];
  }
  emxInit_real_T(sp, &a, 2, &qeb_emlrtRTEI, true);
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &jeb_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = mm->data[i] + 1.0;
  }
  for (i = 0; i < 7; i++) {
    options_prob_data[i] = options_prob[i];
  }
  z_size[0] = 1;
  z_size[1] = 7;
  for (i = 0; i < 7; i++) {
    tmp_data[i] = 1.0 - options_prob_data[i];
  }
  emxInit_real_T(sp, &r, 2, &seb_emlrtRTEI, true);
  emxInit_real_T(sp, &r1, 2, &vr_emlrtRTEI, true);
  st.site = &klb_emlrtRSI;
  c_repmat(&st, tmp_data, z_size, m->size[0], r);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = MinSca->size[0];
  r1->size[1] = MinSca->size[1];
  emxEnsureCapacity_real_T(sp, r1, i, &vr_emlrtRTEI);
  loop_ub = MinSca->size[0] * MinSca->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = 2.0 * MinSca->data[i];
  }
  emxInit_real_T(sp, &r2, 2, &vr_emlrtRTEI, true);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = a->size[0];
  r2->size[1] = a->size[1];
  emxEnsureCapacity_real_T(sp, r2, i, &vr_emlrtRTEI);
  loop_ub = a->size[0] * a->size[1];
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = 2.0 * a->data[i];
  }
  emxInit_real_T(sp, &quant, 2, &oeb_emlrtRTEI, true);
  st.site = &klb_emlrtRSI;
  c_finv(&st, r, r1, r2, quant);
  /*  from the equivalence with Incomplete beta distribution. */
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])quant->size)[0];
  b_iv[1] = (*(int32_T(*)[2])quant->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &qd_emlrtECI, (emlrtCTX)sp);
  loop_ub = MinSca->size[0] * MinSca->size[1];
  emxFree_real_T(&r2);
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] *= quant->data[i];
  }
  emxFree_real_T(&quant);
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])MinSca->size)[0];
  b_iv[1] = (*(int32_T(*)[2])MinSca->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &rd_emlrtECI, (emlrtCTX)sp);
  st.site = &jlb_emlrtRSI;
  loop_ub = mm->size[0] * mm->size[1];
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = mm->size[0];
  MinSca->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, MinSca, i, &keb_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] += mm->data[i] + 1.0;
  }
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
  if (a->size[0] <= MinSca->size[0]) {
    z_size[0] = a->size[0];
  } else {
    z_size[0] = MinSca->size[0];
  }
  if (a->size[1] <= MinSca->size[1]) {
    z_size[1] = a->size[1];
  } else {
    z_size[1] = MinSca->size[1];
  }
  empty_non_axis_sizes = true;
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
  if (b_p) {
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
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
  if (a->size[0] <= MinSca->size[0]) {
    z_size[0] = a->size[0];
  } else {
    z_size[0] = MinSca->size[0];
  }
  if (a->size[1] <= MinSca->size[1]) {
    z_size[1] = a->size[1];
  } else {
    z_size[1] = MinSca->size[1];
  }
  empty_non_axis_sizes = true;
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
  if (b_p) {
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
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (a->size[0] <= MinSca->size[0]) {
    loop_ub = a->size[0];
  } else {
    loop_ub = MinSca->size[0];
  }
  if (a->size[1] <= MinSca->size[1]) {
    b_a = a->size[1];
  } else {
    b_a = MinSca->size[1];
  }
  loop_ub *= b_a;
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  i = r1->size[0] * r1->size[1];
  r1->size[0] = a->size[0];
  r1->size[1] = a->size[1];
  emxEnsureCapacity_real_T(sp, r1, i, &vr_emlrtRTEI);
  loop_ub = a->size[0] * a->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = 0.5 * (a->data[i] / MinSca->data[i] + 1.0);
  }
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &leb_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = mm->data[i] - p;
  }
  st.site = &ilb_emlrtRSI;
  b_tinv(&st, r1, a, r);
  st.site = &ilb_emlrtRSI;
  c_abs(&st, r, MinSca);
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  i = r->size[0] * r->size[1];
  r->size[0] = mm->size[0];
  r->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, r, i, &vr_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  emxFree_real_T(&r1);
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = 0.5 * (mm->data[i] / n + 1.0);
  }
  st.site = &hlb_emlrtRSI;
  b_norminv(&st, r, a);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = 2.0 * (n / mm->data[i]);
  }
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &sd_emlrtECI, (emlrtCTX)sp);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] *= a->data[i];
  }
  st.site = &glb_emlrtRSI;
  normpdf(&st, a, r);
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])r->size)[0];
  b_iv[1] = (*(int32_T(*)[2])r->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &sd_emlrtECI, (emlrtCTX)sp);
  st.site = &flb_emlrtRSI;
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = 1.0 - mm->data[i] * r->data[i];
  }
  emxFree_real_T(&r);
  b_st.site = &flb_emlrtRSI;
  d_sqrt(&b_st, mm);
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
  if (MinSca->size[0] <= mm->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  if (MinSca->size[1] <= mm->size[1]) {
    z_size[1] = MinSca->size[1];
  } else {
    z_size[1] = mm->size[1];
  }
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
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
  if (MinSca->size[0] <= mm->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  if (MinSca->size[1] <= mm->size[1]) {
    z_size[1] = MinSca->size[1];
  } else {
    z_size[1] = mm->size[1];
  }
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
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (MinSca->size[0] <= mm->size[0]) {
    loop_ub = MinSca->size[0];
  } else {
    loop_ub = mm->size[0];
  }
  if (MinSca->size[1] <= mm->size[1]) {
    b_a = MinSca->size[1];
  } else {
    b_a = mm->size[1];
  }
  loop_ub *= b_a;
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  st.site = &flb_emlrtRSI;
  b_st.site = &fbb_emlrtRSI;
  if (m->size[0] != 0) {
    b_a = m->size[0];
  } else if ((MinSca->size[0] != 0) && (MinSca->size[1] != 0)) {
    b_a = MinSca->size[0];
  } else {
    b_a = 0;
    if (MinSca->size[0] > 0) {
      b_a = MinSca->size[0];
    }
  }
  c_st.site = &yk_emlrtRSI;
  if ((m->size[0] != b_a) && (m->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((MinSca->size[0] != b_a) &&
      ((MinSca->size[0] != 0) && (MinSca->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (b_a == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes ||
      ((MinSca->size[0] != 0) && (MinSca->size[1] != 0))) {
    csz_idx_1 = MinSca->size[1];
  } else {
    csz_idx_1 = 0;
  }
  i = a->size[0] * a->size[1];
  a->size[0] = MinSca->size[0];
  a->size[1] = MinSca->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &ks_emlrtRTEI);
  loop_ub = MinSca->size[0] * MinSca->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = MinSca->data[i] / mm->data[i];
  }
  emxFree_real_T(&MinSca);
  emxFree_real_T(&mm);
  i = MDRenv->size[0] * MDRenv->size[1];
  MDRenv->size[0] = b_a;
  MDRenv->size[1] = input_sizes_idx_1 + csz_idx_1;
  emxEnsureCapacity_real_T(sp, MDRenv, i, &meb_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < b_a; i1++) {
      MDRenv->data[i1] = m->data[i1];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < csz_idx_1; i++) {
    for (i1 = 0; i1 < b_a; i1++) {
      MDRenv->data[i1 + MDRenv->size[0] * (i + input_sizes_idx_1)] =
          a->data[i1 + b_a * i];
    }
  }
  emxFree_real_T(&a);
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
  emxArray_real_T *b_mm;
  emxArray_real_T *b_tmp;
  emxArray_real_T *b_y;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *y;
  int32_T b_iv[2];
  int32_T z_size[2];
  int32_T b_b_tmp;
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
    st.site = &plb_emlrtRSI;
    r_error(&st);
  }
  if (muDoubleScalarIsNaN(p)) {
    st.site = &olb_emlrtRSI;
    s_error(&st);
  }
  /*  Notice that prob must be a row vector */
  /*  Check that the initial subset size is not greater than n-1 */
  if (varargin_4 > n - 1.0) {
    st.site = &nlb_emlrtRSI;
    t_error(&st, varargin_4, n - 1.0);
  }
  emxInit_real_T(sp, &y, 2, &reb_emlrtRTEI, true);
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  st.site = &mlb_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  if (muDoubleScalarIsNaN(varargin_4) || muDoubleScalarIsNaN(n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &fd_emlrtRTEI);
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
    emxEnsureCapacity_real_T(&b_st, y, i, &fd_emlrtRTEI);
    y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(varargin_4) == varargin_4) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor((n - 1.0) - varargin_4);
    y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &fd_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      y->data[i] = varargin_4 + (real_T)i;
    }
  } else {
    c_st.site = &yc_emlrtRSI;
    eml_float_colon(&c_st, varargin_4, n - 1.0, y);
  }
  emxInit_real_T(&b_st, &m, 1, &heb_emlrtRTEI, true);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(sp, m, i, &heb_emlrtRTEI);
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    m->data[i] = y->data[i];
  }
  emxFree_real_T(&y);
  emxInit_real_T(sp, &mm, 2, &neb_emlrtRTEI, true);
  emxInit_real_T(sp, &r, 2, &yeb_emlrtRTEI, true);
  /*  mm = fwd search index replicated lp times. */
  st.site = &llb_emlrtRSI;
  b_repmat(&st, m, 1.0, r);
  i = mm->size[0] * mm->size[1];
  mm->size[0] = r->size[0];
  mm->size[1] = r->size[1];
  emxEnsureCapacity_real_T(sp, mm, i, &neb_emlrtRTEI);
  loop_ub = r->size[0] * r->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = r->data[i];
  }
  emxInit_real_T(sp, &a, 2, &qeb_emlrtRTEI, true);
  /*  finv finds the inverse of the F distribution. */
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &ieb_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = n - mm->data[i];
  }
  emxInit_real_T(sp, &b_tmp, 2, &jeb_emlrtRTEI, true);
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, b_tmp, i, &jeb_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_tmp->data[i] = mm->data[i] + 1.0;
  }
  emxInit_real_T(sp, &r1, 2, &seb_emlrtRTEI, true);
  emxInit_real_T(sp, &r2, 2, &vr_emlrtRTEI, true);
  st.site = &klb_emlrtRSI;
  d_repmat(&st, m->size[0], r1);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = a->size[0];
  r2->size[1] = a->size[1];
  emxEnsureCapacity_real_T(sp, r2, i, &vr_emlrtRTEI);
  loop_ub = a->size[0] * a->size[1];
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = 2.0 * a->data[i];
  }
  emxInit_real_T(sp, &b_mm, 2, &leb_emlrtRTEI, true);
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = b_tmp->size[0];
  b_mm->size[1] = b_tmp->size[1];
  emxEnsureCapacity_real_T(sp, b_mm, i, &vr_emlrtRTEI);
  loop_ub = b_tmp->size[0] * b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = 2.0 * b_tmp->data[i];
  }
  emxInit_real_T(sp, &quant, 2, &oeb_emlrtRTEI, true);
  st.site = &klb_emlrtRSI;
  c_finv(&st, r1, r2, b_mm, r);
  i = quant->size[0] * quant->size[1];
  quant->size[0] = r->size[0];
  quant->size[1] = r->size[1];
  emxEnsureCapacity_real_T(sp, quant, i, &oeb_emlrtRTEI);
  loop_ub = r->size[0] * r->size[1];
  emxFree_real_T(&r1);
  for (i = 0; i < loop_ub; i++) {
    quant->data[i] = r->data[i];
  }
  /*  from the equivalence with Incomplete beta distribution. */
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])quant->size)[0];
  b_iv[1] = (*(int32_T(*)[2])quant->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &qd_emlrtECI, (emlrtCTX)sp);
  loop_ub = a->size[0] * a->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] *= quant->data[i];
  }
  emxInit_real_T(sp, &b_y, 2, &keb_emlrtRTEI, true);
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &rd_emlrtECI, (emlrtCTX)sp);
  st.site = &jlb_emlrtRSI;
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = mm->size[0];
  b_y->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, b_y, i, &keb_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = (mm->data[i] + 1.0) + a->data[i];
  }
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
  if (b_tmp->size[0] <= b_y->size[0]) {
    z_size[0] = b_tmp->size[0];
  } else {
    z_size[0] = b_y->size[0];
  }
  if (b_tmp->size[1] <= b_y->size[1]) {
    z_size[1] = b_tmp->size[1];
  } else {
    z_size[1] = 0;
  }
  empty_non_axis_sizes = true;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != b_tmp->size[loop_ub]) {
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
      if (z_size[loop_ub] != b_y->size[loop_ub]) {
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
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
  if (b_tmp->size[0] <= b_y->size[0]) {
    z_size[0] = b_tmp->size[0];
  } else {
    z_size[0] = b_y->size[0];
  }
  if (b_tmp->size[1] <= b_y->size[1]) {
    z_size[1] = b_tmp->size[1];
  } else {
    z_size[1] = 0;
  }
  empty_non_axis_sizes = true;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != b_tmp->size[loop_ub]) {
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
      if (z_size[loop_ub] != b_y->size[loop_ub]) {
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
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (b_tmp->size[0] <= b_y->size[0]) {
    loop_ub = b_tmp->size[0];
  } else {
    loop_ub = b_y->size[0];
  }
  if (b_tmp->size[1] <= b_y->size[1]) {
    b_b_tmp = b_tmp->size[1];
  } else {
    b_b_tmp = 0;
  }
  loop_ub *= b_b_tmp;
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  i = r2->size[0] * r2->size[1];
  r2->size[0] = b_tmp->size[0];
  r2->size[1] = b_tmp->size[1];
  emxEnsureCapacity_real_T(sp, r2, i, &vr_emlrtRTEI);
  loop_ub = b_tmp->size[0] * b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = 0.5 * (b_tmp->data[i] / b_y->data[i] + 1.0);
  }
  emxFree_real_T(&b_tmp);
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = mm->size[0];
  b_mm->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, b_mm, i, &leb_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = mm->data[i] - p;
  }
  emxInit_real_T(sp, &MinSca, 2, &peb_emlrtRTEI, true);
  st.site = &ilb_emlrtRSI;
  b_tinv(&st, r2, b_mm, r);
  st.site = &ilb_emlrtRSI;
  c_abs(&st, r, b_y);
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = b_y->size[0];
  MinSca->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, MinSca, i, &peb_emlrtRTEI);
  loop_ub = b_y->size[0] * b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] = b_y->data[i];
  }
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  i = r2->size[0] * r2->size[1];
  r2->size[0] = mm->size[0];
  r2->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, r2, i, &vr_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = 0.5 * (mm->data[i] / n + 1.0);
  }
  st.site = &hlb_emlrtRSI;
  b_norminv(&st, r2, r);
  i = a->size[0] * a->size[1];
  a->size[0] = r->size[0];
  a->size[1] = r->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &qeb_emlrtRTEI);
  loop_ub = r->size[0] * r->size[1];
  emxFree_real_T(&r2);
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = r->data[i];
  }
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = mm->size[0];
  b_y->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, b_y, i, &as_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = 2.0 * (n / mm->data[i]);
  }
  emxFree_real_T(&mm);
  z_size[0] = (*(int32_T(*)[2])b_y->size)[0];
  z_size[1] = (*(int32_T(*)[2])b_y->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &sd_emlrtECI, (emlrtCTX)sp);
  i = quant->size[0] * quant->size[1];
  quant->size[0] = b_y->size[0];
  quant->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, quant, i, &veb_emlrtRTEI);
  loop_ub = b_y->size[0] * b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    quant->data[i] = b_y->data[i] * a->data[i];
  }
  st.site = &glb_emlrtRSI;
  normpdf(&st, a, r);
  i = a->size[0] * a->size[1];
  a->size[0] = r->size[0];
  a->size[1] = r->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &web_emlrtRTEI);
  loop_ub = r->size[0] * r->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = r->data[i];
  }
  emxFree_real_T(&r);
  z_size[0] = (*(int32_T(*)[2])quant->size)[0];
  z_size[1] = (*(int32_T(*)[2])quant->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &sd_emlrtECI, (emlrtCTX)sp);
  st.site = &flb_emlrtRSI;
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = quant->size[0];
  b_y->size[1] = quant->size[1];
  emxEnsureCapacity_real_T(&st, b_y, i, &xeb_emlrtRTEI);
  loop_ub = quant->size[0] * quant->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = 1.0 - quant->data[i] * a->data[i];
  }
  emxFree_real_T(&a);
  emxFree_real_T(&quant);
  b_st.site = &flb_emlrtRSI;
  d_sqrt(&b_st, b_y);
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
  if (MinSca->size[0] <= b_y->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = b_y->size[0];
  }
  if (MinSca->size[1] <= b_y->size[1]) {
    z_size[1] = MinSca->size[1];
  } else {
    z_size[1] = 0;
  }
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
      if (z_size[loop_ub] != b_y->size[loop_ub]) {
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
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
  if (MinSca->size[0] <= b_y->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = b_y->size[0];
  }
  if (MinSca->size[1] <= b_y->size[1]) {
    z_size[1] = MinSca->size[1];
  } else {
    z_size[1] = 0;
  }
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
      if (z_size[loop_ub] != b_y->size[loop_ub]) {
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
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (MinSca->size[0] <= b_y->size[0]) {
    loop_ub = MinSca->size[0];
  } else {
    loop_ub = b_y->size[0];
  }
  if (MinSca->size[1] <= b_y->size[1]) {
    b_b_tmp = MinSca->size[1];
  } else {
    b_b_tmp = 0;
  }
  loop_ub *= b_b_tmp;
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  st.site = &flb_emlrtRSI;
  b_st.site = &fbb_emlrtRSI;
  if (m->size[0] != 0) {
    b_b_tmp = m->size[0];
  } else if ((MinSca->size[0] != 0) && (MinSca->size[1] != 0)) {
    b_b_tmp = MinSca->size[0];
  } else {
    b_b_tmp = 0;
    if (MinSca->size[0] > 0) {
      b_b_tmp = MinSca->size[0];
    }
  }
  c_st.site = &yk_emlrtRSI;
  if ((m->size[0] != b_b_tmp) && (m->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((MinSca->size[0] != b_b_tmp) &&
      ((MinSca->size[0] != 0) && (MinSca->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (b_b_tmp == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes ||
      ((MinSca->size[0] != 0) && (MinSca->size[1] != 0))) {
    csz_idx_1 = MinSca->size[1];
  } else {
    csz_idx_1 = 0;
  }
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = MinSca->size[0];
  b_mm->size[1] = MinSca->size[1];
  emxEnsureCapacity_real_T(sp, b_mm, i, &ks_emlrtRTEI);
  loop_ub = MinSca->size[0] * MinSca->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = MinSca->data[i] / b_y->data[i];
  }
  emxFree_real_T(&b_y);
  emxFree_real_T(&MinSca);
  i = MDRenv->size[0] * MDRenv->size[1];
  MDRenv->size[0] = b_b_tmp;
  MDRenv->size[1] = input_sizes_idx_1 + csz_idx_1;
  emxEnsureCapacity_real_T(sp, MDRenv, i, &meb_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < b_b_tmp; i1++) {
      MDRenv->data[i1] = m->data[i1];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < csz_idx_1; i++) {
    for (i1 = 0; i1 < b_b_tmp; i1++) {
      MDRenv->data[i1 + MDRenv->size[0] * input_sizes_idx_1] = b_mm->data[i1];
    }
  }
  emxFree_real_T(&b_mm);
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
  emxArray_real_T *y;
  real_T options_prob_data[16];
  real_T tmp_data[4];
  int32_T b_iv[2];
  int32_T z_size[2];
  int32_T b_a;
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
    st.site = &plb_emlrtRSI;
    r_error(&st);
  }
  if (muDoubleScalarIsNaN(p)) {
    st.site = &olb_emlrtRSI;
    s_error(&st);
  }
  /*  Notice that prob must be a row vector */
  /*  Check that the initial subset size is not greater than n-1 */
  if (varargin_4 > n - 1.0) {
    st.site = &nlb_emlrtRSI;
    t_error(&st, varargin_4, n - 1.0);
  }
  emxInit_real_T(sp, &y, 2, &reb_emlrtRTEI, true);
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  st.site = &mlb_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  if (muDoubleScalarIsNaN(varargin_4) || muDoubleScalarIsNaN(n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &fd_emlrtRTEI);
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
    emxEnsureCapacity_real_T(&b_st, y, i, &fd_emlrtRTEI);
    y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(varargin_4) == varargin_4) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor((n - 1.0) - varargin_4);
    y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &fd_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      y->data[i] = varargin_4 + (real_T)i;
    }
  } else {
    c_st.site = &yc_emlrtRSI;
    eml_float_colon(&c_st, varargin_4, n - 1.0, y);
  }
  emxInit_real_T(&b_st, &m, 1, &heb_emlrtRTEI, true);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(sp, m, i, &heb_emlrtRTEI);
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    m->data[i] = y->data[i];
  }
  emxFree_real_T(&y);
  emxInit_real_T(sp, &mm, 2, &neb_emlrtRTEI, true);
  emxInit_real_T(sp, &MinSca, 2, &peb_emlrtRTEI, true);
  /*  mm = fwd search index replicated lp times. */
  st.site = &llb_emlrtRSI;
  b_repmat(&st, m, 4.0, mm);
  /*  finv finds the inverse of the F distribution. */
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = mm->size[0];
  MinSca->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, MinSca, i, &ieb_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] = n - mm->data[i];
  }
  emxInit_real_T(sp, &a, 2, &qeb_emlrtRTEI, true);
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &jeb_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = mm->data[i] + 1.0;
  }
  options_prob_data[0] = 0.99;
  options_prob_data[1] = 0.999;
  options_prob_data[2] = 0.01;
  options_prob_data[3] = 0.5;
  z_size[0] = 1;
  z_size[1] = 4;
  for (i = 0; i < 4; i++) {
    tmp_data[i] = 1.0 - options_prob_data[i];
  }
  emxInit_real_T(sp, &r, 2, &seb_emlrtRTEI, true);
  emxInit_real_T(sp, &r1, 2, &vr_emlrtRTEI, true);
  st.site = &klb_emlrtRSI;
  c_repmat(&st, tmp_data, z_size, m->size[0], r);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = MinSca->size[0];
  r1->size[1] = MinSca->size[1];
  emxEnsureCapacity_real_T(sp, r1, i, &vr_emlrtRTEI);
  loop_ub = MinSca->size[0] * MinSca->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = 2.0 * MinSca->data[i];
  }
  emxInit_real_T(sp, &r2, 2, &vr_emlrtRTEI, true);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = a->size[0];
  r2->size[1] = a->size[1];
  emxEnsureCapacity_real_T(sp, r2, i, &vr_emlrtRTEI);
  loop_ub = a->size[0] * a->size[1];
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = 2.0 * a->data[i];
  }
  emxInit_real_T(sp, &quant, 2, &oeb_emlrtRTEI, true);
  st.site = &klb_emlrtRSI;
  c_finv(&st, r, r1, r2, quant);
  /*  from the equivalence with Incomplete beta distribution. */
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])quant->size)[0];
  b_iv[1] = (*(int32_T(*)[2])quant->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &qd_emlrtECI, (emlrtCTX)sp);
  loop_ub = MinSca->size[0] * MinSca->size[1];
  emxFree_real_T(&r2);
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] *= quant->data[i];
  }
  emxFree_real_T(&quant);
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])MinSca->size)[0];
  b_iv[1] = (*(int32_T(*)[2])MinSca->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &rd_emlrtECI, (emlrtCTX)sp);
  st.site = &jlb_emlrtRSI;
  loop_ub = mm->size[0] * mm->size[1];
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = mm->size[0];
  MinSca->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, MinSca, i, &keb_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] += mm->data[i] + 1.0;
  }
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
  if (a->size[0] <= MinSca->size[0]) {
    z_size[0] = a->size[0];
  } else {
    z_size[0] = MinSca->size[0];
  }
  if (a->size[1] <= MinSca->size[1]) {
    z_size[1] = a->size[1];
  } else {
    z_size[1] = MinSca->size[1];
  }
  empty_non_axis_sizes = true;
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
  if (b_p) {
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
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
  if (a->size[0] <= MinSca->size[0]) {
    z_size[0] = a->size[0];
  } else {
    z_size[0] = MinSca->size[0];
  }
  if (a->size[1] <= MinSca->size[1]) {
    z_size[1] = a->size[1];
  } else {
    z_size[1] = MinSca->size[1];
  }
  empty_non_axis_sizes = true;
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
  if (b_p) {
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
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (a->size[0] <= MinSca->size[0]) {
    loop_ub = a->size[0];
  } else {
    loop_ub = MinSca->size[0];
  }
  if (a->size[1] <= MinSca->size[1]) {
    b_a = a->size[1];
  } else {
    b_a = MinSca->size[1];
  }
  loop_ub *= b_a;
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  i = r1->size[0] * r1->size[1];
  r1->size[0] = a->size[0];
  r1->size[1] = a->size[1];
  emxEnsureCapacity_real_T(sp, r1, i, &vr_emlrtRTEI);
  loop_ub = a->size[0] * a->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = 0.5 * (a->data[i] / MinSca->data[i] + 1.0);
  }
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &leb_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = mm->data[i] - p;
  }
  st.site = &ilb_emlrtRSI;
  b_tinv(&st, r1, a, r);
  st.site = &ilb_emlrtRSI;
  c_abs(&st, r, MinSca);
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  i = r->size[0] * r->size[1];
  r->size[0] = mm->size[0];
  r->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, r, i, &vr_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  emxFree_real_T(&r1);
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = 0.5 * (mm->data[i] / n + 1.0);
  }
  st.site = &hlb_emlrtRSI;
  b_norminv(&st, r, a);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = 2.0 * (n / mm->data[i]);
  }
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &sd_emlrtECI, (emlrtCTX)sp);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] *= a->data[i];
  }
  st.site = &glb_emlrtRSI;
  normpdf(&st, a, r);
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])r->size)[0];
  b_iv[1] = (*(int32_T(*)[2])r->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &sd_emlrtECI, (emlrtCTX)sp);
  st.site = &flb_emlrtRSI;
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = 1.0 - mm->data[i] * r->data[i];
  }
  emxFree_real_T(&r);
  b_st.site = &flb_emlrtRSI;
  d_sqrt(&b_st, mm);
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
  if (MinSca->size[0] <= mm->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  if (MinSca->size[1] <= mm->size[1]) {
    z_size[1] = MinSca->size[1];
  } else {
    z_size[1] = mm->size[1];
  }
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
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
  if (MinSca->size[0] <= mm->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  if (MinSca->size[1] <= mm->size[1]) {
    z_size[1] = MinSca->size[1];
  } else {
    z_size[1] = mm->size[1];
  }
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
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (MinSca->size[0] <= mm->size[0]) {
    loop_ub = MinSca->size[0];
  } else {
    loop_ub = mm->size[0];
  }
  if (MinSca->size[1] <= mm->size[1]) {
    b_a = MinSca->size[1];
  } else {
    b_a = mm->size[1];
  }
  loop_ub *= b_a;
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  st.site = &flb_emlrtRSI;
  b_st.site = &fbb_emlrtRSI;
  if (m->size[0] != 0) {
    b_a = m->size[0];
  } else if ((MinSca->size[0] != 0) && (MinSca->size[1] != 0)) {
    b_a = MinSca->size[0];
  } else {
    b_a = 0;
    if (MinSca->size[0] > 0) {
      b_a = MinSca->size[0];
    }
  }
  c_st.site = &yk_emlrtRSI;
  if ((m->size[0] != b_a) && (m->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((MinSca->size[0] != b_a) &&
      ((MinSca->size[0] != 0) && (MinSca->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (b_a == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes ||
      ((MinSca->size[0] != 0) && (MinSca->size[1] != 0))) {
    csz_idx_1 = MinSca->size[1];
  } else {
    csz_idx_1 = 0;
  }
  i = a->size[0] * a->size[1];
  a->size[0] = MinSca->size[0];
  a->size[1] = MinSca->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &ks_emlrtRTEI);
  loop_ub = MinSca->size[0] * MinSca->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = MinSca->data[i] / mm->data[i];
  }
  emxFree_real_T(&MinSca);
  emxFree_real_T(&mm);
  i = MDRenv->size[0] * MDRenv->size[1];
  MDRenv->size[0] = b_a;
  MDRenv->size[1] = input_sizes_idx_1 + csz_idx_1;
  emxEnsureCapacity_real_T(sp, MDRenv, i, &meb_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < b_a; i1++) {
      MDRenv->data[i1] = m->data[i1];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < csz_idx_1; i++) {
    for (i1 = 0; i1 < b_a; i1++) {
      MDRenv->data[i1 + MDRenv->size[0] * (i + input_sizes_idx_1)] =
          a->data[i1 + b_a * i];
    }
  }
  emxFree_real_T(&a);
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
  emxArray_real_T *y;
  real_T options_prob_data[16];
  real_T tmp_data[4];
  int32_T b_iv[2];
  int32_T z_size[2];
  int32_T b_a;
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
    st.site = &plb_emlrtRSI;
    r_error(&st);
  }
  if (muDoubleScalarIsNaN(p)) {
    st.site = &olb_emlrtRSI;
    s_error(&st);
  }
  /*  Notice that prob must be a row vector */
  /*  Check that the initial subset size is not greater than n-1 */
  if (varargin_4 > n - 1.0) {
    st.site = &nlb_emlrtRSI;
    t_error(&st, varargin_4, n - 1.0);
  }
  emxInit_real_T(sp, &y, 2, &reb_emlrtRTEI, true);
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  st.site = &mlb_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  if (muDoubleScalarIsNaN(varargin_4) || muDoubleScalarIsNaN(n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &fd_emlrtRTEI);
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
    emxEnsureCapacity_real_T(&b_st, y, i, &fd_emlrtRTEI);
    y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(varargin_4) == varargin_4) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor((n - 1.0) - varargin_4);
    y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &fd_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      y->data[i] = varargin_4 + (real_T)i;
    }
  } else {
    c_st.site = &yc_emlrtRSI;
    eml_float_colon(&c_st, varargin_4, n - 1.0, y);
  }
  emxInit_real_T(&b_st, &m, 1, &heb_emlrtRTEI, true);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(sp, m, i, &heb_emlrtRTEI);
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    m->data[i] = y->data[i];
  }
  emxFree_real_T(&y);
  emxInit_real_T(sp, &mm, 2, &neb_emlrtRTEI, true);
  emxInit_real_T(sp, &MinSca, 2, &peb_emlrtRTEI, true);
  /*  mm = fwd search index replicated lp times. */
  st.site = &llb_emlrtRSI;
  b_repmat(&st, m, 4.0, mm);
  /*  finv finds the inverse of the F distribution. */
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = mm->size[0];
  MinSca->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, MinSca, i, &ieb_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] = n - mm->data[i];
  }
  emxInit_real_T(sp, &a, 2, &qeb_emlrtRTEI, true);
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &jeb_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = mm->data[i] + 1.0;
  }
  options_prob_data[0] = 0.999999;
  options_prob_data[1] = 0.9999999;
  options_prob_data[2] = 0.01;
  options_prob_data[3] = 0.5;
  z_size[0] = 1;
  z_size[1] = 4;
  for (i = 0; i < 4; i++) {
    tmp_data[i] = 1.0 - options_prob_data[i];
  }
  emxInit_real_T(sp, &r, 2, &seb_emlrtRTEI, true);
  emxInit_real_T(sp, &r1, 2, &vr_emlrtRTEI, true);
  st.site = &klb_emlrtRSI;
  c_repmat(&st, tmp_data, z_size, m->size[0], r);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = MinSca->size[0];
  r1->size[1] = MinSca->size[1];
  emxEnsureCapacity_real_T(sp, r1, i, &vr_emlrtRTEI);
  loop_ub = MinSca->size[0] * MinSca->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = 2.0 * MinSca->data[i];
  }
  emxInit_real_T(sp, &r2, 2, &vr_emlrtRTEI, true);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = a->size[0];
  r2->size[1] = a->size[1];
  emxEnsureCapacity_real_T(sp, r2, i, &vr_emlrtRTEI);
  loop_ub = a->size[0] * a->size[1];
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = 2.0 * a->data[i];
  }
  emxInit_real_T(sp, &quant, 2, &oeb_emlrtRTEI, true);
  st.site = &klb_emlrtRSI;
  c_finv(&st, r, r1, r2, quant);
  /*  from the equivalence with Incomplete beta distribution. */
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])quant->size)[0];
  b_iv[1] = (*(int32_T(*)[2])quant->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &qd_emlrtECI, (emlrtCTX)sp);
  loop_ub = MinSca->size[0] * MinSca->size[1];
  emxFree_real_T(&r2);
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] *= quant->data[i];
  }
  emxFree_real_T(&quant);
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])MinSca->size)[0];
  b_iv[1] = (*(int32_T(*)[2])MinSca->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &rd_emlrtECI, (emlrtCTX)sp);
  st.site = &jlb_emlrtRSI;
  loop_ub = mm->size[0] * mm->size[1];
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = mm->size[0];
  MinSca->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, MinSca, i, &keb_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    MinSca->data[i] += mm->data[i] + 1.0;
  }
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
  if (a->size[0] <= MinSca->size[0]) {
    z_size[0] = a->size[0];
  } else {
    z_size[0] = MinSca->size[0];
  }
  if (a->size[1] <= MinSca->size[1]) {
    z_size[1] = a->size[1];
  } else {
    z_size[1] = MinSca->size[1];
  }
  empty_non_axis_sizes = true;
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
  if (b_p) {
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
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
  if (a->size[0] <= MinSca->size[0]) {
    z_size[0] = a->size[0];
  } else {
    z_size[0] = MinSca->size[0];
  }
  if (a->size[1] <= MinSca->size[1]) {
    z_size[1] = a->size[1];
  } else {
    z_size[1] = MinSca->size[1];
  }
  empty_non_axis_sizes = true;
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
  if (b_p) {
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
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (a->size[0] <= MinSca->size[0]) {
    loop_ub = a->size[0];
  } else {
    loop_ub = MinSca->size[0];
  }
  if (a->size[1] <= MinSca->size[1]) {
    b_a = a->size[1];
  } else {
    b_a = MinSca->size[1];
  }
  loop_ub *= b_a;
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  i = r1->size[0] * r1->size[1];
  r1->size[0] = a->size[0];
  r1->size[1] = a->size[1];
  emxEnsureCapacity_real_T(sp, r1, i, &vr_emlrtRTEI);
  loop_ub = a->size[0] * a->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = 0.5 * (a->data[i] / MinSca->data[i] + 1.0);
  }
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &leb_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = mm->data[i] - p;
  }
  st.site = &ilb_emlrtRSI;
  b_tinv(&st, r1, a, r);
  st.site = &ilb_emlrtRSI;
  c_abs(&st, r, MinSca);
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  i = r->size[0] * r->size[1];
  r->size[0] = mm->size[0];
  r->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, r, i, &vr_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  emxFree_real_T(&r1);
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = 0.5 * (mm->data[i] / n + 1.0);
  }
  st.site = &hlb_emlrtRSI;
  b_norminv(&st, r, a);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = 2.0 * (n / mm->data[i]);
  }
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &sd_emlrtECI, (emlrtCTX)sp);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] *= a->data[i];
  }
  st.site = &glb_emlrtRSI;
  normpdf(&st, a, r);
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])r->size)[0];
  b_iv[1] = (*(int32_T(*)[2])r->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &sd_emlrtECI, (emlrtCTX)sp);
  st.site = &flb_emlrtRSI;
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = 1.0 - mm->data[i] * r->data[i];
  }
  emxFree_real_T(&r);
  b_st.site = &flb_emlrtRSI;
  d_sqrt(&b_st, mm);
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
  if (MinSca->size[0] <= mm->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  if (MinSca->size[1] <= mm->size[1]) {
    z_size[1] = MinSca->size[1];
  } else {
    z_size[1] = mm->size[1];
  }
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
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
  if (MinSca->size[0] <= mm->size[0]) {
    z_size[0] = MinSca->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  if (MinSca->size[1] <= mm->size[1]) {
    z_size[1] = MinSca->size[1];
  } else {
    z_size[1] = mm->size[1];
  }
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
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (MinSca->size[0] <= mm->size[0]) {
    loop_ub = MinSca->size[0];
  } else {
    loop_ub = mm->size[0];
  }
  if (MinSca->size[1] <= mm->size[1]) {
    b_a = MinSca->size[1];
  } else {
    b_a = mm->size[1];
  }
  loop_ub *= b_a;
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  st.site = &flb_emlrtRSI;
  b_st.site = &fbb_emlrtRSI;
  if (m->size[0] != 0) {
    b_a = m->size[0];
  } else if ((MinSca->size[0] != 0) && (MinSca->size[1] != 0)) {
    b_a = MinSca->size[0];
  } else {
    b_a = 0;
    if (MinSca->size[0] > 0) {
      b_a = MinSca->size[0];
    }
  }
  c_st.site = &yk_emlrtRSI;
  if ((m->size[0] != b_a) && (m->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((MinSca->size[0] != b_a) &&
      ((MinSca->size[0] != 0) && (MinSca->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (b_a == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes ||
      ((MinSca->size[0] != 0) && (MinSca->size[1] != 0))) {
    csz_idx_1 = MinSca->size[1];
  } else {
    csz_idx_1 = 0;
  }
  i = a->size[0] * a->size[1];
  a->size[0] = MinSca->size[0];
  a->size[1] = MinSca->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &ks_emlrtRTEI);
  loop_ub = MinSca->size[0] * MinSca->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = MinSca->data[i] / mm->data[i];
  }
  emxFree_real_T(&MinSca);
  emxFree_real_T(&mm);
  i = MDRenv->size[0] * MDRenv->size[1];
  MDRenv->size[0] = b_a;
  MDRenv->size[1] = input_sizes_idx_1 + csz_idx_1;
  emxEnsureCapacity_real_T(sp, MDRenv, i, &meb_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < b_a; i1++) {
      MDRenv->data[i1] = m->data[i1];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < csz_idx_1; i++) {
    for (i1 = 0; i1 < b_a; i1++) {
      MDRenv->data[i1 + MDRenv->size[0] * (i + input_sizes_idx_1)] =
          a->data[i1 + b_a * i];
    }
  }
  emxFree_real_T(&a);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (FSRenvmdr.c) */
