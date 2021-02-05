/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_addt_api.h
 *
 * Code generation for function 'addt'
 *
 */

#ifndef _CODER_ADDT_API_H
#define _CODER_ADDT_API_H

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

#ifndef typedef_emxArray_creal_T_1
#define typedef_emxArray_creal_T_1

typedef struct {
  creal_T data[1];
  int32_T size[1];
} emxArray_creal_T_1;

#endif                                 /*typedef_emxArray_creal_T_1*/

#ifndef typedef_emxArray_creal_T_1x1
#define typedef_emxArray_creal_T_1x1

typedef struct {
  creal_T data[1];
  int32_T size[2];
} emxArray_creal_T_1x1;

#endif                                 /*typedef_emxArray_creal_T_1x1*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  emxArray_creal_T_1 b;
  emxArray_creal_T_1 S2add;
  emxArray_creal_T_1x1 Tadd;
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
  void addt(emxArray_real_T *y, emxArray_real_T *X, emxArray_real_T *w,
            boolean_T varargin_2, real_T varargin_4_data[], int32_T
            varargin_4_size[2], real_T varargin_6, real_T varargin_8, real_T
            varargin_10, real_T varargin_12, boolean_T varargin_14,
            emxArray_real_T *varargin_16, struct0_T *out);
  void addt_api(const mxArray * const prhs[19], const mxArray *plhs[1]);
  void addt_atexit(void);
  void addt_initialize(void);
  void addt_terminate(void);
  void addt_xil_shutdown(void);
  void addt_xil_terminate(void);

#ifdef __cplusplus

}
#endif
#endif

/* End of code generation (_coder_addt_api.h) */
