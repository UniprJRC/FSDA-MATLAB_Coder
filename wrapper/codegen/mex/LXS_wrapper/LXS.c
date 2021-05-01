/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LXS.c
 *
 * Code generation for function 'LXS'
 *
 */

/* Include files */
#include "LXS.h"
#include "LXS_wrapper_data.h"
#include "LXS_wrapper_mexutil.h"
#include "gammainc.h"
#include "gammaincinv.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo xfb_emlrtRSI = {
    1280,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo yfb_emlrtRSI = {
    1281,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo agb_emlrtRSI = {
    1289,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo bgb_emlrtRSI = {
    1128,                                          /* lineNo */
    "LXS/asvar",                                   /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo cgb_emlrtRSI = {
    1129,                                          /* lineNo */
    "LXS/asvar",                                   /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo dgb_emlrtRSI = {
    1131,                                          /* lineNo */
    "LXS/asvar",                                   /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo egb_emlrtRSI = {
    1132,                                          /* lineNo */
    "LXS/asvar",                                   /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo fgb_emlrtRSI = {
    1133,                                          /* lineNo */
    "LXS/asvar",                                   /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ggb_emlrtRSI = {
    1134,                                          /* lineNo */
    "LXS/asvar",                                   /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo sgb_emlrtRSI = {
    1332,                                          /* lineNo */
    "corfactorREW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo tgb_emlrtRSI = {
    1333,                                          /* lineNo */
    "corfactorREW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtMCInfo jb_emlrtMCI = {
    1296,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorRAW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo kb_emlrtMCI = {
    1297,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorRAW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo lb_emlrtMCI = {
    1298,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorRAW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo mb_emlrtMCI = {
    1299,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorRAW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo nb_emlrtMCI = {
    1347,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorREW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo ob_emlrtMCI = {
    1348,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorREW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo pb_emlrtMCI = {
    1349,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorREW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo qb_emlrtMCI = {
    1350,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorREW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static const char_T cv15[69] = {
    'C', 'o', 'r', 'r', 'e', 'c', 't', 'i', 'o', 'n', ' ', 'f', 'a', 'c',
    't', 'o', 'r', ' ', 'f', 'o', 'r', ' ', 'c', 'o', 'v', 'a', 'r', 'i',
    'a', 'n', 'c', 'e', ' ', 'm', 'a', 't', 'r', 'i', 'x', ' ', 'b', 'a',
    's', 'e', 'd', ' ', 'o', 'n', ' ', 's', 'i', 'm', 'u', 'l', 'a', 't',
    'i', 'o', 'n', 's', ' ', 'f', 'o', 'u', 'n', 'd', ' ', '=', '1'};

static const char_T cv16[75] = {
    'G', 'i', 'v', 'e', 'n', ' ', 't', 'h', 'a', 't', ' ', 't', 'h', 'i', 's',
    ' ', 'v', 'a', 'l', 'u', 'e', ' ', 'i', 's', ' ', 'c', 'l', 'e', 'a', 'r',
    'l', 'y', ' ', 'w', 'r', 'o', 'n', 'g', ' ', 'w', 'e', ' ', 'p', 'u', 't',
    ' ', 'i', 't', ' ', 'e', 'q', 'u', 'a', 'l', ' ', 't', 'o', ' ', '1', ' ',
    '(', 'n', 'o', ' ', 'c', 'o', 'r', 'r', 'e', 'c', 't', 'i', 'o', 'n', ')'};

static const char_T cv17[51] = {
    'T', 'h', 'i', 's', ' ', 'm', 'a', 'y', ' ', 'h', 'a', 'p', 'p',
    'e', 'n', ' ', 'w', 'h', 'e', 'n', ' ', 'n', ' ', 'i', 's', ' ',
    'v', 'e', 'r', 'y', ' ', 's', 'm', 'a', 'l', 'l', ' ', 'a', 'n',
    'd', ' ', 'p', ' ', 'i', 's', ' ', 'l', 'a', 'r', 'g', 'e'};

static emlrtRSInfo xhb_emlrtRSI = {
    1350,                                          /* lineNo */
    "corfactorREW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo yhb_emlrtRSI = {
    1349,                                          /* lineNo */
    "corfactorREW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo aib_emlrtRSI = {
    1348,                                          /* lineNo */
    "corfactorREW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo bib_emlrtRSI = {
    1347,                                          /* lineNo */
    "corfactorREW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo cib_emlrtRSI = {
    1299,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo dib_emlrtRSI = {
    1298,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo eib_emlrtRSI = {
    1297,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo fib_emlrtRSI = {
    1296,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

/* Function Definitions */
real_T asvar(const emlrtStack *sp, real_T h, real_T n)
{
  static const int32_T iv[2] = {1, 6};
  static const int32_T iv1[2] = {1, 6};
  static const char_T b_cv[12] = {' ', ' ', '5', '.', '0', '0',
                                  '0', '0', 'e', '-', '0', '1'};
  static const char_T rfmt[6] = {'%', '1', '2', '.', '4', 'e'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  creal_T dc;
  creal_T dc1;
  real_T a;
  real_T b_xk;
  real_T c2;
  real_T hn;
  real_T qalfa;
  real_T xk;
  char_T b_str[12];
  char_T str[12];
  boolean_T b;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  /*  The part below contains subfunctions which are used only inside this file
   */
  /* asvar computes the new degrees of freedom for the Student T */
  hn = h / n;
  st.site = &bgb_emlrtRSI;
  b_st.site = &hn_emlrtRSI;
  if ((hn >= 0.0) && (hn <= 1.0)) {
    if (hn < 1.0) {
      c_st.site = &ln_emlrtRSI;
      dc = gammaincinv(&c_st, hn, 0.5);
      c_st.site = &kn_emlrtRSI;
      dc1 = gammainc(&c_st, dc.re, 0.5);
      c_st.site = &kn_emlrtRSI;
      if (muDoubleScalarHypot(dc1.re - hn, dc1.im) >
          hn * 1.4901161193847656E-8) {
        c_st.site = &jn_emlrtRSI;
        y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a(&c_st, 6, m, &rfmt[0]);
        emlrtAssign(&y, m);
        b_y = NULL;
        m = emlrtCreateDoubleScalar(2.0);
        emlrtAssign(&b_y, m);
        d_st.site = &mib_emlrtRSI;
        e_emlrt_marshallIn(&d_st, b_sprintf(&d_st, y, b_y, &r_emlrtMCI),
                           "<output of sprintf>", str);
        c_st.site = &hbb_emlrtRSI;
        c_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&c_st, 6, m, &rfmt[0]);
        emlrtAssign(&c_y, m);
        d_y = NULL;
        m = emlrtCreateDoubleScalar(hn);
        emlrtAssign(&d_y, m);
        d_st.site = &mib_emlrtRSI;
        e_emlrt_marshallIn(&d_st, b_sprintf(&d_st, c_y, d_y, &r_emlrtMCI),
                           "<output of sprintf>", b_str);
        c_st.site = &in_emlrtRSI;
        i_warning(&c_st, b_cv, str, b_str);
      }
      qalfa = dc.re * 2.0;
    } else {
      qalfa = rtInf;
    }
  } else {
    qalfa = rtNaN;
  }
  st.site = &cgb_emlrtRSI;
  xk = qalfa / 2.0;
  b_xk = xk;
  b = muDoubleScalarIsNaN(xk);
  if (!b) {
    if (xk < 0.0) {
      b_xk = 0.0;
    }
    b_st.site = &xbb_emlrtRSI;
    dc = gammainc(&b_st, b_xk, 1.5);
    c2 = dc.re;
  } else {
    c2 = rtNaN;
  }
  a = 1.0 / c2;
  st.site = &dgb_emlrtRSI;
  if (!b) {
    if (xk < 0.0) {
      xk = 0.0;
    }
    b_st.site = &xbb_emlrtRSI;
    dc = gammainc(&b_st, xk, 2.5);
    b_xk = dc.re;
  } else {
    b_xk = rtNaN;
  }
  st.site = &egb_emlrtRSI;
  xk = qalfa * hn - c2;
  b_st.site = &dl_emlrtRSI;
  c_st.site = &el_emlrtRSI;
  st.site = &fgb_emlrtRSI;
  b_st.site = &dl_emlrtRSI;
  c_st.site = &el_emlrtRSI;
  st.site = &ggb_emlrtRSI;
  b_st.site = &dl_emlrtRSI;
  c_st.site = &el_emlrtRSI;
  return a * a *
         (((3.0 * b_xk - 2.0 * qalfa * c2) + hn * (qalfa * qalfa)) - xk * xk);
}

real_T corfactorRAW(const emlrtStack *sp, real_T n, real_T alpha)
{
  static const int32_T iv[2] = {1, 17};
  static const int32_T iv1[2] = {1, 44};
  static const int32_T iv2[2] = {1, 36};
  static const int32_T iv3[2] = {1, 69};
  static const int32_T iv4[2] = {1, 75};
  static const int32_T iv5[2] = {1, 51};
  static const char_T u[44] = {
      'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ', 'p', 'r', 'o', 'b', 'l', 'e',
      'm', ' ', 'i', 'n', ' ', 's', 'u', 'b', 'f', 'u', 'n', 'c', 't', 'i', 'o',
      'n', ' ', 'c', 'o', 'r', 'f', 'a', 'c', 't', 'o', 'r', 'R', 'A', 'W'};
  static const char_T varargin_2[36] = {
      'C', 'o', 'n', 'd', 'i', 't', 'i', 'o', 'n', ' ', '1', '-',
      'a', 'l', 'p', 'h', 'a', '>', '=', '0', '.', '5', ' ', 'n',
      'o', 't', ' ', 'r', 'e', 's', 'p', 'e', 'c', 't', 'e', 'd'};
  static const char_T varargin_1[17] = {'F', 'S', 'D', 'A', ':', 'L',
                                        'X', 'S', ':', 'W', 'r', 'o',
                                        'n', 'g', 'B', 'd', 'p'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  real_T fp_500_n;
  real_T fp_875_n;
  real_T fp_alpha_n;
  real_T rawcorfac;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  /*  corfactorRAW function */
  st.site = &xfb_emlrtRSI;
  b_st.site = &dl_emlrtRSI;
  c_st.site = &el_emlrtRSI;
  if (n < 0.0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &rb_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  fp_500_n =
      1.0 - 1.2995580068132053 / muDoubleScalarPower(n, 0.604756680630497);
  st.site = &yfb_emlrtRSI;
  b_st.site = &dl_emlrtRSI;
  fp_875_n =
      1.0 - 0.70357229237653807 / muDoubleScalarPower(n, 1.01646567502486);
  if ((0.5 <= alpha) && (alpha <= 0.875)) {
    fp_alpha_n = fp_500_n + (fp_875_n - fp_500_n) / 0.375 * (alpha - 0.5);
  } else if ((0.875 < alpha) && (alpha < 1.0)) {
    fp_alpha_n = fp_875_n + (1.0 - fp_875_n) / 0.125 * (alpha - 0.875);
  } else {
    st.site = &agb_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 17, m, &varargin_1[0]);
    emlrtAssign(&y, m);
    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 36, m, &varargin_2[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &jib_emlrtRSI;
    o_error(&b_st, y, c_y, &d_emlrtMCI);
  }
  rawcorfac = 1.0 / fp_alpha_n;
  if ((rawcorfac <= 0.0) || (rawcorfac > 50.0)) {
    rawcorfac = 1.0;
    /*  if msg==1 */
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 44, m, &u[0]);
    emlrtAssign(&b_y, m);
    st.site = &fib_emlrtRSI;
    disp(&st, b_y, &jb_emlrtMCI);
    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 69, m, &cv15[0]);
    emlrtAssign(&d_y, m);
    st.site = &eib_emlrtRSI;
    disp(&st, d_y, &kb_emlrtMCI);
    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 75, m, &cv16[0]);
    emlrtAssign(&e_y, m);
    st.site = &dib_emlrtRSI;
    disp(&st, e_y, &lb_emlrtMCI);
    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 51, m, &cv17[0]);
    emlrtAssign(&f_y, m);
    st.site = &cib_emlrtRSI;
    disp(&st, f_y, &mb_emlrtMCI);
    /*  end */
  }
  return rawcorfac;
}

real_T corfactorREW(const emlrtStack *sp, real_T n, real_T alpha)
{
  static const int32_T iv[2] = {1, 44};
  static const int32_T iv1[2] = {1, 69};
  static const int32_T iv2[2] = {1, 75};
  static const int32_T iv3[2] = {1, 51};
  static const char_T u[44] = {
      'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ', 'p', 'r', 'o', 'b', 'l', 'e',
      'm', ' ', 'i', 'n', ' ', 's', 'u', 'b', 'f', 'u', 'n', 'c', 't', 'i', 'o',
      'n', ' ', 'c', 'o', 'r', 'f', 'a', 'c', 't', 'o', 'r', 'R', 'E', 'W'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  real_T fp_500_n;
  real_T fp_875_n;
  real_T rewcorfac;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  /*  corfactorREW function */
  st.site = &sgb_emlrtRSI;
  b_st.site = &dl_emlrtRSI;
  c_st.site = &el_emlrtRSI;
  if (n < 0.0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &rb_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  fp_500_n = 1.0 - 3.0373378792330419 / muDoubleScalarPower(n, 1.5182890270453);
  st.site = &tgb_emlrtRSI;
  b_st.site = &dl_emlrtRSI;
  fp_875_n =
      1.0 - 0.51660962465337334 / muDoubleScalarPower(n, 0.88939595831888);
  if ((0.5 <= alpha) && (alpha <= 0.875)) {
    fp_500_n += (fp_875_n - fp_500_n) / 0.375 * (alpha - 0.5);
  } else if ((0.875 < alpha) && (alpha < 1.0)) {
    fp_500_n = fp_875_n + (1.0 - fp_875_n) / 0.125 * (alpha - 0.875);
  } else {
    fp_500_n = 1.0;
  }
  rewcorfac = 1.0 / fp_500_n;
  if ((rewcorfac <= 0.0) || (rewcorfac > 50.0)) {
    rewcorfac = 1.0;
    /*  if msg==1 */
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 44, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &bib_emlrtRSI;
    disp(&st, y, &nb_emlrtMCI);
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 69, m, &cv15[0]);
    emlrtAssign(&b_y, m);
    st.site = &aib_emlrtRSI;
    disp(&st, b_y, &ob_emlrtMCI);
    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 75, m, &cv16[0]);
    emlrtAssign(&c_y, m);
    st.site = &yhb_emlrtRSI;
    disp(&st, c_y, &pb_emlrtMCI);
    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 51, m, &cv17[0]);
    emlrtAssign(&d_y, m);
    st.site = &xhb_emlrtRSI;
    disp(&st, d_y, &qb_emlrtMCI);
    /*  end */
  }
  return rewcorfac;
}

/* End of code generation (LXS.c) */
