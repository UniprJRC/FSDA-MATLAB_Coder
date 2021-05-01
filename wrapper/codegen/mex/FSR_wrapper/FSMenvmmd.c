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
static emlrtRSInfo gbb_emlrtRSI = {
    227,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo hbb_emlrtRSI = {
    224,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo ibb_emlrtRSI = {
    223,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo jbb_emlrtRSI = {
    215,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo kbb_emlrtRSI = {
    211,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo lbb_emlrtRSI = {
    207,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo mbb_emlrtRSI = {
    203,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo nbb_emlrtRSI = {
    200,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo obb_emlrtRSI = {
    196,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo pbb_emlrtRSI = {
    180,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo qbb_emlrtRSI = {
    143,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtRSInfo rbb_emlrtRSI = {
    139,                                                   /* lineNo */
    "FSMenvmmd",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pathName */
};

static emlrtECInfo vb_emlrtECI = {
    2,                                                     /* nDims */
    207,                                                   /* lineNo */
    17,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtECInfo wb_emlrtECI = {
    2,                                                     /* nDims */
    207,                                                   /* lineNo */
    12,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtECInfo xb_emlrtECI = {
    2,                                                     /* nDims */
    211,                                                   /* lineNo */
    5,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtECInfo yb_emlrtECI = {
    2,                                                     /* nDims */
    215,                                                   /* lineNo */
    14,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtECInfo ac_emlrtECI = {
    2,                                                     /* nDims */
    224,                                                   /* lineNo */
    10,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo sr_emlrtRTEI = {
    196,                                                   /* lineNo */
    1,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo tr_emlrtRTEI = {
    200,                                                   /* lineNo */
    1,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo ur_emlrtRTEI = {
    203,                                                   /* lineNo */
    33,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo vr_emlrtRTEI = {
    203,                                                   /* lineNo */
    42,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo xr_emlrtRTEI = {
    203,                                                   /* lineNo */
    1,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo yr_emlrtRTEI = {
    207,                                                   /* lineNo */
    17,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo as_emlrtRTEI = {
    207,                                                   /* lineNo */
    12,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo cs_emlrtRTEI = {
    211,                                                   /* lineNo */
    30,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo ds_emlrtRTEI = {
    215,                                                   /* lineNo */
    24,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo es_emlrtRTEI = {
    215,                                                   /* lineNo */
    29,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo fs_emlrtRTEI = {
    215,                                                   /* lineNo */
    19,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo gs_emlrtRTEI = {
    215,                                                   /* lineNo */
    1,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo hs_emlrtRTEI = {
    223,                                                   /* lineNo */
    15,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo is_emlrtRTEI = {
    223,                                                   /* lineNo */
    5,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo js_emlrtRTEI = {
    224,                                                   /* lineNo */
    20,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo ks_emlrtRTEI = {
    227,                                                   /* lineNo */
    19,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo ms_emlrtRTEI = {
    227,                                                   /* lineNo */
    1,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo ns_emlrtRTEI = {
    196,                                                   /* lineNo */
    5,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo os_emlrtRTEI = {
    211,                                                   /* lineNo */
    5,                                                     /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo vs_emlrtRTEI = {
    203,                                                   /* lineNo */
    12,                                                    /* colNo */
    "FSMenvmmd",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMenvmmd.m" /* pName */
};

static emlrtRTEInfo ws_emlrtRTEI = {
    1,                                                     /* lineNo */
    21,                                                    /* colNo */
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
  emxArray_real_T *b_quant;
  emxArray_real_T *b_tmp;
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  emxArray_real_T *d_y;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
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
  /*    scaled:  It indicates how to compute the envelopes. Scalar. */
  /*                If scaled>0 the envelopes are produced for */
  /*                scaled Mahalanobis distances (no consistency factor is */
  /*                applied) else the traditional consistency factor is applied
   */
  /*                (this is the default) */
  /*                  Example - 'scaled',0 */
  /*                  Data Types - double */
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
    st.site = &rbb_emlrtRSI;
    l_error(&st);
  }
  if (muDoubleScalarIsNaN(v)) {
    st.site = &qbb_emlrtRSI;
    m_error(&st);
  }
  /*  Note that prob must be a row vector */
  for (i = 0; i < 6; i++) {
    options_prob_data[i] = varargin_2[i];
  }
  /*  Check that the initial subset size is not greater than n-1 */
  if (varargin_4 > n - 1.0) {
    st.site = &pbb_emlrtRSI;
    n_error(&st);
  }
  emxInit_real_T(sp, &y, 2, &ns_emlrtRTEI, true);
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  st.site = &obb_emlrtRSI;
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
  emxInit_real_T(&b_st, &m, 1, &sr_emlrtRTEI, true);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(sp, m, i, &sr_emlrtRTEI);
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    m->data[i] = y->data[i];
  }
  emxFree_real_T(&y);
  emxInit_real_T(sp, &mm, 2, &tr_emlrtRTEI, true);
  emxInit_real_T(sp, &b_y, 2, &os_emlrtRTEI, true);
  /*  mm = fwd search index replicated lp times. */
  st.site = &nbb_emlrtRSI;
  b_repmat(&st, m, 6.0, b_y);
  i = mm->size[0] * mm->size[1];
  mm->size[0] = b_y->size[0];
  mm->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, mm, i, &tr_emlrtRTEI);
  loop_ub = b_y->size[0] * b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = b_y->data[i];
  }
  emxInit_real_T(sp, &a, 2, &is_emlrtRTEI, true);
  /*  finv finds the inverse of the F distribution. */
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = 6;
  emxEnsureCapacity_real_T(sp, a, i, &ur_emlrtRTEI);
  loop_ub = mm->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = n - mm->data[i];
  }
  emxInit_real_T(sp, &b_tmp, 2, &vr_emlrtRTEI, true);
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = 6;
  emxEnsureCapacity_real_T(sp, b_tmp, i, &vr_emlrtRTEI);
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
  emxInit_real_T(sp, &quant, 2, &ls_emlrtRTEI, true);
  st.site = &mbb_emlrtRSI;
  c_repmat(&st, tmp_data, z_size, m->size[0], b_y);
  i = quant->size[0] * quant->size[1];
  quant->size[0] = a->size[0];
  quant->size[1] = 6;
  emxEnsureCapacity_real_T(sp, quant, i, &wr_emlrtRTEI);
  loop_ub = a->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    quant->data[i] = 2.0 * a->data[i];
  }
  emxInit_real_T(sp, &c_y, 2, &as_emlrtRTEI, true);
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = b_tmp->size[0];
  c_y->size[1] = 6;
  emxEnsureCapacity_real_T(sp, c_y, i, &wr_emlrtRTEI);
  loop_ub = b_tmp->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = 2.0 * b_tmp->data[i];
  }
  emxInit_real_T(sp, &b_quant, 2, &xr_emlrtRTEI, true);
  emxInit_real_T(sp, &d_y, 2, &cs_emlrtRTEI, true);
  st.site = &mbb_emlrtRSI;
  c_finv(&st, b_y, quant, c_y, d_y);
  i = b_quant->size[0] * b_quant->size[1];
  b_quant->size[0] = d_y->size[0];
  b_quant->size[1] = d_y->size[1];
  emxEnsureCapacity_real_T(sp, b_quant, i, &xr_emlrtRTEI);
  loop_ub = d_y->size[0] * d_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_quant->data[i] = d_y->data[i];
  }
  /*  from the equivalence with the incomplete beta distribution. */
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])b_quant->size)[0];
  b_iv[1] = (*(int32_T(*)[2])b_quant->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &vb_emlrtECI, (emlrtCTX)sp);
  loop_ub = a->size[0] * 6;
  i = a->size[0] * a->size[1];
  a->size[1] = 6;
  emxEnsureCapacity_real_T(sp, a, i, &yr_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    a->data[i] *= b_quant->data[i];
  }
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &wb_emlrtECI, (emlrtCTX)sp);
  st.site = &lbb_emlrtRSI;
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = mm->size[0];
  c_y->size[1] = 6;
  emxEnsureCapacity_real_T(&st, c_y, i, &as_emlrtRTEI);
  loop_ub = mm->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = (mm->data[i] + 1.0) + a->data[i];
  }
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
  if (b_tmp->size[0] <= c_y->size[0]) {
    z_size[0] = b_tmp->size[0];
  } else {
    z_size[0] = c_y->size[0];
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
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
  if (b_tmp->size[0] <= c_y->size[0]) {
    z_size[0] = b_tmp->size[0];
  } else {
    z_size[0] = c_y->size[0];
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
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (b_tmp->size[0] <= c_y->size[0]) {
    loop_ub = b_tmp->size[0];
  } else {
    loop_ub = c_y->size[0];
  }
  loop_ub *= 6;
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  /*  cor=(n/(n-1))*v*(mm-1)./(mm-v); */
  st.site = &kbb_emlrtRSI;
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (b_tmp->size[0] <= mm->size[0]) {
    loop_ub = b_tmp->size[0];
  } else {
    loop_ub = mm->size[0];
  }
  loop_ub *= 6;
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = b_tmp->size[0];
  b_y->size[1] = 6;
  emxEnsureCapacity_real_T(sp, b_y, i, &bs_emlrtRTEI);
  loop_ub = b_tmp->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = v * (b_tmp->data[i] / mm->data[i]);
  }
  z_size[0] = (*(int32_T(*)[2])b_y->size)[0];
  z_size[1] = (*(int32_T(*)[2])b_y->size)[1];
  b_iv[0] = (*(int32_T(*)[2])mm->size)[0];
  b_iv[1] = (*(int32_T(*)[2])mm->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &xb_emlrtECI, (emlrtCTX)sp);
  st.site = &kbb_emlrtRSI;
  loop_ub = b_y->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] *= mm->data[i] - 1.0;
  }
  i = d_y->size[0] * d_y->size[1];
  d_y->size[0] = mm->size[0];
  d_y->size[1] = 6;
  emxEnsureCapacity_real_T(&st, d_y, i, &cs_emlrtRTEI);
  loop_ub = mm->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    d_y->data[i] = mm->data[i] - v;
  }
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
  if (b_y->size[0] <= d_y->size[0]) {
    z_size[0] = b_y->size[0];
  } else {
    z_size[0] = d_y->size[0];
  }
  z_size[1] = 6;
  empty_non_axis_sizes = true;
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
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
  if (b_y->size[0] <= d_y->size[0]) {
    z_size[0] = b_y->size[0];
  } else {
    z_size[0] = d_y->size[0];
  }
  z_size[1] = 6;
  empty_non_axis_sizes = true;
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
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (b_y->size[0] <= d_y->size[0]) {
    loop_ub = b_y->size[0];
  } else {
    loop_ub = d_y->size[0];
  }
  loop_ub *= 6;
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  loop_ub = b_y->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] /= d_y->data[i];
  }
  emxFree_real_T(&d_y);
  emxInit_real_T(&b_st, &b_b_tmp, 2, &ds_emlrtRTEI, true);
  /* cor=v*((mm.^2-1)./mm)./(mm-v); */
  /*  Minsca = matrix of the scaled minMD envelopes in each step of the search.
   */
  i = b_b_tmp->size[0] * b_b_tmp->size[1];
  b_b_tmp->size[0] = b_tmp->size[0];
  b_b_tmp->size[1] = 6;
  emxEnsureCapacity_real_T(sp, b_b_tmp, i, &ds_emlrtRTEI);
  loop_ub = b_tmp->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    b_b_tmp->data[i] = b_tmp->data[i] / c_y->data[i];
  }
  emxFree_real_T(&b_tmp);
  emxInit_real_T(sp, &b_mm, 2, &es_emlrtRTEI, true);
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = mm->size[0];
  b_mm->size[1] = 6;
  emxEnsureCapacity_real_T(sp, b_mm, i, &es_emlrtRTEI);
  loop_ub = mm->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = mm->data[i] - v;
  }
  emxInit_real_T(sp, &r, 2, &fs_emlrtRTEI, true);
  st.site = &jbb_emlrtRSI;
  b_finv(&st, b_b_tmp, v, b_mm, r);
  i = a->size[0] * a->size[1];
  a->size[0] = r->size[0];
  a->size[1] = r->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &fs_emlrtRTEI);
  loop_ub = r->size[0] * r->size[1];
  emxFree_real_T(&b_b_tmp);
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = r->data[i];
  }
  z_size[0] = (*(int32_T(*)[2])b_y->size)[0];
  z_size[1] = (*(int32_T(*)[2])b_y->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &yb_emlrtECI, (emlrtCTX)sp);
  loop_ub = b_y->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] *= a->data[i];
  }
  st.site = &jbb_emlrtRSI;
  d_sqrt(&st, b_y);
  i = b_quant->size[0] * b_quant->size[1];
  b_quant->size[0] = b_y->size[0];
  b_quant->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, b_quant, i, &gs_emlrtRTEI);
  loop_ub = b_y->size[0] * b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_quant->data[i] = b_y->data[i];
  }
  emxFree_real_T(&b_y);
  /*  Compute Tallis correction factor based on the chi^2 distribution */
  /*  mm/n is the percentage of observations inside subset if scaled is not
   * equal to 1. */
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = mm->size[0];
  b_mm->size[1] = 6;
  emxEnsureCapacity_real_T(sp, b_mm, i, &hs_emlrtRTEI);
  loop_ub = mm->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = mm->data[i] / n;
  }
  st.site = &ibb_emlrtRSI;
  b_chi2inv(&st, b_mm, v, r);
  i = a->size[0] * a->size[1];
  a->size[0] = r->size[0];
  a->size[1] = r->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &is_emlrtRTEI);
  loop_ub = r->size[0] * r->size[1];
  emxFree_real_T(&b_mm);
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = r->data[i];
  }
  st.site = &hbb_emlrtRSI;
  chi2cdf(&st, a, v + 2.0, r);
  i = a->size[0] * a->size[1];
  a->size[0] = r->size[0];
  a->size[1] = r->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &js_emlrtRTEI);
  loop_ub = r->size[0] * r->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = r->data[i];
  }
  emxFree_real_T(&r);
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &ac_emlrtECI, (emlrtCTX)sp);
  st.site = &gbb_emlrtRSI;
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = mm->size[0];
  c_y->size[1] = 6;
  emxEnsureCapacity_real_T(&st, c_y, i, &ks_emlrtRTEI);
  loop_ub = mm->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = n / mm->data[i] * a->data[i];
  }
  emxFree_real_T(&a);
  emxFree_real_T(&mm);
  b_st.site = &gbb_emlrtRSI;
  d_sqrt(&b_st, c_y);
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
  if (b_quant->size[0] <= c_y->size[0]) {
    z_size[0] = b_quant->size[0];
  } else {
    z_size[0] = c_y->size[0];
  }
  if (6 <= c_y->size[1]) {
    z_size[1] = 6;
  } else {
    z_size[1] = c_y->size[1];
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != b_quant->size[loop_ub]) {
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
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
  if (b_quant->size[0] <= c_y->size[0]) {
    z_size[0] = b_quant->size[0];
  } else {
    z_size[0] = c_y->size[0];
  }
  if (6 <= c_y->size[1]) {
    z_size[1] = 6;
  } else {
    z_size[1] = c_y->size[1];
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != b_quant->size[loop_ub]) {
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
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (b_quant->size[0] <= c_y->size[0]) {
    loop_ub = b_quant->size[0];
  } else {
    loop_ub = c_y->size[0];
  }
  if (6 <= c_y->size[1]) {
    i = 6;
  } else {
    i = c_y->size[1];
  }
  loop_ub *= i;
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  st.site = &gbb_emlrtRSI;
  b_st.site = &fbb_emlrtRSI;
  if (m->size[0] != 0) {
    result = m->size[0];
  } else if (b_quant->size[0] != 0) {
    result = b_quant->size[0];
  } else {
    result = 0;
  }
  c_st.site = &yk_emlrtRSI;
  if ((m->size[0] != result) && (m->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((b_quant->size[0] != result) && (b_quant->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (b_quant->size[0] != 0)) {
    csz_idx_1 = 6;
  } else {
    csz_idx_1 = 0;
  }
  i = quant->size[0] * quant->size[1];
  quant->size[0] = b_quant->size[0];
  quant->size[1] = 6;
  emxEnsureCapacity_real_T(sp, quant, i, &ls_emlrtRTEI);
  loop_ub = b_quant->size[0] * 6;
  for (i = 0; i < loop_ub; i++) {
    quant->data[i] = b_quant->data[i] / c_y->data[i];
  }
  emxFree_real_T(&c_y);
  emxFree_real_T(&b_quant);
  i = MMDenv->size[0] * MMDenv->size[1];
  MMDenv->size[0] = result;
  MMDenv->size[1] = input_sizes_idx_1 + csz_idx_1;
  emxEnsureCapacity_real_T(sp, MMDenv, i, &ms_emlrtRTEI);
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
          quant->data[i1 + result * i];
    }
  }
  emxFree_real_T(&quant);
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
  emxArray_real_T *c_b_tmp;
  emxArray_real_T *c_y;
  emxArray_real_T *d_y;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r1;
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
  /*    scaled:  It indicates how to compute the envelopes. Scalar. */
  /*                If scaled>0 the envelopes are produced for */
  /*                scaled Mahalanobis distances (no consistency factor is */
  /*                applied) else the traditional consistency factor is applied
   */
  /*                (this is the default) */
  /*                  Example - 'scaled',0 */
  /*                  Data Types - double */
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
    st.site = &rbb_emlrtRSI;
    l_error(&st);
  }
  if (muDoubleScalarIsNaN(v)) {
    st.site = &qbb_emlrtRSI;
    m_error(&st);
  }
  /*  Note that prob must be a row vector */
  /*  Check that the initial subset size is not greater than n-1 */
  if (varargin_4 > n - 1.0) {
    st.site = &pbb_emlrtRSI;
    n_error(&st);
  }
  emxInit_real_T(sp, &y, 2, &ns_emlrtRTEI, true);
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  st.site = &obb_emlrtRSI;
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
  emxInit_real_T(&b_st, &m, 1, &sr_emlrtRTEI, true);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(sp, m, i, &sr_emlrtRTEI);
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    m->data[i] = y->data[i];
  }
  emxFree_real_T(&y);
  emxInit_real_T(sp, &mm, 2, &tr_emlrtRTEI, true);
  emxInit_real_T(sp, &b_y, 2, &as_emlrtRTEI, true);
  /*  mm = fwd search index replicated lp times. */
  st.site = &nbb_emlrtRSI;
  b_repmat(&st, m, 1.0, b_y);
  i = mm->size[0] * mm->size[1];
  mm->size[0] = b_y->size[0];
  mm->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, mm, i, &tr_emlrtRTEI);
  loop_ub = b_y->size[0] * b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = b_y->data[i];
  }
  emxInit_real_T(sp, &a, 2, &is_emlrtRTEI, true);
  /*  finv finds the inverse of the F distribution. */
  i = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &ur_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = n - mm->data[i];
  }
  emxInit_real_T(sp, &b_tmp, 2, &vr_emlrtRTEI, true);
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, b_tmp, i, &vr_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_tmp->data[i] = mm->data[i] + 1.0;
  }
  emxInit_real_T(sp, &c_y, 2, &os_emlrtRTEI, true);
  emxInit_real_T(sp, &r, 2, &vs_emlrtRTEI, true);
  st.site = &mbb_emlrtRSI;
  d_repmat(&st, m->size[0], r);
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = a->size[0];
  c_y->size[1] = a->size[1];
  emxEnsureCapacity_real_T(sp, c_y, i, &wr_emlrtRTEI);
  loop_ub = a->size[0] * a->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = 2.0 * a->data[i];
  }
  emxInit_real_T(sp, &d_y, 2, &cs_emlrtRTEI, true);
  i = d_y->size[0] * d_y->size[1];
  d_y->size[0] = b_tmp->size[0];
  d_y->size[1] = b_tmp->size[1];
  emxEnsureCapacity_real_T(sp, d_y, i, &wr_emlrtRTEI);
  loop_ub = b_tmp->size[0] * b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    d_y->data[i] = 2.0 * b_tmp->data[i];
  }
  emxInit_real_T(sp, &quant, 2, &xr_emlrtRTEI, true);
  st.site = &mbb_emlrtRSI;
  c_finv(&st, r, c_y, d_y, b_y);
  i = quant->size[0] * quant->size[1];
  quant->size[0] = b_y->size[0];
  quant->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, quant, i, &xr_emlrtRTEI);
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
  st.site = &lbb_emlrtRSI;
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = mm->size[0];
  b_y->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, b_y, i, &as_emlrtRTEI);
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
  /*  cor=(n/(n-1))*v*(mm-1)./(mm-v); */
  st.site = &kbb_emlrtRSI;
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
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
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = b_tmp->size[0];
  c_y->size[1] = b_tmp->size[1];
  emxEnsureCapacity_real_T(sp, c_y, i, &bs_emlrtRTEI);
  loop_ub = b_tmp->size[0] * b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = v * (b_tmp->data[i] / mm->data[i]);
  }
  z_size[0] = (*(int32_T(*)[2])c_y->size)[0];
  z_size[1] = (*(int32_T(*)[2])c_y->size)[1];
  b_iv[0] = (*(int32_T(*)[2])mm->size)[0];
  b_iv[1] = (*(int32_T(*)[2])mm->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &xb_emlrtECI, (emlrtCTX)sp);
  st.site = &kbb_emlrtRSI;
  loop_ub = c_y->size[0] * c_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] *= mm->data[i] - 1.0;
  }
  i = d_y->size[0] * d_y->size[1];
  d_y->size[0] = mm->size[0];
  d_y->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, d_y, i, &cs_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    d_y->data[i] = mm->data[i] - v;
  }
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
  if (c_y->size[0] <= d_y->size[0]) {
    z_size[0] = c_y->size[0];
  } else {
    z_size[0] = d_y->size[0];
  }
  if (c_y->size[1] <= d_y->size[1]) {
    z_size[1] = c_y->size[1];
  } else {
    z_size[1] = 0;
  }
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
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
  if (c_y->size[0] <= d_y->size[0]) {
    z_size[0] = c_y->size[0];
  } else {
    z_size[0] = d_y->size[0];
  }
  if (c_y->size[1] <= d_y->size[1]) {
    z_size[1] = c_y->size[1];
  } else {
    z_size[1] = 0;
  }
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
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (c_y->size[0] <= d_y->size[0]) {
    loop_ub = c_y->size[0];
  } else {
    loop_ub = d_y->size[0];
  }
  if (c_y->size[1] <= d_y->size[1]) {
    b_b_tmp = c_y->size[1];
  } else {
    b_b_tmp = 0;
  }
  loop_ub *= b_b_tmp;
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  loop_ub = c_y->size[0] * c_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] /= d_y->data[i];
  }
  emxFree_real_T(&d_y);
  emxInit_real_T(&b_st, &c_b_tmp, 2, &ds_emlrtRTEI, true);
  /* cor=v*((mm.^2-1)./mm)./(mm-v); */
  /*  Minsca = matrix of the scaled minMD envelopes in each step of the search.
   */
  i = c_b_tmp->size[0] * c_b_tmp->size[1];
  c_b_tmp->size[0] = b_tmp->size[0];
  c_b_tmp->size[1] = b_tmp->size[1];
  emxEnsureCapacity_real_T(sp, c_b_tmp, i, &ds_emlrtRTEI);
  loop_ub = b_tmp->size[0] * b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_b_tmp->data[i] = b_tmp->data[i] / b_y->data[i];
  }
  emxFree_real_T(&b_tmp);
  emxInit_real_T(sp, &b_mm, 2, &es_emlrtRTEI, true);
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = mm->size[0];
  b_mm->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, b_mm, i, &es_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = mm->data[i] - v;
  }
  emxInit_real_T(sp, &r1, 2, &fs_emlrtRTEI, true);
  st.site = &jbb_emlrtRSI;
  b_finv(&st, c_b_tmp, v, b_mm, r1);
  i = a->size[0] * a->size[1];
  a->size[0] = r1->size[0];
  a->size[1] = r1->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &fs_emlrtRTEI);
  loop_ub = r1->size[0] * r1->size[1];
  emxFree_real_T(&c_b_tmp);
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = r1->data[i];
  }
  z_size[0] = (*(int32_T(*)[2])c_y->size)[0];
  z_size[1] = (*(int32_T(*)[2])c_y->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &yb_emlrtECI, (emlrtCTX)sp);
  loop_ub = c_y->size[0] * c_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] *= a->data[i];
  }
  st.site = &jbb_emlrtRSI;
  d_sqrt(&st, c_y);
  i = quant->size[0] * quant->size[1];
  quant->size[0] = c_y->size[0];
  quant->size[1] = c_y->size[1];
  emxEnsureCapacity_real_T(sp, quant, i, &gs_emlrtRTEI);
  loop_ub = c_y->size[0] * c_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    quant->data[i] = c_y->data[i];
  }
  /*  Compute Tallis correction factor based on the chi^2 distribution */
  /*  mm/n is the percentage of observations inside subset if scaled is not
   * equal to 1. */
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = mm->size[0];
  b_mm->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, b_mm, i, &hs_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = mm->data[i] / n;
  }
  st.site = &ibb_emlrtRSI;
  b_chi2inv(&st, b_mm, v, r1);
  i = a->size[0] * a->size[1];
  a->size[0] = r1->size[0];
  a->size[1] = r1->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &is_emlrtRTEI);
  loop_ub = r1->size[0] * r1->size[1];
  emxFree_real_T(&b_mm);
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = r1->data[i];
  }
  st.site = &hbb_emlrtRSI;
  chi2cdf(&st, a, v + 2.0, r1);
  i = a->size[0] * a->size[1];
  a->size[0] = r1->size[0];
  a->size[1] = r1->size[1];
  emxEnsureCapacity_real_T(sp, a, i, &js_emlrtRTEI);
  loop_ub = r1->size[0] * r1->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = r1->data[i];
  }
  emxFree_real_T(&r1);
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])a->size)[0];
  b_iv[1] = (*(int32_T(*)[2])a->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &ac_emlrtECI, (emlrtCTX)sp);
  st.site = &gbb_emlrtRSI;
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = mm->size[0];
  b_y->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, b_y, i, &ks_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = n / mm->data[i] * a->data[i];
  }
  emxFree_real_T(&a);
  emxFree_real_T(&mm);
  b_st.site = &gbb_emlrtRSI;
  d_sqrt(&b_st, b_y);
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
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
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  st.site = &gbb_emlrtRSI;
  b_st.site = &fbb_emlrtRSI;
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
  c_st.site = &yk_emlrtRSI;
  if ((m->size[0] != b_b_tmp) && (m->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((quant->size[0] != b_b_tmp) &&
      ((quant->size[0] != 0) && (quant->size[1] != 0))) {
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
      ((quant->size[0] != 0) && (quant->size[1] != 0))) {
    csz_idx_1 = quant->size[1];
  } else {
    csz_idx_1 = 0;
  }
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = quant->size[0];
  c_y->size[1] = quant->size[1];
  emxEnsureCapacity_real_T(sp, c_y, i, &ls_emlrtRTEI);
  loop_ub = quant->size[0] * quant->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = quant->data[i] / b_y->data[i];
  }
  emxFree_real_T(&b_y);
  emxFree_real_T(&quant);
  i = MMDenv->size[0] * MMDenv->size[1];
  MMDenv->size[0] = b_b_tmp;
  MMDenv->size[1] = input_sizes_idx_1 + csz_idx_1;
  emxEnsureCapacity_real_T(sp, MMDenv, i, &ms_emlrtRTEI);
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
  emxArray_real_T *a;
  emxArray_real_T *b_b_tmp;
  emxArray_real_T *b_mm;
  emxArray_real_T *b_quant;
  emxArray_real_T *b_tmp;
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  emxArray_real_T *d_y;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *y;
  real_T options_prob_data[18];
  real_T b_options_prob_data[16];
  real_T tmp_data[4];
  int32_T b_iv[2];
  int32_T z_size[2];
  int32_T c_b_tmp;
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
  /*    scaled:  It indicates how to compute the envelopes. Scalar. */
  /*                If scaled>0 the envelopes are produced for */
  /*                scaled Mahalanobis distances (no consistency factor is */
  /*                applied) else the traditional consistency factor is applied
   */
  /*                (this is the default) */
  /*                  Example - 'scaled',0 */
  /*                  Data Types - double */
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
    st.site = &rbb_emlrtRSI;
    l_error(&st);
  }
  if (muDoubleScalarIsNaN(v)) {
    st.site = &qbb_emlrtRSI;
    m_error(&st);
  }
  /*  Note that prob must be a row vector */
  options_prob_data[0] = 0.99;
  options_prob_data[1] = 0.999;
  options_prob_data[2] = 0.01;
  options_prob_data[3] = 0.5;
  /*  Check that the initial subset size is not greater than n-1 */
  if (varargin_4 > n - 1.0) {
    st.site = &pbb_emlrtRSI;
    n_error(&st);
  }
  emxInit_real_T(sp, &y, 2, &ns_emlrtRTEI, true);
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  st.site = &obb_emlrtRSI;
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
  emxInit_real_T(&b_st, &m, 1, &sr_emlrtRTEI, true);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(sp, m, i, &sr_emlrtRTEI);
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    m->data[i] = y->data[i];
  }
  emxFree_real_T(&y);
  emxInit_real_T(sp, &mm, 2, &tr_emlrtRTEI, true);
  emxInit_real_T(sp, &b_y, 2, &os_emlrtRTEI, true);
  /*  mm = fwd search index replicated lp times. */
  st.site = &nbb_emlrtRSI;
  b_repmat(&st, m, 4.0, b_y);
  i = mm->size[0] * mm->size[1];
  mm->size[0] = b_y->size[0];
  mm->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, mm, i, &tr_emlrtRTEI);
  loop_ub = b_y->size[0] * b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = b_y->data[i];
  }
  emxInit_real_T(sp, &b_tmp, 2, &ur_emlrtRTEI, true);
  /*  finv finds the inverse of the F distribution. */
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, b_tmp, i, &ur_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_tmp->data[i] = n - mm->data[i];
  }
  emxInit_real_T(sp, &b_b_tmp, 2, &vr_emlrtRTEI, true);
  i = b_b_tmp->size[0] * b_b_tmp->size[1];
  b_b_tmp->size[0] = mm->size[0];
  b_b_tmp->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, b_b_tmp, i, &vr_emlrtRTEI);
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
  emxInit_real_T(sp, &quant, 2, &ls_emlrtRTEI, true);
  st.site = &mbb_emlrtRSI;
  c_repmat(&st, tmp_data, z_size, m->size[0], b_y);
  i = quant->size[0] * quant->size[1];
  quant->size[0] = b_tmp->size[0];
  quant->size[1] = b_tmp->size[1];
  emxEnsureCapacity_real_T(sp, quant, i, &wr_emlrtRTEI);
  loop_ub = b_tmp->size[0] * b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    quant->data[i] = 2.0 * b_tmp->data[i];
  }
  emxInit_real_T(sp, &c_y, 2, &as_emlrtRTEI, true);
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = b_b_tmp->size[0];
  c_y->size[1] = b_b_tmp->size[1];
  emxEnsureCapacity_real_T(sp, c_y, i, &wr_emlrtRTEI);
  loop_ub = b_b_tmp->size[0] * b_b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = 2.0 * b_b_tmp->data[i];
  }
  emxInit_real_T(sp, &b_quant, 2, &xr_emlrtRTEI, true);
  emxInit_real_T(sp, &d_y, 2, &cs_emlrtRTEI, true);
  st.site = &mbb_emlrtRSI;
  c_finv(&st, b_y, quant, c_y, d_y);
  i = b_quant->size[0] * b_quant->size[1];
  b_quant->size[0] = d_y->size[0];
  b_quant->size[1] = d_y->size[1];
  emxEnsureCapacity_real_T(sp, b_quant, i, &xr_emlrtRTEI);
  loop_ub = d_y->size[0] * d_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_quant->data[i] = d_y->data[i];
  }
  /*  from the equivalence with the incomplete beta distribution. */
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])b_quant->size)[0];
  b_iv[1] = (*(int32_T(*)[2])b_quant->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &vb_emlrtECI, (emlrtCTX)sp);
  loop_ub = b_tmp->size[0] * b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_tmp->data[i] *= b_quant->data[i];
  }
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])b_tmp->size)[0];
  b_iv[1] = (*(int32_T(*)[2])b_tmp->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &wb_emlrtECI, (emlrtCTX)sp);
  st.site = &lbb_emlrtRSI;
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = mm->size[0];
  c_y->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, c_y, i, &as_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = (mm->data[i] + 1.0) + b_tmp->data[i];
  }
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
  if (b_b_tmp->size[0] <= c_y->size[0]) {
    z_size[0] = b_b_tmp->size[0];
  } else {
    z_size[0] = c_y->size[0];
  }
  if (b_b_tmp->size[1] <= c_y->size[1]) {
    z_size[1] = b_b_tmp->size[1];
  } else {
    z_size[1] = c_y->size[1];
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
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
  if (b_b_tmp->size[0] <= c_y->size[0]) {
    z_size[0] = b_b_tmp->size[0];
  } else {
    z_size[0] = c_y->size[0];
  }
  if (b_b_tmp->size[1] <= c_y->size[1]) {
    z_size[1] = b_b_tmp->size[1];
  } else {
    z_size[1] = c_y->size[1];
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
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (b_b_tmp->size[0] <= c_y->size[0]) {
    loop_ub = b_b_tmp->size[0];
  } else {
    loop_ub = c_y->size[0];
  }
  if (b_b_tmp->size[1] <= c_y->size[1]) {
    c_b_tmp = b_b_tmp->size[1];
  } else {
    c_b_tmp = c_y->size[1];
  }
  loop_ub *= c_b_tmp;
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  /*  cor=(n/(n-1))*v*(mm-1)./(mm-v); */
  st.site = &kbb_emlrtRSI;
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (b_b_tmp->size[0] <= mm->size[0]) {
    loop_ub = b_b_tmp->size[0];
  } else {
    loop_ub = mm->size[0];
  }
  if (b_b_tmp->size[1] <= mm->size[1]) {
    c_b_tmp = b_b_tmp->size[1];
  } else {
    c_b_tmp = mm->size[1];
  }
  loop_ub *= c_b_tmp;
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = b_b_tmp->size[0];
  b_y->size[1] = b_b_tmp->size[1];
  emxEnsureCapacity_real_T(sp, b_y, i, &bs_emlrtRTEI);
  loop_ub = b_b_tmp->size[0] * b_b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = v * (b_b_tmp->data[i] / mm->data[i]);
  }
  z_size[0] = (*(int32_T(*)[2])b_y->size)[0];
  z_size[1] = (*(int32_T(*)[2])b_y->size)[1];
  b_iv[0] = (*(int32_T(*)[2])mm->size)[0];
  b_iv[1] = (*(int32_T(*)[2])mm->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &xb_emlrtECI, (emlrtCTX)sp);
  st.site = &kbb_emlrtRSI;
  loop_ub = b_y->size[0] * b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] *= mm->data[i] - 1.0;
  }
  i = d_y->size[0] * d_y->size[1];
  d_y->size[0] = mm->size[0];
  d_y->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, d_y, i, &cs_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    d_y->data[i] = mm->data[i] - v;
  }
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
  if (b_y->size[0] <= d_y->size[0]) {
    z_size[0] = b_y->size[0];
  } else {
    z_size[0] = d_y->size[0];
  }
  if (b_y->size[1] <= d_y->size[1]) {
    z_size[1] = b_y->size[1];
  } else {
    z_size[1] = d_y->size[1];
  }
  empty_non_axis_sizes = true;
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
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
  if (b_y->size[0] <= d_y->size[0]) {
    z_size[0] = b_y->size[0];
  } else {
    z_size[0] = d_y->size[0];
  }
  if (b_y->size[1] <= d_y->size[1]) {
    z_size[1] = b_y->size[1];
  } else {
    z_size[1] = d_y->size[1];
  }
  empty_non_axis_sizes = true;
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
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (b_y->size[0] <= d_y->size[0]) {
    loop_ub = b_y->size[0];
  } else {
    loop_ub = d_y->size[0];
  }
  if (b_y->size[1] <= d_y->size[1]) {
    c_b_tmp = b_y->size[1];
  } else {
    c_b_tmp = d_y->size[1];
  }
  loop_ub *= c_b_tmp;
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  loop_ub = b_y->size[0] * b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] /= d_y->data[i];
  }
  emxFree_real_T(&d_y);
  /* cor=v*((mm.^2-1)./mm)./(mm-v); */
  /*  Minsca = matrix of the scaled minMD envelopes in each step of the search.
   */
  i = b_quant->size[0] * b_quant->size[1];
  b_quant->size[0] = b_b_tmp->size[0];
  b_quant->size[1] = b_b_tmp->size[1];
  emxEnsureCapacity_real_T(sp, b_quant, i, &ws_emlrtRTEI);
  loop_ub = b_b_tmp->size[0] * b_b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_quant->data[i] = b_b_tmp->data[i] / c_y->data[i];
  }
  emxFree_real_T(&b_b_tmp);
  emxInit_real_T(sp, &b_mm, 2, &es_emlrtRTEI, true);
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = mm->size[0];
  b_mm->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, b_mm, i, &es_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = mm->data[i] - v;
  }
  st.site = &jbb_emlrtRSI;
  b_finv(&st, b_quant, v, b_mm, b_tmp);
  z_size[0] = (*(int32_T(*)[2])b_y->size)[0];
  z_size[1] = (*(int32_T(*)[2])b_y->size)[1];
  b_iv[0] = (*(int32_T(*)[2])b_tmp->size)[0];
  b_iv[1] = (*(int32_T(*)[2])b_tmp->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &yb_emlrtECI, (emlrtCTX)sp);
  loop_ub = b_y->size[0] * b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] *= b_tmp->data[i];
  }
  st.site = &jbb_emlrtRSI;
  d_sqrt(&st, b_y);
  i = b_quant->size[0] * b_quant->size[1];
  b_quant->size[0] = b_y->size[0];
  b_quant->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, b_quant, i, &gs_emlrtRTEI);
  loop_ub = b_y->size[0] * b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_quant->data[i] = b_y->data[i];
  }
  emxFree_real_T(&b_y);
  /*  Compute Tallis correction factor based on the chi^2 distribution */
  /*  mm/n is the percentage of observations inside subset if scaled is not
   * equal to 1. */
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = mm->size[0];
  b_mm->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, b_mm, i, &hs_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_mm->data[i] = mm->data[i] / n;
  }
  emxInit_real_T(sp, &a, 2, &is_emlrtRTEI, true);
  st.site = &ibb_emlrtRSI;
  b_chi2inv(&st, b_mm, v, a);
  st.site = &hbb_emlrtRSI;
  chi2cdf(&st, a, v + 2.0, b_tmp);
  z_size[0] = (*(int32_T(*)[2])mm->size)[0];
  z_size[1] = (*(int32_T(*)[2])mm->size)[1];
  b_iv[0] = (*(int32_T(*)[2])b_tmp->size)[0];
  b_iv[1] = (*(int32_T(*)[2])b_tmp->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &b_iv[0], &ac_emlrtECI, (emlrtCTX)sp);
  st.site = &gbb_emlrtRSI;
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = mm->size[0];
  c_y->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, c_y, i, &ks_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  emxFree_real_T(&b_mm);
  emxFree_real_T(&a);
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = n / mm->data[i] * b_tmp->data[i];
  }
  emxFree_real_T(&b_tmp);
  emxFree_real_T(&mm);
  b_st.site = &gbb_emlrtRSI;
  d_sqrt(&b_st, c_y);
  b_st.site = &cd_emlrtRSI;
  c_st.site = &dd_emlrtRSI;
  d_st.site = &ed_emlrtRSI;
  e_st.site = &fd_emlrtRSI;
  f_st.site = &gd_emlrtRSI;
  if (b_quant->size[0] <= c_y->size[0]) {
    z_size[0] = b_quant->size[0];
  } else {
    z_size[0] = c_y->size[0];
  }
  if (b_quant->size[1] <= c_y->size[1]) {
    z_size[1] = b_quant->size[1];
  } else {
    z_size[1] = c_y->size[1];
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != b_quant->size[loop_ub]) {
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
    emlrtErrorWithMessageIdR2018a(&f_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &hd_emlrtRSI;
  g_st.site = &id_emlrtRSI;
  if (b_quant->size[0] <= c_y->size[0]) {
    z_size[0] = b_quant->size[0];
  } else {
    z_size[0] = c_y->size[0];
  }
  if (b_quant->size[1] <= c_y->size[1]) {
    z_size[1] = b_quant->size[1];
  } else {
    z_size[1] = c_y->size[1];
  }
  empty_non_axis_sizes = true;
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != b_quant->size[loop_ub]) {
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
    emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (b_quant->size[0] <= c_y->size[0]) {
    loop_ub = b_quant->size[0];
  } else {
    loop_ub = c_y->size[0];
  }
  if (b_quant->size[1] <= c_y->size[1]) {
    c_b_tmp = b_quant->size[1];
  } else {
    c_b_tmp = c_y->size[1];
  }
  loop_ub *= c_b_tmp;
  g_st.site = &jd_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ab_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  st.site = &gbb_emlrtRSI;
  b_st.site = &fbb_emlrtRSI;
  if (m->size[0] != 0) {
    c_b_tmp = m->size[0];
  } else if ((b_quant->size[0] != 0) && (b_quant->size[1] != 0)) {
    c_b_tmp = b_quant->size[0];
  } else {
    c_b_tmp = 0;
    if (b_quant->size[0] > 0) {
      c_b_tmp = b_quant->size[0];
    }
  }
  c_st.site = &yk_emlrtRSI;
  if ((m->size[0] != c_b_tmp) && (m->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((b_quant->size[0] != c_b_tmp) &&
      ((b_quant->size[0] != 0) && (b_quant->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (c_b_tmp == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes ||
      ((b_quant->size[0] != 0) && (b_quant->size[1] != 0))) {
    csz_idx_1 = b_quant->size[1];
  } else {
    csz_idx_1 = 0;
  }
  i = quant->size[0] * quant->size[1];
  quant->size[0] = b_quant->size[0];
  quant->size[1] = b_quant->size[1];
  emxEnsureCapacity_real_T(sp, quant, i, &ls_emlrtRTEI);
  loop_ub = b_quant->size[0] * b_quant->size[1];
  for (i = 0; i < loop_ub; i++) {
    quant->data[i] = b_quant->data[i] / c_y->data[i];
  }
  emxFree_real_T(&c_y);
  emxFree_real_T(&b_quant);
  i = MMDenv->size[0] * MMDenv->size[1];
  MMDenv->size[0] = c_b_tmp;
  MMDenv->size[1] = input_sizes_idx_1 + csz_idx_1;
  emxEnsureCapacity_real_T(sp, MMDenv, i, &ms_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < c_b_tmp; i1++) {
      MMDenv->data[i1] = m->data[i1];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < csz_idx_1; i++) {
    for (i1 = 0; i1 < c_b_tmp; i1++) {
      MMDenv->data[i1 + MMDenv->size[0] * (i + input_sizes_idx_1)] =
          quant->data[i1 + c_b_tmp * i];
    }
  }
  emxFree_real_T(&quant);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (FSMenvmmd.c) */
