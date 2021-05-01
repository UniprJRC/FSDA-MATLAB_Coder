/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * str2double.c
 *
 * Code generation for function 'str2double'
 *
 */

/* Include files */
#include "str2double.h"
#include "LTSts_wrapper_data.h"
#include "rt_nonfinite.h"
#include "str2double1.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo
    tf_emlrtRSI =
        {
            9,            /* lineNo */
            "str2double", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\strfun\\str2doub"
            "le.m" /* pathName */
};

static emlrtRSInfo uf_emlrtRSI =
    {
        36,           /* lineNo */
        "str2double", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\str2double.m" /* pathName */
};

static emlrtRSInfo vf_emlrtRSI =
    {
        37,           /* lineNo */
        "str2double", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\str2double.m" /* pathName */
};

static emlrtRSInfo wf_emlrtRSI =
    {
        45,           /* lineNo */
        "str2double", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\str2double.m" /* pathName */
};

static emlrtRSInfo xf_emlrtRSI =
    {
        60,           /* lineNo */
        "str2double", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\str2double.m" /* pathName */
};

static emlrtRSInfo yf_emlrtRSI =
    {
        62,           /* lineNo */
        "str2double", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\str2double.m" /* pathName */
};

/* Function Definitions */
creal_T b_str2double(const emlrtStack *sp, const char_T s[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  creal_T x;
  real_T b_scanned1;
  real_T scanned1;
  real_T scanned2;
  int32_T idx;
  int32_T k;
  int32_T nread;
  int32_T ntoread;
  char_T s1[4];
  char_T c;
  boolean_T a__3;
  boolean_T b_finite;
  boolean_T exitg1;
  boolean_T foundsign;
  boolean_T isimag1;
  boolean_T isneg;
  boolean_T success;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  x.re = rtNaN;
  x.im = 0.0;
  ntoread = 0;
  b_st.site = &uf_emlrtRSI;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k + 1 <= 2)) {
    c_st.site = &ag_emlrtRSI;
    d_st.site = &bg_emlrtRSI;
    e_st.site = &cg_emlrtRSI;
    f_st.site = &dg_emlrtRSI;
    nread = (uint8_T)s[k];
    if (nread > 127) {
      emlrtErrorWithMessageIdR2018a(
          &f_st, &o_emlrtRTEI, "Coder:toolbox:unsupportedString",
          "Coder:toolbox:unsupportedString", 2, 12, 127);
    }
    if (bv[nread] || (s[k] == '\x00')) {
      k++;
    } else {
      exitg1 = true;
    }
  }
  b_st.site = &vf_emlrtRSI;
  isimag1 = false;
  b_finite = true;
  scanned1 = 0.0;
  c_st.site = &ig_emlrtRSI;
  idx = 1;
  s1[0] = '\x00';
  s1[1] = '\x00';
  s1[2] = '\x00';
  s1[3] = '\x00';
  isneg = false;
  exitg1 = false;
  while ((!exitg1) && (k + 1 <= 2)) {
    if (s[k] == '-') {
      isneg = !isneg;
      k++;
    } else if ((s[k] == ',') || (s[k] == '+')) {
      k++;
    } else {
      d_st.site = &jg_emlrtRSI;
      e_st.site = &bg_emlrtRSI;
      f_st.site = &cg_emlrtRSI;
      g_st.site = &dg_emlrtRSI;
      nread = (uint8_T)s[k];
      if (nread > 127) {
        emlrtErrorWithMessageIdR2018a(
            &g_st, &o_emlrtRTEI, "Coder:toolbox:unsupportedString",
            "Coder:toolbox:unsupportedString", 2, 12, 127);
      }
      if (!bv[nread]) {
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  success = (k + 1 <= 2);
  if (success && isneg) {
    s1[0] = '-';
    idx = 2;
  }
  nread = k + 1;
  if (success) {
    if ((k + 1 <= 2) && ((s[k] == 'j') || (s[k] == 'i'))) {
      isimag1 = true;
      nread = k + 2;
      c_st.site = &hg_emlrtRSI;
      b_skipspaces(&c_st, s, &nread);
      if ((nread <= 2) && (s[1] == '*')) {
        nread = 3;
        c_st.site = &kg_emlrtRSI;
        b_readfloat(&c_st, s1, &idx, s, &nread, false, &isneg, &b_finite,
                    &scanned1, &a__3, &success);
      } else {
        s1[idx - 1] = '1';
        idx++;
      }
    } else {
      nread = k + 1;
      b_readNonFinite(s, &nread, &b_finite, &scanned1);
      if (b_finite) {
        success = b_copydigits(s1, &idx, s, &nread, true);
        if (success) {
          success = b_copyexponent(s1, &idx, s, &nread);
        }
      } else if ((idx >= 2) && (s1[0] == '-')) {
        idx = 1;
        s1[0] = ' ';
        scanned1 = -scanned1;
      }
      c_st.site = &gg_emlrtRSI;
      b_skipspaces(&c_st, s, &nread);
      if ((nread <= 2) && (s[nread - 1] == '*')) {
        nread++;
        c_st.site = &fg_emlrtRSI;
        b_skipspaces(&c_st, s, &nread);
      }
      if (nread <= 2) {
        c = s[nread - 1];
        if ((c == 'i') || (c == 'j')) {
          nread++;
          isimag1 = true;
        }
      }
    }
    c_st.site = &eg_emlrtRSI;
    b_skipspaces(&c_st, s, &nread);
  }
  if (b_finite) {
    ntoread = 1;
  }
  if (success && (nread <= 2)) {
    s1[idx - 1] = ' ';
    idx++;
    b_st.site = &wf_emlrtRSI;
    b_readfloat(&b_st, s1, &idx, s, &nread, true, &isneg, &a__3, &scanned2,
                &foundsign, &success);
    if (a__3) {
      ntoread++;
    }
    if (success && (nread > 2) && (isimag1 != isneg) && foundsign) {
      success = true;
    } else {
      success = false;
    }
  } else {
    scanned2 = 0.0;
  }
  if (success) {
    s1[idx - 1] = '\x00';
    if (ntoread == 2) {
      b_st.site = &xf_emlrtRSI;
      nread = sscanf(&s1[0], "%lf %lf", &scanned1, &scanned2);
      if (nread != 2) {
        scanned1 = rtNaN;
        scanned2 = rtNaN;
      }
    } else if (ntoread == 1) {
      b_st.site = &yf_emlrtRSI;
      nread = sscanf(&s1[0], "%lf", &b_scanned1);
      if (nread != 1) {
        b_scanned1 = rtNaN;
      }
      if (b_finite) {
        scanned1 = b_scanned1;
      } else {
        scanned2 = b_scanned1;
      }
    }
    if (isimag1) {
      x.re = scanned2;
      x.im = scanned1;
    } else {
      x.re = scanned1;
      x.im = scanned2;
    }
  }
  return x;
}

creal_T str2double(const emlrtStack *sp, char_T s)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  creal_T x;
  real_T b_scanned1;
  real_T scanned1;
  real_T scanned2;
  int32_T i;
  int32_T idx;
  int32_T k;
  int32_T ntoread;
  char_T s1[3];
  boolean_T b_finite;
  boolean_T exitg1;
  boolean_T foundsign;
  boolean_T isfinite2;
  boolean_T isimag1;
  boolean_T isneg;
  boolean_T success;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  x.re = rtNaN;
  x.im = 0.0;
  ntoread = 0;
  b_st.site = &uf_emlrtRSI;
  k = 1;
  c_st.site = &ag_emlrtRSI;
  d_st.site = &bg_emlrtRSI;
  e_st.site = &cg_emlrtRSI;
  f_st.site = &dg_emlrtRSI;
  if ((uint8_T)s > 127) {
    emlrtErrorWithMessageIdR2018a(
        &f_st, &o_emlrtRTEI, "Coder:toolbox:unsupportedString",
        "Coder:toolbox:unsupportedString", 2, 12, 127);
  }
  i = (uint8_T)s & 127;
  if (bv[i] || (s == '\x00')) {
    k = 2;
  }
  b_st.site = &vf_emlrtRSI;
  isimag1 = false;
  b_finite = true;
  scanned1 = 0.0;
  c_st.site = &ig_emlrtRSI;
  idx = 1;
  s1[0] = '\x00';
  s1[1] = '\x00';
  s1[2] = '\x00';
  isneg = false;
  exitg1 = false;
  while ((!exitg1) && (k <= 1)) {
    if (s == '-') {
      isneg = !isneg;
      k = 2;
    } else if ((s == ',') || (s == '+')) {
      k = 2;
    } else {
      d_st.site = &jg_emlrtRSI;
      e_st.site = &bg_emlrtRSI;
      f_st.site = &cg_emlrtRSI;
      g_st.site = &dg_emlrtRSI;
      if ((uint8_T)s > 127) {
        emlrtErrorWithMessageIdR2018a(
            &g_st, &o_emlrtRTEI, "Coder:toolbox:unsupportedString",
            "Coder:toolbox:unsupportedString", 2, 12, 127);
      }
      if (!bv[i]) {
        exitg1 = true;
      } else {
        k = 2;
      }
    }
  }
  success = (k <= 1);
  if (success && isneg) {
    s1[0] = '-';
    idx = 2;
  }
  if (success) {
    isneg = false;
    if (k <= 1) {
      isneg = ((s == 'j') || (s == 'i'));
    }
    if (isneg) {
      isimag1 = true;
      k++;
      c_st.site = &hg_emlrtRSI;
      skipspaces(&c_st, s, &k);
      s1[idx - 1] = '1';
      idx++;
    } else {
      readNonFinite(s, &k, &b_finite, &scanned1);
      if (b_finite) {
        success = copydigits(s1, &idx, s, &k, true);
        if (success) {
          success = copyexponent(s1, &idx, s, &k);
        }
      } else if ((idx >= 2) && (s1[0] == '-')) {
        idx = 1;
        s1[0] = ' ';
        scanned1 = -scanned1;
      }
      c_st.site = &gg_emlrtRSI;
      skipspaces(&c_st, s, &k);
      if ((k <= 1) && (s == '*')) {
        k = 2;
        c_st.site = &fg_emlrtRSI;
        skipspaces(&c_st, '*', &k);
      }
      if ((k <= 1) && ((s == 'i') || (s == 'j'))) {
        k = 2;
        isimag1 = true;
      }
    }
    c_st.site = &eg_emlrtRSI;
    skipspaces(&c_st, s, &k);
  }
  if (b_finite) {
    ntoread = 1;
  }
  if (success && (k <= 1)) {
    s1[idx - 1] = ' ';
    idx++;
    k = 1;
    b_st.site = &wf_emlrtRSI;
    readfloat(&b_st, s1, &idx, s, &k, true, &isneg, &isfinite2, &scanned2,
              &foundsign, &success);
    if (isfinite2) {
      ntoread++;
    }
    if (success && (k > 1) && (isimag1 != isneg) && foundsign) {
      success = true;
    } else {
      success = false;
    }
  } else {
    scanned2 = 0.0;
  }
  if (success) {
    s1[idx - 1] = '\x00';
    if (ntoread == 2) {
      b_st.site = &xf_emlrtRSI;
      ntoread = sscanf(&s1[0], "%lf %lf", &scanned1, &scanned2);
      if (ntoread != 2) {
        scanned1 = rtNaN;
        scanned2 = rtNaN;
      }
    } else if (ntoread == 1) {
      b_st.site = &yf_emlrtRSI;
      ntoread = sscanf(&s1[0], "%lf", &b_scanned1);
      if (ntoread != 1) {
        b_scanned1 = rtNaN;
      }
      if (b_finite) {
        scanned1 = b_scanned1;
      } else {
        scanned2 = b_scanned1;
      }
    }
    if (isimag1) {
      x.re = scanned2;
      x.im = scanned1;
    } else {
      x.re = scanned1;
      x.im = scanned2;
    }
  }
  return x;
}

/* End of code generation (str2double.c) */
