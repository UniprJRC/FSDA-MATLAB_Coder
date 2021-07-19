/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * zscore.c
 *
 * Code generation for function 'zscore'
 *
 */

/* Include files */
#include "zscore.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "vvarstd.h"

/* Variable Definitions */
static emlrtRSInfo fo_emlrtRSI = {
    53,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo qs_emlrtRSI = {
    23,       /* lineNo */
    "zscore", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\zscore.m" /* pathName
                                                                        */
};

static emlrtRSInfo rs_emlrtRSI = {
    24,       /* lineNo */
    "zscore", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\zscore.m" /* pathName
                                                                        */
};

static emlrtRSInfo ss_emlrtRSI = {
    31,       /* lineNo */
    "zscore", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\zscore.m" /* pathName
                                                                        */
};

static emlrtRSInfo ts_emlrtRSI = {
    32,       /* lineNo */
    "zscore", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\zscore.m" /* pathName
                                                                        */
};

static emlrtRSInfo us_emlrtRSI = {
    49,     /* lineNo */
    "mean", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m" /* pathName
                                                                         */
};

static emlrtRSInfo vs_emlrtRSI = {
    41,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo ws_emlrtRSI = {
    50,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo ys_emlrtRSI = {
    113,      /* lineNo */
    "varstd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\varstd"
    ".m" /* pathName */
};

static emlrtRSInfo at_emlrtRSI = {
    69,                    /* lineNo */
    "applyVectorFunction", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyVectorFunction.m" /* pathName */
};

static emlrtRSInfo bt_emlrtRSI = {
    131,        /* lineNo */
    "looper1D", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyVectorFunction.m" /* pathName */
};

static emlrtRSInfo ct_emlrtRSI = {
    140,        /* lineNo */
    "looper1D", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyVectorFunction.m" /* pathName */
};

static emlrtRSInfo dt_emlrtRSI = {
    141,        /* lineNo */
    "looper1D", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyVectorFunction.m" /* pathName */
};

static emlrtRSInfo et_emlrtRSI = {
    154,          /* lineNo */
    "copyVector", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyVectorFunction.m" /* pathName */
};

static emlrtRSInfo ft_emlrtRSI = {
    156,          /* lineNo */
    "copyVector", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyVectorFunction.m" /* pathName */
};

static emlrtRSInfo ht_emlrtRSI = {
    112,                             /* lineNo */
    "@(x)vvarstd(op,x,omitnan,n,w)", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\varstd"
    ".m" /* pathName */
};

static emlrtRTEInfo vb_emlrtRTEI = {
    13,       /* lineNo */
    27,       /* colNo */
    "zscore", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\zscore.m" /* pName
                                                                        */
};

static emlrtBCInfo cn_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    27,       /* lineNo */
    8,        /* colNo */
    "",       /* aName */
    "zscore", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\zscore.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo dn_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    28,       /* lineNo */
    9,        /* colNo */
    "",       /* aName */
    "zscore", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\zscore.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtRTEInfo xs_emlrtRTEI = {
    74,                      /* lineNo */
    9,                       /* colNo */
    "combineVectorElements", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" /* pName */
};

static emlrtRTEInfo ys_emlrtRTEI = {
    35,                    /* lineNo */
    20,                    /* colNo */
    "sumMatrixIncludeNaN", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pName */
};

static emlrtRTEInfo at_emlrtRTEI = {
    23,       /* lineNo */
    1,        /* colNo */
    "zscore", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\zscore.m" /* pName
                                                                        */
};

static emlrtRTEInfo bt_emlrtRTEI = {
    24,       /* lineNo */
    1,        /* colNo */
    "zscore", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\zscore.m" /* pName
                                                                        */
};

static emlrtRTEInfo ct_emlrtRTEI = {
    140,                   /* lineNo */
    13,                    /* colNo */
    "applyVectorFunction", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyVectorFunction.m" /* pName */
};

static emlrtRTEInfo dt_emlrtRTEI = {
    32,       /* lineNo */
    21,       /* colNo */
    "zscore", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\zscore.m" /* pName
                                                                        */
};

static emlrtRTEInfo et_emlrtRTEI = {
    1,        /* lineNo */
    13,       /* colNo */
    "zscore", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\zscore.m" /* pName
                                                                        */
};

static emlrtRTEInfo ft_emlrtRTEI = {
    1,        /* lineNo */
    16,       /* colNo */
    "zscore", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\zscore.m" /* pName
                                                                        */
};

/* Function Definitions */
void zscore(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *z)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_real_T *a;
  emxArray_real_T *mu;
  emxArray_real_T *sigma;
  emxArray_real_T *xv;
  real_T s;
  int32_T b_csz_idx_1;
  int32_T bcoef;
  int32_T col;
  int32_T csz_idx_1;
  int32_T ib;
  int32_T inb;
  int32_T ncols;
  int32_T nfb;
  int32_T nleft;
  int32_T outsize_idx_0;
  boolean_T overflow;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (((x->size[0] != 1) || (x->size[1] != 1)) && (x->size[0] == 1)) {
    emlrtErrorWithMessageIdR2018a(sp, &vb_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  emxInit_real_T(sp, &mu, 2, &et_emlrtRTEI, true);
  st.site = &qs_emlrtRSI;
  b_st.site = &us_emlrtRSI;
  c_st.site = &bo_emlrtRSI;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    ib = mu->size[0] * mu->size[1];
    mu->size[0] = 1;
    mu->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&c_st, mu, ib, &xs_emlrtRTEI);
    ncols = x->size[1];
    for (ib = 0; ib < ncols; ib++) {
      mu->data[ib] = 0.0;
    }
  } else {
    d_st.site = &co_emlrtRSI;
    e_st.site = &do_emlrtRSI;
    ib = mu->size[0] * mu->size[1];
    mu->size[0] = 1;
    mu->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&e_st, mu, ib, &ys_emlrtRTEI);
    ncols = x->size[1] - 1;
    if (x->size[0] < 4096) {
      f_st.site = &vs_emlrtRSI;
      if (x->size[1] > 2147483646) {
        g_st.site = &qf_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }
      for (col = 0; col <= ncols; col++) {
        f_st.site = &eo_emlrtRSI;
        mu->data[col] = c_sumColumnB(&f_st, x, col + 1, x->size[0]);
      }
    } else {
      nfb = x->size[0] / 4096;
      inb = nfb << 12;
      nleft = x->size[0] - inb;
      f_st.site = &ws_emlrtRSI;
      if (x->size[1] > 2147483646) {
        g_st.site = &qf_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }
      for (col = 0; col <= ncols; col++) {
        s = b_sumColumnB4(x, col + 1, 1);
        f_st.site = &fo_emlrtRSI;
        for (ib = 2; ib <= nfb; ib++) {
          s += b_sumColumnB4(x, col + 1, ((ib - 1) << 12) + 1);
        }
        if (nleft > 0) {
          f_st.site = &go_emlrtRSI;
          s += d_sumColumnB(&f_st, x, col + 1, nleft, inb + 1);
        }
        mu->data[col] = s;
      }
    }
  }
  ib = mu->size[0] * mu->size[1];
  mu->size[0] = 1;
  emxEnsureCapacity_real_T(&st, mu, ib, &at_emlrtRTEI);
  ncols = mu->size[1] - 1;
  for (ib = 0; ib <= ncols; ib++) {
    mu->data[ib] /= (real_T)x->size[0];
  }
  emxInit_real_T(&st, &sigma, 2, &ft_emlrtRTEI, true);
  st.site = &rs_emlrtRSI;
  b_st.site = &xs_emlrtRSI;
  c_st.site = &ys_emlrtRSI;
  ib = sigma->size[0] * sigma->size[1];
  sigma->size[0] = 1;
  sigma->size[1] = x->size[1];
  emxEnsureCapacity_real_T(&c_st, sigma, ib, &bt_emlrtRTEI);
  ncols = x->size[1];
  for (ib = 0; ib < ncols; ib++) {
    sigma->data[ib] = 0.0;
  }
  d_st.site = &at_emlrtRSI;
  ncols = x->size[0];
  nfb = x->size[1];
  e_st.site = &bt_emlrtRSI;
  if ((1 <= x->size[1]) && (x->size[1] > 2147483646)) {
    f_st.site = &qf_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }
  if (0 <= x->size[1] - 1) {
    outsize_idx_0 = x->size[0];
    bcoef = x->size[0];
    overflow = ((1 <= x->size[0]) && (x->size[0] > 2147483646));
  }
  emxInit_real_T(&d_st, &xv, 1, &ct_emlrtRTEI, true);
  for (nleft = 0; nleft < nfb; nleft++) {
    inb = nleft * ncols;
    e_st.site = &ct_emlrtRSI;
    f_st.site = &et_emlrtRSI;
    ib = xv->size[0];
    xv->size[0] = outsize_idx_0;
    emxEnsureCapacity_real_T(&f_st, xv, ib, &ct_emlrtRTEI);
    for (ib = 0; ib < bcoef; ib++) {
      xv->data[ib] = 0.0;
    }
    f_st.site = &ft_emlrtRSI;
    if (overflow) {
      g_st.site = &qf_emlrtRSI;
      check_forloop_overflow_error(&g_st);
    }
    for (col = 0; col < ncols; col++) {
      xv->data[col] = x->data[inb + col];
    }
    e_st.site = &dt_emlrtRSI;
    f_st.site = &gt_emlrtRSI;
    g_st.site = &ht_emlrtRSI;
    sigma->data[nleft] = vvarstd(&g_st, xv, x->size[0]);
  }
  emxFree_real_T(&xv);
  ib = sigma->size[1];
  for (col = 0; col < ib; col++) {
    if (col + 1 > sigma->size[1]) {
      emlrtDynamicBoundsCheckR2012b(col + 1, 1, sigma->size[1], &cn_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (sigma->data[col] == 0.0) {
      if (col + 1 > sigma->size[1]) {
        emlrtDynamicBoundsCheckR2012b(col + 1, 1, sigma->size[1], &dn_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      sigma->data[col] = 1.0;
    }
  }
  st.site = &ss_emlrtRSI;
  if (mu->size[1] == 1) {
    csz_idx_1 = x->size[1];
  } else if (x->size[1] == 1) {
    csz_idx_1 = mu->size[1];
  } else if (x->size[1] == mu->size[1]) {
    csz_idx_1 = x->size[1];
  } else {
    emlrtErrorWithMessageIdR2018a(&st, &tb_emlrtRTEI,
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch",
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }
  ib = z->size[0] * z->size[1];
  z->size[0] = x->size[0];
  z->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(&st, z, ib, &fm_emlrtRTEI);
  if ((x->size[0] != 0) && (csz_idx_1 != 0)) {
    outsize_idx_0 = (x->size[1] != 1);
    bcoef = (mu->size[1] != 1);
    ib = csz_idx_1 - 1;
    for (col = 0; col <= ib; col++) {
      ncols = outsize_idx_0 * col;
      nfb = bcoef * col;
      inb = (x->size[0] != 1);
      nleft = z->size[0] - 1;
      for (csz_idx_1 = 0; csz_idx_1 <= nleft; csz_idx_1++) {
        z->data[csz_idx_1 + z->size[0] * col] =
            x->data[inb * csz_idx_1 + x->size[0] * ncols] - mu->data[nfb];
      }
    }
  }
  emxFree_real_T(&mu);
  emxInit_real_T(&st, &a, 2, &dt_emlrtRTEI, true);
  st.site = &ts_emlrtRSI;
  ib = a->size[0] * a->size[1];
  a->size[0] = z->size[0];
  a->size[1] = z->size[1];
  emxEnsureCapacity_real_T(&st, a, ib, &dt_emlrtRTEI);
  ncols = z->size[0] * z->size[1];
  for (ib = 0; ib < ncols; ib++) {
    a->data[ib] = z->data[ib];
  }
  ncols = z->size[0];
  if (sigma->size[1] == 1) {
    b_csz_idx_1 = z->size[1];
  } else if (z->size[1] == 1) {
    b_csz_idx_1 = sigma->size[1];
  } else if (z->size[1] == sigma->size[1]) {
    b_csz_idx_1 = z->size[1];
  } else {
    emlrtErrorWithMessageIdR2018a(&st, &tb_emlrtRTEI,
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch",
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }
  ib = z->size[0] * z->size[1];
  z->size[0] = ncols;
  z->size[1] = b_csz_idx_1;
  emxEnsureCapacity_real_T(&st, z, ib, &fm_emlrtRTEI);
  if ((ncols != 0) && (b_csz_idx_1 != 0)) {
    outsize_idx_0 = (a->size[1] != 1);
    bcoef = (sigma->size[1] != 1);
    ib = b_csz_idx_1 - 1;
    for (col = 0; col <= ib; col++) {
      ncols = outsize_idx_0 * col;
      nfb = bcoef * col;
      inb = (a->size[0] != 1);
      nleft = z->size[0] - 1;
      for (csz_idx_1 = 0; csz_idx_1 <= nleft; csz_idx_1++) {
        z->data[csz_idx_1 + z->size[0] * col] =
            a->data[inb * csz_idx_1 + a->size[0] * ncols] / sigma->data[nfb];
      }
    }
  }
  emxFree_real_T(&a);
  emxFree_real_T(&sigma);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (zscore.c) */
