/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * TBrho.h
 *
 * Code generation for function 'TBrho'
 *
 */

#ifndef TBRHO_H
#define TBRHO_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void TBrho(const emxArray_real_T *u, const emxArray_real_T *c,
           emxArray_real_T *rhoTB);

void af_binary_expand_op(struct_Sreg_T *out, double c,
                         const emxArray_real_T *abc, double b_c,
                         const emxArray_boolean_T *w, double b);

void ne_binary_expand_op(j_struct_T *out, double c, const emxArray_real_T *abc,
                         double b_c, const emxArray_boolean_T *w, double b);

void qe_binary_expand_op(emxArray_real_T *x, double c,
                         const emxArray_real_T *outIRWLS_betarw, double b_c,
                         const emxArray_boolean_T *w, double b);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (TBrho.h) */
