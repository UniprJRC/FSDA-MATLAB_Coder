/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * linearLeastSquares.h
 *
 * Code generation for function 'linearLeastSquares'
 *
 */

#ifndef LINEARLEASTSQUARES_H
#define LINEARLEASTSQUARES_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void linearLeastSquares(emxArray_real_T *lhs, emxArray_real_T *rhs,
                        const emxArray_real_T *dx, int m, int n,
                        emxArray_real_T *b_dx);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (linearLeastSquares.h) */
