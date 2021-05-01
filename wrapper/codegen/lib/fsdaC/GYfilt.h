/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * GYfilt.h
 *
 * Code generation for function 'GYfilt'
 *
 */

#ifndef GYFILT_H
#define GYFILT_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include "omp.h"
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
/* End of code generation (GYfilt.h) */
