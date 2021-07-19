/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * finv.h
 *
 * Code generation for function 'finv'
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
void b_finv(const emlrtStack *sp, const emxArray_real_T *p, real_T v1,
            const emxArray_real_T *v2, emxArray_real_T *x);

void c_finv(const emlrtStack *sp, const emxArray_real_T *p,
            const emxArray_real_T *v1, const emxArray_real_T *v2,
            emxArray_real_T *x);

void d_finv(const emlrtStack *sp, const emxArray_real_T *p,
            const emxArray_real_T *v1, const emxArray_real_T *v2,
            emxArray_real_T *x);

void e_finv(const emlrtStack *sp, const emxArray_real_T *p,
            const emxArray_real_T *v1, const emxArray_real_T *v2,
            emxArray_real_T *x);

void f_finv(const emlrtStack *sp, const emxArray_real_T *p,
            const emxArray_real_T *v1, const emxArray_real_T *v2,
            emxArray_real_T *x);

real_T finv(const emlrtStack *sp, real_T v2);

/* End of code generation (finv.h) */
