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
#include "FSRmdr_wrapper_data.h"
#include "FSRmdr_wrapper_emxutil.h"
#include "FSRmdr_wrapper_types.h"
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
static emlrtRSInfo sf_emlrtRSI = {
    20,         /* lineNo */
    "mldivide", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pathName
                                                                         */
};

static emlrtRSInfo tf_emlrtRSI = {
    42,      /* lineNo */
    "mldiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pathName
                                                                         */
};

static emlrtRSInfo uf_emlrtRSI = {
    44,      /* lineNo */
    "mldiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pathName
                                                                         */
};

static emlrtRSInfo
    xf_emlrtRSI =
        {
            109,          /* lineNo */
            "lusolveNxN", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo
    yf_emlrtRSI =
        {
            124,          /* lineNo */
            "InvAtimesX", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo ag_emlrtRSI = {
    19,        /* lineNo */
    "xgetrfs", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pathName */
};

static emlrtRSInfo bg_emlrtRSI = {
    108,      /* lineNo */
    "cmldiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pathName */
};

static emlrtRSInfo cg_emlrtRSI = {
    70,       /* lineNo */
    "cmldiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pathName */
};

static emlrtRTEInfo w_emlrtRTEI = {
    16,         /* lineNo */
    19,         /* colNo */
    "mldivide", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pName
                                                                         */
};

static emlrtRTEInfo of_emlrtRTEI = {
    20,         /* lineNo */
    5,          /* colNo */
    "mldivide", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pName
                                                                         */
};

static emlrtRTEInfo
    qf_emlrtRTEI =
        {
            85,        /* lineNo */
            26,        /* colNo */
            "qrsolve", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = {
    48,        /* lineNo */
    37,        /* colNo */
    "xgetrfs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = {
    70,        /* lineNo */
    23,        /* colNo */
    "xgetrfs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = {
    1,          /* lineNo */
    14,         /* colNo */
    "mldivide", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pName
                                                                         */
};

static emlrtRTEInfo vf_emlrtRTEI = {
    70,        /* lineNo */
    1,         /* colNo */
    "xgetrfs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pName */
};

/* Function Definitions */
void mldivide(const emlrtStack *sp, const emxArray_real_T *A,
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
  emlrtStack st;
  emxArray_int32_T *jpvt;
  emxArray_ptrdiff_t *IPIV;
  emxArray_ptrdiff_t *r;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  int32_T i;
  int32_T ma;
  int32_T mb;
  int32_T na;
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
    emlrtErrorWithMessageIdR2018a(sp, &w_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  st.site = &sf_emlrtRSI;
  emxInit_real_T(&st, &b_A, 2, &uf_emlrtRTEI, true);
  emxInit_real_T(&st, &tau, 1, &uf_emlrtRTEI, true);
  emxInit_int32_T(&st, &jpvt, 2, &uf_emlrtRTEI, true);
  emxInit_real_T(&st, &b_B, 1, &qf_emlrtRTEI, true);
  emxInit_ptrdiff_t(&st, &IPIV, 1, &vf_emlrtRTEI, true);
  emxInit_ptrdiff_t(&st, &r, 1, &sf_emlrtRTEI, true);
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    i = Y->size[0];
    Y->size[0] = A->size[1];
    emxEnsureCapacity_real_T(&st, Y, i, &of_emlrtRTEI);
    na = A->size[1];
    for (i = 0; i < na; i++) {
      Y->data[i] = 0.0;
    }
  } else if (A->size[0] == A->size[1]) {
    b_st.site = &tf_emlrtRSI;
    c_st.site = &vf_emlrtRSI;
    i = Y->size[0];
    Y->size[0] = B->size[0];
    emxEnsureCapacity_real_T(&c_st, Y, i, &of_emlrtRTEI);
    na = B->size[0];
    for (i = 0; i < na; i++) {
      Y->data[i] = B->data[i];
    }
    d_st.site = &xf_emlrtRSI;
    e_st.site = &yf_emlrtRSI;
    ma = A->size[0];
    na = A->size[1];
    mb = B->size[0];
    i = muIntScalarMin_sint32(ma, na);
    ma = muIntScalarMin_sint32(mb, i);
    f_st.site = &ag_emlrtRSI;
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&f_st, b_A, i, &rf_emlrtRTEI);
    na = A->size[0] * A->size[1];
    for (i = 0; i < na; i++) {
      b_A->data[i] = A->data[i];
    }
    g_st.site = &cg_emlrtRSI;
    repmat(&g_st, (ptrdiff_t)0.0, ma, r);
    i = IPIV->size[0];
    IPIV->size[0] = r->size[0];
    emxEnsureCapacity_ptrdiff_t(&f_st, IPIV, i, &sf_emlrtRTEI);
    nrc_t = (ptrdiff_t)ma;
    LDA = (ptrdiff_t)b_A->size[0];
    INFO = LAPACKE_dgetrf_work(102, nrc_t, nrc_t, &b_A->data[0], LDA,
                               &IPIV->data[0]);
    ma = (int32_T)INFO;
    g_st.site = &bg_emlrtRSI;
    if (ma < 0) {
      if (ma == -1010) {
        emlrtErrorWithMessageIdR2018a(&g_st, &o_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &g_st, &p_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &cv[0], 12, ma);
      }
    }
    LAPACKE_dgetrs_work(102, 'N', nrc_t, (ptrdiff_t)1, &b_A->data[0], LDA,
                        &IPIV->data[0], &Y->data[0], (ptrdiff_t)B->size[0]);
    if (((A->size[0] != 1) || (A->size[1] != 1)) && (ma > 0)) {
      d_st.site = &wf_emlrtRSI;
      e_st.site = &jg_emlrtRSI;
      warning(&e_st);
    }
  } else {
    b_st.site = &uf_emlrtRSI;
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&b_st, b_A, i, &pf_emlrtRTEI);
    na = A->size[0] * A->size[1];
    for (i = 0; i < na; i++) {
      b_A->data[i] = A->data[i];
    }
    c_st.site = &kg_emlrtRSI;
    xgeqp3(&c_st, b_A, tau, jpvt);
    c_st.site = &lg_emlrtRSI;
    mb = rankFromQR(&c_st, b_A);
    c_st.site = &mg_emlrtRSI;
    i = b_B->size[0];
    b_B->size[0] = B->size[0];
    emxEnsureCapacity_real_T(&c_st, b_B, i, &qf_emlrtRTEI);
    na = B->size[0];
    for (i = 0; i < na; i++) {
      b_B->data[i] = B->data[i];
    }
    i = Y->size[0];
    Y->size[0] = b_A->size[1];
    emxEnsureCapacity_real_T(&c_st, Y, i, &of_emlrtRTEI);
    na = b_A->size[1];
    for (i = 0; i < na; i++) {
      Y->data[i] = 0.0;
    }
    d_st.site = &yg_emlrtRSI;
    e_st.site = &ch_emlrtRSI;
    if ((b_A->size[0] != 0) && (b_A->size[1] != 0)) {
      nrc_t = (ptrdiff_t)b_B->size[0];
      nrc_t = LAPACKE_dormqr(
          102, 'L', 'T', nrc_t, (ptrdiff_t)1,
          (ptrdiff_t)muIntScalarMin_sint32(b_A->size[0], b_A->size[1]),
          &b_A->data[0], (ptrdiff_t)b_A->size[0], &tau->data[0], &b_B->data[0],
          nrc_t);
      f_st.site = &dh_emlrtRSI;
      if (infocheck(&f_st, (int32_T)nrc_t)) {
        ma = b_B->size[0];
        i = b_B->size[0];
        b_B->size[0] = ma;
        emxEnsureCapacity_real_T(&e_st, b_B, i, &tf_emlrtRTEI);
        for (i = 0; i < ma; i++) {
          b_B->data[i] = rtNaN;
        }
      }
    }
    d_st.site = &ah_emlrtRSI;
    if ((1 <= mb) && (mb > 2147483646)) {
      e_st.site = &nc_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }
    for (ma = 0; ma < mb; ma++) {
      Y->data[jpvt->data[ma] - 1] = b_B->data[ma];
    }
    for (na = mb; na >= 1; na--) {
      i = jpvt->data[na - 1];
      Y->data[i - 1] /= b_A->data[(na + b_A->size[0] * (na - 1)) - 1];
      d_st.site = &bh_emlrtRSI;
      for (ma = 0; ma <= na - 2; ma++) {
        Y->data[jpvt->data[ma] - 1] -= Y->data[jpvt->data[na - 1] - 1] *
                                       b_A->data[ma + b_A->size[0] * (na - 1)];
      }
    }
  }
  emxFree_ptrdiff_t(&r);
  emxFree_ptrdiff_t(&IPIV);
  emxFree_real_T(&b_B);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&tau);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (mldivide.c) */
