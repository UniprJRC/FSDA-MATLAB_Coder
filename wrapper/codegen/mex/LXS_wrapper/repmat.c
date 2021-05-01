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
#include "LXS_wrapper_data.h"
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo uw_emlrtRSI = {
    28,       /* lineNo */
    "repmat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pathName
                                                                         */
};

static emlrtRSInfo abb_emlrtRSI = {
    64,       /* lineNo */
    "repmat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pathName
                                                                         */
};

static emlrtRSInfo bbb_emlrtRSI = {
    71,       /* lineNo */
    "repmat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pathName
                                                                         */
};

static emlrtRSInfo cbb_emlrtRSI = {
    66,       /* lineNo */
    "repmat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pathName
                                                                         */
};

static emlrtRSInfo dbb_emlrtRSI = {
    69,       /* lineNo */
    "repmat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pathName
                                                                         */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    58,                   /* lineNo */
    23,                   /* colNo */
    "assertValidSizeArg", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\assertValidSizeArg.m" /* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = {
    64,                   /* lineNo */
    15,                   /* colNo */
    "assertValidSizeArg", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\assertValidSizeArg.m" /* pName */
};

static emlrtRTEInfo sp_emlrtRTEI = {
    53,       /* lineNo */
    9,        /* colNo */
    "repmat", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pName
                                                                         */
};

static emlrtRTEInfo rq_emlrtRTEI = {
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
  st.site = &uw_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((varargin_2 != varargin_2) || muDoubleScalarIsInf(varargin_2)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &nb_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  if (varargin_2 <= 0.0) {
    b_varargin_2 = 0.0;
  } else {
    b_varargin_2 = varargin_2;
  }
  if (!(b_varargin_2 <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&st, &bc_emlrtRTEI, "Coder:MATLAB:pmaxsize",
                                  "Coder:MATLAB:pmaxsize", 0);
  }
  nrows = b->size[0] * b->size[1];
  b->size[0] = a->size[0];
  i = (int32_T)varargin_2;
  b->size[1] = (int32_T)varargin_2;
  emxEnsureCapacity_real_T(sp, b, nrows, &rq_emlrtRTEI);
  nrows = a->size[0];
  st.site = &abb_emlrtRSI;
  for (jtilecol = 0; jtilecol < i; jtilecol++) {
    ibtile = jtilecol * nrows;
    st.site = &bbb_emlrtRSI;
    if ((1 <= nrows) && (nrows > 2147483646)) {
      b_st.site = &ic_emlrtRSI;
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
  st.site = &uw_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((varargin_1 != varargin_1) || muDoubleScalarIsInf(varargin_1)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &nb_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  nrows = a_size[0] * (int32_T)varargin_1;
  ncols = b->size[0] * b->size[1];
  b->size[0] = nrows;
  b->size[1] = a_size[1];
  emxEnsureCapacity_real_T(sp, b, ncols, &rq_emlrtRTEI);
  nrows = a_size[0];
  ncols = a_size[1];
  ntilerows = (int32_T)varargin_1;
  st.site = &cbb_emlrtRSI;
  for (jcol = 0; jcol < ncols; jcol++) {
    iacol = jcol * nrows;
    ibmat = jcol * (nrows * (int32_T)varargin_1);
    st.site = &dbb_emlrtRSI;
    if ((1 <= (int32_T)varargin_1) && ((int32_T)varargin_1 > 2147483646)) {
      b_st.site = &ic_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (itilerow = 0; itilerow < ntilerows; itilerow++) {
      ibcol = ibmat + itilerow * nrows;
      st.site = &bbb_emlrtRSI;
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
  st.site = &uw_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((varargin_1 != varargin_1) || muDoubleScalarIsInf(varargin_1)) {
    emlrtErrorWithMessageIdR2018a(
        &st, &nb_emlrtRTEI, "Coder:MATLAB:NonIntegerInput",
        "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }
  i = (int32_T)varargin_1;
  itilerow = b->size[0] * b->size[1];
  b->size[0] = (int32_T)varargin_1;
  b->size[1] = 1;
  emxEnsureCapacity_real_T(sp, b, itilerow, &rq_emlrtRTEI);
  st.site = &cbb_emlrtRSI;
  for (itilerow = 0; itilerow < i; itilerow++) {
    b->data[itilerow] = 0.99;
  }
  st.site = &dbb_emlrtRSI;
  if ((1 <= (int32_T)varargin_1) && ((int32_T)varargin_1 > 2147483646)) {
    b_st.site = &ic_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
}

void repmat(const emlrtStack *sp, ptrdiff_t a, int32_T varargin_1,
            emxArray_ptrdiff_t *b)
{
  int32_T i;
  i = b->size[0];
  b->size[0] = varargin_1;
  emxEnsureCapacity_ptrdiff_t(sp, b, i, &sp_emlrtRTEI);
  for (i = 0; i < varargin_1; i++) {
    b->data[i] = a;
  }
}

/* End of code generation (repmat.c) */
