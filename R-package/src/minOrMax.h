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
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
double b_maximum(const emxArray_real_T *x);

double b_minimum(const emxArray_real_T *x);

void c_maximum(const emxArray_real_T *x, double *ex, int *idx);

double c_minimum(const emxArray_real_T *x);

double d_maximum(const emxArray_real_T *x);

void d_minimum(const emxArray_real_T *x, double *ex, int *idx);

double e_maximum(const emxArray_real_T *x);

void e_minimum(const double x[50], double *ex, int *idx);

void f_maximum(const emxArray_real_T *x, emxArray_real_T *ex);

void f_minimum(const double x[3], double *ex, int *idx);

void g_maximum(const emxArray_real_T *x, emxArray_real_T *ex,
               emxArray_int32_T *idx);

double g_minimum(const emxArray_real_T *x);

bool h_maximum(const bool x[6]);

void h_minimum(const emxArray_real_T *x, double *ex, int *idx);

bool i_maximum(const bool x[2]);

double j_maximum(const double x[3]);

void maximum(const emxArray_real_T *x, emxArray_real_T *ex);

void minimum(const emxArray_real_T *x, emxArray_real_T *ex);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (minOrMax.h) */
