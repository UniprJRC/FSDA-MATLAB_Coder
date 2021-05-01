/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qrsolve.c
 *
 * Code generation for function 'qrsolve'
 *
 */

/* Include files */
#include "qrsolve.h"
#include "FSMmmd_wrapper_data.h"
#include "FSMmmd_wrapper_emxutil.h"
#include "FSMmmd_wrapper_mexutil.h"
#include "FSMmmd_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo
    aj_emlrtRSI =
        {
            61,        /* lineNo */
            "qrsolve", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo
    bj_emlrtRSI =
        {
            72,        /* lineNo */
            "qrsolve", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo
    cj_emlrtRSI =
        {
            85,        /* lineNo */
            "qrsolve", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo dj_emlrtRSI = {
    63,       /* lineNo */
    "xgeqp3", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pathName */
};

static emlrtRSInfo ej_emlrtRSI = {
    98,             /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pathName */
};

static emlrtRSInfo fj_emlrtRSI = {
    138,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pathName */
};

static emlrtRSInfo gj_emlrtRSI = {
    141,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pathName */
};

static emlrtRSInfo hj_emlrtRSI = {
    143,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pathName */
};

static emlrtRSInfo ij_emlrtRSI = {
    148,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pathName */
};

static emlrtRSInfo jj_emlrtRSI = {
    151,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pathName */
};

static emlrtRSInfo kj_emlrtRSI = {
    154,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pathName */
};

static emlrtRSInfo lj_emlrtRSI = {
    158,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pathName */
};

static emlrtRSInfo
    mj_emlrtRSI =
        {
            173,          /* lineNo */
            "rankFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo
    nj_emlrtRSI =
        {
            172,          /* lineNo */
            "rankFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo
    oj_emlrtRSI =
        {
            119,         /* lineNo */
            "LSQFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo
    pj_emlrtRSI =
        {
            126,         /* lineNo */
            "LSQFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo
    qj_emlrtRSI =
        {
            128,         /* lineNo */
            "LSQFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo
    rj_emlrtRSI =
        {
            138,         /* lineNo */
            "LSQFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo sj_emlrtRSI = {
    31,         /* lineNo */
    "xunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xunormqr.m" /* pathName */
};

static emlrtRSInfo tj_emlrtRSI = {
    102,              /* lineNo */
    "ceval_xunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xunormqr.m" /* pathName */
};

static emlrtRSInfo uj_emlrtRSI = {
    108,              /* lineNo */
    "ceval_xunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xunormqr.m" /* pathName */
};

static emlrtRSInfo vj_emlrtRSI = {
    18,          /* lineNo */
    "xzunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzunormqr.m" /* pathName */
};

static emlrtRSInfo wj_emlrtRSI = {
    21,          /* lineNo */
    "xzunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzunormqr.m" /* pathName */
};

static emlrtRSInfo xj_emlrtRSI = {
    23,          /* lineNo */
    "xzunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzunormqr.m" /* pathName */
};

static emlrtRSInfo yj_emlrtRSI = {
    29,          /* lineNo */
    "xzunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzunormqr.m" /* pathName */
};

static emlrtRTEInfo bi_emlrtRTEI = {
    1,        /* lineNo */
    32,       /* colNo */
    "xgeqp3", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pName */
};

static emlrtRTEInfo ci_emlrtRTEI = {
    61,       /* lineNo */
    9,        /* colNo */
    "xgeqp3", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pName */
};

static emlrtRTEInfo di_emlrtRTEI = {
    92,       /* lineNo */
    22,       /* colNo */
    "xgeqp3", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pName */
};

static emlrtRTEInfo ei_emlrtRTEI = {
    105,      /* lineNo */
    1,        /* colNo */
    "xgeqp3", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pName */
};

static emlrtRTEInfo fi_emlrtRTEI = {
    97,       /* lineNo */
    5,        /* colNo */
    "xgeqp3", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pName */
};

static emlrtRTEInfo
    gi_emlrtRTEI =
        {
            85,        /* lineNo */
            26,        /* colNo */
            "qrsolve", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pName */
};

static emlrtRTEInfo
    hi_emlrtRTEI =
        {
            1,         /* lineNo */
            24,        /* colNo */
            "qrsolve", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pName */
};

static emlrtRTEInfo
    ii_emlrtRTEI =
        {
            109,       /* lineNo */
            1,         /* colNo */
            "qrsolve", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pName */
};

static emlrtRTEInfo
    ji_emlrtRTEI =
        {
            119,       /* lineNo */
            5,         /* colNo */
            "qrsolve", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pName */
};

/* Function Declarations */
static void LSQFromQR(const emlrtStack *sp, const emxArray_real_T *A,
                      const emxArray_real_T *tau, const emxArray_int32_T *jpvt,
                      emxArray_real_T *B, int32_T rankA, emxArray_real_T *Y);

/* Function Definitions */
static void LSQFromQR(const emlrtStack *sp, const emxArray_real_T *A,
                      const emxArray_real_T *tau, const emxArray_int32_T *jpvt,
                      emxArray_real_T *B, int32_T rankA, emxArray_real_T *Y)
{
  static const char_T fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'o', 'r', 'm', 'q', 'r'};
  ptrdiff_t nrc_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T wj;
  int32_T a_tmp;
  int32_T b_nb;
  int32_T i;
  int32_T info;
  int32_T j;
  int32_T k;
  int32_T mn;
  int32_T nb;
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
  nb = B->size[1];
  mn = Y->size[0] * Y->size[1];
  Y->size[0] = A->size[1];
  Y->size[1] = B->size[1];
  emxEnsureCapacity_real_T(sp, Y, mn, &ii_emlrtRTEI);
  info = A->size[1] * B->size[1];
  for (mn = 0; mn < info; mn++) {
    Y->data[mn] = 0.0;
  }
  st.site = &oj_emlrtRSI;
  b_st.site = &sj_emlrtRSI;
  if ((A->size[0] != 0) && (A->size[1] != 0) &&
      ((B->size[0] != 0) && (B->size[1] != 0))) {
    nrc_t = (ptrdiff_t)B->size[0];
    nrc_t = LAPACKE_dormqr(
        102, 'L', 'T', nrc_t, (ptrdiff_t)B->size[1],
        (ptrdiff_t)muIntScalarMin_sint32(A->size[0], A->size[1]), &A->data[0],
        (ptrdiff_t)A->size[0], &tau->data[0], &B->data[0], nrc_t);
    info = (int32_T)nrc_t;
    c_st.site = &tj_emlrtRSI;
    if (info != 0) {
      p = true;
      b_p = false;
      if (info == -7) {
        b_p = true;
      } else if (info == -9) {
        b_p = true;
      } else if (info == -10) {
        b_p = true;
      }
      if (!b_p) {
        if (info == -1010) {
          emlrtErrorWithMessageIdR2018a(&c_st, &j_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&c_st, &k_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &fname[0], 12, info);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      if ((info == -10) && (B->size[1] > 1)) {
        c_st.site = &uj_emlrtRSI;
        info = A->size[0];
        b_nb = B->size[1];
        mn = muIntScalarMin_sint32(A->size[0], A->size[1]);
        d_st.site = &vj_emlrtRSI;
        if (mn > 2147483646) {
          e_st.site = &oc_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }
        for (j = 0; j < mn; j++) {
          if (tau->data[j] != 0.0) {
            d_st.site = &wj_emlrtRSI;
            if (b_nb > 2147483646) {
              e_st.site = &oc_emlrtRSI;
              check_forloop_overflow_error(&e_st);
            }
            for (k = 0; k < b_nb; k++) {
              wj = B->data[j + B->size[0] * k];
              a_tmp = j + 2;
              d_st.site = &xj_emlrtRSI;
              if ((j + 2 <= info) && (info > 2147483646)) {
                e_st.site = &oc_emlrtRSI;
                check_forloop_overflow_error(&e_st);
              }
              for (i = a_tmp; i <= info; i++) {
                wj += A->data[(i + A->size[0] * j) - 1] *
                      B->data[(i + B->size[0] * k) - 1];
              }
              wj *= tau->data[j];
              if (wj != 0.0) {
                B->data[j + B->size[0] * k] -= wj;
                d_st.site = &yj_emlrtRSI;
                for (i = a_tmp; i <= info; i++) {
                  B->data[(i + B->size[0] * k) - 1] -=
                      A->data[(i + A->size[0] * j) - 1] * wj;
                }
              }
            }
          }
        }
      } else {
        info = B->size[0];
        b_nb = B->size[1];
        mn = B->size[0] * B->size[1];
        B->size[0] = info;
        B->size[1] = b_nb;
        emxEnsureCapacity_real_T(&b_st, B, mn, &ji_emlrtRTEI);
        info *= b_nb;
        for (mn = 0; mn < info; mn++) {
          B->data[mn] = rtNaN;
        }
      }
    }
  }
  st.site = &pj_emlrtRSI;
  if ((1 <= nb) && (nb > 2147483646)) {
    b_st.site = &oc_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (k = 0; k < nb; k++) {
    st.site = &qj_emlrtRSI;
    if ((1 <= rankA) && (rankA > 2147483646)) {
      b_st.site = &oc_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (i = 0; i < rankA; i++) {
      Y->data[(jpvt->data[i] + Y->size[0] * k) - 1] =
          B->data[i + B->size[0] * k];
    }
    for (j = rankA; j >= 1; j--) {
      mn = jpvt->data[j - 1];
      Y->data[(mn + Y->size[0] * k) - 1] /=
          A->data[(j + A->size[0] * (j - 1)) - 1];
      st.site = &rj_emlrtRSI;
      for (i = 0; i <= j - 2; i++) {
        Y->data[(jpvt->data[i] + Y->size[0] * k) - 1] -=
            Y->data[(jpvt->data[j - 1] + Y->size[0] * k) - 1] *
            A->data[i + A->size[0] * (j - 1)];
      }
    }
  }
}

void qrsolve(const emlrtStack *sp, const emxArray_real_T *A,
             const emxArray_real_T *B, emxArray_real_T *Y)
{
  static const int32_T iv[2] = {1, 6};
  static const char_T fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'g', 'e', 'q', 'p', '3'};
  static const char_T rfmt[6] = {'%', '1', '4', '.', '6', 'e'};
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *jpvt;
  emxArray_ptrdiff_t *jpvt_t;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T tol;
  int32_T b_na;
  int32_T i;
  int32_T ma;
  int32_T minmana;
  int32_T na;
  int32_T rankA;
  char_T str[14];
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_A, 2, &hi_emlrtRTEI, true);
  st.site = &aj_emlrtRSI;
  i = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(&st, b_A, i, &bi_emlrtRTEI);
  na = A->size[0] * A->size[1];
  for (i = 0; i < na; i++) {
    b_A->data[i] = A->data[i];
  }
  emxInit_int32_T(&st, &jpvt, 2, &hi_emlrtRTEI, true);
  rankA = b_A->size[0];
  b_na = b_A->size[1];
  i = jpvt->size[0] * jpvt->size[1];
  jpvt->size[0] = 1;
  jpvt->size[1] = b_A->size[1];
  emxEnsureCapacity_int32_T(&st, jpvt, i, &ci_emlrtRTEI);
  na = b_A->size[1];
  for (i = 0; i < na; i++) {
    jpvt->data[i] = 0;
  }
  emxInit_real_T(&st, &tau, 1, &hi_emlrtRTEI, true);
  b_st.site = &dj_emlrtRSI;
  ma = b_A->size[0];
  na = b_A->size[1];
  minmana = muIntScalarMin_sint32(ma, na);
  i = tau->size[0];
  tau->size[0] = minmana;
  emxEnsureCapacity_real_T(&b_st, tau, i, &di_emlrtRTEI);
  if ((b_A->size[0] == 0) || (b_A->size[1] == 0)) {
    i = tau->size[0];
    tau->size[0] = minmana;
    emxEnsureCapacity_real_T(&b_st, tau, i, &fi_emlrtRTEI);
    for (i = 0; i < minmana; i++) {
      tau->data[i] = 0.0;
    }
    c_st.site = &ej_emlrtRSI;
    if ((1 <= b_A->size[1]) && (b_A->size[1] > 2147483646)) {
      d_st.site = &oc_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (rankA = 0; rankA < b_na; rankA++) {
      jpvt->data[rankA] = rankA + 1;
    }
  } else {
    emxInit_ptrdiff_t(&b_st, &jpvt_t, 1, &ei_emlrtRTEI, true);
    i = jpvt_t->size[0];
    jpvt_t->size[0] = b_A->size[1];
    emxEnsureCapacity_ptrdiff_t(&b_st, jpvt_t, i, &ei_emlrtRTEI);
    na = b_A->size[1];
    for (i = 0; i < na; i++) {
      jpvt_t->data[i] = (ptrdiff_t)0;
    }
    info_t = LAPACKE_dgeqp3(
        102, (ptrdiff_t)b_A->size[0], (ptrdiff_t)b_A->size[1], &b_A->data[0],
        (ptrdiff_t)b_A->size[0], &jpvt_t->data[0], &tau->data[0]);
    na = (int32_T)info_t;
    c_st.site = &fj_emlrtRSI;
    if (na != 0) {
      p = true;
      if (na != -4) {
        if (na == -1010) {
          emlrtErrorWithMessageIdR2018a(&c_st, &j_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(
              &c_st, &k_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
              "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &fname[0], 12, na);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      c_st.site = &gj_emlrtRSI;
      if ((1 <= b_na) && (b_na > 2147483646)) {
        d_st.site = &oc_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (na = 0; na < b_na; na++) {
        c_st.site = &hj_emlrtRSI;
        if ((1 <= rankA) && (rankA > 2147483646)) {
          d_st.site = &oc_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (i = 0; i < rankA; i++) {
          b_A->data[na * ma + i] = rtNaN;
        }
      }
      ma = muIntScalarMin_sint32(rankA, b_na);
      c_st.site = &ij_emlrtRSI;
      for (rankA = 0; rankA < ma; rankA++) {
        tau->data[rankA] = rtNaN;
      }
      na = ma + 1;
      c_st.site = &jj_emlrtRSI;
      if ((ma + 1 <= minmana) && (minmana > 2147483646)) {
        d_st.site = &oc_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (rankA = na; rankA <= minmana; rankA++) {
        tau->data[rankA - 1] = 0.0;
      }
      c_st.site = &kj_emlrtRSI;
      for (rankA = 0; rankA < b_na; rankA++) {
        jpvt->data[rankA] = rankA + 1;
      }
    } else {
      c_st.site = &lj_emlrtRSI;
      if ((1 <= b_na) && (b_na > 2147483646)) {
        d_st.site = &oc_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (rankA = 0; rankA < b_na; rankA++) {
        jpvt->data[rankA] = (int32_T)jpvt_t->data[rankA];
      }
    }
    emxFree_ptrdiff_t(&jpvt_t);
  }
  st.site = &bj_emlrtRSI;
  rankA = 0;
  tol = 0.0;
  if (b_A->size[0] < b_A->size[1]) {
    ma = b_A->size[0];
    na = b_A->size[1];
  } else {
    ma = b_A->size[1];
    na = b_A->size[0];
  }
  if (ma > 0) {
    tol = muDoubleScalarMin(1.4901161193847656E-8,
                            2.2204460492503131E-15 * (real_T)na) *
          muDoubleScalarAbs(b_A->data[0]);
    while ((rankA < ma) &&
           (!(muDoubleScalarAbs(b_A->data[rankA + b_A->size[0] * rankA]) <=
              tol))) {
      rankA++;
    }
  }
  if (rankA < ma) {
    b_st.site = &mj_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m = emlrtCreateDoubleScalar(tol);
    emlrtAssign(&b_y, m);
    c_st.site = &cl_emlrtRSI;
    e_emlrt_marshallIn(&c_st, b_sprintf(&c_st, y, b_y, &p_emlrtMCI),
                       "<output of sprintf>", str);
    b_st.site = &nj_emlrtRSI;
    c_warning(&b_st, rankA, str);
  }
  emxInit_real_T(&st, &b_B, 2, &gi_emlrtRTEI, true);
  i = b_B->size[0] * b_B->size[1];
  b_B->size[0] = B->size[0];
  b_B->size[1] = B->size[1];
  emxEnsureCapacity_real_T(sp, b_B, i, &gi_emlrtRTEI);
  na = B->size[0] * B->size[1] - 1;
  for (i = 0; i <= na; i++) {
    b_B->data[i] = B->data[i];
  }
  st.site = &cj_emlrtRSI;
  LSQFromQR(&st, b_A, tau, jpvt, b_B, rankA, Y);
  emxFree_real_T(&b_B);
  emxFree_real_T(&tau);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (qrsolve.c) */
