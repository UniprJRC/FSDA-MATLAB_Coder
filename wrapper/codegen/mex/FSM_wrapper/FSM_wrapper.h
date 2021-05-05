/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSM_wrapper.h
 *
 * Code generation for function 'FSM_wrapper'
 *
 */

#pragma once

/* Include files */
#include "FSM_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void FSM_wrapper(FSM_wrapperStackData *SD, const emlrtStack *sp,
                 const emxArray_real_T *Y, const real_T bonflev_data[],
                 const int32_T bonflev_size[2], const char_T crit_data[],
                 const int32_T crit_size[2], real_T init,
                 const emxArray_real_T *m0, boolean_T msg, boolean_T nocheck,
                 real_T rf, struct_FSM_T *out);

/* End of code generation (FSM_wrapper.h) */
