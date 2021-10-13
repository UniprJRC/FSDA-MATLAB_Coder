/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Sregeda.h
 *
 * Code generation for function 'Sregeda'
 *
 */

#ifndef SREGEDA_H
#define SREGEDA_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void cf_binary_expand_op(emxArray_real_T *resrw, const struct_Sregeda_T *out);

void df_binary_expand_op(emxArray_real_T *residuals,
                         const struct_Sregeda_T *out, double superbestscale);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (Sregeda.h) */
