/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * HAbdp.c
 *
 * Code generation for function 'HAbdp'
 *
 */

/* Include files */
#include "HAbdp.h"
#include "eml_erfcore.h"
#include "fsdaC_data.h"
#include "fsdaC_types.h"
#include "gammainc.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
double HAbdp(double bdp, const emxArray_real_T *abc)
{
  creal_T dc;
  creal_T dc1;
  double Erho1;
  double Erhoab_tmp;
  double a;
  double b_phic_tmp;
  double b_step;
  double b_y;
  double c;
  double c2;
  double c2_tmp;
  double c_phic_tmp;
  double c_y;
  double ctun;
  double d_phic_tmp;
  double d_y;
  double phic;
  double phic_tmp;
  double y;
  /* HAbdp finds the constant c associated to the supplied breakdown point */
  /*  The constant is found through a dichotomic search */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('HAbdp')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*       bdp    : breakdown point. Scalar. Scalar defining breakdown point */
  /*                (i.e a number between 0 and 0.5) */
  /*                Data Types - single|double */
  /*         p    : number of response variables. Scalar. e.g. in regression p=1
   */
  /*                Data Types - single|double|int32|int64 */
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
  /*  Output: */
  /*  */
  /*   ctun : Requested tuning constant. Scalar. Tuning constatnt of Hampel rho
   */
  /*          function associated to requested breakdown point */
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
  /* 	It is necessary to have 0 <= a <= b <= c */
  /*  */
  /*  See also: TBbdp, HYPbdp, OPTbdp */
  /*  */
  /*  References: */
  /*  */
  /*  Hoaglin, D.C., Mosteller, F., Tukey, J.W. (1982), "Understanding Robust
   * and */
  /*  Exploratory Data Analysis", Wiley, New York. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('HAbdp')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  */
  /*  */
  /*  Examples: */
  /*  */
  /* { */
  /*     %% Find constant c for bdp=0.5. */
  /*     % The constant c associated to a breakdown point of 50 per cent in
   * regression is */
  /*     % 0.198131771596856 */
  /*     c=HAbdp(0.5,1); */
  /*     disp(c); */
  /* } */
  /* { */
  /*     %% Find constant c for bdp=0.5 when abc=[1.5 3.5 8]. */
  /*     % The constant c associated to a breakdown point of 50 per cent in
   * regression is */
  /*     c=HAbdp(0.5,1,[1.5 3.5 8]); */
  /*     disp(c); */
  /* } */
  /*  Beginning of code */
  /*  step = width of the dichotomic search (it decreases by half at each */
  /*  iteration). Generally it can be smaller. A large value ensures converge */
  /*  when bdp is very small and p is very large. */
  b_step = 200.0;
  /*  ctun = starting point of the iteration */
  ctun = 0.4;
  /*  Convergence condition is E(\rho) = \rho(\infty) bdp */
  Erho1 = 10.0;
  while (fabs(Erho1 - 1.0) > 1.0E-10) {
    a = abc->data[0] * ctun;
    Erho1 = abc->data[1] * ctun;
    c = abc->data[2] * ctun;
    c2_tmp = c * c;
    c2 = c2_tmp / 2.0;
    phic_tmp = c - Erho1;
    b_phic_tmp = a * a;
    c_phic_tmp = 0.5 * phic_tmp * a;
    d_phic_tmp = a * Erho1 - 0.5 * b_phic_tmp;
    phic = d_phic_tmp + c_phic_tmp;
    /*  |u| <a */
    /*  Erhoa=  \int_-a^a u^2/2 */
    /*  rhoa = @(u,a,b,c)(0.5*u.^2.*(1/sqrt(2*pi)).*exp(-0.5*u.^2)); */
    /*  Erhoack=integral(@(u)rhoa(u,a,b,c),-a,a); */
    /*  a< |u| <b */
    /*  Erhoab= 2 * \int_a^b (au-0.5a^2) */
    Erhoab_tmp = exp(-0.5 * Erho1 * Erho1) / 2.5066282746310002;
    y = eml_erfcore(-Erho1 / 1.4142135623730951);
    b_y = eml_erfcore(-a / 1.4142135623730951);
    /*  rhoab = @(u,a,b,c)((a*u-0.5*a^2).*(1/sqrt(2*pi)).*exp(-0.5*u.^2)); */
    /*  Erhoabck=2*integral(@(u)rhoab(u,a,b,c),a,b); */
    /*  b< |u| <c */
    /*  Erhobc = \int_b^c \rho(x) \Phi(x) */
    c_y = eml_erfcore(-c / 1.4142135623730951);
    d_y = eml_erfcore(-Erho1 / 1.4142135623730951);
    /*      psi2 = @(u,a,b,c) (a*b-0.5*a^2+0.5*(c-b)*a*(1 -(c-u).^2/((c-b)^2)))
     * .*(1/sqrt(2*pi)).*exp(-0.5*u.^2); */
    /*      Erhobcck=2*integral(@(u)psi2(u,a,b,c),b,c); */
    /*  */
    /*      psi2 = @(u,a,b,c) (a*b-0.5*a^2+0.5*(c-b)*a*(1 -(c.^2)/((c-b)^2)))
     * .*(1/sqrt(2*pi)).*exp(-0.5*u.^2); */
    /*      Erhobc1ck=2*integral(@(u)psi2(u,a,b,c),b,c); */
    /*  */
    /*      psi2 = @(u,a,b,c) (0.5*(c-b)*a*( -u.^2/((c-b)^2)))
     * .*(1/sqrt(2*pi)).*exp(-0.5*u.^2); */
    /*      Erhobc2ck=2*integral(@(u)psi2(u,a,b,c),b,c); */
    /*  */
    /*      psi2 = @(u,a,b,c) (0.5*(c-b)*a*( 2*c*u/((c-b)^2)))
     * .*(1/sqrt(2*pi)).*exp(-0.5*u.^2); */
    /*      Erhobc3ck=2*integral(@(u)psi2(u,a,b,c),b,c); */
    /*  |u| >c */
    dc = gammainc(Erho1 * Erho1 / 2.0, 1.5);
    dc1 = gammainc(c2, 1.5);
    Erho1 = 0.5 * a * (dc.re - dc1.re);
    if (0.5 * a * (dc.im - dc1.im) == 0.0) {
      Erho1 /= phic_tmp;
    } else if (Erho1 == 0.0) {
      Erho1 = 0.0;
    } else {
      Erho1 /= phic_tmp;
    }
    Erho1 =
        (((0.5 * (gammainc(b_phic_tmp / 2.0, 1.5)).re +
           (2.0 * a * (exp(-0.5 * a * a) / 2.5066282746310002 - Erhoab_tmp) -
            b_phic_tmp * (0.5 * y - 0.5 * b_y))) +
          ((2.0 *
                (d_phic_tmp +
                 c_phic_tmp * (1.0 - c2_tmp / (phic_tmp * phic_tmp))) *
                (0.5 * c_y - 0.5 * d_y) +
            Erho1) +
           2.0 * a * c * (Erhoab_tmp - exp(-0.5 * c * c) / 2.5066282746310002) /
               phic_tmp)) +
         phic * (1.0 - (gammainc(c2, 0.5)).re)) /
        (phic * bdp);
    b_step /= 2.0;
    if (Erho1 > 1.0) {
      ctun += b_step;
    } else {
      ctun = fmax(ctun - b_step, 0.1);
    }
    /*  disp([step ctun Erho1]) */
  }
  /*  Remark: */
  /*  chi2cdf(x,v) = gamcdf(x,v/2,2) = gammainc(x ./ 2, v/2); */
  return ctun;
}

/* End of code generation (HAbdp.c) */
