/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * TBwei.c
 *
 * Code generation for function 'TBwei'
 *
 */

/* Include files */
#include "TBwei.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void TBwei(const emxArray_real_T *u, const double c_data[], emxArray_real_T *w)
{
  emxArray_boolean_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *a;
  emxArray_real_T *y;
  double c;
  int i;
  int k;
  int nx;
  emxInit_real_T(&y, 1);
  emxInit_real_T(&a, 1);
  /* TBwei computes weight function psi(u)/u for Tukey's biweight   */
  /*  */
  /* <a href="matlab: docsearchFS('TBwei')">Link to the help function</a> */
  /*  */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*     u:         scaled residuals or Mahalanobis distances. Vector. n x 1 */
  /*                vector containing residuals or Mahalanobis distances */
  /*                for the n units of the sample */
  /*     c :        tuning parameters. Scalar. Scalar greater than 0 which */
  /*                controls the robustness/efficiency of the estimator */
  /*                (beta in regression or mu in the location case ...)  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*   Output: */
  /*  */
  /*     w :         n x 1 vector which contains the Tukey's biweight weights */
  /*                 associated to the scaled residuals or Mahalanobis */
  /*                 distances for the n units of the sample. */
  /*  */
  /*  More About: */
  /*  */
  /*  Function TBwei transforms vector u as follows  */
  /*  \[ */
  /*  TBwei(u)= \left\{ */
  /*     \begin{array}{cc} */
  /*   (c^2/6) \psi(u)/u = (c^2/6) \left[ 1-(u/c) \right]^2 &  |u/c| \leq 1 \\
   */
  /*   0                                                    &  |u/c|>1   \\ */
  /*  \end{array} */
  /*     \right. */
  /*   \] */
  /*  */
  /*  See p. 30 of Maronna et al. (2006) */
  /*  */
  /*  */
  /*  Remark: Tukey's biweight  psi-function is almost linear around u = 0 in
   * accordance with */
  /*  Winsor's principle that all distributions are normal in the middle. */
  /*  This means that  $\psi (u)/u$ is approximately constant over the linear
   * region of $\psi$, */
  /*  so the points in that region tend to get equal weight. */
  /*  */
  /*  See also: HYPwei, HAwei, OPTwei */
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
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('TBwei')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % Weight function for Tukey biweight. */
  /*     x=-6:0.01:6; */
  /*     weiTB=TBwei(x,2); */
  /*     plot(x,weiTB) */
  /*     xlabel('x','Interpreter','Latex') */
  /*     ylabel('$W (x) =\psi(x)/x$','Interpreter','Latex') */
  /*  */
  /* } */
  /* { */
  /*     %% Compare four different weight functions. */
  /*     % Initialize graphical parameters. */
  /*     FontSize=14; */
  /*     x=-6:0.01:6; */
  /*     ylim1=-0.05; */
  /*     ylim2=1.05; */
  /*     xlim1=min(x); */
  /*     xlim2=max(x); */
  /*     LineWidth=2; */
  /*  */
  /*     subplot(2,2,1) */
  /*     ceff095HU=HUeff(0.95,1); */
  /*     weiHU=HUwei(x,ceff095HU); */
  /*     plot(x,weiHU,'LineWidth',LineWidth) */
  /*     xlabel('$u$','Interpreter','Latex','FontSize',FontSize) */
  /*     title('Huber','FontSize',FontSize) */
  /*     ylim([ylim1 ylim2]) */
  /*     xlim([xlim1 xlim2]) */
  /*  */
  /*     subplot(2,2,2) */
  /*     ceff095HA=HAeff(0.95,1); */
  /*     weiHA=HAwei(x,ceff095HA); */
  /*     plot(x,weiHA,'LineWidth',LineWidth) */
  /*     xlabel('$u$','Interpreter','Latex','FontSize',FontSize) */
  /*     title('Hampel','FontSize',FontSize) */
  /*     ylim([ylim1 ylim2]) */
  /*     xlim([xlim1 xlim2]) */
  /*  */
  /*  */
  /*     subplot(2,2,3) */
  /*     ceff095TB=TBeff(0.95,1); */
  /*     weiTB=TBwei(x,ceff095TB); */
  /*     plot(x,weiTB,'LineWidth',LineWidth) */
  /*     xlabel('$u$','Interpreter','Latex','FontSize',FontSize) */
  /*     title('Tukey biweight','FontSize',FontSize) */
  /*     ylim([ylim1 ylim2]) */
  /*     xlim([xlim1 xlim2]) */
  /*  */
  /*     subplot(2,2,4) */
  /*     ceff095HYP=HYPeff(0.95,1); */
  /*     ktuning=4.5; */
  /*     weiHYP=HYPwei(x,[ceff095HYP,ktuning]); */
  /*     plot(x,weiHYP,'LineWidth',LineWidth) */
  /*     xlabel('$u$','Interpreter','Latex','FontSize',FontSize) */
  /*     title('Hyperbolic','FontSize',FontSize) */
  /*     ylim([ylim1 ylim2]) */
  /*     xlim([xlim1 xlim2]) */
  /* } */
  /* { */
  /*     %% Compare two weight functions for 2 different values of c.  */
  /*     % In the first we fix the bdp (value of */
  /*     % efficiency is automatically given), while in the second we find the
   */
  /*     % efficiency (the value of bdp is automatically given). */
  /*     close all */
  /*     x=-6:0.01:6; */
  /*     lwd=2; */
  /*     hold('on') */
  /*     c=TBbdp(0.5,1); */
  /*     rhoTB=TBwei(x,c); */
  /*     plot(x,rhoTB,'LineStyle','-','LineWidth',lwd) */
  /*     c=TBeff(0.95,1); */
  /*     rhoTB=TBwei(x,c); */
  /*     plot(x,rhoTB,'LineStyle','-.','LineWidth',lwd) */
  /*  */
  /*     xlabel('$x$','Interpreter','Latex','FontSize',16) */
  /*     ylabel('TB weight function
   * $\psi_c(x)/x$','Interpreter','Latex','FontSize',20) */
  /* } */
  /*  beginning of code */
  /*  MATLAB Ccoder instruction to enforce that c is a scalar */
  c = c_data[0];
  i = a->size[0];
  a->size[0] = u->size[0];
  emxEnsureCapacity_real_T(a, i);
  nx = u->size[0];
  for (i = 0; i < nx; i++) {
    a->data[i] = u->data[i] / c;
  }
  i = y->size[0];
  y->size[0] = a->size[0];
  emxEnsureCapacity_real_T(y, i);
  nx = a->size[0];
  for (k = 0; k < nx; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
  nx = y->size[0];
  for (i = 0; i < nx; i++) {
    y->data[i] = 1.0 - y->data[i];
  }
  i = w->size[0];
  w->size[0] = y->size[0];
  emxEnsureCapacity_real_T(w, i);
  nx = y->size[0];
  for (k = 0; k < nx; k++) {
    w->data[k] = y->data[k] * y->data[k];
  }
  /*  The following instruction is unnecessary */
  /*  however it is the proper expression for the weights */
  /*  if we start with the normalized \rho (\infty)=1 */
  /*  w = w .* (c^2/6); */
  c = c_data[0];
  i = a->size[0];
  a->size[0] = u->size[0];
  emxEnsureCapacity_real_T(a, i);
  nx = u->size[0];
  for (i = 0; i < nx; i++) {
    a->data[i] = u->data[i] / c;
  }
  nx = a->size[0];
  i = y->size[0];
  y->size[0] = a->size[0];
  emxEnsureCapacity_real_T(y, i);
  for (k = 0; k < nx; k++) {
    y->data[k] = fabs(a->data[k]);
  }
  emxFree_real_T(&a);
  emxInit_boolean_T(&r, 1);
  i = r->size[0];
  r->size[0] = y->size[0];
  emxEnsureCapacity_boolean_T(r, i);
  nx = y->size[0];
  for (i = 0; i < nx; i++) {
    r->data[i] = (y->data[i] > 1.0);
  }
  emxFree_real_T(&y);
  k = r->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r->data[i]) {
      nx++;
    }
  }
  emxInit_int32_T(&r1, 1);
  i = r1->size[0];
  r1->size[0] = nx;
  emxEnsureCapacity_int32_T(r1, i);
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r->data[i]) {
      r1->data[nx] = i + 1;
      nx++;
    }
  }
  emxFree_boolean_T(&r);
  nx = r1->size[0];
  for (i = 0; i < nx; i++) {
    w->data[r1->data[i] - 1] = 0.0;
  }
  emxFree_int32_T(&r1);
}

/* End of code generation (TBwei.c) */
