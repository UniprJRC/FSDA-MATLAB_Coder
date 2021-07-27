/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * HYPwei.h
 *
 * Code generation for function 'HYPwei'
 *
 */

#ifndef HYPWEI_H
#define HYPWEI_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void HYPwei(const emxArray_real_T *u, const double cktuning_data[],
            const int cktuning_size[2], emxArray_real_T *w);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (HYPwei.h) */
