/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tinv.h
 *
 * Code generation for function 'tinv'
 *
 */

#ifndef TINV_H
#define TINV_H

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
void b_tinv(const emxArray_real_T *p, const emxArray_real_T *v,
            emxArray_real_T *x);

double tinv(double p, double v);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (tinv.h) */
