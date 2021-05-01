/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * minOrMax.h
 *
 * Code generation for function 'minOrMax'
 *
 */

#ifndef MINORMAX_H
#define MINORMAX_H

/* Include files */
#include "LTSts_wrapper_types.h"
#include "rtwtypes.h"
#include "omp.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
double b_maximum(const emxArray_real_T *x);

void b_minimum(const emxArray_real_T *x, double *ex, int *idx);

double c_maximum(const emxArray_real_T *x);

void maximum(const emxArray_real_T *x, double *ex, int *idx);

double minimum(const emxArray_real_T *x);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (minOrMax.h) */
