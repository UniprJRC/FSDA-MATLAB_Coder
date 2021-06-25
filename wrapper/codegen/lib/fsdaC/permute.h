/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: permute.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef PERMUTE_H
#define PERMUTE_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_permute(const emxArray_real_T *a, emxArray_real_T *b);

void c_permute(const emxArray_real_T *a, emxArray_real_T *b);

void permute(const emxArray_real_T *a, emxArray_real_T *b);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for permute.h
 *
 * [EOF]
 */
