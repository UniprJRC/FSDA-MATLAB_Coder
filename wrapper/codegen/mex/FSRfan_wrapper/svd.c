/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * svd.c
 *
 * Code generation for function 'svd'
 *
 */

/* Include files */
#include "svd.h"
#include "FSRfan_wrapper_data.h"
#include "FSRfan_wrapper_emxutil.h"
#include "FSRfan_wrapper_types.h"
#include "rt_nonfinite.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo dd_emlrtRSI = {
    29,    /* lineNo */
    "svd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" /* pathName
                                                                          */
};

static emlrtRSInfo ed_emlrtRSI = {
    108,          /* lineNo */
    "callLAPACK", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" /* pathName
                                                                          */
};

static emlrtRSInfo fd_emlrtRSI = {
    31,       /* lineNo */
    "xgesvd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgesvd.m" /* pathName */
};

static emlrtRSInfo gd_emlrtRSI = {
    197,            /* lineNo */
    "ceval_xgesvd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgesvd.m" /* pathName */
};

static emlrtRTEInfo i_emlrtRTEI = {
    112,          /* lineNo */
    5,            /* colNo */
    "callLAPACK", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" /* pName
                                                                          */
};

static emlrtRTEInfo ie_emlrtRTEI = {
    31,       /* lineNo */
    33,       /* colNo */
    "xgesvd", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgesvd.m" /* pName */
};

static emlrtRTEInfo je_emlrtRTEI = {
    90,       /* lineNo */
    20,       /* colNo */
    "xgesvd", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgesvd.m" /* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = {
    123,      /* lineNo */
    9,        /* colNo */
    "xgesvd", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgesvd.m" /* pName */
};

static emlrtRTEInfo le_emlrtRTEI = {
    121,      /* lineNo */
    33,       /* colNo */
    "xgesvd", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgesvd.m" /* pName */
};

static emlrtRTEInfo me_emlrtRTEI = {
    121,      /* lineNo */
    9,        /* colNo */
    "xgesvd", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgesvd.m" /* pName */
};

/* Function Definitions */
void svd(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *U)
{
  static const char_T fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'g', 'e', 's', 'v', 'd'};
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *b_A;
  emxArray_real_T *superb;
  int32_T m;
  int32_T n;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_A, 2, &ie_emlrtRTEI, true);
  st.site = &dd_emlrtRSI;
  b_st.site = &ed_emlrtRSI;
  c_st.site = &fd_emlrtRSI;
  n = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(&c_st, b_A, n, &ie_emlrtRTEI);
  m = A->size[0] * A->size[1];
  for (n = 0; n < m; n++) {
    b_A->data[n] = A->data[n];
  }
  m = A->size[0];
  n = A->size[1];
  m = muIntScalarMin_sint32(n, m);
  n = U->size[0];
  U->size[0] = m;
  emxEnsureCapacity_real_T(&c_st, U, n, &je_emlrtRTEI);
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    emxInit_real_T(&c_st, &superb, 1, &me_emlrtRTEI, true);
    if (m > 1) {
      n = superb->size[0];
      superb->size[0] = m - 1;
      emxEnsureCapacity_real_T(&c_st, superb, n, &le_emlrtRTEI);
    } else {
      n = superb->size[0];
      superb->size[0] = 1;
      emxEnsureCapacity_real_T(&c_st, superb, n, &ke_emlrtRTEI);
    }
    info_t = LAPACKE_dgesvd(102, 'N', 'N', (ptrdiff_t)A->size[0],
                            (ptrdiff_t)A->size[1], &b_A->data[0],
                            (ptrdiff_t)A->size[0], &U->data[0], NULL,
                            (ptrdiff_t)1, NULL, (ptrdiff_t)1, &superb->data[0]);
    m = (int32_T)info_t;
    emxFree_real_T(&superb);
  } else {
    m = 0;
  }
  emxFree_real_T(&b_A);
  d_st.site = &gd_emlrtRSI;
  if (m < 0) {
    if (m == -1010) {
      emlrtErrorWithMessageIdR2018a(&d_st, &j_emlrtRTEI, "MATLAB:nomem",
                                    "MATLAB:nomem", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &k_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
          "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &fname[0], 12, m);
    }
  }
  if (m > 0) {
    emlrtErrorWithMessageIdR2018a(&st, &i_emlrtRTEI,
                                  "Coder:MATLAB:svd_NoConvergence",
                                  "Coder:MATLAB:svd_NoConvergence", 0);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (svd.c) */
