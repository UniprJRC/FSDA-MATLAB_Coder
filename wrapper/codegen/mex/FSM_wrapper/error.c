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
#include "FSM_wrapper_data.h"
#include "FSM_wrapper_mexutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static const char_T cv12[44] = {
    'n', ' ', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ', 's', 'c', 'a', 'l', 'a',
    'r', ' ', 'n', 'o', 'n', ' ', 'e', 'm', 'p', 't', 'y', ' ', 'a', 'n', 'd',
    ' ', 'n', 'o', 'n', ' ', 'm', 'i', 's', 's', 'i', 'n', 'g', '!', '!'};

static const char_T cv13[56] = {
    'I', 'n', 'i', 't', 'i', 'a', 'l', ' ', 's', 't', 'a', 'r', 't', 'i',
    'n', 'g', ' ', 'p', 'o', 'i', 'n', 't', ' ', 'o', 'f', ' ', 't', 'h',
    'e', ' ', 's', 'e', 'a', 'r', 'c', 'h', ' ', 'i', 's', ' ', 'g', 'r',
    'e', 'a', 't', 'e', 'r', ' ', 't', 'h', 'a', 'n', ' ', 'n', '-', '1'};

/* Function Definitions */
void b_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 22};
  static const int32_T iv1[2] = {1, 90};
  static const char_T varargin_2[90] = {
      'S', 'u', 'p',  'p', 'l', 'i', 'e',  'd',  ' ', 'o',  'p', 't',  'i',
      'o', 'n', 's',  ' ', 't', 'o', ' ',  'i',  'n', 'i',  't', 'i',  'a',
      'l', 'i', 'z',  'e', ' ', 't', 'h',  'e',  ' ', 's',  'e', 'a',  'r',
      'c', 'h', ' ',  'd', 'o', 'e', 's',  ' ',  'n', 'o',  't', ' ',  'e',
      'x', 'i', 's',  't', '.', ' ', 'c',  'r',  'i', 't',  ' ', 'm',  'u',
      's', 't', ' ',  'b', 'e', ' ', '\'', 'm',  'd', '\'', ' ', '\'', 'b',
      'i', 'v', '\'', ' ', 'o', 'r', ' ',  '\'', 'u', 'n',  'i', '\''};
  static const char_T varargin_1[22] = {'F', 'S', 'D', 'A', ':', 'F', 'S', 'M',
                                        ':', 'W', 'r', 'o', 'n', 'g', 'I', 'n',
                                        'p', 'u', 't', 'O', 'p', 't'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 22, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 90, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &neb_emlrtRSI;
  j_error(&st, y, b_y, &rb_emlrtMCI);
}

void c_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 24};
  static const int32_T iv1[2] = {1, 44};
  static const char_T varargin_1[24] = {'F', 'S', 'D', 'A', ':', 'F', 'S', 'M',
                                        'b', 'o', 'n', 'f', 'b', 'o', 'u', 'n',
                                        'd', ':', 'W', 'r', 'o', 'n', 'g', 'n'};
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
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 44, m, &cv12[0]);
  emlrtAssign(&b_y, m);
  st.site = &neb_emlrtRSI;
  j_error(&st, y, b_y, &rb_emlrtMCI);
}

void d_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 24};
  static const int32_T iv1[2] = {1, 45};
  static const char_T varargin_2[45] = {
      'p', ' ', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ', 's', 'c',
      'a', 'l', 'a', 'r', ' ', 'n', 'o', 'n', ' ', 'e', 'm', 'p',
      't', 'y', ' ', 'a', 'n', 'd', ' ', 'n', 'o', 'n', ' ', 'm',
      'i', 's', 's', 'i', 'n', 'g', '!', '!', '!'};
  static const char_T varargin_1[24] = {'F', 'S', 'D', 'A', ':', 'F', 'S', 'M',
                                        'b', 'o', 'n', 'f', 'b', 'o', 'u', 'n',
                                        'd', ':', 'W', 'r', 'o', 'n', 'g', 'p'};
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
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 45, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &neb_emlrtRSI;
  j_error(&st, y, b_y, &rb_emlrtMCI);
}

void e_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 25};
  static const int32_T iv1[2] = {1, 56};
  static const char_T varargin_1[25] = {
      'F', 'S', 'D', 'A', ':', 'F', 'S', 'M', 'b', 'o', 'n', 'f', 'b',
      'o', 'u', 'n', 'd', ':', 'W', 'r', 'o', 'n', 'g', 'M', '0'};
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
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 56, m, &cv13[0]);
  emlrtAssign(&b_y, m);
  st.site = &neb_emlrtRSI;
  j_error(&st, y, b_y, &rb_emlrtMCI);
}

