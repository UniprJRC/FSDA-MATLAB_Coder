/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sortrowsLE.h
 *
 * Code generation for function 'sortrowsLE'
 *
 */

#ifndef SORTROWSLE_H
#define SORTROWSLE_H

/* Include files */
#include "FSM_wrapper_types.h"
#include "rtwtypes.h"
#include "omp.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
bool sortrowsLE(const emxArray_real_T *v, const int col[2], int irow1,
                int irow2);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (sortrowsLE.h) */
