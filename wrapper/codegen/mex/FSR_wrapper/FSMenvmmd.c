/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMenvmmd.c
 *
 * Code generation for function 'FSMenvmmd'
 *
 */

/* Include files */
#include "FSMenvmmd.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "chi2cdf.h"
#include "chi2inv.h"
#include "colon.h"
#include "eml_int_forloop_overflow_check.h"
#include "error.h"
#include "finv.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo nbb_emlrtRSI = {
    228,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo obb_emlrtRSI = {
    225,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo pbb_emlrtRSI = {
    224,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo qbb_emlrtRSI = {
    216,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo rbb_emlrtRSI = {
    212,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo sbb_emlrtRSI = {
    208,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo tbb_emlrtRSI = {
    204,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo ubb_emlrtRSI = {
    201,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo vbb_emlrtRSI = {
    197,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo wbb_emlrtRSI = {
    181,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo xbb_emlrtRSI = {
    143,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo ybb_emlrtRSI = {
    139,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtECInfo vb_emlrtECI = {
    2,                                                     /* nDims */
    208,                                                   /* lineNo */
    17,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtECInfo wb_emlrtECI = {
    2,                                                     /* nDims */
    208,                                                   /* lineNo */
    12,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtECInfo xb_emlrtECI = {
    2,                                                     /* nDims */
    212,                                                   /* lineNo */
    5,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtECInfo yb_emlrtECI = {
    2,                                                     /* nDims */
    216,                                                   /* lineNo */
    14,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtECInfo ac_emlrtECI = {
    2,                                                     /* nDims */
    225,                                                   /* lineNo */
    10,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo qs_emlrtRTEI = {
    197,                                                   /* lineNo */
    1,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo rs_emlrtRTEI = {
    201,                                                   /* lineNo */
    1,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo ss_emlrtRTEI = {
    204,                                                   /* lineNo */
    33,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo ts_emlrtRTEI = {
    204,                                                   /* lineNo */
    42,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo vs_emlrtRTEI = {
    204,                                                   /* lineNo */
    1,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo ws_emlrtRTEI = {
    208,                                                   /* lineNo */
    17,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo xs_emlrtRTEI = {
    208,                                                   /* lineNo */
    12,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo at_emlrtRTEI = {
    212,                                                   /* lineNo */
    30,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo bt_emlrtRTEI = {
    53,    /* lineNo */
    9,     /* colNo */
    "div", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" /* pName
                                                                          */
};

static emlrtRTEInfo ct_emlrtRTEI = {
    216,                                                   /* lineNo */
    29,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo dt_emlrtRTEI = {
    216,                                                   /* lineNo */
    19,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo et_emlrtRTEI = {
    216,                                                   /* lineNo */
    1,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo ft_emlrtRTEI = {
    224,                                                   /* lineNo */
    15,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo gt_emlrtRTEI = {
    224,                                                   /* lineNo */
    5,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo ht_emlrtRTEI = {
    225,                                                   /* lineNo */
    20,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo it_emlrtRTEI = {
    228,                                                   /* lineNo */
    19,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo jt_emlrtRTEI = {
    228,                                                   /* lineNo */
    1,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo kt_emlrtRTEI = {
    197,                                                   /* lineNo */
    5,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo lt_emlrtRTEI = {
    212,                                                   /* lineNo */
    5,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo st_emlrtRTEI = {
    204,                                                   /* lineNo */
    12,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo tt_emlrtRTEI = {
    212,                                                   /* lineNo */
    1,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

/* Function Definitions */
void FSMenvmmd(const emlrtStack *sp, real_T n, real_T v, real_T varargin_4,
               emxArray_real_T *MMDenv)
{
  static const real_T varargin_2[6] = {0.99, 0.999, 0.9999, 0.99999, 0.01, 0.5};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_real_T *a;
  emxArray_real_T *b_b_tmp;
  emxArray_real_T *b_mm;
  emxArray_real_T *b_tmp;
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  emxArray_real_T *d_y;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *y;
  real_T b_options_prob_data[36];
  real_T options_prob_data[18];
  real_T tmp_data[6];
  int32_T b_iv[2];
  int32_T z_size[2];
  int32_T csz_idx_1;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T result;
  int8_T input_sizes_idx_1;
  boolean_T empty_non_axis_sizes;
  boolean_T exitg1;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* FSMenvmmd computes the theoretical envelopes of Minimum MD outside subset
   * during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSMenvmmd')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  n :           Number of observations. Scalar. Number of observations. */
  /*                Data Types - single | double */
  /*  v :           Number of variables. Scalar. Number of variables. */
  /*                Data Types - single | double */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  init :       Point where to start monitoring required diagnostics. Scalar.
   */
  /*               Note that if bsb is supplied, init>=length(bsb). If init is
   * not */
  /*               specified it will be set equal to floor(n*0.6). */
  /*                  Example - 'init',50 */
  /*                  Data Types - double */
  /*  */
  /*  prob:        quantiles for which envelopes have */
  /*                to be computed. Vector. Vector containing 1 x k elements .
   */
  /*                The default is to produce 1 per cent, 50 per cent and 99 per
   * cent envelopes. */
  /*                  Example - 'prob',[0.05 0.95] */
  /*                  Data Types - double */
  /*  */
  /*    scaled:  It indicates how to compute the envelopes. Boolean. */
  /*                If scaled=true0 the envelopes are produced for */
  /*                scaled Mahalanobis distances (no consistency factor is */
  /*                applied) else the traditional consistency factor is applied
   */
  /*                (this is the default) */
  /*                  Example - 'scaled',false */
  /*                  Data Types - logical */
  /*  */
  /*  */
  /*  Output: */
  /*  */
  /*   MMDenv=      n-m0+1 x length(prob)+1 columns containing the envelopes */
  /*                for the requested quantiles. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob[1]; */
  /*                3rd col = envelope for quantile prob[2]; */
  /*                ...; */
  /*                (k+1) col = envelope for quantile prob[k]. */
  /*  */
  /*  See also FSMenvmmd.m, FSM.m */
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
  /* <a href="matlab: docsearchFS('FSMenvmmd')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
  /* { */
  /*     %% FSMenvmmd with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent
   * envelopes based on 10000 */
  /*     % observations and 5 explanatory variables. */
  /*     MMDenv=FSMenvmmd(10000,5); */
  /*     plot(MMDenv(:,1),MMDenv(:,2:end)) */
  /* } */
  /* { */
  /*     %% FSMenvmmd with otpional arguments. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent
   * envelopes based on 10000 */
  /*     % observations and 5 explanatory variables. The envelopes are produced
   * for */
  /*     % scaled Mahalanobis distances (no consistency factor is applied) */
  /*     MMDenv=FSMenvmmd(10000,5,'scaled',1); */
  /*     plot(MMDenv(:,1),MMDenv(:,2:end)) */
  /* } */
  /* { */
  /*     %% Order statistics and simulations envelopes . */
  /*     % In this example we compare the accuracy of the envelopes computed
   * with */
  /*     % order statistics with those which come from simulations. */
  /*  */
  /*     % Fix a seed */
  /*     state=1000; */
  /*  */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous */
  /*     % four lines with */
  /*     % randn('state', 1000); */
  /*     n=200; */
  /*     p=3; */
  /*  */
  /*  */
  /*     init=25; */
  /*     nsimul=1000; */
  /*     mmdStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         Y=randn(n,p); */
  /*         [fre]=unibiv(Y); */
  /*         %create an initial subset with the 20 observations with the lowest
   */
  /*         %Mahalanobis Distance */
  /*         fre=sortrows(fre,4); */
  /*         bs=fre(1:25,1); */
  /*         mmd = FSMmmd(Y,bs,'init',init); */
  /*         mmdStore(:,j)=mmd(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mmdStore */
  /*     mmdStore=sort(mmdStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mmd(:,1),mmdStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mmdT=FSMenvmmd(n,p,'init',init); */
  /*     line(mmdT(:,1),mmdT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  if (muDoubleScalarIsNaN(n)) {
    st.site = &ybb_emlrtRSI;
    l_error(&st);
  }
  if (muDoubleScalarIsNaN(v)) {
    st.site = &xbb_emlrtRSI;
    m_error(&st);
  }
  /*  Note that prob must be a row vector */
  for (i = 0; i < 6; i++) {
    options_prob_data[i] = varargin_2[i];
  }
  /*  Check that the initial subset size is not greater than n-1 */
  if (varargin_4 > n - 1.0) {
    st.site = &wbb_emlrtRSI;
    n_error(&st);
  }
  emxInit_real_T(sp, &y, 2, &kt_emlrtRTEI, true);
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  st.site = &vbb_emlrtRSI;
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
  emxInit_real_T(&b_st, &m, 1, &qs_emlrtRTEI, true);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(sp, m, i, &qs_emlrtRTEI);
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    m->data[i] = y->data[i];
  }
  emxFree_real_T(&y);
  emxInit_real_T(sp, &mm, 2, &rs_emlrtRTEI, true);
  emxInit_real_T(sp, &b_y, 2, &at_emlrtRTEI, true);
  /*  mm = fwd search index replicated lp times. */
  st.site = &ubb_emlrtRSI;
  b_repmat(&st, m, 6.0, b_y);
  i = mm->size[0] * mm->size[1];
  mm->size[0] = b_y->size[0];
  mm->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, mm, i, &rs_emlrtRTEI);
  loop_ub = b_y->size[0] * b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = b_y->data[i];
  }
  emxInit_real_T(sp, &a, 2, &gt_emlrtRTEI, true);
  /*  finv finds the inverse of the F distribution. */
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = 6;
  emxEnsureCapacity_real_T(sp, a, i, &ss_emlrtRTEI);
  loop_ub = mm->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = n - mm->data[i];
  }
  emxInit_real_T(sp, &b_tmp, 2, &ts_emlrtRTEI, true);
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = 6;
  emxEnsureCapacity_real_T(sp, b_tmp, i, &ts_emlrtRTEI);
  loop_ub = mm->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    b_tmp->data[i] = mm->data[i] + 1.0;
  }
  for (i = 0; i < 6; i++) {
    b_options_prob_data[i] = options_prob_data[i];
  }
  z_size[0] = 1;
  z_size[1] = 6;
  for (i = 0; i < 6; i++) {
    tmp_data[i] = 1.0 - b_options_prob_data[i];
  }
  emxInit_real_T(sp, &b_mm, 2, &ct_emlrtRTEI, true);
  st.site = &tbb_emlrtRSI;
  c_repmat(&st, tmp_data, z_size, m->size[0], b_y);
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = a->size[0];
  b_mm->size[1] = 6;
  emxEnsureCapacity_real_T(sp, b_mm, i, &us_emlrtRTEI);
  loop_ub = a->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = 2.0 * a->data[i];
  }
  emxInit_real_T(sp, &c_y, 2, &lt_emlrtRTEI, true);
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = b_tmp->size[0];
  c_y->size[1] = 6;
  emxEnsureCapacity_real_T(sp, c_y, i, &us_emlrtRTEI);
  loop_ub = b_tmp->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = 2.0 * b_tmp->data[i];
  }
  emxInit_real_T(sp, &quant, 2, &vs_emlrtRTEI, true);
  emxInit_real_T(sp, &d_y, 2, &xs_emlrtRTEI, true);
  st.site = &tbb_emlrtRSI;
  c_finv(&st, b_y, b_mm, c_y, d_y);
  i = quant->size[0] * quant->size[1];
  quant->size[0] = d_y->size[0];
  quant->size[1] = d_y->size[1];
  emxEnsureCapacity_real_T(sp, quant, i, &vs_emlrtRTEI);
  loop_ub = d_y->size[0] * d_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    quant->data[i] = d_y->data[i];
  }
  /*  from the equivalence with the incomplete beta distribution. */
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])quant->size)[0];
  b_iv[1] = (*(int32_T(*)[2])quant->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &vb_emlrtECI, (emlrtCTX)sp);
  loop_ub = a->size[0] * 6;
  i = a->size[0] * a->size[1];
  a->size[1] = 6;
  emxEnsureCapacity_real_T(sp, a, i, &ws_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    a->data[i] *= quant->data[i];
  }
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &wb_emlrtECI, (emlrtCTX)sp);
  st.site = &sbb_emlrtRSI;
  i = d_y->size[0] * d_y->size[1];
  d_y->size[0] = mm->size[0];
  d_y->size[1] = 6;
  emxEnsureCapacity_real_T(&st, d_y, i, &xs_emlrtRTEI);
  loop_ub = mm->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    d_y->data[i] = (mm->data[i] + 1.0) + a->data[i];
  }
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (b_tmp->size[0] <= d_y->size[0]) {
    z_size[0] = b_tmp->size[0];
  } else {
    z_size[0] = d_y->size[0];
  }
  z_size[1] = 6;
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != b_tmp->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != d_y->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
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
  if (b_tmp->size[0] <= d_y->size[0]) {
    z_size[0] = b_tmp->size[0];
  } else {
    z_size[0] = d_y->size[0];
  }
  z_size[1] = 6;
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != b_tmp->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != d_y->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (b_tmp->size[0] <= d_y->size[0]) {
    loop_ub = b_tmp->size[0];
  } else {
    loop_ub = d_y->size[0];
  }
  loop_ub *= 6;
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  /*  cor=(n/(n-1))*v*(mm-1)./(mm-v); */
  st.site = &rbb_emlrtRSI;
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (b_tmp->size[0] <= mm->size[0]) {
    z_size[0] = b_tmp->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  z_size[1] = 6;
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != b_tmp->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != mm->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
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
  if (b_tmp->size[0] <= mm->size[0]) {
    z_size[0] = b_tmp->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  z_size[1] = 6;
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != b_tmp->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != mm->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (b_tmp->size[0] <= mm->size[0]) {
    loop_ub = b_tmp->size[0];
  } else {
    loop_ub = mm->size[0];
  }
  loop_ub *= 6;
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = b_tmp->size[0];
  c_y->size[1] = 6;
  emxEnsureCapacity_real_T(sp, c_y, i, &ys_emlrtRTEI);
  loop_ub = b_tmp->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = v * (b_tmp->data[i] / mm->data[i]);
  }
  z_size[0] = (*(int32_T(*)[2])c_y->size)[0];
  z_size[1] = (*(int32_T(*)[2])c_y->size)[1];
  b_iv[0] = (*(int32_T(*)[2])mm->size)[0];
  b_iv[1] = (*(int32_T(*)[2])mm->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &xb_emlrtECI, (emlrtCTX)sp);
  st.site = &rbb_emlrtRSI;
  loop_ub = c_y->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] *= mm->data[i] - 1.0;
  }
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = mm->size[0];
  b_y->size[1] = 6;
  emxEnsureCapacity_real_T(&st, b_y, i, &at_emlrtRTEI);
  loop_ub = mm->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = mm->data[i] - v;
  }
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (c_y->size[0] <= b_y->size[0]) {
    z_size[0] = c_y->size[0];
  } else {
    z_size[0] = b_y->size[0];
  }
  z_size[1] = 6;
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != c_y->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != b_y->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
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
  if (c_y->size[0] <= b_y->size[0]) {
    z_size[0] = c_y->size[0];
  } else {
    z_size[0] = b_y->size[0];
  }
  z_size[1] = 6;
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != c_y->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != b_y->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (c_y->size[0] <= b_y->size[0]) {
    loop_ub = c_y->size[0];
  } else {
    loop_ub = b_y->size[0];
  }
  loop_ub *= 6;
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  loop_ub = c_y->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] /= b_y->data[i];
  }
  emxInit_real_T(&b_st, &b_b_tmp, 2, &bt_emlrtRTEI, true);
  /* cor=v*((mm.^2-1)./mm)./(mm-v); */
  /*  Minsca = matrix of the scaled minMD envelopes in each step of the search.
   */
  i = b_b_tmp->size[0] * b_b_tmp->size[1];
  b_b_tmp->size[0] = b_tmp->size[0];
  b_b_tmp->size[1] = 6;
  emxEnsureCapacity_real_T(sp, b_b_tmp, i, &bt_emlrtRTEI);
  loop_ub = b_tmp->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    b_b_tmp->data[i] = b_tmp->data[i] / d_y->data[i];
  }
  emxFree_real_T(&b_tmp);
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = mm->size[0];
  b_mm->size[1] = 6;
  emxEnsureCapacity_real_T(sp, b_mm, i, &ct_emlrtRTEI);
  loop_ub = mm->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = mm->data[i] - v;
  }
  st.site = &qbb_emlrtRSI;
  b_finv(&st, b_b_tmp, v, b_mm, b_y);
  i = a->size[0] * a->size[1];
  a->size[0] = b_y->size[0];
  a->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &dt_emlrtRTEI);
  loop_ub = b_y->size[0] * b_y->size[1];
  emxFree_real_T(&b_b_tmp);
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = b_y->data[i];
  }
  z_size[0] = (*(int32_T(*)[2])c_y->size)[0];
  z_size[1] = (*(int32_T(*)[2])c_y->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &yb_emlrtECI, (emlrtCTX)sp);
  loop_ub = c_y->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] *= a->data[i];
  }
  st.site = &qbb_emlrtRSI;
  d_sqrt(&st, c_y);
  i = quant->size[0] * quant->size[1];
  quant->size[0] = c_y->size[0];
  quant->size[1] = c_y->size[1];
  emxEnsureCapacity_real_T(sp, quant, i, &et_emlrtRTEI);
  loop_ub = c_y->size[0] * c_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    quant->data[i] = c_y->data[i];
  }
  emxFree_real_T(&c_y);
  /*  Compute Tallis correction factor based on the chi^2 distribution */
  /*  mm/n is the percentage of observations inside subset if scaled is not
   * equal to 1. */
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = mm->size[0];
  b_mm->size[1] = 6;
  emxEnsureCapacity_real_T(sp, b_mm, i, &ft_emlrtRTEI);
  loop_ub = mm->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = mm->data[i] / n;
  }
  st.site = &pbb_emlrtRSI;
  b_chi2inv(&st, b_mm, v, b_y);
  i = a->size[0] * a->size[1];
  a->size[0] = b_y->size[0];
  a->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &gt_emlrtRTEI);
  loop_ub = b_y->size[0] * b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = b_y->data[i];
  }
  st.site = &obb_emlrtRSI;
  chi2cdf(&st, a, v + 2.0, b_y);
  i = a->size[0] * a->size[1];
  a->size[0] = b_y->size[0];
  a->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &ht_emlrtRTEI);
  loop_ub = b_y->size[0] * b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = b_y->data[i];
  }
  emxFree_real_T(&b_y);
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &ac_emlrtECI, (emlrtCTX)sp);
  st.site = &nbb_emlrtRSI;
  i = d_y->size[0] * d_y->size[1];
  d_y->size[0] = mm->size[0];
  d_y->size[1] = 6;
  emxEnsureCapacity_real_T(&st, d_y, i, &it_emlrtRTEI);
  loop_ub = mm->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    d_y->data[i] = n / mm->data[i] * a->data[i];
  }
  emxFree_real_T(&a);
  emxFree_real_T(&mm);
  b_st.site = &nbb_emlrtRSI;
  d_sqrt(&b_st, d_y);
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (quant->size[0] <= d_y->size[0]) {
    z_size[0] = quant->size[0];
  } else {
    z_size[0] = d_y->size[0];
  }
  if (6 <= d_y->size[1]) {
    z_size[1] = 6;
  } else {
    z_size[1] = d_y->size[1];
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != quant->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != d_y->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
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
  if (quant->size[0] <= d_y->size[0]) {
    z_size[0] = quant->size[0];
  } else {
    z_size[0] = d_y->size[0];
  }
  if (6 <= d_y->size[1]) {
    z_size[1] = 6;
  } else {
    z_size[1] = d_y->size[1];
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != quant->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != d_y->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (quant->size[0] <= d_y->size[0]) {
    loop_ub = quant->size[0];
  } else {
    loop_ub = d_y->size[0];
  }
  if (6 <= d_y->size[1]) {
    i = 6;
  } else {
    i = d_y->size[1];
  }
  loop_ub *= i;
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  st.site = &nbb_emlrtRSI;
  b_st.site = &mbb_emlrtRSI;
  if (m->size[0] != 0) {
    result = m->size[0];
  } else if (quant->size[0] != 0) {
    result = quant->size[0];
  } else {
    result = 0;
  }
  c_st.site = &gl_emlrtRSI;
  if ((m->size[0] != result) && (m->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((quant->size[0] != result) && (quant->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (quant->size[0] != 0)) {
    csz_idx_1 = 6;
  } else {
    csz_idx_1 = 0;
  }
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = quant->size[0];
  b_mm->size[1] = 6;
  emxEnsureCapacity_real_T(sp, b_mm, i, &bt_emlrtRTEI);
  loop_ub = quant->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = quant->data[i] / d_y->data[i];
  }
  emxFree_real_T(&d_y);
  emxFree_real_T(&quant);
  i = MMDenv->size[0] * MMDenv->size[1];
  MMDenv->size[0] = result;
  MMDenv->size[1] = input_sizes_idx_1 + csz_idx_1;
  emxEnsureCapacity_real_T(sp, MMDenv, i, &jt_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < result; i1++) {
      MMDenv->data[i1] = m->data[i1];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < csz_idx_1; i++) {
    for (i1 = 0; i1 < result; i1++) {
      MMDenv->data[i1 + MMDenv->size[0] * (i + input_sizes_idx_1)] =
          b_mm->data[i1 + result * i];
    }
  }
  emxFree_real_T(&b_mm);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void b_FSMenvmmd(const emlrtStack *sp, real_T n, real_T v, real_T varargin_4,
                 emxArray_real_T *MMDenv)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_real_T *a;
  emxArray_real_T *b_mm;
  emxArray_real_T *b_tmp;
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  emxArray_real_T *d_y;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *y;
  int32_T b_iv[2];
  int32_T z_size[2];
  int32_T b_b_tmp;
  int32_T csz_idx_1;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int8_T input_sizes_idx_1;
  boolean_T empty_non_axis_sizes;
  boolean_T exitg1;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* FSMenvmmd computes the theoretical envelopes of Minimum MD outside subset
   * during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSMenvmmd')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  n :           Number of observations. Scalar. Number of observations. */
  /*                Data Types - single | double */
  /*  v :           Number of variables. Scalar. Number of variables. */
  /*                Data Types - single | double */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  init :       Point where to start monitoring required diagnostics. Scalar.
   */
  /*               Note that if bsb is supplied, init>=length(bsb). If init is
   * not */
  /*               specified it will be set equal to floor(n*0.6). */
  /*                  Example - 'init',50 */
  /*                  Data Types - double */
  /*  */
  /*  prob:        quantiles for which envelopes have */
  /*                to be computed. Vector. Vector containing 1 x k elements .
   */
  /*                The default is to produce 1 per cent, 50 per cent and 99 per
   * cent envelopes. */
  /*                  Example - 'prob',[0.05 0.95] */
  /*                  Data Types - double */
  /*  */
  /*    scaled:  It indicates how to compute the envelopes. Boolean. */
  /*                If scaled=true0 the envelopes are produced for */
  /*                scaled Mahalanobis distances (no consistency factor is */
  /*                applied) else the traditional consistency factor is applied
   */
  /*                (this is the default) */
  /*                  Example - 'scaled',false */
  /*                  Data Types - logical */
  /*  */
  /*  */
  /*  Output: */
  /*  */
  /*   MMDenv=      n-m0+1 x length(prob)+1 columns containing the envelopes */
  /*                for the requested quantiles. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob[1]; */
  /*                3rd col = envelope for quantile prob[2]; */
  /*                ...; */
  /*                (k+1) col = envelope for quantile prob[k]. */
  /*  */
  /*  See also FSMenvmmd.m, FSM.m */
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
  /* <a href="matlab: docsearchFS('FSMenvmmd')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
  /* { */
  /*     %% FSMenvmmd with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent
   * envelopes based on 10000 */
  /*     % observations and 5 explanatory variables. */
  /*     MMDenv=FSMenvmmd(10000,5); */
  /*     plot(MMDenv(:,1),MMDenv(:,2:end)) */
  /* } */
  /* { */
  /*     %% FSMenvmmd with otpional arguments. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent
   * envelopes based on 10000 */
  /*     % observations and 5 explanatory variables. The envelopes are produced
   * for */
  /*     % scaled Mahalanobis distances (no consistency factor is applied) */
  /*     MMDenv=FSMenvmmd(10000,5,'scaled',1); */
  /*     plot(MMDenv(:,1),MMDenv(:,2:end)) */
  /* } */
  /* { */
  /*     %% Order statistics and simulations envelopes . */
  /*     % In this example we compare the accuracy of the envelopes computed
   * with */
  /*     % order statistics with those which come from simulations. */
  /*  */
  /*     % Fix a seed */
  /*     state=1000; */
  /*  */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous */
  /*     % four lines with */
  /*     % randn('state', 1000); */
  /*     n=200; */
  /*     p=3; */
  /*  */
  /*  */
  /*     init=25; */
  /*     nsimul=1000; */
  /*     mmdStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         Y=randn(n,p); */
  /*         [fre]=unibiv(Y); */
  /*         %create an initial subset with the 20 observations with the lowest
   */
  /*         %Mahalanobis Distance */
  /*         fre=sortrows(fre,4); */
  /*         bs=fre(1:25,1); */
  /*         mmd = FSMmmd(Y,bs,'init',init); */
  /*         mmdStore(:,j)=mmd(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mmdStore */
  /*     mmdStore=sort(mmdStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mmd(:,1),mmdStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mmdT=FSMenvmmd(n,p,'init',init); */
  /*     line(mmdT(:,1),mmdT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  if (muDoubleScalarIsNaN(n)) {
    st.site = &ybb_emlrtRSI;
    l_error(&st);
  }
  if (muDoubleScalarIsNaN(v)) {
    st.site = &xbb_emlrtRSI;
    m_error(&st);
  }
  /*  Note that prob must be a row vector */
  /*  Check that the initial subset size is not greater than n-1 */
  if (varargin_4 > n - 1.0) {
    st.site = &wbb_emlrtRSI;
    n_error(&st);
  }
  emxInit_real_T(sp, &y, 2, &kt_emlrtRTEI, true);
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  st.site = &vbb_emlrtRSI;
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
  emxInit_real_T(&b_st, &m, 1, &qs_emlrtRTEI, true);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(sp, m, i, &qs_emlrtRTEI);
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    m->data[i] = y->data[i];
  }
  emxFree_real_T(&y);
  emxInit_real_T(sp, &mm, 2, &rs_emlrtRTEI, true);
  emxInit_real_T(sp, &b_y, 2, &xs_emlrtRTEI, true);
  /*  mm = fwd search index replicated lp times. */
  st.site = &ubb_emlrtRSI;
  b_repmat(&st, m, 1.0, b_y);
  i = mm->size[0] * mm->size[1];
  mm->size[0] = b_y->size[0];
  mm->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, mm, i, &rs_emlrtRTEI);
  loop_ub = b_y->size[0] * b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = b_y->data[i];
  }
  emxInit_real_T(sp, &a, 2, &gt_emlrtRTEI, true);
  /*  finv finds the inverse of the F distribution. */
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &ss_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = n - mm->data[i];
  }
  emxInit_real_T(sp, &b_tmp, 2, &ts_emlrtRTEI, true);
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, b_tmp, i, &ts_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_tmp->data[i] = mm->data[i] + 1.0;
  }
  emxInit_real_T(sp, &c_y, 2, &at_emlrtRTEI, true);
  emxInit_real_T(sp, &r, 2, &st_emlrtRTEI, true);
  st.site = &tbb_emlrtRSI;
  d_repmat(&st, m->size[0], r);
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = a->size[0];
  c_y->size[1] = a->size[1];
  emxEnsureCapacity_real_T(sp, c_y, i, &us_emlrtRTEI);
  loop_ub = a->size[0] * a->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = 2.0 * a->data[i];
  }
  emxInit_real_T(sp, &b_mm, 2, &ct_emlrtRTEI, true);
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = b_tmp->size[0];
  b_mm->size[1] = b_tmp->size[1];
  emxEnsureCapacity_real_T(sp, b_mm, i, &us_emlrtRTEI);
  loop_ub = b_tmp->size[0] * b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = 2.0 * b_tmp->data[i];
  }
  emxInit_real_T(sp, &quant, 2, &vs_emlrtRTEI, true);
  st.site = &tbb_emlrtRSI;
  c_finv(&st, r, c_y, b_mm, b_y);
  i = quant->size[0] * quant->size[1];
  quant->size[0] = b_y->size[0];
  quant->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, quant, i, &vs_emlrtRTEI);
  loop_ub = b_y->size[0] * b_y->size[1];
  emxFree_real_T(&r);
  for (i = 0; i < loop_ub; i++) {
    quant->data[i] = b_y->data[i];
  }
  /*  from the equivalence with the incomplete beta distribution. */
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])quant->size)[0];
  b_iv[1] = (*(int32_T(*)[2])quant->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &vb_emlrtECI, (emlrtCTX)sp);
  loop_ub = a->size[0] * a->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] *= quant->data[i];
  }
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &wb_emlrtECI, (emlrtCTX)sp);
  st.site = &sbb_emlrtRSI;
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = mm->size[0];
  b_y->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, b_y, i, &xs_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = (mm->data[i] + 1.0) + a->data[i];
  }
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
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
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != b_tmp->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != b_y->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
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
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != b_tmp->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != b_y->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
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
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  /*  cor=(n/(n-1))*v*(mm-1)./(mm-v); */
  st.site = &rbb_emlrtRSI;
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (b_tmp->size[0] <= mm->size[0]) {
    z_size[0] = b_tmp->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  if (b_tmp->size[1] <= mm->size[1]) {
    z_size[1] = b_tmp->size[1];
  } else {
    z_size[1] = 0;
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != b_tmp->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != mm->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
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
  if (b_tmp->size[0] <= mm->size[0]) {
    z_size[0] = b_tmp->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  if (b_tmp->size[1] <= mm->size[1]) {
    z_size[1] = b_tmp->size[1];
  } else {
    z_size[1] = 0;
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != b_tmp->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != mm->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (b_tmp->size[0] <= mm->size[0]) {
    loop_ub = b_tmp->size[0];
  } else {
    loop_ub = mm->size[0];
  }
  if (b_tmp->size[1] <= mm->size[1]) {
    b_b_tmp = b_tmp->size[1];
  } else {
    b_b_tmp = 0;
  }
  loop_ub *= b_b_tmp;
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  emxInit_real_T(&g_st, &d_y, 2, &lt_emlrtRTEI, true);
  i = d_y->size[0] * d_y->size[1];
  d_y->size[0] = b_tmp->size[0];
  d_y->size[1] = b_tmp->size[1];
  emxEnsureCapacity_real_T(sp, d_y, i, &ys_emlrtRTEI);
  loop_ub = b_tmp->size[0] * b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    d_y->data[i] = v * (b_tmp->data[i] / mm->data[i]);
  }
  z_size[0] = (*(int32_T(*)[2])d_y->size)[0];
  z_size[1] = (*(int32_T(*)[2])d_y->size)[1];
  b_iv[0] = (*(int32_T(*)[2])mm->size)[0];
  b_iv[1] = (*(int32_T(*)[2])mm->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &xb_emlrtECI, (emlrtCTX)sp);
  st.site = &rbb_emlrtRSI;
  loop_ub = d_y->size[0] * d_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    d_y->data[i] *= mm->data[i] - 1.0;
  }
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = mm->size[0];
  c_y->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, c_y, i, &at_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = mm->data[i] - v;
  }
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (d_y->size[0] <= c_y->size[0]) {
    z_size[0] = d_y->size[0];
  } else {
    z_size[0] = c_y->size[0];
  }
  if (d_y->size[1] <= c_y->size[1]) {
    z_size[1] = d_y->size[1];
  } else {
    z_size[1] = 0;
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != d_y->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != c_y->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
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
  if (d_y->size[0] <= c_y->size[0]) {
    z_size[0] = d_y->size[0];
  } else {
    z_size[0] = c_y->size[0];
  }
  if (d_y->size[1] <= c_y->size[1]) {
    z_size[1] = d_y->size[1];
  } else {
    z_size[1] = 0;
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != d_y->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != c_y->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (d_y->size[0] <= c_y->size[0]) {
    loop_ub = d_y->size[0];
  } else {
    loop_ub = c_y->size[0];
  }
  if (d_y->size[1] <= c_y->size[1]) {
    b_b_tmp = d_y->size[1];
  } else {
    b_b_tmp = 0;
  }
  loop_ub *= b_b_tmp;
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  loop_ub = d_y->size[0] * d_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    d_y->data[i] /= c_y->data[i];
  }
  /* cor=v*((mm.^2-1)./mm)./(mm-v); */
  /*  Minsca = matrix of the scaled minMD envelopes in each step of the search.
   */
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = b_tmp->size[0];
  c_y->size[1] = b_tmp->size[1];
  emxEnsureCapacity_real_T(sp, c_y, i, &bt_emlrtRTEI);
  loop_ub = b_tmp->size[0] * b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = b_tmp->data[i] / b_y->data[i];
  }
  emxFree_real_T(&b_tmp);
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = mm->size[0];
  b_mm->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, b_mm, i, &ct_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = mm->data[i] - v;
  }
  st.site = &qbb_emlrtRSI;
  b_finv(&st, c_y, v, b_mm, b_y);
  i = a->size[0] * a->size[1];
  a->size[0] = b_y->size[0];
  a->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &dt_emlrtRTEI);
  loop_ub = b_y->size[0] * b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = b_y->data[i];
  }
  z_size[0] = (*(int32_T(*)[2])d_y->size)[0];
  z_size[1] = (*(int32_T(*)[2])d_y->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &yb_emlrtECI, (emlrtCTX)sp);
  loop_ub = d_y->size[0] * d_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    d_y->data[i] *= a->data[i];
  }
  st.site = &qbb_emlrtRSI;
  d_sqrt(&st, d_y);
  i = quant->size[0] * quant->size[1];
  quant->size[0] = d_y->size[0];
  quant->size[1] = d_y->size[1];
  emxEnsureCapacity_real_T(sp, quant, i, &et_emlrtRTEI);
  loop_ub = d_y->size[0] * d_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    quant->data[i] = d_y->data[i];
  }
  emxFree_real_T(&d_y);
  /*  Compute Tallis correction factor based on the chi^2 distribution */
  /*  mm/n is the percentage of observations inside subset if scaled is not
   * equal to 1. */
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = mm->size[0];
  b_mm->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, b_mm, i, &ft_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = mm->data[i] / n;
  }
  st.site = &pbb_emlrtRSI;
  b_chi2inv(&st, b_mm, v, b_y);
  i = a->size[0] * a->size[1];
  a->size[0] = b_y->size[0];
  a->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &gt_emlrtRTEI);
  loop_ub = b_y->size[0] * b_y->size[1];
  emxFree_real_T(&b_mm);
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = b_y->data[i];
  }
  st.site = &obb_emlrtRSI;
  chi2cdf(&st, a, v + 2.0, b_y);
  i = a->size[0] * a->size[1];
  a->size[0] = b_y->size[0];
  a->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &ht_emlrtRTEI);
  loop_ub = b_y->size[0] * b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = b_y->data[i];
  }
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &ac_emlrtECI, (emlrtCTX)sp);
  st.site = &nbb_emlrtRSI;
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = mm->size[0];
  b_y->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, b_y, i, &it_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = n / mm->data[i] * a->data[i];
  }
  emxFree_real_T(&a);
  emxFree_real_T(&mm);
  b_st.site = &nbb_emlrtRSI;
  d_sqrt(&b_st, b_y);
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (quant->size[0] <= b_y->size[0]) {
    z_size[0] = quant->size[0];
  } else {
    z_size[0] = b_y->size[0];
  }
  if (quant->size[1] <= b_y->size[1]) {
    z_size[1] = quant->size[1];
  } else {
    z_size[1] = 0;
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != quant->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != b_y->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
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
  if (quant->size[0] <= b_y->size[0]) {
    z_size[0] = quant->size[0];
  } else {
    z_size[0] = b_y->size[0];
  }
  if (quant->size[1] <= b_y->size[1]) {
    z_size[1] = quant->size[1];
  } else {
    z_size[1] = 0;
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != quant->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != b_y->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (quant->size[0] <= b_y->size[0]) {
    loop_ub = quant->size[0];
  } else {
    loop_ub = b_y->size[0];
  }
  if (quant->size[1] <= b_y->size[1]) {
    b_b_tmp = quant->size[1];
  } else {
    b_b_tmp = 0;
  }
  loop_ub *= b_b_tmp;
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  st.site = &nbb_emlrtRSI;
  b_st.site = &mbb_emlrtRSI;
  if (m->size[0] != 0) {
    b_b_tmp = m->size[0];
  } else if ((quant->size[0] != 0) && (quant->size[1] != 0)) {
    b_b_tmp = quant->size[0];
  } else {
    b_b_tmp = 0;
    if (quant->size[0] > 0) {
      b_b_tmp = quant->size[0];
    }
  }
  c_st.site = &gl_emlrtRSI;
  if ((m->size[0] != b_b_tmp) && (m->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((quant->size[0] != b_b_tmp) &&
      ((quant->size[0] != 0) && (quant->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
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
      ((quant->size[0] != 0) && (quant->size[1] != 0))) {
    csz_idx_1 = quant->size[1];
  } else {
    csz_idx_1 = 0;
  }
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = quant->size[0];
  c_y->size[1] = quant->size[1];
  emxEnsureCapacity_real_T(sp, c_y, i, &bt_emlrtRTEI);
  loop_ub = quant->size[0] * quant->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = quant->data[i] / b_y->data[i];
  }
  emxFree_real_T(&b_y);
  emxFree_real_T(&quant);
  i = MMDenv->size[0] * MMDenv->size[1];
  MMDenv->size[0] = b_b_tmp;
  MMDenv->size[1] = input_sizes_idx_1 + csz_idx_1;
  emxEnsureCapacity_real_T(sp, MMDenv, i, &jt_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < b_b_tmp; i1++) {
      MMDenv->data[i1] = m->data[i1];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < csz_idx_1; i++) {
    for (i1 = 0; i1 < b_b_tmp; i1++) {
      MMDenv->data[i1 + MMDenv->size[0] * input_sizes_idx_1] = c_y->data[i1];
    }
  }
  emxFree_real_T(&c_y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void c_FSMenvmmd(const emlrtStack *sp, real_T n, real_T v, real_T varargin_4,
                 emxArray_real_T *MMDenv)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_real_T *b_b_tmp;
  emxArray_real_T *b_mm;
  emxArray_real_T *b_tmp;
  emxArray_real_T *c_b_tmp;
  emxArray_real_T *cor;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *y;
  real_T options_prob_data[18];
  real_T b_options_prob_data[16];
  real_T tmp_data[4];
  int32_T b_iv[2];
  int32_T z_size[2];
  int32_T csz_idx_1;
  int32_T d_b_tmp;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int8_T input_sizes_idx_1;
  boolean_T empty_non_axis_sizes;
  boolean_T exitg1;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* FSMenvmmd computes the theoretical envelopes of Minimum MD outside subset
   * during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSMenvmmd')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  n :           Number of observations. Scalar. Number of observations. */
  /*                Data Types - single | double */
  /*  v :           Number of variables. Scalar. Number of variables. */
  /*                Data Types - single | double */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  init :       Point where to start monitoring required diagnostics. Scalar.
   */
  /*               Note that if bsb is supplied, init>=length(bsb). If init is
   * not */
  /*               specified it will be set equal to floor(n*0.6). */
  /*                  Example - 'init',50 */
  /*                  Data Types - double */
  /*  */
  /*  prob:        quantiles for which envelopes have */
  /*                to be computed. Vector. Vector containing 1 x k elements .
   */
  /*                The default is to produce 1 per cent, 50 per cent and 99 per
   * cent envelopes. */
  /*                  Example - 'prob',[0.05 0.95] */
  /*                  Data Types - double */
  /*  */
  /*    scaled:  It indicates how to compute the envelopes. Boolean. */
  /*                If scaled=true0 the envelopes are produced for */
  /*                scaled Mahalanobis distances (no consistency factor is */
  /*                applied) else the traditional consistency factor is applied
   */
  /*                (this is the default) */
  /*                  Example - 'scaled',false */
  /*                  Data Types - logical */
  /*  */
  /*  */
  /*  Output: */
  /*  */
  /*   MMDenv=      n-m0+1 x length(prob)+1 columns containing the envelopes */
  /*                for the requested quantiles. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob[1]; */
  /*                3rd col = envelope for quantile prob[2]; */
  /*                ...; */
  /*                (k+1) col = envelope for quantile prob[k]. */
  /*  */
  /*  See also FSMenvmmd.m, FSM.m */
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
  /* <a href="matlab: docsearchFS('FSMenvmmd')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
  /* { */
  /*     %% FSMenvmmd with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent
   * envelopes based on 10000 */
  /*     % observations and 5 explanatory variables. */
  /*     MMDenv=FSMenvmmd(10000,5); */
  /*     plot(MMDenv(:,1),MMDenv(:,2:end)) */
  /* } */
  /* { */
  /*     %% FSMenvmmd with otpional arguments. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent
   * envelopes based on 10000 */
  /*     % observations and 5 explanatory variables. The envelopes are produced
   * for */
  /*     % scaled Mahalanobis distances (no consistency factor is applied) */
  /*     MMDenv=FSMenvmmd(10000,5,'scaled',1); */
  /*     plot(MMDenv(:,1),MMDenv(:,2:end)) */
  /* } */
  /* { */
  /*     %% Order statistics and simulations envelopes . */
  /*     % In this example we compare the accuracy of the envelopes computed
   * with */
  /*     % order statistics with those which come from simulations. */
  /*  */
  /*     % Fix a seed */
  /*     state=1000; */
  /*  */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous */
  /*     % four lines with */
  /*     % randn('state', 1000); */
  /*     n=200; */
  /*     p=3; */
  /*  */
  /*  */
  /*     init=25; */
  /*     nsimul=1000; */
  /*     mmdStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         Y=randn(n,p); */
  /*         [fre]=unibiv(Y); */
  /*         %create an initial subset with the 20 observations with the lowest
   */
  /*         %Mahalanobis Distance */
  /*         fre=sortrows(fre,4); */
  /*         bs=fre(1:25,1); */
  /*         mmd = FSMmmd(Y,bs,'init',init); */
  /*         mmdStore(:,j)=mmd(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mmdStore */
  /*     mmdStore=sort(mmdStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mmd(:,1),mmdStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mmdT=FSMenvmmd(n,p,'init',init); */
  /*     line(mmdT(:,1),mmdT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  if (muDoubleScalarIsNaN(n)) {
    st.site = &ybb_emlrtRSI;
    l_error(&st);
  }
  if (muDoubleScalarIsNaN(v)) {
    st.site = &xbb_emlrtRSI;
    m_error(&st);
  }
  /*  Note that prob must be a row vector */
  options_prob_data[0] = 0.99;
  options_prob_data[1] = 0.999;
  options_prob_data[2] = 0.01;
  options_prob_data[3] = 0.5;
  /*  Check that the initial subset size is not greater than n-1 */
  if (varargin_4 > n - 1.0) {
    st.site = &wbb_emlrtRSI;
    n_error(&st);
  }
  emxInit_real_T(sp, &y, 2, &kt_emlrtRTEI, true);
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  st.site = &vbb_emlrtRSI;
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
  emxInit_real_T(&b_st, &m, 1, &qs_emlrtRTEI, true);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(sp, m, i, &qs_emlrtRTEI);
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    m->data[i] = y->data[i];
  }
  emxFree_real_T(&y);
  emxInit_real_T(sp, &mm, 2, &rs_emlrtRTEI, true);
  emxInit_real_T(sp, &b_tmp, 2, &ss_emlrtRTEI, true);
  /*  mm = fwd search index replicated lp times. */
  st.site = &ubb_emlrtRSI;
  b_repmat(&st, m, 4.0, mm);
  /*  finv finds the inverse of the F distribution. */
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, b_tmp, i, &ss_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_tmp->data[i] = n - mm->data[i];
  }
  emxInit_real_T(sp, &b_b_tmp, 2, &ts_emlrtRTEI, true);
  i = b_b_tmp->size[0] * b_b_tmp->size[1];
  b_b_tmp->size[0] = mm->size[0];
  b_b_tmp->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, b_b_tmp, i, &ts_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_b_tmp->data[i] = mm->data[i] + 1.0;
  }
  for (i = 0; i < 4; i++) {
    b_options_prob_data[i] = options_prob_data[i];
  }
  z_size[0] = 1;
  z_size[1] = 4;
  for (i = 0; i < 4; i++) {
    tmp_data[i] = 1.0 - b_options_prob_data[i];
  }
  emxInit_real_T(sp, &r, 2, &st_emlrtRTEI, true);
  emxInit_real_T(sp, &b_mm, 2, &ct_emlrtRTEI, true);
  st.site = &tbb_emlrtRSI;
  c_repmat(&st, tmp_data, z_size, m->size[0], r);
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = b_tmp->size[0];
  b_mm->size[1] = b_tmp->size[1];
  emxEnsureCapacity_real_T(sp, b_mm, i, &us_emlrtRTEI);
  loop_ub = b_tmp->size[0] * b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = 2.0 * b_tmp->data[i];
  }
  emxInit_real_T(sp, &c_b_tmp, 2, &bt_emlrtRTEI, true);
  i = c_b_tmp->size[0] * c_b_tmp->size[1];
  c_b_tmp->size[0] = b_b_tmp->size[0];
  c_b_tmp->size[1] = b_b_tmp->size[1];
  emxEnsureCapacity_real_T(sp, c_b_tmp, i, &us_emlrtRTEI);
  loop_ub = b_b_tmp->size[0] * b_b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_b_tmp->data[i] = 2.0 * b_b_tmp->data[i];
  }
  emxInit_real_T(sp, &quant, 2, &vs_emlrtRTEI, true);
  st.site = &tbb_emlrtRSI;
  c_finv(&st, r, b_mm, c_b_tmp, quant);
  /*  from the equivalence with the incomplete beta distribution. */
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])quant->size)[0];
  b_iv[1] = (*(int32_T(*)[2])quant->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &vb_emlrtECI, (emlrtCTX)sp);
  loop_ub = b_tmp->size[0] * b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_tmp->data[i] *= quant->data[i];
  }
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])b_tmp->size)[0];
  b_iv[1] = (*(int32_T(*)[2])b_tmp->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &wb_emlrtECI, (emlrtCTX)sp);
  st.site = &sbb_emlrtRSI;
  loop_ub = mm->size[0] * mm->size[1];
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, b_tmp, i, &xs_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    b_tmp->data[i] += mm->data[i] + 1.0;
  }
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (b_b_tmp->size[0] <= b_tmp->size[0]) {
    z_size[0] = b_b_tmp->size[0];
  } else {
    z_size[0] = b_tmp->size[0];
  }
  if (b_b_tmp->size[1] <= b_tmp->size[1]) {
    z_size[1] = b_b_tmp->size[1];
  } else {
    z_size[1] = b_tmp->size[1];
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != b_b_tmp->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != b_tmp->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
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
  if (b_b_tmp->size[0] <= b_tmp->size[0]) {
    z_size[0] = b_b_tmp->size[0];
  } else {
    z_size[0] = b_tmp->size[0];
  }
  if (b_b_tmp->size[1] <= b_tmp->size[1]) {
    z_size[1] = b_b_tmp->size[1];
  } else {
    z_size[1] = b_tmp->size[1];
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != b_b_tmp->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != b_tmp->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (b_b_tmp->size[0] <= b_tmp->size[0]) {
    loop_ub = b_b_tmp->size[0];
  } else {
    loop_ub = b_tmp->size[0];
  }
  if (b_b_tmp->size[1] <= b_tmp->size[1]) {
    d_b_tmp = b_b_tmp->size[1];
  } else {
    d_b_tmp = b_tmp->size[1];
  }
  loop_ub *= d_b_tmp;
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  /*  cor=(n/(n-1))*v*(mm-1)./(mm-v); */
  st.site = &rbb_emlrtRSI;
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (b_b_tmp->size[0] <= mm->size[0]) {
    z_size[0] = b_b_tmp->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  if (b_b_tmp->size[1] <= mm->size[1]) {
    z_size[1] = b_b_tmp->size[1];
  } else {
    z_size[1] = mm->size[1];
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != b_b_tmp->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != mm->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
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
  if (b_b_tmp->size[0] <= mm->size[0]) {
    z_size[0] = b_b_tmp->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  if (b_b_tmp->size[1] <= mm->size[1]) {
    z_size[1] = b_b_tmp->size[1];
  } else {
    z_size[1] = mm->size[1];
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != b_b_tmp->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != mm->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (b_b_tmp->size[0] <= mm->size[0]) {
    loop_ub = b_b_tmp->size[0];
  } else {
    loop_ub = mm->size[0];
  }
  if (b_b_tmp->size[1] <= mm->size[1]) {
    d_b_tmp = b_b_tmp->size[1];
  } else {
    d_b_tmp = mm->size[1];
  }
  loop_ub *= d_b_tmp;
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  emxInit_real_T(&g_st, &cor, 2, &tt_emlrtRTEI, true);
  i = cor->size[0] * cor->size[1];
  cor->size[0] = b_b_tmp->size[0];
  cor->size[1] = b_b_tmp->size[1];
  emxEnsureCapacity_real_T(sp, cor, i, &lt_emlrtRTEI);
  loop_ub = b_b_tmp->size[0] * b_b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    cor->data[i] = v * (b_b_tmp->data[i] / mm->data[i]);
  }
  z_size[0] = (*(int32_T(*)[2])cor->size)[0];
  z_size[1] = (*(int32_T(*)[2])cor->size)[1];
  b_iv[0] = (*(int32_T(*)[2])mm->size)[0];
  b_iv[1] = (*(int32_T(*)[2])mm->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &xb_emlrtECI, (emlrtCTX)sp);
  st.site = &rbb_emlrtRSI;
  loop_ub = cor->size[0] * cor->size[1];
  for (i = 0; i < loop_ub; i++) {
    cor->data[i] *= mm->data[i] - 1.0;
  }
  i = quant->size[0] * quant->size[1];
  quant->size[0] = mm->size[0];
  quant->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, quant, i, &at_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    quant->data[i] = mm->data[i] - v;
  }
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (cor->size[0] <= quant->size[0]) {
    z_size[0] = cor->size[0];
  } else {
    z_size[0] = quant->size[0];
  }
  if (cor->size[1] <= quant->size[1]) {
    z_size[1] = cor->size[1];
  } else {
    z_size[1] = quant->size[1];
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != cor->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != quant->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
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
  if (cor->size[0] <= quant->size[0]) {
    z_size[0] = cor->size[0];
  } else {
    z_size[0] = quant->size[0];
  }
  if (cor->size[1] <= quant->size[1]) {
    z_size[1] = cor->size[1];
  } else {
    z_size[1] = quant->size[1];
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != cor->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != quant->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (cor->size[0] <= quant->size[0]) {
    loop_ub = cor->size[0];
  } else {
    loop_ub = quant->size[0];
  }
  if (cor->size[1] <= quant->size[1]) {
    d_b_tmp = cor->size[1];
  } else {
    d_b_tmp = quant->size[1];
  }
  loop_ub *= d_b_tmp;
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  loop_ub = cor->size[0] * cor->size[1];
  for (i = 0; i < loop_ub; i++) {
    cor->data[i] /= quant->data[i];
  }
  /* cor=v*((mm.^2-1)./mm)./(mm-v); */
  /*  Minsca = matrix of the scaled minMD envelopes in each step of the search.
   */
  i = c_b_tmp->size[0] * c_b_tmp->size[1];
  c_b_tmp->size[0] = b_b_tmp->size[0];
  c_b_tmp->size[1] = b_b_tmp->size[1];
  emxEnsureCapacity_real_T(sp, c_b_tmp, i, &bt_emlrtRTEI);
  loop_ub = b_b_tmp->size[0] * b_b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_b_tmp->data[i] = b_b_tmp->data[i] / b_tmp->data[i];
  }
  emxFree_real_T(&b_b_tmp);
  emxFree_real_T(&b_tmp);
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = mm->size[0];
  b_mm->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, b_mm, i, &ct_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = mm->data[i] - v;
  }
  st.site = &qbb_emlrtRSI;
  b_finv(&st, c_b_tmp, v, b_mm, r);
  z_size[0] = (*(int32_T(*)[2])cor->size)[0];
  z_size[1] = (*(int32_T(*)[2])cor->size)[1];
  b_iv[0] = (*(int32_T(*)[2])r->size)[0];
  b_iv[1] = (*(int32_T(*)[2])r->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &yb_emlrtECI, (emlrtCTX)sp);
  loop_ub = cor->size[0] * cor->size[1];
  emxFree_real_T(&c_b_tmp);
  for (i = 0; i < loop_ub; i++) {
    cor->data[i] *= r->data[i];
  }
  st.site = &qbb_emlrtRSI;
  d_sqrt(&st, cor);
  /*  Compute Tallis correction factor based on the chi^2 distribution */
  /*  mm/n is the percentage of observations inside subset if scaled is not
   * equal to 1. */
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = mm->size[0];
  b_mm->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, b_mm, i, &ft_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = mm->data[i] / n;
  }
  st.site = &pbb_emlrtRSI;
  b_chi2inv(&st, b_mm, v, quant);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = n / mm->data[i];
  }
  st.site = &obb_emlrtRSI;
  chi2cdf(&st, quant, v + 2.0, r);
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])r->size)[0];
  b_iv[1] = (*(int32_T(*)[2])r->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &ac_emlrtECI, (emlrtCTX)sp);
  st.site = &nbb_emlrtRSI;
  loop_ub = mm->size[0] * mm->size[1];
  emxFree_real_T(&quant);
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] *= r->data[i];
  }
  emxFree_real_T(&r);
  b_st.site = &nbb_emlrtRSI;
  d_sqrt(&b_st, mm);
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (cor->size[0] <= mm->size[0]) {
    z_size[0] = cor->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  if (cor->size[1] <= mm->size[1]) {
    z_size[1] = cor->size[1];
  } else {
    z_size[1] = mm->size[1];
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != cor->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != mm->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
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
  if (cor->size[0] <= mm->size[0]) {
    z_size[0] = cor->size[0];
  } else {
    z_size[0] = mm->size[0];
  }
  if (cor->size[1] <= mm->size[1]) {
    z_size[1] = cor->size[1];
  } else {
    z_size[1] = mm->size[1];
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != cor->size[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (p) {
    p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != mm->size[loop_ub]) {
        p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (cor->size[0] <= mm->size[0]) {
    loop_ub = cor->size[0];
  } else {
    loop_ub = mm->size[0];
  }
  if (cor->size[1] <= mm->size[1]) {
    d_b_tmp = cor->size[1];
  } else {
    d_b_tmp = mm->size[1];
  }
  loop_ub *= d_b_tmp;
  g_st.site = &qd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  st.site = &nbb_emlrtRSI;
  b_st.site = &mbb_emlrtRSI;
  if (m->size[0] != 0) {
    d_b_tmp = m->size[0];
  } else if ((cor->size[0] != 0) && (cor->size[1] != 0)) {
    d_b_tmp = cor->size[0];
  } else {
    d_b_tmp = 0;
    if (cor->size[0] > 0) {
      d_b_tmp = cor->size[0];
    }
  }
  c_st.site = &gl_emlrtRSI;
  if ((m->size[0] != d_b_tmp) && (m->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((cor->size[0] != d_b_tmp) &&
      ((cor->size[0] != 0) && (cor->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (d_b_tmp == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || ((cor->size[0] != 0) && (cor->size[1] != 0))) {
    csz_idx_1 = cor->size[1];
  } else {
    csz_idx_1 = 0;
  }
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = cor->size[0];
  b_mm->size[1] = cor->size[1];
  emxEnsureCapacity_real_T(sp, b_mm, i, &bt_emlrtRTEI);
  loop_ub = cor->size[0] * cor->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = cor->data[i] / mm->data[i];
  }
  emxFree_real_T(&cor);
  emxFree_real_T(&mm);
  i = MMDenv->size[0] * MMDenv->size[1];
  MMDenv->size[0] = d_b_tmp;
  MMDenv->size[1] = input_sizes_idx_1 + csz_idx_1;
  emxEnsureCapacity_real_T(sp, MMDenv, i, &jt_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < d_b_tmp; i1++) {
      MMDenv->data[i1] = m->data[i1];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < csz_idx_1; i++) {
    for (i1 = 0; i1 < d_b_tmp; i1++) {
      MMDenv->data[i1 + MMDenv->size[0] * (i + input_sizes_idx_1)] =
          b_mm->data[i1 + d_b_tmp * i];
    }
  }
  emxFree_real_T(&b_mm);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (FSMenvmmd.c) */
