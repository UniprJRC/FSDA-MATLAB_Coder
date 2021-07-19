/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "error.h"
#include "FSRmdr_wrapper_data.h"
#include "FSRmdr_wrapper_mexutil.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 25};
  static const int32_T iv1[2] = {1, 20};
  static const char_T varargin_1[25] = {
      'F', 'S', 'D', 'A', ':', 'c', 'h', 'k', 'i', 'n', 'p', 'u', 't',
      'R', ':', 'N', 'o', 'F', 'u', 'l', 'l', 'R', 'a', 'n', 'k'};
  static const char_T varargin_2[20] = {'M', 'a', 't', 'r', 'i', 'x', ' ',
                                        'X', ' ', 'i', 's', ' ', 's', 'i',
                                        'n', 'g', 'u', 'l', 'a', 'r'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 25, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 20, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &tk_emlrtRSI;
  b_error(&st, y, b_y, &k_emlrtMCI);
}

/* End of code generation (error.c) */
