/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * HAwei.h
 *
 * Code generation for function 'HAwei'
 *
 */

#ifndef HAWEI_H
#define HAWEI_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void HAwei(const emxArray_real_T *u, const double ctuning_data[],
           const int ctuning_size[2], emxArray_real_T *w);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (HAwei.h) */
