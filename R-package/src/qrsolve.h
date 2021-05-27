/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qrsolve.h
 *
 * Code generation for function 'qrsolve'
 *
 */

#ifndef QRSOLVE_H
#define QRSOLVE_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void qrsolve(const emxArray_real_T *A, const emxArray_real_T *B,
             emxArray_real_T *Y);

int rankFromQR(const emxArray_real_T *A);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (qrsolve.h) */
