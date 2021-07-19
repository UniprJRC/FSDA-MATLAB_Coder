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
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_mexutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static const char_T cv7[15] = {'F', 'S', 'D', 'A', ':', 'L', 'X', 'S',
                               ':', 'W', 'r', 'o', 'n', 'g', 'h'};

static const char_T cv19[45] = {
    'p', ' ', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ', 's', 'c', 'a', 'l', 'a',
    'r', ' ', 'n', 'o', 'n', ' ', 'e', 'm', 'p', 't', 'y', ' ', 'a', 'n', 'd',
    ' ', 'n', 'o', 'n', ' ', 'm', 'i', 's', 's', 'i', 'n', 'g', '!', '!', '!'};

static const char_T cv20[56] = {
    'I', 'n', 'i', 't', 'i', 'a', 'l', ' ', 's', 't', 'a', 'r', 't', 'i',
    'n', 'g', ' ', 'p', 'o', 'i', 'n', 't', ' ', 'o', 'f', ' ', 't', 'h',
    'e', ' ', 's', 'e', 'a', 'r', 'c', 'h', ' ', 'i', 's', ' ', 'g', 'r',
    'e', 'a', 't', 'e', 'r', ' ', 't', 'h', 'a', 'n', ' ', 'n', '-', '1'};

static const char_T cv23[73] = {
    'I', 'n', 'i', 't', 'i', 'a', 'l', ' ', 's', 't', 'a', 'r', 't', 'i', 'n',
    'g', ' ', 'p', 'o', 'i', 'n', 't', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ',
    's', 'e', 'a', 'r', 'c', 'h', ' ', '(', 'm', '0', '=', '%', 'd', ')', ' ',
    'i', 's', ' ', 'g', 'r', 'e', 'a', 't', 'e', 'r', ' ', 't', 'h', 'a', 'n',
    ' ', 'n', '-', '1', ' ', '(', 'n', '-', '1', '=', '%', 'd', ')'};

static const char_T cv24[28] = {
    'F', 'S', 'D', 'A', ':', 'F', 'S', 'R', 'e', 'n', 'v', 'm', 'd', 'r',
    ':', 'm', 'i', 's', 's', 'i', 'n', 'g', 'I', 'n', 'p', 'u', 't', 's'};

/* Function Declarations */
static void x_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    const mxArray *d, const mxArray *e, emlrtMCInfo *location);

/* Function Definitions */
static void x_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 4, &pArrays[0],
                        (const char_T *)"error", true, location);
}

