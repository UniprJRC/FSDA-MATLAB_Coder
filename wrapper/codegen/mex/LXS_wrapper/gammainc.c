/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * gammainc.c
 *
 * Code generation for function 'gammainc'
 *
 */

/* Include files */
#include "gammainc.h"
#include "LXS_wrapper_data.h"
#include "eml_gammainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo
    bp_emlrtRSI =
        {
            36,         /* lineNo */
            "gammainc", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammain"
            "c.m" /* pathName */
};

static emlrtRSInfo
    cp_emlrtRSI =
        {
            37,         /* lineNo */
            "gammainc", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammain"
            "c.m" /* pathName */
};

static emlrtRSInfo
    dp_emlrtRSI =
        {
            40,         /* lineNo */
            "gammainc", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammain"
            "c.m" /* pathName */
};

static emlrtRSInfo
    ep_emlrtRSI =
        {
            89,                /* lineNo */
            "scalar_gammainc", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammain"
            "c.m" /* pathName */
};

/* Function Definitions */
creal_T gammainc(const emlrtStack *sp, real_T x, real_T a)
{
  emlrtStack b_st;
  emlrtStack st;
  creal_T b;
  real_T d;
  real_T pax_i;
  real_T pax_modulus;
  real_T pax_r;
  real_T r;
  real_T term;
  int32_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bp_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (a < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &qb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
  }
  r = a + 1.0;
  st.site = &cp_emlrtRSI;
  gammaln(&st, &r);
  st.site = &dp_emlrtRSI;
  if (!(x < 0.0)) {
    b_st.site = &ep_emlrtRSI;
    r = b_eml_gammainc(&b_st, x, a, muDoubleScalarLog(a), r);
    b.re = r;
    b.im = 0.0;
  } else {
    if ((x == rtMinusInf) || (a == rtInf)) {
      term = rtNaN;
      r = rtNaN;
    } else {
      pax_modulus = muDoubleScalarExp((-x + a * muDoubleScalarLog(-x)) - r);
      if (a == 1.0) {
        pax_r = -pax_modulus;
        pax_i = 0.0;
      } else {
        if (a < 0.25) {
          term = muDoubleScalarCos(a * 3.1415926535897931);
          r = muDoubleScalarSin(a * 3.1415926535897931);
        } else {
          r = a - 2.0 * muDoubleScalarFloor(a / 2.0);
          if (r < 0.25) {
            r *= 3.1415926535897931;
            term = muDoubleScalarCos(r);
            r = muDoubleScalarSin(r);
          } else if (r < 0.75) {
            r = 0.5 - r;
            r *= 3.1415926535897931;
            term = muDoubleScalarSin(r);
            r = muDoubleScalarCos(r);
          } else if (r < 1.25) {
            r = 1.0 - r;
            r *= 3.1415926535897931;
            term = -muDoubleScalarCos(r);
            r = muDoubleScalarSin(r);
          } else if (r < 1.75) {
            r -= 1.5;
            r *= 3.1415926535897931;
            term = muDoubleScalarSin(r);
            r = -muDoubleScalarCos(r);
          } else {
            r -= 2.0;
            r *= 3.1415926535897931;
            term = muDoubleScalarCos(r);
            r = muDoubleScalarSin(r);
          }
        }
        pax_r = pax_modulus * term;
        pax_i = pax_modulus * r;
      }
      r = 1.0;
      term = 1.0;
      pax_modulus = 1.0;
      do {
        exitg1 = 0;
        term = term * x / (a + pax_modulus);
        r += term;
        d = muDoubleScalarAbs(r);
        if (muDoubleScalarAbs(term) <= 2.2204460492503131E-16 * d) {
          exitg1 = 1;
        } else {
          pax_modulus++;
        }
      } while (exitg1 == 0);
      term = d * pax_r;
      if (pax_i == 0.0) {
        r = 0.0;
      } else {
        r = d * pax_i;
      }
    }
    b.re = term;
    b.im = r;
  }
  return b;
}

/* End of code generation (gammainc.c) */
