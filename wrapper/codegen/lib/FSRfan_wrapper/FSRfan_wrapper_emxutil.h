/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRfan_wrapper_emxutil.h
 *
 * Code generation for function 'FSRfan_wrapper_emxutil'
 *
 */

#ifndef FSRFAN_WRAPPER_EMXUTIL_H
#define FSRFAN_WRAPPER_EMXUTIL_H

/* Include files */
#include "FSRfan_wrapper_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray,
                                        int oldNumel);

extern void emxEnsureCapacity_cell_wrap_0(emxArray_cell_wrap_0 *emxArray,
                                          int oldNumel);

extern void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int oldNumel);

extern void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel);

extern void emxExpand_cell_wrap_0(emxArray_cell_wrap_0 *emxArray, int fromIndex,
                                  int toIndex);

extern void emxFreeStruct_cell_wrap_0(cell_wrap_0 *pStruct);

extern void emxFreeStruct_struct0_T(struct0_T *pStruct);

extern void emxFreeStruct_struct_T(struct_T *pStruct);

extern void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);

extern void emxFree_cell_wrap_0(emxArray_cell_wrap_0 **pEmxArray);

extern void emxFree_char_T(emxArray_char_T **pEmxArray);

extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);

extern void emxFree_real_T(emxArray_real_T **pEmxArray);

extern void emxInitStruct_cell_wrap_0(cell_wrap_0 *pStruct);

extern void emxInitStruct_struct0_T(struct0_T *pStruct);

extern void emxInitStruct_struct_T(struct_T *pStruct);

extern void emxInit_boolean_T(emxArray_boolean_T **pEmxArray,
                              int numDimensions);

extern void emxInit_cell_wrap_0(emxArray_cell_wrap_0 **pEmxArray,
                                int numDimensions);

extern void emxInit_char_T(emxArray_char_T **pEmxArray, int numDimensions);

extern void emxInit_int32_T(emxArray_int32_T **pEmxArray, int numDimensions);

extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);

extern void emxTrim_cell_wrap_0(emxArray_cell_wrap_0 *emxArray, int fromIndex,
                                int toIndex);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSRfan_wrapper_emxutil.h) */