void b_error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 22};
  static const int32_T iv1[2] = {1, 56};
  static const char_T varargin_2[56] = {
      't', 'h', 'r', 'e', 's', 'h', 'o', 'u', 't', 'X', ' ', 'c', 'a', 'n',
      ' ', 'b', 'e', ' ', 'e', 'm', 'p', 't', 'y', ' ', 'a', ' ', 's', 'c',
      'a', 'l', 'a', 'r', ' ', 'e', 'q', 'u', 'a', 'l', ' ', 't', 'o', ' ',
      '1', ' ', 'o', 'r', ' ', 'a', ' ', 's', 't', 'r', 'u', 'c', 't', '.'};
  static const char_T varargin_1[22] = {'F', 'S', 'D', 'A', ':', 'F', 'S', 'R',
                                        ':', 'W', 'r', 'o', 'n', 'g', 'I', 'n',
                                        'p', 'u', 't', 'O', 'p', 't'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 22, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 56, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void c_error(const emlrtStack *sp, const char_T varargin_2_data[],
             const int32_T varargin_2_size[2])
{
  static const int32_T b_iv[2] = {1, 15};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T iv1[2];
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 15, m, &cv7[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  iv1[0] = 1;
  iv1[1] = varargin_2_size[1];
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, varargin_2_size[1], m,
                           &varargin_2_data[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void d_error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 15};
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
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 15, m, &cv7[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 70, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void e_error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 19};
  static const int32_T iv1[2] = {1, 65};
  static const char_T varargin_2[65] = {
      'N', 'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f', ' ', 's', 'u', 'b',
      's', 'e', 't', 's', ' ', 't', 'o', ' ', 'e', 'x', 't', 'r', 'a',
      'c', 't', ' ', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ', '0', ' ',
      '(', 'a', 'l', 'l', ')', ' ', 'o', 'r', ' ', 'a', ' ', 'p', 'o',
      's', 'i', 't', 'i', 'v', 'e', ' ', 'n', 'u', 'm', 'b', 'e', 'r'};
  static const char_T varargin_1[19] = {'F', 'S', 'D', 'A', ':', 'L', 'X',
                                        'S', ':', 'W', 'r', 'o', 'n', 'g',
                                        'N', 's', 'a', 'm', 'p'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 19, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 65, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 25};
  static const int32_T iv1[2] = {1, 20};
  static const char_T varargin_1[25] = {
      'F', 'S', 'D', 'A', ':', 'c', 'h', 'k', 'i', 'n', 'p', 'u', 't',
      'R', ':', 'N', 'o', 'F', 'u', 'l', 'l', 'R', 'a', 'n', 'k'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 25, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 20, m, &cv[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void f_error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 26};
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
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 26, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 8, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void g_error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 22};
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
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 22, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 90, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void h_error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 24};
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
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 24, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 44, m, &cv18[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void i_error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 24};
  static const int32_T iv1[2] = {1, 45};
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
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 24, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 45, m, &cv19[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void j_error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 25};
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
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 25, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 56, m, &cv20[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void k_error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 21};
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
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 21, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 68, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void l_error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 21};
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
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 21, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 44, m, &cv18[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void m_error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 21};
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
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 21, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 45, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void n_error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 22};
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
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 22, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 56, m, &cv20[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void o_error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 19};
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
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 19, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 92, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void p_error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 15};
  static const int32_T iv1[2] = {1, 14};
  static const char_T varargin_1[15] = {'F', 'S', 'D', 'A', ':', 'F', 'S', 'R',
                                        ':', 'N', 'o', 'C', 'o', 'n', 'v'};
  static const char_T varargin_2[14] = {'N', 'o', ' ', 'c', 'o', 'n', 'v',
                                        'e', 'r', 'g', 'e', 'n', 'c', 'e'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 15, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 14, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void q_error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 24};
  static const int32_T iv1[2] = {1, 45};
  static const char_T varargin_1[24] = {'F', 'S', 'D', 'A', ':', 'F', 'S', 'R',
                                        'b', 'o', 'n', 'f', 'b', 'o', 'u', 'n',
                                        'd', ':', 'W', 'r', 'o', 'n', 'g', 'p'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 24, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 45, m, &cv19[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void r_error(const emlrtStack *sp, real_T varargin_3, real_T varargin_4)
{
  static const int32_T b_iv[2] = {1, 28};
  static const int32_T iv1[2] = {1, 73};
  static const char_T varargin_1[28] = {
      'F', 'S', 'D', 'A', ':', 'F', 'S', 'R', 'b', 'o', 'n', 'f', 'b', 'o',
      'u', 'n', 'd', ':', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'A', 'r', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 28, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 73, m, &cv23[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateDoubleScalar(varargin_3);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateDoubleScalar(varargin_4);
  emlrtAssign(&d_y, m);
  st.site = &qqb_emlrtRSI;
  x_error(&st, y, b_y, c_y, d_y, &d_emlrtMCI);
}

void s_error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 28};
  static const int32_T iv1[2] = {1, 44};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 28, m, &cv24[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 44, m, &cv18[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void t_error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 28};
  static const int32_T iv1[2] = {1, 45};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 28, m, &cv24[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 45, m, &cv19[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

void u_error(const emlrtStack *sp, real_T varargin_3, real_T varargin_4)
{
  static const int32_T b_iv[2] = {1, 24};
  static const int32_T iv1[2] = {1, 73};
  static const char_T varargin_1[24] = {'F', 'S', 'D', 'A', ':', 'F', 'S', 'R',
                                        'e', 'n', 'v', 'm', 'd', 'r', ':', 'T',
                                        'o', 'o', 'L', 'a', 'r', 'g', 'e', 'n'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 24, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 73, m, &cv23[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateDoubleScalar(varargin_3);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateDoubleScalar(varargin_4);
  emlrtAssign(&d_y, m);
  st.site = &qqb_emlrtRSI;
  x_error(&st, y, b_y, c_y, d_y, &d_emlrtMCI);
}

void v_error(const emlrtStack *sp)
{
  static const int32_T b_iv[2] = {1, 28};
  static const int32_T iv1[2] = {1, 113};
  static const char_T varargin_2[113] = {
      'R', 'a',  't', 'i', 'o', ' ', 'n',  '/', 'p', ' ', 't', 'o', 'o',
      ' ', 's',  'm', 'a', 'l', 'l', ';',  ' ', 'm', 'o', 'd', 'i', 'f',
      'y', ' ',  'i', 'n', 'i', 't', ' ',  '(', 'i', '.', 'e', '.', ' ',
      'd', 'e',  'c', 'r', 'e', 'a', 's',  'e', ' ', 'i', 'n', 'i', 't',
      'i', 'a',  'l', ' ', 's', 'u', 'b',  's', 'e', 't', ' ', 's', 'i',
      'z', 'e',  ')', ' ', 'o', 'r', ' ',  'u', 's', 'e', ' ', 'o', 'p',
      't', 'i',  'o', 'n', ' ', 'b', 'o',  'n', 'f', 'l', 'e', 'v', ' ',
      '(', 'i',  '.', 'e', '.', ' ', '\'', 'b', 'o', 'n', 'f', 'l', 'e',
      'v', '\'', ',', ' ', '0', '.', '9',  '9', ')'};
  static const char_T varargin_1[28] = {
      'F', 'S', 'D', 'A', ':', 'F', 'S', 'R', 'c', 'o', 'r', 'e', ':', 'T',
      'o', 'o', 'S', 'm', 'a', 'l', 'l', 'R', 'a', 't', 'i', 'o', 'n', 'p'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 28, m, &varargin_1[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 113, m, &varargin_2[0]);
  emlrtAssign(&b_y, m);
  st.site = &qqb_emlrtRSI;
  w_error(&st, y, b_y, &d_emlrtMCI);
}

/* End of code generation (error.c) */
