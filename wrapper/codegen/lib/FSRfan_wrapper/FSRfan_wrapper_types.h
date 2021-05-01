/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRfan_wrapper_types.h
 *
 * Code generation for function 'FSRfan_wrapper'
 *
 */

#ifndef FSRFAN_WRAPPER_TYPES_H
#define FSRFAN_WRAPPER_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
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
  int *size;
  int allocatedSize;
  int numDimensions;
  bool canFreeData;
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

#ifndef struct_emxArray_real_T_0x0
#define struct_emxArray_real_T_0x0
struct emxArray_real_T_0x0 {
  int size[2];
};
#endif /* struct_emxArray_real_T_0x0 */
#ifndef typedef_emxArray_real_T_0x0
#define typedef_emxArray_real_T_0x0
typedef struct emxArray_real_T_0x0 emxArray_real_T_0x0;
#endif /* typedef_emxArray_real_T_0x0 */

#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct {
  emxArray_boolean_T *weights;
  bool rew;
  emxArray_real_T *beta;
  double scale;
  emxArray_real_T *residuals;
  emxArray_real_T *bs;
  emxArray_real_T *outliers;
  double conflev;
  double h;
  double singsub;
  emxArray_real_T_0x0 X;
  emxArray_real_T_0x0 y;
  char class[3];
} struct_T;
#endif /* typedef_struct_T */

#endif
/* End of code generation (FSRfan_wrapper_types.h) */
