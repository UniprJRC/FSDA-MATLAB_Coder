/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * TBrho.c
 *
 * Code generation for function 'TBrho'
 *
 */

/* Include files */
#include "TBrho.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void TBrho(const emxArray_real_T *u, const double c_data[],
           emxArray_real_T *rhoTB)
{
  emxArray_boolean_T *w;
  emxArray_real_T *y;
  double b;
  double c;
  double d;
  int k;
  int nx;
  emxInit_real_T(&y, 1);
  /* TBrho computes rho function for Tukey's biweight */
  /*  */
  /* <a href="matlab: docsearchFS('TBrho')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     u:         scaled residuals or Mahalanobis distances. Vector. n x 1 */
  /*                vector containing residuals or Mahalanobis distances */
  /*                for the n units of the sample */
  /*     c :        tuning parameter. Scalar. Scalar greater than 0 which */
  /*                controls the robustness/efficiency of the estimator */
  /*                (beta in regression or mu in the location case ...)  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  */
  /*   Output: */
  /*  */
  /*  */
  /*    rhoTB :      n x 1 vector which contains the Tukey's biweight rho */
  /*                 associated to the residuals or Mahalanobis distances for */
  /*                 the n units of the sample. */
  /*  */
  /*  More About: */
  /*  */
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
  /*  Remark: equation (2.37) is written in standardized terms in such a way */
  /*  that $\rho(c)=1$, so it is the previous expression divided by $(c^2/6)$ */
  /*  */
  /*  See also HYPrho, HArho, OPTrho */
  /*  */
  /*  References: */
  /*  */
  /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics, Theory
   */
  /*  and Methods", Wiley, New York. */
  /*  Riani, M., Cerioli, A. and Torti, F. (2014), On consistency factors and */
  /*  efficiency of robust S-estimators, "TEST", Vol. 23, pp. 356-387. */
  /*  http://dx.doi.org/10.1007/s11749-014-0357-7 */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
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
  /*     % while in the second we find the efficiency (the value of bdp is */
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
  nx = u->size[0];
  k = y->size[0];
  y->size[0] = u->size[0];
  emxEnsureCapacity_real_T(y, k);
  for (k = 0; k < nx; k++) {
    y->data[k] = fabs(u->data[k]);
  }
  emxInit_boolean_T(&w, 1);
  c = c_data[0];
  k = w->size[0];
  w->size[0] = y->size[0];
  emxEnsureCapacity_boolean_T(w, k);
  nx = y->size[0];
  for (k = 0; k < nx; k++) {
    w->data[k] = (y->data[k] <= c);
  }
  c = c_data[0] * c_data[0];
  k = rhoTB->size[0];
  rhoTB->size[0] = u->size[0];
  emxEnsureCapacity_real_T(rhoTB, k);
  nx = u->size[0];
  for (k = 0; k < nx; k++) {
    rhoTB->data[k] = u->data[k] * u->data[k];
  }
  b = c / 6.0;
  k = y->size[0];
  y->size[0] = u->size[0];
  emxEnsureCapacity_real_T(y, k);
  nx = u->size[0];
  for (k = 0; k < nx; k++) {
    y->data[k] = rt_powd_snf(u->data[k], 4.0);
  }
  d = 3.0 * rt_powd_snf(c_data[0], 4.0);
  nx = rhoTB->size[0];
  for (k = 0; k < nx; k++) {
    rhoTB->data[k] = rhoTB->data[k] / 2.0 *
                         ((1.0 - rhoTB->data[k] / c) + y->data[k] / d) *
                         (double)w->data[k] +
                     (1.0 - (double)w->data[k]) * b;
  }
  emxFree_real_T(&y);
  emxFree_boolean_T(&w);
}

/* End of code generation (TBrho.c) */
