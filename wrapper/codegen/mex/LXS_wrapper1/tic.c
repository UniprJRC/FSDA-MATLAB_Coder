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
#include "LXS_wrapper1_data.h"
#include "rt_nonfinite.h"
#include "emlrt.h"

/* Variable Definitions */
static emlrtRSInfo ieb_emlrtRSI = {
    31,    /* lineNo */
    "tic", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\timefun\\tic.m" /* pathName
                                                                        */
};

/* Function Definitions */
emlrtTimespec tic(const emlrtStack *sp)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtTimespec tstart;
  int32_T status;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ieb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &jeb_emlrtRSI;
  c_st.site = &keb_emlrtRSI;
  status = emlrtClockGettimeMonotonic(&tstart);
  d_st.site = &leb_emlrtRSI;
  if (status != 0) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &ic_emlrtRTEI, "Coder:toolbox:CoderTimeCallFailed",
        "Coder:toolbox:CoderTimeCallFailed", 5, 4, 26, &cv14[0], 12, status);
  }
  return tstart;
}

/* End of code generation (tic.c) */
