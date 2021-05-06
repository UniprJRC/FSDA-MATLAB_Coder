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
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_mexutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static const char_T cv[21] = {'F', 'S', 'D', 'A', ':', 'L', 'T',
                              'S', 't', 's', ':', 'W', 'r', 'o',
                              'n', 'g', 'I', 'n', 'p', 'u', 't'};

/* Function Declarations */
static void k_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    const mxArray *d, emlrtMCInfo *location);

/* Function Definitions */
static void k_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 3, &pArrays[0],
                        (const char_T *)"error", true, location);
}

void b_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 21};
  static const int32_T iv1[2] = {1, 54};
  static const char_T varargin_2[54] = {
      'T', 'r', 'e', 'n', 'd', ' ', 'm', 'u', 's', 't', ' ', 'a', 's', 's',
      'u', 'm', 'e', ' ', 't', 'h', 'e', ' ', 'f', 'o', 'l', 'l', 'o', 'w',
      'i', 'n', 'g', ' ', 'v', 'a', 'l', 'u', 'e', 's', ':', ' ', '0', ' ',
      ' ', '1', ' ', 'o', 'r', ' ', '2', ' ', 'o', 'r', ' ', '3'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 21, m, &cv[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 54, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &teb_emlrtRSI;
  l_error(&st, y, b_y, &d_emlrtMCI);
}

void c_error(const emlrtStack *sp, real_T varargin_3)
{
  static const int32_T iv[2] = {1, 21};
  static const int32_T iv1[2] = {1, 56};
  static const char_T varargin_2[56] = {
      'S', 'e', 'a', 's', 'o', 'n', 'a', 'l', ' ', 'c', 'o', 'm', 'p', 'o',
      'n', 'e', 'n', 't', ' ', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ', 'a',
      'n', ' ', 'i', 'n', 't', 'e', 'g', 'e', 'r', ' ', 'b', 'e', 't', 'w',
      'e', 'e', 'n', ' ', '1', ' ', 'a', 'n', 'd', ' ', '%', '.', '0', 'f'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 21, m, &cv[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 56, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateDoubleScalar(varargin_3);
  emlrtAssign(&c_y, m);
  st.site = &teb_emlrtRSI;
  k_error(&st, y, b_y, c_y, &d_emlrtMCI);
}

void d_error(const emlrtStack *sp, const char_T varargin_2_data[],
             const int32_T varargin_2_size[2])
{
  static const int32_T iv[2] = {1, 21};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T iv1[2];
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 21, m, &cv[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  iv1[0] = 1;
  iv1[1] = varargin_2_size[1];
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, varargin_2_size[1], m,
                           &varargin_2_data[0]);
  emlrtAssign(&b_y, m);
  st.site = &teb_emlrtRSI;
  l_error(&st, y, b_y, &d_emlrtMCI);
}

void e_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 21};
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
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 21, m, &cv[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 70, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &teb_emlrtRSI;
  l_error(&st, y, b_y, &d_emlrtMCI);
}

void error(const emlrtStack *sp, real_T varargin_3)
{
  static const int32_T iv[2] = {1, 21};
  static const int32_T iv1[2] = {1, 71};
  static const char_T varargin_2[71] = {
      's', '=', ' ', '%', '.', '0', 'f', ' ', 'i', 's', ' ', 't', 'h', 'e', ' ',
      'p', 'e', 'r', 'i', 'o', 'd', 'i', 'c', 'i', 't', 'y', ' ', 'o', 'f', ' ',
      't', 'h', 'e', ' ', 't', 'i', 'm', 'e', ' ', 's', 'e', 'r', 'i', 'e', 's',
      ' ', '(', 'c', 'a', 'n', 'n', 'o', 't', ' ', 'b', 'e', ' ', 'n', 'e', 'g',
      'a', 't', 'i', 'v', 'e', ' ', 'o', 'r', ' ', '0', ')'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 21, m, &cv[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 71, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateDoubleScalar(varargin_3);
  emlrtAssign(&c_y, m);
  st.site = &teb_emlrtRSI;
  k_error(&st, y, b_y, c_y, &d_emlrtMCI);
}

void f_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 21};
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
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 21, m, &cv[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 65, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &teb_emlrtRSI;
  l_error(&st, y, b_y, &d_emlrtMCI);
}

void g_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 26};
  static const int32_T iv1[2] = {1, 8};
  static const char_T varargin_1[26] = {
      'F', 'S', 'D', 'A', ':', 'c', 'o', 'm', 'b', 's', 'F', 'S', ':',
      'W', 'r', 'o', 'n', 'g', 'I', 'n', 'p', 'u', 't', 'N', 'u', 'm'};
  static const char_T varargin_2[8] = {'m', ' ', '>', ' ', 'n', ' ', '!', '!'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 26, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 8, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &teb_emlrtRSI;
  l_error(&st, y, b_y, &d_emlrtMCI);
}

void h_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 21};
  static const int32_T iv1[2] = {1, 92};
  static const char_T varargin_2[92] = {
      'N', 'o', ' ', 's', 'u', 'b', 's', 'e', 't', ' ', 'h', 'a', 'd', ' ',
      'f', 'u', 'l', 'l', ' ', 'r', 'a', 'n', 'k', '.', ' ', 'P', 'l', 'e',
      'a', 's', 'e', ' ', 'i', 'n', 'c', 'r', 'e', 'a', 's', 'e', ' ', 't',
      'h', 'e', ' ', 'n', 'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f', ' ', 's',
      'u', 'b', 's', 'e', 't', 's', ' ', 'o', 'r', ' ', 'c', 'h', 'e', 'c',
      'k', ' ', 'y', 'o', 'u', 'r', ' ', 'd', 'e', 's', 'i', 'g', 'n', ' ',
      'm', 'a', 't', 'r', 'i', 'x', ' ', 'X'};
  static const char_T varargin_1[21] = {'F', 'S', 'D', 'A', ':', 'L', 'T',
                                        'S', 't', 's', ':', 'N', 'o', 'F',
                                        'u', 'l', 'l', 'R', 'a', 'n', 'k'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 21, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 92, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &teb_emlrtRSI;
  l_error(&st, y, b_y, &d_emlrtMCI);
}

void i_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 24};
  static const int32_T iv1[2] = {1, 29};
  static const char_T varargin_2[29] = {
      'w', 'r', 'o', 'n', 'g', ' ', 's', 'm', 'a', 'l', 'l', ' ', 's', 'a', 'm',
      'p', 'l', 'e', ' ', 'c', 'o', 'r', ' ', 'f', 'a', 'c', 't', 'o', 'r'};
  static const char_T varargin_1[24] = {'F', 'S', 'D', 'A', ':', 'l', 't', 's',
                                        'T', 'S', ':', 'W', 'r', 'o', 'n', 'g',
                                        'I', 'n', 'p', 'u', 't', 'O', 'p', 't'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 24, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 29, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &teb_emlrtRSI;
  l_error(&st, y, b_y, &d_emlrtMCI);
}

