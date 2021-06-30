/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * restreigen.h
 *
 * Code generation for function 'restreigen'
 *
 */

#ifndef RESTREIGEN_H
#define RESTREIGEN_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_restreigen(emxArray_real_T *eigenvalues, double restr, double tol,
                  double userepmat);

void c_restreigen(emxArray_real_T *eigenvalues, const emxArray_real_T *niini,
                  double restr, double tol, double userepmat);

void restreigen(emxArray_real_T *eigenvalues, const emxArray_real_T *niini,
                double restr);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (restreigen.h) */
