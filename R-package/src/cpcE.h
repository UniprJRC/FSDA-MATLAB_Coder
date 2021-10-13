/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cpcE.h
 *
 * Code generation for function 'cpcE'
 *
 */

#ifndef CPCE_H
#define CPCE_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void cpcE(const emxArray_real_T *lmdc, const emxArray_real_T *SigmaB,
          const emxArray_real_T *niini, double pa_k, double pa_v,
          emxArray_real_T *Omega);

void if_binary_expand_op(emxArray_real_T *Sigma, double a,
                         const emxArray_real_T *SigmaB, int j);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (cpcE.h) */
