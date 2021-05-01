/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sortrows.h
 *
 * Code generation for function 'sortrows'
 *
 */

#pragma once

/* Include files */
#include "LXS_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_sortrows(const emlrtStack *sp, emxArray_real_T *y);

void c_sortrows(const emlrtStack *sp, emxArray_real_T *y);

void d_sortrows(const emlrtStack *sp, emxArray_real_T *y);

void sortrows(const emlrtStack *sp, emxArray_real_T *y);

/* End of code generation (sortrows.h) */
