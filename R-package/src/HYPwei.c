/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * HYPwei.c
 *
 * Code generation for function 'HYPwei'
 *
 */

/* Include files */
#include "HYPwei.h"
#include "div.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void HYPwei(const emxArray_real_T *u, const emxArray_real_T *cktuning,
            emxArray_real_T *w)
{
  emxArray_boolean_T *r;
  emxArray_boolean_T *r2;
  emxArray_boolean_T *r4;
  emxArray_boolean_T *r6;
  emxArray_int32_T *r10;
  emxArray_int32_T *r13;
  emxArray_int32_T *r8;
  emxArray_real_T *absu;
  emxArray_real_T *r11;
  emxArray_real_T *x;
  const double *cktuning_data;
  const double *u_data;
  double A;
  double a;
  double b_a;
  double d;
  double *absu_data;
  double *r12;
  double *w_data;
  double *x_data;
  int i;
  int k;
  int nx;
  int *r9;
  bool *r1;
  bool *r3;
  bool *r5;
  bool *r7;
  cktuning_data = cktuning->data;
  u_data = u->data;
  /* HYPwei computes weight function psi(u)/u for hyperbolic tangent estimator
   */
  /*  */
  /* <a href="matlab: docsearchFS('HYPwei')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     u:         scaled residuals or Mahalanobis distances. Vector. n x 1 */
  /*                vector containing residuals or Mahalanobis distances */
  /*                for the n units of the sample */
  /*     cktuning :  tuning parameters. Vector of length 2 or of length 5. */
  /*                 cktuning specifies  specifies the value of the tuning */
  /*                 constant c (scalar greater than 0 which controls the */
  /*                 robustness/efficiency of the estimator) */
  /*                 and the prefixed value k (sup of the */
  /*                 change-of-variance sensitivity) and the values of */
  /*                 parameters A, B and d: */
  /*                 cktuning(1) = c; */
  /*                 cktuning(2) = k = supCVC(psi,x) x \in R; */
  /*                 cktuning(3)=A; */
  /*                 cktuning(4)=B; */
  /*                 cktuning(5)=d; */
  /*                 Remark: if length(cktuning)==2 values of A, B and d will be
   */
  /*                 computed automatically */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*   Output: */
  /*  */
  /*     w :         hyperbolic weights. Vector. */
  /*                 n x 1 vector contains the hyperbolic weights associated to
   */
  /*                 the scaled residuals or Mahalanobis distances for the n */
  /*                 units of the sample */
  /*  */
  /*  More About: */
  /*  */
  /*  Function HYPwei transforms vector u as follows */
  /*  */
  /*  \[ */
  /*  HYPwei(u) = */
  /*  \left\{ */
  /*     \begin{array}{cc} */
  /*  	1 &	          |u| \leq d, \\ */
  /* 		         \sqrt(A * (k - 1)) * tanh(sqrt((k - 1) * B^2/A)*(c-|u|)/2)
   * .* sign(u)/u */
  /* 		         	 &                d \leq |u| <  c, \\ */
  /* 		    0	&                 |u| \geq c. \\ */
  /*    \end{array} */
  /*    \right. */
  /*  \] */
  /*  where $0 < d < c$ is such that */
  /*  \[ */
  /*  d = \sqrt{[A(k-1)]}\tanh [\frac{1}{2}\sqrt{\frac{(k-1)B^2}{A}}(c - d)], */
  /*  \] */
  /*  $A$ and $B$ satisfy suitable conditions, and $k$ is related to the bound
   */
  /*  in the Change of Variance Curve. */
  /*  */
  /*  More precisely, it is necessary to have $0 < A < B < 2 *normcdf(c)-1-
   * 2*c*normpdf(c) <1$% */
  /*  Remark: hyperbolic  psi-function is linear around u = 0 in accordance with
   */
  /*  Winsor's principle that all distributions are normal in the middle. */
  /*  This means that  \psi (u)/u is approximately constant over the linear
   * region of \psi, */
  /*  so the points in that region tend to get equal weight. */
  /*  */
  /*  See also TBwei, HAwei, OPTwei */
  /*  */
  /*  References: */
  /*  */
  /*  Hampel, F.R., Rousseeuw, P.J. and Ronchetti, E. (1981), */
  /*  The Change-of-Variance Curve and Optimal Redescending M-Estimators, */
  /*  "Journal of the American Statistical Association", Vol. 76, */
  /*  pp. 643-648. [HRR] */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('HYPwei')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /* { */
  /*     % Weight function for hyperbolic tangent estimator. */
  /*     x=-6:0.01:6; */
  /*     ctuning=4; */
  /*     ktuning=4.5; */
  /*     weiHYP=HYPwei(x,[ctuning,ktuning]); */
  /*     plot(x,weiHYP) */
  /*     xlabel('x','Interpreter','Latex') */
  /*     ylabel('$W (x) =\psi(x)/x$','Interpreter','Latex') */
  /*  */
  /* } */
  /*  Beginning of code */
  if (cktuning->size[0] > 2) {
    A = cktuning_data[2];
    a = cktuning_data[3];
    d = cktuning_data[4];
  } else {
    A = 1.0;
    a = 1.0;
    d = 1.0;
    /*  necessary for MATLAB coder initialization */
    /*  For example if c=4 and k=5 */
    /*      A = 0.857044; */
    /*      B = 0.911135; */
    /*      d =1.803134; */
    /*  see Table 2 of HRR */
  }
  i = w->size[0];
  w->size[0] = u->size[0];
  emxEnsureCapacity_real_T(w, i);
  w_data = w->data;
  nx = u->size[0];
  for (i = 0; i < nx; i++) {
    w_data[i] = 0.0;
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
  /*   u,		   |u| <=d */
  k = absu->size[0];
  for (i = 0; i < k; i++) {
    if (absu_data[i] <= d) {
      w_data[i] = 1.0;
    }
  }
  emxInit_boolean_T(&r, 1);
  /*                 d <= |u| < c, */
  /*  \sqrt(A * (k - 1)) * tanh(sqrt((k - 1) * B^2/A)*(c -|u|)/2) .* sign(u) */
  i = r->size[0];
  r->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r, i);
  r1 = r->data;
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r1[i] = (absu_data[i] > d);
  }
  emxInit_boolean_T(&r2, 1);
  i = r2->size[0];
  r2->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r2, i);
  r3 = r2->data;
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r3[i] = (absu_data[i] <= cktuning_data[0]);
  }
  emxInit_boolean_T(&r4, 1);
  i = r4->size[0];
  r4->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r4, i);
  r5 = r4->data;
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r5[i] = (absu_data[i] > d);
  }
  emxInit_boolean_T(&r6, 1);
  i = r6->size[0];
  r6->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r6, i);
  r7 = r6->data;
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r7[i] = (absu_data[i] <= cktuning_data[0]);
  }
  k = r->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r1[i] && r3[i]) {
      nx++;
    }
  }
  emxInit_int32_T(&r8, 1);
  i = r8->size[0];
  r8->size[0] = nx;
  emxEnsureCapacity_int32_T(r8, i);
  r9 = r8->data;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r1[i] && r3[i]) {
      r9[nx] = i + 1;
      nx++;
    }
  }
  emxInit_real_T(&x, 1);
  a = sqrt((cktuning_data[1] - 1.0) * (a * a) / A);
  b_a = sqrt(A * (cktuning_data[1] - 1.0));
  i = x->size[0];
  x->size[0] = r8->size[0];
  emxEnsureCapacity_real_T(x, i);
  x_data = x->data;
  nx = r8->size[0];
  for (i = 0; i < nx; i++) {
    x_data[i] = a * (cktuning_data[0] - absu_data[r9[i] - 1]) / 2.0;
  }
  emxFree_int32_T(&r8);
  nx = x->size[0];
  for (k = 0; k < nx; k++) {
    x_data[k] = tanh(x_data[k]);
  }
  k = r4->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r5[i] && r7[i]) {
      nx++;
    }
  }
  emxInit_int32_T(&r10, 1);
  i = r10->size[0];
  r10->size[0] = nx;
  emxEnsureCapacity_int32_T(r10, i);
  r9 = r10->data;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r5[i] && r7[i]) {
      r9[nx] = i + 1;
      nx++;
    }
  }
  emxInit_real_T(&r11, 1);
  i = r11->size[0];
  r11->size[0] = r10->size[0];
  emxEnsureCapacity_real_T(r11, i);
  r12 = r11->data;
  nx = r10->size[0];
  for (i = 0; i < nx; i++) {
    r12[i] = u_data[r9[i] - 1];
  }
  nx = r10->size[0];
  emxFree_int32_T(&r10);
  for (k = 0; k < nx; k++) {
    A = r12[k];
    if (r12[k] < 0.0) {
      A = -1.0;
    } else if (r12[k] > 0.0) {
      A = 1.0;
    } else if (r12[k] == 0.0) {
      A = 0.0;
    }
    r12[k] = A;
  }
  i = r->size[0];
  r->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r, i);
  r1 = r->data;
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r1[i] = (absu_data[i] > d);
  }
  i = r2->size[0];
  r2->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r2, i);
  r3 = r2->data;
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r3[i] = (absu_data[i] <= cktuning_data[0]);
  }
  i = r4->size[0];
  r4->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r4, i);
  r5 = r4->data;
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r5[i] = (absu_data[i] > d);
  }
  i = r6->size[0];
  r6->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r6, i);
  r7 = r6->data;
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r7[i] = (absu_data[i] <= cktuning_data[0]);
  }
  k = r->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r1[i] && r3[i]) {
      nx++;
    }
  }
  emxInit_int32_T(&r13, 1);
  i = r13->size[0];
  r13->size[0] = nx;
  emxEnsureCapacity_int32_T(r13, i);
  r9 = r13->data;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r1[i] && r3[i]) {
      r9[nx] = i + 1;
      nx++;
    }
  }
  emxFree_boolean_T(&r2);
  emxFree_boolean_T(&r);
  if (x->size[0] == 1) {
    nx = r11->size[0];
  } else {
    nx = x->size[0];
  }
  if ((x->size[0] == r11->size[0]) && (nx == r13->size[0])) {
    i = absu->size[0];
    absu->size[0] = x->size[0];
    emxEnsureCapacity_real_T(absu, i);
    absu_data = absu->data;
    nx = x->size[0];
    for (i = 0; i < nx; i++) {
      absu_data[i] = b_a * x_data[i] * r12[i] / u_data[r9[i] - 1];
    }
  } else {
    ue_binary_expand_op(absu, b_a, x, r11, u, r13);
    absu_data = absu->data;
  }
  emxFree_real_T(&x);
  emxFree_int32_T(&r13);
  emxFree_real_T(&r11);
  k = r4->size[0];
  nx = 0;
  for (i = 0; i < k; i++) {
    if (r5[i] && r7[i]) {
      w_data[i] = absu_data[nx];
      nx++;
    }
  }
  emxFree_boolean_T(&r6);
  emxFree_boolean_T(&r4);
  emxFree_real_T(&absu);
  /*  0,			              |u| >= c. */
}

/* End of code generation (HYPwei.c) */
