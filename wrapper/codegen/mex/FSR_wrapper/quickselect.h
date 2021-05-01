/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * quickselect.h
 *
 * Code generation for function 'quickselect'
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
void quickselect(emxArray_real_T *v, int32_T n, int32_T vlen, real_T *vn,
                 int32_T *nfirst, int32_T *nlast);

/* End of code generation (quickselect.h) */
