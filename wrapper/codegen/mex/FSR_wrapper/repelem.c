/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repelem.c
 *
 * Code generation for function 'repelem'
 *
 */

/* Include files */
#include "repelem.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo yhb_emlrtRSI = {
    24,        /* lineNo */
    "repelem", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repelem.m" /* pathName
                                                                          */
};

static emlrtRSInfo aib_emlrtRSI = {
    94,              /* lineNo */
    "repelemMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repelem.m" /* pathName
                                                                          */
};

static emlrtRSInfo bib_emlrtRSI = {
    100,             /* lineNo */
    "repelemMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repelem.m" /* pathName
                                                                          */
};

static emlrtRSInfo cib_emlrtRSI = {
    103,             /* lineNo */
    "repelemMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repelem.m" /* pathName
                                                                          */
};

static emlrtRTEInfo sc_emlrtRTEI = {
    19,        /* lineNo */
    23,        /* colNo */
    "repelem", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repelem.m" /* pName
                                                                          */
};

static emlrtDCInfo pd_emlrtDCI = {
    89,              /* lineNo */
    58,              /* colNo */
    "repelemMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repelem.m", /* pName
                                                                           */
    4 /* checkKind */
};

static emlrtRTEInfo fbb_emlrtRTEI = {
    89,        /* lineNo */
    20,        /* colNo */
    "repelem", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repelem.m" /* pName
                                                                          */
};

/* Function Definitions */
void repelem(const emlrtStack *sp, const real_T x_data[],
             const int32_T x_size[2], real_T varargin_1, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T rowIdx;
  int32_T rowreps;
  int32_T sz_idx_0;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (!(muDoubleScalarFloor(varargin_1) == varargin_1)) {
    emlrtErrorWithMessageIdR2018a(sp, &sc_emlrtRTEI,
                                  "MATLAB:repelem:invalidReplications",
                                  "MATLAB:repelem:invalidReplications", 0);
  }
  st.site = &yhb_emlrtRSI;
  sz_idx_0 = x_size[0] * (int32_T)varargin_1;
  if (sz_idx_0 < 0) {
    emlrtNonNegativeCheckR2012b(sz_idx_0, &pd_emlrtDCI, &st);
  }
  rowIdx = y->size[0] * y->size[1];
  y->size[0] = sz_idx_0;
  y->size[1] = x_size[1];
  emxEnsureCapacity_real_T(&st, y, rowIdx, &fbb_emlrtRTEI);
  if ((sz_idx_0 != 0) && (x_size[1] != 0)) {
    sz_idx_0 = x_size[0];
    b_st.site = &aib_emlrtRSI;
    for (j = 0; j < 1; j++) {
      rowIdx = -1;
      b_st.site = &bib_emlrtRSI;
      for (i = 0; i < sz_idx_0; i++) {
        rowreps = (int32_T)varargin_1;
        b_st.site = &cib_emlrtRSI;
        if ((1 <= (int32_T)varargin_1) && ((int32_T)varargin_1 > 2147483646)) {
          c_st.site = &ab_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }
        for (k = 0; k < rowreps; k++) {
          y->data[(rowIdx + k) + 1] = x_data[0];
        }
        rowIdx += (int32_T)varargin_1;
      }
    }
  }
}

/* End of code generation (repelem.c) */
