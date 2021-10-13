/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * OPTeff.c
 *
 * Code generation for function 'OPTeff'
 *
 */

/* Include files */
#include "OPTeff.h"
#include "fsdaC_rtwutil.h"
#include "gammainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
double OPTeff(double eff)
{
  creal_T b_b_tmp;
  creal_T b_tmp;
  double a;
  double b;
  double b_re_tmp;
  double b_step;
  double c_re_tmp;
  double ceff;
  double d;
  double d1;
  double d10;
  double d11;
  double d12;
  double d13;
  double d14;
  double d2;
  double d3;
  double d4;
  double d5;
  double d6;
  double d7;
  double d8;
  double d9;
  double d_re_tmp;
  double empeff;
  double re_tmp;
  /* OPTeff finds the constant c which is associated to the requested efficiency
   */
  /*  */
  /* <a href="matlab: docsearchFS('OPTeff')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     eff:       required efficienty. Scalar. */
  /*                Scalar which contains the required efficiency (of location
   */
  /*                or scale estimator). */
  /*                Generally eff=0.85, 0.9 or 0.95 */
  /*                Data Types - single|double */
  /*     v :        Number of response variables. Scalar. e.g. in regression p=1
   */
  /*                Data Types - single|double|int32|int64 */
  /*                 */
  /*  */
  /*   Optional input arguments: TODO_OPTeff_INPUT_OPTIONS */
  /*    */
  /*  */
  /*  Output: */
  /*  */
  /*   ceff : Requested tuning constant. Scalar. Tuning constatnt of optimal rho
   */
  /*          function associated to requested value of efficiency */
  /*  */
  /*  More About: */
  /*  */
  /*     $\rho$ ($\psi$) function which is considered is standardized  */
  /*     using intervals 0---(2/3)c , (2/3)c---c, >c.    */
  /*     $\rho$ function is */
  /*  */
  /*  \[ */
  /*  TBrho(u)= \left\{ */
  /*     \begin{array}{lr} */
  /*      1.3846 \left(\frac{u}{c}\right)^2                      &
   * |\frac{u}{c}| \leq  \frac{2}{3} \\ */
  /*     0.5514-2.6917 \left(\frac{u}{c}\right)^2
   * +10.7668\left(\frac{u}{c}\right)^4-11.6640\left(\frac{u}{c}\right)^6+4.0375\left(\frac{u}{c}\right)^8
   * & \qquad \frac{2}{3} \leq  |\frac{u}{c}|\leq  1 \\ */
  /*     1                                                    &
   * |\frac{u}{c}|>1 \\ */
  /*  \end{array} */
  /*     \right. */
  /*   \] */
  /*                                                                       |t/c|>1
   */
  /*  */
  /*    Therefore, to obtain the value of c for the (rho) psi function defined
   * in the */
  /*    interval 0---2c, 2c---3c, >3c it is necessary to divide the output of */
  /*    function OPTeff by 3. */
  /*  */
  /*  See also: TBeff, HYPeff, HAeff */
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
  /* <a href="matlab: docsearchFS('OPTeff')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /*  */
  /* { */
  /*     % Find c given a value of efficiency. */
  /*     % The constant c associated to a nominal location efficiency of 95% in
   * regression is */
  /*     % c = 3.180662196584308 */
  /*     c=OPTeff(0.95,1) */
  /* } */
  /*  */
  /* { */
  /*     % Find the value of c for efficiency which goes to 1. */
  /*     ef=0.75:0.01:0.99; */
  /*     CC=[ef' zeros(length(ef),1)]; */
  /*     jk=0; */
  /*     for j=ef */
  /*         jk=jk+1; */
  /*         CC(jk,2)=OPTeff(j,1); */
  /*     end */
  /*  */
  /* } */
  /*  Beginning of code */
  /*  LOCATION EFFICIENCY */
  ceff = 2.0;
  /*  c = starting point of the iteration */
  /*  Remark: the more refined approximation for the starting value of */
  /*  sqrt(chi2inv(eff,p))+2; does not seem to be necessary in the case of */
  /*  location efficiency */
  /*  step = width of the dichotomic search (it decreases by half at each */
  /*  iteration). */
  b_step = 10.0;
  /*      p4=(p+4)*(p+2); */
  /*      p6=(p+6)*(p+4)*(p+2); */
  /*      p8=(p+8)*(p+6)*(p+4)*(p+2); */
  /*  Coefficients of optimal psi standardized using intervals  */
  /*  0---(2/3)c , (2/3)c---c, >c   */
  /*  Epsisq = E( \psi(x)^2)  */
  /*  Epsidivx = E( \psi(x)/x) */
  /*  Epsider = E( \psi'(x)) */
  /*  bet=(1-1/p)*Epsidivx+(1/p)*Epsider;    */
  /*  [var (robust estimator of location using optimal rho function)] =
   * (Epsisq/p) / (bet^2) */
  empeff = 10.0;
  while (fabs(empeff - eff) > 1.0E-12) {
    empeff = rt_powd_snf(ceff, 2.0);
    b = empeff / 2.0;
    a = 2.0 * empeff / 9.0;
    d = 2.5;
    gammaln(&d);
    b_tmp = scalar_gammainc(a, 1.5, 0.40546510810816438, d);
    d = 1.5;
    gammaln(&d);
    b_b_tmp = scalar_gammainc(a, 0.5, -0.69314718055994529, d);
    d = 1.5;
    gammaln(&d);
    d1 = 2.5;
    gammaln(&d1);
    d2 = 2.5;
    gammaln(&d2);
    d3 = 3.5;
    gammaln(&d3);
    d4 = 3.5;
    gammaln(&d4);
    d5 = 4.5;
    gammaln(&d5);
    d6 = 4.5;
    gammaln(&d6);
    d7 = 1.5;
    gammaln(&d7);
    d8 = 1.5;
    gammaln(&d8);
    d9 = 2.5;
    gammaln(&d9);
    d10 = 2.5;
    gammaln(&d10);
    d11 = 3.5;
    gammaln(&d11);
    d12 = 3.5;
    gammaln(&d12);
    d13 = 4.5;
    gammaln(&d13);
    d14 = 4.5;
    gammaln(&d14);
    empeff = ceff * ceff;
    re_tmp = -5.3834 / empeff;
    empeff = 2.7692 / empeff * b_b_tmp.re;
    b_re_tmp = rt_powd_snf(ceff, 4.0);
    c_re_tmp = rt_powd_snf(ceff, 6.0);
    d_re_tmp = rt_powd_snf(ceff, 8.0);
    empeff =
        0.0 * ((((empeff +
                  re_tmp *
                      ((scalar_gammainc(b, 0.5, -0.69314718055994529, d)).re -
                       b_b_tmp.re)) +
                 43.0672 / b_re_tmp *
                     ((scalar_gammainc(b, 1.5, 0.40546510810816438, d1)).re -
                      (scalar_gammainc(a, 1.5, 0.40546510810816438, d2)).re)) +
                -69.984 / c_re_tmp * 3.0 *
                    ((scalar_gammainc(b, 2.5, 0.91629073187415511, d3)).re -
                     (scalar_gammainc(a, 2.5, 0.91629073187415511, d4)).re)) +
               32.3 / d_re_tmp * 5.0 * 3.0 *
                   ((scalar_gammainc(b, 3.5, 1.2527629684953681, d5)).re -
                    (scalar_gammainc(a, 3.5, 1.2527629684953681, d6)).re)) +
        ((((empeff +
            re_tmp * ((scalar_gammainc(b, 0.5, -0.69314718055994529, d7)).re -
                      (scalar_gammainc(a, 0.5, -0.69314718055994529, d8)).re)) +
           129.20159999999998 / b_re_tmp *
               ((scalar_gammainc(b, 1.5, 0.40546510810816438, d9)).re -
                (scalar_gammainc(a, 1.5, 0.40546510810816438, d10)).re)) +
          -349.91999999999996 / c_re_tmp * 3.0 *
              ((scalar_gammainc(b, 2.5, 0.91629073187415511, d11)).re -
               (scalar_gammainc(a, 2.5, 0.91629073187415511, d12)).re)) +
         226.09999999999997 / d_re_tmp * 5.0 * 3.0 *
             ((scalar_gammainc(b, 3.5, 1.2527629684953681, d13)).re -
              (scalar_gammainc(a, 3.5, 1.2527629684953681, d14)).re));
    d = 2.5;
    gammaln(&d);
    d1 = 4.5;
    gammaln(&d1);
    d2 = 4.5;
    gammaln(&d2);
    d3 = 6.5;
    gammaln(&d3);
    d4 = 6.5;
    gammaln(&d4);
    d5 = 8.5;
    gammaln(&d5);
    d6 = 8.5;
    gammaln(&d6);
    d7 = 3.5;
    gammaln(&d7);
    d8 = 3.5;
    gammaln(&d8);
    d9 = 4.5;
    gammaln(&d9);
    d10 = 4.5;
    gammaln(&d10);
    d11 = 5.5;
    gammaln(&d11);
    d12 = 5.5;
    gammaln(&d12);
    d13 = 7.5;
    gammaln(&d13);
    d14 = 7.5;
    gammaln(&d14);
    empeff =
        empeff * empeff /
        ((((((((7.66846864 / b_re_tmp * b_tmp.re +
                28.98099556 / b_re_tmp *
                    ((scalar_gammainc(b, 1.5, 0.40546510810816438, d)).re -
                     b_tmp.re)) +
               1854.78371584 / d_re_tmp * 5.0 * 3.0 *
                   ((scalar_gammainc(b, 3.5, 1.2527629684953681, d1)).re -
                    (scalar_gammainc(a, 3.5, 1.2527629684953681, d2)).re)) +
              7679.901376 / rt_powd_snf(ceff, 12.0) * 9.0 * 7.0 * 5.0 * 3.0 *
                  ((scalar_gammainc(b, 5.5, 1.7047480922384253, d3)).re -
                   (scalar_gammainc(a, 5.5, 1.7047480922384253, d4)).re)) +
             1043.2899999999997 / rt_powd_snf(ceff, 16.0) * 13.0 * 11.0 * 9.0 *
                 7.0 * 5.0 * 3.0 *
                 ((scalar_gammainc(b, 7.5, 2.0149030205422647, d5)).re -
                  (scalar_gammainc(a, 7.5, 2.0149030205422647, d6)).re)) +
            -463.69592896 / c_re_tmp * 3.0 *
                ((scalar_gammainc(b, 2.5, 0.91629073187415511, d7)).re -
                 (scalar_gammainc(a, 2.5, 0.91629073187415511, d8)).re)) +
           753.5037312 / d_re_tmp * 5.0 * 3.0 *
               ((scalar_gammainc(b, 3.5, 1.2527629684953681, d9)).re -
                (scalar_gammainc(a, 3.5, 1.2527629684953681, d10)).re)) +
          -6375.7974896 / rt_powd_snf(ceff, 10.0) * 7.0 * 5.0 * 3.0 *
              ((scalar_gammainc(b, 4.5, 1.5040773967762742, d11)).re -
               (scalar_gammainc(a, 4.5, 1.5040773967762742, d12)).re)) +
         -4520.9663999999993 / rt_powd_snf(ceff, 14.0) * 11.0 * 9.0 * 7.0 *
             5.0 * 3.0 *
             ((scalar_gammainc(b, 6.5, 1.8718021769015913, d13)).re -
              (scalar_gammainc(a, 6.5, 1.8718021769015913, d14)).re));
    b_step *= 0.5;
    /*  disp([step c empeff]) */
    if (empeff < eff) {
      ceff += b_step;
    } else if (empeff > eff) {
      ceff = fmax(ceff - b_step, 0.1);
    }
    /*  disp([step c empeff]) */
  }
  /*  Remark: */
  /*  chi2cdf(x,v) = gamcdf(x,v/2,2) = gammainc(x ./ 2, v/2); */
  return ceff;
}

/* End of code generation (OPTeff.c) */
