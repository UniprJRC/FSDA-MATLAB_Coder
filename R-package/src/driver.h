/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * driver.h
 *
 * Code generation for function 'driver'
 *
 */

#ifndef DRIVER_H
#define DRIVER_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
double computeFirstOrderOpt(const emxArray_real_T *gradf,
                            bool b_hasFiniteBounds,
                            const double *projSteepestDescentInfNorm);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (driver.h) */
