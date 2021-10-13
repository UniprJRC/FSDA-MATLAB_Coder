/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * OPTbdp.c
 *
 * Code generation for function 'OPTbdp'
 *
 */

/* Include files */
#include "OPTbdp.h"
#include "fsdaC_rtwutil.h"
#include "gammainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
double OPTbdp(double bdp)
{
  creal_T dc;
  creal_T dc1;
  double Erho1;
  double a;
  double b;
  double b_lgap11_tmp;
  double b_step;
  double c;
  double c_lgap11_tmp;
  double d_lgap11_tmp;
  double e_lgap11_tmp;
  double lgap11_tmp;
  /* OPTbdp finds the constant c associated to the supplied breakdown point */
  /*  The constant is found through a dichotomic search */
  /*  */
  /* <a href="matlab: docsearchFS('OPTbdp')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*       bdp    : breakdown point. Scalar. Scalar defining breakdown point */
  /*                (i.e a number between 0 and 0.5) */
  /*                Data Types - single|double */
  /*         v    : number of response variables. Scalar. e.g. in regression p=1
   */
  /*                Data Types - single|double|int32|int64 */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*   c : Requested tuning constant. Scalar. Tuning constatnt of optimal rho */
  /*          function associated to requested breakdown point */
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
  /*  */
  /*    Therefore, to obtain the value of c for the (rho) psi function defined
   * in the */
  /*    interval 0---2c, 2c---3c, >3c it is necessary to divide the output of */
  /*    function OPTbdp by 3. */
  /*  */
  /*  See also: TBbdp, HYPbdp, HAbdp */
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
  /* <a href="matlab: docsearchFS('OPTbdp')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /*  */
  /* { */
  /*     % Find c given bdp. */
  /*     % The constant c associated to a breakdown point of 50% in regression
   * is  */
  /*     % c= 1.213897063441983 */
  /*     c=OPTbdp(0.5,1) */
  /* } */
  /*  */
  /*  Beginning of code */
  /*  c = starting point of the iteration */
  c = 5.0;
  /*  step = width of the dichotomic search (it decreases by half at each */
  /*  iteration). Generally it can be smaller. A large value ensures converge */
  /*  when bdp is very small and p is very large. */
  b_step = 200.0;
  /*  Convergence condition is E(\rho) = \rho(c) bdp */
  /*  For simplicity below we put the standardized rho function so that */
  /*  \rho(c)=1 */
  Erho1 = 10.0;
  while (fabs(Erho1 - 1.0) > 1.0E-10) {
    Erho1 = rt_powd_snf(c, 2.0);
    b = Erho1 / 2.0;
    a = 2.0 * Erho1 / 9.0;
    lgap11_tmp = 2.5;
    gammaln(&lgap11_tmp);
    b_lgap11_tmp = 1.5;
    gammaln(&b_lgap11_tmp);
    c_lgap11_tmp = 3.5;
    gammaln(&c_lgap11_tmp);
    d_lgap11_tmp = 4.5;
    gammaln(&d_lgap11_tmp);
    e_lgap11_tmp = 5.5;
    gammaln(&e_lgap11_tmp);
    dc = scalar_gammainc(a, 1.5, 0.40546510810816438, lgap11_tmp);
    dc1 = scalar_gammainc(b, 0.5, -0.69314718055994529, b_lgap11_tmp);
    Erho1 =
        ((((((1.3846 / Erho1 * dc.re +
              0.5514 * (dc1.re - (scalar_gammainc(a, 0.5, -0.69314718055994529,
                                                  b_lgap11_tmp))
                                     .re)) -
             2.6917 / (c * c) *
                 ((scalar_gammainc(b, 1.5, 0.40546510810816438, lgap11_tmp))
                      .re -
                  dc.re)) +
            10.7668 / rt_powd_snf(c, 4.0) * 3.0 *
                ((scalar_gammainc(b, 2.5, 0.91629073187415511, c_lgap11_tmp))
                     .re -
                 (scalar_gammainc(a, 2.5, 0.91629073187415511, c_lgap11_tmp))
                     .re)) +
           -(11.664 / rt_powd_snf(c, 6.0)) * 3.0 * 5.0 *
               ((scalar_gammainc(b, 3.5, 1.2527629684953681, d_lgap11_tmp)).re -
                (scalar_gammainc(a, 3.5, 1.2527629684953681, d_lgap11_tmp))
                    .re)) +
          4.0375 / rt_powd_snf(c, 8.0) * 3.0 * 5.0 * 7.0 *
              ((scalar_gammainc(b, 4.5, 1.5040773967762742, e_lgap11_tmp)).re -
               (scalar_gammainc(a, 4.5, 1.5040773967762742, e_lgap11_tmp))
                   .re)) +
         (1.0 - dc1.re)) /
        bdp;
    b_step /= 2.0;
    if (Erho1 > 1.0) {
      c += b_step;
    } else {
      c = fmax(c - b_step, 0.1);
    }
    /*   disp([step c Erho1]) */
  }
  /*  Remark: */
  /*  chi2cdf(x,v) = gamcdf(x,v/2,2) = gammainc(x ./ 2, v/2); */
  return c;
}

/* End of code generation (OPTbdp.c) */
