/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fsdaC_emxutil.h
 *
 * Code generation for function 'fsdaC_emxutil'
 *
 */

#ifndef FSDAC_EMXUTIL_H
#define FSDAC_EMXUTIL_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void c_emxCopyStruct_anonymous_funct(b_anonymous_function *dst,
                                            const b_anonymous_function *src);

extern void c_emxFreeStruct_anonymous_funct(anonymous_function *pStruct);

extern void c_emxInitStruct_anonymous_funct(b_anonymous_function *pStruct);

extern void
c_emxInitStruct_matlab_internal(e_matlab_internal_coder_tabular *pStruct);

extern void d_emxCopyStruct_anonymous_funct(anonymous_function *dst,
                                            const anonymous_function *src);

extern void d_emxFreeStruct_anonymous_funct(b_anonymous_function *pStruct);

extern void d_emxInitStruct_anonymous_funct(anonymous_function *pStruct);

extern void
d_emxInitStruct_matlab_internal(f_matlab_internal_coder_tabular *pStruct);

extern void emxCopyStruct_struct_T(h_struct_T *dst, const h_struct_T *src);

extern void emxCopyStruct_struct_T1(g_struct_T *dst, const g_struct_T *src);

extern void emxCopyStruct_struct_T2(f_struct_T *dst, const f_struct_T *src);

extern void emxCopy_boolean_T(emxArray_boolean_T **dst,
                              emxArray_boolean_T *const *src);

extern void emxCopy_real_T(emxArray_real_T **dst, emxArray_real_T *const *src);

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

extern void emxFreeStruct_struct2_T(struct2_T *pStruct);

extern void emxFreeStruct_struct_FSM_T(struct_FSM_T *pStruct);

extern void emxFreeStruct_struct_FSR_T(struct_FSR_T *pStruct);

extern void emxFreeStruct_struct_FSRfan_T(struct_FSRfan_T *pStruct);

extern void emxFreeStruct_struct_LTSts_T(struct_LTSts_T *pStruct);

extern void emxFreeStruct_struct_LXS_T(struct_LXS_T *pStruct);

extern void emxFreeStruct_struct_T(struct_T *pStruct);

extern void emxFreeStruct_struct_T1(b_struct_T *pStruct);

extern void emxFreeStruct_struct_T2(c_struct_T *pStruct);

extern void emxFreeStruct_struct_T3(f_struct_T *pStruct);

extern void emxFreeStruct_struct_T4(g_struct_T *pStruct);

extern void emxFreeStruct_struct_T5(h_struct_T *pStruct);

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

extern void emxInitStruct_captured_var1(c_captured_var *pStruct);

extern void emxInitStruct_captured_var2(d_captured_var *pStruct);

extern void emxInitStruct_cell_wrap_36(cell_wrap_36 *pStruct);

extern void emxInitStruct_cell_wrap_48(cell_wrap_48 *pStruct);

extern void emxInitStruct_cell_wrap_50(cell_wrap_50 *pStruct);

extern void emxInitStruct_cell_wrap_6(cell_wrap_6 *pStruct);

extern void emxInitStruct_struct2_T(struct2_T *pStruct);

extern void emxInitStruct_struct3_T(struct3_T *pStruct);

extern void emxInitStruct_struct_FSM_T(struct_FSM_T *pStruct);

extern void emxInitStruct_struct_FSR_T(struct_FSR_T *pStruct);

extern void emxInitStruct_struct_FSRfan_T(struct_FSRfan_T *pStruct);

extern void emxInitStruct_struct_LTSts_T(struct_LTSts_T *pStruct);

extern void emxInitStruct_struct_LXS_T(struct_LXS_T *pStruct);

extern void emxInitStruct_struct_T(struct_T *pStruct);

extern void emxInitStruct_struct_T1(b_struct_T *pStruct);

extern void emxInitStruct_struct_T2(c_struct_T *pStruct);

extern void emxInitStruct_struct_T3(h_struct_T *pStruct);

extern void emxInitStruct_struct_T4(g_struct_T *pStruct);

extern void emxInitStruct_struct_T5(f_struct_T *pStruct);

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
/* End of code generation (fsdaC_emxutil.h) */
