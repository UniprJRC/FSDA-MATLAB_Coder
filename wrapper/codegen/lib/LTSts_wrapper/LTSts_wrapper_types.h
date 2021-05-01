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

#ifndef LTSTS_WRAPPER_TYPES_H
#define LTSTS_WRAPPER_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct {
  double wlength;
  double typeres;
  double huberc;
} struct0_T;
#endif /* typedef_struct0_T */

#ifndef typedef_struct1_T
#define typedef_struct1_T
typedef struct {
  double bestr;
  double refsteps;
  double refstepsbestr;
  double reftol;
  double reftolbestr;
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
  double length;
} d_matlab_internal_coder_tabular;
#endif /* typedef_d_matlab_internal_coder_tabular */

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T {
  double *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  bool canFreeData;
};
#endif /* struct_emxArray_real_T */
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /* typedef_emxArray_real_T */

#ifndef struct_emxArray_real_T_1x1
#define struct_emxArray_real_T_1x1
struct emxArray_real_T_1x1 {
  double data[1];
  int size[2];
};
#endif /* struct_emxArray_real_T_1x1 */
#ifndef typedef_emxArray_real_T_1x1
#define typedef_emxArray_real_T_1x1
typedef struct emxArray_real_T_1x1 emxArray_real_T_1x1;
#endif /* typedef_emxArray_real_T_1x1 */

#ifndef typedef_struct2_T
#define typedef_struct2_T
typedef struct {
  double lshift;
  double s;
  double trend;
  double seasonal;
  emxArray_real_T_1x1 ARp;
  emxArray_real_T *X;
} struct2_T;
#endif /* typedef_struct2_T */

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T {
  bool *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  bool canFreeData;
};
#endif /* struct_emxArray_boolean_T */
#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T
typedef struct emxArray_boolean_T emxArray_boolean_T;
#endif /* typedef_emxArray_boolean_T */

#ifndef struct_emxArray_char_T_1x10
#define struct_emxArray_char_T_1x10
struct emxArray_char_T_1x10 {
  char data[10];
  int size[2];
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
  double length;
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
  emxArray_boolean_T *contents;
} c_captured_var;
#endif /* typedef_c_captured_var */

#ifndef typedef_d_captured_var
#define typedef_d_captured_var
typedef struct {
  emxArray_real_T *contents;
} d_captured_var;
#endif /* typedef_d_captured_var */

#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T
struct emxArray_char_T {
  char *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  bool canFreeData;
};
#endif /* struct_emxArray_char_T */
#ifndef typedef_emxArray_char_T
#define typedef_emxArray_char_T
typedef struct emxArray_char_T emxArray_char_T;
#endif /* typedef_emxArray_char_T */

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T {
  int *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  bool canFreeData;
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
  double exiflag;
  double numscale2rw;
} struct_T;
#endif /* typedef_struct_T */

#ifndef struct_emxArray_uint32_T
#define struct_emxArray_uint32_T
struct emxArray_uint32_T {
  unsigned int *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  bool canFreeData;
};
#endif /* struct_emxArray_uint32_T */
#ifndef typedef_emxArray_uint32_T
#define typedef_emxArray_uint32_T
typedef struct emxArray_uint32_T emxArray_uint32_T;
#endif /* typedef_emxArray_uint32_T */

#ifndef struct_emxArray_char_T_1x0
#define struct_emxArray_char_T_1x0
struct emxArray_char_T_1x0 {
  int size[2];
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
  double length;
  cell_wrap_3 descrs[4];
  cell_wrap_3 units[4];
  c_matlab_internal_coder_tabular continuity[4];
  bool hasDescrs;
  bool hasUnits;
  bool hasContinuity;
  bool hasCustomProps;
} f_matlab_internal_coder_tabular;
#endif /* typedef_f_matlab_internal_coder_tabular */

#ifndef typedef_table
#define typedef_table
typedef struct {
  d_matlab_internal_coder_tabular metaDim;
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
  double scale;
  emxArray_real_T *numscale2;
  emxArray_real_T *BestIndexes;
  emxArray_real_T *residuals;
  emxArray_real_T *bs;
  double conflev;
  double h;
  emxArray_boolean_T *weights;
  double singsub;
  char class[5];
  emxArray_real_T *Likloc;
  emxArray_real_T *y;
  emxArray_real_T *X;
  emxArray_real_T *invXX;
  table Btable;
  double LastHarmonicPval;
  emxArray_real_T_1x1 LevelShiftPval;
} struct3_T;
#endif /* typedef_struct3_T */

#endif
/* End of code generation (LTSts_wrapper_types.h) */
