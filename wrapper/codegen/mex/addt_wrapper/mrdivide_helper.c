/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mrdivide_helper.c
 *
 * Code generation for function 'mrdivide_helper'
 *
 */

/* Include files */
#include "mrdivide_helper.h"
#include "addt_wrapper_data.h"
#include "addt_wrapper_emxutil.h"
#include "addt_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xgeqp3.h"
#include "blas.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo ae_emlrtRSI = { 42, /* lineNo */
  "mrdiv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 44, /* lineNo */
  "mrdiv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 67, /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 107,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 112,/* lineNo */
  "lusolveNxN",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 135,/* lineNo */
  "XtimesInvA",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 140,/* lineNo */
  "XtimesInvA",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 142,/* lineNo */
  "XtimesInvA",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 147,/* lineNo */
  "XtimesInvA",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 27, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 91, /* lineNo */
  "ceval_xgetrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 58, /* lineNo */
  "ceval_xgetrf",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 67, /* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 90, /* lineNo */
  "warn_singular",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 41, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 45, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 52, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 85, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 92, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 94, /* lineNo */
  "LSQFromQR",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo if_emlrtRSI = { 104,/* lineNo */
  "LSQFromQR",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo jf_emlrtRSI = { 31, /* lineNo */
  "xunormqr",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 103,/* lineNo */
  "ceval_xunormqr",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 31,/* lineNo */
  5,                                   /* colNo */
  "mrdivide_helper",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 42,/* lineNo */
  9,                                   /* colNo */
  "mrdivide_helper",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 42,/* lineNo */
  5,                                   /* colNo */
  "mrdivide_helper",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 25,/* lineNo */
  14,                                  /* colNo */
  "mrdivide_helper",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 44,/* lineNo */
  35,                                  /* colNo */
  "mrdivide_helper",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 1,/* lineNo */
  37,                                  /* colNo */
  "xgetrf",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 41,/* lineNo */
  2,                                   /* colNo */
  "qrsolve",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 58,/* lineNo */
  29,                                  /* colNo */
  "xgetrf",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 52,/* lineNo */
  1,                                   /* colNo */
  "qrsolve",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 89,/* lineNo */
  27,                                  /* colNo */
  "xgetrf",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 85,/* lineNo */
  5,                                   /* colNo */
  "qrsolve",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 44,/* lineNo */
  5,                                   /* colNo */
  "mrdivide_helper",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 44,/* lineNo */
  9,                                   /* colNo */
  "mrdivide_helper",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 58,/* lineNo */
  5,                                   /* colNo */
  "xgetrf",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pName */
};

/* Function Definitions */
void b_mrdiv(const emlrtStack *sp, emxArray_real_T *A, const emxArray_real_T *B)
{
  static const char_T fname[19] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd',
    'g', 'e', 't', 'r', 'f', '_', 'w', 'o', 'r', 'k' };

  static const char_T b_fname[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_',
    'd', 'o', 'r', 'm', 'q', 'r' };

  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t n_t;
  ptrdiff_t nrc_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_int32_T *jpvt;
  emxArray_ptrdiff_t *ipiv_t;
  emxArray_real_T *Y;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  real_T temp;
  int32_T B_idx_0;
  int32_T i;
  int32_T j;
  int32_T loop_ub;
  int32_T n;
  int32_T nb;
  int32_T rankA;
  char_T DIAGA1;
  char_T SIDE1;
  char_T TRANSA1;
  char_T UPLO1;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &Y, 2, &rd_emlrtRTEI, true);
  emxInit_real_T(sp, &b_B, 2, &jd_emlrtRTEI, true);
  emxInit_real_T(sp, &b_A, 2, &lc_emlrtRTEI, true);
  emxInit_real_T(sp, &tau, 1, &lc_emlrtRTEI, true);
  emxInit_int32_T(sp, &jpvt, 2, &lc_emlrtRTEI, true);
  emxInit_ptrdiff_t(sp, &ipiv_t, 1, &sd_emlrtRTEI, true);
  if ((A->size[0] == 0) || (A->size[1] == 0) || ((B->size[0] == 0) || (B->size[1]
        == 0))) {
    B_idx_0 = A->size[0];
    i = A->size[0] * A->size[1];
    A->size[1] = B->size[0];
    emxEnsureCapacity_real_T(sp, A, i, &ic_emlrtRTEI);
    loop_ub = B->size[0];
    for (i = 0; i < loop_ub; i++) {
      for (rankA = 0; rankA < B_idx_0; rankA++) {
        A->data[rankA + A->size[0] * i] = 0.0;
      }
    }
  } else if (B->size[0] == B->size[1]) {
    st.site = &ae_emlrtRSI;
    b_st.site = &ce_emlrtRSI;
    c_st.site = &de_emlrtRSI;
    n = B->size[1];
    d_st.site = &fe_emlrtRSI;
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = B->size[0];
    b_A->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&d_st, b_A, i, &kd_emlrtRTEI);
    loop_ub = B->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_A->data[i] = B->data[i];
    }

    e_st.site = &je_emlrtRSI;
    f_st.site = &le_emlrtRSI;
    i = ipiv_t->size[0];
    ipiv_t->size[0] = muIntScalarMin_sint32(n, n);
    emxEnsureCapacity_ptrdiff_t(&f_st, ipiv_t, i, &md_emlrtRTEI);
    nrc_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)B->size[1], (ptrdiff_t)B->size[1],
      &b_A->data[0], (ptrdiff_t)B->size[1], &ipiv_t->data[0]);
    n = (int32_T)nrc_t;
    i = jpvt->size[0] * jpvt->size[1];
    jpvt->size[0] = 1;
    jpvt->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&e_st, jpvt, i, &od_emlrtRTEI);
    f_st.site = &ke_emlrtRSI;
    if (n < 0) {
      if (n == -1010) {
        emlrtErrorWithMessageIdR2018a(&f_st, &i_emlrtRTEI, "MATLAB:nomem",
          "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&f_st, &j_emlrtRTEI,
          "Coder:toolbox:LAPACKCallErrorInfo",
          "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, fname, 12, n);
      }
    }

    i = ipiv_t->size[0] - 1;
    for (B_idx_0 = 0; B_idx_0 <= i; B_idx_0++) {
      jpvt->data[B_idx_0] = (int32_T)ipiv_t->data[B_idx_0];
    }

    nb = A->size[0];
    d_st.site = &ge_emlrtRSI;
    if (A->size[0] >= 1) {
      e_st.site = &ne_emlrtRSI;
      temp = 1.0;
      DIAGA1 = 'N';
      TRANSA1 = 'N';
      UPLO1 = 'U';
      SIDE1 = 'R';
      nrc_t = (ptrdiff_t)A->size[0];
      n_t = (ptrdiff_t)B->size[1];
      lda_t = (ptrdiff_t)B->size[1];
      ldb_t = (ptrdiff_t)A->size[0];
      dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &nrc_t, &n_t, &temp, &b_A->data[0],
            &lda_t, &A->data[0], &ldb_t);
    }

    d_st.site = &he_emlrtRSI;
    if (nb >= 1) {
      e_st.site = &ne_emlrtRSI;
      temp = 1.0;
      DIAGA1 = 'U';
      TRANSA1 = 'N';
      UPLO1 = 'L';
      SIDE1 = 'R';
      nrc_t = (ptrdiff_t)nb;
      n_t = (ptrdiff_t)B->size[1];
      lda_t = (ptrdiff_t)B->size[1];
      ldb_t = (ptrdiff_t)nb;
      dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &nrc_t, &n_t, &temp, &b_A->data[0],
            &lda_t, &A->data[0], &ldb_t);
    }

    i = B->size[1] - 1;
    for (j = i; j >= 1; j--) {
      rankA = jpvt->data[j - 1];
      if (rankA != j) {
        d_st.site = &ie_emlrtRSI;
        if ((1 <= nb) && (nb > 2147483646)) {
          e_st.site = &kb_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        for (loop_ub = 0; loop_ub < nb; loop_ub++) {
          temp = A->data[loop_ub + A->size[0] * (j - 1)];
          A->data[loop_ub + A->size[0] * (j - 1)] = A->data[loop_ub + A->size[0]
            * (rankA - 1)];
          A->data[loop_ub + A->size[0] * (rankA - 1)] = temp;
        }
      }
    }

    if (((B->size[0] != 1) || (B->size[1] != 1)) && (n > 0)) {
      c_st.site = &ee_emlrtRSI;
      d_st.site = &pe_emlrtRSI;
      warning(&d_st);
    }
  } else {
    st.site = &be_emlrtRSI;
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = A->size[1];
    b_B->size[1] = A->size[0];
    emxEnsureCapacity_real_T(&st, b_B, i, &jd_emlrtRTEI);
    loop_ub = A->size[0];
    for (i = 0; i < loop_ub; i++) {
      n = A->size[1];
      for (rankA = 0; rankA < n; rankA++) {
        b_B->data[rankA + b_B->size[0] * i] = A->data[i + A->size[0] * rankA];
      }
    }

    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = B->size[1];
    b_A->size[1] = B->size[0];
    emxEnsureCapacity_real_T(&st, b_A, i, &ld_emlrtRTEI);
    loop_ub = B->size[0];
    for (i = 0; i < loop_ub; i++) {
      n = B->size[1];
      for (rankA = 0; rankA < n; rankA++) {
        b_A->data[rankA + b_A->size[0] * i] = B->data[i + B->size[0] * rankA];
      }
    }

    b_st.site = &qe_emlrtRSI;
    xgeqp3(&b_st, b_A, tau, jpvt);
    b_st.site = &re_emlrtRSI;
    rankA = rankFromQR(&b_st, b_A);
    b_st.site = &se_emlrtRSI;
    nb = b_B->size[1];
    i = Y->size[0] * Y->size[1];
    Y->size[0] = b_A->size[1];
    Y->size[1] = b_B->size[1];
    emxEnsureCapacity_real_T(&b_st, Y, i, &nd_emlrtRTEI);
    loop_ub = b_A->size[1] * b_B->size[1];
    for (i = 0; i < loop_ub; i++) {
      Y->data[i] = 0.0;
    }

    c_st.site = &ff_emlrtRSI;
    d_st.site = &jf_emlrtRSI;
    if ((b_A->size[0] != 0) && (b_A->size[1] != 0) && ((b_B->size[0] != 0) &&
         (b_B->size[1] != 0))) {
      nrc_t = (ptrdiff_t)b_B->size[0];
      nrc_t = LAPACKE_dormqr(102, 'L', 'T', nrc_t, (ptrdiff_t)b_B->size[1],
        (ptrdiff_t)muIntScalarMin_sint32(b_A->size[0], b_A->size[1]), &b_A->
        data[0], (ptrdiff_t)b_A->size[0], &tau->data[0], &b_B->data[0], nrc_t);
      e_st.site = &kf_emlrtRSI;
      n = (int32_T)nrc_t;
      if (n != 0) {
        p = true;
        b_p = false;
        if (n == -7) {
          b_p = true;
        } else if (n == -9) {
          b_p = true;
        } else {
          if (n == -10) {
            b_p = true;
          }
        }

        if (!b_p) {
          if (n == -1010) {
            emlrtErrorWithMessageIdR2018a(&e_st, &i_emlrtRTEI, "MATLAB:nomem",
              "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(&e_st, &j_emlrtRTEI,
              "Coder:toolbox:LAPACKCallErrorInfo",
              "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, b_fname, 12, n);
          }
        }
      } else {
        p = false;
      }

      if (p) {
        B_idx_0 = b_B->size[0];
        n = b_B->size[1];
        i = b_B->size[0] * b_B->size[1];
        b_B->size[0] = B_idx_0;
        b_B->size[1] = n;
        emxEnsureCapacity_real_T(&d_st, b_B, i, &pd_emlrtRTEI);
        loop_ub = B_idx_0 * n;
        for (i = 0; i < loop_ub; i++) {
          b_B->data[i] = rtNaN;
        }
      }
    }

    c_st.site = &gf_emlrtRSI;
    if ((1 <= nb) && (nb > 2147483646)) {
      d_st.site = &kb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (B_idx_0 = 0; B_idx_0 < nb; B_idx_0++) {
      c_st.site = &hf_emlrtRSI;
      if ((1 <= rankA) && (rankA > 2147483646)) {
        d_st.site = &kb_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (loop_ub = 0; loop_ub < rankA; loop_ub++) {
        Y->data[(jpvt->data[loop_ub] + Y->size[0] * B_idx_0) - 1] = b_B->
          data[loop_ub + b_B->size[0] * B_idx_0];
      }

      for (j = rankA; j >= 1; j--) {
        i = jpvt->data[j - 1];
        Y->data[(i + Y->size[0] * B_idx_0) - 1] /= b_A->data[(j + b_A->size[0] *
          (j - 1)) - 1];
        c_st.site = &if_emlrtRSI;
        for (loop_ub = 0; loop_ub <= j - 2; loop_ub++) {
          Y->data[(jpvt->data[loop_ub] + Y->size[0] * B_idx_0) - 1] -= Y->data
            [(jpvt->data[j - 1] + Y->size[0] * B_idx_0) - 1] * b_A->data[loop_ub
            + b_A->size[0] * (j - 1)];
        }
      }
    }

    i = A->size[0] * A->size[1];
    A->size[0] = Y->size[1];
    A->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(sp, A, i, &qd_emlrtRTEI);
    loop_ub = Y->size[0];
    for (i = 0; i < loop_ub; i++) {
      n = Y->size[1];
      for (rankA = 0; rankA < n; rankA++) {
        A->data[rankA + A->size[0] * i] = Y->data[i + Y->size[0] * rankA];
      }
    }
  }

  emxFree_ptrdiff_t(&ipiv_t);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&tau);
  emxFree_real_T(&b_A);
  emxFree_real_T(&b_B);
  emxFree_real_T(&Y);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void mrdiv(const emlrtStack *sp, const emxArray_real_T *A, const real_T B_data[],
           const int32_T B_size[2], emxArray_real_T *Y)
{
  emxArray_real_T *tau;
  real_T B;
  int32_T i;
  int32_T loop_ub;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &tau, 1, &lc_emlrtRTEI, true);
  if ((A->size[0] == 0) || (B_size[0] == 0)) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[0];
    Y->size[1] = B_size[0];
    emxEnsureCapacity_real_T(sp, Y, i, &ic_emlrtRTEI);
    loop_ub = A->size[0] * B_size[0];
    for (i = 0; i < loop_ub; i++) {
      Y->data[i] = 0.0;
    }
  } else {
    B = B_data[0];
    loop_ub = A->size[0];
    i = tau->size[0];
    tau->size[0] = A->size[0];
    emxEnsureCapacity_real_T(sp, tau, i, &jc_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      tau->data[i] = A->data[i] / B;
    }

    i = Y->size[0] * Y->size[1];
    Y->size[0] = tau->size[0];
    Y->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Y, i, &kc_emlrtRTEI);
    loop_ub = tau->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y->data[i] = tau->data[i];
    }
  }

  emxFree_real_T(&tau);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (mrdivide_helper.c) */
