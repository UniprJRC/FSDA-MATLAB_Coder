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
#include "FSRfan_wrapper_data.h"
#include "FSRfan_wrapper_emxutil.h"
#include "FSRfan_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo hc_emlrtRSI = {
    29,               /* lineNo */
    "nullAssignment", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo ic_emlrtRSI = {
    33,               /* lineNo */
    "nullAssignment", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo jc_emlrtRSI = {
    356,              /* lineNo */
    "delete_columns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo kc_emlrtRSI = {
    357,              /* lineNo */
    "delete_columns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo lc_emlrtRSI = {
    365,              /* lineNo */
    "delete_columns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo mc_emlrtRSI = {
    367,              /* lineNo */
    "delete_columns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo nc_emlrtRSI = {
    370,              /* lineNo */
    "delete_columns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo oc_emlrtRSI = {
    372,              /* lineNo */
    "delete_columns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo pc_emlrtRSI = {
    259,             /* lineNo */
    "make_bitarray", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo qc_emlrtRSI = {
    132,        /* lineNo */
    "num_true", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo he_emlrtRSI = {
    13,               /* lineNo */
    "nullAssignment", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo ie_emlrtRSI = {
    17,               /* lineNo */
    "nullAssignment", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRSInfo je_emlrtRSI = {
    169,                      /* lineNo */
    "onearg_null_assignment", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pathName */
};

static emlrtRTEInfo rb_emlrtRTEI = {
    379,              /* lineNo */
    1,                /* colNo */
    "delete_columns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    81,                /* lineNo */
    27,                /* colNo */
    "validate_inputs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = {
    184,                      /* lineNo */
    9,                        /* colNo */
    "onearg_null_assignment", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = {
    85,                /* lineNo */
    27,                /* colNo */
    "validate_inputs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

static emlrtRTEInfo tl_emlrtRTEI = {
    365,              /* lineNo */
    9,                /* colNo */
    "nullAssignment", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

static emlrtRTEInfo ul_emlrtRTEI = {
    33,               /* lineNo */
    13,               /* colNo */
    "nullAssignment", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

static emlrtRTEInfo vl_emlrtRTEI = {
    363,              /* lineNo */
    9,                /* colNo */
    "nullAssignment", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

static emlrtRTEInfo wl_emlrtRTEI = {
    17,               /* lineNo */
    9,                /* colNo */
    "nullAssignment", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\nullAssignment.m" /* pName */
};

/* Function Declarations */
static int32_T num_true(const emlrtStack *sp, const emxArray_boolean_T *b);

/* Function Definitions */
static int32_T num_true(const emlrtStack *sp, const emxArray_boolean_T *b)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_b;
  int32_T k;
  int32_T n;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  n = 0;
  b_b = b->size[1];
  st.site = &qc_emlrtRSI;
  if ((1 <= b->size[1]) && (b->size[1] > 2147483646)) {
    b_st.site = &pb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (k = 0; k < b_b; k++) {
    n += b->data[k];
  }
  return n;
}

void b_nullAssignment(const emlrtStack *sp, emxArray_real_T *x,
                      const emxArray_boolean_T *idx)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T k;
  int32_T k0;
  int32_T nxin;
  int32_T nxout;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &he_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  k = idx->size[1];
  while ((k >= 1) && (!idx->data[k - 1])) {
    k--;
  }
  if (k > x->size[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &ub_emlrtRTEI,
                                  "MATLAB:subsdeldimmismatch",
                                  "MATLAB:subsdeldimmismatch", 0);
  }
  st.site = &ie_emlrtRSI;
  nxin = x->size[1];
  b_st.site = &je_emlrtRSI;
  nxout = x->size[1] - num_true(&b_st, idx);
  k0 = -1;
  for (k = 0; k < nxin; k++) {
    if ((k + 1 > idx->size[1]) || (!idx->data[k])) {
      k0++;
      x->data[k0] = x->data[k];
    }
  }
  if (nxout > nxin) {
    emlrtErrorWithMessageIdR2018a(&st, &tb_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  nxin = x->size[0] * x->size[1];
  if (1 > nxout) {
    x->size[1] = 0;
  } else {
    x->size[1] = nxout;
  }
  emxEnsureCapacity_real_T(&st, x, nxin, &wl_emlrtRTEI);
}

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
  st.site = &hc_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&st, &sb_emlrtRTEI,
                                  "MATLAB:subsdeldimmismatch",
                                  "MATLAB:subsdeldimmismatch", 0);
  }
  st.site = &ic_emlrtRSI;
  nrowx = x->size[0];
  ncolx = x->size[1];
  if (idx->size[1] == 1) {
    ncols = x->size[1] - 1;
    b_b = idx->data[0];
    b_st.site = &jc_emlrtRSI;
    if (idx->data[0] > x->size[1] - 1) {
      overflow = false;
    } else {
      overflow = (x->size[1] - 1 > 2147483646);
    }
    if (overflow) {
      c_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (j = b_b; j <= ncols; j++) {
      b_st.site = &kc_emlrtRSI;
      if ((1 <= nrowx) && (nrowx > 2147483646)) {
        c_st.site = &pb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (i = 0; i < nrowx; i++) {
        x->data[i + x->size[0] * (j - 1)] = x->data[i + x->size[0] * j];
      }
    }
  } else {
    emxInit_boolean_T(&st, &b, 2, &vl_emlrtRTEI, true);
    b_st.site = &lc_emlrtRSI;
    j = b->size[0] * b->size[1];
    b->size[0] = 1;
    b->size[1] = x->size[1];
    emxEnsureCapacity_boolean_T(&b_st, b, j, &tl_emlrtRTEI);
    k = x->size[1];
    for (j = 0; j < k; j++) {
      b->data[j] = false;
    }
    b_b = idx->size[1];
    c_st.site = &pc_emlrtRSI;
    if ((1 <= idx->size[1]) && (idx->size[1] > 2147483646)) {
      d_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (k = 0; k < b_b; k++) {
      b->data[idx->data[k] - 1] = true;
    }
    b_st.site = &mc_emlrtRSI;
    ncols = x->size[1] - num_true(&b_st, b);
    j = 0;
    b_st.site = &nc_emlrtRSI;
    if ((1 <= x->size[1]) && (x->size[1] > 2147483646)) {
      c_st.site = &pb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (k = 0; k < ncolx; k++) {
      if ((k + 1 > b->size[1]) || (!b->data[k])) {
        b_st.site = &oc_emlrtRSI;
        if ((1 <= nrowx) && (nrowx > 2147483646)) {
          c_st.site = &pb_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&st, &rb_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (1 > ncols) {
    k = 0;
  } else {
    k = ncols;
  }
  b_b = x->size[0] - 1;
  ncols = x->size[0];
  for (j = 0; j < k; j++) {
    for (nrowx = 0; nrowx < ncols; nrowx++) {
      x->data[nrowx + (b_b + 1) * j] = x->data[nrowx + x->size[0] * j];
    }
  }
  j = x->size[0] * x->size[1];
  x->size[0] = b_b + 1;
  x->size[1] = k;
  emxEnsureCapacity_real_T(&st, x, j, &ul_emlrtRTEI);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (nullAssignment.c) */
