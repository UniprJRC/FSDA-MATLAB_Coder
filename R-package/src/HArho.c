/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * HArho.c
 *
 * Code generation for function 'HArho'
 *
 */

/* Include files */
#include "HArho.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
double HArho(double u, const emxArray_real_T *ctuning)
{
  emxArray_real_T *y;
  const double *ctuning_data;
  double a;
  double a_tmp;
  double absu_tmp;
  double b;
  double b_a;
  double c;
  double rhoHA;
  double *y_data;
  int i;
  int loop_ub;
  int trueCount;
  ctuning_data = ctuning->data;
  /* HArho computes rho function  using Hampel proposal */
  /*  */
  /* <a href="matlab: docsearchFS('HArho')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     u:         scaled residuals or Mahalanobis distances. Vector. n x 1 */
  /*                vector containing residuals or Mahalanobis distances */
  /*                for the n units of the sample */
  /*     ctuning :  tuning parameters. Scalar or Vector. Scalar or vector of */
  /*                 length 4 which specifies the value of the tuning */
  /*                 constant c (scalar greater than 0 which controls the */
  /*                 robustness/efficiency of the estimator) */
  /*                 and the prefixed values of paramters a, b, c */
  /*                 ctuning(1) = tuning constant which will multiply */
  /*                 parameters a, b and c of Hampel rho (psi) function */
  /*                 ctuning(2) = paramter a of Hampel rho (psi) function */
  /*                 ctuning(3) = paramter b of Hampel rho (psi) function */
  /*                 ctuning(4) = paramter c of Hampel rho (psi) function */
  /*                 Remark: if length(ctuning)==1 values of a, b and c will be
   */
  /*                 set to a=2*ctuning b=4*ctuning c=4*ctuning */
  /*                 With these choices, if ctuning=1  the */
  /*                 resulting influence function is nearly identical to the */
  /*                 biweight with parameter 8. */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*   Output: */
  /*  */
  /*    rhoHA :     n x 1 vector which contains the Hampel rho */
  /*                 associated to the residuals or Mahalanobis distances for */
  /*                 the n units of the sample. */
  /*  */
  /*  More About: */
  /*  */
  /*  Function HArho transforms vector u as follows */
  /*  */
  /*   \[ */
  /*   HArho(u)  = \left\{ */
  /*   \begin{array}{cc} */
  /*     \frac{u^2}{2} & |u| \leq a                                       \\ */
  /*     a \times |u| -0.5 a^2 & a \leq |u| < b                    \\ */
  /*     ab-0.5a^2+0.5(c-b)a \left[ 1- \left( \frac{c-|u|}{c-b}\right)^2 \right]
   * & b \leq |u| <  c \\ */
  /*     ab-0.5a^2+0.5(c-b)a & |u| \geq c */
  /*   \end{array} \right. */
  /*  \] */
  /*  */
  /*              where $a$= ctun *ctuning(2). */
  /*                    $b$= ctun *ctuning(3). */
  /*                    $c$= ctun *ctuning(4). */
  /*  */
  /*              The default is */
  /*                    $a$= 2*ctun. */
  /*                    $b$= 4*ctun. */
  /*                    $c$= 8*ctun. */
  /*  */
  /* 	It is necessary to have 0 <= a <= b <= c */
  /*  */
  /*  See also HYPrho, TBrho, OPTrho */
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
  /* <a href="matlab: docsearchFS('HArho')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /* { */
  /*     % Plot of rho function. */
  /*     % Obtain Figure 11.10 p. 375 of */
  /*     % Hoaglin et al. (1987) */
  /*     x=-9:0.1:9; */
  /*     rhoHA=HArho(x,1); */
  /*     plot(x,rhoHA,'LineWidth',2) */
  /*     xlabel('$u$','Interpreter','Latex') */
  /*     ylabel(' Hampel $\rho(u,[2, 4, 8])
   * $','Interpreter','Latex','FontSize',14) */
  /*  */
  /* } */
  /* { */
  /*  */
  /*     % Hampel rho function using a redescending slope of -1/3. */
  /*     x=-9:0.1:9; */
  /*     rhoHA=HArho(x,[1,1.5,3.5,8]); */
  /*     plot(x,rhoHA) */
  /*     xlabel('x','Interpreter','Latex') */
  /*     ylabel(' Hampel $\rho(x) $','Interpreter','Latex') */
  /*  */
  /* } */
  /*  Beginning of code */
  if (ctuning->size[0] > 1) {
    a = ctuning_data[0] * ctuning_data[1];
    b = ctuning_data[0] * ctuning_data[2];
    c = ctuning_data[0] * ctuning_data[3];
  } else {
    /*  Note ctuning(1) instead of ctuning to convince MATLAB Ccoder that a, */
    /*  b and c are scalar. */
    a = 2.0 * ctuning_data[0];
    b = 4.0 * ctuning_data[0];
    c = 8.0 * ctuning_data[0];
  }
  rhoHA = 1.0;
  absu_tmp = fabs(u);
  /*  0.5* u^2,		   |u| <=a */
  emxInit_real_T(&y, 2);
  if (absu_tmp <= a) {
    trueCount = 0;
    if (absu_tmp <= a) {
      trueCount = 1;
    }
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = trueCount;
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    for (i = 0; i < trueCount; i++) {
      y_data[0] = rt_powd_snf(u, 2.0);
    }
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    loop_ub = trueCount - 1;
    for (i = 0; i <= loop_ub; i++) {
      y_data[0] *= 0.5;
    }
    rhoHA = 1.0;
    if (absu_tmp <= a) {
      rhoHA = y_data[0];
    }
  }
  /*  a/|u|,		 a <= |u| < b, */
  if ((absu_tmp > a) && (absu_tmp <= b)) {
    trueCount = -1;
    if ((absu_tmp > a) && (absu_tmp <= b)) {
      trueCount = 0;
    }
    a_tmp = 0.5 * (a * a);
    loop_ub = trueCount + 1;
    for (i = 0; i < loop_ub; i++) {
      rhoHA = a * absu_tmp - a_tmp;
    }
  }
  /*  ab-0.5a^2+0.5*(c-b)*a(1- ((c-|u|)/(c-b))^2 ),	  b <= |u| <  c, */
  if ((absu_tmp > b) && (absu_tmp <= c)) {
    trueCount = -1;
    if ((absu_tmp > b) && (absu_tmp <= c)) {
      trueCount = 0;
    }
    a_tmp = c - b;
    b_a = 0.5 * a_tmp * a;
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = trueCount + 1;
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    loop_ub = trueCount + 1;
    for (i = 0; i < loop_ub; i++) {
      y_data[0] = rt_powd_snf((c - absu_tmp) / a_tmp, 2.0);
    }
    a_tmp = a * b - 0.5 * (a * a);
    loop_ub = trueCount + 1;
    for (i = 0; i < loop_ub; i++) {
      rhoHA = a_tmp + b_a * (1.0 - y_data[0]);
    }
  }
  emxFree_real_T(&y);
  /*  ab-0.5a^2+0.5*(c-b)*a,			              |u| >= c. */
  if (absu_tmp > c) {
    trueCount = 0;
    if (absu_tmp > c) {
      trueCount = 1;
    }
    a_tmp = a * a;
    for (i = 0; i < trueCount; i++) {
      rhoHA = (a * b - 0.5 * a_tmp) + 0.5 * (c - b) * a;
    }
  }
  return rhoHA;
}

