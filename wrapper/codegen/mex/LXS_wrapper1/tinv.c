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
#include "LXS_wrapper1_data.h"
#include "betaincinv.h"
#include "norminv.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo vgb_emlrtRSI = {
    29,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo wgb_emlrtRSI = {
    32,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo xgb_emlrtRSI = {
    35,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

/* Function Definitions */
real_T tinv(const emlrtStack *sp, real_T p, real_T v)
{
  emlrtStack st;
  creal_T dc;
  real_T x;
  real_T xn3;
  real_T xn5;
  real_T xn7;
  st.prev = sp;
  st.tls = sp->tls;
  if ((v > 0.0) && (0.0 <= p) && (p <= 1.0)) {
    if (p == 0.0) {
      x = rtMinusInf;
    } else if (p == 1.0) {
      x = rtInf;
    } else if (v == 1.0) {
      x = muDoubleScalarTan(3.1415926535897931 * (p - 0.5));
    } else if (v < 1000.0) {
      xn3 = muDoubleScalarAbs(p - 0.5);
      if (xn3 < 0.25) {
        st.site = &vgb_emlrtRSI;
        dc = b_betaincinv(&st, 2.0 * xn3, 0.5, v / 2.0);
        xn5 = dc.re;
        xn3 = 1.0 - dc.re;
      } else {
        st.site = &wgb_emlrtRSI;
        dc = betaincinv(&st, 2.0 * xn3, v / 2.0, 0.5);
        xn3 = dc.re;
        xn5 = 1.0 - dc.re;
      }
      st.site = &xgb_emlrtRSI;
      x = v * (xn5 / xn3);
      if (x < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &st, &tb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      x = muDoubleScalarSqrt(x);
      x *= muDoubleScalarSign(p - 0.5);
    } else {
      x = norminv(p);
      if (v < 6.6457388829771584E+75) {
        xn3 = muDoubleScalarPower(x, 3.0);
        xn5 = muDoubleScalarPower(x, 5.0);
        xn7 = muDoubleScalarPower(x, 7.0);
        x = (((x + (xn3 + x) / (4.0 * v)) +
              ((5.0 * xn5 + 16.0 * xn3) + 3.0 * x) / (96.0 * (v * v))) +
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
