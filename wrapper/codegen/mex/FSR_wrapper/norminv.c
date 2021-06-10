/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * norminv.c
 *
 * Code generation for function 'norminv'
 *
 */

/* Include files */
#include "norminv.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "erfcinv.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtBCInfo gfb_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    37,        /* lineNo */
    32,        /* colNo */
    "",        /* aName */
    "norminv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\norminv.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo hfb_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    52,        /* lineNo */
    9,         /* colNo */
    "",        /* aName */
    "norminv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\norminv.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo ifb_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    42,        /* lineNo */
    9,         /* colNo */
    "",        /* aName */
    "norminv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\norminv.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtRTEInfo teb_emlrtRTEI = {
    31,        /* lineNo */
    5,         /* colNo */
    "norminv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\norminv.m" /* pName
                                                                         */
};

/* Function Definitions */
void b_norminv(const emlrtStack *sp, const emxArray_real_T *p,
               emxArray_real_T *x)
{
  emlrtStack st;
  int32_T i;
  int32_T i1;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  i = x->size[0] * x->size[1];
  x->size[0] = p->size[0];
  x->size[1] = p->size[1];
  emxEnsureCapacity_real_T(sp, x, i, &teb_emlrtRTEI);
  i = p->size[0] * p->size[1];
  for (k = 0; k < i; k++) {
    i1 = p->size[0] * p->size[1];
    if ((k + 1 < 1) || (k + 1 > i1)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &gfb_emlrtBCI, (emlrtCTX)sp);
    }
    if ((p->data[k] >= 0.0) && (p->data[k] <= 1.0)) {
      i1 = x->size[0] * x->size[1];
      if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > i1)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, i1, &ifb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      st.site = &seb_emlrtRSI;
      x->data[k] = -1.4142135623730951 * erfcinv(&st, 2.0 * p->data[k]);
    } else {
      i1 = x->size[0] * x->size[1];
      if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > i1)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, i1, &hfb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      x->data[k] = rtNaN;
    }
  }
}

real_T norminv(const emlrtStack *sp, real_T p)
{
  emlrtStack st;
  real_T x;
  st.prev = sp;
  st.tls = sp->tls;
  if ((p >= 0.0) && (p <= 1.0)) {
    st.site = &seb_emlrtRSI;
    x = -1.4142135623730951 * erfcinv(&st, 2.0 * p);
  } else {
    x = rtNaN;
  }
  return x;
}

/* End of code generation (norminv.c) */
