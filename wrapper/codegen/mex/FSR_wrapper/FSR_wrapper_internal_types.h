/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSR_wrapper_internal_types.h
 *
 * Code generation for function 'FSR_wrapper'
 *
 */

#pragma once

/* Include files */
#include "FSR_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef struct_emxArray_char_T_1x310
#define struct_emxArray_char_T_1x310
struct emxArray_char_T_1x310 {
  char_T data[310];
  int32_T size[2];
};
#endif /* struct_emxArray_char_T_1x310 */
#ifndef typedef_emxArray_char_T_1x310
#define typedef_emxArray_char_T_1x310
typedef struct emxArray_char_T_1x310 emxArray_char_T_1x310;
#endif /* typedef_emxArray_char_T_1x310 */

#ifndef typedef_rtDesignRangeCheckInfo
#define typedef_rtDesignRangeCheckInfo
typedef struct {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
} rtDesignRangeCheckInfo;
#endif /* typedef_rtDesignRangeCheckInfo */

/* End of code generation (FSR_wrapper_internal_types.h) */
