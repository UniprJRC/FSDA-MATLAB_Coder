/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * TBbdp.c
 *
 * Code generation for function 'TBbdp'
 *
 */

/* Include files */
#include "TBbdp.h"
#include "fsdaC_data.h"
#include "fsdaC_rtwutil.h"
#include "gammainc.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
double TBbdp(double bdp)
{
  creal_T dc;
  double Erho1;
  double b_re;
  double b_step;
  double br;
  double c;
  double c2;
  double c2_tmp;
  double re;
  /* TBbdp finds the constant c associated to the supplied breakdown point for
   * Tukey's biweight */
  /*  The constant is found through a dichotomic search */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('TBbdp')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*       bdp    : breakdown point. Scalar. Scalar defining breakdown point */
  /*                (i.e a number between 0 and 0.5) */
  /*                Data Types - single|double */
  /*         v    : number of response variables. Scalar. e.g. in regression v=1
   */
  /*                Data Types - single|double|int32|int64 */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*   c : Requested tuning constant. Scalar. Tuning constatnt of Tukey Biweight
   */
  /*          function associated to requested breakdown point */
  /*  */
  /*  */
  /*  See also: OPTbdp, HYPbdp, HAbdp, PDbdp */
  /*  */
  /*  References: */
  /*  */
  /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics, Theory
   */
  /*  and Methods", Wiley, New York. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('TBbdp')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  */
  /*  */
  /*  Examples: */
  /*  */
  /* { */
  /*     % Find c given bdp. */
  /*     % The constant c associated to a breakdown point of 50% in regression
   * is */
  /*     % c=1.547644980928226 */
  /*     c=TBbdp(0.5,1) */
  /* } */
  /*  */
  /*  Beginning of code */
  /*  c = starting point of the iteration */
  c = 5.0;
  /*  if bdp>0.0001 */
  /*      c=5; */
  /*  elseif bdp>=0.00003 */
  /*      c=270; */
  /*  else */
  /*      c=350; */
  /*  end */
  /*  step = width of the dichotomic search (it decreases by half at each */
  /*  iteration). Generally it can be smaller. A large value ensures converge */
  /*  when bdp is very small and p is very large. */
  b_step = 200.0;
  /*  Convergence condition is E(\rho) = \rho(c) bdp */
  /*   where \rho(c) for TBW is c^2/6 */
  Erho1 = 10.0;
  while (fabs(Erho1 - 1.0) > 1.0E-11) {
    c2_tmp = c * c;
    c2 = c2_tmp / 2.0;
    dc = gammainc(c2, 1.5);
    if (dc.im == 0.0) {
      re = dc.re / 2.0;
    } else if (dc.re == 0.0) {
      re = 0.0;
    } else {
      re = dc.re / 2.0;
    }
    dc = gammainc(c2, 2.5);
    Erho1 = 3.0 * dc.re;
    br = 4.0 * c2;
    if (3.0 * dc.im == 0.0) {
      b_re = Erho1 / br;
    } else if (Erho1 == 0.0) {
      b_re = 0.0;
    } else {
      b_re = Erho1 / br;
    }
    dc = gammainc(c2, 3.5);
    Erho1 = 15.0 * dc.re;
    br = 6.0 * rt_powd_snf(c, 4.0);
    if (15.0 * dc.im == 0.0) {
      Erho1 /= br;
    } else if (Erho1 == 0.0) {
      Erho1 = 0.0;
    } else {
      Erho1 /= br;
    }
    Erho1 = (((re - b_re) + Erho1) +
             c2_tmp / 6.0 * (1.0 - (gammainc(c2, 0.5)).re)) /
            c2_tmp * (6.0 / bdp);
    b_step /= 2.0;
    if (Erho1 > 1.0) {
      c += b_step;
    } else {
      c = fmax(c - b_step, 0.1);
    }
    /*  disp([step c Erho1]) */
  }
  /*  Remark: */
  /*  chi2cdf(x,v) = gamcdf(x,v/2,2) = gammainc(x ./ 2, v/2); */
  return c;
}

/* End of code generation (TBbdp.c) */
