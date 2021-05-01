/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_FSRfan_wrapper_api.h
 *
 * Code generation for function 'FSRfan_wrapper'
 *
 */

#ifndef _CODER_FSRFAN_WRAPPER_API_H
#define _CODER_FSRFAN_WRAPPER_API_H

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

#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T
struct emxArray_char_T {
  char_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_char_T */
#ifndef typedef_emxArray_char_T
#define typedef_emxArray_char_T
typedef struct emxArray_char_T emxArray_char_T;
#endif /* typedef_emxArray_char_T */

#ifndef typedef_cell_wrap_0
#define typedef_cell_wrap_0
typedef struct {
  emxArray_real_T *f1;
} cell_wrap_0;
#endif /* typedef_cell_wrap_0 */

#ifndef typedef_emxArray_cell_wrap_0
#define typedef_emxArray_cell_wrap_0
typedef struct {
  cell_wrap_0 *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_cell_wrap_0;
#endif /* typedef_emxArray_cell_wrap_0 */

#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct {
  emxArray_real_T *Score;
  emxArray_real_T *la;
  emxArray_real_T *bs;
  emxArray_cell_wrap_0 *Un;
  emxArray_real_T *y;
  emxArray_real_T *X;
  emxArray_real_T *Scorep;
  emxArray_real_T *Scoren;
  emxArray_real_T *Scoreb;
} struct0_T;
#endif /* typedef_struct0_T */

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void FSRfan_wrapper(emxArray_real_T *y, emxArray_real_T *X, boolean_T intercept,
                    boolean_T nocheck, emxArray_real_T *la, real_T h,
                    real_T nsamp, emxArray_real_T *lms, real_T init,
                    emxArray_char_T *family, boolean_T msg, struct0_T *out);

void FSRfan_wrapper_api(const mxArray *const prhs[11], const mxArray **plhs);

void FSRfan_wrapper_atexit(void);

void FSRfan_wrapper_initialize(void);

void FSRfan_wrapper_terminate(void);

void FSRfan_wrapper_xil_shutdown(void);

void FSRfan_wrapper_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (_coder_FSRfan_wrapper_api.h) */
