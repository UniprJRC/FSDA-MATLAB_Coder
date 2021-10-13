/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sumprod.h
 *
 * Code generation for function 'sumprod'
 *
 */

#ifndef SUMPROD_H
#define SUMPROD_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void eg_binary_expand_op(emxArray_real_T *ed, const emxArray_real_T *rr,
                         const emxArray_real_T *ninin);

void kg_binary_expand_op(emxArray_real_T *ed, const emxArray_real_T *rr,
                         const emxArray_real_T *nininmat);

void lg_binary_expand_op(emxArray_real_T *solmp, const emxArray_real_T *ss,
                         const emxArray_real_T *tt, double restr,
                         const emxArray_real_T *nininmat);

void qg_binary_expand_op(emxArray_real_T *r1, const emxArray_real_T *nis,
                         double n, const emxArray_real_T *r2,
                         const emxArray_real_T *d, const emxArray_real_T *e);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (sumprod.h) */
