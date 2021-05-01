/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * normcdf.c
 *
 * Code generation for function 'normcdf'
 *
 */

/* Include files */
#include "normcdf.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "eml_erfcore.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtBCInfo uo_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    49,        /* lineNo */
    32,        /* colNo */
    "",        /* aName */
    "normcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\normcdf.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo vo_emlrtBCI = {
    -1,        /* iFirst */
    -1,        /* iLast */
    79,        /* lineNo */
    9,         /* colNo */
    "",        /* aName */
    "normcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\normcdf.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtRTEInfo gv_emlrtRTEI = {
    43,        /* lineNo */
    5,         /* colNo */
    "normcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\normcdf.m" /* pName
                                                                         */
};

/* Function Definitions */
void normcdf(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *p)
{
  real_T y;
  int32_T i;
  int32_T k;
  i = p->size[0];
  p->size[0] = x->size[0];
  emxEnsureCapacity_real_T(sp, p, i, &gv_emlrtRTEI);
  i = x->size[0];
  for (k = 0; k < i; k++) {
    if (k + 1 > x->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, x->size[0], &uo_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    y = eml_erfcore(-x->data[k] / 1.4142135623730951);
    if (k + 1 > p->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, p->size[0], &vo_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    p->data[k] = 0.5 * y;
  }
}

/* End of code generation (normcdf.c) */
