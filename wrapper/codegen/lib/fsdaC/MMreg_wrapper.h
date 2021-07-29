/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * MMreg_wrapper.h
 *
 * Code generation for function 'MMreg_wrapper'
 *
 */

#ifndef MMREG_WRAPPER_H
#define MMREG_WRAPPER_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void MMreg_wrapper(
    const emxArray_real_T *y, const emxArray_real_T *X, double conflev,
    double eff, const struct1_T *InitialEst, bool intercept, bool msg,
    bool nocheck, double refsteps, const emxArray_char_T *rhofunc,
    const emxArray_real_T *rhofuncparam, double Sbdp, double Sbestr,
    double Sminsctol, double Snsamp, double Srefsteps, double Srefstepsbestr,
    double Sreftol, double Sreftolbestr, const emxArray_char_T *Srhofunc,
    const emxArray_real_T *Srhofuncparam, double tol, bool yxsave,
    struct_MMreg_T *out, emxArray_real_T *C);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (MMreg_wrapper.h) */
