/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * quickselect.h
 *
 * Code generation for function 'quickselect'
 *
 */

#ifndef QUICKSELECT_H
#define QUICKSELECT_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void quickselect(emxArray_real_T *v, int n, int vlen, double *vn, int *nfirst,
                 int *nlast);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (quickselect.h) */
