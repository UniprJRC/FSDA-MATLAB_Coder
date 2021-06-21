/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * restrSigmaGPCM.h
 *
 * Code generation for function 'restrSigmaGPCM'
 *
 */

#ifndef RESTRSIGMAGPCM_H
#define RESTRSIGMAGPCM_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_restrSigmaGPCM(emxArray_real_T *SigmaB, const emxArray_real_T *niini,
                      const char pa_pars[3], double pa_cdet, double pa_shw,
                      double pa_shb, double pa_maxiterDSR, double pa_maxiterS,
                      double pa_tolR, double pa_tolS, double pa_userepmat,
                      double pa_zerotol, emxArray_real_T *lmd,
                      emxArray_real_T *OMG);

void restrSigmaGPCM(emxArray_real_T *SigmaB, const emxArray_real_T *niini,
                    const char pa_pars[3], double pa_cdet, double pa_shw,
                    double pa_shb, double pa_maxiterDSR, double pa_maxiterS,
                    double pa_tolR, double pa_tolS, double pa_userepmat,
                    double pa_zerotol, emxArray_real_T *lmd,
                    emxArray_real_T *OMG);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (restrSigmaGPCM.h) */
