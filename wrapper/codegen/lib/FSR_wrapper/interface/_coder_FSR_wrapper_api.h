/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_FSR_wrapper_api.h
 *
 * Code generation for function 'FSR_wrapper'
 *
 */

#ifndef _CODER_FSR_WRAPPER_API_H
#define _CODER_FSR_WRAPPER_API_H

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

#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct {
  emxArray_real_T *ListOut;
  emxArray_real_T *outliers;
  emxArray_real_T *mdr;
  emxArray_real_T *Un;
  emxArray_real_T *nout;
  emxArray_real_T *beta;
  real_T scale;
  emxArray_real_T *mdag;
  emxArray_real_T *ListCl;
  emxArray_real_T *VIOMout;
  emxArray_real_T *fittedvalues;
  emxArray_real_T *residuals;
  char_T class[3];
} struct0_T;
#endif /* typedef_struct0_T */

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void FSR_wrapper(emxArray_real_T *y, emxArray_real_T *X, boolean_T bsbmfullrank,
                 real_T bonflev_data[], int32_T bonflev_size[2], real_T h,
                 real_T init, boolean_T intercept, real_T lms, boolean_T msg,
                 boolean_T nocheck, real_T nsamp, real_T threshoutX_data[],
                 int32_T threshoutX_size[2], boolean_T weak, struct0_T *out);

void FSR_wrapper_api(const mxArray *const prhs[13], const mxArray **plhs);

void FSR_wrapper_atexit(void);

void FSR_wrapper_initialize(void);

void FSR_wrapper_terminate(void);

void FSR_wrapper_xil_shutdown(void);

void FSR_wrapper_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (_coder_FSR_wrapper_api.h) */
