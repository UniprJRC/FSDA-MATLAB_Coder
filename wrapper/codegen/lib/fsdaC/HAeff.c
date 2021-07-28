/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * HAeff.c
 *
 * Code generation for function 'HAeff'
 *
 */

/* Include files */
#include "HAeff.h"
#include "fsdaC_data.h"
#include "fsdaC_types.h"
#include "gammainc.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
double HAeff(double eff, const emxArray_real_T *abc)
{
  creal_T a_tmp;
  creal_T b_a_tmp;
  creal_T bet_tmp;
  double a;
  double a2;
  double a2_tmp;
  double ar;
  double b2;
  double b_a;
  double b_step;
  double c;
  double c2;
  double c2_tmp;
  double ceff;
  double empeff;
  /* HAeff finds the tuning constant that guarrantees a requested asymptotic
   * efficiency */
  /*  */
  /* <a href="matlab: docsearchFS('HAeff')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     eff:       efficiency. Scalar.  Scalar which contains the required */
  /*                efficiency (of location or scale estimator). */
  /*                Generally eff=0.85, 0.9 or 0.95. */
  /*     v :        number of response variables. Scalar. Number of variables of
   */
  /*                the  dataset (for regression v=1) */
  /*                UP TO NOW v=1 (JUST REGRESSION) TO DO FOR MULTIVARIATE */
  /*                ANALYSIS */
  /*  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*      abc     : parameters of Hampel estimator. Vector. Vector of length 3
   */
  /*                which contains the parameters of Hampel estimator. If */
  /*                vector abc is not specified it is set equal to [2, 4, 8] */
  /*                Example - [1.5,3.5,8] */
  /*                Data Types - double */
  /*  */
  /*  */
  /*  Output: */
  /*  */
  /*   ceff : Requested tuning constant. Scalar. Tuning constatnt of Hampel rho
   */
  /*          function associated to requested value of efficiency */
  /*  */
  /*  */
  /*  More About: */
  /*  */
  /*  Function HApsi transforms vector u as follows. */
  /*   \[ */
  /*   HApsi(u)  = \left\{ */
  /*   \begin{array}{cc} */
  /*     u & |u| <= a                                       \\ */
  /*     a \times sign(u) & a <= |u| < b                    \\ */
  /*     a \frac{c-|u|}{c-b} \times sign(u) & b <= |u| <  c \\ */
  /*     0 & |u| >= c */
  /*   \end{array} \right. */
  /*  \] */
  /*  */
  /*              where $a$= ctun *param(1). */
  /*                    $b$= ctun *param(2). */
  /*                    $c$= ctun *param(3). */
  /*  */
  /*              The default is */
  /*                    $a$= 2*ctun. */
  /*                    $b$= 4*ctun. */
  /*                    $c$= 8*ctun. */
  /*  */
  /* 	It is necessary to have 0 <= a <= b <= c. */
  /*  */
  /*  Parameter ctun multiplies parameters (a,b,c) of Hampel estimator. */
  /*  */
  /*  */
  /*  See also: TBeff, HYPeff, OPTeff, RKeff, HUeff */
  /*  */
  /*  References: */
  /*  */
  /*  Hoaglin, D.C., Mosteller, F., Tukey, J.W. (1982), "Understanding Robust
   * and */
  /*  Exploratory Data Analysis", Wiley, New York. */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('HAeff')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  */
  /*  */
  /*  Examples: */
  /*  */
  /* { */
  /*     % Find c for fixed efficiency. */
  /*     % The constant c associated to a nominal location efficiency of 95% in
   * regression is */
  /*     % c = 0.690998716841394 */
  /*     c=HAeff(0.95,1) */
  /* } */
  /* { */
  /*     % Example where three input parameters are supplied. */
  /*     % Find constant c associated to a nominal location efficiency of 95 per
   */
  /*     % cent in regression when tun=[1.5,3.5,8]. */
  /*      tun=[1.5,3,8]; */
  /*     c=HAeff(0.95,1,tun); */
  /* } */
  /*  */
  /*  */
  /*  Beginning of code */
  /*  LOCATION EFFICIENCY */
  /*  ctun = starting point of the iteration */
  ceff = 0.57;
  /*  c = starting point of the iteration */
  /*  Remark: the more refined approximation for the starting value of */
  /*  sqrt(chi2inv(eff,p))+2; does not seem to be necessary in the case of */
  /*  location efficiency */
  /*  step = width of the dichotomic search (it decreases by half at each */
  /*  iteration). */
  b_step = 0.5;
  /*  Convergence condition is */
  /*   ....... */
  /*  ctun=(0:0.01:1)'; */
  empeff = 1.0;
  while (fabs(empeff - eff) > 1.0E-14) {
    a = abc->data[0] * ceff;
    empeff = abc->data[1] * ceff;
    c = abc->data[2] * ceff;
    a2_tmp = a * a;
    a2 = a2_tmp / 2.0;
    b2 = empeff * empeff / 2.0;
    c2_tmp = c * c;
    c2 = c2_tmp / 2.0;
    /*  bet  = \int  \psi'(x) d \Phi(x) */
    /*  bet = \int_-a^a d \Phi(x) +2* \int_b^c -a/(c-b) */
    a_tmp = gammainc(b2, 0.5);
    b_a_tmp = gammainc(c2, 0.5);
    bet_tmp = gammainc(a2, 0.5);
    /*  alph = \int \psi^2(x) d \Phi(x) */
    empeff = c - empeff;
    b_a = a / empeff;
    /*                                         % 2* \int_0^a x^2 f(x) dx */
    /*                      % 2* a^2 \int_a^b f(x) dx */
    /*     %(a./(c-b)).^2 (2 c^2 \int_b^c f(x) dx */
    /*                 %   + 2*  \int_b^c x^2 f(x) dx */
    /*  +2 *2* \int_b^c |x| f(x) */
    /*  Remark: if v=1 */
    /*  -2*c*v*sqrt(2/pi)*(gammainc(c2,(v+1)/2)-gammainc(b2,(v+1)/2))); */
    /*      -4*c.*(normpdf(b)-normpdf(c))  ); */
    /*  empeff = bet^2/alph = 1 / [var (robust estimator of location)] */
    ar = (a_tmp.re - b_a_tmp.re) * a;
    if ((a_tmp.im - b_a_tmp.im) * a == 0.0) {
      empeff = ar / empeff;
    } else if (ar == 0.0) {
      empeff = 0.0;
    } else {
      empeff = ar / empeff;
    }
    a = bet_tmp.re + empeff;
    empeff = a * a /
             (((gammainc(a2, 1.5)).re + a2_tmp * (a_tmp.re - bet_tmp.re)) +
              b_a * b_a *
                  ((c2_tmp * (b_a_tmp.re - a_tmp.re) +
                    ((gammainc(c2, 1.5)).re - (gammainc(b2, 1.5)).re)) -
                   2.0 * c * 0.79788456080286541 *
                       ((gammainc(c2, 1.0)).re - (gammainc(b2, 1.0)).re)));
    b_step /= 2.0;
    if (empeff < eff) {
      ceff += b_step;
    } else if (empeff > eff) {
      ceff = fmax(ceff - b_step, 0.01);
    }
    /*  disp([empeff eff ctun]) */
  }
  /*  Remark: */
  /*  chi2cdf(x,v) = gamcdf(x,v/2,2) = gammainc(x ./ 2, v/2); */
  return ceff;
}

/* End of code generation (HAeff.c) */
