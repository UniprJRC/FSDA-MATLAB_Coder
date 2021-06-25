/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cpcE.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef CPCE_H
#define CPCE_H

/* Include Files */
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

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for cpcE.h
 *
 * [EOF]
 */
