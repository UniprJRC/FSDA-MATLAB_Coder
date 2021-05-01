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

#pragma once

/* Include files */
#include "LTSts_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void c_emxInitStruct_matlab_internal(e_matlab_internal_coder_tabular *pStruct);

void d_emxInitStruct_matlab_internal(f_matlab_internal_coder_tabular *pStruct);

void emxEnsureCapacity_boolean_T(const emlrtStack *sp,
                                 emxArray_boolean_T *emxArray, int32_T oldNumel,
                                 const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_char_T(const emlrtStack *sp, emxArray_char_T *emxArray,
                              int32_T oldNumel,
                              const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_int32_T(const emlrtStack *sp, emxArray_int32_T *emxArray,
                               int32_T oldNumel,
                               const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_ptrdiff_t(const emlrtStack *sp,
                                 emxArray_ptrdiff_t *emxArray, int32_T oldNumel,
                                 const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_real_T(const emlrtStack *sp, emxArray_real_T *emxArray,
                              int32_T oldNumel,
                              const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_uint32_T(const emlrtStack *sp,
                                emxArray_uint32_T *emxArray, int32_T oldNumel,
                                const emlrtRTEInfo *srcLocation);

void emxFreeMatrix_cell_wrap_4(cell_wrap_4 pMatrix[4]);

void emxFreeStruct_captured_var(c_captured_var *pStruct);

void emxFreeStruct_captured_var1(d_captured_var *pStruct);

void emxFreeStruct_cell_wrap_4(cell_wrap_4 *pStruct);

void emxFreeStruct_struct2_T(struct2_T *pStruct);

void emxFreeStruct_struct3_T(struct3_T *pStruct);

void emxFreeStruct_struct_T(struct_T *pStruct);

void emxFreeStruct_table(table *pStruct);

void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);

void emxFree_char_T(emxArray_char_T **pEmxArray);

void emxFree_int32_T(emxArray_int32_T **pEmxArray);

void emxFree_ptrdiff_t(emxArray_ptrdiff_t **pEmxArray);

void emxFree_real_T(emxArray_real_T **pEmxArray);

void emxFree_uint32_T(emxArray_uint32_T **pEmxArray);

void emxInitMatrix_cell_wrap_1(cell_wrap_1 *pMatrix);

void emxInitMatrix_cell_wrap_3(cell_wrap_3 pMatrix[4]);

void emxInitMatrix_cell_wrap_4(const emlrtStack *sp, cell_wrap_4 pMatrix[4],
                               const emlrtRTEInfo *srcLocation,
                               boolean_T doPush);

void emxInitStruct_captured_var(const emlrtStack *sp, c_captured_var *pStruct,
                                const emlrtRTEInfo *srcLocation,
                                boolean_T doPush);

void emxInitStruct_captured_var1(const emlrtStack *sp, d_captured_var *pStruct,
                                 const emlrtRTEInfo *srcLocation,
                                 boolean_T doPush);

void emxInitStruct_captured_var2(const emlrtStack *sp, d_captured_var *pStruct,
                                 const emlrtRTEInfo *srcLocation,
                                 boolean_T doPush);

void emxInitStruct_cell_wrap_1(cell_wrap_1 *pStruct);

void emxInitStruct_cell_wrap_3(cell_wrap_3 *pStruct);

void emxInitStruct_cell_wrap_4(const emlrtStack *sp, cell_wrap_4 *pStruct,
                               const emlrtRTEInfo *srcLocation,
                               boolean_T doPush);

void emxInitStruct_struct2_T(const emlrtStack *sp, struct2_T *pStruct,
                             const emlrtRTEInfo *srcLocation, boolean_T doPush);

void emxInitStruct_struct3_T(const emlrtStack *sp, struct3_T *pStruct,
                             const emlrtRTEInfo *srcLocation, boolean_T doPush);

void emxInitStruct_struct4_T(struct4_T *pStruct);

void emxInitStruct_struct_T(const emlrtStack *sp, struct_T *pStruct,
                            const emlrtRTEInfo *srcLocation, boolean_T doPush);

void emxInitStruct_table(const emlrtStack *sp, table *pStruct,
                         const emlrtRTEInfo *srcLocation, boolean_T doPush);

void emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T **pEmxArray,
                       int32_T numDimensions, const emlrtRTEInfo *srcLocation,
                       boolean_T doPush);

void emxInit_char_T(const emlrtStack *sp, emxArray_char_T **pEmxArray,
                    int32_T numDimensions, const emlrtRTEInfo *srcLocation,
                    boolean_T doPush);

void emxInit_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray,
                     int32_T numDimensions, const emlrtRTEInfo *srcLocation,
                     boolean_T doPush);

void emxInit_ptrdiff_t(const emlrtStack *sp, emxArray_ptrdiff_t **pEmxArray,
                       int32_T numDimensions, const emlrtRTEInfo *srcLocation,
                       boolean_T doPush);

void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
                    int32_T numDimensions, const emlrtRTEInfo *srcLocation,
                    boolean_T doPush);

void emxInit_uint32_T(const emlrtStack *sp, emxArray_uint32_T **pEmxArray,
                      int32_T numDimensions, const emlrtRTEInfo *srcLocation,
                      boolean_T doPush);

/* End of code generation (LTSts_wrapper_emxutil.h) */