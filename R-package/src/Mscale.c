/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Mscale.c
 *
 * Code generation for function 'Mscale'
 *
 */

/* Include files */
#include "Mscale.h"
#include "HArho.h"
#include "HYPrho.h"
#include "OPTrho.h"
#include "TBrho.h"
#include "blockedSummation.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
double Mscale(const emxArray_real_T *u, const emxArray_real_T *psifunc_c1,
              double psifunc_kc1, const char psifunc_class_data[],
              const int psifunc_class_size[2], double initialsc, double tol)
{
  static const char b_cv1[3] = {'O', 'P', 'T'};
  static const char cv3[3] = {'H', 'Y', 'P'};
  static const char b_cv[2] = {'T', 'B'};
  static const char cv2[2] = {'H', 'A'};
  static const char cv4[2] = {'P', 'D'};
  emxArray_boolean_T *w;
  emxArray_real_T *b_u;
  emxArray_real_T *x;
  emxArray_real_T *y;
  const double *psifunc_c1_data;
  const double *u_data;
  double b;
  double c_tmp;
  double err;
  double sc;
  double scnew=0;
  double *b_u_data;
  double *x_data;
  double *y_data;
  int b_x;
  int exitg1;
  int k;
  int loop;
  int nx;
  bool b_bool;
  bool *w_data;
  psifunc_c1_data = psifunc_c1->data;
  u_data = u->data;
  /* Mscale finds the M estimator of the scale */
  /*  */
  /* <a href="matlab: docsearchFS('Mscale')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*     u:       : residuals or Mahalanobis distances. Vector. */
  /*                n x 1 vector which contains the (unscaled) residuals or */
  /*                Mahalanobis distances */
  /*                Data Types - single | double */
  /*      psifunc : rho (psi) function. Structure. */
  /*                A structure specifying the class of rho (psi) function to
   * use, the */
  /*                consistency factor, and the value associated with the */
  /*                Expectation of rho in correspondence of the consistency
   * factor. */
  /*                psifunc must contain the following fields: */
  /*                psifunc.class = string identyfing the rho (psi) function to
   * use. */
  /*                     Admissible values for class are 'bisquare' (TB), */
  /*                     'optimal', (OPT) 'hyperbolic' (HYP), 'hampel' (HA) */
  /*                     'power divergence' (PD) */
  /*                psifunc.c1 = consistency factor (and other parameters) */
  /*                    associated to required breakdown point or nominal */
  /*                    efficiency. */
  /*                    More precisely, psifunc.c1(1) contains consistency */
  /*                    factor associated to required breakdown point or */
  /*                    nominal efficiency psifunc.c1(2:end) contain other */
  /*                    parameters associated with the rho (psi) function. */
  /*                    For example, if psifunc.class='hampel', c1(2:4) must */
  /*                    contain parameters (a, b and c) of Hampel rho function.
   */
  /*                psifunc.kc1= Expectation of rho associated with c1 to get a
   */
  /*                     consistent estimator at the model distribution */
  /*                     kc1=E(rho) */
  /*                Example -
   * psifunc.class='TB';psifunc.c1=1.5476;psifunc.kc1=0.1996 */
  /*                Data Types - struct */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*     initialsc: scalar. The initial estimate of the scale. */
  /*                If not defined, scaled MAD of vector |u| is used. */
  /*                Example - 'initialsc',0.34 */
  /*                Data Types - double */
  /*  */
  /*      tol     : scalar. The tolerance for controlling convergence. */
  /*                If not defined, tol is fixed to 1e-7. */
  /*                Example - 'tol',1e-10 */
  /*                Data Types - double */
  /*  */
  /*      maxiter : scalar. Maximum number of iterations to find the scale. */
  /*                If not defined, maxiter is fixed to 200. */
  /*                Example - 'maxiter',100 */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*   sc : M-estimate of the scale. Scalar. */
  /*        Robust M estimate of scale. */
  /*        This routine is called by Taureg.m and Sreg.m */
  /*  */
  /*  More About: */
  /*  */
  /*  u = residuals or Mahalanobis distances */
  /*  (note that u is kept fixed in each iteration). */
  /*  Remark: the M estimator of scale must satisfy the following equation */
  /*  \[ */
  /*   (1/n) \sum_{i=1}^n \rho((u_i/c)/s) = kc */
  /*  \] */
  /*  */
  /*  This routine computes the value of $s$ which satisfies the above */
  /*  equation. */
  /*  */
  /*  See also: Sreg, Smult */
  /*  */
  /*  References: */
  /*  */
  /*  Huber, P.J. and Ronchetti, E.M. (2009), "Robust Statistics, 2nd Edition",
   */
  /*  Wiley. [equation 7.119,  p. 176]. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('Mscale')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /* { */
  /*     % Example of M estimate of scale. */
  /*     % M estimate of the scale using Tukey biweight rho function with a */
  /*     % value of c associated to a breakdown point of 0.5. */
  /*     psifunc=struct; */
  /*     psifunc.class='TB'; */
  /*     bdp=0.5; */
  /*     c=TBbdp(bdp,1); */
  /*     % kc = E(rho) = sup(rho)*bdp */
  /*     kc=c^2/6*bdp; */
  /*     psifunc.c1=c; */
  /*     psifunc.kc1=kc; */
  /*     n=10000; */
  /*     shift=5; */
  /*     u=2*randn(n,1); */
  /*     u(1:10)=u(1:10)+shift; */
  /*     s=Mscale(u,psifunc) */
  /* } */
  /* { */
  /*     % Estimate of scale using Hampel rho function. */
  /*     % M estimate of the scale using Hampel rho function with a */
  /*     % value of c associated to a breakdown point of 0.5 */
  /*     psifunc=struct; */
  /*     psifunc.class='HA' */
  /*     abc=[1.5 3.5 8]; */
  /*     bdp=0.5; */
  /*     c=HAbdp(bdp,1,abc); */
  /*     % kc = E(rho) = sup(rho)*bdp */
  /*     kc=HArho(c*abc(3),[c, abc])*bdp; */
  /*     psifunc.c1=[c abc]; */
  /*     psifunc.kc1=kc; */
  /*     n=10000; */
  /*     shift=5; */
  /*     u=3*randn(n,1); */
  /*     u(1:10)=u(1:10)+shift; */
  /*     s=Mscale(u,psifunc) */
  /* } */
  /* { */
  /*     % Use of options initialsc, tol and maxiter. */
  /*     % M estimate of the scale using Tukey biweight rho function with a */
  /*     % value of c associated to a breakdown point of 0.5. */
  /*     psifunc=struct; */
  /*     psifunc.class='TB'; */
  /*     bdp=0.5; */
  /*     c=TBbdp(bdp,1); */
  /*     % kc = E(rho) = sup(rho)*bdp */
  /*     kc=c^2/6*bdp; */
  /*     psifunc.c1=c; */
  /*     psifunc.kc1=kc; */
  /*     n=10000; */
  /*     shift=5; */
  /*     u=2*randn(n,1); */
  /*     u(1:10)=u(1:10)+shift; */
  /*     s=Mscale(u,psifunc,3,1e-7,20) */
  /* } */
  /* { */
  /*     % Compare scale estimate using two differnt link functions. */
  /*     psifunc=struct; */
  /*     psifunc.class='HA' */
  /*     abc=[1.5 3.5 8]; */
  /*     bdp=0.5; */
  /*     c=HAbdp(bdp,1,abc); */
  /*     % kc = E(rho) = sup(rho)*bdp */
  /*     kc=HArho(c*abc(3),[c, abc])*bdp; */
  /*     psifunc.c1=[c, abc]; */
  /*     psifunc.kc1=kc; */
  /*     n=10000; */
  /*     shift=100; */
  /*     u=3*randn(n,1); */
  /*     u(100:200)=u(100:200)+shift; */
  /*     sHA=Mscale(u,psifunc) */
  /*     % kc = E(rho) = sup(rho)*bdp */
  /*     psifunc=struct; */
  /*     psifunc.class='TB'; */
  /*     c=TBbdp(bdp,1); */
  /*     psifunc.c1=c; */
  /*     kc=c^2/6*bdp; */
  /*     psifunc.kc1=kc; */
  /*     sTB=Mscale(u,psifunc,3,1e-7,20); */
  /*     sMLE=std(u); */
  /*     cate=categorical({'Robust scale (Hampel)' 'Robust scale (TB)' 'Non
   * robust scale'}); */
  /*     bar(cate,[sHA sTB sMLE]) */
  /* } */
  /*  Beginning of code */
  /*  M-estimator of scale using the requested rho function. */
  sc = initialsc;
  loop = 0;
  err = 1.0;
  emxInit_real_T(&y, 1);
  emxInit_real_T(&x, 1);
  emxInit_boolean_T(&w, 1);
  emxInit_real_T(&b_u, 1);
  while ((loop < 200) && (err > tol)) {
    b_bool = false;
    if (psifunc_class_size[1] == 2) {
      nx = 0;
      do {
        exitg1 = 0;
        if (nx < 2) {
          if (psifunc_class_data[nx] != b_cv[nx]) {
            exitg1 = 1;
          } else {
            nx++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      k = b_u->size[0];
      b_u->size[0] = u->size[0];
      emxEnsureCapacity_real_T(b_u, k);
      b_u_data = b_u->data;
      nx = u->size[0];
      for (k = 0; k < nx; k++) {
        b_u_data[k] = u_data[k] / sc;
      }
      /* TBrho computes rho function for Tukey's biweight */
      /*  */
      /* <a href="matlab: docsearchFS('TBrho')">Link to the help function</a> */
      /*  */
      /*   Required input arguments: */
      /*  */
      /*     u:         scaled residuals or Mahalanobis distances. Vector. n x 1
       */
      /*                vector containing residuals or Mahalanobis distances */
      /*                for the n units of the sample */
      /*     c :        tuning parameter. Scalar. Scalar greater than 0 which */
      /*                controls the robustness/efficiency of the estimator */
      /*                (beta in regression or mu in the location case ...)  */
      /*  */
      /*   Optional input arguments: */
      /*  */
      /*   Output: */
      /*  */
      /*    rhoTB :      n x 1 vector which contains the Tukey's biweight rho */
      /*                 associated to the residuals or Mahalanobis distances
       * for */
      /*                 the n units of the sample. */
      /*  */
      /*  More About: */
      /*  */
      /*  function TBrho transforms vector u as follows  */
      /*  \[ */
      /*  TBrho(u)= \left\{ */
      /*     \begin{array}{cc} */
      /*   (c^2/6) \left\{ 1-[1-(u/c)^2]^3 \right\}  &  |u/c| \leq 1  \\ */
      /*   (c^2/6)                      &  |u/c| >1   \\ */
      /*  \end{array} */
      /*     \right. */
      /*   \] */
      /*    */
      /*  See equation (2.37) p. 29 of Maronna et al. (2006). */
      /*  Remark: equation (2.37) is written in standardized terms in such a way
       */
      /*  that $\rho(c)=1$, so it is the previous expression divided by
       * $(c^2/6)$ */
      /*  */
      /*  See also HYPrho, HArho, OPTrho */
      /*  */
      /*  References: */
      /*  */
      /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics,
       * Theory */
      /*  and Methods", Wiley, New York. */
      /*  Riani, M., Cerioli, A. and Torti, F. (2014), On consistency factors
       * and */
      /*  efficiency of robust S-estimators, "TEST", Vol. 23, pp. 356-387. */
      /*  http://dx.doi.org/10.1007/s11749-014-0357-7 */
      /*  */
      /*  Copyright 2008-2021. */
      /*  Written by FSDA team */
      /*  */
      /* <a href="matlab: docsearchFS('TBrho')">Link to the help page for this
       * function</a> */
      /*  */
      /* $LastChangedDate::                      $: Date of the last commit */
      /*  Examples: */
      /* { */
      /*     % Plot of rho function. */
      /*     close all */
      /*     x=-6:0.01:6; */
      /*     rhoTB=TBrho(x,2); */
      /*     plot(x,rhoTB,'LineWidth',2) */
      /*     xlabel('$u$','Interpreter','Latex') */
      /*     ylabel('$\rho (u,2)$','Interpreter','Latex') */
      /*     text(x(1)-0.8,rhoTB(1),'c^2/6') */
      /*     text(x(end)+0.2,rhoTB(end),'c^2/6') */
      /*     title('$\rho (u,c)$','Interpreter','Latex') */
      /*     hold('on') */
      /*     c=2; */
      /*     stem(c,c^2/6,'LineStyle',':','LineWidth',1) */
      /*     stem(-c,c^2/6,'LineStyle',':','LineWidth',1) */
      /*  */
      /* } */
      /* { */
      /*     %% Compare two rho functions for 2 different values of c.   */
      /*     % In the first we fix the bdp (value of efficiency is automatically
       * given), */
      /*     % while in the second we find the efficiency (the value of bdp is
       */
      /*     % automatically given) */
      /*     close all */
      /*     x=-6:0.01:6; */
      /*     lwd=2; */
      /*     hold('on') */
      /*     c=TBbdp(0.5,1); */
      /*     rhoTB=TBrho(x,c); */
      /*     rhoTB=rhoTB/max(rhoTB); */
      /*     plot(x,rhoTB,'LineStyle','-','LineWidth',lwd) */
      /*     c=TBeff(0.95,1); */
      /*     rhoTB=TBrho(x,c); */
      /*     rhoTB=rhoTB/max(rhoTB); */
      /*     plot(x,rhoTB,'LineStyle','-.','LineWidth',lwd) */
      /*     xlabel('$x$','Interpreter','Latex','FontSize',16) */
      /*     ylabel('TB. Normalized
       * $\rho_c(x)$','Interpreter','Latex','FontSize',20) */
      /*     legend({'$c_{(bdp=0.5 \mapsto eff=0.29)}$', '$c_{(eff=0.95 \mapsto
       * bdp=0.12)}$'},'Interpreter','Latex','Location','SouthEast','FontSize',16)
       */
      /* } */
      /*  Beginning of code */
      /*  MATLAB Ccoder instruction to enforce that c is a scalar */
      nx = b_u->size[0];
      k = y->size[0];
      y->size[0] = b_u->size[0];
      emxEnsureCapacity_real_T(y, k);
      y_data = y->data;
      for (k = 0; k < nx; k++) {
        y_data[k] = fabs(b_u_data[k]);
      }
      k = w->size[0];
      w->size[0] = y->size[0];
      emxEnsureCapacity_boolean_T(w, k);
      w_data = w->data;
      nx = y->size[0];
      for (k = 0; k < nx; k++) {
        w_data[k] = (y_data[k] <= psifunc_c1_data[0]);
      }
      c_tmp = psifunc_c1_data[0] * psifunc_c1_data[0];
      k = x->size[0];
      x->size[0] = b_u->size[0];
      emxEnsureCapacity_real_T(x, k);
      x_data = x->data;
      nx = b_u->size[0];
      for (k = 0; k < nx; k++) {
        err = b_u_data[k];
        x_data[k] = err * err;
      }
      scnew = rt_powd_snf(psifunc_c1_data[0], 4.0);
      b = c_tmp / 6.0;
      k = y->size[0];
      y->size[0] = b_u->size[0];
      emxEnsureCapacity_real_T(y, k);
      y_data = y->data;
      nx = b_u->size[0];
      for (k = 0; k < nx; k++) {
        err = b_u_data[k];
        y_data[k] = rt_powd_snf(err, 4.0);
      }
      if (x->size[0] == 1) {
        nx = y->size[0];
      } else {
        nx = x->size[0];
      }
      if (x->size[0] == 1) {
        k = y->size[0];
      } else {
        k = x->size[0];
      }
      if (x->size[0] == 1) {
        b_x = y->size[0];
      } else {
        b_x = x->size[0];
      }
      if (b_x == 1) {
        b_x = w->size[0];
      } else if (x->size[0] == 1) {
        b_x = y->size[0];
      } else {
        b_x = x->size[0];
      }
      if ((x->size[0] == y->size[0]) && (x->size[0] == nx) &&
          (k == w->size[0]) && (b_x == w->size[0])) {
        err = 3.0 * scnew;
        nx = x->size[0];
        for (k = 0; k < nx; k++) {
          x_data[k] = x_data[k] / 2.0 *
                          ((1.0 - x_data[k] / c_tmp) + y_data[k] / err) *
                          (double)w_data[k] +
                      (1.0 - (double)w_data[k]) * b;
        }
      } else {
        qe_binary_expand_op(x, c_tmp, y, scnew, w, b);
      }
      scnew = sc * sqrt(blockedSummation(x, x->size[0]) / (double)x->size[0] /
                        psifunc_kc1);
    } else {
      b_bool = false;
      if (psifunc_class_size[1] == 3) {
        nx = 0;
        do {
          exitg1 = 0;
          if (nx < 3) {
            if (psifunc_class_data[nx] != b_cv1[nx]) {
              exitg1 = 1;
            } else {
              nx++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }
      if (b_bool) {
        k = b_u->size[0];
        b_u->size[0] = u->size[0];
        emxEnsureCapacity_real_T(b_u, k);
        b_u_data = b_u->data;
        nx = u->size[0];
        for (k = 0; k < nx; k++) {
          b_u_data[k] = u_data[k] / sc;
        }
        b_OPTrho(b_u, psifunc_c1, x);
        scnew = sc * sqrt(blockedSummation(x, x->size[0]) / (double)x->size[0] /
                          psifunc_kc1);
      } else {
        b_bool = false;
        if (psifunc_class_size[1] == 2) {
          nx = 0;
          do {
            exitg1 = 0;
            if (nx < 2) {
              if (psifunc_class_data[nx] != cv2[nx]) {
                exitg1 = 1;
              } else {
                nx++;
              }
            } else {
              b_bool = true;
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        }
        if (b_bool) {
          k = b_u->size[0];
          b_u->size[0] = u->size[0];
          emxEnsureCapacity_real_T(b_u, k);
          b_u_data = b_u->data;
          nx = u->size[0];
          for (k = 0; k < nx; k++) {
            b_u_data[k] = u_data[k] / sc;
          }
          b_HArho(b_u, psifunc_c1, x);
          scnew = sc * sqrt(blockedSummation(x, x->size[0]) /
                            (double)x->size[0] / psifunc_kc1);
        } else {
          b_bool = false;
          if (psifunc_class_size[1] == 3) {
            nx = 0;
            do {
              exitg1 = 0;
              if (nx < 3) {
                if (psifunc_class_data[nx] != cv3[nx]) {
                  exitg1 = 1;
                } else {
                  nx++;
                }
              } else {
                b_bool = true;
                exitg1 = 1;
              }
            } while (exitg1 == 0);
          }
          if (b_bool) {
            k = b_u->size[0];
            b_u->size[0] = u->size[0];
            emxEnsureCapacity_real_T(b_u, k);
            b_u_data = b_u->data;
            nx = u->size[0];
            for (k = 0; k < nx; k++) {
              b_u_data[k] = u_data[k] / sc;
            }
            HYPrho(b_u, psifunc_c1, x);
            scnew = sc * sqrt(blockedSummation(x, x->size[0]) /
                              (double)x->size[0] / psifunc_kc1);
          } else {
            b_bool = false;
            if (psifunc_class_size[1] == 2) {
              nx = 0;
              do {
                exitg1 = 0;
                if (nx < 2) {
                  if (psifunc_class_data[nx] != cv4[nx]) {
                    exitg1 = 1;
                  } else {
                    nx++;
                  }
                } else {
                  b_bool = true;
                  exitg1 = 1;
                }
              } while (exitg1 == 0);
            }
            if (b_bool) {
              /* PDrho computes rho function for minimum density power
               * divergence estimator  */
              /*  */
              /* <a href="matlab: docsearchFS('PDrho')">Link to the help
               * function</a> */
              /*  */
              /*   Required input arguments: */
              /*  */
              /*     u:         scaled residuals or Mahalanobis distances.
               * Vector. n x 1 */
              /*                vector containing residuals or Mahalanobis
               * distances */
              /*                for the n units of the sample */
              /*     alpha :    tuning parameter. Scalar. Scalar in the interval
               * (0,1] which */
              /*                controls the robustness/efficiency of the
               * estimator */
              /*                (beta in regression or mu in the location case
               * ...). The */
              /*                greater is alpha the greater is the bdp and
               * smaller is the */
              /*                efficiency. */
              /*  */
              /*   Optional input arguments: */
              /*  */
              /*   Output: */
              /*  */
              /*    rhoPD :      n x 1 vector which contains the Minimum density
               * power */
              /*                divergence rho */
              /*                 function associated to the residuals or
               * Mahalanobis */
              /*                 distances for the n units of the sample. */
              /*  */
              /*  More About: */
              /*  */
              /*  function PDrho transforms vector u as follows  */
              /*  \[ */
              /*  PDrho(u,alpha)=  1-\exp(-\alpha (u^2/2)); */
              /*       \] */
              /*    */
              /*  */
              /*  See also TBrho, HYPrho, HArho, OPTrho, HUrho */
              /*  */
              /*  References: */
              /*  */
              /*   Riani, M. Atkinson, A.C., Corbellini A. and Perrotta A.
               * (2020), Robust */
              /*   Regression with Density Power Divergence: Theory, Comparisons
               * and Data */
              /*   Analysis, submitted. */
              /*  */
              /*  Copyright 2008-2021. */
              /*  Written by FSDA team */
              /*  */
              /* <a href="matlab: docsearchFS('PDrho')">Link to the help page
               * for this function</a> */
              /*  */
              /* $LastChangedDate::                      $: Date of the last
               * commit */
              /*  Examples: */
              /* { */
              /*     % Plot of rho function. */
              /*     close all */
              /*     x=-6:0.01:6; */
              /*     alpha=1; */
              /*     rhoPD=PDrho(x,alpha); */
              /*     plot(x,rhoPD,'LineWidth',2) */
              /*     xlabel('$u$','Interpreter','Latex') */
              /*     ylabel('$\rho (u,1)$','Interpreter','Latex') */
              /*  */
              /* } */
              /* { */
              /*     %% Compare two rho functions for 2 different values of
               * alpha.   */
              /*     % In the first we fix the bdp (value of efficiency is
               * automatically given), */
              /*     % while in the second we find the efficiency (the value of
               * bdp is */
              /*     % automatically given) */
              /*     close all */
              /*     x=-6:0.01:6; */
              /*     lwd=2; */
              /*     alpha1=1; */
              /*     bdp1=1-1/sqrt(1+alpha1); */
              /*     eff1=(sqrt(1+2*alpha1)/(1+alpha1))^3; */
              /*     hold('on') */
              /*     rhoPD=PDrho(x,alpha1); */
              /*     plot(x,rhoPD,'LineStyle','-','LineWidth',lwd) */
              /*     alpha2=0.5; */
              /*     bdp2=1-1/sqrt(1+alpha2); */
              /*     eff2=(sqrt(1+2*alpha2)/(1+alpha2))^3; */
              /*     rhoPD=PDrho(x,alpha2); */
              /*     plot(x,rhoPD,'LineStyle','-.','LineWidth',lwd) */
              /*     xlabel('$x$','Interpreter','Latex','FontSize',16) */
              /*     ylabel('MDPD. Normalized
               * $\rho_\alpha(x)$','Interpreter','Latex','FontSize',20) */
              /*     legend({['$\alpha=' num2str(alpha1) '\mapsto bdp='
               * num2str(bdp1,2) '\;  eff=' num2str(eff1,2) '$'], ... */
              /*        ['$\alpha=' num2str(alpha2) '\mapsto bdp='
               * num2str(bdp2,2) '\;  eff=' num2str(eff2,2) '$']},... */
              /*        'Interpreter','Latex','Location','SouthEast','FontSize',12)
               */
              /* } */
              /*  Beginning of code */
              /*  MATLAB Ccoder instruction to enforce that alpha is a scalar */
              k = y->size[0];
              y->size[0] = u->size[0];
              emxEnsureCapacity_real_T(y, k);
              y_data = y->data;
              nx = u->size[0];
              for (k = 0; k < nx; k++) {
                err = u_data[k] / sc;
                y_data[k] = err * err;
              }
              nx = y->size[0];
              for (k = 0; k < nx; k++) {
                y_data[k] = -psifunc_c1_data[0] * (y_data[k] / 2.0);
              }
              nx = y->size[0];
              for (k = 0; k < nx; k++) {
                y_data[k] = exp(y_data[k]);
              }
              nx = y->size[0];
              for (k = 0; k < nx; k++) {
                y_data[k] = 1.0 - y_data[k];
              }
              scnew = sc * sqrt(blockedSummation(y, y->size[0]) /
                                (double)y->size[0] / psifunc_kc1);
            }
          }
        }
      }
    }
    /*  Note that when there is convergence */
    /*  sqrt( mean(TBrho(u/sc,c)) / kc) tends to 1 (from below) */
    /*  disp([loop sc sqrt( mean(TBrho(u/sc,c)) / kc)]) */
    err = fabs(scnew / sc - 1.0);
    sc = scnew;
    /*  disp(sc) */
    loop++;
  }
  emxFree_real_T(&b_u);
  emxFree_boolean_T(&w);
  emxFree_real_T(&x);
  emxFree_real_T(&y);
  /*  disp(loop) */
  /*  sc=sc; */
  return sc;
}

/* End of code generation (Mscale.c) */
