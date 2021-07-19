/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mad.c
 *
 * Code generation for function 'mad'
 *
 */

/* Include files */
#include "mad.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "abs.h"
#include "nanmedian.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo wx_emlrtRSI = {
    32,    /* lineNo */
    "mad", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\mad.m" /* pathName
                                                                     */
};

static emlrtRSInfo xx_emlrtRSI = {
    33,    /* lineNo */
    "mad", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\mad.m" /* pathName
                                                                     */
};

static emlrtRSInfo yx_emlrtRSI = {
    34,    /* lineNo */
    "mad", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\mad.m" /* pathName
                                                                     */
};

static emlrtRTEInfo fv_emlrtRTEI = {
    33,                                                             /* lineNo */
    5,                                                              /* colNo */
    "mad",                                                          /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\mad.m" /* pName */
};

static emlrtRTEInfo gv_emlrtRTEI = {
    33,                                                             /* lineNo */
    14,                                                             /* colNo */
    "mad",                                                          /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\mad.m" /* pName */
};

/* Function Definitions */
real_T mad(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack st;
  emxArray_real_T *c;
  emxArray_real_T *xx;
  real_T xm;
  real_T y;
  int32_T acoef;
  int32_T i;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (x->size[0] == 0) {
    y = rtNaN;
  } else {
    emxInit_real_T(sp, &c, 1, &gv_emlrtRTEI, true);
    st.site = &wx_emlrtRSI;
    xm = nanmedian(&st, x);
    i = c->size[0];
    c->size[0] = x->size[0];
    emxEnsureCapacity_real_T(sp, c, i, &fm_emlrtRTEI);
    acoef = (x->size[0] != 1);
    i = x->size[0] - 1;
    for (k = 0; k <= i; k++) {
      c->data[k] = x->data[acoef * k] - xm;
    }
    emxInit_real_T(sp, &xx, 1, &fv_emlrtRTEI, true);
    st.site = &xx_emlrtRSI;
    b_abs(&st, c, xx);
    st.site = &yx_emlrtRSI;
    y = nanmedian(&st, xx);
    emxFree_real_T(&c);
    emxFree_real_T(&xx);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return y;
}

/* End of code generation (mad.c) */
