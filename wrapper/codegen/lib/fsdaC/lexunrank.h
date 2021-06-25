/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: lexunrank.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef LEXUNRANK_H
#define LEXUNRANK_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_lexunrank(double n, double k, double N, emxArray_real_T *kcomb);

void lexunrank(double n, double k, double N, const emxArray_real_T *pascalM,
               emxArray_real_T *kcomb);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for lexunrank.h
 *
 * [EOF]
 */
