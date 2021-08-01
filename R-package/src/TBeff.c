/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * TBeff.c
 *
 * Code generation for function 'TBeff'
 *
 */

/* Include files */
#include "TBeff.h"
#include "fsdaC_data.h"
#include "fsdaC_rtwutil.h"
#include "gammainc.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
double TBeff(double eff)
{
  creal_T b_b_tmp;
  creal_T b_tmp;
  creal_T dc;
  double a;
  double ar;
  double b_re;
  double b_step;
  double br_tmp;
  double ceff;
  double cs;
  double empeff;
  double re;
  /* Tbeff finds the constant c which is associated to the requested efficiency
   * for Tukey's biweight */
  /*  */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('TBeff')">Link to the help function</a> */
  /*  */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     eff:       required efficienty. Scalar. */
  /*                Scalar which contains the required efficiency (of location
   */
  /*                or scale estimator). */
  /*                Data Types - single|double */
  /*                Generally eff=0.85, 0.9 or 0.95 */
  /*     v :        Number of response variables. Scalar. e.g. in regression p=1
   */
  /*                Data Types - single|double|int32|int64 */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    shapeeff : Location or shape efficiency. Scalar. */
  /*               If 1, the efficiency is referred to shape else (default) */
  /*               is referred to location */
  /*                Example - 'shapeeff',1 */
  /*                Data Types - double */
  /*  */
  /*  approxsheff: approximate or exact calculations. Dummy scalar. */
  /*               If 1, when p > 1 the approximate formula for scale */
  /*               efficiency is used else (default) the exact formula of the */
  /*               variance of the robust estimator of the scale is used */
  /*                Example - 'approxsheff',1 */
  /*                Data Types - double */
  /*  */
  /*  */
  /*  Output: */
  /*  */
  /*   ceff : Requested tuning constant. Scalar. Tuning constatnt of Tukey
   * Biweigh rho */
  /*          function associated to requested value of efficiency */
  /*  */
  /*  See also: OPTeff, HYPeff, HAeff */
  /*  */
  /*  References: */
  /*   */
  /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics, Theory
   */
  /*  and Methods", Wiley, New York. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('TBeff')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  */
  /*  Examples: */
  /*  */
  /* { */
  /*     % Find c for a given efficiency. */
  /*     % The constant c associated to a nominal location efficiency of 95% in
   * regression is */
  /*     % c = 4.685064948559557 */
  /*     c=TBeff(0.95,1) */
  /* } */
  /* { */
  /*     % Find c associated to a fixed shape efficiency  */
  /*     % c= 5.490249208447494 */
  /*     c=TBeff(0.95,1,1) */
  /* } */
  /*  */
  /*  */
  /*  */
  /* { */
  /*     % Find shape efficiency. */
  /*     % Compare constant c for the range of values of p from 1 to 200 using
   */
  /*     % approximate and exact formula for fixed shape efficiency */
  /*     % Number of variables */
  /*     p=200; */
  /*     pp=1:1:p; */
  /*     % Initialize the matrix which stores the values of c for the two */
  /*     % methods */
  /*     cc=[pp' zeros(p,2)]; */
  /*  */
  /*     eff=0.75; */
  /*     % eff=0.99; */
  /*     for i=pp */
  /*         % Use exact formula for finding the value of c associated to a
   * fixed */
  /*         % level of shape efficiency */
  /*         cc(i,2)=TBeff(eff,i,1); */
  /*         % Use approximate formula for finding the value of c associated to
   * a fixed */
  /*         % level of shape efficiency */
  /*         cc(i,3)=TBeff(eff,i,1,1); */
  /*     end */
  /*     figure */
  /*     plot(cc(:,1),cc(:,2),'LineStyle','-','LineWidth',2) */
  /*     hold('on') */
  /*     plot(cc(:,1),cc(:,3),'LineStyle','-.','LineWidth',2) */
  /*     legend('True value of c', 'Approximate value of c','Location','best')
   */
  /*     xlabel('Number of variables') */
  /*     ylabel('Value of c') */
  /* } */
  /*  */
  /*  Beginning of code */
  /*  LOCATION EFFICIENCY */
  ceff = 2.0;
  /*  c = starting point of the iteration */
  /*  Remark: the more refined approximation for the starting value of */
  /*  sqrt(chi2inv(eff,p))+2; does not seem to be necessary in the case of */
  /*  location efficiency */
  /*  step = width of the dichotomic search (it decreases by half at each */
  /*  iteration). */
  b_step = 30.0;
  /*  Convergence condition is  */
  /*   ....... */
  /*  bet  = \int_{-c}^c  \psi'(x) d \Phi(x) */
  /*  alph = \int_{-c}^c  \psi^2(x) d \Phi(x) */
  /*  empeff = bet^2/alph = 1 / [var (robust estimator of location)] */
  empeff = 10.0;
  while (fabs(empeff - eff) > 1.0E-12) {
    empeff = ceff * ceff;
    cs = empeff / 2.0;
    b_tmp = gammainc(cs, 2.5);
    b_b_tmp = gammainc(cs, 1.5);
    ar = 15.0 * b_tmp.re;
    br_tmp = rt_powd_snf(ceff, 4.0);
    if (15.0 * b_tmp.im == 0.0) {
      re = ar / br_tmp;
    } else if (ar == 0.0) {
      re = 0.0;
    } else {
      re = ar / br_tmp;
    }
    ar = 6.0 * b_b_tmp.re;
    if (6.0 * b_b_tmp.im == 0.0) {
      b_re = ar / empeff;
    } else if (ar == 0.0) {
      b_re = 0.0;
    } else {
      b_re = ar / empeff;
    }
    a = (re - b_re) + (gammainc(cs, 0.5)).re;
    dc = gammainc(cs, 5.5);
    ar = 945.0 * dc.re;
    empeff = rt_powd_snf(ceff, 8.0);
    if (945.0 * dc.im == 0.0) {
      re = ar / empeff;
    } else if (ar == 0.0) {
      re = 0.0;
    } else {
      re = ar / empeff;
    }
    dc = gammainc(cs, 4.5);
    ar = 420.0 * dc.re;
    empeff = rt_powd_snf(ceff, 6.0);
    if (420.0 * dc.im == 0.0) {
      b_re = ar / empeff;
    } else if (ar == 0.0) {
      b_re = 0.0;
    } else {
      b_re = ar / empeff;
    }
    dc = gammainc(cs, 3.5);
    ar = 90.0 * dc.re;
    if (90.0 * dc.im == 0.0) {
      br_tmp = ar / br_tmp;
    } else if (ar == 0.0) {
      br_tmp = 0.0;
    } else {
      br_tmp = ar / br_tmp;
    }
    ar = 6.0 * b_tmp.re;
    if (6.0 * b_tmp.im == 0.0) {
      empeff = ar / cs;
    } else if (ar == 0.0) {
      empeff = 0.0;
    } else {
      empeff = ar / cs;
    }
    empeff = a * a / ((((re - b_re) + br_tmp) - empeff) + b_b_tmp.re);
    b_step /= 2.0;
    if (empeff < eff) {
      ceff += b_step;
    } else if (empeff > eff) {
      ceff = fmax(ceff - b_step, 0.1);
    }
  }
  /*  Remark: */
  /*  chi2cdf(x,v) = gamcdf(x,v/2,2) = gammainc(x ./ 2, v/2); */
  return ceff;
}

/* End of code generation (TBeff.c) */
