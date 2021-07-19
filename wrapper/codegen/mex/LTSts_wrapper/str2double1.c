/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * str2double1.c
 *
 * Code generation for function 'str2double1'
 *
 */

/* Include files */
#include "str2double1.h"
#include "LTSts_wrapper_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
boolean_T b_copydigits(char_T s1[4], int32_T *idx, const char_T s[2],
                       int32_T *k, boolean_T allowpoint)
{
  char_T c;
  boolean_T exitg1;
  boolean_T haspoint;
  boolean_T success;
  success = (*k <= 2);
  haspoint = false;
  exitg1 = false;
  while ((!exitg1) && (success && (*k <= 2))) {
    c = s[*k - 1];
    if ((c >= '0') && (c <= '9')) {
      s1[*idx - 1] = c;
      (*idx)++;
      (*k)++;
    } else if (c == '.') {
      if (allowpoint && (!haspoint)) {
        success = true;
      } else {
        success = false;
      }
      if (success) {
        s1[*idx - 1] = '.';
        (*idx)++;
        haspoint = true;
      }
      (*k)++;
    } else if (c == ',') {
      (*k)++;
    } else {
      exitg1 = true;
    }
  }
  return success;
}

boolean_T b_copyexponent(char_T s1[4], int32_T *idx, const char_T s[2],
                         int32_T *k)
{
  int32_T kexp;
  char_T c;
  boolean_T b_success;
  boolean_T success;
  success = true;
  if (*k <= 2) {
    c = s[*k - 1];
    if ((c == 'E') || (c == 'e')) {
      s1[*idx - 1] = 'e';
      (*idx)++;
      (*k)++;
      while ((*k <= 2) && (s[1] == ',')) {
        *k = 3;
      }
      if (*k <= 2) {
        if (s[1] == '-') {
          s1[*idx - 1] = '-';
          (*idx)++;
          *k = 3;
        } else if (s[1] == '+') {
          *k = 3;
        }
      }
      kexp = *k;
      b_success = b_copydigits(s1, idx, s, k, false);
      if ((!b_success) || (*k <= kexp)) {
        success = false;
      }
    }
  }
  return success;
}

void b_readNonFinite(const char_T s[2], int32_T *k, boolean_T *b_finite,
                     real_T *fv)
{
  int32_T ksaved;
  char_T c_idx_0;
  char_T c_idx_1;
  char_T c_idx_2;
  ksaved = *k;
  c_idx_0 = '\x00';
  while ((*k <= 2) && (s[*k - 1] == ',')) {
    (*k)++;
  }
  if (*k <= 2) {
    c_idx_0 = s[*k - 1];
  }
  (*k)++;
  c_idx_1 = '\x00';
  while ((*k <= 2) && (s[*k - 1] == ',')) {
    (*k)++;
  }
  if (*k <= 2) {
    c_idx_1 = s[*k - 1];
  }
  (*k)++;
  c_idx_2 = '\x00';
  while ((*k <= 2) && (s[*k - 1] == ',')) {
    (*k)++;
  }
  if (*k <= 2) {
    c_idx_2 = s[*k - 1];
  }
  (*k)++;
  if (((c_idx_0 == 'I') || (c_idx_0 == 'i')) &&
      ((c_idx_1 == 'N') || (c_idx_1 == 'n')) &&
      ((c_idx_2 == 'F') || (c_idx_2 == 'f'))) {
    *b_finite = false;
    *fv = rtInf;
  } else if (((c_idx_0 == 'N') || (c_idx_0 == 'n')) &&
             ((c_idx_1 == 'A') || (c_idx_1 == 'a')) &&
             ((c_idx_2 == 'N') || (c_idx_2 == 'n'))) {
    *b_finite = false;
    *fv = rtNaN;
  } else {
    *b_finite = true;
    *fv = 0.0;
    *k = ksaved;
  }
}

