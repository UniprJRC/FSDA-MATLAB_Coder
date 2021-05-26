/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sort.c
 *
 * Code generation for function 'sort'
 *
 */

/* Include files */
#include "sort.h"
#include "LXS_wrapper_data.h"
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ml_emlrtRSI = {
    76,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRSInfo nl_emlrtRSI = {
    79,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRSInfo ol_emlrtRSI = {
    81,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRSInfo pl_emlrtRSI = {
    84,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRSInfo ql_emlrtRSI = {
    87,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRSInfo rl_emlrtRSI = {
    90,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRTEInfo by_emlrtRTEI = {
    56,     /* lineNo */
    24,     /* colNo */
    "sort", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pName
                                                                           */
};

static emlrtRTEInfo cy_emlrtRTEI = {
    75,     /* lineNo */
    26,     /* colNo */
    "sort", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pName
                                                                           */
};

static emlrtRTEInfo dy_emlrtRTEI = {
    56,     /* lineNo */
    1,      /* colNo */
    "sort", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pName
                                                                           */
};

static emlrtRTEInfo ey_emlrtRTEI = {
    1,      /* lineNo */
    20,     /* colNo */
    "sort", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pName
                                                                           */
};

/* Function Definitions */
void b_sort(creal_T x[2])
{
  real_T ai;
  real_T ar;
  real_T b_x;
  real_T bi;
  real_T br;
  boolean_T SCALEA;
  boolean_T SCALEB;
  if (muDoubleScalarIsNaN(x[1].re) || muDoubleScalarIsNaN(x[1].im)) {
    SCALEA = (muDoubleScalarIsNaN(x[0].re) || muDoubleScalarIsNaN(x[0].im));
  } else if (muDoubleScalarIsNaN(x[0].re) || muDoubleScalarIsNaN(x[0].im)) {
    SCALEA = true;
  } else {
    if ((muDoubleScalarAbs(x[0].re) > 8.9884656743115785E+307) ||
        (muDoubleScalarAbs(x[0].im) > 8.9884656743115785E+307)) {
      SCALEA = true;
    } else {
      SCALEA = false;
    }
    if ((muDoubleScalarAbs(x[1].re) > 8.9884656743115785E+307) ||
        (muDoubleScalarAbs(x[1].im) > 8.9884656743115785E+307)) {
      SCALEB = true;
    } else {
      SCALEB = false;
    }
    if (SCALEA || SCALEB) {
      b_x = muDoubleScalarHypot(x[0].re / 2.0, x[0].im / 2.0);
      bi = muDoubleScalarHypot(x[1].re / 2.0, x[1].im / 2.0);
    } else {
      b_x = muDoubleScalarHypot(x[0].re, x[0].im);
      bi = muDoubleScalarHypot(x[1].re, x[1].im);
    }
    if (b_x == bi) {
      b_x = muDoubleScalarAtan2(x[0].im, x[0].re);
      bi = muDoubleScalarAtan2(x[1].im, x[1].re);
      if (b_x == bi) {
        ar = x[0].re;
        ai = x[0].im;
        br = x[1].re;
        bi = x[1].im;
        if (ar != br) {
          if (b_x >= 0.0) {
            b_x = br;
            bi = ar;
          } else {
            b_x = ar;
            bi = br;
          }
        } else if (ar < 0.0) {
          b_x = bi;
          bi = ai;
        } else {
          b_x = ai;
        }
        if (b_x == bi) {
          b_x = 0.0;
          bi = 0.0;
        }
      }
    }
    SCALEA = (b_x >= bi);
  }
  if (!SCALEA) {
    ar = x[0].re;
    ai = x[0].im;
    x[0] = x[1];
    x[1].re = ar;
    x[1].im = ai;
  }
}

void c_sort(const emlrtStack *sp, emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_int32_T *nib_emlrtRSI;
  emxArray_real_T *vwork;
  int32_T dim;
  int32_T i;
  int32_T k;
  int32_T vlen;
  int32_T vstride;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  dim = 0;
  if (x->size[0] != 1) {
    dim = -1;
  }
  emxInit_real_T(sp, &vwork, 1, &dy_emlrtRTEI, true);
  if (dim + 2 <= 1) {
    i = x->size[0];
  } else {
    i = 1;
  }
  vlen = i - 1;
  vstride = vwork->size[0];
  vwork->size[0] = i;
  emxEnsureCapacity_real_T(sp, vwork, vstride, &by_emlrtRTEI);
  st.site = &ml_emlrtRSI;
  vstride = 1;
  for (k = 0; k <= dim; k++) {
    vstride *= x->size[0];
  }
  st.site = &nl_emlrtRSI;
  st.site = &ol_emlrtRSI;
  if ((1 <= vstride) && (vstride > 2147483646)) {
    b_st.site = &ic_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  emxInit_int32_T(sp, &nib_emlrtRSI, 1, &ey_emlrtRTEI, true);
  for (dim = 0; dim < vstride; dim++) {
    st.site = &pl_emlrtRSI;
    if ((1 <= i) && (i > 2147483646)) {
      b_st.site = &ic_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (k = 0; k <= vlen; k++) {
      vwork->data[k] = x->data[dim + k * vstride];
    }
    st.site = &ql_emlrtRSI;
    b_sortIdx(&st, vwork, nib_emlrtRSI);
    st.site = &rl_emlrtRSI;
    for (k = 0; k <= vlen; k++) {
      x->data[dim + k * vstride] = vwork->data[k];
    }
  }
  emxFree_int32_T(&nib_emlrtRSI);
  emxFree_real_T(&vwork);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void sort(const emlrtStack *sp, emxArray_real_T *x, emxArray_int32_T *idx)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_int32_T *iidx;
  emxArray_real_T *vwork;
  int32_T dim;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T vlen;
  int32_T vstride;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  dim = 0;
  if (x->size[0] != 1) {
    dim = -1;
  }
  emxInit_real_T(sp, &vwork, 1, &dy_emlrtRTEI, true);
  if (dim + 2 <= 1) {
    i = x->size[0];
  } else {
    i = 1;
  }
  vlen = i - 1;
  i1 = vwork->size[0];
  vwork->size[0] = i;
  emxEnsureCapacity_real_T(sp, vwork, i1, &by_emlrtRTEI);
  i1 = idx->size[0];
  idx->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(sp, idx, i1, &cy_emlrtRTEI);
  st.site = &ml_emlrtRSI;
  vstride = 1;
  for (k = 0; k <= dim; k++) {
    vstride *= x->size[0];
  }
  st.site = &nl_emlrtRSI;
  st.site = &ol_emlrtRSI;
  if ((1 <= vstride) && (vstride > 2147483646)) {
    b_st.site = &ic_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  emxInit_int32_T(sp, &iidx, 1, &ey_emlrtRTEI, true);
  for (dim = 0; dim < vstride; dim++) {
    st.site = &pl_emlrtRSI;
    if ((1 <= i) && (i > 2147483646)) {
      b_st.site = &ic_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (k = 0; k <= vlen; k++) {
      vwork->data[k] = x->data[dim + k * vstride];
    }
    st.site = &ql_emlrtRSI;
    b_sortIdx(&st, vwork, iidx);
    st.site = &rl_emlrtRSI;
    for (k = 0; k <= vlen; k++) {
      i1 = dim + k * vstride;
      x->data[i1] = vwork->data[k];
      idx->data[i1] = iidx->data[k];
    }
  }
  emxFree_int32_T(&iidx);
  emxFree_real_T(&vwork);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (sort.c) */
