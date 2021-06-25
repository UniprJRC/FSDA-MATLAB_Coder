/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: restrshapeGPCM.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef RESTRSHAPEGPCM_H
#define RESTRSHAPEGPCM_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void restrshapeGPCM(const emxArray_real_T *lmd, const emxArray_real_T *Omega,
                    const emxArray_real_T *SigmaB, const emxArray_real_T *niini,
                    const char pa_pars[3], double pa_shw, double pa_shb,
                    double pa_k, double pa_maxiterS, double pa_tolS,
                    double pa_userepmat, double pa_v, double pa_zerotol,
                    emxArray_real_T *GAMc);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for restrshapeGPCM.h
 *
 * [EOF]
 */
