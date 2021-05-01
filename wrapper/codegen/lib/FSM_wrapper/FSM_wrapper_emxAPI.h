/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSM_wrapper_emxAPI.h
 *
 * Code generation for function 'FSM_wrapper_emxAPI'
 *
 */

#ifndef FSM_WRAPPER_EMXAPI_H
#define FSM_WRAPPER_EMXAPI_H

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
extern emxArray_boolean_T *emxCreateND_boolean_T(int numDimensions,
                                                 const int *size);

extern emxArray_cell_wrap_36 *emxCreateND_cell_wrap_36(int numDimensions,
                                                       const int *size);

extern emxArray_char_T *emxCreateND_char_T(int numDimensions, const int *size);

extern emxArray_real32_T *emxCreateND_real32_T(int numDimensions,
                                               const int *size);

extern emxArray_real_T *emxCreateND_real_T(int numDimensions, const int *size);

extern emxArray_boolean_T *
emxCreateWrapperND_boolean_T(bool *data, int numDimensions, const int *size);

extern emxArray_cell_wrap_36 *
emxCreateWrapperND_cell_wrap_36(cell_wrap_36 *data, int numDimensions,
                                const int *size);

extern emxArray_char_T *emxCreateWrapperND_char_T(char *data, int numDimensions,
                                                  const int *size);

extern emxArray_real32_T *
emxCreateWrapperND_real32_T(float *data, int numDimensions, const int *size);

extern emxArray_real_T *
emxCreateWrapperND_real_T(double *data, int numDimensions, const int *size);

extern emxArray_boolean_T *emxCreateWrapper_boolean_T(bool *data, int rows,
                                                      int cols);

extern emxArray_cell_wrap_36 *emxCreateWrapper_cell_wrap_36(cell_wrap_36 *data,
                                                            int rows, int cols);

extern emxArray_char_T *emxCreateWrapper_char_T(char *data, int rows, int cols);

extern emxArray_real32_T *emxCreateWrapper_real32_T(float *data, int rows,
                                                    int cols);

extern emxArray_real_T *emxCreateWrapper_real_T(double *data, int rows,
                                                int cols);

extern emxArray_boolean_T *emxCreate_boolean_T(int rows, int cols);

extern emxArray_cell_wrap_36 *emxCreate_cell_wrap_36(int rows, int cols);

extern emxArray_char_T *emxCreate_char_T(int rows, int cols);

extern emxArray_real32_T *emxCreate_real32_T(int rows, int cols);

extern emxArray_real_T *emxCreate_real_T(int rows, int cols);

extern void emxDestroyArray_boolean_T(emxArray_boolean_T *emxArray);

extern void emxDestroyArray_cell_wrap_36(emxArray_cell_wrap_36 *emxArray);

extern void emxDestroyArray_char_T(emxArray_char_T *emxArray);

extern void emxDestroyArray_real32_T(emxArray_real32_T *emxArray);

extern void emxDestroyArray_real_T(emxArray_real_T *emxArray);

extern void emxDestroy_struct0_T(struct0_T emxArray);

extern void emxDestroy_struct1_T(struct1_T emxArray);

extern void emxDestroy_struct2_T(struct2_T emxArray);

extern void emxDestroy_struct5_T(struct5_T emxArray);

extern void emxDestroy_struct6_T(struct6_T emxArray);

extern void emxDestroy_struct8_T(struct8_T emxArray);

extern void emxInitArray_char_T(emxArray_char_T **pEmxArray, int numDimensions);

extern void emxInitArray_real32_T(emxArray_real32_T **pEmxArray,
                                  int numDimensions);

extern void emxInitArray_real_T(emxArray_real_T **pEmxArray, int numDimensions);

extern void emxInit_struct0_T(struct0_T *pStruct);

extern void emxInit_struct1_T(struct1_T *pStruct);

extern void emxInit_struct2_T(struct2_T *pStruct);

extern void emxInit_struct5_T(struct5_T *pStruct);

extern void emxInit_struct6_T(struct6_T *pStruct);

extern void emxInit_struct8_T(struct8_T *pStruct);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSM_wrapper_emxAPI.h) */