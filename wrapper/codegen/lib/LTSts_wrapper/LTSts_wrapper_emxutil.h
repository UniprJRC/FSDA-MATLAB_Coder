/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LTSts_wrapper_emxutil.h
 *
 * Code generation for function 'LTSts_wrapper_emxutil'
 *
 */

#ifndef LTSTS_WRAPPER_EMXUTIL_H
#define LTSTS_WRAPPER_EMXUTIL_H

/* Include files */
#include "LTSts_wrapper_types.h"
#include "rtwtypes.h"
#include "omp.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void
c_emxInitStruct_matlab_internal(e_matlab_internal_coder_tabular *pStruct);

extern void
d_emxInitStruct_matlab_internal(f_matlab_internal_coder_tabular *pStruct);

extern void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray,
                                        int oldNumel);

extern void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int oldNumel);

extern void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int oldNumel);

extern void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel);

extern void emxEnsureCapacity_uint32_T(emxArray_uint32_T *emxArray,
                                       int oldNumel);

extern void emxFreeMatrix_cell_wrap_4(cell_wrap_4 pMatrix[4]);

extern void emxFreeStruct_captured_var(c_captured_var *pStruct);

extern void emxFreeStruct_captured_var1(d_captured_var *pStruct);

extern void emxFreeStruct_cell_wrap_4(cell_wrap_4 *pStruct);

extern void emxFreeStruct_struct2_T(struct2_T *pStruct);

extern void emxFreeStruct_struct3_T(struct3_T *pStruct);

extern void emxFreeStruct_struct_T(struct_T *pStruct);

extern void emxFreeStruct_table(table *pStruct);

extern void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);

extern void emxFree_char_T(emxArray_char_T **pEmxArray);

extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);

extern void emxFree_real_T(emxArray_real_T **pEmxArray);

extern void emxFree_uint32_T(emxArray_uint32_T **pEmxArray);

extern void emxInitMatrix_cell_wrap_1(cell_wrap_1 *pMatrix);

extern void emxInitMatrix_cell_wrap_3(cell_wrap_3 pMatrix[4]);

extern void emxInitMatrix_cell_wrap_4(cell_wrap_4 pMatrix[4]);

extern void emxInitStruct_captured_var(c_captured_var *pStruct);

extern void emxInitStruct_captured_var1(d_captured_var *pStruct);

extern void emxInitStruct_captured_var2(d_captured_var *pStruct);

extern void emxInitStruct_cell_wrap_1(cell_wrap_1 *pStruct);

extern void emxInitStruct_cell_wrap_3(cell_wrap_3 *pStruct);

extern void emxInitStruct_cell_wrap_4(cell_wrap_4 *pStruct);

extern void emxInitStruct_struct2_T(struct2_T *pStruct);

extern void emxInitStruct_struct3_T(struct3_T *pStruct);

extern void emxInitStruct_struct4_T(struct4_T *pStruct);

extern void emxInitStruct_struct_T(struct_T *pStruct);

extern void emxInitStruct_table(table *pStruct);

extern void emxInit_boolean_T(emxArray_boolean_T **pEmxArray,
                              int numDimensions);

extern void emxInit_char_T(emxArray_char_T **pEmxArray, int numDimensions);

extern void emxInit_int32_T(emxArray_int32_T **pEmxArray, int numDimensions);

extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);

extern void emxInit_uint32_T(emxArray_uint32_T **pEmxArray, int numDimensions);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (LTSts_wrapper_emxutil.h) */
