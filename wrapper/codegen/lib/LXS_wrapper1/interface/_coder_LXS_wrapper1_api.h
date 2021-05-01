/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_LXS_wrapper1_api.h
 *
 * Code generation for function 'LXS_wrapper1'
 *
 */

#ifndef _CODER_LXS_WRAPPER1_API_H
#define _CODER_LXS_WRAPPER1_API_H

/* Include files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Type Definitions */
#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct {
  real_T bestr;
  real_T refsteps;
  real_T refstepsbestr;
  real_T reftol;
  real_T reftolbestr;
} struct0_T;
#endif /* typedef_struct0_T */

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

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T {
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_boolean_T */
#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T
typedef struct emxArray_boolean_T emxArray_boolean_T;
#endif /* typedef_emxArray_boolean_T */

#ifndef typedef_struct1_T
#define typedef_struct1_T
typedef struct {
  emxArray_boolean_T *weights;
  boolean_T rew;
  emxArray_real_T *beta;
  real_T scale;
  emxArray_real_T *residuals;
  emxArray_real_T *bs;
  emxArray_real_T *outliers;
  real_T conflev;
  real_T h;
  real_T singsub;
  emxArray_real_T *X;
  emxArray_real_T *y;
  char_T class[3];
} struct1_T;
#endif /* typedef_struct1_T */

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void LXS_wrapper1(emxArray_real_T *y, emxArray_real_T *X,
                  real_T bonflevoutX_data[], int32_T bonflevoutX_size[2],
                  real_T conflev, real_T h, boolean_T intercept, struct0_T *lms,
                  boolean_T msg, boolean_T nocheck, boolean_T nomes,
                  real_T nsamp, boolean_T rew, boolean_T yxsave, struct1_T *out,
                  emxArray_real_T *C);

void LXS_wrapper1_api(const mxArray *const prhs[13], int32_T nlhs,
                      const mxArray *plhs[2]);

void LXS_wrapper1_atexit(void);

void LXS_wrapper1_initialize(void);

void LXS_wrapper1_terminate(void);

void LXS_wrapper1_xil_shutdown(void);

void LXS_wrapper1_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (_coder_LXS_wrapper1_api.h) */