void b_HArho(const emxArray_real_T *u, const emxArray_real_T *ctuning,
             emxArray_real_T *rhoHA)
{
  emxArray_boolean_T *r2;
  emxArray_boolean_T *r3;
  emxArray_boolean_T *r4;
  emxArray_boolean_T *x;
  emxArray_int32_T *r;
  emxArray_int32_T *r10;
  emxArray_int32_T *r11;
  emxArray_int32_T *r12;
  emxArray_int32_T *r8;
  emxArray_int32_T *r9;
  emxArray_real_T *absu;
  emxArray_real_T *b_b;
  const double *ctuning_data;
  const double *u_data;
  double a;
  double b;
  double b_a;
  double b_c;
  double c;
  double varargin_1;
  double *absu_data;
  double *b_data;
  double *rhoHA_data;
  int i;
  int k;
  int nx;
  int *r1;
  bool exitg1;
  bool y;
  bool *r5;
  bool *r6;
  bool *r7;
  bool *x_data;
  ctuning_data = ctuning->data;
  u_data = u->data;
  /* HArho computes rho function  using Hampel proposal */
  /*  */
  /* <a href="matlab: docsearchFS('HArho')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     u:         scaled residuals or Mahalanobis distances. Vector. n x 1 */
  /*                vector containing residuals or Mahalanobis distances */
  /*                for the n units of the sample */
  /*     ctuning :  tuning parameters. Scalar or Vector. Scalar or vector of */
  /*                 length 4 which specifies the value of the tuning */
  /*                 constant c (scalar greater than 0 which controls the */
  /*                 robustness/efficiency of the estimator) */
  /*                 and the prefixed values of paramters a, b, c */
  /*                 ctuning(1) = tuning constant which will multiply */
  /*                 parameters a, b and c of Hampel rho (psi) function */
  /*                 ctuning(2) = paramter a of Hampel rho (psi) function */
  /*                 ctuning(3) = paramter b of Hampel rho (psi) function */
  /*                 ctuning(4) = paramter c of Hampel rho (psi) function */
  /*                 Remark: if length(ctuning)==1 values of a, b and c will be
   */
  /*                 set to a=2*ctuning b=4*ctuning c=4*ctuning */
  /*                 With these choices, if ctuning=1  the */
  /*                 resulting influence function is nearly identical to the */
  /*                 biweight with parameter 8. */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*   Output: */
  /*  */
  /*    rhoHA :     n x 1 vector which contains the Hampel rho */
  /*                 associated to the residuals or Mahalanobis distances for */
  /*                 the n units of the sample. */
  /*  */
  /*  More About: */
  /*  */
  /*  Function HArho transforms vector u as follows */
  /*  */
  /*   \[ */
  /*   HArho(u)  = \left\{ */
  /*   \begin{array}{cc} */
  /*     \frac{u^2}{2} & |u| \leq a                                       \\ */
  /*     a \times |u| -0.5 a^2 & a \leq |u| < b                    \\ */
  /*     ab-0.5a^2+0.5(c-b)a \left[ 1- \left( \frac{c-|u|}{c-b}\right)^2 \right]
   * & b \leq |u| <  c \\ */
  /*     ab-0.5a^2+0.5(c-b)a & |u| \geq c */
  /*   \end{array} \right. */
  /*  \] */
  /*  */
  /*              where $a$= ctun *ctuning(2). */
  /*                    $b$= ctun *ctuning(3). */
  /*                    $c$= ctun *ctuning(4). */
  /*  */
  /*              The default is */
  /*                    $a$= 2*ctun. */
  /*                    $b$= 4*ctun. */
  /*                    $c$= 8*ctun. */
  /*  */
  /* 	It is necessary to have 0 <= a <= b <= c */
  /*  */
  /*  See also HYPrho, TBrho, OPTrho */
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
  /* <a href="matlab: docsearchFS('HArho')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /* { */
  /*     % Plot of rho function. */
  /*     % Obtain Figure 11.10 p. 375 of */
  /*     % Hoaglin et al. (1987) */
  /*     x=-9:0.1:9; */
  /*     rhoHA=HArho(x,1); */
  /*     plot(x,rhoHA,'LineWidth',2) */
  /*     xlabel('$u$','Interpreter','Latex') */
  /*     ylabel(' Hampel $\rho(u,[2, 4, 8])
   * $','Interpreter','Latex','FontSize',14) */
  /*  */
  /* } */
  /* { */
  /*  */
  /*     % Hampel rho function using a redescending slope of -1/3. */
  /*     x=-9:0.1:9; */
  /*     rhoHA=HArho(x,[1,1.5,3.5,8]); */
  /*     plot(x,rhoHA) */
  /*     xlabel('x','Interpreter','Latex') */
  /*     ylabel(' Hampel $\rho(x) $','Interpreter','Latex') */
  /*  */
  /* } */
  /*  Beginning of code */
  if (ctuning->size[0] > 1) {
    a = ctuning_data[0] * ctuning_data[1];
    b = ctuning_data[0] * ctuning_data[2];
    c = ctuning_data[0] * ctuning_data[3];
  } else {
    /*  Note ctuning(1) instead of ctuning to convince MATLAB Ccoder that a, */
    /*  b and c are scalar. */
    a = 2.0 * ctuning_data[0];
    b = 4.0 * ctuning_data[0];
    c = 8.0 * ctuning_data[0];
  }
  i = rhoHA->size[0];
  rhoHA->size[0] = u->size[0];
  emxEnsureCapacity_real_T(rhoHA, i);
  rhoHA_data = rhoHA->data;
  nx = u->size[0];
  for (i = 0; i < nx; i++) {
    rhoHA_data[i] = 1.0;
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
  emxInit_boolean_T(&x, 1);
  /*  0.5* u^2,		   |u| <=a */
  i = x->size[0];
  x->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(x, i);
  x_data = x->data;
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    x_data[i] = (absu_data[i] <= a);
  }
  y = false;
  nx = 1;
  exitg1 = false;
  while ((!exitg1) && (nx <= x->size[0])) {
    if (x_data[nx - 1]) {
      y = true;
      exitg1 = true;
    } else {
      nx++;
    }
  }
  emxInit_real_T(&b_b, 1);
  if (y) {
    k = absu->size[0] - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (absu_data[i] <= a) {
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
      if (absu_data[i] <= a) {
        r1[nx] = i + 1;
        nx++;
      }
    }
    i = b_b->size[0];
    b_b->size[0] = r->size[0];
    emxEnsureCapacity_real_T(b_b, i);
    b_data = b_b->data;
    nx = r->size[0];
    for (i = 0; i < nx; i++) {
      varargin_1 = u_data[r1[i] - 1];
      b_data[i] = varargin_1 * varargin_1;
    }
    emxFree_int32_T(&r);
    nx = b_b->size[0];
    for (i = 0; i < nx; i++) {
      b_data[i] *= 0.5;
    }
    k = absu->size[0];
    nx = 0;
    for (i = 0; i < k; i++) {
      if (absu_data[i] <= a) {
        rhoHA_data[i] = b_data[nx];
        nx++;
      }
    }
  }
  /*  a/|u|,		 a <= |u| < b, */
  i = x->size[0];
  x->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(x, i);
  x_data = x->data;
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    x_data[i] = ((absu_data[i] > a) && (absu_data[i] <= b));
  }
  y = false;
  nx = 1;
  exitg1 = false;
  while ((!exitg1) && (nx <= x->size[0])) {
    if (x_data[nx - 1]) {
      y = true;
      exitg1 = true;
    } else {
      nx++;
    }
  }
  emxInit_boolean_T(&r2, 1);
  emxInit_boolean_T(&r3, 1);
  emxInit_boolean_T(&r4, 1);
  if (y) {
    i = x->size[0];
    x->size[0] = absu->size[0];
    emxEnsureCapacity_boolean_T(x, i);
    x_data = x->data;
    nx = absu->size[0];
    for (i = 0; i < nx; i++) {
      x_data[i] = (absu_data[i] > a);
    }
    i = r2->size[0];
    r2->size[0] = absu->size[0];
    emxEnsureCapacity_boolean_T(r2, i);
    r5 = r2->data;
    nx = absu->size[0];
    for (i = 0; i < nx; i++) {
      r5[i] = (absu_data[i] <= b);
    }
    i = r3->size[0];
    r3->size[0] = absu->size[0];
    emxEnsureCapacity_boolean_T(r3, i);
    r6 = r3->data;
    nx = absu->size[0];
    for (i = 0; i < nx; i++) {
      r6[i] = (absu_data[i] > a);
    }
    i = r4->size[0];
    r4->size[0] = absu->size[0];
    emxEnsureCapacity_boolean_T(r4, i);
    r7 = r4->data;
    nx = absu->size[0];
    for (i = 0; i < nx; i++) {
      r7[i] = (absu_data[i] <= b);
    }
    k = x->size[0] - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (x_data[i] && r5[i]) {
        nx++;
      }
    }
    emxInit_int32_T(&r8, 1);
    i = r8->size[0];
    r8->size[0] = nx;
    emxEnsureCapacity_int32_T(r8, i);
    r1 = r8->data;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (x_data[i] && r5[i]) {
        r1[nx] = i + 1;
        nx++;
      }
    }
    nx = r8->size[0];
    i = b_b->size[0];
    b_b->size[0] = r8->size[0];
    emxEnsureCapacity_real_T(b_b, i);
    b_data = b_b->data;
    for (k = 0; k < nx; k++) {
      b_data[k] = fabs(u_data[r1[k] - 1]);
    }
    emxFree_int32_T(&r8);
    k = r3->size[0] - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (r6[i] && r7[i]) {
        nx++;
      }
    }
    emxInit_int32_T(&r11, 1);
    i = r11->size[0];
    r11->size[0] = nx;
    emxEnsureCapacity_int32_T(r11, i);
    r1 = r11->data;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (r6[i] && r7[i]) {
        r1[nx] = i + 1;
        nx++;
      }
    }
    varargin_1 = 0.5 * (a * a);
    nx = b_b->size[0];
    for (i = 0; i < nx; i++) {
      rhoHA_data[r1[i] - 1] = a * b_data[i] - varargin_1;
    }
    emxFree_int32_T(&r11);
  }
  /*  ab-0.5a^2+0.5*(c-b)*a(1- ((c-|u|)/(c-b))^2 ),	  b <= |u| <  c, */
  i = x->size[0];
  x->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(x, i);
  x_data = x->data;
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    x_data[i] = ((absu_data[i] > b) && (absu_data[i] <= c));
  }
  y = false;
  nx = 1;
  exitg1 = false;
  while ((!exitg1) && (nx <= x->size[0])) {
    if (x_data[nx - 1]) {
      y = true;
      exitg1 = true;
    } else {
      nx++;
    }
  }
  if (y) {
    i = x->size[0];
    x->size[0] = absu->size[0];
    emxEnsureCapacity_boolean_T(x, i);
    x_data = x->data;
    nx = absu->size[0];
    for (i = 0; i < nx; i++) {
      x_data[i] = (absu_data[i] > b);
    }
    i = r2->size[0];
    r2->size[0] = absu->size[0];
    emxEnsureCapacity_boolean_T(r2, i);
    r5 = r2->data;
    nx = absu->size[0];
    for (i = 0; i < nx; i++) {
      r5[i] = (absu_data[i] <= c);
    }
    i = r3->size[0];
    r3->size[0] = absu->size[0];
    emxEnsureCapacity_boolean_T(r3, i);
    r6 = r3->data;
    nx = absu->size[0];
    for (i = 0; i < nx; i++) {
      r6[i] = (absu_data[i] > b);
    }
    i = r4->size[0];
    r4->size[0] = absu->size[0];
    emxEnsureCapacity_boolean_T(r4, i);
    r7 = r4->data;
    nx = absu->size[0];
    for (i = 0; i < nx; i++) {
      r7[i] = (absu_data[i] <= c);
    }
    k = x->size[0] - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (x_data[i] && r5[i]) {
        nx++;
      }
    }
    emxInit_int32_T(&r10, 1);
    i = r10->size[0];
    r10->size[0] = nx;
    emxEnsureCapacity_int32_T(r10, i);
    r1 = r10->data;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (x_data[i] && r5[i]) {
        r1[nx] = i + 1;
        nx++;
      }
    }
    b_a = 0.5 * (c - b) * a;
    nx = r10->size[0];
    i = b_b->size[0];
    b_b->size[0] = r10->size[0];
    emxEnsureCapacity_real_T(b_b, i);
    b_data = b_b->data;
    for (k = 0; k < nx; k++) {
      b_data[k] = fabs(u_data[r1[k] - 1]);
    }
    emxFree_int32_T(&r10);
    k = r3->size[0] - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (r6[i] && r7[i]) {
        nx++;
      }
    }
    emxInit_int32_T(&r12, 1);
    i = r12->size[0];
    r12->size[0] = nx;
    emxEnsureCapacity_int32_T(r12, i);
    r1 = r12->data;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (r6[i] && r7[i]) {
        r1[nx] = i + 1;
        nx++;
      }
    }
    b_c = c - b;
    nx = b_b->size[0];
    for (i = 0; i < nx; i++) {
      varargin_1 = (c - b_data[i]) / b_c;
      b_data[i] = varargin_1 * varargin_1;
    }
    varargin_1 = a * b - 0.5 * (a * a);
    nx = b_b->size[0];
    for (i = 0; i < nx; i++) {
      rhoHA_data[r1[i] - 1] = varargin_1 + b_a * (1.0 - b_data[i]);
    }
    emxFree_int32_T(&r12);
  }
  emxFree_real_T(&b_b);
  emxFree_boolean_T(&r4);
  emxFree_boolean_T(&r3);
  emxFree_boolean_T(&r2);
  /*  ab-0.5a^2+0.5*(c-b)*a,			              |u| >= c. */
  i = x->size[0];
  x->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(x, i);
  x_data = x->data;
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    x_data[i] = (absu_data[i] > c);
  }
  y = false;
  nx = 1;
  exitg1 = false;
  while ((!exitg1) && (nx <= x->size[0])) {
    if (x_data[nx - 1]) {
      y = true;
      exitg1 = true;
    } else {
      nx++;
    }
  }
  emxFree_boolean_T(&x);
  if (y) {
    k = absu->size[0] - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (absu_data[i] > c) {
        nx++;
      }
    }
    emxInit_int32_T(&r9, 1);
    i = r9->size[0];
    r9->size[0] = nx;
    emxEnsureCapacity_int32_T(r9, i);
    r1 = r9->data;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (absu_data[i] > c) {
        r1[nx] = i + 1;
        nx++;
      }
    }
    b_c = a * a;
    nx = r9->size[0];
    for (i = 0; i < nx; i++) {
      rhoHA_data[r1[i] - 1] = (a * b - 0.5 * b_c) + 0.5 * (c - b) * a;
    }
    emxFree_int32_T(&r9);
  }
  emxFree_real_T(&absu);
}

/* End of code generation (HArho.c) */
