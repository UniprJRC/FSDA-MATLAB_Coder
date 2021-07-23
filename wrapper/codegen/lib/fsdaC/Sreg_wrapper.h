/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Sreg_wrapper.h
 *
 * Code generation for function 'Sreg_wrapper'
 *
 */

#ifndef SREG_WRAPPER_H
#define SREG_WRAPPER_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void Sreg_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                         double bdp, double bestr, double conflev,
                         bool intercept, double minsctol, bool msg,
                         bool nocheck, double nsamp, double refsteps,
                         double refstepsbestr, double reftol,
                         double reftolbestr, const emxArray_char_T *rhofunc,
                         const emxArray_real_T *rhofuncparam, bool yxsave,
                         struct_Sreg_T *out, emxArray_real_T *C);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (Sreg_wrapper.h) */
