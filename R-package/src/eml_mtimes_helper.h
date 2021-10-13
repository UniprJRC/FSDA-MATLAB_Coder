/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_mtimes_helper.h
 *
 * Code generation for function 'eml_mtimes_helper'
 *
 */

#ifndef EML_MTIMES_HELPER_H
#define EML_MTIMES_HELPER_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void jc_binary_expand_op(emxArray_real_T *b_tmp, const emxArray_real_T *mm,
                         const emxArray_real_T *MinSca,
                         const emxArray_real_T *quant);

void mc_binary_expand_op(emxArray_real_T *b_tmp, const emxArray_real_T *mm,
                         const emxArray_real_T *MinSca,
                         const emxArray_real_T *quant);

void s_binary_expand_op(emxArray_real_T *zi, double a,
                        const emxArray_real_T *mi,
                        const emxArray_real_T *mibsbr);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (eml_mtimes_helper.h) */
