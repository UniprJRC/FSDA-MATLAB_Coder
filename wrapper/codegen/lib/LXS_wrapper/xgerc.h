/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgerc.h
 *
 * Code generation for function 'xgerc'
 *
 */

#ifndef XGERC_H
#define XGERC_H

/* Include files */
#include "LXS_wrapper_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void xgerc(int m, int n, double alpha1, int ix0, const emxArray_real_T *y,
           emxArray_real_T *A, int ia0, int lda);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (xgerc.h) */
