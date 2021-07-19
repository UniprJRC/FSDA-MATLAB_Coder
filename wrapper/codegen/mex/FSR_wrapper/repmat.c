/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "repmat.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo xw_emlrtRSI = {
    28,       /* lineNo */
    "repmat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pathName
                                                                         */
};

static emlrtRSInfo dbb_emlrtRSI = {
    64,       /* lineNo */
    "repmat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pathName
                                                                         */
};

static emlrtRSInfo ebb_emlrtRSI = {
    71,       /* lineNo */
    "repmat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pathName
                                                                         */
};

static emlrtRSInfo fbb_emlrtRSI = {
    66,       /* lineNo */
    "repmat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pathName
                                                                         */
};

static emlrtRSInfo gbb_emlrtRSI = {
    69,       /* lineNo */
    "repmat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pathName
                                                                         */
};

static emlrtRTEInfo vb_emlrtRTEI = {
    58,                   /* lineNo */
    23,                   /* colNo */
    "assertValidSizeArg", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\assertValidSizeArg.m" /* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = {
    64,                   /* lineNo */
    15,                   /* colNo */
    "assertValidSizeArg", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\assertValidSizeArg.m" /* pName */
};

static emlrtRTEInfo pr_emlrtRTEI = {
    53,       /* lineNo */
    9,        /* colNo */
    "repmat", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pName
                                                                         */
};

static emlrtRTEInfo os_emlrtRTEI = {
    59,       /* lineNo */
    28,       /* colNo */
    "repmat", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pName
                                                                         */
};

