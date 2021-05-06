/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fcdf.c
 *
 * Code generation for function 'fcdf'
 *
 */

/* Include files */
#include "fcdf.h"
#include "LTSts_wrapper_data.h"
#include "betainc.h"
#include "gammainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo qdb_emlrtRSI = {
    49,     /* lineNo */
    "fcdf", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\fcdf.m" /* pathName
                                                                      */
};

/* Function Definitions */
real_T fcdf(const emlrtStack *sp, real_T x, real_T v2)
{
  emlrtStack b_st;
  emlrtStack st;
  creal_T b;
  real_T num;
  real_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((v2 > 0.0) && (!muDoubleScalarIsNaN(x))) {
    if (x > 0.0) {
      if (muDoubleScalarIsInf(x)) {
        p = 1.0;
      } else if (muDoubleScalarIsInf(v2)) {
        st.site = &qdb_emlrtRSI;
        num = 2.0;
        b_st.site = &nx_emlrtRSI;
        gammaln(&b_st, &num);
        b_st.site = &ox_emlrtRSI;
        b = scalar_gammainc(&b_st, 2.0 * x / 2.0, 1.0, 0.0, num);
        p = b.re;
      } else if (v2 <= x * 2.0) {
        st.site = &rdb_emlrtRSI;
        b = b_betainc(&st, v2 / (v2 + x * 2.0), v2 / 2.0, 1.0);
        p = b.re;
      } else {
        num = 2.0 * x;
        st.site = &sdb_emlrtRSI;
        b = betainc(&st, num / (num + v2), 1.0, v2 / 2.0);
        p = b.re;
      }
    } else {
      p = 0.0;
    }
  } else {
    p = rtNaN;
  }
  return p;
}

/* End of code generation (fcdf.c) */
