/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chi2inv.h
 *
 * Code generation for function 'chi2inv'
 *
 */

#ifndef CHI2INV_H
#define CHI2INV_H

/* Include files */
#include "FSR_wrapper_types.h"
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
/* End of code generation (chi2inv.h) */