void b_readfloat(const emlrtStack *sp, char_T s1[4], int32_T *idx,
                 const char_T s[2], int32_T *k, boolean_T allowimag,
                 boolean_T *isimag, boolean_T *b_finite, real_T *nfv,
                 boolean_T *foundsign, boolean_T *success)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T b_idx;
  int32_T b_k;
  int32_T i;
  char_T c;
  boolean_T a__3;
  boolean_T exitg1;
  boolean_T isneg;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b((emlrtCTX)sp);
  }
  *isimag = false;
  *b_finite = true;
  *nfv = 0.0;
  st.site = &jg_emlrtRSI;
  b_idx = *idx;
  b_k = *k - 1;
  isneg = false;
  *foundsign = false;
  exitg1 = false;
  while ((!exitg1) && (b_k + 1 <= 2)) {
    if (s[b_k] == '-') {
      isneg = !isneg;
      *foundsign = true;
      b_k++;
    } else if (s[b_k] == ',') {
      b_k++;
    } else if (s[b_k] == '+') {
      *foundsign = true;
      b_k++;
    } else {
      b_st.site = &kg_emlrtRSI;
      c_st.site = &cg_emlrtRSI;
      d_st.site = &dg_emlrtRSI;
      e_st.site = &eg_emlrtRSI;
      i = (uint8_T)s[b_k];
      if (i > 127) {
        emlrtErrorWithMessageIdR2018a(
            &e_st, &n_emlrtRTEI, "Coder:toolbox:unsupportedString",
            "Coder:toolbox:unsupportedString", 2, 12, 127);
      }
      if (!bv[i]) {
        exitg1 = true;
      } else {
        b_k++;
      }
    }
  }
  *success = (b_k + 1 <= 2);
  if ((*success) && isneg) {
    if ((*idx >= 2) && (s1[*idx - 2] == '-')) {
      s1[*idx - 2] = ' ';
    } else {
      s1[*idx - 1] = '-';
      b_idx = *idx + 1;
    }
  }
  *idx = b_idx;
  *k = b_k + 1;
  if (*success) {
    if ((b_k + 1 <= 2) && ((s[b_k] == 'j') || (s[b_k] == 'i'))) {
      if (allowimag) {
        *isimag = true;
        *k = b_k + 2;
        st.site = &ig_emlrtRSI;
        b_skipspaces(&st, s, k);
        if ((*k <= 2) && (s[*k - 1] == '*')) {
          (*k)++;
          st.site = &lg_emlrtRSI;
          b_readfloat(&st, s1, idx, s, k, false, &isneg, b_finite, nfv, &a__3,
                      success);
        } else {
          s1[b_idx - 1] = '1';
          *idx = b_idx + 1;
        }
      } else {
        *success = false;
      }
    } else {
      *k = b_k + 1;
      b_readNonFinite(s, k, b_finite, nfv);
      if (*b_finite) {
        *success = b_copydigits(s1, idx, s, k, true);
        if (*success) {
          *success = b_copyexponent(s1, idx, s, k);
        }
      } else if ((b_idx >= 2) && (s1[b_idx - 2] == '-')) {
        *idx = b_idx - 1;
        s1[b_idx - 2] = ' ';
        *nfv = -*nfv;
      }
      st.site = &hg_emlrtRSI;
      b_skipspaces(&st, s, k);
      if ((*k <= 2) && (s[*k - 1] == '*')) {
        (*k)++;
        st.site = &gg_emlrtRSI;
        b_skipspaces(&st, s, k);
      }
      if (*k <= 2) {
        c = s[*k - 1];
        if ((c == 'i') || (c == 'j')) {
          (*k)++;
          *isimag = true;
        }
      }
    }
    st.site = &fg_emlrtRSI;
    b_skipspaces(&st, s, k);
  }
}

