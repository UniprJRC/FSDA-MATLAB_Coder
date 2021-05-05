/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * randperm.h
 *
 * Code generation for function 'randperm'
 *
 */

#ifndef RANDPERM_H
#define RANDPERM_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_randperm(double n, double k, emxArray_real_T *p);

void randperm(double n, emxArray_real_T *p);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (randperm.h) */
