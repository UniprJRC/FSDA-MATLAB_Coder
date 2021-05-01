/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * combineVectorElements.h
 *
 * Code generation for function 'combineVectorElements'
 *
 */

#ifndef COMBINEVECTORELEMENTS_H
#define COMBINEVECTORELEMENTS_H

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
void b_combineVectorElements(const emxArray_boolean_T *x, emxArray_int32_T *y);

void c_combineVectorElements(const emxArray_boolean_T *x, int y_data[],
                             int y_size[2]);

void combineVectorElements(const emxArray_real_T *x, emxArray_real_T *y);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (combineVectorElements.h) */
