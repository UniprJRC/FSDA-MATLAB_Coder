/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sortIdx.h
 *
 * Code generation for function 'sortIdx'
 *
 */

#ifndef SORTIDX_H
#define SORTIDX_H

/* Include files */
#include "LXS_wrapper_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_sortIdx(emxArray_real_T *x, emxArray_int32_T *idx);

void sortIdx(const emxArray_real_T *x, emxArray_int32_T *idx);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (sortIdx.h) */
