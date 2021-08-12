/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Mscale.h
 *
 * Code generation for function 'Mscale'
 *
 */

#ifndef MSCALE_H
#define MSCALE_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
double Mscale(const emxArray_real_T *u, const emxArray_real_T *psifunc_c1,
              double psifunc_kc1, const char psifunc_class_data[],
              const int psifunc_class_size[2], double initialsc, double tol);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (Mscale.h) */
