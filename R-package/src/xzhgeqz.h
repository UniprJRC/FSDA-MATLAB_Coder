/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzhgeqz.h
 *
 * Code generation for function 'xzhgeqz'
 *
 */

#ifndef XZHGEQZ_H
#define XZHGEQZ_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_xzhgeqz(emxArray_creal_T *A, int ilo, int ihi, emxArray_creal_T *Z,
               int *info, emxArray_creal_T *alpha1, emxArray_creal_T *beta1);

void xzhgeqz(const creal_T A[4], int ilo, int ihi, int *info, creal_T alpha1[2],
             creal_T beta1[2]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (xzhgeqz.h) */
