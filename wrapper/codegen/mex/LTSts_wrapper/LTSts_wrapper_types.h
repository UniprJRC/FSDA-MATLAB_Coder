/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LTSts_wrapper_types.h
 *
 * Code generation for function 'LTSts_wrapper'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include <stddef.h>

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

#ifndef enum_c_matlab_internal_coder_tabular
#define enum_c_matlab_internal_coder_tabular
enum c_matlab_internal_coder_tabular
{
  unset = 0, /* Default value */
  continuous,
  step,
  event
};
#endif /* enum_c_matlab_internal_coder_tabular */
#ifndef typedef_c_matlab_internal_coder_tabular
#define typedef_c_matlab_internal_coder_tabular
typedef enum c_matlab_internal_coder_tabular c_matlab_internal_coder_tabular;
#endif /* typedef_c_matlab_internal_coder_tabular */

#ifndef typedef_d_matlab_internal_coder_tabular
#define typedef_d_matlab_internal_coder_tabular
typedef struct {
  real_T length;
} d_matlab_internal_coder_tabular;
#endif /* typedef_d_matlab_internal_coder_tabular */

#ifndef typedef_captured_var
#define typedef_captured_var
typedef struct {
  real_T contents;
} captured_var;
#endif /* typedef_captured_var */

#ifndef typedef_b_captured_var
#define typedef_b_captured_var
typedef struct {
  boolean_T contents;
} b_captured_var;
#endif /* typedef_b_captured_var */

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

#ifndef typedef_c_captured_var
#define typedef_c_captured_var
typedef struct {
  emxArray_real_T *contents;
} c_captured_var;
#endif /* typedef_c_captured_var */

#ifndef typedef_d_captured_var
#define typedef_d_captured_var
typedef struct {
  emxArray_boolean_T *contents;
} d_captured_var;
#endif /* typedef_d_captured_var */

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

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T {
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_int32_T */
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /* typedef_emxArray_int32_T */

#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct {
  emxArray_real_T *betarw;
  emxArray_real_T *yhat;
  emxArray_boolean_T *weights;
  real_T exiflag;
  real_T numscale2rw;
} struct_T;
#endif /* typedef_struct_T */

#ifndef struct_emxArray_ptrdiff_t
#define struct_emxArray_ptrdiff_t
struct emxArray_ptrdiff_t {
  ptrdiff_t *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_ptrdiff_t */
#ifndef typedef_emxArray_ptrdiff_t
#define typedef_emxArray_ptrdiff_t
typedef struct emxArray_ptrdiff_t emxArray_ptrdiff_t;
#endif /* typedef_emxArray_ptrdiff_t */

#ifndef struct_emxArray_uint32_T
#define struct_emxArray_uint32_T
struct emxArray_uint32_T {
  uint32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_uint32_T */
#ifndef typedef_emxArray_uint32_T
#define typedef_emxArray_uint32_T
typedef struct emxArray_uint32_T emxArray_uint32_T;
#endif /* typedef_emxArray_uint32_T */

#ifndef typedef_b_struct_T
#define typedef_b_struct_T
typedef struct {
  emxArray_real_T *lower;
  emxArray_real_T *upper;
} b_struct_T;
#endif /* typedef_b_struct_T */

#ifndef typedef_c_struct_T
#define typedef_c_struct_T
typedef struct {
  captured_var *trend;
  captured_var *seasonal;
  captured_var *s;
  c_captured_var *yhatseaso;
  c_captured_var *Xseasof;
  captured_var *varampl;
  c_captured_var *Seqf;
  captured_var *nexpl;
  b_captured_var *isemptyX;
  c_captured_var *Xf;
  captured_var *lshiftYN;
  c_captured_var *Xlshiftf;
} c_struct_T;
#endif /* typedef_c_struct_T */

#ifndef typedef_nested_function
#define typedef_nested_function
typedef struct {
  c_struct_T workspace;
} nested_function;
#endif /* typedef_nested_function */

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

#ifndef typedef_struct3_T
#define typedef_struct3_T
typedef struct {
  emxArray_char_T_1x0 Description;
} struct3_T;
#endif /* typedef_struct3_T */

#ifndef typedef_d_struct_T
#define typedef_d_struct_T
typedef struct {
  nested_function fun;
  emxArray_real_T *xdata;
  emxArray_real_T *ydata;
} d_struct_T;
#endif /* typedef_d_struct_T */

#ifndef typedef_anonymous_function
#define typedef_anonymous_function
typedef struct {
  d_struct_T workspace;
} anonymous_function;
#endif /* typedef_anonymous_function */

#ifndef typedef_e_struct_T
#define typedef_e_struct_T
typedef struct {
  anonymous_function fun;
} e_struct_T;
#endif /* typedef_e_struct_T */

#ifndef typedef_b_anonymous_function
#define typedef_b_anonymous_function
typedef struct {
  e_struct_T workspace;
} b_anonymous_function;
#endif /* typedef_b_anonymous_function */

#ifndef typedef_f_struct_T
#define typedef_f_struct_T
typedef struct {
  b_anonymous_function nonlin;
  real_T f_1;
  emxArray_real_T *cEq_1;
  real_T f_2;
  emxArray_real_T *cEq_2;
  int32_T nVar;
  int32_T mIneq;
  int32_T mEq;
  int32_T numEvals;
  boolean_T SpecifyObjectiveGradient;
  boolean_T SpecifyConstraintGradient;
  boolean_T isEmptyNonlcon;
  emxArray_boolean_T *hasLB;
  emxArray_boolean_T *hasUB;
  boolean_T hasBounds;
  int32_T FiniteDifferenceType;
} f_struct_T;
#endif /* typedef_f_struct_T */

#ifndef typedef_f_matlab_internal_coder_tabular
#define typedef_f_matlab_internal_coder_tabular
typedef struct {
  real_T length;
  cell_wrap_3 descrs[4];
  cell_wrap_3 units[4];
  c_matlab_internal_coder_tabular continuity[4];
  boolean_T hasDescrs;
  boolean_T hasUnits;
  boolean_T hasContinuity;
  boolean_T hasCustomProps;
} f_matlab_internal_coder_tabular;
#endif /* typedef_f_matlab_internal_coder_tabular */

#ifndef typedef_table
#define typedef_table
typedef struct {
  d_matlab_internal_coder_tabular metaDim;
  e_matlab_internal_coder_tabular rowDim;
  f_matlab_internal_coder_tabular varDim;
  cell_wrap_4 data[4];
  struct3_T arrayProps;
} table;
#endif /* typedef_table */

#ifndef typedef_struct_LTSts_T
#define typedef_struct_LTSts_T
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
  emxArray_real_T_1x1 LastHarmonicPval;
  emxArray_real_T_1x1 LevelShiftPval;
} struct_LTSts_T;
#endif /* typedef_struct_LTSts_T */

/* End of code generation (LTSts_wrapper_types.h) */
