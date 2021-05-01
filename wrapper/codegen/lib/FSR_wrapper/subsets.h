/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * subsets.h
 *
 * Code generation for function 'subsets'
 *
 */

#ifndef SUBSETS_H
#define SUBSETS_H

/* Include files */
#include "FSR_wrapper_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void subsets(double nsamp, double n, double p, double ncomb, emxArray_real_T *C,
             double *nselected);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (subsets.h) */
