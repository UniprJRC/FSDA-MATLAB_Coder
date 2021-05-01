/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_FSRbsb_wrapper_api.h
 *
 * Code generation for function 'FSRbsb_wrapper'
 *
 */

#ifndef _CODER_FSRBSB_WRAPPER_API_H
#define _CODER_FSRBSB_WRAPPER_API_H

/* Include files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T {
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real_T */
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /* typedef_emxArray_real_T */

#ifndef struct_emxArray_real32_T
#define struct_emxArray_real32_T
struct emxArray_real32_T {
  real32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real32_T */
#ifndef typedef_emxArray_real32_T
#define typedef_emxArray_real32_T
typedef struct emxArray_real32_T emxArray_real32_T;
#endif /* typedef_emxArray_real32_T */

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void FSRbsb_wrapper(emxArray_real_T *y, emxArray_real_T *X,
                    emxArray_real_T *bsb, emxArray_real_T *bsbsteps,
                    real_T init, boolean_T intercept, boolean_T msg,
                    boolean_T nocheck, emxArray_real_T *Un,
                    emxArray_real32_T *BB);

void FSRbsb_wrapper_api(const mxArray *const prhs[8], int32_T nlhs,
                        const mxArray *plhs[2]);

void FSRbsb_wrapper_atexit(void);

void FSRbsb_wrapper_initialize(void);

void FSRbsb_wrapper_terminate(void);

void FSRbsb_wrapper_xil_shutdown(void);

void FSRbsb_wrapper_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (_coder_FSRbsb_wrapper_api.h) */
