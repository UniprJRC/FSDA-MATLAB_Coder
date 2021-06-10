/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * gammaincinv.c
 *
 * Code generation for function 'gammaincinv'
 *
 */

/* Include files */
#include "gammaincinv.h"
#include "LXS_wrapper1_data.h"
#include "LXS_wrapper1_mexutil.h"
#include "eml_gammainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ln_emlrtRSI =
    {
        29,            /* lineNo */
        "gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo mn_emlrtRSI =
    {
        30,            /* lineNo */
        "gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo nn_emlrtRSI =
    {
        31,            /* lineNo */
        "gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo on_emlrtRSI =
    {
        34,            /* lineNo */
        "gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo vn_emlrtRSI =
    {
        322,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo wn_emlrtRSI =
    {
        323,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo xn_emlrtRSI =
    {
        308,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo yn_emlrtRSI =
    {
        291,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo ao_emlrtRSI =
    {
        284,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo bo_emlrtRSI =
    {
        266,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo co_emlrtRSI =
    {
        262,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo do_emlrtRSI =
    {
        237,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo eo_emlrtRSI =
    {
        233,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo fo_emlrtRSI =
    {
        230,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo go_emlrtRSI =
    {
        208,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo ho_emlrtRSI =
    {
        207,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo io_emlrtRSI =
    {
        201,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo jo_emlrtRSI =
    {
        196,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo ko_emlrtRSI =
    {
        405,      /* lineNo */
        "PHIinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo lo_emlrtRSI =
    {
        403,      /* lineNo */
        "PHIinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

/* Function Definitions */
creal_T gammaincinv(const emlrtStack *sp, real_T x, real_T a)
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 7};
  static const char_T rfmt[7] = {'%', '2', '3', '.', '1', '5', 'e'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  creal_T b;
  real_T la;
  real_T lga;
  real_T lgap1;
  real_T log1mpLower;
  real_T nu;
  real_T oldz;
  real_T p;
  real_T p1;
  real_T pLower;
  real_T r;
  real_T z;
  int32_T i;
  int32_T sgn;
  char_T b_str[23];
  char_T str[23];
  boolean_T exitg1;
  boolean_T guard1 = false;
  boolean_T upper;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ln_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (a < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &rb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
  }
  la = muDoubleScalarLog(a);
  lga = a;
  st.site = &mn_emlrtRSI;
  gammaln(&st, &lga);
  lgap1 = a + 1.0;
  st.site = &nn_emlrtRSI;
  gammaln(&st, &lgap1);
  st.site = &on_emlrtRSI;
  p = x;
  upper = false;
  if (a == rtInf) {
    z = rtInf;
  } else if (lga == rtInf) {
    z = a;
  } else {
    nu = 2.0 * a;
    if (x > 0.5) {
      p = 1.0 - x;
      upper = true;
      pLower = 1.0 - (1.0 - x);
      if (1.0 - (1.0 - x) == 1.0) {
        pLower = 0.9999999999999778;
      }
      b_st.site = &jo_emlrtRSI;
      if (1.0 - x < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &rb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
      }
      log1mpLower = muDoubleScalarLog(1.0 - x);
    } else {
      pLower = x;
      if (1.0 - x != 1.0) {
        b_st.site = &io_emlrtRSI;
        log1mpLower = muDoubleScalarLog(1.0 - x) * (-x / ((1.0 - x) - 1.0));
      } else {
        log1mpLower = -x;
      }
    }
    b_st.site = &ho_emlrtRSI;
    if (pLower < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &rb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
    }
    r = muDoubleScalarLog(pLower);
    if (nu < -1.24 * r) {
      b_st.site = &go_emlrtRSI;
      c_st.site = &dl_emlrtRSI;
      pLower = muDoubleScalarPower(
          pLower * muDoubleScalarExp(lgap1 + a * 0.693147180559945), 1.0 / a);
      if (pLower < 2.2250738585072014E-306) {
        pLower = 2.2250738585072014E-306;
      }
    } else if (nu <= 0.32) {
      pLower = 0.4;
      i = 0;
      exitg1 = false;
      while ((!exitg1) && (i < 200)) {
        oldz = pLower;
        p1 = pLower * (pLower + 4.67) + 1.0;
        r = pLower * (pLower * (pLower + 6.66) + 6.73);
        pLower -=
            (1.0 - muDoubleScalarExp(((log1mpLower + lga) + 0.5 * pLower) +
                                     (a - 1.0) * 0.693147180559945) *
                       r / p1) /
            (((2.0 * pLower + 4.67) / p1 + -0.5) -
             (pLower * (3.0 * pLower + 13.32) + 6.73) / r);
        if (muDoubleScalarAbs(oldz - pLower) < 0.01 * pLower) {
          exitg1 = true;
        } else {
          i++;
        }
      }
    } else {
      b_st.site = &fo_emlrtRSI;
      if (muDoubleScalarAbs(pLower - 0.5) <= 0.425) {
        r = 0.180625 - (pLower - 0.5) * (pLower - 0.5);
        z = (pLower - 0.5) *
            (((((((2509.0809287301227 * r + 33430.575583588128) * r +
                  67265.7709270087) *
                     r +
                 45921.95393154987) *
                    r +
                13731.693765509461) *
                   r +
               1971.5909503065513) *
                  r +
              133.14166789178438) *
                 r +
             3.3871328727963665) /
            (((((((5226.4952788528544 * r + 28729.085735721943) * r +
                  39307.895800092709) *
                     r +
                 21213.794301586597) *
                    r +
                5394.1960214247511) *
                   r +
               687.18700749205789) *
                  r +
              42.313330701600911) *
                 r +
             1.0);
      } else {
        if (pLower - 0.5 < 0.0) {
          c_st.site = &lo_emlrtRSI;
          c_st.site = &lo_emlrtRSI;
          if (-r < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &c_st, &tb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          r = muDoubleScalarSqrt(-r);
        } else {
          c_st.site = &ko_emlrtRSI;
          if (1.0 - pLower < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &c_st, &rb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
          }
          c_st.site = &ko_emlrtRSI;
          r = muDoubleScalarSqrt(-muDoubleScalarLog(1.0 - pLower));
        }
        if (r <= 5.0) {
          r -= 1.6;
          z = (((((((0.00077454501427834139 * r + 0.022723844989269184) * r +
                    0.24178072517745061) *
                       r +
                   1.2704582524523684) *
                      r +
                  3.6478483247632045) *
                     r +
                 5.769497221460691) *
                    r +
                4.6303378461565456) *
                   r +
               1.4234371107496835) /
              (((((((1.0507500716444169E-9 * r + 0.00054759380849953455) * r +
                    0.015198666563616457) *
                       r +
                   0.14810397642748008) *
                      r +
                  0.6897673349851) *
                     r +
                 1.6763848301838038) *
                    r +
                2.053191626637759) *
                   r +
               1.0);
        } else {
          r -= 5.0;
          z = (((((((2.0103343992922881E-7 * r + 2.7115555687434876E-5) * r +
                    0.0012426609473880784) *
                       r +
                   0.026532189526576124) *
                      r +
                  0.29656057182850487) *
                     r +
                 1.7848265399172913) *
                    r +
                5.4637849111641144) *
                   r +
               6.6579046435011033) /
              (((((((2.0442631033899397E-15 * r + 1.4215117583164459E-7) * r +
                    1.8463183175100548E-5) *
                       r +
                   0.00078686913114561329) *
                      r +
                  0.014875361290850615) *
                     r +
                 0.13692988092273581) *
                    r +
                0.599832206555888) *
                   r +
               1.0);
        }
        if (pLower - 0.5 < 0.0) {
          z = -z;
        }
      }
      p1 = 0.222222 / nu;
      b_st.site = &eo_emlrtRSI;
      pLower = (z * muDoubleScalarSqrt(p1) + 1.0) - p1;
      pLower *= nu * pLower * pLower;
      if (pLower > 2.2 * nu + 6.0) {
        b_st.site = &do_emlrtRSI;
        pLower =
            -2.0 *
            ((log1mpLower - (a - 1.0) * muDoubleScalarLog(0.5 * pLower)) + lga);
      }
    }
    z = 0.5 * pLower;
    p1 = rtInf;
    oldz = rtInf;
    if (p > 1.0021E-294) {
      nu = 2.2204460492503131E-14 * p;
    } else {
      nu = 2.2251089859537388E-308;
    }
    if (upper) {
      sgn = -1;
    } else {
      sgn = 1;
    }
    r = 0.0;
    log1mpLower = 1.7976931348623157E+308;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 1000)) {
      b_st.site = &co_emlrtRSI;
      pLower = (real_T)sgn * (eml_gammainc(&b_st, z, a, la, lgap1, upper) - p);
      if ((pLower * p1 < 0.0) &&
          (muDoubleScalarAbs(p1) <= muDoubleScalarAbs(pLower))) {
        z = 0.5 * z + 0.5 * oldz;
        b_st.site = &bo_emlrtRSI;
        pLower =
            (real_T)sgn * (eml_gammainc(&b_st, z, a, la, lgap1, upper) - p);
      }
      if (pLower > 0.0) {
        log1mpLower = z;
      } else {
        r = z;
      }
      if ((muDoubleScalarAbs(pLower) < nu) ||
          (muDoubleScalarAbs(z - oldz) <
           2.2204460492503131E-16 * z + 2.2250738585072014E-308)) {
        exitg1 = true;
      } else {
        oldz = z;
        p1 = pLower;
        guard1 = false;
        if (i < 500) {
          b_st.site = &ao_emlrtRSI;
          if (z < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &rb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
          }
          z *= 1.0 -
               pLower / (z * muDoubleScalarExp(
                                 ((a - 1.0) * muDoubleScalarLog(z) - z) - lga) +
                         pLower * ((z + 1.0) - a) / 2.0);
          if (z <= r) {
            if (r == 0.0) {
              b_st.site = &yn_emlrtRSI;
              r = eml_gammainc(&b_st, 2.2250738585072014E-308, a, la, lgap1,
                               upper) -
                  p;
              if (muDoubleScalarAbs((real_T)upper - p) < muDoubleScalarAbs(r)) {
                z = 0.0;
                exitg1 = true;
              } else {
                r = 2.2250738585072014E-308;
                guard1 = true;
              }
            } else {
              guard1 = true;
            }
          } else {
            if (z >= log1mpLower) {
              z = 0.01 * r + 0.99 * log1mpLower;
            }
            i++;
          }
        } else {
          if (1.0E+8 * r < log1mpLower) {
            oldz = 1.0E+8 * r;
            b_st.site = &xn_emlrtRSI;
            p1 = (real_T)sgn *
                 (eml_gammainc(&b_st, oldz, a, la, lgap1, upper) - p);
            if (p1 > 0.0) {
              log1mpLower = oldz;
            } else {
              r = oldz;
            }
          }
          z = 0.5 * r + 0.5 * log1mpLower;
          i++;
        }
        if (guard1) {
          z = 0.99 * r + 0.01 * log1mpLower;
          i++;
        }
      }
    }
    if (i >= 1000) {
      b_st.site = &wn_emlrtRSI;
      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&b_st, 7, m, &rfmt[0]);
      emlrtAssign(&y, m);
      b_y = NULL;
      m = emlrtCreateDoubleScalar(x);
      emlrtAssign(&b_y, m);
      c_st.site = &cjb_emlrtRSI;
      c_emlrt_marshallIn(&c_st, b_sprintf(&c_st, y, b_y, &r_emlrtMCI),
                         "<output of sprintf>", str);
      b_st.site = &wn_emlrtRSI;
      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&b_st, 7, m, &rfmt[0]);
      emlrtAssign(&c_y, m);
      d_y = NULL;
      m = emlrtCreateDoubleScalar(a);
      emlrtAssign(&d_y, m);
      c_st.site = &cjb_emlrtRSI;
      c_emlrt_marshallIn(&c_st, b_sprintf(&c_st, c_y, d_y, &r_emlrtMCI),
                         "<output of sprintf>", b_str);
      b_st.site = &vn_emlrtRSI;
      warning(&b_st, str, b_str);
    }
  }
  b.re = z;
  b.im = 0.0;
  return b;
}

/* End of code generation (gammaincinv.c) */
