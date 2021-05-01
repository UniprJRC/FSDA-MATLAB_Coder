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
#include "FSRfan_wrapper_data.h"
#include "FSRfan_wrapper_mexutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static const char_T cv6[15] = {'F', 'S', 'D', 'A', ':', 'L', 'X', 'S',
                               ':', 'W', 'r', 'o', 'n', 'g', 'h'};

static const char_T cv7[19] = {'F', 'S', 'D', 'A', ':', 'L', 'X', 'S', ':', 'W',
                               'r', 'o', 'n', 'g', 'N', 's', 'a', 'm', 'p'};

/* Function Declarations */
static void i_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    const mxArray *d, emlrtMCInfo *location);

/* Function Definitions */
static void i_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 3, &pArrays[0],
                        (const char_T *)"error", true, location);
}

void b_error(const emlrtStack *sp, const char_T varargin_2_data[],
             const int32_T varargin_2_size[2])
{
  static const int32_T iv[2] = {1, 15};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T iv1[2];
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 15, m, &cv6[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  iv1[0] = 1;
  iv1[1] = varargin_2_size[1];
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, varargin_2_size[1], m,
                           &varargin_2_data[0]);
  emlrtAssign(&b_y, m);
  st.site = &ku_emlrtRSI;
  h_error(&st, y, b_y, &e_emlrtMCI);
}

void c_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 15};
  static const int32_T iv1[2] = {1, 70};
  static const char_T varargin_2[70] = {
      'h', ' ', 'i', 's', ' ', 'g', 'r', 'e', 'a', 't', 'e', 'r', ' ', 'o',
      'r', ' ', 'e', 'q', 'u', 'a', 'l', ' ', 't', 'o', ' ', 't', 'h', 'e',
      ' ', 'n', 'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f', ' ', 'n', 'o', 'n',
      '-', 'm', 'i', 's', 's', 'i', 'n', 'g', 's', ' ', 'a', 'n', 'd', ' ',
      'n', 'o', 'n', '-', 'i', 'n', 'f', 'i', 'n', 'i', 't', 'e', 's', '.'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 15, m, &cv6[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 70, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &ku_emlrtRSI;
  h_error(&st, y, b_y, &e_emlrtMCI);
}

void d_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 19};
  static const int32_T iv1[2] = {1, 65};
  static const char_T varargin_2[65] = {
      'N', 'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f', ' ', 's', 'u', 'b',
      's', 'e', 't', 's', ' ', 't', 'o', ' ', 'e', 'x', 't', 'r', 'a',
      'c', 't', ' ', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ', '0', ' ',
      '(', 'a', 'l', 'l', ')', ' ', 'o', 'r', ' ', 'a', ' ', 'p', 'o',
      's', 'i', 't', 'i', 'v', 'e', ' ', 'n', 'u', 'm', 'b', 'e', 'r'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 19, m, &cv7[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 65, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &ku_emlrtRSI;
  h_error(&st, y, b_y, &e_emlrtMCI);
}

void e_error(const emlrtStack *sp, real_T varargin_3)
{
  static const int32_T iv[2] = {1, 19};
  static const int32_T iv1[2] = {1, 37};
  static const char_T varargin_2[37] = {
      'M', 'a', 't', 'r', 'i', 'x', ' ', 'n', 's', 'a',  'm', 'p', ' ',
      'm', 'u', 's', 't', ' ', 'h', 'a', 'v', 'e', ' ',  '%', '.', '0',
      'f', ' ', 'c', 'o', 'l', 'u', 'm', 'n', 's', '\\', 'n'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 19, m, &cv7[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 37, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateDoubleScalar(varargin_3);
  emlrtAssign(&c_y, m);
  st.site = &ku_emlrtRSI;
  i_error(&st, y, b_y, c_y, &e_emlrtMCI);
}

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
  st.site = &ku_emlrtRSI;
  h_error(&st, y, b_y, &e_emlrtMCI);
}

void f_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 19};
  static const int32_T iv1[2] = {1, 92};
  static const char_T varargin_2[92] = {
      'N', 'o', ' ', 's', 'u', 'b', 's', 'e', 't', ' ', 'h', 'a', 'd', ' ',
      'f', 'u', 'l', 'l', ' ', 'r', 'a', 'n', 'k', '.', ' ', 'P', 'l', 'e',
      'a', 's', 'e', ' ', 'i', 'n', 'c', 'r', 'e', 'a', 's', 'e', ' ', 't',
      'h', 'e', ' ', 'n', 'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f', ' ', 's',
      'u', 'b', 's', 'e', 't', 's', ' ', 'o', 'r', ' ', 'c', 'h', 'e', 'c',
      'k', ' ', 'y', 'o', 'u', 'r', ' ', 'd', 'e', 's', 'i', 'g', 'n', ' ',
      'm', 'a', 't', 'r', 'i', 'x', ' ', 'X'};
  static const char_T varargin_1[19] = {'F', 'S', 'D', 'A', ':', 'L', 'X',
                                        'S', ':', 'N', 'o', 'F', 'u', 'l',
                                        'l', 'R', 'a', 'n', 'k'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 19, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 92, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &ku_emlrtRSI;
  h_error(&st, y, b_y, &e_emlrtMCI);
}

void g_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 20};
  static const int32_T iv1[2] = {1, 106};
  static const char_T varargin_2[106] = {
      'S', 'c', 'o', 'r', 'e', ' ', 't', 'e', 's', 't', ' ', 'u', 's', 'i',
      'n', 'g', ' ', 'B', 'o', 'x', 'C', 'o', 'x', ' ', 'c', 'a', 'n', 'n',
      'o', 't', ' ', 'b', 'e', ' ', 'c', 'o', 'm', 'p', 'u', 't', 'e', 'd',
      ' ', 'b', 'e', 'c', 'a', 'u', 's', 'e', ' ', 'm', 'i', 'n', '(', 'y',
      ')', ' ', 'i', 's', ' ', 's', 'm', 'a', 'l', 'l', 'e', 'r', ' ', 't',
      'h', 'a', 'n', ' ', '0', '.', ' ', 'P', 'l', 'e', 'a', 's', 'e', ' ',
      'u', 's', 'e', ' ', 'Y', 'e', 'o', '-', 'J', 'o', 'h', 'n', 's', 'o',
      'n', ' ', 'f', 'a', 'm', 'i', 'l', 'y'};
  static const char_T varargin_1[20] = {'F', 'S', 'D', 'A', ':', 'S', 'c',
                                        'o', 'r', 'e', ':', 'y', 'n', 'e',
                                        'g', 'a', 't', 'i', 'v', 'e'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 20, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 106, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &ku_emlrtRSI;
  h_error(&st, y, b_y, &e_emlrtMCI);
}

/* End of code generation (error.c) */
