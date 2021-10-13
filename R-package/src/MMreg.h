/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * MMreg.h
 *
 * Code generation for function 'MMreg'
 *
 */

#ifndef MMREG_H
#define MMREG_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void le_binary_expand_op(struct_MMreg_T *out, const emxArray_real_T *y,
                         double ss);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (MMreg.h) */
