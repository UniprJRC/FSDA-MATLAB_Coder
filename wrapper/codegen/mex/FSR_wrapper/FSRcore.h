/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRcore.h
 *
 * Code generation for function 'FSRcore'
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
void FSRcore(const emlrtStack *sp, const emxArray_real_T *INP_y,
             const emxArray_real_T *INP_X, real_T INP_n, real_T INP_p,
             const emxArray_real_T *INP_mdr, real_T INP_init,
             const emxArray_real_T *INP_Un, const emxArray_real_T *INP_bb,
             const emxArray_real_T *INP_Bcoeff, const emxArray_real_T *INP_S2,
             boolean_T INP_weak, const real_T options_bonflev_data[],
             const int32_T options_bonflev_size[2], boolean_T options_msg,
             struct_T *out);

/* End of code generation (FSRcore.h) */
