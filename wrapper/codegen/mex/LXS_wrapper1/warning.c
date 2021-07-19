/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * warning.c
 *
 * Code generation for function 'warning'
 *
 */

/* Include files */
#include "warning.h"
#include "LXS_wrapper1_mexutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtMCInfo p_emlrtMCI = {
    14,        /* lineNo */
    25,        /* colNo */
    "warning", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\warning.m" /* pName */
};

static emlrtMCInfo q_emlrtMCI = {
    14,        /* lineNo */
    9,         /* colNo */
    "warning", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\warning.m" /* pName */
};

static const char_T cv2[26] = {'s', 't', 'a', 't', 's', ':', 'g', 'a', 'm',
                               'i', 'n', 'v', ':', 'N', 'o', 'C', 'o', 'n',
                               'v', 'e', 'r', 'g', 'e', 'n', 'c', 'e'};

static emlrtRSInfo yib_emlrtRSI = {
    14,        /* lineNo */
    "warning", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\warning.m" /* pathName */
};

/* Function Declarations */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b,
                              const mxArray *c, emlrtMCInfo *location);

static void c_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);

static const mxArray *e_feval(const emlrtStack *sp, const mxArray *b,
                              const mxArray *c, const mxArray *d,
                              const mxArray *e, const mxArray *f,
                              emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b,
                              const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b((emlrtCTX)sp, 1, &m, 2, &pArrays[0],
                               (const char_T *)"feval", true, location);
}

static void c_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 2, &pArrays[0],
                        (const char_T *)"feval", true, location);
}

static const mxArray *e_feval(const emlrtStack *sp, const mxArray *b,
                              const mxArray *c, const mxArray *d,
                              const mxArray *e, const mxArray *f,
                              emlrtMCInfo *location)
{
  const mxArray *pArrays[5];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  return emlrtCallMATLABR2012b((emlrtCTX)sp, 1, &m, 5, &pArrays[0],
                               (const char_T *)"feval", true, location);
}

void b_warning(const emlrtStack *sp, const char_T varargin_2[12])
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 26};
  static const int32_T iv3[2] = {1, 12};
  static const int32_T iv4[2] = {1, 12};
  static const int32_T iv5[2] = {1, 12};
  static const char_T varargin_1[12] = {' ', ' ', '1', '.', '0', '0',
                                        '0', '0', 'e', '+', '0', '0'};
  static const char_T varargin_3[12] = {' ', ' ', '9', '.', '5', '0',
                                        '0', '0', 'e', '-', '0', '1'};
  static const char_T b_u[7] = {'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7] = {'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 26, m, &cv2[0]);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 12, m, &varargin_1[0]);
  emlrtAssign(&d_y, m);
  e_y = NULL;
  m = emlrtCreateCharArray(2, &iv4[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 12, m, &varargin_2[0]);
  emlrtAssign(&e_y, m);
  f_y = NULL;
  m = emlrtCreateCharArray(2, &iv5[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 12, m, &varargin_3[0]);
  emlrtAssign(&f_y, m);
  st.site = &yib_emlrtRSI;
  c_feval(&st, y, e_feval(&st, b_y, c_y, d_y, e_y, f_y, &p_emlrtMCI),
          &q_emlrtMCI);
}

void c_warning(const emlrtStack *sp, const char_T varargin_1[23],
               const char_T varargin_2[23], const char_T varargin_3[23])
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 40};
  static const int32_T iv3[2] = {1, 23};
  static const int32_T iv4[2] = {1, 23};
  static const int32_T iv5[2] = {1, 23};
  static const char_T msgID[40] = {
      'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L', 'A', 'B', ':', 'b',
      'e', 't', 'a', 'i', 'n', 'c', 'i', 'n', 'v', '_', 'F', 'a', 'i', 'l',
      'e', 'd', 'T', 'o', 'C', 'o', 'n', 'v', 'e', 'r', 'g', 'e'};
  static const char_T b_u[7] = {'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7] = {'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 40, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 23, m, &varargin_1[0]);
  emlrtAssign(&d_y, m);
  e_y = NULL;
  m = emlrtCreateCharArray(2, &iv4[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 23, m, &varargin_2[0]);
  emlrtAssign(&e_y, m);
  f_y = NULL;
  m = emlrtCreateCharArray(2, &iv5[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 23, m, &varargin_3[0]);
  emlrtAssign(&f_y, m);
  st.site = &yib_emlrtRSI;
  c_feval(&st, y, e_feval(&st, b_y, c_y, d_y, e_y, f_y, &p_emlrtMCI),
          &q_emlrtMCI);
}

void d_warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 26};
  static const char_T msgID[26] = {'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
                                   'l', 'b', 'o', 'x', ':', 's', 'c', 'h', 'u',
                                   'r', '_', 'f', 'a', 'i', 'l', 'e', 'd'};
  static const char_T b_u[7] = {'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7] = {'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 26, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &yib_emlrtRSI;
  c_feval(&st, y, b_feval(&st, b_y, c_y, &p_emlrtMCI), &q_emlrtMCI);
}