void b_skipspaces(const emlrtStack *sp, const char_T s[2], int32_T *k)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  char_T c;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  exitg1 = false;
  while ((!exitg1) && (*k <= 2)) {
    st.site = &bg_emlrtRSI;
    b_st.site = &cg_emlrtRSI;
    c_st.site = &dg_emlrtRSI;
    d_st.site = &eg_emlrtRSI;
    c = s[*k - 1];
    if ((uint8_T)c > 127) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &n_emlrtRTEI, "Coder:toolbox:unsupportedString",
          "Coder:toolbox:unsupportedString", 2, 12, 127);
    }
    if (bv[(uint8_T)c & 127] || (c == '\x00') || (c == ',')) {
      (*k)++;
    } else {
      exitg1 = true;
    }
  }
}

boolean_T copydigits(char_T s1[3], int32_T *idx, char_T s, int32_T *k,
                     boolean_T allowpoint)
{
  boolean_T exitg1;
  boolean_T haspoint;
  boolean_T success;
  success = (*k <= 1);
  haspoint = false;
  exitg1 = false;
  while ((!exitg1) && (success && (*k <= 1))) {
    if ((s >= '0') && (s <= '9')) {
      s1[*idx - 1] = s;
      (*idx)++;
      *k = 2;
    } else if (s == '.') {
      if (allowpoint && (!haspoint)) {
        success = true;
      } else {
        success = false;
      }
      if (success) {
        s1[*idx - 1] = '.';
        (*idx)++;
        haspoint = true;
      }
      *k = 2;
    } else if (s == ',') {
      *k = 2;
    } else {
      exitg1 = true;
    }
  }
  return success;
}

boolean_T copyexponent(char_T s1[3], int32_T *idx, char_T s, int32_T *k)
{
  boolean_T b_success;
  boolean_T success;
  success = true;
  if ((*k <= 1) && ((s == 'E') || (s == 'e'))) {
    s1[*idx - 1] = 'e';
    (*idx)++;
    *k = 2;
    b_success = copydigits(s1, idx, s, k, false);
    if ((!b_success) || (*k <= 2)) {
      success = false;
    }
  }
  return success;
}

void readNonFinite(char_T s, int32_T *k, boolean_T *b_finite, real_T *fv)
{
  int32_T ksaved;
  char_T c_idx_0;
  char_T c_idx_1;
  char_T c_idx_2;
  ksaved = *k;
  c_idx_0 = '\x00';
  while ((*k <= 1) && (s == ',')) {
    *k = 2;
  }
  if (*k <= 1) {
    c_idx_0 = s;
  }
  (*k)++;
  c_idx_1 = '\x00';
  while ((*k <= 1) && (s == ',')) {
    *k = 2;
  }
  if (*k <= 1) {
    c_idx_1 = s;
  }
  (*k)++;
  c_idx_2 = '\x00';
  while ((*k <= 1) && (s == ',')) {
    *k = 2;
  }
  if (*k <= 1) {
    c_idx_2 = s;
  }
  (*k)++;
  if (((c_idx_0 == 'I') || (c_idx_0 == 'i')) &&
      ((c_idx_1 == 'N') || (c_idx_1 == 'n')) &&
      ((c_idx_2 == 'F') || (c_idx_2 == 'f'))) {
    *b_finite = false;
    *fv = rtInf;
  } else if (((c_idx_0 == 'N') || (c_idx_0 == 'n')) &&
             ((c_idx_1 == 'A') || (c_idx_1 == 'a')) &&
             ((c_idx_2 == 'N') || (c_idx_2 == 'n'))) {
    *b_finite = false;
    *fv = rtNaN;
  } else {
    *b_finite = true;
    *fv = 0.0;
    *k = ksaved;
  }
}

