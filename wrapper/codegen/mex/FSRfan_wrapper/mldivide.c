/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mldivide.c
 *
 * Code generation for function 'mldivide'
 *
 */

/* Include files */
#include "mldivide.h"
#include "FSRfan_wrapper_data.h"
#include "FSRfan_wrapper_emxutil.h"
#include "FSRfan_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "infocheck.h"
#include "qrsolve.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xgeqp3.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo sh_emlrtRSI = {
    20,         /* lineNo */
    "mldivide", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pathName
                                                                         */
};

static emlrtRSInfo th_emlrtRSI = {
    42,      /* lineNo */
    "mldiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pathName
                                                                         */
};

static emlrtRSInfo uh_emlrtRSI = {
    44,      /* lineNo */
    "mldiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pathName
                                                                         */
};

static emlrtRSInfo
    vh_emlrtRSI =
        {
            67,        /* lineNo */
            "lusolve", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo
    wh_emlrtRSI =
        {
            112,          /* lineNo */
            "lusolveNxN", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo
    xh_emlrtRSI =
        {
            109,          /* lineNo */
            "lusolveNxN", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo
    yh_emlrtRSI =
        {
            124,          /* lineNo */
            "InvAtimesX", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo ai_emlrtRSI = {
    19,        /* lineNo */
    "xgetrfs", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pathName */
};

static emlrtRSInfo bi_emlrtRSI = {
    108,      /* lineNo */
    "cmldiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pathName */
};

static emlrtRSInfo ci_emlrtRSI = {
    70,       /* lineNo */
    "cmldiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pathName */
};

static emlrtRSInfo
    ei_emlrtRSI =
        {
            90,              /* lineNo */
            "warn_singular", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo
    gi_emlrtRSI =
        {
            72,        /* lineNo */
            "qrsolve", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo yi_emlrtRSI = {
    18,          /* lineNo */
    "xzunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzunormqr.m" /* pathName */
};

static emlrtRSInfo
    mr_emlrtRSI =
        {
            126,         /* lineNo */
            "LSQFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo nr_emlrtRSI = {
    108,              /* lineNo */
    "ceval_xunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xunormqr.m" /* pathName */
};

static emlrtRSInfo or_emlrtRSI = {
    21,          /* lineNo */
    "xzunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzunormqr.m" /* pathName */
};

static emlrtRSInfo pr_emlrtRSI = {
    23,          /* lineNo */
    "xzunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzunormqr.m" /* pathName */
};

static emlrtRSInfo qr_emlrtRSI = {
    29,          /* lineNo */
    "xzunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzunormqr.m" /* pathName */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    16,         /* lineNo */
    19,         /* colNo */
    "mldivide", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pName
                                                                         */
};

static emlrtRTEInfo uh_emlrtRTEI = {
    20,         /* lineNo */
    5,          /* colNo */
    "mldivide", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pName
                                                                         */
};

static emlrtRTEInfo wh_emlrtRTEI = {
    44,         /* lineNo */
    34,         /* colNo */
    "mldivide", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pName
                                                                         */
};

static emlrtRTEInfo xh_emlrtRTEI = {
    48,        /* lineNo */
    37,        /* colNo */
    "xgetrfs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pName */
};

static emlrtRTEInfo yh_emlrtRTEI = {
    70,        /* lineNo */
    23,        /* colNo */
    "xgetrfs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pName */
};

static emlrtRTEInfo ai_emlrtRTEI = {
    1,          /* lineNo */
    14,         /* colNo */
    "mldivide", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pName
                                                                         */
};

static emlrtRTEInfo bi_emlrtRTEI = {
    70,        /* lineNo */
    1,         /* colNo */
    "xgetrfs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pName */
};

static emlrtRTEInfo
    cj_emlrtRTEI =
        {
            85,        /* lineNo */
            26,        /* colNo */
            "qrsolve", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pName */
};

static const char_T cv9[19] = {'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd', 'g',
                               'e', 't', 'r', 'f', '_', 'w', 'o', 'r', 'k'};

/* Function Definitions */
void b_mldivide(const emlrtStack *sp, const emxArray_real_T *A,
                const emxArray_real_T *B, emxArray_real_T *Y)
{
  ptrdiff_t INFO;
  ptrdiff_t LDA;
  ptrdiff_t nrc_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_int32_T *jpvt;
  emxArray_ptrdiff_t *IPIV;
  emxArray_ptrdiff_t *r;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  real_T wj;
  int32_T a_tmp;
  int32_T b_nb;
  int32_T i;
  int32_T info;
  int32_T j;
  int32_T k;
  int32_T mn;
  int32_T nb;
  int32_T rankA;
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
  if (B->size[0] != A->size[0]) {
    emlrtErrorWithMessageIdR2018a(sp, &hb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  st.site = &sh_emlrtRSI;
  if (A->size[1] == 0) {
    Y->size[0] = 0;
    Y->size[1] = B->size[1];
  } else {
    emxInit_real_T(&st, &b_A, 2, &ai_emlrtRTEI, true);
    if (A->size[0] == A->size[1]) {
      b_st.site = &th_emlrtRSI;
      c_st.site = &vh_emlrtRSI;
      mn = Y->size[0] * Y->size[1];
      Y->size[0] = B->size[0];
      Y->size[1] = B->size[1];
      emxEnsureCapacity_real_T(&c_st, Y, mn, &uh_emlrtRTEI);
      nb = B->size[0] * B->size[1];
      for (mn = 0; mn < nb; mn++) {
        Y->data[mn] = B->data[mn];
      }
      d_st.site = &xh_emlrtRSI;
      e_st.site = &yh_emlrtRSI;
      info = A->size[0];
      nb = A->size[1];
      mn = B->size[0];
      nb = muIntScalarMin_sint32(info, nb);
      info = muIntScalarMin_sint32(mn, nb);
      f_st.site = &ai_emlrtRSI;
      mn = b_A->size[0] * b_A->size[1];
      b_A->size[0] = A->size[0];
      b_A->size[1] = A->size[1];
      emxEnsureCapacity_real_T(&f_st, b_A, mn, &xh_emlrtRTEI);
      nb = A->size[0] * A->size[1];
      for (mn = 0; mn < nb; mn++) {
        b_A->data[mn] = A->data[mn];
      }
      emxInit_ptrdiff_t(&f_st, &IPIV, 1, &bi_emlrtRTEI, true);
      emxInit_ptrdiff_t(&f_st, &r, 1, &yh_emlrtRTEI, true);
      g_st.site = &ci_emlrtRSI;
      repmat(&g_st, (ptrdiff_t)0.0, info, r);
      mn = IPIV->size[0];
      IPIV->size[0] = r->size[0];
      emxEnsureCapacity_ptrdiff_t(&f_st, IPIV, mn, &yh_emlrtRTEI);
      nrc_t = (ptrdiff_t)info;
      LDA = (ptrdiff_t)b_A->size[0];
      INFO = LAPACKE_dgetrf_work(102, nrc_t, nrc_t, &b_A->data[0], LDA,
                                 &IPIV->data[0]);
      info = (int32_T)INFO;
      g_st.site = &bi_emlrtRSI;
      emxFree_ptrdiff_t(&r);
      if (info < 0) {
        if (info == -1010) {
          emlrtErrorWithMessageIdR2018a(&g_st, &j_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(
              &g_st, &k_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
              "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &cv9[0], 12, info);
        }
      }
      LAPACKE_dgetrs_work(102, 'N', nrc_t, (ptrdiff_t)B->size[1], &b_A->data[0],
                          LDA, &IPIV->data[0], &Y->data[0],
                          (ptrdiff_t)B->size[0]);
      emxFree_ptrdiff_t(&IPIV);
      if (((A->size[0] != 1) || (A->size[1] != 1)) && (info > 0)) {
        d_st.site = &wh_emlrtRSI;
        e_st.site = &ei_emlrtRSI;
        warning(&e_st);
      }
    } else {
      b_st.site = &uh_emlrtRSI;
      mn = b_A->size[0] * b_A->size[1];
      b_A->size[0] = A->size[0];
      b_A->size[1] = A->size[1];
      emxEnsureCapacity_real_T(&b_st, b_A, mn, &vh_emlrtRTEI);
      nb = A->size[0] * A->size[1];
      for (mn = 0; mn < nb; mn++) {
        b_A->data[mn] = A->data[mn];
      }
      emxInit_real_T(&b_st, &tau, 1, &ai_emlrtRTEI, true);
      emxInit_int32_T(&b_st, &jpvt, 2, &ai_emlrtRTEI, true);
      emxInit_real_T(&b_st, &b_B, 2, &cj_emlrtRTEI, true);
      c_st.site = &fi_emlrtRSI;
      xgeqp3(&c_st, b_A, tau, jpvt);
      c_st.site = &gi_emlrtRSI;
      rankA = rankFromQR(&c_st, b_A);
      c_st.site = &hi_emlrtRSI;
      mn = b_B->size[0] * b_B->size[1];
      b_B->size[0] = B->size[0];
      b_B->size[1] = B->size[1];
      emxEnsureCapacity_real_T(&c_st, b_B, mn, &cj_emlrtRTEI);
      nb = B->size[0] * B->size[1];
      for (mn = 0; mn < nb; mn++) {
        b_B->data[mn] = B->data[mn];
      }
      b_nb = b_B->size[1];
      mn = Y->size[0] * Y->size[1];
      Y->size[0] = b_A->size[1];
      Y->size[1] = b_B->size[1];
      emxEnsureCapacity_real_T(&c_st, Y, mn, &uh_emlrtRTEI);
      nb = b_A->size[1] * b_B->size[1];
      for (mn = 0; mn < nb; mn++) {
        Y->data[mn] = 0.0;
      }
      d_st.site = &ti_emlrtRSI;
      e_st.site = &wi_emlrtRSI;
      if (b_A->size[1] != 0) {
        nrc_t = (ptrdiff_t)b_B->size[0];
        nrc_t = LAPACKE_dormqr(
            102, 'L', 'T', nrc_t, (ptrdiff_t)b_B->size[1],
            (ptrdiff_t)muIntScalarMin_sint32(b_A->size[0], b_A->size[1]),
            &b_A->data[0], (ptrdiff_t)b_A->size[0], &tau->data[0],
            &b_B->data[0], nrc_t);
        info = (int32_T)nrc_t;
        f_st.site = &xi_emlrtRSI;
        if (infocheck(&f_st, info)) {
          if ((info == -10) && (b_B->size[1] > 1)) {
            f_st.site = &nr_emlrtRSI;
            info = b_A->size[0];
            nb = b_B->size[1];
            mn = muIntScalarMin_sint32(b_A->size[0], b_A->size[1]);
            g_st.site = &yi_emlrtRSI;
            if ((1 <= mn) && (mn > 2147483646)) {
              h_st.site = &ob_emlrtRSI;
              check_forloop_overflow_error(&h_st);
            }
            for (j = 0; j < mn; j++) {
              if (tau->data[j] != 0.0) {
                g_st.site = &or_emlrtRSI;
                if (nb > 2147483646) {
                  h_st.site = &ob_emlrtRSI;
                  check_forloop_overflow_error(&h_st);
                }
                for (k = 0; k < nb; k++) {
                  wj = b_B->data[j + b_B->size[0] * k];
                  a_tmp = j + 2;
                  g_st.site = &pr_emlrtRSI;
                  if ((j + 2 <= info) && (info > 2147483646)) {
                    h_st.site = &ob_emlrtRSI;
                    check_forloop_overflow_error(&h_st);
                  }
                  for (i = a_tmp; i <= info; i++) {
                    wj += b_A->data[(i + b_A->size[0] * j) - 1] *
                          b_B->data[(i + b_B->size[0] * k) - 1];
                  }
                  wj *= tau->data[j];
                  if (wj != 0.0) {
                    b_B->data[j + b_B->size[0] * k] -= wj;
                    g_st.site = &qr_emlrtRSI;
                    for (i = a_tmp; i <= info; i++) {
                      b_B->data[(i + b_B->size[0] * k) - 1] -=
                          b_A->data[(i + b_A->size[0] * j) - 1] * wj;
                    }
                  }
                }
              }
            }
          } else {
            info = b_B->size[0];
            nb = b_B->size[1];
            mn = b_B->size[0] * b_B->size[1];
            b_B->size[0] = info;
            b_B->size[1] = nb;
            emxEnsureCapacity_real_T(&e_st, b_B, mn, &ei_emlrtRTEI);
            nb *= info;
            for (mn = 0; mn < nb; mn++) {
              b_B->data[mn] = rtNaN;
            }
          }
        }
      }
      emxFree_real_T(&tau);
      d_st.site = &mr_emlrtRSI;
      if ((1 <= b_nb) && (b_nb > 2147483646)) {
        e_st.site = &ob_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      for (k = 0; k < b_nb; k++) {
        d_st.site = &ui_emlrtRSI;
        if ((1 <= rankA) && (rankA > 2147483646)) {
          e_st.site = &ob_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }
        for (i = 0; i < rankA; i++) {
          Y->data[(jpvt->data[i] + Y->size[0] * k) - 1] =
              b_B->data[i + b_B->size[0] * k];
        }
        for (j = rankA; j >= 1; j--) {
          mn = jpvt->data[j - 1];
          Y->data[(mn + Y->size[0] * k) - 1] /=
              b_A->data[(j + b_A->size[0] * (j - 1)) - 1];
          d_st.site = &vi_emlrtRSI;
          for (i = 0; i <= j - 2; i++) {
            Y->data[(jpvt->data[i] + Y->size[0] * k) - 1] -=
                Y->data[(jpvt->data[j - 1] + Y->size[0] * k) - 1] *
                b_A->data[i + b_A->size[0] * (j - 1)];
          }
        }
      }
      emxFree_real_T(&b_B);
      emxFree_int32_T(&jpvt);
    }
    emxFree_real_T(&b_A);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void mldivide(const emlrtStack *sp, const emxArray_real_T *A,
              const emxArray_real_T *B, emxArray_real_T *Y)
{
  ptrdiff_t INFO;
  ptrdiff_t LDA;
  ptrdiff_t N;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_int32_T *jpvt;
  emxArray_ptrdiff_t *IPIV;
  emxArray_ptrdiff_t *r;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  int32_T mb;
  int32_T na;
  int32_T rankA;
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
  if (B->size[0] != A->size[0]) {
    emlrtErrorWithMessageIdR2018a(sp, &hb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  st.site = &sh_emlrtRSI;
  emxInit_real_T(&st, &b_A, 2, &ai_emlrtRTEI, true);
  emxInit_real_T(&st, &tau, 1, &ai_emlrtRTEI, true);
  emxInit_int32_T(&st, &jpvt, 2, &ai_emlrtRTEI, true);
  emxInit_ptrdiff_t(&st, &IPIV, 1, &bi_emlrtRTEI, true);
  emxInit_ptrdiff_t(&st, &r, 1, &yh_emlrtRTEI, true);
  emxInit_real_T(&st, &b_B, 1, &wh_emlrtRTEI, true);
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    mb = Y->size[0];
    Y->size[0] = A->size[1];
    emxEnsureCapacity_real_T(&st, Y, mb, &uh_emlrtRTEI);
    na = A->size[1];
    for (mb = 0; mb < na; mb++) {
      Y->data[mb] = 0.0;
    }
  } else if (A->size[0] == A->size[1]) {
    b_st.site = &th_emlrtRSI;
    c_st.site = &vh_emlrtRSI;
    mb = Y->size[0];
    Y->size[0] = B->size[0];
    emxEnsureCapacity_real_T(&c_st, Y, mb, &uh_emlrtRTEI);
    na = B->size[0];
    for (mb = 0; mb < na; mb++) {
      Y->data[mb] = B->data[mb];
    }
    d_st.site = &xh_emlrtRSI;
    e_st.site = &yh_emlrtRSI;
    rankA = A->size[0];
    na = A->size[1];
    mb = B->size[0];
    na = muIntScalarMin_sint32(rankA, na);
    rankA = muIntScalarMin_sint32(mb, na);
    f_st.site = &ai_emlrtRSI;
    mb = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&f_st, b_A, mb, &xh_emlrtRTEI);
    na = A->size[0] * A->size[1];
    for (mb = 0; mb < na; mb++) {
      b_A->data[mb] = A->data[mb];
    }
    g_st.site = &ci_emlrtRSI;
    repmat(&g_st, (ptrdiff_t)0.0, rankA, r);
    mb = IPIV->size[0];
    IPIV->size[0] = r->size[0];
    emxEnsureCapacity_ptrdiff_t(&f_st, IPIV, mb, &yh_emlrtRTEI);
    N = (ptrdiff_t)rankA;
    LDA = (ptrdiff_t)b_A->size[0];
    INFO = LAPACKE_dgetrf_work(102, N, N, &b_A->data[0], LDA, &IPIV->data[0]);
    rankA = (int32_T)INFO;
    g_st.site = &bi_emlrtRSI;
    if (rankA < 0) {
      if (rankA == -1010) {
        emlrtErrorWithMessageIdR2018a(&g_st, &j_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &g_st, &k_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &cv9[0], 12, rankA);
      }
    }
    LAPACKE_dgetrs_work(102, 'N', N, (ptrdiff_t)1, &b_A->data[0], LDA,
                        &IPIV->data[0], &Y->data[0], (ptrdiff_t)B->size[0]);
    if (((A->size[0] != 1) || (A->size[1] != 1)) && (rankA > 0)) {
      d_st.site = &wh_emlrtRSI;
      e_st.site = &ei_emlrtRSI;
      warning(&e_st);
    }
  } else {
    b_st.site = &uh_emlrtRSI;
    mb = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&b_st, b_A, mb, &vh_emlrtRTEI);
    na = A->size[0] * A->size[1];
    for (mb = 0; mb < na; mb++) {
      b_A->data[mb] = A->data[mb];
    }
    c_st.site = &fi_emlrtRSI;
    xgeqp3(&c_st, b_A, tau, jpvt);
    c_st.site = &gi_emlrtRSI;
    rankA = rankFromQR(&c_st, b_A);
    mb = b_B->size[0];
    b_B->size[0] = B->size[0];
    emxEnsureCapacity_real_T(&b_st, b_B, mb, &wh_emlrtRTEI);
    na = B->size[0] - 1;
    for (mb = 0; mb <= na; mb++) {
      b_B->data[mb] = B->data[mb];
    }
    c_st.site = &hi_emlrtRSI;
    LSQFromQR(&c_st, b_A, tau, jpvt, b_B, rankA, Y);
  }
  emxFree_real_T(&b_B);
  emxFree_ptrdiff_t(&r);
  emxFree_ptrdiff_t(&IPIV);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&tau);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (mldivide.c) */
