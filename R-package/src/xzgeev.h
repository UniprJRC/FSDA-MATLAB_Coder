/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzgeev.h
 *
 * Code generation for function 'xzgeev'
 *
 */

#ifndef XZGEEV_H
#define XZGEEV_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void xzgeev(const emxArray_real_T *A, int *info, emxArray_creal_T *alpha1,
            emxArray_creal_T *beta1);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (xzgeev.h) */
