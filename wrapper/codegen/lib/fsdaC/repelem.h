/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repelem.h
 *
 * Code generation for function 'repelem'
 *
 */

#ifndef REPELEM_H
#define REPELEM_H

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
void repelem(const double x_data[], const int x_size[2], double varargin_1,
             emxArray_real_T *y);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (repelem.h) */
