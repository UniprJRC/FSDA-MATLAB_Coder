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
#include "LXS_wrapper_data.h"
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo hx_emlrtRSI =
    {
        25,   /* lineNo */
        "qr", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\qr.m" /* pathName
                                                                          */
};

static emlrtRSInfo ix_emlrtRSI = {
    35,       /* lineNo */
    "eml_qr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo jx_emlrtRSI = {
    153,       /* lineNo */
    "qr_econ", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo kx_emlrtRSI = {
    161,       /* lineNo */
    "qr_econ", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo lx_emlrtRSI = {
    162,       /* lineNo */
    "qr_econ", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo mx_emlrtRSI = {
    165,       /* lineNo */
    "qr_econ", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo nx_emlrtRSI = {
    169,       /* lineNo */
    "qr_econ", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo ox_emlrtRSI = {
    170,       /* lineNo */
    "qr_econ", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo px_emlrtRSI = {
    174,       /* lineNo */
    "qr_econ", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo qx_emlrtRSI = {
    176,       /* lineNo */
    "qr_econ", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo rx_emlrtRSI = {
    177,       /* lineNo */
    "qr_econ", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo sx_emlrtRSI = {
    27,       /* lineNo */
    "xgeqrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqrf.m" /* pathName */
};

static emlrtRSInfo tx_emlrtRSI = {
    91,             /* lineNo */
    "ceval_xgeqrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqrf.m" /* pathName */
};

static emlrtRSInfo ux_emlrtRSI = {
    93,             /* lineNo */
    "ceval_xgeqrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqrf.m" /* pathName */
};

static emlrtRSInfo vx_emlrtRSI = {
    94,             /* lineNo */
    "ceval_xgeqrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqrf.m" /* pathName */
};

static emlrtRSInfo wx_emlrtRSI = {
    99,             /* lineNo */
    "ceval_xgeqrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqrf.m" /* pathName */
};

static emlrtRSInfo xx_emlrtRSI = {
    102,            /* lineNo */
    "ceval_xgeqrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqrf.m" /* pathName */
};

static emlrtRSInfo yx_emlrtRSI = {
    60,             /* lineNo */
    "ceval_xorgqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xorgqr.m" /* pathName */
};

static emlrtRSInfo ay_emlrtRSI = {
    189,        /* lineNo */
    "unpackQR", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pathName */
};

static emlrtRSInfo by_emlrtRSI = {
    14,       /* lineNo */
    "xorgqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xorgqr.m" /* pathName */
};

static emlrtRTEInfo sp_emlrtRTEI = {
    35,       /* lineNo */
    25,       /* colNo */
    "eml_qr", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pName */
};

static emlrtRTEInfo tp_emlrtRTEI = {
    73,       /* lineNo */
    22,       /* colNo */
    "xgeqrf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqrf.m" /* pName */
};

static emlrtRTEInfo up_emlrtRTEI = {
    75,       /* lineNo */
    5,        /* colNo */
    "xgeqrf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqrf.m" /* pName */
};

static emlrtRTEInfo vp_emlrtRTEI = {
    158,      /* lineNo */
    20,       /* colNo */
    "eml_qr", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pName */
};

static emlrtRTEInfo wp_emlrtRTEI = {
    175,      /* lineNo */
    20,       /* colNo */
    "eml_qr", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pName */
};

static emlrtRTEInfo xp_emlrtRTEI = {
    174,      /* lineNo */
    1,        /* colNo */
    "eml_qr", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_qr."
    "m" /* pName */
};

static emlrtRTEInfo yp_emlrtRTEI =
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
  emxInit_real_T(sp, &b_A, 2, &yp_emlrtRTEI, true);
  st.site = &hx_emlrtRSI;
  b_st.site = &ix_emlrtRSI;
  i = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(&b_st, b_A, i, &sp_emlrtRTEI);
  na = A->size[0] * A->size[1];
  for (i = 0; i < na; i++) {
    b_A->data[i] = A->data[i];
  }
  emxInit_real_T(&b_st, &tau, 1, &yp_emlrtRTEI, true);
  c_st.site = &jx_emlrtRSI;
  m = b_A->size[0];
  n = b_A->size[1];
  d_st.site = &sx_emlrtRSI;
  ma = b_A->size[0];
  na = b_A->size[1];
  minmana = muIntScalarMin_sint32(ma, na);
  i = tau->size[0];
  tau->size[0] = minmana;
  emxEnsureCapacity_real_T(&d_st, tau, i, &tp_emlrtRTEI);
  if ((b_A->size[0] == 0) || (b_A->size[1] == 0)) {
    i = tau->size[0];
    tau->size[0] = minmana;
    emxEnsureCapacity_real_T(&d_st, tau, i, &up_emlrtRTEI);
    for (i = 0; i < minmana; i++) {
      tau->data[i] = 0.0;
    }
  } else {
    info_t =
        LAPACKE_dgeqrf(102, (ptrdiff_t)b_A->size[0], (ptrdiff_t)b_A->size[1],
                       &b_A->data[0], (ptrdiff_t)b_A->size[0], &tau->data[0]);
    na = (int32_T)info_t;
    e_st.site = &tx_emlrtRSI;
    if (na != 0) {
      p = true;
      if (na != -4) {
        if (na == -1010) {
          emlrtErrorWithMessageIdR2018a(&e_st, &k_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(
              &e_st, &l_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
              "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &fname[0], 12, na);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      e_st.site = &ux_emlrtRSI;
      if ((1 <= n) && (n > 2147483646)) {
        f_st.site = &ic_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }
      for (na = 0; na < n; na++) {
        e_st.site = &vx_emlrtRSI;
        if ((1 <= m) && (m > 2147483646)) {
          f_st.site = &ic_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }
        for (i = 0; i < m; i++) {
          b_A->data[na * ma + i] = rtNaN;
        }
      }
      na = muIntScalarMin_sint32(m, n);
      e_st.site = &wx_emlrtRSI;
      for (i = 0; i < na; i++) {
        tau->data[i] = rtNaN;
      }
      ma = na + 1;
      e_st.site = &xx_emlrtRSI;
      if ((na + 1 <= minmana) && (minmana > 2147483646)) {
        f_st.site = &ic_emlrtRSI;
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
  emxEnsureCapacity_real_T(&b_st, R, i, &vp_emlrtRTEI);
  c_st.site = &kx_emlrtRSI;
  if ((1 <= minmana) && (minmana > 2147483646)) {
    d_st.site = &ic_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  for (na = 0; na < minmana; na++) {
    c_st.site = &lx_emlrtRSI;
    for (i = 0; i <= na; i++) {
      R->data[i + R->size[0] * na] = b_A->data[i + b_A->size[0] * na];
    }
    ma = na + 2;
    c_st.site = &mx_emlrtRSI;
    for (i = ma; i <= minmana; i++) {
      R->data[(i + R->size[0] * na) - 1] = 0.0;
    }
  }
  ma = b_A->size[0] + 1;
  c_st.site = &nx_emlrtRSI;
  if ((b_A->size[0] + 1 <= b_A->size[1]) && (b_A->size[1] > 2147483646)) {
    d_st.site = &ic_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  for (na = ma; na <= n; na++) {
    c_st.site = &ox_emlrtRSI;
    for (i = 0; i < minmana; i++) {
      R->data[i + R->size[0] * (na - 1)] =
          b_A->data[i + b_A->size[0] * (na - 1)];
    }
  }
  c_st.site = &px_emlrtRSI;
  d_st.site = &ay_emlrtRSI;
  e_st.site = &by_emlrtRSI;
  if ((b_A->size[0] != 0) && (b_A->size[1] != 0)) {
    info_t = LAPACKE_dorgqr(102, (ptrdiff_t)b_A->size[0], (ptrdiff_t)minmana,
                            (ptrdiff_t)minmana, &b_A->data[0],
                            (ptrdiff_t)b_A->size[0], &tau->data[0]);
    na = (int32_T)info_t;
    f_st.site = &yx_emlrtRSI;
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
          emlrtErrorWithMessageIdR2018a(&f_st, &k_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&f_st, &l_emlrtRTEI,
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
      emxEnsureCapacity_real_T(&e_st, b_A, i, &xp_emlrtRTEI);
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
  emxEnsureCapacity_real_T(&b_st, Q, i, &wp_emlrtRTEI);
  c_st.site = &qx_emlrtRSI;
  for (na = 0; na < minmana; na++) {
    c_st.site = &rx_emlrtRSI;
    if ((1 <= m) && (m > 2147483646)) {
      d_st.site = &ic_emlrtRSI;
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
