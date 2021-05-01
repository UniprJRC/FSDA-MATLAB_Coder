/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzhgeqz.h
 *
 * Code generation for function 'xzhgeqz'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void xzhgeqz(const emlrtStack *sp, const creal_T A[4], int32_T ilo, int32_T ihi,
             int32_T *info, creal_T alpha1[2], creal_T beta1[2]);

/* End of code generation (xzhgeqz.h) */
