/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgeqp3.c
 *
 * Code generation for function 'xgeqp3'
 *
 */

/* Include files */
#include "xgeqp3.h"
#include "addt_wrapper_data.h"
#include "addt_wrapper_emxutil.h"
#include "addt_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo te_emlrtRSI = { 63, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 98, /* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 138,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 141,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 143,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 148,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 151,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 154,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 158,/* lineNo */
  "ceval_xgeqp3",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRTEInfo td_emlrtRTEI = { 61,/* lineNo */
  9,                                   /* colNo */
  "xgeqp3",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 92,/* lineNo */
  22,                                  /* colNo */
  "xgeqp3",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 105,/* lineNo */
  1,                                   /* colNo */
  "xgeqp3",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 97,/* lineNo */
  5,                                   /* colNo */
  "xgeqp3",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pName */
};

/* Function Definitions */
void xgeqp3(const emlrtStack *sp, emxArray_real_T *A, emxArray_real_T *tau,
            emxArray_int32_T *jpvt)
{
  static const char_T fname[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd',
    'g', 'e', 'q', 'p', '3' };

  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_ptrdiff_t *jpvt_t;
  int32_T b_na;
  int32_T i;
  int32_T m;
  int32_T ma;
  int32_T minmana;
  int32_T na;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  m = A->size[0];
  na = A->size[1];
  i = jpvt->size[0] * jpvt->size[1];
  jpvt->size[0] = 1;
  jpvt->size[1] = A->size[1];
  emxEnsureCapacity_int32_T(sp, jpvt, i, &td_emlrtRTEI);
  b_na = A->size[1];
  for (i = 0; i < b_na; i++) {
    jpvt->data[i] = 0;
  }

  st.site = &te_emlrtRSI;
  ma = A->size[0];
  b_na = A->size[1];
  minmana = muIntScalarMin_sint32(ma, b_na);
  i = tau->size[0];
  tau->size[0] = minmana;
  emxEnsureCapacity_real_T(&st, tau, i, &ud_emlrtRTEI);
  emxInit_ptrdiff_t(&st, &jpvt_t, 1, &vd_emlrtRTEI, true);
  if ((A->size[0] == 0) || (A->size[1] == 0) || (A->size[0] < 1) || (A->size[1] <
       1)) {
    i = tau->size[0];
    tau->size[0] = minmana;
    emxEnsureCapacity_real_T(&st, tau, i, &wd_emlrtRTEI);
    for (i = 0; i < minmana; i++) {
      tau->data[i] = 0.0;
    }

    b_st.site = &ue_emlrtRSI;
    if ((1 <= A->size[1]) && (A->size[1] > 2147483646)) {
      c_st.site = &kb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (ma = 0; ma < na; ma++) {
      jpvt->data[ma] = ma + 1;
    }
  } else {
    i = jpvt_t->size[0];
    jpvt_t->size[0] = A->size[1];
    emxEnsureCapacity_ptrdiff_t(&st, jpvt_t, i, &vd_emlrtRTEI);
    b_na = A->size[1];
    for (i = 0; i < b_na; i++) {
      jpvt_t->data[i] = (ptrdiff_t)0;
    }

    info_t = LAPACKE_dgeqp3(102, (ptrdiff_t)A->size[0], (ptrdiff_t)A->size[1],
      &A->data[0], (ptrdiff_t)A->size[0], &jpvt_t->data[0], &tau->data[0]);
    b_na = (int32_T)info_t;
    b_st.site = &ve_emlrtRSI;
    if (b_na != 0) {
      p = true;
      if (b_na != -4) {
        if (b_na == -1010) {
          emlrtErrorWithMessageIdR2018a(&b_st, &i_emlrtRTEI, "MATLAB:nomem",
            "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &j_emlrtRTEI,
            "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, fname, 12, b_na);
        }
      }
    } else {
      p = false;
    }

    if (p) {
      b_st.site = &we_emlrtRSI;
      if ((1 <= na) && (na > 2147483646)) {
        c_st.site = &kb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (b_na = 0; b_na < na; b_na++) {
        b_st.site = &xe_emlrtRSI;
        if ((1 <= m) && (m > 2147483646)) {
          c_st.site = &kb_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = 0; i < m; i++) {
          A->data[b_na * ma + i] = rtNaN;
        }
      }

      b_na = muIntScalarMin_sint32(m, na);
      b_st.site = &ye_emlrtRSI;
      for (ma = 0; ma < b_na; ma++) {
        tau->data[ma] = rtNaN;
      }

      m = b_na + 1;
      b_st.site = &af_emlrtRSI;
      if ((b_na + 1 <= minmana) && (minmana > 2147483646)) {
        c_st.site = &kb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (ma = m; ma <= minmana; ma++) {
        tau->data[ma - 1] = 0.0;
      }

      b_st.site = &bf_emlrtRSI;
      for (ma = 0; ma < na; ma++) {
        jpvt->data[ma] = ma + 1;
      }
    } else {
      b_st.site = &cf_emlrtRSI;
      if ((1 <= na) && (na > 2147483646)) {
        c_st.site = &kb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (ma = 0; ma < na; ma++) {
        jpvt->data[ma] = (int32_T)jpvt_t->data[ma];
      }
    }
  }

  emxFree_ptrdiff_t(&jpvt_t);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (xgeqp3.c) */
