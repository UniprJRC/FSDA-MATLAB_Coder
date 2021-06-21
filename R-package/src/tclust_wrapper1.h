/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tclust_wrapper1.h
 *
 * Code generation for function 'tclust_wrapper1'
 *
 */

#ifndef TCLUST_WRAPPER1_H
#define TCLUST_WRAPPER1_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void tclust_wrapper1(const emxArray_real_T *Y, double k, double alpha,
                            const struct1_T *restrfactor, double cshape,
                            bool equalweights, double mixt, double msg,
                            bool nocheck, const emxArray_real_T *nsamp,
                            const emxArray_real_T *RandNumbForNini,
                            double refsteps, double reftol,
                            const char restrtype[5], bool startv1, bool Ysave,
                            struct_tclust_T *out, emxArray_real_T *C);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (tclust_wrapper1.h) */
