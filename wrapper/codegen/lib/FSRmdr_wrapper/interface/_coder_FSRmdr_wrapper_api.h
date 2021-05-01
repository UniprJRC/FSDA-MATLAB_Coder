/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_FSRmdr_wrapper_api.h
 *
 * Code generation for function 'FSRmdr_wrapper'
 *
 */

#ifndef _CODER_FSRMDR_WRAPPER_API_H
#define _CODER_FSRMDR_WRAPPER_API_H

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
void FSRmdr_wrapper(emxArray_real_T *y, emxArray_real_T *X,
                    emxArray_real_T *bsb, boolean_T bsbmfullrank,
                    emxArray_real_T *bsbsteps, emxArray_real_T *constr,
                    real_T init, boolean_T intercept,
                    boolean_T internationaltrade, boolean_T msg,
                    boolean_T nocheck, real_T threshlevoutX_data[],
                    int32_T threshlevoutX_size[2], emxArray_real_T *mdr,
                    emxArray_real_T *Un, emxArray_real_T *BB,
                    emxArray_real_T *Bols, emxArray_real_T *S2);

void FSRmdr_wrapper_api(const mxArray *const prhs[12], int32_T nlhs,
                        const mxArray *plhs[5]);

void FSRmdr_wrapper_atexit(void);

void FSRmdr_wrapper_initialize(void);

void FSRmdr_wrapper_terminate(void);

void FSRmdr_wrapper_xil_shutdown(void);

void FSRmdr_wrapper_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (_coder_FSRmdr_wrapper_api.h) */
