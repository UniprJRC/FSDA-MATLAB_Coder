/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * HAwei.c
 *
 * Code generation for function 'HAwei'
 *
 */

/* Include files */
#include "HAwei.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "mrdivide_helper.h"
#include "power.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void HAwei(const emxArray_real_T *u, const double ctuning_data[],
           const int ctuning_size[2], emxArray_real_T *w)
{
  emxArray_real_T *absu;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *y;
  double a_data;
  double b_data=0;
  double c_data=0;
  int k;
  int nx;
  /* HAwei computes weight function psi(u)/u using Hampel proposal */
  /*  */
  /* <a href="matlab: docsearchFS('HAwei')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     u:         scaled residuals or Mahalanobis distances. Vector. n x 1 */
  /*                vector containing residuals or Mahalanobis distances */
  /*                for the n units of the sample */
  /*     ctuning :  tuning parameters. Scalar or Vector. Scalar or vector of */
  /*                length 4 which specifies the value of the tuning */
  /*                 constant c (scalar greater than 0 which controls the */
  /*                 robustness/efficiency of the estimator) */
  /*                 and the prefixed values of paramters a, b, c: */
  /*                 ctuning(1) = tuning constant which will multiply */
  /*                 parameters a, b and c of Hampel rho (psi) function; */
  /*                 ctuning(2) = paramter a of Hampel rho (psi) function; */
  /*                 ctuning(3) = paramter b of Hampel rho (psi) function; */
  /*                 ctuning(4) = paramter c of Hampel rho (psi) function. */
  /*                 Remark: if length(ctuning)==1 values of a, b and c will be
   */
  /*                 set to a=2*ctuning b=4*ctuning c=4*ctuning  */
  /*                 With these choices, if ctuning=1  the */
  /*                 resulting influence function is nearly identical to the */
  /*                 biweight with parameter 8. */
  /*  */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*   Output: */
  /*  */
  /*  */
  /*   Output: */
  /*  */
  /*     w :         n x 1 vector which contains the Hampel weights associated
   */
  /*                 to the residuals or Mahalanobis distances for the n units
   */
  /*                 of the sample. */
  /*  */
  /*  */
  /*  More About: */
  /*  */
  /*  Function HAwei transforms vector u as follows */
  /*  */
  /*  */
  /*   \[ */
  /*   HAwei(u)  = \left\{    */
  /*   \begin{array}{cc} */
  /*     1 & |u| <= a                                       \\ */
  /*     \frac{a}{|u|}   & a \leq |u| < b                    \\ */
  /*     \frac{a}{|u|} \times  \frac{c-|u|}{c-b},  & b <= |u| <  c \\ */
  /*     0 & |u| >= c  */
  /*   \end{array} \right. */
  /*  \] */
  /*  */
  /*             */
  /*              where ctun=ctuning(1). */
  /*                    $a$= ctun *ctuning(2). */
  /*                    $b$= ctun *ctuning(3). */
  /*                    $c$= ctun *ctuning(4). */
  /*  */
  /*              The default is */
  /*                    $a$= 2*ctun.  */
  /*                    $b$= 4*ctun.  */
  /*                    $c$= 8*ctun.  */
  /*  */
  /*  */
  /*  See also: TBwei, HYPwei, OPTwei */
  /*  */
  /*  References: */
  /*  */
  /*  Hoaglin, D.C., Mosteller, F., Tukey, J.W. (1982), "Understanding Robust
   * and */
  /*  Exploratory Data Analysis", Wiley, New York. */
  /*  */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('HAwei')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /* { */
  /*     %% Plot of weight function. */
  /*     % Obtain Figure 11.15 (panel b) p. 382 of */
  /*     % Hoaglin et al. (1987) */
  /*     x=-8:0.01:8; */
  /*     weiHA=HAwei(x,[1 2 4 8]); */
  /*     plot(x,weiHA) */
  /*     xlabel('x','Interpreter','Latex') */
  /*     ylabel('$W (x) =\psi(x)/x$','Interpreter','Latex') */
  /*  */
  /* } */
  /*  Beginning of code */
  if (ctuning_size[1] > 1) {
    a_data = ctuning_data[0] * ctuning_data[1];
    b_data = ctuning_data[0] * ctuning_data[2];
    c_data = ctuning_data[0] * ctuning_data[3];
  } else {
    nx = ctuning_size[1];
    for (k = 0; k < nx; k++) {
      a_data = 2.0 * ctuning_data[0];
    }
    nx = ctuning_size[1];
    for (k = 0; k < nx; k++) {
      b_data = 4.0 * ctuning_data[0];
    }
    nx = ctuning_size[1];
    for (k = 0; k < nx; k++) {
      c_data = 8.0 * ctuning_data[0];
    }
  }
  k = w->size[0];
  w->size[0] = u->size[0];
  emxEnsureCapacity_real_T(w, k);
  nx = u->size[0];
  for (k = 0; k < nx; k++) {
    w->data[k] = 1.0;
  }
  emxInit_real_T(&absu, 1);
  nx = u->size[0];
  k = absu->size[0];
  absu->size[0] = u->size[0];
  emxEnsureCapacity_real_T(absu, k);
  for (k = 0; k < nx; k++) {
    absu->data[k] = fabs(u->data[k]);
  }
  /*  a/|u|,		 a <= |u| < b, */
  nx = 0;
  if (absu->data[0] >= a_data) {
    nx = 1;
  }
  emxInit_real_T(&y, 1);
  k = y->size[0];
  y->size[0] = nx;
  emxEnsureCapacity_real_T(y, k);
  if (0 <= nx - 1) {
    y->data[0] = fabs(u->data[0]);
  }
  emxInit_real_T(&r, 1);
  b_power(y, r);
  a_data *= r->data[0];
  emxFree_real_T(&r);
  for (k = 0; k < nx; k++) {
    w->data[0] = a_data;
  }
  /* a/|u| * (c-|u|)/(c-b),	 b <= |u| <  c, */
  nx = 0;
  if (absu->data[0] >= b_data) {
    nx = 1;
  }
  k = y->size[0];
  y->size[0] = nx;
  emxEnsureCapacity_real_T(y, k);
  if (0 <= nx - 1) {
    y->data[0] = fabs(u->data[0]);
  }
  nx = 0;
  if (absu->data[0] >= b_data) {
    nx = 1;
  }
  a_data = c_data - y->data[0];
  k = y->size[0];
  y->size[0] = nx;
  emxEnsureCapacity_real_T(y, k);
  for (k = 0; k < nx; k++) {
    y->data[0] = w->data[0] * a_data;
  }
  a_data = c_data - b_data;
  if (absu->data[0] >= b_data) {
    emxInit_real_T(&r1, 1);
    b_mrdiv(y, (double *)&a_data, r1);
    w->data[0] = r1->data[0];
    emxFree_real_T(&r1);
  }
  emxFree_real_T(&y);
  /*  0,			 |u| >= c */
  if (absu->data[0] > c_data) {
    w->data[0] = 0.0;
  }
  emxFree_real_T(&absu);
}

/* End of code generation (HAwei.c) */
