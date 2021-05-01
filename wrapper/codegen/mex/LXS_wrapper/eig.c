/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eig.c
 *
 * Code generation for function 'eig'
 *
 */

/* Include files */
#include "eig.h"
#include "LXS_wrapper_data.h"
#include "LXS_wrapper_types.h"
#include "eigStandard.h"
#include "rt_nonfinite.h"
#include "vAllOrAny.h"
#include "warning.h"
#include "xhseqr.h"

/* Variable Definitions */
static emlrtRSInfo pq_emlrtRSI = {
    93,    /* lineNo */
    "eig", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pathName
                                                                       */
};

static emlrtRSInfo qq_emlrtRSI = {
    139,   /* lineNo */
    "eig", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pathName
                                                                       */
};

static emlrtRSInfo rq_emlrtRSI = {
    147,   /* lineNo */
    "eig", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pathName
                                                                       */
};

static emlrtRSInfo sq_emlrtRSI = {
    21,                     /* lineNo */
    "eigHermitianStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" /* pathName */
};

static emlrtRSInfo tq_emlrtRSI = {
    35,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo uq_emlrtRSI = {
    52,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo vq_emlrtRSI = {
    54,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo wq_emlrtRSI = {
    83,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo xq_emlrtRSI = {
    18,       /* lineNo */
    "xgehrd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgehrd.m" /* pathName */
};

/* Function Definitions */
void eig(const emlrtStack *sp, const real_T A[4], creal_T V[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T b_A;
  emxArray_real_T c_A;
  real_T T[4];
  int32_T iv[2];
  int32_T iv1[2];
  int32_T exitg1;
  int32_T i;
  int32_T j;
  boolean_T exitg2;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &pq_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &ud_emlrtRSI;
  b_A.data = (real_T *)&A[0];
  iv[0] = 2;
  iv[1] = 2;
  b_A.size = &iv[0];
  b_A.allocatedSize = 4;
  b_A.numDimensions = 2;
  b_A.canFreeData = false;
  c_st.site = &vd_emlrtRSI;
  p = flatVectorAllOrAny(&c_st, &b_A);
  if (!p) {
    V[0].re = rtNaN;
    V[0].im = 0.0;
    V[1].re = rtNaN;
    V[1].im = 0.0;
  } else {
    p = true;
    j = 0;
    exitg2 = false;
    while ((!exitg2) && (j < 2)) {
      i = 0;
      do {
        exitg1 = 0;
        if (i <= j) {
          if (!(A[i + (j << 1)] == A[j + (i << 1)])) {
            p = false;
            exitg1 = 1;
          } else {
            i++;
          }
        } else {
          j++;
          exitg1 = 2;
        }
      } while (exitg1 == 0);
      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
    if (p) {
      st.site = &qq_emlrtRSI;
      b_st.site = &sq_emlrtRSI;
      T[0] = A[0];
      T[2] = A[2];
      T[3] = A[3];
      c_st.site = &tq_emlrtRSI;
      d_st.site = &ud_emlrtRSI;
      c_A.data = (real_T *)&A[0];
      iv1[0] = 2;
      iv1[1] = 2;
      c_A.size = &iv1[0];
      c_A.allocatedSize = 4;
      c_A.numDimensions = 2;
      c_A.canFreeData = false;
      e_st.site = &vd_emlrtRSI;
      p = flatVectorAllOrAny(&e_st, &c_A);
      if (!p) {
        T[0] = rtNaN;
        T[3] = rtNaN;
      } else {
        c_st.site = &uq_emlrtRSI;
        d_st.site = &xq_emlrtRSI;
        T[1] = A[1];
        c_st.site = &vq_emlrtRSI;
        j = xhseqr(T);
        if (j != 0) {
          c_st.site = &wq_emlrtRSI;
          d_warning(&c_st);
        }
      }
      V[0].re = T[0];
      V[0].im = 0.0;
      V[1].re = T[3];
      V[1].im = 0.0;
    } else {
      st.site = &rq_emlrtRSI;
      eigStandard(&st, A, V);
    }
  }
}

/* End of code generation (eig.c) */
