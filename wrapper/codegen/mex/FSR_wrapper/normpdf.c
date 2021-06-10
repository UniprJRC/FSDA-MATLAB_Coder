/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * normpdf.c
 *
 * Code generation for function 'normpdf'
 *
 */

/* Include files */
#include "normpdf.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtBCInfo jfb_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    20,        /* lineNo */
    32,        /* colNo */
    "",        /* aName */
    "normpdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\normpdf.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo kfb_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    25,        /* lineNo */
    9,         /* colNo */
    "",        /* aName */
    "normpdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\normpdf.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtRTEInfo ueb_emlrtRTEI = {
    17,        /* lineNo */
    5,         /* colNo */
    "normpdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\normpdf.m" /* pName
                                                                         */
};

/* Function Definitions */
void normpdf(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  int32_T i;
  int32_T i1;
  int32_T k;
  i = y->size[0] * y->size[1];
  y->size[0] = x->size[0];
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, y, i, &ueb_emlrtRTEI);
  i = x->size[0] * x->size[1];
  for (k = 0; k < i; k++) {
    i1 = x->size[0] * x->size[1];
    if ((k + 1 < 1) || (k + 1 > i1)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &jfb_emlrtBCI, (emlrtCTX)sp);
    }
    i1 = y->size[0] * y->size[1];
    if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > i1)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, i1, &kfb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    y->data[k] =
        muDoubleScalarExp(-0.5 * x->data[k] * x->data[k]) / 2.5066282746310002;
  }
}

/* End of code generation (normpdf.c) */
