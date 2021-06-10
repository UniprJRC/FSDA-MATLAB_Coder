/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mtimes.c
 *
 * Code generation for function 'mtimes'
 *
 */

/* Include files */
#include "mtimes.h"
#include "LXS_wrapper1_data.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_types.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRTEInfo ke_emlrtRTEI = {
    140,      /* lineNo */
    5,        /* colNo */
    "mtimes", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" /* pName */
};

/* Function Definitions */
real_T b_mtimes(const emxArray_real_T *A, const emxArray_real_T *B)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  real_T C;
  if (A->size[0] < 1) {
    C = 0.0;
  } else {
    n_t = (ptrdiff_t)A->size[0];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    C = ddot(&n_t, &A->data[0], &incx_t, &B->data[0], &incy_t);
  }
  return C;
}

void c_mtimes(const emlrtStack *sp, const emxArray_real_T *A,
              const emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[1] == 0)) {
    i = C->size[0];
    C->size[0] = A->size[0];
    emxEnsureCapacity_real_T(sp, C, i, &ke_emlrtRTEI);
    loop_ub = A->size[0];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    st.site = &gc_emlrtRSI;
    b_st.site = &ic_emlrtRSI;
    TRANSB1 = 'T';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)1;
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0];
    C->size[0] = A->size[0];
    emxEnsureCapacity_real_T(&b_st, C, i, &le_emlrtRTEI);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

real_T d_mtimes(const emxArray_real_T *A, const emxArray_real_T *B)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  real_T C;
  if (A->size[1] < 1) {
    C = 0.0;
  } else {
    n_t = (ptrdiff_t)A->size[1];
    incx_t = (ptrdiff_t)1;
    incy_t = (ptrdiff_t)1;
    C = ddot(&n_t, &A->data[0], &incx_t, &B->data[0], &incy_t);
  }
  return C;
}

void e_mtimes(const emlrtStack *sp, const emxArray_real_T *A,
              const emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0) ||
      (B->size[1] == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(sp, C, i, &ke_emlrtRTEI);
    loop_ub = A->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    st.site = &gc_emlrtRSI;
    b_st.site = &ic_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&b_st, C, i, &le_emlrtRTEI);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

void f_mtimes(const emlrtStack *sp, const emxArray_real_T *A,
              const emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0) ||
      (B->size[1] == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[1];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(sp, C, i, &ke_emlrtRTEI);
    loop_ub = A->size[1] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    st.site = &gc_emlrtRSI;
    b_st.site = &ic_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)A->size[0];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[1];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[1];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&b_st, C, i, &le_emlrtRTEI);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

void mtimes(const emlrtStack *sp, const emxArray_real_T *A,
            const emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    i = C->size[0];
    C->size[0] = A->size[0];
    emxEnsureCapacity_real_T(sp, C, i, &ke_emlrtRTEI);
    loop_ub = A->size[0];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    st.site = &gc_emlrtRSI;
    b_st.site = &ic_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0];
    C->size[0] = A->size[0];
    emxEnsureCapacity_real_T(&b_st, C, i, &le_emlrtRTEI);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

/* End of code generation (mtimes.c) */
