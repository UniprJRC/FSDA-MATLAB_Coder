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

/* Function Declarations */
static void te_binary_expand_op(emxArray_real_T *r2, const emxArray_real_T *w,
                                const emxArray_int32_T *r3, double c,
                                const emxArray_real_T *y, double b);

/* Function Definitions */
static void te_binary_expand_op(emxArray_real_T *r2, const emxArray_real_T *w,
                                const emxArray_int32_T *r3, double c,
                                const emxArray_real_T *y, double b)
{
  const double *w_data;
  const double *y_data;
  double b_c;
  double *r1;
  const int *r;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  y_data = y->data;
  r = r3->data;
  w_data = w->data;
  b_c = c - b;
  i = r2->size[0];
  if (y->size[0] == 1) {
    r2->size[0] = r3->size[0];
  } else {
    r2->size[0] = y->size[0];
  }
  emxEnsureCapacity_real_T(r2, i);
  r1 = r2->data;
  stride_0_0 = (r3->size[0] != 1);
  stride_1_0 = (y->size[0] != 1);
  if (y->size[0] == 1) {
    loop_ub = r3->size[0];
  } else {
    loop_ub = y->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    r1[i] = w_data[r[i * stride_0_0] - 1] * (c - y_data[i * stride_1_0]) / b_c;
  }
}

void HAwei(const emxArray_real_T *u, const emxArray_real_T *ctuning,
           emxArray_real_T *w)
{
  emxArray_int32_T *r;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  emxArray_real_T *absu;
  emxArray_real_T *r4;
  emxArray_real_T *y;
  const double *ctuning_data;
  const double *u_data;
  double a;
  double b;
  double c;
  double varargin_1;
  double *absu_data;
  double *r5;
  double *w_data;
  double *y_data;
  int i;
  int k;
  int nx;
  int *r1;
  ctuning_data = ctuning->data;
  u_data = u->data;
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
  /*  Optional input arguments: */
  /*  */
  /*   Output: */
  /*  */
  /*   Output: */
  /*  */
  /*     w :         n x 1 vector which contains the Hampel weights associated
   */
  /*                 to the residuals or Mahalanobis distances for the n units
   */
  /*                 of the sample. */
  /*  */
  /*  More About: */
  /*  */
  /*  Function HAwei transforms vector u as follows */
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
  /*  See also: TBwei, HYPwei, OPTwei */
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
    a = ctuning_data[0] * ctuning_data[1];
    b = ctuning_data[0] * ctuning_data[2];
    c = ctuning_data[0] * ctuning_data[3];
  } else {
    a = 2.0 * ctuning_data[0];
    b = 4.0 * ctuning_data[0];
    c = 8.0 * ctuning_data[0];
  }
  i = w->size[0];
  w->size[0] = u->size[0];
  emxEnsureCapacity_real_T(w, i);
  w_data = w->data;
  nx = u->size[0];
  for (i = 0; i < nx; i++) {
    w_data[i] = 1.0;
  }
  emxInit_real_T(&absu, 1);
  nx = u->size[0];
  i = absu->size[0];
  absu->size[0] = u->size[0];
  emxEnsureCapacity_real_T(absu, i);
  absu_data = absu->data;
  for (k = 0; k < nx; k++) {
    absu_data[k] = fabs(u_data[k]);
  }
  /*  a/|u|,		 a <= |u| < b, */
  k = absu->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absu_data[i] >= a) {
      nx++;
    }
  }
  emxInit_int32_T(&r, 1);
  i = r->size[0];
  r->size[0] = nx;
  emxEnsureCapacity_int32_T(r, i);
  r1 = r->data;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absu_data[i] >= a) {
      r1[nx] = i + 1;
      nx++;
    }
  }
  emxInit_real_T(&y, 1);
  nx = r->size[0];
  i = y->size[0];
  y->size[0] = r->size[0];
  emxEnsureCapacity_real_T(y, i);
  y_data = y->data;
  for (k = 0; k < nx; k++) {
    y_data[k] = fabs(u_data[r1[k] - 1]);
  }
  emxFree_int32_T(&r);
  nx = y->size[0];
  for (i = 0; i < nx; i++) {
    varargin_1 = y_data[i];
    y_data[i] = 1.0 / varargin_1;
  }
  nx = y->size[0];
  for (i = 0; i < nx; i++) {
    y_data[i] *= a;
  }
  k = absu->size[0];
  nx = 0;
  for (i = 0; i < k; i++) {
    if (absu_data[i] >= a) {
      w_data[i] = y_data[nx];
      nx++;
    }
  }
  /* a/|u| * (c-|u|)/(c-b),	 b <= |u| <  c, */
  k = absu->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absu_data[i] >= b) {
      nx++;
    }
  }
  emxInit_int32_T(&r2, 1);
  i = r2->size[0];
  r2->size[0] = nx;
  emxEnsureCapacity_int32_T(r2, i);
  r1 = r2->data;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absu_data[i] >= b) {
      r1[nx] = i + 1;
      nx++;
    }
  }
  nx = r2->size[0];
  i = y->size[0];
  y->size[0] = r2->size[0];
  emxEnsureCapacity_real_T(y, i);
  y_data = y->data;
  for (k = 0; k < nx; k++) {
    y_data[k] = fabs(u_data[r1[k] - 1]);
  }
  emxFree_int32_T(&r2);
  k = absu->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absu_data[i] >= b) {
      nx++;
    }
  }
  emxInit_int32_T(&r3, 1);
  i = r3->size[0];
  r3->size[0] = nx;
  emxEnsureCapacity_int32_T(r3, i);
  r1 = r3->data;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absu_data[i] >= b) {
      r1[nx] = i + 1;
      nx++;
    }
  }
  emxInit_real_T(&r4, 1);
  if (r3->size[0] == y->size[0]) {
    a = c - b;
    i = r4->size[0];
    r4->size[0] = r3->size[0];
    emxEnsureCapacity_real_T(r4, i);
    r5 = r4->data;
    nx = r3->size[0];
    for (i = 0; i < nx; i++) {
      r5[i] = w_data[r1[i] - 1] * (c - y_data[i]) / a;
    }
  } else {
    te_binary_expand_op(r4, w, r3, c, y, b);
    r5 = r4->data;
  }
  emxFree_real_T(&y);
  emxFree_int32_T(&r3);
  k = absu->size[0];
  nx = 0;
  for (i = 0; i < k; i++) {
    if (absu_data[i] >= b) {
      w_data[i] = r5[nx];
      nx++;
    }
  }
  emxFree_real_T(&r4);
  /*  0,			 |u| >= c */
  k = absu->size[0];
  for (i = 0; i < k; i++) {
    if (absu_data[i] > c) {
      w_data[i] = 0.0;
    }
  }
  emxFree_real_T(&absu);
}

/* End of code generation (HAwei.c) */