void error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 19};
  static const int32_T iv1[2] = {1, 66};
  static const char_T varargin_2[66] = {
      'T', 'h', 'e', ' ', 'c', 'o', 'n', 'f', 'i', 'd', 'e', 'n', 'c', 'e',
      ' ', 't', 'h', 'r', 'e', 's', 'h', 'o', 'l', 'd', ' ', 'm', 'u', 's',
      't', ' ', 'b', 'e', ' ', 'g', 'r', 'e', 'a', 't', 'e', 'r', ' ', 't',
      'h', 'a', 'n', ' ', '0', ' ', 'a', 'n', 'd', ' ', 's', 'm', 'a', 'l',
      'l', 'e', 'r', ' ', 't', 'h', 'a', 'n', ' ', '1'};
  static const char_T varargin_1[19] = {'F', 'S', 'D', 'A', ':', 'u', 'n',
                                        'i', 'b', 'i', 'v', ':', 'W', 'r',
                                        'o', 'n', 'g', 'r', 'f'};
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
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 66, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &neb_emlrtRSI;
  j_error(&st, y, b_y, &rb_emlrtMCI);
}

void f_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 21};
  static const int32_T iv1[2] = {1, 68};
  static const char_T varargin_2[68] = {
      'r', 'a', 't', 'i', 'o', ' ', 'n', '/', 'v', ' ', 't', 'o', 'o', ' ',
      's', 'm', 'a', 'l', 'l', ';', ' ', 'm', 'o', 'd', 'i', 'f', 'y', ' ',
      'i', 'n', 'i', 't', ' ', '(', 'i', '.', 'e', '.', ' ', 'd', 'e', 'c',
      'r', 'e', 'a', 's', 'e', ' ', 'i', 'n', 'i', 't', 'i', 'a', 'l', ' ',
      's', 'u', 'b', 's', 'e', 't', ' ', 's', 'i', 'z', 'e', ')'};
  static const char_T varargin_1[21] = {'F', 'S', 'D', 'A', ':', 'F', 'S',
                                        'M', ':', 'W', 'r', 'o', 'n', 'g',
                                        'R', 'a', 't', 'i', 'o', 'n', 'v'};
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
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 68, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &neb_emlrtRSI;
  j_error(&st, y, b_y, &rb_emlrtMCI);
}

void g_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 21};
  static const int32_T iv1[2] = {1, 44};
  static const char_T varargin_1[21] = {'F', 'S', 'D', 'A', ':', 'F', 'S',
                                        'M', 'e', 'n', 'v', 'm', 'm', 'd',
                                        ':', 'W', 'r', 'o', 'n', 'g', 'n'};
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
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 44, m, &cv12[0]);
  emlrtAssign(&b_y, m);
  st.site = &neb_emlrtRSI;
  j_error(&st, y, b_y, &rb_emlrtMCI);
}

void h_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 21};
  static const int32_T iv1[2] = {1, 45};
  static const char_T varargin_2[45] = {
      'v', ' ', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ', 's', 'c',
      'a', 'l', 'a', 'r', ' ', 'n', 'o', 'n', ' ', 'e', 'm', 'p',
      't', 'y', ' ', 'a', 'n', 'd', ' ', 'n', 'o', 'n', ' ', 'm',
      'i', 's', 's', 'i', 'n', 'g', '!', '!', '!'};
  static const char_T varargin_1[21] = {'F', 'S', 'D', 'A', ':', 'F', 'S',
                                        'M', 'e', 'n', 'v', 'm', 'm', 'd',
                                        ':', 'W', 'r', 'o', 'n', 'g', 'v'};
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
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 45, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &neb_emlrtRSI;
  j_error(&st, y, b_y, &rb_emlrtMCI);
}

void i_error(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 22};
  static const int32_T iv1[2] = {1, 56};
  static const char_T varargin_1[22] = {'F', 'S', 'D', 'A', ':', 'F', 'S', 'M',
                                        'e', 'n', 'v', 'm', 'm', 'd', ':', 'W',
                                        'r', 'o', 'n', 'g', 'M', '0'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 22, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 56, m, &cv13[0]);
  emlrtAssign(&b_y, m);
  st.site = &neb_emlrtRSI;
  j_error(&st, y, b_y, &rb_emlrtMCI);
}

/* End of code generation (error.c) */
