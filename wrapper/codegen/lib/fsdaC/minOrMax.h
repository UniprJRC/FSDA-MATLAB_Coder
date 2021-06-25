/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: minOrMax.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef MINORMAX_H
#define MINORMAX_H

/* Include Files */
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

double e_minimum(const emxArray_real_T *x);

void f_maximum(const emxArray_real_T *x, emxArray_real_T *ex);

void f_minimum(const emxArray_real_T *x, double *ex, int *idx);

void g_maximum(const emxArray_real_T *x, emxArray_real_T *ex,
               emxArray_int32_T *idx);

bool h_maximum(const bool x[6]);

bool i_maximum(const bool x[2]);

double j_maximum(const double x[3]);

void maximum(const emxArray_real_T *x, emxArray_real_T *ex);

void minimum(const emxArray_real_T *x, emxArray_real_T *ex);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for minOrMax.h
 *
 * [EOF]
 */
