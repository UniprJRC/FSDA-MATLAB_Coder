/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: chi2inv.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef CHI2INV_H
#define CHI2INV_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_chi2inv(const emxArray_real_T *p, double v, emxArray_real_T *x);

double chi2inv(double p, double v);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for chi2inv.h
 *
 * [EOF]
 */
