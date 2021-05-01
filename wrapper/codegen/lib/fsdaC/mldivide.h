/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mldivide.h
 *
 * Code generation for function 'mldivide'
 *
 */

#ifndef MLDIVIDE_H
#define MLDIVIDE_H

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
void b_mldivide(const double A[27], const double B[9], double Y[3]);

void c_mldivide(const emxArray_real_T *A, emxArray_real_T *B);

double mldivide(const emxArray_real_T *A, const emxArray_real_T *B);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (mldivide.h) */
