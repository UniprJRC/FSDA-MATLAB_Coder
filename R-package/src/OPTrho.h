/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * OPTrho.h
 *
 * Code generation for function 'OPTrho'
 *
 */

#ifndef OPTRHO_H
#define OPTRHO_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
double OPTrho(double u, double c);

void b_OPTrho(const emxArray_real_T *u, const emxArray_real_T *c,
              emxArray_real_T *rhoOPT);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (OPTrho.h) */
