/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_addt_wrapper_api.h
 *
 * Code generation for function 'addt_wrapper'
 *
 */

#ifndef _CODER_ADDT_WRAPPER_API_H
#define _CODER_ADDT_WRAPPER_API_H

/* Include files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef struct_emxArray_real_T_1x1
#define struct_emxArray_real_T_1x1

struct emxArray_real_T_1x1
{
  real_T data[1];
  int32_T size[2];
};

#endif                                 /*struct_emxArray_real_T_1x1*/

#ifndef typedef_emxArray_real_T_1x1
#define typedef_emxArray_real_T_1x1

typedef struct emxArray_real_T_1x1 emxArray_real_T_1x1;

#endif                                 /*typedef_emxArray_real_T_1x1*/

#ifndef struct_emxArray_real_T_1
#define struct_emxArray_real_T_1

struct emxArray_real_T_1
{
  real_T data[1];
  int32_T size[1];
};

#endif                                 /*struct_emxArray_real_T_1*/

#ifndef typedef_emxArray_real_T_1
#define typedef_emxArray_real_T_1

typedef struct emxArray_real_T_1 emxArray_real_T_1;

#endif                                 /*typedef_emxArray_real_T_1*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  emxArray_real_T_1 b;
  emxArray_real_T_1 S2add;
  emxArray_real_T_1x1 Tadd;
  emxArray_real_T_1x1 pval;
} struct0_T;

#endif                                 /*typedef_struct0_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  void addt_wrapper(emxArray_real_T *y, emxArray_real_T *X, emxArray_real_T *w,
                    boolean_T intercept, real_T la_data[], int32_T la_size[2],
                    boolean_T nocheck, struct0_T *out);
  void addt_wrapper_api(const mxArray * const prhs[6], const mxArray *plhs[1]);
  void addt_wrapper_atexit(void);
  void addt_wrapper_initialize(void);
  void addt_wrapper_terminate(void);
  void addt_wrapper_xil_shutdown(void);
  void addt_wrapper_xil_terminate(void);

#ifdef __cplusplus

}
#endif
#endif

/* End of code generation (_coder_addt_wrapper_api.h) */
