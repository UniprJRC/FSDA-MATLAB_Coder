/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * string1.c
 *
 * Code generation for function 'string1'
 *
 */

/* Include files */
#include "string1.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo ucb_emlrtRSI = {
    21,              /* lineNo */
    "string/string", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\string.m" /* pathName */
};

static emlrtRSInfo vcb_emlrtRSI = {
    768,                      /* lineNo */
    "string/convertToString", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\string.m" /* pathName */
};

static emlrtRSInfo wcb_emlrtRSI = {
    802,                   /* lineNo */
    "string/getCharValue", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\string.m" /* pathName */
};

static emlrtRTEInfo qc_emlrtRTEI = {
    1228,            /* lineNo */
    31,              /* colNo */
    "normalizeChar", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\string.m" /* pName */
};

/* Function Definitions */
void string_string(const emlrtStack *sp, const char_T val_data[],
                   const int32_T val_size[2], char_T obj_Value_data[],
                   int32_T obj_Value_size[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  int8_T varargin_1[2];
  boolean_T b_p;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ucb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &vcb_emlrtRSI;
  c_st.site = &wcb_emlrtRSI;
  varargin_1[0] = (int8_T)val_size[0];
  varargin_1[1] = 8;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (varargin_1[k] != 0) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  b_p = (int32_T)p;
  if (b_p) {
    obj_Value_size[0] = 1;
    obj_Value_size[1] = 0;
  } else {
    if (val_size[0] != 1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &qc_emlrtRTEI,
                                    "Coder:toolbox:StringMustBeRowVector",
                                    "Coder:toolbox:StringMustBeRowVector", 0);
    }
    obj_Value_size[0] = 1;
    obj_Value_size[1] = 8;
    for (k = 0; k < 8; k++) {
      obj_Value_data[k] = val_data[k];
    }
  }
}

/* End of code generation (string1.c) */
