/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tinv.h
 *
 * Code generation for function 'tinv'
 *
 */

#pragma once

/* Include files */
#include "FSR_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_tinv(const emlrtStack *sp, const emxArray_real_T *p,
            const emxArray_real_T *v, emxArray_real_T *x);

void c_tinv(const emlrtStack *sp, const emxArray_real_T *p,
            const emxArray_real_T *v, emxArray_real_T *x);

void d_tinv(const emlrtStack *sp, const emxArray_real_T *p,
            const emxArray_real_T *v, emxArray_real_T *x);

void e_tinv(const emlrtStack *sp, const emxArray_real_T *p,
            const emxArray_real_T *v, emxArray_real_T *x);

real_T tinv(const emlrtStack *sp, real_T v);

/* End of code generation (tinv.h) */
