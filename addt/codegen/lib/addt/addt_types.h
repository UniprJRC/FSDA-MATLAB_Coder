/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * addt_types.h
 *
 * Code generation for function 'addt'
 *
 */

#ifndef ADDT_TYPES_H
#define ADDT_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  double *data;
  int *size;
  int allocatedSize;
  int numDimensions;
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
  double data[1];
  int size[2];
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
  int size[1];
} emxArray_creal_T_1;

#endif                                 /*typedef_emxArray_creal_T_1*/

#ifndef typedef_emxArray_creal_T_1x1
#define typedef_emxArray_creal_T_1x1

typedef struct {
  creal_T data[1];
  int size[2];
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

#ifndef typedef_emxArray_creal_T
#define typedef_emxArray_creal_T

typedef struct {
  creal_T *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
} emxArray_creal_T;

#endif                                 /*typedef_emxArray_creal_T*/

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_boolean_T*/

#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T

typedef struct emxArray_boolean_T emxArray_boolean_T;

#endif                                 /*typedef_emxArray_boolean_T*/

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T

typedef struct emxArray_int32_T emxArray_int32_T;

#endif                                 /*typedef_emxArray_int32_T*/
#endif

/* End of code generation (addt_types.h) */
