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
#include "LXS_wrapper_rtwutil.h"
#include "gammainc.h"
#include "gammaincinv.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

/* Function Definitions */
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
