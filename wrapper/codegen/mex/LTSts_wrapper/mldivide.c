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
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_mexutil.h"
#include "LTSts_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "infocheck.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo lk_emlrtRSI = {
    20,         /* lineNo */
    "mldivide", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pathName
                                                                         */
};

static emlrtRSInfo mk_emlrtRSI = {
    42,      /* lineNo */
    "mldiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pathName
                                                                         */
};

static emlrtRSInfo nk_emlrtRSI = {
    44,      /* lineNo */
    "mldiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pathName
                                                                         */
};

static emlrtRSInfo
    ok_emlrtRSI =
        {
            67,        /* lineNo */
            "lusolve", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo
    pk_emlrtRSI =
        {
            112,          /* lineNo */
            "lusolveNxN", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo
    qk_emlrtRSI =
        {
            109,          /* lineNo */
            "lusolveNxN", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo
    rk_emlrtRSI =
        {
            124,          /* lineNo */
            "InvAtimesX", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo sk_emlrtRSI = {
    19,        /* lineNo */
    "xgetrfs", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pathName */
};

static emlrtRSInfo tk_emlrtRSI = {
    108,      /* lineNo */
    "cmldiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pathName */
};

static emlrtRSInfo uk_emlrtRSI = {
    70,       /* lineNo */
    "cmldiv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pathName */
};

static emlrtRSInfo
    il_emlrtRSI =
        {
            90,              /* lineNo */
            "warn_singular", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\lusolve.m" /* pathName */
};

static emlrtRSInfo
    jl_emlrtRSI =
        {
            61,        /* lineNo */
            "qrsolve", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo
    kl_emlrtRSI =
        {
            72,        /* lineNo */
            "qrsolve", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo
    ll_emlrtRSI =
        {
            85,        /* lineNo */
            "qrsolve", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo ml_emlrtRSI = {
    63,       /* lineNo */
    "xgeqp3", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pathName */
};

static emlrtRSInfo nl_emlrtRSI = {
    138,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pathName */
};

static emlrtRSInfo ol_emlrtRSI = {
    141,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pathName */
};

static emlrtRSInfo pl_emlrtRSI = {
    143,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pathName */
};

static emlrtRSInfo ql_emlrtRSI = {
    148,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pathName */
};

static emlrtRSInfo rl_emlrtRSI = {
    151,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pathName */
};

static emlrtRSInfo sl_emlrtRSI = {
    154,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pathName */
};

static emlrtRSInfo tl_emlrtRSI = {
    158,            /* lineNo */
    "ceval_xgeqp3", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pathName */
};

static emlrtRSInfo
    ul_emlrtRSI =
        {
            173,          /* lineNo */
            "rankFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo
    vl_emlrtRSI =
        {
            172,          /* lineNo */
            "rankFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo
    wl_emlrtRSI =
        {
            119,         /* lineNo */
            "LSQFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo
    xl_emlrtRSI =
        {
            128,         /* lineNo */
            "LSQFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo
    yl_emlrtRSI =
        {
            138,         /* lineNo */
            "LSQFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo am_emlrtRSI = {
    31,         /* lineNo */
    "xunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xunormqr.m" /* pathName */
};

static emlrtRSInfo bm_emlrtRSI = {
    102,              /* lineNo */
    "ceval_xunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xunormqr.m" /* pathName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    16,         /* lineNo */
    19,         /* colNo */
    "mldivide", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pName
                                                                         */
};

static emlrtRTEInfo wk_emlrtRTEI = {
    20,         /* lineNo */
    5,          /* colNo */
    "mldivide", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pName
                                                                         */
};

static emlrtRTEInfo xk_emlrtRTEI = {
    1,        /* lineNo */
    32,       /* colNo */
    "xgeqp3", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pName */
};

static emlrtRTEInfo yk_emlrtRTEI = {
    61,       /* lineNo */
    9,        /* colNo */
    "xgeqp3", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pName */
};

static emlrtRTEInfo al_emlrtRTEI = {
    48,        /* lineNo */
    37,        /* colNo */
    "xgetrfs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pName */
};

static emlrtRTEInfo bl_emlrtRTEI = {
    92,       /* lineNo */
    22,       /* colNo */
    "xgeqp3", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pName */
};

static emlrtRTEInfo cl_emlrtRTEI = {
    70,        /* lineNo */
    23,        /* colNo */
    "xgetrfs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pName */
};

static emlrtRTEInfo dl_emlrtRTEI = {
    105,      /* lineNo */
    1,        /* colNo */
    "xgeqp3", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" /* pName */
};

static emlrtRTEInfo
    el_emlrtRTEI =
        {
            85,        /* lineNo */
            26,        /* colNo */
            "qrsolve", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pName */
};

static emlrtRTEInfo
    fl_emlrtRTEI =
        {
            119,       /* lineNo */
            5,         /* colNo */
            "qrsolve", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pName */
};

static emlrtRTEInfo gl_emlrtRTEI = {
    70,        /* lineNo */
    1,         /* colNo */
    "xgetrfs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrfs.m" /* pName */
};

static emlrtRTEInfo hl_emlrtRTEI = {
    1,          /* lineNo */
    14,         /* colNo */
    "mldivide", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.m" /* pName
                                                                         */
};

/* Function Definitions */
real_T b_mldivide(const emlrtStack *sp, const emxArray_real_T *A,
                  const emxArray_real_T *B)
{
  static const int32_T iv[2] = {1, 6};
  static const char_T rfmt[6] = {'%', '1', '4', '.', '6', 'e'};
  ptrdiff_t info_t;
  ptrdiff_t jpvt_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T Y;
  real_T tau_data;
  real_T tol;
  real_T tol_tmp;
  int32_T i;
  int32_T loop_ub;
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
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (B->size[0] != A->size[0]) {
    emlrtErrorWithMessageIdR2018a(sp, &sb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  st.site = &lk_emlrtRSI;
  emxInit_real_T(&st, &b_A, 1, &hl_emlrtRTEI, true);
  emxInit_real_T(&st, &b_B, 1, &el_emlrtRTEI, true);
  if ((A->size[0] == 0) || (B->size[0] == 0)) {
    Y = 0.0;
  } else if (A->size[0] == 1) {
    Y = B->data[0] / A->data[0];
  } else {
    b_st.site = &nk_emlrtRSI;
    c_st.site = &jl_emlrtRSI;
    i = b_A->size[0];
    b_A->size[0] = A->size[0];
    emxEnsureCapacity_real_T(&c_st, b_A, i, &xk_emlrtRTEI);
    loop_ub = A->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_A->data[i] = A->data[i];
    }
    rankA = b_A->size[0];
    d_st.site = &ml_emlrtRSI;
    jpvt_t = (ptrdiff_t)0;
    info_t = LAPACKE_dgeqp3(102, (ptrdiff_t)b_A->size[0], (ptrdiff_t)1,
                            &b_A->data[0], (ptrdiff_t)b_A->size[0], &jpvt_t,
                            &tau_data);
    e_st.site = &nl_emlrtRSI;
    loop_ub = (int32_T)info_t;
    if (loop_ub != 0) {
      p = true;
      if (loop_ub != -4) {
        if (loop_ub == -1010) {
          emlrtErrorWithMessageIdR2018a(&e_st, &rb_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&e_st, &qb_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &cv2[0], 12, loop_ub);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      e_st.site = &pl_emlrtRSI;
      if (rankA > 2147483646) {
        f_st.site = &pf_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }
      for (loop_ub = 0; loop_ub < rankA; loop_ub++) {
        b_A->data[loop_ub] = rtNaN;
      }
      e_st.site = &ql_emlrtRSI;
      tau_data = rtNaN;
      e_st.site = &rl_emlrtRSI;
    }
    c_st.site = &kl_emlrtRSI;
    rankA = 0;
    tol_tmp = muDoubleScalarAbs(b_A->data[0]);
    tol = muDoubleScalarMin(1.4901161193847656E-8,
                            2.2204460492503131E-15 * (real_T)b_A->size[0]) *
          tol_tmp;
    if (!(tol_tmp <= tol)) {
      rankA = 1;
    } else if (!emlrtSetWarningFlag(&c_st)) {
      d_st.site = &ul_emlrtRSI;
      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&d_st, 6, m, &rfmt[0]);
      emlrtAssign(&y, m);
      b_y = NULL;
      m = emlrtCreateDoubleScalar(tol);
      emlrtAssign(&b_y, m);
      e_st.site = &ycb_emlrtRSI;
      g_emlrt_marshallIn(&e_st, c_sprintf(&e_st, y, b_y, &p_emlrtMCI),
                         "<output of sprintf>", str);
      d_st.site = &vl_emlrtRSI;
      b_warning(&d_st, 0, str);
    }
    c_st.site = &ll_emlrtRSI;
    i = b_B->size[0];
    b_B->size[0] = B->size[0];
    emxEnsureCapacity_real_T(&c_st, b_B, i, &el_emlrtRTEI);
    loop_ub = B->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_B->data[i] = B->data[i];
    }
    Y = 0.0;
    d_st.site = &wl_emlrtRSI;
    e_st.site = &am_emlrtRSI;
    jpvt_t = (ptrdiff_t)b_B->size[0];
    info_t = LAPACKE_dormqr(102, 'L', 'T', jpvt_t, (ptrdiff_t)1, (ptrdiff_t)1,
                            &b_A->data[0], (ptrdiff_t)b_A->size[0], &tau_data,
                            &b_B->data[0], jpvt_t);
    f_st.site = &bm_emlrtRSI;
    if (b_infocheck(&f_st, (int32_T)info_t)) {
      loop_ub = b_B->size[0];
      i = b_B->size[0];
      b_B->size[0] = loop_ub;
      emxEnsureCapacity_real_T(&e_st, b_B, i, &fl_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        b_B->data[i] = rtNaN;
      }
    }
    d_st.site = &xl_emlrtRSI;
    for (loop_ub = 0; loop_ub < rankA; loop_ub++) {
      Y = b_B->data[0];
    }
    for (loop_ub = rankA; loop_ub >= 1; loop_ub--) {
      Y /= b_A->data[0];
      d_st.site = &yl_emlrtRSI;
    }
  }
  emxFree_real_T(&b_B);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return Y;
}

void mldivide(const emlrtStack *sp, const emxArray_real_T *A,
              const emxArray_real_T *B, emxArray_real_T *Y)
{
  static const int32_T iv[2] = {1, 6};
  static const char_T rfmt[6] = {'%', '1', '4', '.', '6', 'e'};
  ptrdiff_t INFO;
  ptrdiff_t LDA;
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emxArray_int32_T *jpvt;
  emxArray_ptrdiff_t *IPIV;
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
  int32_T minmn;
  int32_T na;
  int32_T rankA;
  char_T str[14];
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
    emlrtErrorWithMessageIdR2018a(sp, &sb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  st.site = &lk_emlrtRSI;
  emxInit_ptrdiff_t(&st, &IPIV, 1, &gl_emlrtRTEI, true);
  emxInit_real_T(&st, &b_A, 2, &hl_emlrtRTEI, true);
  emxInit_int32_T(&st, &jpvt, 2, &hl_emlrtRTEI, true);
  emxInit_real_T(&st, &tau, 1, &hl_emlrtRTEI, true);
  emxInit_ptrdiff_t(&st, &jpvt_t, 1, &dl_emlrtRTEI, true);
  emxInit_real_T(&st, &b_B, 1, &el_emlrtRTEI, true);
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    i = Y->size[0];
    Y->size[0] = A->size[1];
    emxEnsureCapacity_real_T(&st, Y, i, &wk_emlrtRTEI);
    minmn = A->size[1];
    for (i = 0; i < minmn; i++) {
      Y->data[i] = 0.0;
    }
  } else if (A->size[0] == A->size[1]) {
    b_st.site = &mk_emlrtRSI;
    c_st.site = &ok_emlrtRSI;
    i = Y->size[0];
    Y->size[0] = B->size[0];
    emxEnsureCapacity_real_T(&c_st, Y, i, &wk_emlrtRTEI);
    minmn = B->size[0];
    for (i = 0; i < minmn; i++) {
      Y->data[i] = B->data[i];
    }
    d_st.site = &qk_emlrtRSI;
    e_st.site = &rk_emlrtRSI;
    ma = A->size[0];
    na = A->size[1];
    b_na = B->size[0];
    i = muIntScalarMin_sint32(ma, na);
    b_na = muIntScalarMin_sint32(b_na, i);
    f_st.site = &sk_emlrtRSI;
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&f_st, b_A, i, &al_emlrtRTEI);
    minmn = A->size[0] * A->size[1];
    for (i = 0; i < minmn; i++) {
      b_A->data[i] = A->data[i];
    }
    g_st.site = &uk_emlrtRSI;
    repmat(&g_st, (ptrdiff_t)0.0, b_na, jpvt_t);
    i = IPIV->size[0];
    IPIV->size[0] = jpvt_t->size[0];
    emxEnsureCapacity_ptrdiff_t(&f_st, IPIV, i, &cl_emlrtRTEI);
    info_t = (ptrdiff_t)b_na;
    LDA = (ptrdiff_t)b_A->size[0];
    INFO = LAPACKE_dgetrf_work(102, info_t, info_t, &b_A->data[0], LDA,
                               &IPIV->data[0]);
    b_na = (int32_T)INFO;
    g_st.site = &tk_emlrtRSI;
    if (b_na < 0) {
      if (b_na == -1010) {
        emlrtErrorWithMessageIdR2018a(&g_st, &rb_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &g_st, &qb_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &cv1[0], 12, b_na);
      }
    }
    LAPACKE_dgetrs_work(102, 'N', info_t, (ptrdiff_t)1, &b_A->data[0], LDA,
                        &IPIV->data[0], &Y->data[0], (ptrdiff_t)B->size[0]);
    if (((A->size[0] != 1) || (A->size[1] != 1)) && (b_na > 0)) {
      d_st.site = &pk_emlrtRSI;
      if (!emlrtSetWarningFlag(&d_st)) {
        e_st.site = &il_emlrtRSI;
        warning(&e_st);
      }
    }
  } else {
    b_st.site = &nk_emlrtRSI;
    c_st.site = &jl_emlrtRSI;
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&c_st, b_A, i, &xk_emlrtRTEI);
    minmn = A->size[0] * A->size[1];
    for (i = 0; i < minmn; i++) {
      b_A->data[i] = A->data[i];
    }
    rankA = b_A->size[0];
    na = b_A->size[1];
    i = jpvt->size[0] * jpvt->size[1];
    jpvt->size[0] = 1;
    jpvt->size[1] = b_A->size[1];
    emxEnsureCapacity_int32_T(&c_st, jpvt, i, &yk_emlrtRTEI);
    minmn = b_A->size[1];
    for (i = 0; i < minmn; i++) {
      jpvt->data[i] = 0;
    }
    d_st.site = &ml_emlrtRSI;
    ma = b_A->size[0];
    b_na = b_A->size[1];
    minmana = muIntScalarMin_sint32(ma, b_na);
    i = tau->size[0];
    tau->size[0] = minmana;
    emxEnsureCapacity_real_T(&d_st, tau, i, &bl_emlrtRTEI);
    i = jpvt_t->size[0];
    jpvt_t->size[0] = b_A->size[1];
    emxEnsureCapacity_ptrdiff_t(&d_st, jpvt_t, i, &dl_emlrtRTEI);
    minmn = b_A->size[1];
    for (i = 0; i < minmn; i++) {
      jpvt_t->data[i] = (ptrdiff_t)0;
    }
    info_t = LAPACKE_dgeqp3(
        102, (ptrdiff_t)b_A->size[0], (ptrdiff_t)b_A->size[1], &b_A->data[0],
        (ptrdiff_t)b_A->size[0], &jpvt_t->data[0], &tau->data[0]);
    e_st.site = &nl_emlrtRSI;
    if (infocheck(&e_st, (int32_T)info_t)) {
      e_st.site = &ol_emlrtRSI;
      if (na > 2147483646) {
        f_st.site = &pf_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }
      for (minmn = 0; minmn < na; minmn++) {
        e_st.site = &pl_emlrtRSI;
        if (rankA > 2147483646) {
          f_st.site = &pf_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }
        for (b_na = 0; b_na < rankA; b_na++) {
          b_A->data[minmn * ma + b_na] = rtNaN;
        }
      }
      minmn = muIntScalarMin_sint32(rankA, na);
      e_st.site = &ql_emlrtRSI;
      for (rankA = 0; rankA < minmn; rankA++) {
        tau->data[rankA] = rtNaN;
      }
      b_na = minmn + 1;
      e_st.site = &rl_emlrtRSI;
      if ((minmn + 1 <= minmana) && (minmana > 2147483646)) {
        f_st.site = &pf_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }
      for (rankA = b_na; rankA <= minmana; rankA++) {
        tau->data[rankA - 1] = 0.0;
      }
      e_st.site = &sl_emlrtRSI;
      for (rankA = 0; rankA < na; rankA++) {
        jpvt->data[rankA] = rankA + 1;
      }
    } else {
      e_st.site = &tl_emlrtRSI;
      if (na > 2147483646) {
        f_st.site = &pf_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }
      for (rankA = 0; rankA < na; rankA++) {
        jpvt->data[rankA] = (int32_T)jpvt_t->data[rankA];
      }
    }
    c_st.site = &kl_emlrtRSI;
    rankA = 0;
    if (b_A->size[0] < b_A->size[1]) {
      minmn = b_A->size[0];
      b_na = b_A->size[1];
    } else {
      minmn = b_A->size[1];
      b_na = b_A->size[0];
    }
    tol = muDoubleScalarMin(1.4901161193847656E-8,
                            2.2204460492503131E-15 * (real_T)b_na) *
          muDoubleScalarAbs(b_A->data[0]);
    while ((rankA < minmn) &&
           (!(muDoubleScalarAbs(b_A->data[rankA + b_A->size[0] * rankA]) <=
              tol))) {
      rankA++;
    }
    if ((rankA < minmn) && (!emlrtSetWarningFlag(&c_st))) {
      d_st.site = &ul_emlrtRSI;
      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&d_st, 6, m, &rfmt[0]);
      emlrtAssign(&y, m);
      b_y = NULL;
      m = emlrtCreateDoubleScalar(tol);
      emlrtAssign(&b_y, m);
      e_st.site = &ycb_emlrtRSI;
      g_emlrt_marshallIn(&e_st, c_sprintf(&e_st, y, b_y, &p_emlrtMCI),
                         "<output of sprintf>", str);
      d_st.site = &vl_emlrtRSI;
      b_warning(&d_st, rankA, str);
    }
    c_st.site = &ll_emlrtRSI;
    i = b_B->size[0];
    b_B->size[0] = B->size[0];
    emxEnsureCapacity_real_T(&c_st, b_B, i, &el_emlrtRTEI);
    minmn = B->size[0];
    for (i = 0; i < minmn; i++) {
      b_B->data[i] = B->data[i];
    }
    i = Y->size[0];
    Y->size[0] = b_A->size[1];
    emxEnsureCapacity_real_T(&c_st, Y, i, &wk_emlrtRTEI);
    minmn = b_A->size[1];
    for (i = 0; i < minmn; i++) {
      Y->data[i] = 0.0;
    }
    d_st.site = &wl_emlrtRSI;
    e_st.site = &am_emlrtRSI;
    info_t = (ptrdiff_t)b_B->size[0];
    info_t = LAPACKE_dormqr(
        102, 'L', 'T', info_t, (ptrdiff_t)1,
        (ptrdiff_t)muIntScalarMin_sint32(b_A->size[0], b_A->size[1]),
        &b_A->data[0], (ptrdiff_t)b_A->size[0], &tau->data[0], &b_B->data[0],
        info_t);
    f_st.site = &bm_emlrtRSI;
    if (b_infocheck(&f_st, (int32_T)info_t)) {
      b_na = b_B->size[0];
      i = b_B->size[0];
      b_B->size[0] = b_na;
      emxEnsureCapacity_real_T(&e_st, b_B, i, &fl_emlrtRTEI);
      for (i = 0; i < b_na; i++) {
        b_B->data[i] = rtNaN;
      }
    }
    d_st.site = &xl_emlrtRSI;
    if ((1 <= rankA) && (rankA > 2147483646)) {
      e_st.site = &pf_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }
    for (b_na = 0; b_na < rankA; b_na++) {
      Y->data[jpvt->data[b_na] - 1] = b_B->data[b_na];
    }
    for (minmn = rankA; minmn >= 1; minmn--) {
      i = jpvt->data[minmn - 1];
      Y->data[i - 1] /= b_A->data[(minmn + b_A->size[0] * (minmn - 1)) - 1];
      d_st.site = &yl_emlrtRSI;
      for (b_na = 0; b_na <= minmn - 2; b_na++) {
        Y->data[jpvt->data[b_na] - 1] -=
            Y->data[jpvt->data[minmn - 1] - 1] *
            b_A->data[b_na + b_A->size[0] * (minmn - 1)];
      }
    }
  }
  emxFree_real_T(&b_B);
  emxFree_ptrdiff_t(&jpvt_t);
  emxFree_real_T(&tau);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&b_A);
  emxFree_ptrdiff_t(&IPIV);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (mldivide.c) */
