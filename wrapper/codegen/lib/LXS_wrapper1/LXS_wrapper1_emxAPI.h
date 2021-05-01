/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LXS_wrapper1_emxAPI.h
 *
 * Code generation for function 'LXS_wrapper1_emxAPI'
 *
 */

#ifndef LXS_WRAPPER1_EMXAPI_H
#define LXS_WRAPPER1_EMXAPI_H

/* Include files */
#include "LXS_wrapper1_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern emxArray_boolean_T *emxCreateND_boolean_T(int numDimensions,
                                                 const int *size);

extern emxArray_real_T *emxCreateND_real_T(int numDimensions, const int *size);

extern emxArray_boolean_T *
emxCreateWrapperND_boolean_T(bool *data, int numDimensions, const int *size);

extern emxArray_real_T *
emxCreateWrapperND_real_T(double *data, int numDimensions, const int *size);

extern emxArray_boolean_T *emxCreateWrapper_boolean_T(bool *data, int rows,
                                                      int cols);

extern emxArray_real_T *emxCreateWrapper_real_T(double *data, int rows,
                                                int cols);

extern emxArray_boolean_T *emxCreate_boolean_T(int rows, int cols);

extern emxArray_real_T *emxCreate_real_T(int rows, int cols);

extern void emxDestroyArray_boolean_T(emxArray_boolean_T *emxArray);

extern void emxDestroyArray_real_T(emxArray_real_T *emxArray);

extern void emxDestroy_struct1_T(struct1_T emxArray);

extern void emxInitArray_real_T(emxArray_real_T **pEmxArray, int numDimensions);

extern void emxInit_struct1_T(struct1_T *pStruct);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (LXS_wrapper1_emxAPI.h) */
