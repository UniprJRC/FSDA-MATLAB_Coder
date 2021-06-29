/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eigStandard.h
 *
 * Code generation for function 'eigStandard'
 *
 */

#ifndef EIGSTANDARD_H
#define EIGSTANDARD_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void eigStandard(const emxArray_real_T *A, emxArray_creal_T *V,
                 emxArray_creal_T *D);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (eigStandard.h) */
