/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * nullAssignment.c
 *
 * Code generation for function 'nullAssignment'
 *
 */

/* Include files */
#include "nullAssignment.h"
#include "LXS_wrapper1_data.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo yc_emlrtRSI = {
    29,               /* lineNo */
    "nullAssignment", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo ad_emlrtRSI = {
    33,               /* lineNo */
    "nullAssignment", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo bd_emlrtRSI = {
    356,              /* lineNo */
    "delete_columns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo cd_emlrtRSI = {
    357,              /* lineNo */
    "delete_columns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo dd_emlrtRSI = {
    365,              /* lineNo */
    "delete_columns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo ed_emlrtRSI = {
    367,              /* lineNo */
    "delete_columns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo fd_emlrtRSI = {
    370,              /* lineNo */
    "delete_columns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo gd_emlrtRSI = {
    372,              /* lineNo */
    "delete_columns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo hd_emlrtRSI = {
    259,             /* lineNo */
    "make_bitarray", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo id_emlrtRSI = {
    132,        /* lineNo */
    "num_true", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRTEInfo mc_emlrtRTEI = {
    379,              /* lineNo */
    1,                /* colNo */
    "delete_columns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = {
    81,                /* lineNo */
    27,                /* colNo */
    "validate_inputs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

static emlrtRTEInfo oy_emlrtRTEI = {
    365,              /* lineNo */
    9,                /* colNo */
    "nullAssignment", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

static emlrtRTEInfo py_emlrtRTEI = {
    33,               /* lineNo */
    13,               /* colNo */
    "nullAssignment", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

static emlrtRTEInfo qy_emlrtRTEI = {
    363,              /* lineNo */
    9,                /* colNo */
    "nullAssignment", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

/* Function Definitions */
void nullAssignment(const emlrtStack *sp, emxArray_real_T *x,
                    const emxArray_int32_T *idx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_boolean_T *b;
  int32_T b_b;
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T ncols;
  int32_T ncolx;
  int32_T nrowx;
  boolean_T exitg1;
  boolean_T overflow;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &yc_emlrtRSI;
  overflow = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= idx->size[1] - 1)) {
    if (idx->data[k] > x->size[1]) {
      overflow = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (!overflow) {
    emlrtErrorWithMessageIdR2018a(&st, &nc_emlrtRTEI,
                                  "MATLAB:subsdeldimmismatch",
                                  "MATLAB:subsdeldimmismatch", 0);
  }
  st.site = &ad_emlrtRSI;
  nrowx = x->size[0];
  ncolx = x->size[1];
  if (idx->size[1] == 1) {
    ncols = x->size[1] - 1;
    b_b = idx->data[0];
    b_st.site = &bd_emlrtRSI;
    if (idx->data[0] > x->size[1] - 1) {
      overflow = false;
    } else {
      overflow = (x->size[1] - 1 > 2147483646);
    }
    if (overflow) {
      c_st.site = &hc_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (j = b_b; j <= ncols; j++) {
      b_st.site = &cd_emlrtRSI;
      if ((1 <= nrowx) && (nrowx > 2147483646)) {
        c_st.site = &hc_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (i = 0; i < nrowx; i++) {
        x->data[i + x->size[0] * (j - 1)] = x->data[i + x->size[0] * j];
      }
    }
  } else {
    emxInit_boolean_T(&st, &b, 2, &qy_emlrtRTEI, true);
    b_st.site = &dd_emlrtRSI;
    i = b->size[0] * b->size[1];
    b->size[0] = 1;
    b->size[1] = x->size[1];
    emxEnsureCapacity_boolean_T(&b_st, b, i, &oy_emlrtRTEI);
    j = x->size[1];
    for (i = 0; i < j; i++) {
      b->data[i] = false;
    }
    b_b = idx->size[1];
    c_st.site = &hd_emlrtRSI;
    if ((1 <= idx->size[1]) && (idx->size[1] > 2147483646)) {
      d_st.site = &hc_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (k = 0; k < b_b; k++) {
      b->data[idx->data[k] - 1] = true;
    }
    b_st.site = &ed_emlrtRSI;
    ncols = 0;
    b_b = b->size[1];
    c_st.site = &id_emlrtRSI;
    if ((1 <= b->size[1]) && (b->size[1] > 2147483646)) {
      d_st.site = &hc_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (k = 0; k < b_b; k++) {
      ncols += b->data[k];
    }
    ncols = x->size[1] - ncols;
    j = 0;
    b_st.site = &fd_emlrtRSI;
    if ((1 <= x->size[1]) && (x->size[1] > 2147483646)) {
      c_st.site = &hc_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (k = 0; k < ncolx; k++) {
      if ((k + 1 > b->size[1]) || (!b->data[k])) {
        b_st.site = &gd_emlrtRSI;
        if ((1 <= nrowx) && (nrowx > 2147483646)) {
          c_st.site = &hc_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }
        for (i = 0; i < nrowx; i++) {
          x->data[i + x->size[0] * j] = x->data[i + x->size[0] * k];
        }
        j++;
      }
    }
    emxFree_boolean_T(&b);
  }
  if (ncols > ncolx) {
    emlrtErrorWithMessageIdR2018a(&st, &mc_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (1 > ncols) {
    j = 0;
  } else {
    j = ncols;
  }
  b_b = x->size[0] - 1;
  ncols = x->size[0];
  for (i = 0; i < j; i++) {
    for (nrowx = 0; nrowx < ncols; nrowx++) {
      x->data[nrowx + (b_b + 1) * i] = x->data[nrowx + x->size[0] * i];
    }
  }
  i = x->size[0] * x->size[1];
  x->size[0] = b_b + 1;
  x->size[1] = j;
  emxEnsureCapacity_real_T(&st, x, i, &py_emlrtRTEI);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (nullAssignment.c) */
