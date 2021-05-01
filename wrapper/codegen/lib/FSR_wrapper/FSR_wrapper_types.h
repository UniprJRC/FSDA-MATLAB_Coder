/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSR_wrapper_types.h
 *
 * Code generation for function 'FSR_wrapper'
 *
 */

#ifndef FSR_WRAPPER_TYPES_H
#define FSR_WRAPPER_TYPES_H

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

#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct {
  emxArray_real_T *ListOut;
  emxArray_real_T *outliers;
  emxArray_real_T *mdr;
  emxArray_real_T *Un;
  emxArray_real_T *nout;
  emxArray_real_T *beta;
  double scale;
  emxArray_real_T *mdag;
  emxArray_real_T *ListCl;
  emxArray_real_T *VIOMout;
  emxArray_real_T *fittedvalues;
  emxArray_real_T *residuals;
  char class[3];
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

#ifndef struct_emxArray_real_T_2x5
#define struct_emxArray_real_T_2x5
struct emxArray_real_T_2x5 {
  double data[10];
  int size[2];
};
#endif /* struct_emxArray_real_T_2x5 */
#ifndef typedef_emxArray_real_T_2x5
#define typedef_emxArray_real_T_2x5
typedef struct emxArray_real_T_2x5 emxArray_real_T_2x5;
#endif /* typedef_emxArray_real_T_2x5 */

#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct {
  emxArray_real_T *ListOut;
  emxArray_real_T *outliers;
  emxArray_real_T *mdr;
  emxArray_real_T *Un;
  emxArray_real_T_2x5 nout;
  emxArray_real_T *beta;
  double scale;
  emxArray_real_T_1x1 mdag;
  emxArray_real_T *ListCl;
  emxArray_real_T *VIOMout;
} struct_T;
#endif /* typedef_struct_T */

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

#ifndef typedef_emxArray_creal_T
#define typedef_emxArray_creal_T
typedef struct {
  creal_T *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  bool canFreeData;
} emxArray_creal_T;
#endif /* typedef_emxArray_creal_T */

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

#ifndef struct_emxArray_real32_T
#define struct_emxArray_real32_T
struct emxArray_real32_T {
  float *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  bool canFreeData;
};
#endif /* struct_emxArray_real32_T */
#ifndef typedef_emxArray_real32_T
#define typedef_emxArray_real32_T
typedef struct emxArray_real32_T emxArray_real32_T;
#endif /* typedef_emxArray_real32_T */

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

#ifndef typedef_b_struct_T
#define typedef_b_struct_T
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
} b_struct_T;
#endif /* typedef_b_struct_T */

#endif
/* End of code generation (FSR_wrapper_types.h) */
