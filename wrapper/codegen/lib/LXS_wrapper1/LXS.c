/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LXS.c
 *
 * Code generation for function 'LXS'
 *
 */

/* Include files */
#include "LXS.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_rtwutil.h"
#include "LXS_wrapper1_types.h"
#include "blockedSummation.h"
#include "gammainc.h"
#include "gammaincinv.h"
#include "mldivide.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
void IRWLSreg(const emxArray_real_T *y, const emxArray_real_T *X,
              const emxArray_real_T *initialbeta, double refsteps,
              double reftol, double h, emxArray_real_T *outIRWLS_betarw,
              double *outIRWLS_numscale2rw, emxArray_real_T *outIRWLS_weights)
{
  emxArray_boolean_T *b;
  emxArray_int32_T *i_r2s;
  emxArray_int32_T *r;
  emxArray_real_T *b_X;
  emxArray_real_T *beta;
  emxArray_real_T *r2;
  double betadiff;
  double c_y;
  double initialscale;
  double iter;
  int aoffset;
  int i;
  int inner;
  int k;
  int loop_ub_tmp;
  int mc;
  bool b_y;
  bool exitg1;
  bool exitg2;
  emxInit_real_T(&beta, 1);
  /*  ------------------------------------------------------------------- */
  /*  subfunction IRWLSreg */
  /*  ------------------------------------------------------------------- */
  /* IRWLSreg (iterative reweighted least squares) does refsteps refining steps
   * from initialbeta */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     y:         A vector with n elements that contains the response
   * variable. */
  /*                It can be both a row or column vector. */
  /*     X :        Data matrix of explanatory variables (also called
   * 'regressors') */
  /*                of dimension (n x p). Rows of X represent observations, and
   */
  /*                columns represent variables. */
  /*  initialbeta : p x 1 vector containing initial estimate of beta */
  /*    refsteps  : scalar, number of refining (IRLS) steps */
  /*    reftol    : relative convergence tolerance */
  /*                Default value is 1e-7 */
  /*       h      : scalar. number of observations with smallest residuals to
   * consider */
  /*  */
  /*   Output: */
  /*  */
  /*   The output consists of a structure 'outIRWLS' containing the following
   * fields: */
  /*       betarw  : p x 1 vector. Estimate of beta after refsteps refining
   * steps */
  /*   numscale2rw : scalar. Sum of the smallest h squared residuals from */
  /*                 final iteration (after refsteps refining step).It is the */
  /*                 numerator of the estimate of the squared scale. */
  /*      weights  : n x 1 vector. Weights assigned to each observation */
  /*                In this case weights are 0,1. */
  /*                1 for the units associated with the smallest h squared
   * residuals from */
  /*                final iteration */
  /*                0 for the other units. */
  /*  */
  /*  Residuals for the initialbeta */
  /*  Squared residuals for all the observations */
  /*  Ordering of squared residuals */
  mc = X->size[0] - 1;
  inner = X->size[1];
  i = beta->size[0];
  beta->size[0] = X->size[0];
  emxEnsureCapacity_real_T(beta, i);
  for (i = 0; i <= mc; i++) {
    beta->data[i] = 0.0;
  }
  for (k = 0; k < inner; k++) {
    aoffset = k * X->size[0];
    for (i = 0; i <= mc; i++) {
      beta->data[i] += X->data[aoffset + i] * initialbeta->data[k];
    }
  }
  emxInit_real_T(&r2, 1);
  i = beta->size[0];
  beta->size[0] = y->size[0];
  emxEnsureCapacity_real_T(beta, i);
  aoffset = y->size[0];
  for (i = 0; i < aoffset; i++) {
    beta->data[i] = y->data[i] - beta->data[i];
  }
  i = r2->size[0];
  r2->size[0] = beta->size[0];
  emxEnsureCapacity_real_T(r2, i);
  aoffset = beta->size[0];
  for (k = 0; k < aoffset; k++) {
    r2->data[k] = beta->data[k] * beta->data[k];
  }
  emxInit_int32_T(&i_r2s, 1);
  sort(r2, i_r2s);
  loop_ub_tmp = (int)h;
  i = r2->size[0];
  r2->size[0] = (int)h;
  emxEnsureCapacity_real_T(r2, i);
  initialscale = blockedSummation(r2, (int)h);
  /*  Initialize parameters for the refining steps loop */
  iter = 0.0;
  betadiff = 9999.0;
  i = beta->size[0];
  beta->size[0] = initialbeta->size[0];
  emxEnsureCapacity_real_T(beta, i);
  aoffset = initialbeta->size[0];
  for (i = 0; i < aoffset; i++) {
    beta->data[i] = initialbeta->data[i];
  }
  *outIRWLS_numscale2rw = rtInf;
  i = outIRWLS_betarw->size[0];
  outIRWLS_betarw->size[0] = initialbeta->size[0];
  emxEnsureCapacity_real_T(outIRWLS_betarw, i);
  aoffset = initialbeta->size[0];
  for (i = 0; i < aoffset; i++) {
    outIRWLS_betarw->data[i] = initialbeta->data[i];
  }
  /*  Initialization for MATLAB Ccoder */
  /*  update of weights moved at the end of the function */
  /*  weights=zeros(n,1); */
  /*  weights(i_r2s(1:h))=1; */
  emxInit_boolean_T(&b, 1);
  emxInit_real_T(&b_X, 2);
  exitg1 = false;
  while ((!exitg1) && ((betadiff > reftol) && (iter < refsteps))) {
    iter++;
    /*  i_r2s= units with smallest h squared residuals */
    i = i_r2s->size[0];
    i_r2s->size[0] = (int)h;
    emxEnsureCapacity_int32_T(i_r2s, i);
    /*  new coefficients based on units with smallest h squared */
    /*  residuals */
    i = outIRWLS_betarw->size[0];
    outIRWLS_betarw->size[0] = (int)h;
    emxEnsureCapacity_real_T(outIRWLS_betarw, i);
    for (i = 0; i < loop_ub_tmp; i++) {
      outIRWLS_betarw->data[i] = y->data[i_r2s->data[i] - 1];
    }
    aoffset = X->size[1];
    i = b_X->size[0] * b_X->size[1];
    b_X->size[0] = (int)h;
    b_X->size[1] = X->size[1];
    emxEnsureCapacity_real_T(b_X, i);
    for (i = 0; i < aoffset; i++) {
      for (mc = 0; mc < loop_ub_tmp; mc++) {
        b_X->data[mc + b_X->size[0] * i] =
            X->data[(i_r2s->data[mc] + X->size[0] * i) - 1];
      }
    }
    mldivide(b_X, outIRWLS_betarw);
    /*  exit from the loop if the new beta has singular values. In such a */
    /*  case, any intermediate estimate is not reliable and we can just */
    /*  keep the initialbeta and initial scale. */
    i = b->size[0];
    b->size[0] = outIRWLS_betarw->size[0];
    emxEnsureCapacity_boolean_T(b, i);
    aoffset = outIRWLS_betarw->size[0];
    for (i = 0; i < aoffset; i++) {
      b->data[i] = rtIsNaN(outIRWLS_betarw->data[i]);
    }
    b_y = false;
    aoffset = 1;
    exitg2 = false;
    while ((!exitg2) && (aoffset <= b->size[0])) {
      if (!b->data[aoffset - 1]) {
        aoffset++;
      } else {
        b_y = true;
        exitg2 = true;
      }
    }
    if (b_y) {
      i = outIRWLS_betarw->size[0];
      outIRWLS_betarw->size[0] = initialbeta->size[0];
      emxEnsureCapacity_real_T(outIRWLS_betarw, i);
      aoffset = initialbeta->size[0];
      for (i = 0; i < aoffset; i++) {
        outIRWLS_betarw->data[i] = initialbeta->data[i];
      }
      *outIRWLS_numscale2rw = initialscale;
      exitg1 = true;
    } else {
      /*  betadiff is linked to the tolerance (specified in scalar reftol) */
      i = r2->size[0];
      r2->size[0] = beta->size[0];
      emxEnsureCapacity_real_T(r2, i);
      aoffset = beta->size[0];
      for (i = 0; i < aoffset; i++) {
        r2->data[i] = beta->data[i] - outIRWLS_betarw->data[i];
      }
      if (r2->size[0] == 0) {
        betadiff = 0.0;
      } else {
        betadiff = 0.0;
        i = r2->size[0];
        for (k = 0; k < i; k++) {
          betadiff += fabs(r2->data[k]);
        }
      }
      if (beta->size[0] == 0) {
        c_y = 0.0;
      } else {
        c_y = 0.0;
        i = beta->size[0];
        for (k = 0; k < i; k++) {
          c_y += fabs(beta->data[k]);
        }
      }
      betadiff /= c_y;
      /*  update residuals */
      /*  Ordering of all new squared residuals */
      mc = X->size[0] - 1;
      inner = X->size[1];
      i = beta->size[0];
      beta->size[0] = X->size[0];
      emxEnsureCapacity_real_T(beta, i);
      for (i = 0; i <= mc; i++) {
        beta->data[i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * X->size[0];
        for (i = 0; i <= mc; i++) {
          beta->data[i] += X->data[aoffset + i] * outIRWLS_betarw->data[k];
        }
      }
      i = beta->size[0];
      beta->size[0] = y->size[0];
      emxEnsureCapacity_real_T(beta, i);
      aoffset = y->size[0];
      for (i = 0; i < aoffset; i++) {
        beta->data[i] = y->data[i] - beta->data[i];
      }
      i = r2->size[0];
      r2->size[0] = beta->size[0];
      emxEnsureCapacity_real_T(r2, i);
      aoffset = beta->size[0];
      for (k = 0; k < aoffset; k++) {
        r2->data[k] = beta->data[k] * beta->data[k];
      }
      sort(r2, i_r2s);
      /*  sum of the smallest new squared residuals */
      i = r2->size[0];
      r2->size[0] = (int)h;
      emxEnsureCapacity_real_T(r2, i);
      *outIRWLS_numscale2rw = blockedSummation(r2, (int)h);
      /*  update beta */
      i = beta->size[0];
      beta->size[0] = outIRWLS_betarw->size[0];
      emxEnsureCapacity_real_T(beta, i);
      aoffset = outIRWLS_betarw->size[0];
      for (i = 0; i < aoffset; i++) {
        beta->data[i] = outIRWLS_betarw->data[i];
      }
    }
  }
  emxFree_real_T(&b_X);
  emxFree_boolean_T(&b);
  emxFree_real_T(&beta);
  emxFree_real_T(&r2);
  /*  store final estimate of beta */
  /*  store final estimate of scale */
  /*  store final estimate of the weights for each observation */
  /*  In this case weights are 0,1. */
  /*  1 for the units associated with the smallest h squared residuals from */
  /*  final iteration */
  /*  0 for the other units. */
  i = outIRWLS_weights->size[0];
  outIRWLS_weights->size[0] = y->size[0];
  emxEnsureCapacity_real_T(outIRWLS_weights, i);
  aoffset = y->size[0];
  for (i = 0; i < aoffset; i++) {
    outIRWLS_weights->data[i] = 0.0;
  }
  emxInit_int32_T(&r, 2);
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = (int)h;
  emxEnsureCapacity_int32_T(r, i);
  for (i = 0; i < loop_ub_tmp; i++) {
    r->data[i] = i_r2s->data[i];
  }
  emxFree_int32_T(&i_r2s);
  aoffset = r->size[1];
  for (i = 0; i < aoffset; i++) {
    outIRWLS_weights->data[r->data[i] - 1] = 1.0;
  }
  emxFree_int32_T(&r);
}

double asvar(double h, double n)
{
  double a;
  double b_xk;
  double c2;
  double hn;
  double qalfa;
  double xk;
  bool b;
  /*  The part below contains subfunctions which are used only inside this file
   */
  /* asvar computes the new degrees of freedom for the Student T */
  hn = h / n;
  if ((hn >= 0.0) && (hn <= 1.0)) {
    if (hn < 1.0) {
      qalfa = (gammaincinv(hn, 0.5)).re * 2.0;
    } else {
      qalfa = rtInf;
    }
  } else {
    qalfa = rtNaN;
  }
  xk = qalfa / 2.0;
  b_xk = xk;
  b = rtIsNaN(xk);
  if (!b) {
    if (xk < 0.0) {
      b_xk = 0.0;
    }
    c2 = (gammainc(b_xk, 1.5)).re;
  } else {
    c2 = rtNaN;
  }
  a = 1.0 / c2;
  if (!b) {
    if (xk < 0.0) {
      xk = 0.0;
    }
    b_xk = (gammainc(xk, 2.5)).re;
  } else {
    b_xk = rtNaN;
  }
  xk = qalfa * hn - c2;
  return a * a *
         (((3.0 * b_xk - 2.0 * qalfa * c2) + hn * (qalfa * qalfa)) - xk * xk);
}

double corfactorREW(double n, double alpha)
{
  double fp_500_n;
  double fp_875_n;
  double rewcorfac;
  /*  corfactorREW function */
  fp_500_n = 1.0 - 3.0373378792330419 / rt_powd_snf(n, 1.5182890270453);
  fp_875_n = 1.0 - 0.51660962465337334 / rt_powd_snf(n, 0.88939595831888);
  if ((0.5 <= alpha) && (alpha <= 0.875)) {
    fp_500_n += (fp_875_n - fp_500_n) / 0.375 * (alpha - 0.5);
  } else if ((0.875 < alpha) && (alpha < 1.0)) {
    fp_500_n = fp_875_n + (1.0 - fp_875_n) / 0.125 * (alpha - 0.875);
  } else {
    fp_500_n = 1.0;
  }
  rewcorfac = 1.0 / fp_500_n;
  if ((rewcorfac <= 0.0) || (rewcorfac > 50.0)) {
    rewcorfac = 1.0;
    /*  if msg==1 */
    /*  end */
  }
  return rewcorfac;
}

/* End of code generation (LXS.c) */
