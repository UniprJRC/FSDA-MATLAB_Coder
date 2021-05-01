/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * zscoreFS.h
 *
 * Code generation for function 'zscoreFS'
 *
 */

#ifndef ZSCOREFS_H
#define ZSCOREFS_H

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
void b_zscoreFS(const emxArray_real_T *X, emxArray_real_T *Z, double *mu,
                double *sigma);

void c_zscoreFS(const emxArray_real_T *X, emxArray_real_T *Z, double *mu,
                double *sigma);

void zscoreFS(const emxArray_real_T *X, emxArray_real_T *Z, double *mu,
              double *sigma);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (zscoreFS.h) */
