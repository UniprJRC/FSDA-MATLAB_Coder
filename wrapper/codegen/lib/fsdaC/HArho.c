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
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
double HArho(double u, const emxArray_real_T *ctuning)
{
  emxArray_real_T *c_a;
  emxArray_real_T *y;
  double a;
  double a_tmp;
  double absu_tmp;
  double b;
  double b_a;
  double c;
  double rhoHA;
  int i;
  int loop_ub;
  int trueCount;
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
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  */
  /*   Output: */
  /*  */
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
  /*  */
  /*  See also HYPrho, TBrho, OPTrho */
  /*  */
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
    a = ctuning->data[0] * ctuning->data[1];
    b = ctuning->data[0] * ctuning->data[2];
    c = ctuning->data[0] * ctuning->data[3];
  } else {
    /*  Note ctuning(1) instead of ctuning to convince MATLAB Ccoder that a, */
    /*  b and c are scalar. */
    a = 2.0 * ctuning->data[0];
    b = 4.0 * ctuning->data[0];
    c = 8.0 * ctuning->data[0];
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
    if (0 <= trueCount - 1) {
      y->data[0] = u * u;
    }
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    emxEnsureCapacity_real_T(y, i);
    loop_ub = trueCount - 1;
    for (i = 0; i <= loop_ub; i++) {
      y->data[0] *= 0.5;
    }
    rhoHA = 1.0;
    if (absu_tmp <= a) {
      rhoHA = y->data[0];
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
    emxInit_real_T(&c_a, 2);
    i = c_a->size[0] * c_a->size[1];
    c_a->size[0] = 1;
    c_a->size[1] = trueCount + 1;
    emxEnsureCapacity_real_T(c_a, i);
    loop_ub = trueCount + 1;
    for (i = 0; i < loop_ub; i++) {
      c_a->data[0] = (c - absu_tmp) / a_tmp;
    }
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = trueCount + 1;
    emxEnsureCapacity_real_T(y, i);
    if (0 <= trueCount) {
      y->data[0] = c_a->data[0] * c_a->data[0];
    }
    emxFree_real_T(&c_a);
    a_tmp = a * b - 0.5 * (a * a);
    loop_ub = trueCount + 1;
    for (i = 0; i < loop_ub; i++) {
      rhoHA = a_tmp + b_a * (1.0 - y->data[0]);
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
  emxArray_boolean_T *r1;
  emxArray_boolean_T *r2;
  emxArray_boolean_T *r3;
  emxArray_boolean_T *x;
  emxArray_int32_T *r;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_int32_T *r6;
  emxArray_int32_T *r7;
  emxArray_int32_T *r8;
  emxArray_real_T *absu;
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  double a;
  double b;
  double b_a;
  double c;
  double y_tmp;
  int i;
  int k;
  int nx;
  bool exitg1;
  bool y;
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
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  */
  /*   Output: */
  /*  */
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
  /*  */
  /*  See also HYPrho, TBrho, OPTrho */
  /*  */
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
    a = ctuning->data[0] * ctuning->data[1];
    b = ctuning->data[0] * ctuning->data[2];
    c = ctuning->data[0] * ctuning->data[3];
  } else {
    /*  Note ctuning(1) instead of ctuning to convince MATLAB Ccoder that a, */
    /*  b and c are scalar. */
    a = 2.0 * ctuning->data[0];
    b = 4.0 * ctuning->data[0];
    c = 8.0 * ctuning->data[0];
  }
  i = rhoHA->size[0];
  rhoHA->size[0] = u->size[0];
  emxEnsureCapacity_real_T(rhoHA, i);
  nx = u->size[0];
  for (i = 0; i < nx; i++) {
    rhoHA->data[i] = 1.0;
  }
  emxInit_real_T(&absu, 1);
  nx = u->size[0];
  i = absu->size[0];
  absu->size[0] = u->size[0];
  emxEnsureCapacity_real_T(absu, i);
  for (k = 0; k < nx; k++) {
    absu->data[k] = fabs(u->data[k]);
  }
  emxInit_boolean_T(&x, 1);
  /*  0.5* u^2,		   |u| <=a */
  i = x->size[0];
  x->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(x, i);
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    x->data[i] = (absu->data[i] <= a);
  }
  y = false;
  nx = 1;
  exitg1 = false;
  while ((!exitg1) && (nx <= x->size[0])) {
    if (!x->data[nx - 1]) {
      nx++;
    } else {
      y = true;
      exitg1 = true;
    }
  }
  emxInit_real_T(&b_y, 1);
  if (y) {
    k = absu->size[0] - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (absu->data[i] <= a) {
        nx++;
      }
    }
    emxInit_int32_T(&r, 1);
    i = r->size[0];
    r->size[0] = nx;
    emxEnsureCapacity_int32_T(r, i);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (absu->data[i] <= a) {
        r->data[nx] = i + 1;
        nx++;
      }
    }
    i = b_y->size[0];
    b_y->size[0] = r->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    nx = r->size[0];
    for (k = 0; k < nx; k++) {
      y_tmp = u->data[r->data[k] - 1];
      b_y->data[k] = y_tmp * y_tmp;
    }
    emxFree_int32_T(&r);
    nx = b_y->size[0];
    for (i = 0; i < nx; i++) {
      b_y->data[i] *= 0.5;
    }
    k = absu->size[0];
    nx = 0;
    for (i = 0; i < k; i++) {
      if (absu->data[i] <= a) {
        rhoHA->data[i] = b_y->data[nx];
        nx++;
      }
    }
  }
  /*  a/|u|,		 a <= |u| < b, */
  i = x->size[0];
  x->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(x, i);
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    x->data[i] = ((absu->data[i] > a) && (absu->data[i] <= b));
  }
  y = false;
  nx = 1;
  exitg1 = false;
  while ((!exitg1) && (nx <= x->size[0])) {
    if (!x->data[nx - 1]) {
      nx++;
    } else {
      y = true;
      exitg1 = true;
    }
  }
  emxInit_boolean_T(&r1, 1);
  emxInit_boolean_T(&r2, 1);
  emxInit_boolean_T(&r3, 1);
  if (y) {
    i = x->size[0];
    x->size[0] = absu->size[0];
    emxEnsureCapacity_boolean_T(x, i);
    nx = absu->size[0];
    for (i = 0; i < nx; i++) {
      x->data[i] = (absu->data[i] > a);
    }
    i = r1->size[0];
    r1->size[0] = absu->size[0];
    emxEnsureCapacity_boolean_T(r1, i);
    nx = absu->size[0];
    for (i = 0; i < nx; i++) {
      r1->data[i] = (absu->data[i] <= b);
    }
    i = r2->size[0];
    r2->size[0] = absu->size[0];
    emxEnsureCapacity_boolean_T(r2, i);
    nx = absu->size[0];
    for (i = 0; i < nx; i++) {
      r2->data[i] = (absu->data[i] > a);
    }
    i = r3->size[0];
    r3->size[0] = absu->size[0];
    emxEnsureCapacity_boolean_T(r3, i);
    nx = absu->size[0];
    for (i = 0; i < nx; i++) {
      r3->data[i] = (absu->data[i] <= b);
    }
    k = x->size[0] - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (x->data[i] && r1->data[i]) {
        nx++;
      }
    }
    emxInit_int32_T(&r4, 1);
    i = r4->size[0];
    r4->size[0] = nx;
    emxEnsureCapacity_int32_T(r4, i);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (x->data[i] && r1->data[i]) {
        r4->data[nx] = i + 1;
        nx++;
      }
    }
    nx = r4->size[0];
    i = b_y->size[0];
    b_y->size[0] = r4->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    for (k = 0; k < nx; k++) {
      b_y->data[k] = fabs(u->data[r4->data[k] - 1]);
    }
    emxFree_int32_T(&r4);
    k = r2->size[0] - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (r2->data[i] && r3->data[i]) {
        nx++;
      }
    }
    emxInit_int32_T(&r7, 1);
    i = r7->size[0];
    r7->size[0] = nx;
    emxEnsureCapacity_int32_T(r7, i);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (r2->data[i] && r3->data[i]) {
        r7->data[nx] = i + 1;
        nx++;
      }
    }
    y_tmp = 0.5 * (a * a);
    nx = b_y->size[0];
    for (i = 0; i < nx; i++) {
      rhoHA->data[r7->data[i] - 1] = a * b_y->data[i] - y_tmp;
    }
    emxFree_int32_T(&r7);
  }
  /*  ab-0.5a^2+0.5*(c-b)*a(1- ((c-|u|)/(c-b))^2 ),	  b <= |u| <  c, */
  i = x->size[0];
  x->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(x, i);
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    x->data[i] = ((absu->data[i] > b) && (absu->data[i] <= c));
  }
  y = false;
  nx = 1;
  exitg1 = false;
  while ((!exitg1) && (nx <= x->size[0])) {
    if (!x->data[nx - 1]) {
      nx++;
    } else {
      y = true;
      exitg1 = true;
    }
  }
  if (y) {
    i = x->size[0];
    x->size[0] = absu->size[0];
    emxEnsureCapacity_boolean_T(x, i);
    nx = absu->size[0];
    for (i = 0; i < nx; i++) {
      x->data[i] = (absu->data[i] > b);
    }
    i = r1->size[0];
    r1->size[0] = absu->size[0];
    emxEnsureCapacity_boolean_T(r1, i);
    nx = absu->size[0];
    for (i = 0; i < nx; i++) {
      r1->data[i] = (absu->data[i] <= c);
    }
    i = r2->size[0];
    r2->size[0] = absu->size[0];
    emxEnsureCapacity_boolean_T(r2, i);
    nx = absu->size[0];
    for (i = 0; i < nx; i++) {
      r2->data[i] = (absu->data[i] > b);
    }
    i = r3->size[0];
    r3->size[0] = absu->size[0];
    emxEnsureCapacity_boolean_T(r3, i);
    nx = absu->size[0];
    for (i = 0; i < nx; i++) {
      r3->data[i] = (absu->data[i] <= c);
    }
    k = x->size[0] - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (x->data[i] && r1->data[i]) {
        nx++;
      }
    }
    emxInit_int32_T(&r6, 1);
    i = r6->size[0];
    r6->size[0] = nx;
    emxEnsureCapacity_int32_T(r6, i);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (x->data[i] && r1->data[i]) {
        r6->data[nx] = i + 1;
        nx++;
      }
    }
    b_a = 0.5 * (c - b) * a;
    nx = r6->size[0];
    i = b_y->size[0];
    b_y->size[0] = r6->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    for (k = 0; k < nx; k++) {
      b_y->data[k] = fabs(u->data[r6->data[k] - 1]);
    }
    emxFree_int32_T(&r6);
    k = r2->size[0] - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (r2->data[i] && r3->data[i]) {
        nx++;
      }
    }
    emxInit_int32_T(&r8, 1);
    i = r8->size[0];
    r8->size[0] = nx;
    emxEnsureCapacity_int32_T(r8, i);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (r2->data[i] && r3->data[i]) {
        r8->data[nx] = i + 1;
        nx++;
      }
    }
    emxInit_real_T(&c_y, 1);
    y_tmp = c - b;
    nx = b_y->size[0];
    for (i = 0; i < nx; i++) {
      b_y->data[i] = (c - b_y->data[i]) / y_tmp;
    }
    i = c_y->size[0];
    c_y->size[0] = b_y->size[0];
    emxEnsureCapacity_real_T(c_y, i);
    nx = b_y->size[0];
    for (k = 0; k < nx; k++) {
      c_y->data[k] = b_y->data[k] * b_y->data[k];
    }
    y_tmp = a * b - 0.5 * (a * a);
    nx = c_y->size[0];
    for (i = 0; i < nx; i++) {
      rhoHA->data[r8->data[i] - 1] = y_tmp + b_a * (1.0 - c_y->data[i]);
    }
    emxFree_real_T(&c_y);
    emxFree_int32_T(&r8);
  }
  emxFree_real_T(&b_y);
  emxFree_boolean_T(&r3);
  emxFree_boolean_T(&r2);
  emxFree_boolean_T(&r1);
  /*  ab-0.5a^2+0.5*(c-b)*a,			              |u| >= c. */
  i = x->size[0];
  x->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(x, i);
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    x->data[i] = (absu->data[i] > c);
  }
  y = false;
  nx = 1;
  exitg1 = false;
  while ((!exitg1) && (nx <= x->size[0])) {
    if (!x->data[nx - 1]) {
      nx++;
    } else {
      y = true;
      exitg1 = true;
    }
  }
  emxFree_boolean_T(&x);
  if (y) {
    k = absu->size[0] - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (absu->data[i] > c) {
        nx++;
      }
    }
    emxInit_int32_T(&r5, 1);
    i = r5->size[0];
    r5->size[0] = nx;
    emxEnsureCapacity_int32_T(r5, i);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (absu->data[i] > c) {
        r5->data[nx] = i + 1;
        nx++;
      }
    }
    y_tmp = a * a;
    nx = r5->size[0];
    for (i = 0; i < nx; i++) {
      rhoHA->data[r5->data[i] - 1] = (a * b - 0.5 * y_tmp) + 0.5 * (c - b) * a;
    }
    emxFree_int32_T(&r5);
  }
  emxFree_real_T(&absu);
}

/* End of code generation (HArho.c) */
