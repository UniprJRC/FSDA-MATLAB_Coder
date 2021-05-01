/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * scanfornan.h
 *
 * Code generation for function 'scanfornan'
 *
 */

#ifndef SCANFORNAN_H
#define SCANFORNAN_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include "omp.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void scanfornan(const emxArray_real_T *X, double nx,
                emxArray_boolean_T *nanobs);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (scanfornan.h) */
