/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qr.c
 *
 * Code generation for function 'qr'
 *
 */

/* Include files */
#include "qr.h"
#include "FSRfan_wrapper_data.h"
#include "FSRfan_wrapper_emxutil.h"
#include "FSRfan_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo oq_emlrtRSI =
    {
        25,   /* lineNo */
        "qr", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\qr.m" /* pathName
                                                                          */
};

static emlrtRSInfo pq_emlrtRSI = {
    35,       /* lineNo */
    "eml_qr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo qq_emlrtRSI = {
    153,       /* lineNo */
    "qr_econ", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo rq_emlrtRSI = {
    161,       /* lineNo */
    "qr_econ", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo sq_emlrtRSI = {
    162,       /* lineNo */
    "qr_econ", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo tq_emlrtRSI = {
    165,       /* lineNo */
    "qr_econ", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo uq_emlrtRSI = {
    169,       /* lineNo */
    "qr_econ", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo vq_emlrtRSI = {
    170,       /* lineNo */
    "qr_econ", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo wq_emlrtRSI = {
    174,       /* lineNo */
    "qr_econ", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo xq_emlrtRSI = {
    176,       /* lineNo */
    "qr_econ", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo yq_emlrtRSI = {
    177,       /* lineNo */
    "qr_econ", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo ar_emlrtRSI = {
    27,       /* lineNo */
    "xgeqrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqrf.m" /* pathName */
};

static emlrtRSInfo br_emlrtRSI = {
    91,             /* lineNo */
    "ceval_xgeqrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqrf.m" /* pathName */
};

static emlrtRSInfo cr_emlrtRSI = {
    93,             /* lineNo */
    "ceval_xgeqrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqrf.m" /* pathName */
};

static emlrtRSInfo dr_emlrtRSI = {
    94,             /* lineNo */
    "ceval_xgeqrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqrf.m" /* pathName */
};

static emlrtRSInfo er_emlrtRSI = {
    99,             /* lineNo */
    "ceval_xgeqrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqrf.m" /* pathName */
};

static emlrtRSInfo fr_emlrtRSI = {
    102,            /* lineNo */
    "ceval_xgeqrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqrf.m" /* pathName */
};

static emlrtRSInfo gr_emlrtRSI = {
    60,             /* lineNo */
    "ceval_xorgqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xorgqr.m" /* pathName */
};

static emlrtRSInfo hr_emlrtRSI = {
    189,        /* lineNo */
    "unpackQR", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo ir_emlrtRSI = {
    14,       /* lineNo */
    "xorgqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xorgqr.m" /* pathName */
};

static emlrtRTEInfo ti_emlrtRTEI = {
    35,       /* lineNo */
    25,       /* colNo */
    "eml_qr", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pName */
};

static emlrtRTEInfo ui_emlrtRTEI = {
    73,       /* lineNo */
    22,       /* colNo */
    "xgeqrf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqrf.m" /* pName */
};

static emlrtRTEInfo vi_emlrtRTEI = {
    75,       /* lineNo */
    5,        /* colNo */
    "xgeqrf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqrf.m" /* pName */
};

static emlrtRTEInfo wi_emlrtRTEI = {
    158,      /* lineNo */
    20,       /* colNo */
    "eml_qr", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pName */
};

static emlrtRTEInfo xi_emlrtRTEI = {
    175,      /* lineNo */
    20,       /* colNo */
    "eml_qr", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pName */
};

static emlrtRTEInfo yi_emlrtRTEI = {
    174,      /* lineNo */
    1,        /* colNo */
    "eml_qr", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pName */
};

static emlrtRTEInfo aj_emlrtRTEI =
    {
        1,    /* lineNo */
        20,   /* colNo */
        "qr", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\qr.m" /* pName
                                                                          */
};

/* Function Definitions */
void qr(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *Q,
        emxArray_real_T *R)
{
  static const char_T b_fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                     '_', 'd', 'o', 'r', 'g', 'q', 'r'};
  static const char_T fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'g', 'e', 'q', 'r', 'f'};
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_real_T *b_A;
  emxArray_real_T *tau;
  int32_T i;
  int32_T m;
  int32_T ma;
  int32_T minmana;
  int32_T n;
  int32_T na;
  boolean_T b_p;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_A, 2, &aj_emlrtRTEI, true);
  st.site = &oq_emlrtRSI;
  b_st.site = &pq_emlrtRSI;
  i = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(&b_st, b_A, i, &ti_emlrtRTEI);
  na = A->size[0] * A->size[1];
  for (i = 0; i < na; i++) {
    b_A->data[i] = A->data[i];
  }
  emxInit_real_T(&b_st, &tau, 1, &aj_emlrtRTEI, true);
  c_st.site = &qq_emlrtRSI;
  m = b_A->size[0];
  n = b_A->size[1];
  d_st.site = &ar_emlrtRSI;
  ma = b_A->size[0];
  na = b_A->size[1];
  minmana = muIntScalarMin_sint32(ma, na);
  i = tau->size[0];
  tau->size[0] = minmana;
  emxEnsureCapacity_real_T(&d_st, tau, i, &ui_emlrtRTEI);
  if ((b_A->size[0] == 0) || (b_A->size[1] == 0)) {
    i = tau->size[0];
    tau->size[0] = minmana;
    emxEnsureCapacity_real_T(&d_st, tau, i, &vi_emlrtRTEI);
    for (i = 0; i < minmana; i++) {
      tau->data[i] = 0.0;
    }
  } else {
    info_t =
        LAPACKE_dgeqrf(102, (ptrdiff_t)b_A->size[0], (ptrdiff_t)b_A->size[1],
                       &b_A->data[0], (ptrdiff_t)b_A->size[0], &tau->data[0]);
    na = (int32_T)info_t;
    e_st.site = &br_emlrtRSI;
    if (na != 0) {
      p = true;
      if (na != -4) {
        if (na == -1010) {
          emlrtErrorWithMessageIdR2018a(&e_st, &j_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(
              &e_st, &k_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
              "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &fname[0], 12, na);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      e_st.site = &cr_emlrtRSI;
      if ((1 <= n) && (n > 2147483646)) {
        f_st.site = &ob_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }
      for (na = 0; na < n; na++) {
        e_st.site = &dr_emlrtRSI;
        if ((1 <= m) && (m > 2147483646)) {
          f_st.site = &ob_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }
        for (i = 0; i < m; i++) {
          b_A->data[na * ma + i] = rtNaN;
        }
      }
      na = muIntScalarMin_sint32(m, n);
      e_st.site = &er_emlrtRSI;
      for (i = 0; i < na; i++) {
        tau->data[i] = rtNaN;
      }
      ma = na + 1;
      e_st.site = &fr_emlrtRSI;
      if ((na + 1 <= minmana) && (minmana > 2147483646)) {
        f_st.site = &ob_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }
      for (i = ma; i <= minmana; i++) {
        tau->data[i - 1] = 0.0;
      }
    }
  }
  m = b_A->size[0];
  n = b_A->size[1];
  minmana = muIntScalarMin_sint32(m, n);
  i = R->size[0] * R->size[1];
  R->size[0] = minmana;
  R->size[1] = b_A->size[1];
  emxEnsureCapacity_real_T(&b_st, R, i, &wi_emlrtRTEI);
  c_st.site = &rq_emlrtRSI;
  if ((1 <= minmana) && (minmana > 2147483646)) {
    d_st.site = &ob_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  for (na = 0; na < minmana; na++) {
    c_st.site = &sq_emlrtRSI;
    for (i = 0; i <= na; i++) {
      R->data[i + R->size[0] * na] = b_A->data[i + b_A->size[0] * na];
    }
    ma = na + 2;
    c_st.site = &tq_emlrtRSI;
    for (i = ma; i <= minmana; i++) {
      R->data[(i + R->size[0] * na) - 1] = 0.0;
    }
  }
  ma = b_A->size[0] + 1;
  c_st.site = &uq_emlrtRSI;
  if ((b_A->size[0] + 1 <= b_A->size[1]) && (b_A->size[1] > 2147483646)) {
    d_st.site = &ob_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  for (na = ma; na <= n; na++) {
    c_st.site = &vq_emlrtRSI;
    for (i = 0; i < minmana; i++) {
      R->data[i + R->size[0] * (na - 1)] =
          b_A->data[i + b_A->size[0] * (na - 1)];
    }
  }
  c_st.site = &wq_emlrtRSI;
  d_st.site = &hr_emlrtRSI;
  e_st.site = &ir_emlrtRSI;
  if ((b_A->size[0] != 0) && (b_A->size[1] != 0)) {
    info_t = LAPACKE_dorgqr(102, (ptrdiff_t)b_A->size[0], (ptrdiff_t)minmana,
                            (ptrdiff_t)minmana, &b_A->data[0],
                            (ptrdiff_t)b_A->size[0], &tau->data[0]);
    na = (int32_T)info_t;
    f_st.site = &gr_emlrtRSI;
    if (na != 0) {
      p = true;
      b_p = false;
      if (na == -7) {
        b_p = true;
      } else if (na == -5) {
        b_p = true;
      }
      if (!b_p) {
        if (na == -1010) {
          emlrtErrorWithMessageIdR2018a(&f_st, &j_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&f_st, &k_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &b_fname[0], 12, na);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      na = b_A->size[0];
      ma = b_A->size[1];
      i = b_A->size[0] * b_A->size[1];
      b_A->size[0] = na;
      b_A->size[1] = ma;
      emxEnsureCapacity_real_T(&e_st, b_A, i, &yi_emlrtRTEI);
      na *= ma;
      for (i = 0; i < na; i++) {
        b_A->data[i] = rtNaN;
      }
    }
  }
  emxFree_real_T(&tau);
  i = Q->size[0] * Q->size[1];
  Q->size[0] = m;
  Q->size[1] = minmana;
  emxEnsureCapacity_real_T(&b_st, Q, i, &xi_emlrtRTEI);
  c_st.site = &xq_emlrtRSI;
  for (na = 0; na < minmana; na++) {
    c_st.site = &yq_emlrtRSI;
    if ((1 <= m) && (m > 2147483646)) {
      d_st.site = &ob_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (i = 0; i < m; i++) {
      Q->data[i + Q->size[0] * na] = b_A->data[i + b_A->size[0] * na];
    }
  }
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (qr.c) */
