/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * schur.h
 *
 * Code generation for function 'schur'
 *
 */

#ifndef SCHUR_H
#define SCHUR_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_schur(emxArray_real_T *A, emxArray_real_T *V);

void c_schur(double A[4]);

void schur(const emxArray_real_T *A, emxArray_real_T *V, emxArray_real_T *T);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (schur.h) */