void e_warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 24};
  static const char_T msgID[24] = {'M', 'A', 'T', 'L', 'A', 'B', ':', 'e',
                                   'i', 'g', ':', 'N', 'o', 'C', 'o', 'n',
                                   'v', 'e', 'r', 'g', 'e', 'n', 'c', 'e'};
  static const char_T b_u[7] = {'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7] = {'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 24, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &yib_emlrtRSI;
  c_feval(&st, y, b_feval(&st, b_y, c_y, &p_emlrtMCI), &q_emlrtMCI);
}

void f_warning(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 21};
  static const char_T msgID[21] = {'M', 'A', 'T', 'L', 'A', 'B', ':',
                                   's', 'i', 'n', 'g', 'u', 'l', 'a',
                                   'r', 'M', 'a', 't', 'r', 'i', 'x'};
  static const char_T b_u[7] = {'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7] = {'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 21, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  st.site = &yib_emlrtRSI;
  c_feval(&st, y, b_feval(&st, b_y, c_y, &p_emlrtMCI), &q_emlrtMCI);
}

void g_warning(const emlrtStack *sp, const char_T varargin_1[14])
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 33};
  static const int32_T iv3[2] = {1, 14};
  static const char_T msgID[33] = {'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
                                   'L', 'A', 'B', ':', 'i', 'l', 'l', 'C', 'o',
                                   'n', 'd', 'i', 't', 'i', 'o', 'n', 'e', 'd',
                                   'M', 'a', 't', 'r', 'i', 'x'};
  static const char_T b_u[7] = {'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7] = {'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 33, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 14, m, &varargin_1[0]);
  emlrtAssign(&d_y, m);
  st.site = &yib_emlrtRSI;
  c_feval(&st, y, feval(&st, b_y, c_y, d_y, &p_emlrtMCI), &q_emlrtMCI);
}

void h_warning(const emlrtStack *sp, int32_T varargin_1,
               const char_T varargin_2[14])
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 32};
  static const int32_T iv3[2] = {1, 14};
  static const char_T msgID[32] = {'C', 'o', 'd', 'e', 'r', ':', 'M', 'A',
                                   'T', 'L', 'A', 'B', ':', 'r', 'a', 'n',
                                   'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e',
                                   'n', 't', 'M', 'a', 't', 'r', 'i', 'x'};
  static const char_T b_u[7] = {'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7] = {'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 32, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = varargin_1;
  emlrtAssign(&d_y, m);
  e_y = NULL;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 14, m, &varargin_2[0]);
  emlrtAssign(&e_y, m);
  st.site = &yib_emlrtRSI;
  c_feval(&st, y, d_feval(&st, b_y, c_y, d_y, e_y, &p_emlrtMCI), &q_emlrtMCI);
}

void i_warning(const emlrtStack *sp, const char_T varargin_1[12],
               const char_T varargin_2[12], const char_T varargin_3[12])
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 26};
  static const int32_T iv3[2] = {1, 12};
  static const int32_T iv4[2] = {1, 12};
  static const int32_T iv5[2] = {1, 12};
  static const char_T b_u[7] = {'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7] = {'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 26, m, &cv2[0]);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 12, m, &varargin_1[0]);
  emlrtAssign(&d_y, m);
  e_y = NULL;
  m = emlrtCreateCharArray(2, &iv4[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 12, m, &varargin_2[0]);
  emlrtAssign(&e_y, m);
  f_y = NULL;
  m = emlrtCreateCharArray(2, &iv5[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 12, m, &varargin_3[0]);
  emlrtAssign(&f_y, m);
  st.site = &yib_emlrtRSI;
  c_feval(&st, y, e_feval(&st, b_y, c_y, d_y, e_y, f_y, &p_emlrtMCI),
          &q_emlrtMCI);
}

void warning(const emlrtStack *sp, const char_T varargin_1[23],
             const char_T varargin_2[23])
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 41};
  static const int32_T iv3[2] = {1, 23};
  static const int32_T iv4[2] = {1, 23};
  static const char_T msgID[41] = {
      'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L', 'A', 'B', ':', 'g',
      'a', 'm', 'm', 'a', 'i', 'n', 'c', 'i', 'n', 'v', '_', 'F', 'a', 'i',
      'l', 'e', 'd', 'T', 'o', 'C', 'o', 'n', 'v', 'e', 'r', 'g', 'e'};
  static const char_T b_u[7] = {'m', 'e', 's', 's', 'a', 'g', 'e'};
  static const char_T u[7] = {'w', 'a', 'r', 'n', 'i', 'n', 'g'};
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 41, m, &msgID[0]);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 23, m, &varargin_1[0]);
  emlrtAssign(&d_y, m);
  e_y = NULL;
  m = emlrtCreateCharArray(2, &iv4[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 23, m, &varargin_2[0]);
  emlrtAssign(&e_y, m);
  st.site = &yib_emlrtRSI;
  c_feval(&st, y, d_feval(&st, b_y, c_y, d_y, e_y, &p_emlrtMCI), &q_emlrtMCI);
}

/* End of code generation (warning.c) */