/* Function Definitions */
void b_repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T varargin_2,
              emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T b_varargin_2;
  int32_T i;
  int32_T ibtile;
  int32_T jtilecol;
  int32_T k;
  int32_T nrows;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &xw_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((varargin_2 != varargin_2) || muDoubleScalarIsInf(varargin_2)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &vb_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  if (varargin_2 <= 0.0) {
    b_varargin_2 = 0.0;
  } else {
    b_varargin_2 = varargin_2;
  }
  if (!(b_varargin_2 <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&st, &jc_emlrtRTEI, "Coder:MATLAB:pmaxsize",
                                  "Coder:MATLAB:pmaxsize", 0);
  }
  nrows = b->size[0] * b->size[1];
  b->size[0] = a->size[0];
  i = (int32_T)varargin_2;
  b->size[1] = (int32_T)varargin_2;
  emxEnsureCapacity_real_T(sp, b, nrows, &os_emlrtRTEI);
  nrows = a->size[0];
  st.site = &dbb_emlrtRSI;
  for (jtilecol = 0; jtilecol < i; jtilecol++) {
    ibtile = jtilecol * nrows;
    st.site = &ebb_emlrtRSI;
    if ((1 <= nrows) && (nrows > 2147483646)) {
      b_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (k = 0; k < nrows; k++) {
      b->data[ibtile + k] = a->data[k];
    }
  }
}

void c_repmat(const emlrtStack *sp, const real_T a_data[],
              const int32_T a_size[2], real_T varargin_1, emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T iacol;
  int32_T ibcol;
  int32_T ibmat;
  int32_T itilerow;
  int32_T jcol;
  int32_T k;
  int32_T ncols;
  int32_T nrows;
  int32_T ntilerows;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &xw_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((varargin_1 != varargin_1) || muDoubleScalarIsInf(varargin_1)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &vb_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  nrows = a_size[0] * (int32_T)varargin_1;
  ncols = b->size[0] * b->size[1];
  b->size[0] = nrows;
  b->size[1] = a_size[1];
  emxEnsureCapacity_real_T(sp, b, ncols, &os_emlrtRTEI);
  nrows = a_size[0];
  ncols = a_size[1];
  ntilerows = (int32_T)varargin_1;
  st.site = &fbb_emlrtRSI;
  for (jcol = 0; jcol < ncols; jcol++) {
    iacol = jcol * nrows;
    ibmat = jcol * (nrows * (int32_T)varargin_1);
    st.site = &gbb_emlrtRSI;
    if ((1 <= (int32_T)varargin_1) && ((int32_T)varargin_1 > 2147483646)) {
      b_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (itilerow = 0; itilerow < ntilerows; itilerow++) {
      ibcol = ibmat + itilerow * nrows;
      st.site = &ebb_emlrtRSI;
      for (k = 0; k < nrows; k++) {
        b->data[ibcol] = a_data[iacol];
      }
    }
  }
}

void d_repmat(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  int32_T itilerow;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &xw_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((varargin_1 != varargin_1) || muDoubleScalarIsInf(varargin_1)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &vb_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  i = (int32_T)varargin_1;
  itilerow = b->size[0] * b->size[1];
  b->size[0] = (int32_T)varargin_1;
  b->size[1] = 1;
  emxEnsureCapacity_real_T(sp, b, itilerow, &os_emlrtRTEI);
  st.site = &fbb_emlrtRSI;
  for (itilerow = 0; itilerow < i; itilerow++) {
    b->data[itilerow] = 0.99;
  }
  st.site = &gbb_emlrtRSI;
  if ((1 <= (int32_T)varargin_1) && ((int32_T)varargin_1 > 2147483646)) {
    b_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
}

void e_repmat(const emlrtStack *sp, const emxArray_real_T *a,
              emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T ibtile;
  int32_T jtilecol;
  int32_T k;
  int32_T nrows;
  boolean_T overflow;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  nrows = b->size[0] * b->size[1];
  b->size[0] = a->size[0];
  b->size[1] = 7;
  emxEnsureCapacity_real_T(sp, b, nrows, &os_emlrtRTEI);
  nrows = a->size[0];
  overflow = ((1 <= a->size[0]) && (a->size[0] > 2147483646));
  for (jtilecol = 0; jtilecol < 7; jtilecol++) {
    ibtile = jtilecol * nrows;
    st.site = &ebb_emlrtRSI;
    if (overflow) {
      b_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (k = 0; k < nrows; k++) {
      b->data[ibtile + k] = a->data[k];
    }
  }
}

void f_repmat(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *b)
{
  static const real_T b_dv[7] = {0.010000000000000009,
                                 0.0010000000000000009,
                                 9.9999999999988987E-5,
                                 9.99999999995449E-6,
                                 0.99,
                                 0.5,
                                 0.99999};
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  int32_T ibmat;
  int32_T itilerow;
  int32_T jcol;
  boolean_T overflow;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &xw_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((varargin_1 != varargin_1) || muDoubleScalarIsInf(varargin_1)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &vb_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  i = (int32_T)varargin_1;
  ibmat = b->size[0] * b->size[1];
  b->size[0] = (int32_T)varargin_1;
  b->size[1] = 7;
  emxEnsureCapacity_real_T(sp, b, ibmat, &os_emlrtRTEI);
  overflow = ((1 <= (int32_T)varargin_1) && ((int32_T)varargin_1 > 2147483646));
  for (jcol = 0; jcol < 7; jcol++) {
    ibmat = jcol * (int32_T)varargin_1;
    st.site = &gbb_emlrtRSI;
    if (overflow) {
      b_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (itilerow = 0; itilerow < i; itilerow++) {
      b->data[ibmat + itilerow] = b_dv[jcol];
    }
  }
}

void g_repmat(const emlrtStack *sp, const emxArray_real_T *a,
              emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T k;
  int32_T nrows;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  nrows = b->size[0];
  b->size[0] = a->size[0];
  emxEnsureCapacity_real_T(sp, b, nrows, &os_emlrtRTEI);
  nrows = a->size[0];
  st.site = &ebb_emlrtRSI;
  if ((1 <= a->size[0]) && (a->size[0] > 2147483646)) {
    b_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (k = 0; k < nrows; k++) {
    b->data[k] = a->data[k];
  }
}

void h_repmat(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *b)
{
  emlrtStack st;
  int32_T i;
  int32_T loop_ub_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &xw_emlrtRSI;
  if ((varargin_1 != varargin_1) || muDoubleScalarIsInf(varargin_1)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &vb_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  loop_ub_tmp = (int32_T)varargin_1;
  i = b->size[0];
  b->size[0] = (int32_T)varargin_1;
  emxEnsureCapacity_real_T(sp, b, i, &pr_emlrtRTEI);
  for (i = 0; i < loop_ub_tmp; i++) {
    b->data[i] = 0.99;
  }
}

void i_repmat(const emlrtStack *sp, const emxArray_real_T *a,
              emxArray_real_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T ibtile;
  int32_T jtilecol;
  int32_T k;
  int32_T nrows;
  boolean_T overflow;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  nrows = b->size[0] * b->size[1];
  b->size[0] = a->size[0];
  b->size[1] = 4;
  emxEnsureCapacity_real_T(sp, b, nrows, &os_emlrtRTEI);
  nrows = a->size[0];
  overflow = ((1 <= a->size[0]) && (a->size[0] > 2147483646));
  for (jtilecol = 0; jtilecol < 4; jtilecol++) {
    ibtile = jtilecol * nrows;
    st.site = &ebb_emlrtRSI;
    if (overflow) {
      b_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (k = 0; k < nrows; k++) {
      b->data[ibtile + k] = a->data[k];
    }
  }
}

void j_repmat(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *b)
{
  static const real_T b_dv[4] = {0.010000000000000009, 0.0010000000000000009,
                                 0.99, 0.5};
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  int32_T ibmat;
  int32_T itilerow;
  int32_T jcol;
  boolean_T overflow;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &xw_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((varargin_1 != varargin_1) || muDoubleScalarIsInf(varargin_1)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &vb_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  i = (int32_T)varargin_1;
  ibmat = b->size[0] * b->size[1];
  b->size[0] = (int32_T)varargin_1;
  b->size[1] = 4;
  emxEnsureCapacity_real_T(sp, b, ibmat, &os_emlrtRTEI);
  overflow = ((1 <= (int32_T)varargin_1) && ((int32_T)varargin_1 > 2147483646));
  for (jcol = 0; jcol < 4; jcol++) {
    ibmat = jcol * (int32_T)varargin_1;
    st.site = &gbb_emlrtRSI;
    if (overflow) {
      b_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (itilerow = 0; itilerow < i; itilerow++) {
      b->data[ibmat + itilerow] = b_dv[jcol];
    }
  }
}

void k_repmat(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *b)
{
  static const real_T b_dv[4] = {1.0000000000287557E-6, 9.9999999947364415E-8,
                                 0.99, 0.5};
  emlrtStack b_st;
  emlrtStack st;
  int32_T i;
  int32_T ibmat;
  int32_T itilerow;
  int32_T jcol;
  boolean_T overflow;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &xw_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((varargin_1 != varargin_1) || muDoubleScalarIsInf(varargin_1)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &vb_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  i = (int32_T)varargin_1;
  ibmat = b->size[0] * b->size[1];
  b->size[0] = (int32_T)varargin_1;
  b->size[1] = 4;
  emxEnsureCapacity_real_T(sp, b, ibmat, &os_emlrtRTEI);
  overflow = ((1 <= (int32_T)varargin_1) && ((int32_T)varargin_1 > 2147483646));
  for (jcol = 0; jcol < 4; jcol++) {
    ibmat = jcol * (int32_T)varargin_1;
    st.site = &gbb_emlrtRSI;
    if (overflow) {
      b_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (itilerow = 0; itilerow < i; itilerow++) {
      b->data[ibmat + itilerow] = b_dv[jcol];
    }
  }
}

void repmat(const emlrtStack *sp, ptrdiff_t a, int32_T varargin_1,
            emxArray_ptrdiff_t *b)
{
  int32_T i;
  i = b->size[0];
  b->size[0] = varargin_1;
  emxEnsureCapacity_ptrdiff_t(sp, b, i, &pr_emlrtRTEI);
  for (i = 0; i < varargin_1; i++) {
    b->data[i] = a;
  }
}

/* End of code generation (repmat.c) */
