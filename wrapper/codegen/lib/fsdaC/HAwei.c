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
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void HAwei(const emxArray_real_T *u, const emxArray_real_T *ctuning,
           emxArray_real_T *w)
{
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *absu;
  emxArray_real_T *b_b;
  emxArray_real_T *r2;
  emxArray_real_T *y;
  double a;
  double b;
  double c;
  int i;
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
  if (ctuning->size[0] > 1) {
    a = ctuning->data[0] * ctuning->data[1];
    b = ctuning->data[0] * ctuning->data[2];
    c = ctuning->data[0] * ctuning->data[3];
  } else {
    a = 2.0 * ctuning->data[0];
    b = 4.0 * ctuning->data[0];
    c = 8.0 * ctuning->data[0];
  }
  i = w->size[0];
  w->size[0] = u->size[0];
  emxEnsureCapacity_real_T(w, i);
  nx = u->size[0];
  for (i = 0; i < nx; i++) {
    w->data[i] = 1.0;
  }
  emxInit_real_T(&absu, 1);
  nx = u->size[0];
  i = absu->size[0];
  absu->size[0] = u->size[0];
  emxEnsureCapacity_real_T(absu, i);
  for (k = 0; k < nx; k++) {
    absu->data[k] = fabs(u->data[k]);
  }
  /*  a/|u|,		 a <= |u| < b, */
  k = absu->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absu->data[i] >= a) {
      nx++;
    }
  }
  emxInit_int32_T(&r, 1);
  i = r->size[0];
  r->size[0] = nx;
  emxEnsureCapacity_int32_T(r, i);
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absu->data[i] >= a) {
      r->data[nx] = i + 1;
      nx++;
    }
  }
  emxInit_real_T(&y, 1);
  nx = r->size[0];
  i = y->size[0];
  y->size[0] = r->size[0];
  emxEnsureCapacity_real_T(y, i);
  for (k = 0; k < nx; k++) {
    y->data[k] = fabs(u->data[r->data[k] - 1]);
  }
  emxFree_int32_T(&r);
  emxInit_real_T(&b_b, 1);
  i = b_b->size[0];
  b_b->size[0] = y->size[0];
  emxEnsureCapacity_real_T(b_b, i);
  nx = y->size[0];
  for (k = 0; k < nx; k++) {
    b_b->data[k] = 1.0 / y->data[k];
  }
  nx = b_b->size[0];
  for (i = 0; i < nx; i++) {
    b_b->data[i] *= a;
  }
  k = absu->size[0];
  nx = 0;
  for (i = 0; i < k; i++) {
    if (absu->data[i] >= a) {
      w->data[i] = b_b->data[nx];
      nx++;
    }
  }
  emxFree_real_T(&b_b);
  /* a/|u| * (c-|u|)/(c-b),	 b <= |u| <  c, */
  k = absu->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absu->data[i] >= b) {
      nx++;
    }
  }
  emxInit_int32_T(&r1, 1);
  i = r1->size[0];
  r1->size[0] = nx;
  emxEnsureCapacity_int32_T(r1, i);
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absu->data[i] >= b) {
      r1->data[nx] = i + 1;
      nx++;
    }
  }
  nx = r1->size[0];
  i = y->size[0];
  y->size[0] = r1->size[0];
  emxEnsureCapacity_real_T(y, i);
  for (k = 0; k < nx; k++) {
    y->data[k] = fabs(u->data[r1->data[k] - 1]);
  }
  emxFree_int32_T(&r1);
  k = absu->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absu->data[i] >= b) {
      nx++;
    }
  }
  emxInit_real_T(&r2, 1);
  i = r2->size[0];
  r2->size[0] = nx;
  emxEnsureCapacity_real_T(r2, i);
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absu->data[i] >= b) {
      r2->data[nx] = w->data[i] * (c - y->data[nx]) / (c - b);
      nx++;
    }
  }
  emxFree_real_T(&y);
  k = absu->size[0];
  nx = 0;
  for (i = 0; i < k; i++) {
    if (absu->data[i] >= b) {
      w->data[i] = r2->data[nx];
      nx++;
    }
  }
  emxFree_real_T(&r2);
  /*  0,			 |u| >= c */
  k = absu->size[0];
  for (i = 0; i < k; i++) {
    if (absu->data[i] > c) {
      w->data[i] = 0.0;
    }
  }
  emxFree_real_T(&absu);
}

/* End of code generation (HAwei.c) */
