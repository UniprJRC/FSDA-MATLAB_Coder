/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LTSts.h
 *
 * Code generation for function 'LTSts'
 *
 */

#ifndef LTSTS_H
#define LTSTS_H

/* Include files */
#include "FSM_wrapper_internal_types.h"
#include "FSM_wrapper_types.h"
#include "rtwtypes.h"
#include "omp.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void ALS(const d_captured_var *Seq, const d_captured_var *bsb,
         const d_captured_var *Xseaso, const d_captured_var *Xtrend,
         const d_captured_var *yin, const captured_var *trend,
         const captured_var *nexpl, const captured_var *varampl,
         const b_captured_var *isemptyX, const captured_var *lshiftYN,
         const d_captured_var *Xlshift, const d_captured_var *X,
         const captured_var *reftolALS, const captured_var *refstepsALS,
         const d_captured_var *indlinsc, const d_captured_var *otherind,
         const emxArray_real_T *beta0, emxArray_real_T *newbeta);

void IRWLSreg(const captured_var *reftolALS, const captured_var *refstepsALS,
              const d_captured_var *indlinsc, const d_captured_var *Xseaso,
              d_captured_var *bsb, const b_captured_var *isemptyX,
              const captured_var *lshiftYN, const d_captured_var *Xtrend,
              const d_captured_var *Seq, const captured_var *varampl,
              const d_captured_var *Xlshift, const d_captured_var *X,
              const d_captured_var *yin, const captured_var *trend,
              const captured_var *nexpl, const d_captured_var *otherind,
              const captured_var *seasonal, const captured_var *s,
              d_captured_var *yhatseaso, d_captured_var *yhat,
              d_captured_var *beta, const captured_var *constr,
              const d_captured_var *Xsel, const b_captured_var *verLess2016b,
              const d_captured_var *seq, c_captured_var *weights,
              const c_captured_var *zerT1, const emxArray_real_T *y,
              const emxArray_real_T *initialbeta, double refsteps,
              double reftol, double h, b_struct_T *outIRWLS);

double b_corfactorRAW(double n, double alpha);

void lik(const d_captured_var *Xtrend, const d_captured_var *bsb,
         const captured_var *trend, const captured_var *seasonal,
         const captured_var *s, d_captured_var *yhatseaso,
         const d_captured_var *Xseaso, const captured_var *varampl,
         const d_captured_var *Seq, const captured_var *nexpl,
         const b_captured_var *isemptyX, const d_captured_var *X,
         const captured_var *lshiftYN, const d_captured_var *Xlshift,
         d_captured_var *yhat, const emxArray_real_T *beta0);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (LTSts.h) */
