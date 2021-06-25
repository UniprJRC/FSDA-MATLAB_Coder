/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * estepFS.h
 *
 * Code generation for function 'estepFS'
 *
 */

#ifndef ESTEPFS_H
#define ESTEPFS_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_estepFS(const emxArray_real_T *log_lh, double *obj,
               emxArray_real_T *varargout1);

double c_estepFS(const emxArray_real_T *log_lh);

void estepFS(const emxArray_real_T *log_lh, double *obj,
             emxArray_real_T *varargout1, emxArray_real_T *varargout2);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (estepFS.h) */
