/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tic.c
 *
 * Code generation for function 'tic'
 *
 */

/* Include files */
#include "tic.h"
#include "rt_nonfinite.h"
#include "emlrt.h"

/* Variable Definitions */
static emlrtRSInfo meb_emlrtRSI = {
    31,    /* lineNo */
    "tic", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\timefun\\tic.m" /* pathName
                                                                        */
};

static emlrtRSInfo neb_emlrtRSI = {
    7,         /* lineNo */
    "getTime", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\getTime.m" /* pathName */
};

static emlrtRSInfo oeb_emlrtRSI = {
    21,                     /* lineNo */
    "CoderTimeAPI/getTime", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\CoderTimeAPI.m" /* pathName */
};

static emlrtRSInfo peb_emlrtRSI = {
    148,                                  /* lineNo */
    "CoderTimeAPI/callEMLRTClockGettime", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\CoderTimeAPI.m" /* pathName */
};

static emlrtRTEInfo pc_emlrtRTEI = {
    159,                    /* lineNo */
    13,                     /* colNo */
    "coderTimeCheckStatus", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\CoderTimeAPI.m" /* pName */
};

/* Function Definitions */
emlrtTimespec tic(const emlrtStack *sp)
{
  static const char_T fcn[26] = {'e', 'm', 'l', 'r', 't', 'C', 'l', 'o', 'c',
                                 'k', 'G', 'e', 't', 't', 'i', 'm', 'e', 'M',
                                 'o', 'n', 'o', 't', 'o', 'n', 'i', 'c'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtTimespec tstart;
  int32_T status;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &meb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &neb_emlrtRSI;
  c_st.site = &oeb_emlrtRSI;
  status = emlrtClockGettimeMonotonic(&tstart);
  d_st.site = &peb_emlrtRSI;
  if (status != 0) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &pc_emlrtRTEI, "Coder:toolbox:CoderTimeCallFailed",
        "Coder:toolbox:CoderTimeCallFailed", 5, 4, 26, &fcn[0], 12, status);
  }
  return tstart;
}

/* End of code generation (tic.c) */