void j_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 23};
  static const int32_T iv1[2] = {1, 87};
  static const char_T varargin_2[87] = {
      'y', ' ', 's', 'h', 'o', 'u', 'l', 'd', ' ', 'n', 'o', 't', ' ', 'c', 'h',
      'a', 'n', 'g', 'e', ' ', 'i', 'n', ' ', 't', 'h', 'i', 's', ' ', 'c', 'o',
      'd', 'e', '.', ' ', 'P', 'l', 'e', 'a', 's', 'e', ' ', 'c', 'h', 'e', 'c',
      'k', ' ', 'i', 'f', ' ', 't', 'h', 'e', ' ', 'g', 'l', 'o', 'b', 'a', 'l',
      ' ', 'v', 'a', 'r', 'i', 'a', 'b', 'l', 'e', ' ', 'h', 'a', 's', ' ', 'b',
      'e', 'e', 'n', ' ', 'm', 'i', 's', 'u', 's', 'e', 'd', '.'};
  static const char_T varargin_1[23] = {'F', 'S', 'D', 'A', ':', 'L', 'T', 'S',
                                        't', 's', ':', 'y', 'D', 'i', 's', 'c',
                                        'r', 'e', 'p', 'a', 'n', 'c', 'y'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 23, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 87, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &teb_emlrtRSI;
  l_error(&st, y, b_y, &d_emlrtMCI);
}

/* End of code generation (error.c) */