void readfloat(const emlrtStack *sp, char_T s1[3], int32_T *idx, char_T s,
               int32_T *k, boolean_T allowimag, boolean_T *isimag,
               boolean_T *b_finite, real_T *nfv, boolean_T *foundsign,
               boolean_T *success)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  int32_T b_idx;
  boolean_T a__3;
  boolean_T exitg1;
  boolean_T isneg;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b((emlrtCTX)sp);
  }
  *isimag = false;
  *b_finite = true;
  *nfv = 0.0;
  st.site = &jg_emlrtRSI;
  b_idx = *idx - 1;
  isneg = false;
  *foundsign = false;
  exitg1 = false;
  while ((!exitg1) && (*k <= 1)) {
    if (s == '-') {
      isneg = !isneg;
      *foundsign = true;
      *k = 2;
    } else if (s == ',') {
      *k = 2;
    } else if (s == '+') {
      *foundsign = true;
      *k = 2;
    } else {
      b_st.site = &kg_emlrtRSI;
      c_st.site = &cg_emlrtRSI;
      d_st.site = &dg_emlrtRSI;
      e_st.site = &eg_emlrtRSI;
      if ((uint8_T)s > 127) {
        emlrtErrorWithMessageIdR2018a(
            &e_st, &n_emlrtRTEI, "Coder:toolbox:unsupportedString",
            "Coder:toolbox:unsupportedString", 2, 12, 127);
      }
      if (!bv[(uint8_T)s & 127]) {
        exitg1 = true;
      } else {
        *k = 2;
      }
    }
  }
  *success = (*k <= 1);
  if ((*success) && isneg) {
    if (s1[*idx - 2] == '-') {
      s1[*idx - 2] = ' ';
    } else {
      s1[*idx - 1] = '-';
      b_idx = *idx;
    }
  }
  *idx = b_idx + 1;
  if (*success) {
    isneg = false;
    if (*k <= 1) {
      isneg = ((s == 'j') || (s == 'i'));
    }
    if (isneg) {
      if (allowimag) {
        *isimag = true;
        (*k)++;
        st.site = &ig_emlrtRSI;
        skipspaces(&st, s, k);
        if ((*k <= 1) && (s == '*')) {
          *k = 2;
          st.site = &lg_emlrtRSI;
          readfloat(&st, s1, idx, '*', k, false, &isneg, b_finite, nfv, &a__3,
                    success);
        } else {
          s1[b_idx] = '1';
          *idx = b_idx + 2;
        }
      } else {
        *success = false;
      }
    } else {
      readNonFinite(s, k, b_finite, nfv);
      if (*b_finite) {
        *success = copydigits(s1, idx, s, k, true);
        if (*success) {
          *success = copyexponent(s1, idx, s, k);
        }
      } else if (s1[b_idx - 1] == '-') {
        *idx = b_idx;
        s1[b_idx - 1] = ' ';
        *nfv = -*nfv;
      }
      st.site = &hg_emlrtRSI;
      skipspaces(&st, s, k);
      if ((*k <= 1) && (s == '*')) {
        *k = 2;
        st.site = &gg_emlrtRSI;
        skipspaces(&st, '*', k);
      }
      if ((*k <= 1) && ((s == 'i') || (s == 'j'))) {
        *k = 2;
        *isimag = true;
      }
    }
    st.site = &fg_emlrtRSI;
    skipspaces(&st, s, k);
  }
}

void skipspaces(const emlrtStack *sp, char_T s, int32_T *k)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  exitg1 = false;
  while ((!exitg1) && (*k <= 1)) {
    st.site = &bg_emlrtRSI;
    b_st.site = &cg_emlrtRSI;
    c_st.site = &dg_emlrtRSI;
    d_st.site = &eg_emlrtRSI;
    if ((uint8_T)s > 127) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &n_emlrtRTEI, "Coder:toolbox:unsupportedString",
          "Coder:toolbox:unsupportedString", 2, 12, 127);
    }
    if (bv[(uint8_T)s & 127] || (s == '\x00') || (s == ',')) {
      *k = 2;
    } else {
      exitg1 = true;
    }
  }
}

/* End of code generation (str2double1.c) */
