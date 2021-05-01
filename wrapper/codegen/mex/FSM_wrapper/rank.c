/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rank.c
 *
 * Code generation for function 'rank'
 *
 */

/* Include files */
#include "rank.h"
#include "FSM_wrapper_data.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "svd.h"
#include "vAllOrAny.h"
#include "mwmathutil.h"
#include <math.h>

/* Variable Definitions */
static emlrtRSInfo fe_emlrtRSI = {
    20,           /* lineNo */
    "local_rank", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\rank.m" /* pathName
                                                                        */
};

static emlrtRSInfo ge_emlrtRSI = {
    22,           /* lineNo */
    "local_rank", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\rank.m" /* pathName
                                                                        */
};

static emlrtRSInfo he_emlrtRSI = {
    31,           /* lineNo */
    "local_rank", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\rank.m" /* pathName
                                                                        */
};

static emlrtRSInfo ie_emlrtRSI = {
    12,    /* lineNo */
    "svd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m" /* pathName
                                                                       */
};

static emlrtRSInfo je_emlrtRSI = {
    15,    /* lineNo */
    "svd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m" /* pathName
                                                                       */
};

static emlrtRSInfo ke_emlrtRSI = {
    20,    /* lineNo */
    "svd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m" /* pathName
                                                                       */
};

static emlrtRSInfo se_emlrtRSI =
    {
        46,    /* lineNo */
        "eps", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\eps.m" /* pathName
                                                                          */
};

static emlrtRTEInfo vd_emlrtRTEI = {
    19,    /* lineNo */
    14,    /* colNo */
    "svd", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m" /* pName
                                                                       */
};

static emlrtRTEInfo wd_emlrtRTEI = {
    20,     /* lineNo */
    5,      /* colNo */
    "rank", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\rank.m" /* pName
                                                                        */
};

/* Function Definitions */
int32_T local_rank(const emlrtStack *sp, const emxArray_real_T *A)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *r;
  emxArray_real_T *s;
  real_T absx;
  int32_T exponent;
  int32_T i;
  int32_T irank;
  int32_T loop_ub;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  irank = 0;
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    st.site = &fe_emlrtRSI;
    b_st.site = &ie_emlrtRSI;
    c_st.site = &le_emlrtRSI;
    d_st.site = &me_emlrtRSI;
    p = flatVectorAllOrAny(&d_st, A);
    emxInit_real_T(&st, &s, 1, &wd_emlrtRTEI, true);
    if (p) {
      b_st.site = &je_emlrtRSI;
      svd(&b_st, A, s);
    } else {
      emxInit_real_T(&st, &r, 2, &vd_emlrtRTEI, true);
      i = r->size[0] * r->size[1];
      r->size[0] = A->size[0];
      r->size[1] = A->size[1];
      emxEnsureCapacity_real_T(&st, r, i, &vd_emlrtRTEI);
      loop_ub = A->size[0] * A->size[1];
      for (i = 0; i < loop_ub; i++) {
        r->data[i] = 0.0;
      }
      b_st.site = &ke_emlrtRSI;
      svd(&b_st, r, s);
      loop_ub = s->size[0];
      i = s->size[0];
      s->size[0] = loop_ub;
      emxEnsureCapacity_real_T(&st, s, i, &wd_emlrtRTEI);
      emxFree_real_T(&r);
      for (i = 0; i < loop_ub; i++) {
        s->data[i] = rtNaN;
      }
    }
    st.site = &ge_emlrtRSI;
    b_st.site = &se_emlrtRSI;
    absx = muDoubleScalarAbs(s->data[0]);
    if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = rtNaN;
    }
    absx *= (real_T)muIntScalarMax_sint32(A->size[0], A->size[1]);
    st.site = &he_emlrtRSI;
    if ((1 <= s->size[0]) && (s->size[0] > 2147483646)) {
      b_st.site = &ad_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    loop_ub = 0;
    while ((loop_ub <= s->size[0] - 1) && (s->data[loop_ub] > absx)) {
      irank++;
      loop_ub++;
    }
    emxFree_real_T(&s);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return irank;
}

/* End of code generation (rank.c) */
