/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: combineVectorElements.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef COMBINEVECTORELEMENTS_H
#define COMBINEVECTORELEMENTS_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_combineVectorElements(const emxArray_boolean_T *x, emxArray_int32_T *y);

void c_combineVectorElements(const emxArray_boolean_T *x, emxArray_int32_T *y);

void combineVectorElements(const emxArray_real_T *x, emxArray_real_T *y);

double d_combineVectorElements(const emxArray_real_T *x);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for combineVectorElements.h
 *
 * [EOF]
 */
