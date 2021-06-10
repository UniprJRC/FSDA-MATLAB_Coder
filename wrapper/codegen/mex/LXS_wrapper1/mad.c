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
#include "LXS_wrapper1_data.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_types.h"
#include "abs.h"
#include "nanmean.h"
#include "nanmedian.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo tj_emlrtRSI = {
    32,    /* lineNo */
    "mad", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\mad.m" /* pathName
                                                                     */
};

static emlrtRSInfo uj_emlrtRSI = {
    33,    /* lineNo */
    "mad", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\mad.m" /* pathName
                                                                     */
};

static emlrtRSInfo vj_emlrtRSI = {
    34,    /* lineNo */
    "mad", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\mad.m" /* pathName
                                                                     */
};

static emlrtRSInfo tk_emlrtRSI = {
    37,    /* lineNo */
    "mad", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\mad.m" /* pathName
                                                                     */
};

static emlrtRSInfo uk_emlrtRSI = {
    38,    /* lineNo */
    "mad", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\mad.m" /* pathName
                                                                     */
};

static emlrtRSInfo vk_emlrtRSI = {
    39,    /* lineNo */
    "mad", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\mad.m" /* pathName
                                                                     */
};

static emlrtRTEInfo sj_emlrtRTEI = {
    33,                                                             /* lineNo */
    5,                                                              /* colNo */
    "mad",                                                          /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\mad.m" /* pName */
};

static emlrtRTEInfo tj_emlrtRTEI = {
    33,                                                             /* lineNo */
    14,                                                             /* colNo */
    "mad",                                                          /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\mad.m" /* pName */
};

static emlrtRTEInfo ak_emlrtRTEI = {
    38,                                                             /* lineNo */
    14,                                                             /* colNo */
    "mad",                                                          /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\mad.m" /* pName */
};

/* Function Definitions */
real_T b_mad(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack st;
  emxArray_real_T *c;
  emxArray_real_T *xx;
  real_T b;
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
    emxInit_real_T(sp, &c, 1, &ak_emlrtRTEI, true);
    st.site = &tk_emlrtRSI;
    b = nanmean(&st, x);
    i = c->size[0];
    c->size[0] = x->size[0];
    emxEnsureCapacity_real_T(sp, c, i, &rj_emlrtRTEI);
    acoef = (x->size[0] != 1);
    i = x->size[0] - 1;
    for (k = 0; k <= i; k++) {
      c->data[k] = x->data[acoef * k] - b;
    }
    emxInit_real_T(sp, &xx, 1, &sj_emlrtRTEI, true);
    st.site = &uk_emlrtRSI;
    b_abs(&st, c, xx);
    st.site = &vk_emlrtRSI;
    y = nanmean(&st, xx);
    emxFree_real_T(&c);
    emxFree_real_T(&xx);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return y;
}

real_T mad(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack st;
  emxArray_real_T *c;
  emxArray_real_T *xx;
  real_T b;
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
    emxInit_real_T(sp, &c, 1, &tj_emlrtRTEI, true);
    st.site = &tj_emlrtRSI;
    b = nanmedian(&st, x);
    i = c->size[0];
    c->size[0] = x->size[0];
    emxEnsureCapacity_real_T(sp, c, i, &rj_emlrtRTEI);
    acoef = (x->size[0] != 1);
    i = x->size[0] - 1;
    for (k = 0; k <= i; k++) {
      c->data[k] = x->data[acoef * k] - b;
    }
    emxInit_real_T(sp, &xx, 1, &sj_emlrtRTEI, true);
    st.site = &uj_emlrtRSI;
    b_abs(&st, c, xx);
    st.site = &vj_emlrtRSI;
    y = nanmedian(&st, xx);
    emxFree_real_T(&c);
    emxFree_real_T(&xx);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return y;
}

/* End of code generation (mad.c) */
