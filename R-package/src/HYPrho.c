/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * HYPrho.c
 *
 * Code generation for function 'HYPrho'
 *
 */

/* Include files */
#include "HYPrho.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void HYPrho(const emxArray_real_T *u, const emxArray_real_T *cktuning,
            emxArray_real_T *rhoHYP)
{
  emxArray_boolean_T *r2;
  emxArray_boolean_T *r4;
  emxArray_boolean_T *r6;
  emxArray_boolean_T *r8;
  emxArray_int32_T *r;
  emxArray_int32_T *r10;
  emxArray_int32_T *r11;
  emxArray_int32_T *r12;
  emxArray_real_T *absu;
  emxArray_real_T *y;
  const double *cktuning_data;
  const double *u_data;
  double A;
  double B;
  double a_tmp;
  double c;
  double c_tmp;
  double d;
  double varargin_1;
  double *absu_data;
  double *rhoHYP_data;
  double *y_data;
  int i;
  int k;
  int nx;
  int *r1;
  bool *r3;
  bool *r5;
  bool *r7;
  bool *r9;
  cktuning_data = cktuning->data;
  u_data = u->data;
  /* HYPrho computes rho function  using hyperbolic tangent estimator */
  /*  */
  /* <a href="matlab: docsearchFS('HYPrho')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     u:         scaled residuals or Mahalanobis distances. Vector. n x 1 */
  /*                vector containing residuals or Mahalanobis distances */
  /*                for the n units of the sample */
  /*     cktuning :  tuning parameters. Vector of length 2 or of length 5. */
  /*                 cktuning specifies the value of the tuning */
  /*                 constant c (scalar greater than 0 which controls the */
  /*                 robustness/efficiency of the estimator) */
  /*                 and the prefixed value k (sup of the */
  /*                 change-of-variance sensitivity) and the values of */
  /*                 parameters A, B and d. */
  /*                 cktuning(1) = c; */
  /*                 cktuning(2) = k = supCVC(psi,x) x \in R; */
  /*                 cktuning(3)=A; */
  /*                 cktuning(4)=B; */
  /*                 cktuning(5)=d; */
  /*                 Remark - if length(cktuning)==2 values of A, B and d will
   * be */
  /*                 computed automatically */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*   Output: */
  /*  */
  /*    rhoHYP :     rho function for hyperbolic tangent estimator. Vector. */
  /*                 n x 1 vector which contains the hyperbolic rho */
  /*                 associated to the residuals or Mahalanobis distances for */
  /*                 the n units of the sample. */
  /*  */
  /*  More About: */
  /*  */
  /*  Hampel et al. (1981) have introduced a rho function which */
  /*  minimizes the asymptotic variance of the regression M-estimate, subject */
  /*  to a bound on the supremum of the Change of Variance Curve of the */
  /*  estimate. This leads to the Hyperbolic Tangent $\rho$ */
  /*  function, which, for suitable constants $c$, $k$, $A$, $B$ and */
  /*  $d$, is defined as */
  /*  */
  /*  \[ */
  /*   HYPrho(u) = */
  /*   \left\{ */
  /*   \begin{array}{cc} */
  /*    	 u^2/2 &	        |u| \leq d, \\ */
  /*    d^2/2 -2 \frac{A}{B} \log  \left\{ \cosh \left[ 0.5 \sqrt{ \frac{(k - 1)
   * B^2}{A} } (c - |u|) \right] \right\} & \\ */
  /*                           +2 \frac{A}{B}\log \left\{  \cosh \left[
   * 0.5\sqrt{\frac{(k - 1)  B^2}{A}}(c -d)\right] \right\} &  \\ */
  /*                 &                               d \leq |u| <  c, \\ */
  /*                  d^2/2 +2 \frac{A}{B} \log \left\{ \cosh \left[ 0.5 \sqrt{
   * \frac{(k - 1)  B^2}{A} }(c -d) \right] \right\}	 & */
  /*                                                         |u| \geq c. \\ */
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
   * 2*c*normpdf(c) <1$ */
  /*  */
  /*  See also TBrho, HArho, OPTrho */
  /*  */
  /*  References: */
  /*  */
  /*  Hampel, F.R., Rousseeuw, P.J. and  Ronchetti E. (1981), */
  /*  The Change-of-Variance Curve and Optimal Redescending M-Estimators, */
  /*  "Journal of the American Statistical Association", Vol. 76, */
  /*  pp. 643-648 [HRR] */
  /*  */
  /*  Riani, M., Cerioli, A., Atkinson, A.C. and Perrotta, D. (2014), Monitoring
   */
  /*  Robust Regression, "Electronic Journal of Statistics", Vol. 8, pp.
   * 646-677. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('HYPrho')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /* { */
  /*  */
  /*     % Plot of rho function for hyperbolic tangent estimator. */
  /*     x=-8:0.001:8; */
  /*     ctuning=6; */
  /*     ktuning=4.5; */
  /*     rhoHYP=HYPrho(x,[ctuning,ktuning]); */
  /*     plot(x,rhoHYP) */
  /*     xlabel('x','Interpreter','Latex') */
  /*     ylabel(' Hyperbolic $\rho(x) $','Interpreter','Latex') */
  /*  */
  /* } */
  /* { */
  /*     % Parameters associated to a value of bdp=1/2. */
  /*     c=2.158325031399727 */
  /*     k=4; */
  /*     A=0.000162707412432; */
  /*     B=0.006991738279441 */
  /*     d=0.016982948780061 */
  /*     x=-8:0.001:8; */
  /*     rhoHYP=HYPrho(x,[c,k,A,B,d]); */
  /*     plot(x,rhoHYP) */
  /*     xlabel('x','Interpreter','Latex') */
  /*     ylabel(' Hyperbolic $\rho(x) $','Interpreter','Latex') */
  /*  */
  /* } */
  /*  Beginning of code */
  if (cktuning->size[0] > 2) {
    A = cktuning_data[2];
    B = cktuning_data[3];
    d = cktuning_data[4];
  } else {
    A = 1.0;
    B = 1.0;
    d = 1.0;
    /*  necessary for MATLAB coder initialization */
    /*  For example if c=4 and k=5 */
    /*      A = 0.857044; */
    /*      B = 0.911135; */
    /*      d =1.803134; */
    /*  see Table 2 of HRR */
  }
  i = rhoHYP->size[0];
  rhoHYP->size[0] = u->size[0];
  emxEnsureCapacity_real_T(rhoHYP, i);
  rhoHYP_data = rhoHYP->data;
  nx = u->size[0];
  for (i = 0; i < nx; i++) {
    rhoHYP_data[i] = 0.0;
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
  k = absu->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absu_data[i] <= d) {
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
    if (absu_data[i] <= d) {
      r1[nx] = i + 1;
      nx++;
    }
  }
  emxInit_real_T(&y, 1);
  i = y->size[0];
  y->size[0] = r->size[0];
  emxEnsureCapacity_real_T(y, i);
  y_data = y->data;
  nx = r->size[0];
  for (i = 0; i < nx; i++) {
    varargin_1 = u_data[r1[i] - 1];
    y_data[i] = varargin_1 * varargin_1;
  }
  emxFree_int32_T(&r);
  nx = y->size[0];
  for (i = 0; i < nx; i++) {
    y_data[i] /= 2.0;
  }
  k = absu->size[0];
  nx = 0;
  for (i = 0; i < k; i++) {
    if (absu_data[i] <= d) {
      rhoHYP_data[i] = y_data[nx];
      nx++;
    }
  }
  emxInit_boolean_T(&r2, 1);
  /*                    d <= |u| < c, */
  i = r2->size[0];
  r2->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r2, i);
  r3 = r2->data;
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r3[i] = (absu_data[i] > d);
  }
  emxInit_boolean_T(&r4, 1);
  i = r4->size[0];
  r4->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r4, i);
  r5 = r4->data;
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r5[i] = (absu_data[i] <= cktuning_data[0]);
  }
  emxInit_boolean_T(&r6, 1);
  i = r6->size[0];
  r6->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r6, i);
  r7 = r6->data;
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r7[i] = (absu_data[i] > d);
  }
  emxInit_boolean_T(&r8, 1);
  i = r8->size[0];
  r8->size[0] = absu->size[0];
  emxEnsureCapacity_boolean_T(r8, i);
  r9 = r8->data;
  nx = absu->size[0];
  for (i = 0; i < nx; i++) {
    r9[i] = (absu_data[i] <= cktuning_data[0]);
  }
  k = r2->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r3[i] && r5[i]) {
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
    if (r3[i] && r5[i]) {
      r1[nx] = i + 1;
      nx++;
    }
  }
  emxFree_boolean_T(&r4);
  emxFree_boolean_T(&r2);
  varargin_1 = 0.5 * sqrt((cktuning_data[1] - 1.0) * (B * B) / A);
  i = y->size[0];
  y->size[0] = r10->size[0];
  emxEnsureCapacity_real_T(y, i);
  y_data = y->data;
  nx = r10->size[0];
  for (i = 0; i < nx; i++) {
    y_data[i] = varargin_1 * (cktuning_data[0] - absu_data[r1[i] - 1]);
  }
  emxFree_int32_T(&r10);
  a_tmp = 2.0 * (A / B);
  nx = y->size[0];
  for (k = 0; k < nx; k++) {
    y_data[k] = cosh(y_data[k]);
  }
  k = r6->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r7[i] && r9[i]) {
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
    if (r7[i] && r9[i]) {
      r1[nx] = i + 1;
      nx++;
    }
  }
  emxFree_boolean_T(&r8);
  emxFree_boolean_T(&r6);
  nx = y->size[0];
  for (k = 0; k < nx; k++) {
    y_data[k] = log(y_data[k]);
  }
  c_tmp = d * d;
  c = c_tmp / 2.0;
  d = log(cosh(varargin_1 * (cktuning_data[0] - d)));
  varargin_1 = 2.0 * A / B * d;
  nx = y->size[0];
  for (i = 0; i < nx; i++) {
    rhoHYP_data[r1[i] - 1] = (c - a_tmp * y_data[i]) + varargin_1;
  }
  emxFree_real_T(&y);
  emxFree_int32_T(&r11);
  /* |u| >= c. */
  k = absu->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absu_data[i] > cktuning_data[0]) {
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
    if (absu_data[i] > cktuning_data[0]) {
      r1[nx] = i + 1;
      nx++;
    }
  }
  emxFree_real_T(&absu);
  nx = r12->size[0];
  for (i = 0; i < nx; i++) {
    rhoHYP_data[r1[i] - 1] = c_tmp / 2.0 + a_tmp * d;
  }
  emxFree_int32_T(&r12);
}

/* End of code generation (HYPrho.c) */
