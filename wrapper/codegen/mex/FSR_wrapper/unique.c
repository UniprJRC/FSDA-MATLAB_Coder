/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * unique.c
 *
 * Code generation for function 'unique'
 *
 */

/* Include files */
#include "unique.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "mwmathutil.h"
#include <math.h>

/* Variable Definitions */
static emlrtRSInfo ymb_emlrtRSI = {
    161,             /* lineNo */
    "unique_vector", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pathName
                                                                       */
};

static emlrtRSInfo anb_emlrtRSI = {
    163,             /* lineNo */
    "unique_vector", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pathName
                                                                       */
};

static emlrtRSInfo bnb_emlrtRSI = {
    198,             /* lineNo */
    "unique_vector", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pathName
                                                                       */
};

static emlrtRSInfo cnb_emlrtRSI = {
    205,             /* lineNo */
    "unique_vector", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pathName
                                                                       */
};

static emlrtRSInfo dnb_emlrtRSI = {
    218,             /* lineNo */
    "unique_vector", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pathName
                                                                       */
};

static emlrtRSInfo enb_emlrtRSI = {
    229,             /* lineNo */
    "unique_vector", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pathName
                                                                       */
};

static emlrtRSInfo fnb_emlrtRSI = {
    237,             /* lineNo */
    "unique_vector", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pathName
                                                                       */
};

static emlrtRSInfo gnb_emlrtRSI = {
    243,             /* lineNo */
    "unique_vector", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pathName
                                                                       */
};

static emlrtRTEInfo cd_emlrtRTEI = {
    236,             /* lineNo */
    1,               /* colNo */
    "unique_vector", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pName
                                                                       */
};

static emlrtRTEInfo gib_emlrtRTEI = {
    162,      /* lineNo */
    20,       /* colNo */
    "unique", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pName
                                                                       */
};

static emlrtRTEInfo hib_emlrtRTEI = {
    237,      /* lineNo */
    1,        /* colNo */
    "unique", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pName
                                                                       */
};

static emlrtRTEInfo iib_emlrtRTEI = {
    161,      /* lineNo */
    1,        /* colNo */
    "unique", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m" /* pName
                                                                       */
};

/* Function Definitions */
void unique_vector(const emlrtStack *sp, const emxArray_real_T *a,
                   emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_int32_T *idx;
  real_T absx;
  real_T x;
  int32_T b_iv[2];
  int32_T b_a;
  int32_T b_k;
  int32_T exitg2;
  int32_T exponent;
  int32_T k;
  int32_T nNaN;
  int32_T na;
  int32_T nb;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_int32_T(sp, &idx, 1, &iib_emlrtRTEI, true);
  na = a->size[0];
  st.site = &ymb_emlrtRSI;
  sortIdx(&st, a, idx);
  b_a = b->size[0];
  b->size[0] = a->size[0];
  emxEnsureCapacity_real_T(sp, b, b_a, &gib_emlrtRTEI);
  st.site = &anb_emlrtRSI;
  if ((1 <= a->size[0]) && (a->size[0] > 2147483646)) {
    b_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (k = 0; k < na; k++) {
    b->data[k] = a->data[idx->data[k] - 1];
  }
  emxFree_int32_T(&idx);
  k = a->size[0];
  while ((k >= 1) && muDoubleScalarIsNaN(b->data[k - 1])) {
    k--;
  }
  nNaN = a->size[0] - k;
  exitg1 = false;
  while ((!exitg1) && (k >= 1)) {
    absx = b->data[k - 1];
    if (muDoubleScalarIsInf(absx) && (absx > 0.0)) {
      k--;
    } else {
      exitg1 = true;
    }
  }
  na = (a->size[0] - k) - nNaN;
  nb = 0;
  b_k = 0;
  while (b_k + 1 <= k) {
    x = b->data[b_k];
    b_a = b_k;
    do {
      exitg2 = 0;
      b_k++;
      if (b_k + 1 > k) {
        exitg2 = 1;
      } else {
        st.site = &bnb_emlrtRSI;
        absx = muDoubleScalarAbs(x / 2.0);
        if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
          if (absx <= 2.2250738585072014E-308) {
            absx = 4.94065645841247E-324;
          } else {
            frexp(absx, &exponent);
            absx = ldexp(1.0, exponent - 53);
          }
        } else {
          absx = rtNaN;
        }
        if ((muDoubleScalarAbs(x - b->data[b_k]) < absx) ||
            (muDoubleScalarIsInf(b->data[b_k]) && muDoubleScalarIsInf(x) &&
             ((b->data[b_k] > 0.0) == (x > 0.0)))) {
          p = true;
        } else {
          p = false;
        }
        if (!p) {
          exitg2 = 1;
        }
      }
    } while (exitg2 == 0);
    nb++;
    b->data[nb - 1] = x;
    st.site = &cnb_emlrtRSI;
    if ((b_a + 1 <= b_k) && (b_k > 2147483646)) {
      b_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
  }
  if (na > 0) {
    nb++;
    b->data[nb - 1] = b->data[k];
    st.site = &dnb_emlrtRSI;
    if (na > 2147483646) {
      b_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
  }
  b_k = k + na;
  st.site = &enb_emlrtRSI;
  for (na = 0; na < nNaN; na++) {
    b->data[nb + na] = b->data[b_k + na];
  }
  nb += nNaN;
  if (nb > a->size[0]) {
    emlrtErrorWithMessageIdR2018a(sp, &cd_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (1 > nb) {
    b_a = 0;
  } else {
    b_a = nb;
  }
  b_iv[0] = 1;
  b_iv[1] = b_a;
  st.site = &fnb_emlrtRSI;
  b_indexShapeCheck(&st, b->size[0], b_iv);
  na = b->size[0];
  b->size[0] = b_a;
  emxEnsureCapacity_real_T(sp, b, na, &hib_emlrtRTEI);
  st.site = &gnb_emlrtRSI;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (unique.c) */
