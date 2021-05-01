/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "repmat.h"
#include "FSMbsb_wrapper_emxutil.h"
#include "FSMbsb_wrapper_types.h"
#include "rt_nonfinite.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRTEInfo eh_emlrtRTEI = {
    53,       /* lineNo */
    9,        /* colNo */
    "repmat", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m" /* pName
                                                                         */
};

/* Function Definitions */
void repmat(const emlrtStack *sp, ptrdiff_t a, int32_T varargin_1,
            emxArray_ptrdiff_t *b)
{
  int32_T i;
  i = b->size[0];
  b->size[0] = varargin_1;
  emxEnsureCapacity_ptrdiff_t(sp, b, i, &eh_emlrtRTEI);
  for (i = 0; i < varargin_1; i++) {
    b->data[i] = a;
  }
}

/* End of code generation (repmat.c) */
