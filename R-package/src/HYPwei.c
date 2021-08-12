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
  emxArray_boolean_T *r1;
  emxArray_boolean_T *r2;
  emxArray_boolean_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_int32_T *r7;
  emxArray_real_T *absu;
  emxArray_real_T *r6;
  emxArray_real_T *x;
  double A;
  double a;
  double b_a;
  double d;
  int i;
  int k;
  int nx;
  /* HYPwei computes weight function psi(u)/u for hyperbolic tangent estimator
   */
  /*  */
  /* <a href="matlab: docsearchFS('HYPwei')">Link to the help function</a> */
  /*  */
  /*  */
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
  /*  */
  /*  Hampel, F.R., Rousseeuw, P.J. and Ronchetti, E. (1981), */
  /*  The Change-of-Variance Curve and Optimal Redescending M-Estimators, */
  /*  "Journal of the American Statistical Association", Vol. 76, */
  /*  pp. 643-648. [HRR] */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('HYPwei')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
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
    A = cktuning->data[2];
    a = cktuning->data[3];
    d = cktuning->data[4];
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
  nx = u->size[0];
  for (i = 0; i < nx; i++) {
    w->data[i] = 0.0;
  }
  emxInit_real_T(&absu, 1);
  nx = u->size[0];
  i = absu->size[0];
  absu->size[0] = u->size[0];
  emxEnsureCapacity_real_T(absu, i);
  for (k = 0; k < nx; k++) {
    absu->data[k] = fabs(u->data[k]);
  }
  /*   u,		   |u| <=d */
  k = absu->size[0];
  for (i = 0; i < k; i++) {
    if (absu->data[i] <= d) {
      w->data[i] = 1.0;
    }
  }
  emxInit_boolean_T(&r, 1);
  /*                 d <= |u| < c, */
  /*  \sqrt(A * (k - 1)) * tanh(sqrt((k - 1) * B^2/A)*(c -|u|)/2) .* sign(u) */
  i = r->size[0];
  r->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r, i);
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r->data[i] = (absu->data[i] > d);
  }
  emxInit_boolean_T(&r1, 1);
  i = r1->size[0];
  r1->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r1, i);
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r1->data[i] = (absu->data[i] <= cktuning->data[0]);
  }
  emxInit_boolean_T(&r2, 1);
  i = r2->size[0];
  r2->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r2, i);
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r2->data[i] = (absu->data[i] > d);
  }
  emxInit_boolean_T(&r3, 1);
  i = r3->size[0];
  r3->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r3, i);
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r3->data[i] = (absu->data[i] <= cktuning->data[0]);
  }
  k = r->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r->data[i] && r1->data[i]) {
      nx++;
    }
  }
  emxInit_int32_T(&r4, 1);
  i = r4->size[0];
  r4->size[0] = nx;
  emxEnsureCapacity_int32_T(r4, i);
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r->data[i] && r1->data[i]) {
      r4->data[nx] = i + 1;
      nx++;
    }
  }
  emxInit_real_T(&x, 1);
  a = sqrt((cktuning->data[1] - 1.0) * (a * a) / A);
  b_a = sqrt(A * (cktuning->data[1] - 1.0));
  i = x->size[0];
  x->size[0] = r4->size[0];
  emxEnsureCapacity_real_T(x, i);
  nx = r4->size[0];
  for (i = 0; i < nx; i++) {
    x->data[i] = a * (cktuning->data[0] - absu->data[r4->data[i] - 1]) / 2.0;
  }
  emxFree_int32_T(&r4);
  nx = x->size[0];
  for (k = 0; k < nx; k++) {
    x->data[k] = tanh(x->data[k]);
  }
  k = r2->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r2->data[i] && r3->data[i]) {
      nx++;
    }
  }
  emxInit_int32_T(&r5, 1);
  i = r5->size[0];
  r5->size[0] = nx;
  emxEnsureCapacity_int32_T(r5, i);
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r2->data[i] && r3->data[i]) {
      r5->data[nx] = i + 1;
      nx++;
    }
  }
  emxInit_real_T(&r6, 1);
  i = r6->size[0];
  r6->size[0] = r5->size[0];
  emxEnsureCapacity_real_T(r6, i);
  nx = r5->size[0];
  for (i = 0; i < nx; i++) {
    r6->data[i] = u->data[r5->data[i] - 1];
  }
  nx = r5->size[0];
  emxFree_int32_T(&r5);
  for (k = 0; k < nx; k++) {
    A = r6->data[k];
    if (r6->data[k] < 0.0) {
      A = -1.0;
    } else if (r6->data[k] > 0.0) {
      A = 1.0;
    } else if (r6->data[k] == 0.0) {
      A = 0.0;
    }
    r6->data[k] = A;
  }
  i = r->size[0];
  r->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r, i);
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r->data[i] = (absu->data[i] > d);
  }
  i = r1->size[0];
  r1->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r1, i);
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r1->data[i] = (absu->data[i] <= cktuning->data[0]);
  }
  i = r2->size[0];
  r2->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r2, i);
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r2->data[i] = (absu->data[i] > d);
  }
  i = r3->size[0];
  r3->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r3, i);
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r3->data[i] = (absu->data[i] <= cktuning->data[0]);
  }
  k = r->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r->data[i] && r1->data[i]) {
      nx++;
    }
  }
  emxInit_int32_T(&r7, 1);
  i = r7->size[0];
  r7->size[0] = nx;
  emxEnsureCapacity_int32_T(r7, i);
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r->data[i] && r1->data[i]) {
      r7->data[nx] = i + 1;
      nx++;
    }
  }
  emxFree_boolean_T(&r1);
  emxFree_boolean_T(&r);
  i = absu->size[0];
  absu->size[0] = x->size[0];
  emxEnsureCapacity_real_T(absu, i);
  nx = x->size[0];
  for (i = 0; i < nx; i++) {
    absu->data[i] = b_a * x->data[i] * r6->data[i] / u->data[r7->data[i] - 1];
  }
  emxFree_real_T(&x);
  emxFree_int32_T(&r7);
  emxFree_real_T(&r6);
  k = r2->size[0];
  nx = 0;
  for (i = 0; i < k; i++) {
    if (r2->data[i] && r3->data[i]) {
      w->data[i] = absu->data[nx];
      nx++;
    }
  }
  emxFree_boolean_T(&r3);
  emxFree_boolean_T(&r2);
  emxFree_real_T(&absu);
  /*  0,			              |u| >= c. */
}

/* End of code generation (HYPwei.c) */
