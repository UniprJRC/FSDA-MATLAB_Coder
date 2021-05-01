/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fsdaC_internal_types.h
 *
 * Code generation for function 'FSM_wrapper'
 *
 */

#ifndef FSDAC_INTERNAL_TYPES_H
#define FSDAC_INTERNAL_TYPES_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_captured_var
#define typedef_captured_var
typedef struct {
  double contents;
} captured_var;
#endif /* typedef_captured_var */

#ifndef typedef_b_captured_var
#define typedef_b_captured_var
typedef struct {
  bool contents;
} b_captured_var;
#endif /* typedef_b_captured_var */

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

#endif
/* End of code generation (fsdaC_internal_types.h) */
