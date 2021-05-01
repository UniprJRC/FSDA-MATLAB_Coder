/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tinv.c
 *
 * Code generation for function 'tinv'
 *
 */

/* Include files */
#include "tinv.h"
#include "FSRfan_wrapper_data.h"
#include "FSRfan_wrapper_mexutil.h"
#include "eml_betainc.h"
#include "gammaln.h"
#include "norminv.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ho_emlrtRSI = {
    48,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo io_emlrtRSI = {
    47,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo jo_emlrtRSI = {
    46,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo ko_emlrtRSI = {
    44,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo lo_emlrtRSI = {
    43,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo mo_emlrtRSI = {
    42,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo no_emlrtRSI = {
    41,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo oo_emlrtRSI = {
    38,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo po_emlrtRSI = {
    35,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo qo_emlrtRSI = {
    32,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo ro_emlrtRSI =
    {
        22,           /* lineNo */
        "betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo so_emlrtRSI =
    {
        33,           /* lineNo */
        "betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo to_emlrtRSI =
    {
        37,           /* lineNo */
        "betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo uo_emlrtRSI =
    {
        40,           /* lineNo */
        "betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo vo_emlrtRSI =
    {
        98,           /* lineNo */
        "betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo wo_emlrtRSI =
    {
        204,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo xo_emlrtRSI =
    {
        215,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo yo_emlrtRSI =
    {
        222,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo ap_emlrtRSI =
    {
        255,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo bp_emlrtRSI =
    {
        260,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo cp_emlrtRSI =
    {
        281,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo dp_emlrtRSI =
    {
        284,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo ep_emlrtRSI =
    {
        294,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo fp_emlrtRSI =
    {
        304,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo gp_emlrtRSI =
    {
        322,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

static emlrtRSInfo hp_emlrtRSI =
    {
        321,              /* lineNo */
        "eml_betaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betaincinv."
        "m" /* pathName */
};

/* Function Definitions */
real_T tinv(const emlrtStack *sp, real_T v)
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 7};
  static const char_T rfmt[7] = {'%', '2', '3', '.', '1', '5', 'e'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  real_T a;
  real_T lbeta;
  real_T oldf;
  real_T oldz;
  real_T x;
  real_T xn3;
  real_T xn5;
  real_T xn7;
  real_T zhi;
  real_T zlo;
  int32_T i;
  char_T b_str[23];
  char_T c_str[23];
  char_T str[23];
  boolean_T exitg1;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (v > 0.0) {
    if (v == 1.0) {
      x = 63.6567411628717;
    } else if (v < 1000.0) {
      st.site = &qo_emlrtRSI;
      a = v / 2.0;
      b_st.site = &ro_emlrtRSI;
      xn3 = a;
      b_st.site = &so_emlrtRSI;
      gammaln(&b_st, &xn3);
      xn5 = 0.5;
      b_st.site = &to_emlrtRSI;
      gammaln(&b_st, &xn5);
      xn7 = a + 0.5;
      b_st.site = &uo_emlrtRSI;
      gammaln(&b_st, &xn7);
      lbeta = (xn3 + xn5) - xn7;
      b_st.site = &vo_emlrtRSI;
      if (a == 0.0) {
        xn3 = 1.0;
      } else {
        c_st.site = &wo_emlrtRSI;
        c_st.site = &wo_emlrtRSI;
        c_st.site = &xo_emlrtRSI;
        xn3 = ((4.0 * a + 1.0) - 2.0) / 6.5922458910395259;
        if (xn3 > 1.0) {
          xn3 = 1.0 - 2.0 / (xn3 + 1.0);
        } else {
          c_st.site = &yo_emlrtRSI;
          xn3 = muDoubleScalarExp(
              (muDoubleScalarLog(0.010000000000000009 * a) + lbeta) / a);
        }
        xn3 = muDoubleScalarMin(muDoubleScalarMax(xn3, 0.0001), 0.9999);
        oldf = rtInf;
        oldz = rtInf;
        zlo = 0.0;
        zhi = 1.0;
        i = 0;
        exitg1 = false;
        while ((!exitg1) && (i < 1000)) {
          c_st.site = &ap_emlrtRSI;
          xn5 = eml_betainc(&c_st, xn3, a, 0.5, lbeta, false) -
                0.010000000000000009;
          if ((xn5 * oldf < 0.0) &&
              (muDoubleScalarAbs(oldf) <= muDoubleScalarAbs(xn5))) {
            xn3 = 0.5 * (xn3 + oldz);
            c_st.site = &bp_emlrtRSI;
            xn5 = eml_betainc(&c_st, xn3, a, 0.5, lbeta, false) -
                  0.010000000000000009;
          }
          if (xn5 > 0.0) {
            zhi = xn3;
          } else {
            zlo = xn3;
          }
          if ((muDoubleScalarAbs(xn5) < 2.2204460492503151E-16) ||
              (muDoubleScalarAbs(xn3 - oldz) <
               2.2204460492503131E-16 * xn3 + 2.2250738585072014E-308)) {
            exitg1 = true;
          } else {
            guard1 = false;
            guard2 = false;
            if (i < 200) {
              oldz = xn3;
              oldf = xn5;
              c_st.site = &cp_emlrtRSI;
              if (xn3 < 0.0) {
                emlrtErrorWithMessageIdR2018a(
                    &c_st, &jb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                    "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
              }
              if (1.0 - xn3 != 1.0) {
                c_st.site = &dp_emlrtRSI;
                if (1.0 - xn3 < 0.0) {
                  emlrtErrorWithMessageIdR2018a(
                      &c_st, &jb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                      "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
                }
                xn7 =
                    muDoubleScalarLog(1.0 - xn3) * (-xn3 / ((1.0 - xn3) - 1.0));
              } else {
                xn7 = -xn3;
              }
              xn3 -=
                  xn5 / muDoubleScalarExp(
                            ((a - 1.0) * muDoubleScalarLog(xn3) + -0.5 * xn7) -
                            lbeta);
              if (xn3 <= zlo) {
                if (zlo == 0.0) {
                  c_st.site = &ep_emlrtRSI;
                  x = eml_betainc(&c_st, 2.2250738585072014E-308, a, 0.5, lbeta,
                                  false) -
                      0.010000000000000009;
                  if (0.010000000000000009 < muDoubleScalarAbs(x)) {
                    xn3 = 0.0;
                    exitg1 = true;
                  } else {
                    zlo = 2.2250738585072014E-308;
                    guard2 = true;
                  }
                } else {
                  guard2 = true;
                }
              } else if (xn3 >= zhi) {
                if (zhi == 1.0) {
                  c_st.site = &fp_emlrtRSI;
                  x = eml_betainc(&c_st, 0.99999999999999989, a, 0.5, lbeta,
                                  false) -
                      0.010000000000000009;
                  if (0.99 < muDoubleScalarAbs(x)) {
                    xn3 = 1.0;
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
              xn3 = 0.5 * (zlo + zhi);
              i++;
            }
            if (guard2) {
              xn3 = 0.99 * zlo + 0.01 * zhi;
              i++;
            }
            if (guard1) {
              xn3 = 0.01 * zlo + 0.99 * zhi;
              i++;
            }
          }
        }
        if (i >= 1000) {
          c_st.site = &gp_emlrtRSI;
          y = NULL;
          m = emlrtCreateCharArray(2, &iv[0]);
          emlrtInitCharArrayR2013a(&c_st, 7, m, &rfmt[0]);
          emlrtAssign(&y, m);
          b_y = NULL;
          m = emlrtCreateDoubleScalar(0.99);
          emlrtAssign(&b_y, m);
          d_st.site = &nu_emlrtRSI;
          g_emlrt_marshallIn(&d_st, b_sprintf(&d_st, y, b_y, &s_emlrtMCI),
                             "<output of sprintf>", str);
          c_st.site = &gp_emlrtRSI;
          c_y = NULL;
          m = emlrtCreateCharArray(2, &iv1[0]);
          emlrtInitCharArrayR2013a(&c_st, 7, m, &rfmt[0]);
          emlrtAssign(&c_y, m);
          d_y = NULL;
          m = emlrtCreateDoubleScalar(a);
          emlrtAssign(&d_y, m);
          d_st.site = &nu_emlrtRSI;
          g_emlrt_marshallIn(&d_st, b_sprintf(&d_st, c_y, d_y, &s_emlrtMCI),
                             "<output of sprintf>", b_str);
          c_st.site = &gp_emlrtRSI;
          e_y = NULL;
          m = emlrtCreateCharArray(2, &iv2[0]);
          emlrtInitCharArrayR2013a(&c_st, 7, m, &rfmt[0]);
          emlrtAssign(&e_y, m);
          f_y = NULL;
          m = emlrtCreateDoubleScalar(0.5);
          emlrtAssign(&f_y, m);
          d_st.site = &nu_emlrtRSI;
          g_emlrt_marshallIn(&d_st, b_sprintf(&d_st, e_y, f_y, &s_emlrtMCI),
                             "<output of sprintf>", c_str);
          c_st.site = &hp_emlrtRSI;
          e_warning(&c_st, str, b_str, c_str);
        }
      }
      st.site = &po_emlrtRSI;
      x = v * ((1.0 - xn3) / xn3);
      if (x < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &st, &kb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      x = muDoubleScalarSqrt(x);
    } else {
      st.site = &oo_emlrtRSI;
      x = norminv(0.995);
      if (v < 6.6457388829771584E+75) {
        st.site = &no_emlrtRSI;
        b_st.site = &jl_emlrtRSI;
        c_st.site = &rf_emlrtRSI;
        xn3 = muDoubleScalarPower(x, 3.0);
        st.site = &mo_emlrtRSI;
        b_st.site = &jl_emlrtRSI;
        c_st.site = &rf_emlrtRSI;
        xn5 = muDoubleScalarPower(x, 5.0);
        st.site = &lo_emlrtRSI;
        b_st.site = &jl_emlrtRSI;
        c_st.site = &rf_emlrtRSI;
        xn7 = muDoubleScalarPower(x, 7.0);
        st.site = &ko_emlrtRSI;
        b_st.site = &jl_emlrtRSI;
        c_st.site = &rf_emlrtRSI;
        st.site = &jo_emlrtRSI;
        b_st.site = &jl_emlrtRSI;
        c_st.site = &rf_emlrtRSI;
        st.site = &io_emlrtRSI;
        b_st.site = &jl_emlrtRSI;
        c_st.site = &rf_emlrtRSI;
        st.site = &ho_emlrtRSI;
        b_st.site = &jl_emlrtRSI;
        c_st.site = &rf_emlrtRSI;
        x = (((x + (xn3 + x) / (4.0 * v)) +
              ((5.0 * xn5 + 16.0 * xn3) + 3.0 * x) /
                  (96.0 * muDoubleScalarPower(v, 2.0))) +
             (((3.0 * xn7 + 19.0 * xn5) + 17.0 * xn3) - 15.0 * x) /
                 (384.0 * muDoubleScalarPower(v, 3.0))) +
            ((((79.0 * muDoubleScalarPower(x, 9.0) + 776.0 * xn7) +
               1482.0 * xn5) -
              1920.0 * xn3) -
             945.0 * x) /
                (92160.0 * muDoubleScalarPower(v, 4.0));
      }
    }
  } else {
    x = rtNaN;
  }
  return x;
}

/* End of code generation (tinv.c) */
