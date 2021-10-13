/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sum.h
 *
 * Code generation for function 'sum'
 *
 */

#ifndef SUM_H
#define SUM_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_sum(const emxArray_real_T *x, emxArray_real_T *y);

void c_sum(const emxArray_real_T *x, emxArray_real_T *y);

void d_sum(const emxArray_real_T *x, emxArray_real_T *y);

double e_sum(const emxArray_real_T *x);

void f_sum(const emxArray_real_T *x, emxArray_real_T *y);

void sum(const emxArray_real_T *x, emxArray_real_T *y);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (sum.h) */
