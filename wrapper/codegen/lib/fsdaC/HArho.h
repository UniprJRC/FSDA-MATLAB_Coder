/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * HArho.h
 *
 * Code generation for function 'HArho'
 *
 */

#ifndef HARHO_H
#define HARHO_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
double HArho(double u, const emxArray_real_T *ctuning);

void b_HArho(const emxArray_real_T *u, const emxArray_real_T *ctuning,
             emxArray_real_T *rhoHA);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (HArho.h) */
