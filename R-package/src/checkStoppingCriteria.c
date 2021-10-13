/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * checkStoppingCriteria.c
 *
 * Code generation for function 'checkStoppingCriteria'
 *
 */

/* Include files */
#include "checkStoppingCriteria.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "xnrm2.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
int b_checkStoppingCriteria(double options_MaxFunctionEvaluations,
                            const emxArray_real_T *gradf, double relFactor,
                            double funDiff, const emxArray_real_T *x,
                            const emxArray_real_T *dx, int funcCount,
                            bool stepSuccessful, int *iter,
                            double projSteepestDescentInfNorm,
                            bool b_hasFiniteBounds)
{
  const double *gradf_data;
  double absx;
  double normGradF;
  int exitflag;
  int i;
  int k;
  gradf_data = gradf->data;
  if (gradf->size[0] == 0) {
    normGradF = 0.0;
  } else {
    normGradF = 0.0;
    i = gradf->size[0];
    for (k = 0; k < i; k++) {
      absx = fabs(gradf_data[k]);
      if (rtIsNaN(absx) || (absx > normGradF)) {
        normGradF = absx;
      }
    }
  }
  if (b_hasFiniteBounds &&
      (projSteepestDescentInfNorm * projSteepestDescentInfNorm <=
       1.0E-10 * normGradF * relFactor)) {
    exitflag = 1;
  } else if ((!b_hasFiniteBounds) && (normGradF <= 1.0E-10 * relFactor)) {
    exitflag = 1;
  } else if (funcCount >= options_MaxFunctionEvaluations) {
    exitflag = 0;
  } else if (*iter >= 400) {
    exitflag = 0;
  } else {
    if (dx->size[0] == 0) {
      normGradF = 0.0;
    } else {
      normGradF = b_xnrm2(dx->size[0], dx);
    }
    if (x->size[0] == 0) {
      absx = 0.0;
    } else {
      absx = b_xnrm2(x->size[0], x);
    }
    if (normGradF < 1.0E-6 * (absx + 1.4901161193847656E-8)) {
      exitflag = 4;
      if (!stepSuccessful) {
        (*iter)++;
      }
    } else if (funDiff <= 1.0E-6) {
      exitflag = 3;
    } else {
      exitflag = -5;
    }
  }
  return exitflag;
}

int checkStoppingCriteria(double options_MaxFunctionEvaluations,
                          const emxArray_real_T *gradf, double relFactor,
                          const emxArray_real_T *x, const emxArray_real_T *dx,
                          int funcCount, double projSteepestDescentInfNorm,
                          bool b_hasFiniteBounds)
{
  const double *gradf_data;
  double absx;
  double normGradF;
  int exitflag;
  int i;
  int k;
  gradf_data = gradf->data;
  if (gradf->size[0] == 0) {
    normGradF = 0.0;
  } else {
    normGradF = 0.0;
    i = gradf->size[0];
    for (k = 0; k < i; k++) {
      absx = fabs(gradf_data[k]);
      if (rtIsNaN(absx) || (absx > normGradF)) {
        normGradF = absx;
      }
    }
  }
  if (b_hasFiniteBounds &&
      (projSteepestDescentInfNorm * projSteepestDescentInfNorm <=
       1.0E-10 * normGradF * relFactor)) {
    exitflag = 1;
  } else if ((!b_hasFiniteBounds) && (normGradF <= 1.0E-10 * relFactor)) {
    exitflag = 1;
  } else if (funcCount >= options_MaxFunctionEvaluations) {
    exitflag = 0;
  } else {
    if (dx->size[0] == 0) {
      normGradF = 0.0;
    } else {
      normGradF = b_xnrm2(dx->size[0], dx);
    }
    if (x->size[0] == 0) {
      absx = 0.0;
    } else {
      absx = b_xnrm2(x->size[0], x);
    }
    if (normGradF < 1.0E-6 * (absx + 1.4901161193847656E-8)) {
      exitflag = 4;
    } else {
      exitflag = -5;
    }
  }
  return exitflag;
}

/* End of code generation (checkStoppingCriteria.c) */
