/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bsxfun.h
 *
 * Code generation for function 'bsxfun'
 *
 */

#pragma once

/* Include files */
#include "FSMmmd_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_bsxfun(const emlrtStack *sp, const emxArray_real_T *a,
              const emxArray_real_T *b, emxArray_real_T *c);

void bsxfun(const emlrtStack *sp, const emxArray_real_T *a,
            const emxArray_real_T *b, emxArray_real_T *c);

/* End of code generation (bsxfun.h) */
