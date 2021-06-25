/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: sort.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef SORT_H
#define SORT_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_sort(creal_T x[2]);

void c_sort(emxArray_real_T *x);

void d_sort(emxArray_real_T *x);

void e_sort(emxArray_real_T *x);

void f_sort(emxArray_real_T *x, emxArray_int32_T *idx);

void g_sort(emxArray_creal_T *x);

void h_sort(emxArray_real_T *x);

void sort(emxArray_real_T *x, emxArray_int32_T *idx);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for sort.h
 *
 * [EOF]
 */
