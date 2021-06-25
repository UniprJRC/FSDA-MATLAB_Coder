/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: LTSts.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef LTSTS_H
#define LTSTS_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void ALS(const c_captured_var *Seq, const c_captured_var *bsb,
         const c_captured_var *Xseaso, const c_captured_var *Xtrend,
         const c_captured_var *yin, const captured_var *trend,
         const captured_var *nexpl, const captured_var *varampl,
         const b_captured_var *isemptyX, const captured_var *lshiftYN,
         const c_captured_var *Xlshift, const c_captured_var *X,
         const captured_var *reftolALS, const captured_var *refstepsALS,
         const c_captured_var *indlinsc, const c_captured_var *otherind,
         const emxArray_real_T *beta0, emxArray_real_T *newbeta);

void IRWLSreg(const captured_var *reftolALS, const captured_var *refstepsALS,
              const c_captured_var *indlinsc, const c_captured_var *Xseaso,
              c_captured_var *bsb, const b_captured_var *isemptyX,
              const captured_var *lshiftYN, const c_captured_var *Xtrend,
              const c_captured_var *Seq, const captured_var *varampl,
              const c_captured_var *Xlshift, const c_captured_var *X,
              const c_captured_var *yin, const captured_var *trend,
              const captured_var *nexpl, const c_captured_var *otherind,
              const captured_var *seasonal, const captured_var *s,
              c_captured_var *yhatseaso, c_captured_var *yhat,
              c_captured_var *beta, const captured_var *constr,
              const c_captured_var *Xsel, const b_captured_var *verLess2016b,
              const c_captured_var *seq, d_captured_var *weights,
              const d_captured_var *zerT1, const emxArray_real_T *y,
              const emxArray_real_T *initialbeta, double refsteps,
              double reftol, double h, c_struct_T *outIRWLS);

double b_corfactorRAW(double n, double alpha);

void lik(const c_captured_var *Xtrend, const c_captured_var *bsb,
         const captured_var *trend, const captured_var *seasonal,
         const captured_var *s, c_captured_var *yhatseaso,
         const c_captured_var *Xseaso, const captured_var *varampl,
         const c_captured_var *Seq, const captured_var *nexpl,
         const b_captured_var *isemptyX, const c_captured_var *X,
         const captured_var *lshiftYN, const c_captured_var *Xlshift,
         c_captured_var *yhat, const emxArray_real_T *beta0);

void likyhat(const captured_var *trend, const captured_var *seasonal,
             const captured_var *s, c_captured_var *yhatseaso,
             const c_captured_var *Xseasof, const captured_var *varampl,
             const c_captured_var *Seqf, const captured_var *nexpl,
             const b_captured_var *isemptyX, const c_captured_var *Xf,
             const captured_var *lshiftYN, const c_captured_var *Xlshiftf,
             const emxArray_real_T *beta0, const emxArray_real_T *Xtrendf,
             emxArray_real_T *objyhat);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for LTSts.h
 *
 * [EOF]
 */
