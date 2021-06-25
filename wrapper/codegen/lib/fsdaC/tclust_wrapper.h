/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: tclust_wrapper.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef TCLUST_WRAPPER_H
#define TCLUST_WRAPPER_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void tclust_wrapper(const emxArray_real_T *Y, double k, double alpha,
                           double restrfactor, bool equalweights, double mixt,
                           double msg, bool nocheck,
                           const emxArray_real_T *nsamp,
                           const emxArray_real_T *RandNumbForNini,
                           double refsteps, double reftol, bool startv1,
                           bool Ysave, struct_tclust_T *out,
                           emxArray_real_T *C);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for tclust_wrapper.h
 *
 * [EOF]
 */
