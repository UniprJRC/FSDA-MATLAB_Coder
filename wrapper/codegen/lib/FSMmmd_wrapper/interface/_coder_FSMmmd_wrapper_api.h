/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_FSMmmd_wrapper_api.h
 *
 * Code generation for function 'FSMmmd_wrapper'
 *
 */

#ifndef _CODER_FSMMMD_WRAPPER_API_H
#define _CODER_FSMMMD_WRAPPER_API_H

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

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void FSMmmd_wrapper(emxArray_real_T *Y, emxArray_real_T *bsb,
                    emxArray_real_T *bsbsteps, real_T init, boolean_T msg,
                    boolean_T nocheck, emxArray_real_T *mmd,
                    emxArray_real_T *Un, emxArray_real_T *BB);

void FSMmmd_wrapper_api(const mxArray *const prhs[6], int32_T nlhs,
                        const mxArray *plhs[3]);

void FSMmmd_wrapper_atexit(void);

void FSMmmd_wrapper_initialize(void);

void FSMmmd_wrapper_terminate(void);

void FSMmmd_wrapper_xil_shutdown(void);

void FSMmmd_wrapper_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (_coder_FSMmmd_wrapper_api.h) */
