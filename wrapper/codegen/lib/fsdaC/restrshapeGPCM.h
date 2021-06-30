/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * restrshapeGPCM.h
 *
 * Code generation for function 'restrshapeGPCM'
 *
 */

#ifndef RESTRSHAPEGPCM_H
#define RESTRSHAPEGPCM_H

/* Include files */
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
/* End of code generation (restrshapeGPCM.h) */
