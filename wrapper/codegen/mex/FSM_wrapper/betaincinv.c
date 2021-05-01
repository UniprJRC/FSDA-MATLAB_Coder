/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * betaincinv.c
 *
 * Code generation for function 'betaincinv'
 *
 */

/* Include files */
#include "betaincinv.h"
#include "FSM_wrapper_data.h"
#include "FSM_wrapper_mexutil.h"
#include "eml_betainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ym_emlrtRSI =
    {
        22,           /* lineNo */
        "betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo an_emlrtRSI =
    {
        33,           /* lineNo */
        "betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo bn_emlrtRSI =
    {
        37,           /* lineNo */
        "betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo cn_emlrtRSI =
    {
        40,           /* lineNo */
        "betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo dn_emlrtRSI =
    {
        98,           /* lineNo */
        "betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo en_emlrtRSI =
    {
        321,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo fn_emlrtRSI =
    {
        322,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo gn_emlrtRSI =
    {
        304,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo hn_emlrtRSI =
    {
        294,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo in_emlrtRSI =
    {
        284,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo jn_emlrtRSI =
    {
        281,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo kn_emlrtRSI =
    {
        260,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo ln_emlrtRSI =
    {
        255,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo mn_emlrtRSI =
    {
        225,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo nn_emlrtRSI =
    {
        222,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo on_emlrtRSI =
    {
        215,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo pn_emlrtRSI =
    {
        211,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo qn_emlrtRSI =
    {
        204,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

/* Function Definitions */
creal_T b_betaincinv(const emlrtStack *sp, real_T x, real_T a, real_T b)
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 7};
  static const char_T rfmt[7] = {'%', '2', '3', '.', '1', '5', 'e'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *m;
  creal_T y;
  real_T b_x;
  real_T b_y;
  real_T ftol1;
  real_T glna1;
  real_T glnb1;
  real_T lbeta;
  real_T p;
  real_T r;
  real_T t;
  real_T zhi;
  real_T zlo;
  int32_T i;
  int32_T sgn;
  char_T b_str[23];
  char_T c_str[23];
  char_T str[23];
  boolean_T exitg1;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T upper;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ym_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  glna1 = a;
  st.site = &an_emlrtRSI;
  gammaln(&st, &glna1);
  glnb1 = b;
  st.site = &bn_emlrtRSI;
  gammaln(&st, &glnb1);
  r = a + b;
  st.site = &cn_emlrtRSI;
  gammaln(&st, &r);
  lbeta = (glna1 + glnb1) - r;
  st.site = &dn_emlrtRSI;
  p = x;
  upper = false;
  if ((0.0 < x) && (x < 1.0)) {
    if (a == 0.0) {
      if (b > 0.0) {
        glna1 = 0.0;
      } else {
        glna1 = rtNaN;
      }
    } else if (b == 0.0) {
      glna1 = 1.0;
    } else if (a == rtInf) {
      if (b < rtInf) {
        glna1 = 1.0;
      } else {
        glna1 = rtNaN;
      }
    } else if (b == rtInf) {
      glna1 = 0.0;
    } else {
      if (x > 0.5) {
        p = 1.0 - x;
        upper = true;
        glna1 = 1.0 - (1.0 - x);
      } else {
        glna1 = x;
      }
      b_st.site = &qn_emlrtRSI;
      b_st.site = &qn_emlrtRSI;
      r = muDoubleScalarSqrt(-2.0 * muDoubleScalarLog(glna1));
      b_y = r - (0.27061 * r + 2.30753) / ((0.04481 * r + 0.99229) * r + 1.0);
      if ((a > 1.0) && (b > 1.0)) {
        r = (b_y * b_y - 3.0) / 6.0;
        glna1 = 1.0 / (2.0 * a - 1.0);
        t = 1.0 / (2.0 * b - 1.0);
        glnb1 = 2.0 / (glna1 + t);
        b_st.site = &pn_emlrtRSI;
        b_x = glnb1 + r;
        if (b_x < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &x_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        b_x = muDoubleScalarSqrt(b_x);
        glna1 =
            a / (a + b * muDoubleScalarExp(
                             2.0 * (b_y * b_x / glnb1 -
                                    (t - glna1) * ((r + 0.83333333333333337) -
                                                   2.0 / (3.0 * glnb1)))));
      } else {
        r = 2.0 * b;
        t = 1.0 / (9.0 * b);
        b_st.site = &on_emlrtRSI;
        if (t < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &x_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        t = (1.0 - t) + b_y * muDoubleScalarSqrt(t);
        t *= r * t * t;
        if (t > 0.0) {
          t = ((4.0 * a + r) - 2.0) / t;
          if (t > 1.0) {
            glna1 = 1.0 - 2.0 / (t + 1.0);
          } else {
            b_st.site = &nn_emlrtRSI;
            b_x = glna1 * a;
            if (b_x < 0.0) {
              emlrtErrorWithMessageIdR2018a(
                  &b_st, &v_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                  "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
            }
            b_x = muDoubleScalarLog(b_x);
            glna1 = muDoubleScalarExp((b_x + lbeta) / a);
          }
        } else {
          b_st.site = &mn_emlrtRSI;
          b_x = (1.0 - glna1) * b;
          if (b_x < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &v_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
          }
          b_x = muDoubleScalarLog(b_x);
          glna1 = 1.0 - muDoubleScalarExp((b_x + lbeta) / b);
        }
      }
      glna1 = muDoubleScalarMin(muDoubleScalarMax(glna1, 0.0001), 0.9999);
      b_y = rtInf;
      t = rtInf;
      if (p > 1.0021E-294) {
        ftol1 = 2.2204460492503131E-14 * p;
      } else {
        ftol1 = 2.2251089859537388E-308;
      }
      if (upper) {
        sgn = -1;
      } else {
        sgn = 1;
      }
      zlo = 0.0;
      zhi = 1.0;
      i = 0;
      exitg1 = false;
      while ((!exitg1) && (i < 1000)) {
        b_st.site = &ln_emlrtRSI;
        glnb1 =
            (real_T)sgn * (eml_betainc(&b_st, glna1, a, b, lbeta, upper) - p);
        if ((glnb1 * b_y < 0.0) &&
            (muDoubleScalarAbs(b_y) <= muDoubleScalarAbs(glnb1))) {
          glna1 = 0.5 * (glna1 + t);
          b_st.site = &kn_emlrtRSI;
          glnb1 =
              (real_T)sgn * (eml_betainc(&b_st, glna1, a, b, lbeta, upper) - p);
        }
        if (glnb1 > 0.0) {
          zhi = glna1;
        } else {
          zlo = glna1;
        }
        if ((muDoubleScalarAbs(glnb1) < ftol1) ||
            (muDoubleScalarAbs(glna1 - t) <
             2.2204460492503131E-16 * glna1 + 2.2250738585072014E-308)) {
          exitg1 = true;
        } else {
          guard1 = false;
          guard2 = false;
          if (i < 200) {
            t = glna1;
            b_y = glnb1;
            b_st.site = &jn_emlrtRSI;
            if (glna1 < 0.0) {
              emlrtErrorWithMessageIdR2018a(
                  &b_st, &v_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                  "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
            }
            if (1.0 - glna1 != 1.0) {
              b_st.site = &in_emlrtRSI;
              if (1.0 - glna1 < 0.0) {
                emlrtErrorWithMessageIdR2018a(
                    &b_st, &v_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                    "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
              }
              r = muDoubleScalarLog(1.0 - glna1) *
                  (-glna1 / ((1.0 - glna1) - 1.0));
            } else {
              r = -glna1;
            }
            glna1 -= glnb1 /
                     muDoubleScalarExp(((a - 1.0) * muDoubleScalarLog(glna1) +
                                        (b - 1.0) * r) -
                                       lbeta);
            if (glna1 <= zlo) {
              if (zlo == 0.0) {
                b_st.site = &hn_emlrtRSI;
                b_x = eml_betainc(&b_st, 2.2250738585072014E-308, a, b, lbeta,
                                  upper) -
                      p;
                if (muDoubleScalarAbs((real_T)upper - p) <
                    muDoubleScalarAbs(b_x)) {
                  glna1 = 0.0;
                  exitg1 = true;
                } else {
                  zlo = 2.2250738585072014E-308;
                  guard2 = true;
                }
              } else {
                guard2 = true;
              }
            } else if (glna1 >= zhi) {
              if (zhi == 1.0) {
                b_st.site = &gn_emlrtRSI;
                b_x = eml_betainc(&b_st, 0.99999999999999989, a, b, lbeta,
                                  upper) -
                      p;
                if (muDoubleScalarAbs((1.0 - (real_T)upper) - p) <
                    muDoubleScalarAbs(b_x)) {
                  glna1 = 1.0;
                  exitg1 = true;
                } else {
                  zhi = 0.99999999999999989;
                  guard1 = true;
                }
              } else {
                guard1 = true;
              }
            } else {
              i++;
            }
          } else {
            glna1 = 0.5 * (zlo + zhi);
            i++;
          }
          if (guard2) {
            glna1 = 0.99 * zlo + 0.01 * zhi;
            i++;
          }
          if (guard1) {
            glna1 = 0.01 * zlo + 0.99 * zhi;
            i++;
          }
        }
      }
      if (i >= 1000) {
        b_st.site = &fn_emlrtRSI;
        c_y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a(&b_st, 7, m, &rfmt[0]);
        emlrtAssign(&c_y, m);
        d_y = NULL;
        m = emlrtCreateDoubleScalar(x);
        emlrtAssign(&d_y, m);
        c_st.site = &qeb_emlrtRSI;
        c_emlrt_marshallIn(&c_st, b_sprintf(&c_st, c_y, d_y, &yb_emlrtMCI),
                           "<output of sprintf>", str);
        b_st.site = &fn_emlrtRSI;
        e_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&b_st, 7, m, &rfmt[0]);
        emlrtAssign(&e_y, m);
        f_y = NULL;
        m = emlrtCreateDoubleScalar(a);
        emlrtAssign(&f_y, m);
        c_st.site = &qeb_emlrtRSI;
        c_emlrt_marshallIn(&c_st, b_sprintf(&c_st, e_y, f_y, &yb_emlrtMCI),
                           "<output of sprintf>", b_str);
        b_st.site = &fn_emlrtRSI;
        g_y = NULL;
        m = emlrtCreateCharArray(2, &iv2[0]);
        emlrtInitCharArrayR2013a(&b_st, 7, m, &rfmt[0]);
        emlrtAssign(&g_y, m);
        h_y = NULL;
        m = emlrtCreateDoubleScalar(b);
        emlrtAssign(&h_y, m);
        c_st.site = &qeb_emlrtRSI;
        c_emlrt_marshallIn(&c_st, b_sprintf(&c_st, g_y, h_y, &yb_emlrtMCI),
                           "<output of sprintf>", c_str);
        b_st.site = &en_emlrtRSI;
        c_warning(&b_st, str, b_str, c_str);
      }
    }
  } else if (x == 0.0) {
    glna1 = 0.0;
  } else if (x == 1.0) {
    glna1 = 1.0;
  } else {
    glna1 = rtNaN;
  }
  y.re = glna1;
  y.im = 0.0;
  return y;
}

creal_T betaincinv(const emlrtStack *sp, real_T x, real_T a, real_T b)
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 7};
  static const char_T rfmt[7] = {'%', '2', '3', '.', '1', '5', 'e'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *m;
  creal_T y;
  real_T b_x;
  real_T b_y;
  real_T ftol1;
  real_T glna1;
  real_T glnb1;
  real_T lbeta;
  real_T p;
  real_T r;
  real_T t;
  real_T zhi;
  real_T zlo;
  int32_T i;
  int32_T sgn;
  char_T b_str[23];
  char_T c_str[23];
  char_T str[23];
  boolean_T exitg1;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T upper;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ym_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  glna1 = a;
  st.site = &an_emlrtRSI;
  gammaln(&st, &glna1);
  glnb1 = b;
  st.site = &bn_emlrtRSI;
  gammaln(&st, &glnb1);
  r = a + b;
  st.site = &cn_emlrtRSI;
  gammaln(&st, &r);
  lbeta = (glna1 + glnb1) - r;
  st.site = &dn_emlrtRSI;
  p = x;
  upper = true;
  if ((0.0 < x) && (x < 1.0)) {
    if (a == 0.0) {
      if (b > 0.0) {
        glna1 = 1.0;
      } else {
        glna1 = rtNaN;
      }
    } else if (b == 0.0) {
      glna1 = 0.0;
    } else if (a == rtInf) {
      if (b < rtInf) {
        glna1 = 0.0;
      } else {
        glna1 = rtNaN;
      }
    } else if (b == rtInf) {
      glna1 = 1.0;
    } else {
      if (x > 0.5) {
        p = 1.0 - x;
        upper = false;
        glna1 = 1.0 - x;
      } else {
        glna1 = 1.0 - x;
        if (1.0 - x == 1.0) {
          glna1 = 0.9999999999999778;
        }
      }
      b_st.site = &qn_emlrtRSI;
      b_st.site = &qn_emlrtRSI;
      r = muDoubleScalarSqrt(-2.0 * muDoubleScalarLog(glna1));
      b_y = r - (0.27061 * r + 2.30753) / ((0.04481 * r + 0.99229) * r + 1.0);
      if ((a > 1.0) && (b > 1.0)) {
        r = (b_y * b_y - 3.0) / 6.0;
        glna1 = 1.0 / (2.0 * a - 1.0);
        t = 1.0 / (2.0 * b - 1.0);
        glnb1 = 2.0 / (glna1 + t);
        b_st.site = &pn_emlrtRSI;
        b_x = glnb1 + r;
        if (b_x < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &x_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        b_x = muDoubleScalarSqrt(b_x);
        glna1 =
            a / (a + b * muDoubleScalarExp(
                             2.0 * (b_y * b_x / glnb1 -
                                    (t - glna1) * ((r + 0.83333333333333337) -
                                                   2.0 / (3.0 * glnb1)))));
      } else {
        r = 2.0 * b;
        t = 1.0 / (9.0 * b);
        b_st.site = &on_emlrtRSI;
        if (t < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &x_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        t = (1.0 - t) + b_y * muDoubleScalarSqrt(t);
        t *= r * t * t;
        if (t > 0.0) {
          t = ((4.0 * a + r) - 2.0) / t;
          if (t > 1.0) {
            glna1 = 1.0 - 2.0 / (t + 1.0);
          } else {
            b_st.site = &nn_emlrtRSI;
            b_x = glna1 * a;
            if (b_x < 0.0) {
              emlrtErrorWithMessageIdR2018a(
                  &b_st, &v_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                  "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
            }
            b_x = muDoubleScalarLog(b_x);
            glna1 = muDoubleScalarExp((b_x + lbeta) / a);
          }
        } else {
          b_st.site = &mn_emlrtRSI;
          b_x = (1.0 - glna1) * b;
          if (b_x < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &v_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
          }
          b_x = muDoubleScalarLog(b_x);
          glna1 = 1.0 - muDoubleScalarExp((b_x + lbeta) / b);
        }
      }
      glna1 = muDoubleScalarMin(muDoubleScalarMax(glna1, 0.0001), 0.9999);
      b_y = rtInf;
      t = rtInf;
      if (p > 1.0021E-294) {
        ftol1 = 2.2204460492503131E-14 * p;
      } else {
        ftol1 = 2.2251089859537388E-308;
      }
      if (upper) {
        sgn = -1;
      } else {
        sgn = 1;
      }
      zlo = 0.0;
      zhi = 1.0;
      i = 0;
      exitg1 = false;
      while ((!exitg1) && (i < 1000)) {
        b_st.site = &ln_emlrtRSI;
        glnb1 =
            (real_T)sgn * (eml_betainc(&b_st, glna1, a, b, lbeta, upper) - p);
        if ((glnb1 * b_y < 0.0) &&
            (muDoubleScalarAbs(b_y) <= muDoubleScalarAbs(glnb1))) {
          glna1 = 0.5 * (glna1 + t);
          b_st.site = &kn_emlrtRSI;
          glnb1 =
              (real_T)sgn * (eml_betainc(&b_st, glna1, a, b, lbeta, upper) - p);
        }
        if (glnb1 > 0.0) {
          zhi = glna1;
        } else {
          zlo = glna1;
        }
        if ((muDoubleScalarAbs(glnb1) < ftol1) ||
            (muDoubleScalarAbs(glna1 - t) <
             2.2204460492503131E-16 * glna1 + 2.2250738585072014E-308)) {
          exitg1 = true;
        } else {
          guard1 = false;
          guard2 = false;
          if (i < 200) {
            t = glna1;
            b_y = glnb1;
            b_st.site = &jn_emlrtRSI;
            if (glna1 < 0.0) {
              emlrtErrorWithMessageIdR2018a(
                  &b_st, &v_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                  "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
            }
            if (1.0 - glna1 != 1.0) {
              b_st.site = &in_emlrtRSI;
              if (1.0 - glna1 < 0.0) {
                emlrtErrorWithMessageIdR2018a(
                    &b_st, &v_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                    "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
              }
              r = muDoubleScalarLog(1.0 - glna1) *
                  (-glna1 / ((1.0 - glna1) - 1.0));
            } else {
              r = -glna1;
            }
            glna1 -= glnb1 /
                     muDoubleScalarExp(((a - 1.0) * muDoubleScalarLog(glna1) +
                                        (b - 1.0) * r) -
                                       lbeta);
            if (glna1 <= zlo) {
              if (zlo == 0.0) {
                b_st.site = &hn_emlrtRSI;
                b_x = eml_betainc(&b_st, 2.2250738585072014E-308, a, b, lbeta,
                                  upper) -
                      p;
                if (muDoubleScalarAbs((real_T)upper - p) <
                    muDoubleScalarAbs(b_x)) {
                  glna1 = 0.0;
                  exitg1 = true;
                } else {
                  zlo = 2.2250738585072014E-308;
                  guard2 = true;
                }
              } else {
                guard2 = true;
              }
            } else if (glna1 >= zhi) {
              if (zhi == 1.0) {
                b_st.site = &gn_emlrtRSI;
                b_x = eml_betainc(&b_st, 0.99999999999999989, a, b, lbeta,
                                  upper) -
                      p;
                if (muDoubleScalarAbs((1.0 - (real_T)upper) - p) <
                    muDoubleScalarAbs(b_x)) {
                  glna1 = 1.0;
                  exitg1 = true;
                } else {
                  zhi = 0.99999999999999989;
                  guard1 = true;
                }
              } else {
                guard1 = true;
              }
            } else {
              i++;
            }
          } else {
            glna1 = 0.5 * (zlo + zhi);
            i++;
          }
          if (guard2) {
            glna1 = 0.99 * zlo + 0.01 * zhi;
            i++;
          }
          if (guard1) {
            glna1 = 0.01 * zlo + 0.99 * zhi;
            i++;
          }
        }
      }
      if (i >= 1000) {
        b_st.site = &fn_emlrtRSI;
        c_y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a(&b_st, 7, m, &rfmt[0]);
        emlrtAssign(&c_y, m);
        d_y = NULL;
        m = emlrtCreateDoubleScalar(x);
        emlrtAssign(&d_y, m);
        c_st.site = &qeb_emlrtRSI;
        c_emlrt_marshallIn(&c_st, b_sprintf(&c_st, c_y, d_y, &yb_emlrtMCI),
                           "<output of sprintf>", str);
        b_st.site = &fn_emlrtRSI;
        e_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&b_st, 7, m, &rfmt[0]);
        emlrtAssign(&e_y, m);
        f_y = NULL;
        m = emlrtCreateDoubleScalar(a);
        emlrtAssign(&f_y, m);
        c_st.site = &qeb_emlrtRSI;
        c_emlrt_marshallIn(&c_st, b_sprintf(&c_st, e_y, f_y, &yb_emlrtMCI),
                           "<output of sprintf>", b_str);
        b_st.site = &fn_emlrtRSI;
        g_y = NULL;
        m = emlrtCreateCharArray(2, &iv2[0]);
        emlrtInitCharArrayR2013a(&b_st, 7, m, &rfmt[0]);
        emlrtAssign(&g_y, m);
        h_y = NULL;
        m = emlrtCreateDoubleScalar(b);
        emlrtAssign(&h_y, m);
        c_st.site = &qeb_emlrtRSI;
        c_emlrt_marshallIn(&c_st, b_sprintf(&c_st, g_y, h_y, &yb_emlrtMCI),
                           "<output of sprintf>", c_str);
        b_st.site = &en_emlrtRSI;
        c_warning(&b_st, str, b_str, c_str);
      }
    }
  } else if (x == 0.0) {
    glna1 = 1.0;
  } else if (x == 1.0) {
    glna1 = 0.0;
  } else {
    glna1 = rtNaN;
  }
  y.re = glna1;
  y.im = 0.0;
  return y;
}

/* End of code generation (betaincinv.c) */
