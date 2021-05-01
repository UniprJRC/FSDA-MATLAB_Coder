/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSM_wrapper_emxutil.h
 *
 * Code generation for function 'FSM_wrapper_emxutil'
 *
 */

#ifndef FSM_WRAPPER_EMXUTIL_H
#define FSM_WRAPPER_EMXUTIL_H

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
extern void
c_emxInitStruct_matlab_internal(e_matlab_internal_coder_tabular *pStruct);

extern void
d_emxInitStruct_matlab_internal(f_matlab_internal_coder_tabular *pStruct);

extern void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray,
                                        int oldNumel);

extern void emxEnsureCapacity_cell_wrap_36(emxArray_cell_wrap_36 *emxArray,
                                           int oldNumel);

extern void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int oldNumel);

extern void emxEnsureCapacity_creal_T(emxArray_creal_T *emxArray, int oldNumel);

extern void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int oldNumel);

extern void emxEnsureCapacity_real32_T(emxArray_real32_T *emxArray,
                                       int oldNumel);

extern void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel);

extern void emxEnsureCapacity_uint32_T(emxArray_uint32_T *emxArray,
                                       int oldNumel);

extern void emxExpand_cell_wrap_36(emxArray_cell_wrap_36 *emxArray,
                                   int fromIndex, int toIndex);

extern void emxFreeMatrix_cell_wrap_6(cell_wrap_6 pMatrix[4]);

extern void emxFreeStruct_captured_var(c_captured_var *pStruct);

extern void emxFreeStruct_captured_var1(d_captured_var *pStruct);

extern void emxFreeStruct_cell_wrap_36(cell_wrap_36 *pStruct);

extern void emxFreeStruct_cell_wrap_6(cell_wrap_6 *pStruct);

extern void emxFreeStruct_struct0_T(struct0_T *pStruct);

extern void emxFreeStruct_struct1_T(struct1_T *pStruct);

extern void emxFreeStruct_struct2_T(struct2_T *pStruct);

extern void emxFreeStruct_struct5_T(struct5_T *pStruct);

extern void emxFreeStruct_struct6_T(struct6_T *pStruct);

extern void emxFreeStruct_struct8_T(struct8_T *pStruct);

extern void emxFreeStruct_struct_T(struct_T *pStruct);

extern void emxFreeStruct_struct_T1(b_struct_T *pStruct);

extern void emxFreeStruct_table(table *pStruct);

extern void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);

extern void emxFree_cell_wrap_36(emxArray_cell_wrap_36 **pEmxArray);

extern void emxFree_char_T(emxArray_char_T **pEmxArray);

extern void emxFree_creal_T(emxArray_creal_T **pEmxArray);

extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);

extern void emxFree_real32_T(emxArray_real32_T **pEmxArray);

extern void emxFree_real_T(emxArray_real_T **pEmxArray);

extern void emxFree_uint32_T(emxArray_uint32_T **pEmxArray);

extern void emxInitMatrix_cell_wrap_48(cell_wrap_48 *pMatrix);

extern void emxInitMatrix_cell_wrap_50(cell_wrap_50 pMatrix[4]);

extern void emxInitMatrix_cell_wrap_6(cell_wrap_6 pMatrix[4]);

extern void emxInitStruct_captured_var(c_captured_var *pStruct);

extern void emxInitStruct_captured_var1(d_captured_var *pStruct);

extern void emxInitStruct_captured_var2(d_captured_var *pStruct);

extern void emxInitStruct_cell_wrap_36(cell_wrap_36 *pStruct);

extern void emxInitStruct_cell_wrap_48(cell_wrap_48 *pStruct);

extern void emxInitStruct_cell_wrap_50(cell_wrap_50 *pStruct);

extern void emxInitStruct_cell_wrap_6(cell_wrap_6 *pStruct);

extern void emxInitStruct_struct0_T(struct0_T *pStruct);

extern void emxInitStruct_struct1_T(struct1_T *pStruct);

extern void emxInitStruct_struct2_T(struct2_T *pStruct);

extern void emxInitStruct_struct5_T(struct5_T *pStruct);

extern void emxInitStruct_struct6_T(struct6_T *pStruct);

extern void emxInitStruct_struct7_T(struct7_T *pStruct);

extern void emxInitStruct_struct8_T(struct8_T *pStruct);

extern void emxInitStruct_struct_T(struct_T *pStruct);

extern void emxInitStruct_struct_T1(b_struct_T *pStruct);

extern void emxInitStruct_table(table *pStruct);

extern void emxInit_boolean_T(emxArray_boolean_T **pEmxArray,
                              int numDimensions);

extern void emxInit_cell_wrap_36(emxArray_cell_wrap_36 **pEmxArray,
                                 int numDimensions);

extern void emxInit_char_T(emxArray_char_T **pEmxArray, int numDimensions);

extern void emxInit_creal_T(emxArray_creal_T **pEmxArray, int numDimensions);

extern void emxInit_int32_T(emxArray_int32_T **pEmxArray, int numDimensions);

extern void emxInit_real32_T(emxArray_real32_T **pEmxArray, int numDimensions);

extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);

extern void emxInit_uint32_T(emxArray_uint32_T **pEmxArray, int numDimensions);

extern void emxTrim_cell_wrap_36(emxArray_cell_wrap_36 *emxArray, int fromIndex,
                                 int toIndex);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSM_wrapper_emxutil.h) */
