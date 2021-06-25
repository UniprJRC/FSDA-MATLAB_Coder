/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: zscoreFS.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef ZSCOREFS_H
#define ZSCOREFS_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
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
/*
 * File trailer for zscoreFS.h
 *
 * [EOF]
 */
