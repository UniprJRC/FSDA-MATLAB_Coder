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
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "qrsolve.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xgeqp3.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo qeb_emlrtRSI = {
    20,         /* lineNo */
    "mldivide", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pathName
                                                                         */
};

static emlrtRSInfo reb_emlrtRSI = {
    42,      /* lineNo */
    "mldiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pathName
                                                                         */
};

static emlrtRSInfo seb_emlrtRSI = {
    44,      /* lineNo */
    "mldiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pathName
                                                                         */
};

static emlrtRSInfo
    teb_emlrtRSI =
        {
            109,          /* lineNo */
            "lusolveNxN", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo
    ueb_emlrtRSI =
        {
            124,          /* lineNo */
            "InvAtimesX", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo veb_emlrtRSI = {
    19,        /* lineNo */
    "xgetrfs", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pathName */
};

static emlrtRSInfo web_emlrtRSI = {
    108,      /* lineNo */
    "cmldiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pathName */
};

static emlrtRSInfo xeb_emlrtRSI = {
    70,       /* lineNo */
    "cmldiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pathName */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    16,         /* lineNo */
    19,         /* colNo */
    "mldivide", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pName
                                                                         */
};

static emlrtRTEInfo ly_emlrtRTEI = {
    20,         /* lineNo */
    5,          /* colNo */
    "mldivide", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pName
                                                                         */
};

static emlrtRTEInfo ny_emlrtRTEI = {
    44,         /* lineNo */
    34,         /* colNo */
    "mldivide", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pName
                                                                         */
};

static emlrtRTEInfo oy_emlrtRTEI = {
    48,        /* lineNo */
    37,        /* colNo */
    "xgetrfs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pName */
};

static emlrtRTEInfo py_emlrtRTEI = {
    70,        /* lineNo */
    23,        /* colNo */
    "xgetrfs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pName */
};

static emlrtRTEInfo qy_emlrtRTEI = {
    1,          /* lineNo */
    14,         /* colNo */
    "mldivide", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pName
                                                                         */
};

static emlrtRTEInfo ry_emlrtRTEI = {
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
    emlrtErrorWithMessageIdR2018a(sp, &rc_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  st.site = &qeb_emlrtRSI;
  emxInit_real_T(&st, &b_A, 2, &qy_emlrtRTEI, true);
  emxInit_real_T(&st, &tau, 1, &qy_emlrtRTEI, true);
  emxInit_int32_T(&st, &jpvt, 2, &qy_emlrtRTEI, true);
  emxInit_ptrdiff_t(&st, &IPIV, 1, &ry_emlrtRTEI, true);
  emxInit_ptrdiff_t(&st, &r, 1, &py_emlrtRTEI, true);
  emxInit_real_T(&st, &b_B, 1, &ny_emlrtRTEI, true);
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    mb = Y->size[0];
    Y->size[0] = A->size[1];
    emxEnsureCapacity_real_T(&st, Y, mb, &ly_emlrtRTEI);
    na = A->size[1];
    for (mb = 0; mb < na; mb++) {
      Y->data[mb] = 0.0;
    }
  } else if (A->size[0] == A->size[1]) {
    b_st.site = &reb_emlrtRSI;
    c_st.site = &iy_emlrtRSI;
    mb = Y->size[0];
    Y->size[0] = B->size[0];
    emxEnsureCapacity_real_T(&c_st, Y, mb, &ly_emlrtRTEI);
    na = B->size[0];
    for (mb = 0; mb < na; mb++) {
      Y->data[mb] = B->data[mb];
    }
    d_st.site = &teb_emlrtRSI;
    e_st.site = &ueb_emlrtRSI;
    rankA = A->size[0];
    na = A->size[1];
    mb = B->size[0];
    na = muIntScalarMin_sint32(rankA, na);
    rankA = muIntScalarMin_sint32(mb, na);
    f_st.site = &veb_emlrtRSI;
    mb = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&f_st, b_A, mb, &oy_emlrtRTEI);
    na = A->size[0] * A->size[1];
    for (mb = 0; mb < na; mb++) {
      b_A->data[mb] = A->data[mb];
    }
    g_st.site = &xeb_emlrtRSI;
    repmat(&g_st, (ptrdiff_t)0.0, rankA, r);
    mb = IPIV->size[0];
    IPIV->size[0] = r->size[0];
    emxEnsureCapacity_ptrdiff_t(&f_st, IPIV, mb, &py_emlrtRTEI);
    N = (ptrdiff_t)rankA;
    LDA = (ptrdiff_t)b_A->size[0];
    INFO = LAPACKE_dgetrf_work(102, N, N, &b_A->data[0], LDA, &IPIV->data[0]);
    rankA = (int32_T)INFO;
    g_st.site = &web_emlrtRSI;
    if (rankA < 0) {
      if (rankA == -1010) {
        emlrtErrorWithMessageIdR2018a(&g_st, &q_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &g_st, &r_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &cv17[0], 12, rankA);
      }
    }
    LAPACKE_dgetrs_work(102, 'N', N, (ptrdiff_t)1, &b_A->data[0], LDA,
                        &IPIV->data[0], &Y->data[0], (ptrdiff_t)B->size[0]);
    if (((A->size[0] != 1) || (A->size[1] != 1)) && (rankA > 0)) {
      d_st.site = &jy_emlrtRSI;
      e_st.site = &py_emlrtRSI;
      f_warning(&e_st);
    }
  } else {
    b_st.site = &seb_emlrtRSI;
    mb = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&b_st, b_A, mb, &my_emlrtRTEI);
    na = A->size[0] * A->size[1];
    for (mb = 0; mb < na; mb++) {
      b_A->data[mb] = A->data[mb];
    }
    c_st.site = &qy_emlrtRSI;
    xgeqp3(&c_st, b_A, tau, jpvt);
    c_st.site = &ry_emlrtRSI;
    rankA = rankFromQR(&c_st, b_A);
    mb = b_B->size[0];
    b_B->size[0] = B->size[0];
    emxEnsureCapacity_real_T(&b_st, b_B, mb, &ny_emlrtRTEI);
    na = B->size[0] - 1;
    for (mb = 0; mb <= na; mb++) {
      b_B->data[mb] = B->data[mb];
    }
    c_st.site = &sy_emlrtRSI;
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
