/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_LTSts_wrapper_api.h
 *
 * Code generation for function 'LTSts_wrapper'
 *
 */

#ifndef _CODER_LTSTS_WRAPPER_API_H
#define _CODER_LTSTS_WRAPPER_API_H

/* Include files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Type Definitions */
#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct {
  real_T wlength;
  real_T typeres;
  real_T huberc;
} struct0_T;
#endif /* typedef_struct0_T */

#ifndef typedef_struct1_T
#define typedef_struct1_T
typedef struct {
  real_T bestr;
  real_T refsteps;
  real_T refstepsbestr;
  real_T reftol;
  real_T reftolbestr;
} struct1_T;
#endif /* typedef_struct1_T */

#ifndef typedef_c_matlab_internal_coder_tabular
#define typedef_c_matlab_internal_coder_tabular
typedef struct {
  real_T length;
} c_matlab_internal_coder_tabular;
#endif /* typedef_c_matlab_internal_coder_tabular */

#ifndef enum_d_matlab_internal_coder_tabular
#define enum_d_matlab_internal_coder_tabular
enum d_matlab_internal_coder_tabular
{
  unset = 0, /* Default value */
  continuous,
  step,
  event
};
#endif /* enum_d_matlab_internal_coder_tabular */
#ifndef typedef_d_matlab_internal_coder_tabular
#define typedef_d_matlab_internal_coder_tabular
typedef enum d_matlab_internal_coder_tabular d_matlab_internal_coder_tabular;
#endif /* typedef_d_matlab_internal_coder_tabular */

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

#ifndef struct_emxArray_real_T_1x1
#define struct_emxArray_real_T_1x1
struct emxArray_real_T_1x1 {
  real_T data[1];
  int32_T size[2];
};
#endif /* struct_emxArray_real_T_1x1 */
#ifndef typedef_emxArray_real_T_1x1
#define typedef_emxArray_real_T_1x1
typedef struct emxArray_real_T_1x1 emxArray_real_T_1x1;
#endif /* typedef_emxArray_real_T_1x1 */

#ifndef typedef_struct2_T
#define typedef_struct2_T
typedef struct {
  real_T lshift;
  real_T s;
  real_T trend;
  real_T seasonal;
  emxArray_real_T_1x1 ARp;
  emxArray_real_T *X;
} struct2_T;
#endif /* typedef_struct2_T */

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

#ifndef struct_emxArray_char_T_1x10
#define struct_emxArray_char_T_1x10
struct emxArray_char_T_1x10 {
  char_T data[10];
  int32_T size[2];
};
#endif /* struct_emxArray_char_T_1x10 */
#ifndef typedef_emxArray_char_T_1x10
#define typedef_emxArray_char_T_1x10
typedef struct emxArray_char_T_1x10 emxArray_char_T_1x10;
#endif /* typedef_emxArray_char_T_1x10 */

#ifndef typedef_cell_wrap_1
#define typedef_cell_wrap_1
typedef struct {
  emxArray_char_T_1x10 f1;
} cell_wrap_1;
#endif /* typedef_cell_wrap_1 */

#ifndef typedef_e_matlab_internal_coder_tabular
#define typedef_e_matlab_internal_coder_tabular
typedef struct {
  cell_wrap_1 labels[1];
  real_T length;
} e_matlab_internal_coder_tabular;
#endif /* typedef_e_matlab_internal_coder_tabular */

#ifndef typedef_cell_wrap_4
#define typedef_cell_wrap_4
typedef struct {
  emxArray_real_T *f1;
} cell_wrap_4;
#endif /* typedef_cell_wrap_4 */

#ifndef struct_emxArray_char_T_1x0
#define struct_emxArray_char_T_1x0
struct emxArray_char_T_1x0 {
  int32_T size[2];
};
#endif /* struct_emxArray_char_T_1x0 */
#ifndef typedef_emxArray_char_T_1x0
#define typedef_emxArray_char_T_1x0
typedef struct emxArray_char_T_1x0 emxArray_char_T_1x0;
#endif /* typedef_emxArray_char_T_1x0 */

#ifndef typedef_cell_wrap_3
#define typedef_cell_wrap_3
typedef struct {
  emxArray_char_T_1x0 f1;
} cell_wrap_3;
#endif /* typedef_cell_wrap_3 */

#ifndef typedef_struct4_T
#define typedef_struct4_T
typedef struct {
  emxArray_char_T_1x0 Description;
} struct4_T;
#endif /* typedef_struct4_T */

#ifndef typedef_f_matlab_internal_coder_tabular
#define typedef_f_matlab_internal_coder_tabular
typedef struct {
  real_T length;
  cell_wrap_3 descrs[4];
  cell_wrap_3 units[4];
  d_matlab_internal_coder_tabular continuity[4];
  boolean_T hasDescrs;
  boolean_T hasUnits;
  boolean_T hasContinuity;
  boolean_T hasCustomProps;
} f_matlab_internal_coder_tabular;
#endif /* typedef_f_matlab_internal_coder_tabular */

#ifndef typedef_table
#define typedef_table
typedef struct {
  c_matlab_internal_coder_tabular metaDim;
  e_matlab_internal_coder_tabular rowDim;
  f_matlab_internal_coder_tabular varDim;
  cell_wrap_4 data[4];
  struct4_T arrayProps;
} table;
#endif /* typedef_table */

#ifndef typedef_struct3_T
#define typedef_struct3_T
typedef struct {
  emxArray_real_T *RES;
  emxArray_real_T *Hsubset;
  emxArray_real_T *B;
  emxArray_real_T_1x1 posLS;
  emxArray_real_T *yhat;
  emxArray_real_T *outliers;
  emxArray_real_T *outliersPval;
  real_T scale;
  emxArray_real_T *numscale2;
  emxArray_real_T *BestIndexes;
  emxArray_real_T *residuals;
  emxArray_real_T *bs;
  real_T conflev;
  real_T h;
  emxArray_boolean_T *weights;
  real_T singsub;
  char_T class[5];
  emxArray_real_T *Likloc;
  emxArray_real_T *y;
  emxArray_real_T *X;
  emxArray_real_T *invXX;
  table Btable;
  real_T LastHarmonicPval;
  emxArray_real_T_1x1 LevelShiftPval;
} struct3_T;
#endif /* typedef_struct3_T */

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void LTSts_wrapper(emxArray_real_T *y, real_T conflev, boolean_T dispresults,
                   real_T h, boolean_T intercept, struct0_T *lshiftlocref,
                   struct1_T *lts, struct2_T *model, boolean_T msg,
                   real_T nbestindexes, boolean_T nocheck, real_T nsamp_data[],
                   int32_T nsamp_size[2], real_T refstepsALS, real_T reftolALS,
                   real_T SmallSampleCor, boolean_T yxsave, struct3_T *out,
                   emxArray_real_T *C);

void LTSts_wrapper_api(const mxArray *const prhs[16], int32_T nlhs,
                       const mxArray *plhs[2]);

void LTSts_wrapper_atexit(void);

void LTSts_wrapper_initialize(void);

void LTSts_wrapper_terminate(void);

void LTSts_wrapper_xil_shutdown(void);

void LTSts_wrapper_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (_coder_LTSts_wrapper_api.h) */
