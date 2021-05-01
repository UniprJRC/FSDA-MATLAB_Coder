/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lexunrank.h
 *
 * Code generation for function 'lexunrank'
 *
 */

#ifndef LEXUNRANK_H
#define LEXUNRANK_H

/* Include files */
#include "FSM_wrapper_types.h"
#include "rtwtypes.h"
#include "omp.h"
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
/* End of code generation (lexunrank.h) */
