/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: GYfilt.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef GYFILT_H
#define GYFILT_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void GYfilt(const emxArray_real_T *x, emxArray_boolean_T *weights);

void b_GYfilt(const emxArray_real_T *x, emxArray_boolean_T *weights);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for GYfilt.h
 *
 * [EOF]
 */
