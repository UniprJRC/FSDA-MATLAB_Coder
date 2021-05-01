/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LXS.h
 *
 * Code generation for function 'LXS'
 *
 */

#ifndef LXS_H
#define LXS_H

/* Include files */
#include "LXS_wrapper1_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void IRWLSreg(const emxArray_real_T *y, const emxArray_real_T *X,
              const emxArray_real_T *initialbeta, double refsteps,
              double reftol, double h, emxArray_real_T *outIRWLS_betarw,
              double *outIRWLS_numscale2rw, emxArray_real_T *outIRWLS_weights);

double asvar(double h, double n);

double corfactorREW(double n, double alpha);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (LXS.h) */
