/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzgetrf.h
 *
 * Code generation for function 'xzgetrf'
 *
 */

#ifndef XZGETRF_H
#define XZGETRF_H

/* Include files */
#include "FSM_wrapper_types.h"
#include "rtwtypes.h"
#include "omp.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void xzgetrf(int m, int n, emxArray_real_T *A, int lda, emxArray_int32_T *ipiv,
             int *info);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (xzgetrf.h) */
