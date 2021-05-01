/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bsxfun.h
 *
 * Code generation for function 'bsxfun'
 *
 */

#ifndef BSXFUN_H
#define BSXFUN_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include "omp.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
              emxArray_real_T *c);

void bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
            emxArray_real_T *c);

void c_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
              emxArray_real_T *c);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (bsxfun.h) */
