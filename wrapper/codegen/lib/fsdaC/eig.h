/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: eig.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef EIG_H
#define EIG_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_eig(const emxArray_real_T *A, emxArray_creal_T *V, emxArray_creal_T *D);

void c_eig(const emxArray_real_T *A, emxArray_creal_T *V);

void eig(const double A[4], creal_T V[2]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for eig.h
 *
 * [EOF]
 */
