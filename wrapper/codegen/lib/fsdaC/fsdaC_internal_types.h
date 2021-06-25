/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: fsdaC_internal_types.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef FSDAC_INTERNAL_TYPES_H
#define FSDAC_INTERNAL_TYPES_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_cell_wrap_58
#define typedef_cell_wrap_58
typedef struct {
  char f1[3];
} cell_wrap_58;
#endif /* typedef_cell_wrap_58 */

#ifndef struct_emxArray_char_T_1x310
#define struct_emxArray_char_T_1x310
struct emxArray_char_T_1x310 {
  char data[310];
  int size[2];
};
#endif /* struct_emxArray_char_T_1x310 */
#ifndef typedef_emxArray_char_T_1x310
#define typedef_emxArray_char_T_1x310
typedef struct emxArray_char_T_1x310 emxArray_char_T_1x310;
#endif /* typedef_emxArray_char_T_1x310 */

#ifndef typedef_e_struct_T
#define typedef_e_struct_T
typedef struct {
  double iterations;
  double funcCount;
  double stepsize;
  double firstorderopt;
  char algorithm[19];
} e_struct_T;
#endif /* typedef_e_struct_T */

#endif
/*
 * File trailer for fsdaC_internal_types.h
 *
 * [EOF]
 */
