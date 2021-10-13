/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * OPTrho.c
 *
 * Code generation for function 'OPTrho'
 *
 */

/* Include files */
#include "OPTrho.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Declarations */
static void re_binary_expand_op(emxArray_real_T *r5, double c,
                                const emxArray_real_T *r6, double b_c,
                                const emxArray_real_T *r7, double c_c,
                                const emxArray_real_T *absx, double d_c);

/* Function Definitions */
static void re_binary_expand_op(emxArray_real_T *r5, double c,
                                const emxArray_real_T *r6, double b_c,
                                const emxArray_real_T *r7, double c_c,
                                const emxArray_real_T *absx, double d_c)
{
  emxArray_real_T *r3;
  const double *absx_data;
  const double *r;
  const double *r1;
  double *r2;
  double *r4;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  absx_data = absx->data;
  r = r7->data;
  r1 = r6->data;
  r2 = r5->data;
  emxInit_real_T(&r3, 1);
  i = r3->size[0];
  if (absx->size[0] == 1) {
    if (r7->size[0] == 1) {
      if (r6->size[0] == 1) {
        r3->size[0] = r5->size[0];
      } else {
        r3->size[0] = r6->size[0];
      }
    } else {
      r3->size[0] = r7->size[0];
    }
  } else {
    r3->size[0] = absx->size[0];
  }
  emxEnsureCapacity_real_T(r3, i);
  r4 = r3->data;
  stride_0_0 = (r5->size[0] != 1);
  stride_1_0 = (r6->size[0] != 1);
  stride_2_0 = (r7->size[0] != 1);
  stride_3_0 = (absx->size[0] != 1);
  if (absx->size[0] == 1) {
    if (r7->size[0] == 1) {
      if (r6->size[0] == 1) {
        loop_ub = r5->size[0];
      } else {
        loop_ub = r6->size[0];
      }
    } else {
      loop_ub = r7->size[0];
    }
  } else {
    loop_ub = absx->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    r4[i] = ((((1.792 - 0.972 * r2[i * stride_0_0] / c) +
               0.432 * r1[i * stride_1_0] / b_c) -
              0.052 * r[i * stride_2_0] / c_c) +
             0.002 * absx_data[i * stride_3_0] / d_c) /
            3.25;
  }
  i = r5->size[0];
  r5->size[0] = r3->size[0];
  emxEnsureCapacity_real_T(r5, i);
  r2 = r5->data;
  loop_ub = r3->size[0];
  for (i = 0; i < loop_ub; i++) {
    r2[i] = r4[i];
  }
  emxFree_real_T(&r3);
}

double OPTrho(double u, double c)
{
  emxArray_real_T *r;
  emxArray_real_T *r2;
  emxArray_real_T *r4;
  emxArray_real_T *r6;
  double absx;
  double b_c;
  double c_c;
  double d_c;
  double rhoOPT;
  double tmp_data;
  double *r1;
  double *r3;
  double *r5;
  double *r7;
  int i;
  int trueCount;
  bool b;
  bool b1;
  /* OPTrho computes rho function for optimal weight function */
  /*  */
  /* <a href="matlab: docsearchFS('OPTrho')">Link to the help function</a> */
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
  /*   Optional input arguments: TODO_OPTrho_INPUT_OPTIONS */
  /*   Output: */
  /*  */
  /*    rhoOPT :      residuals after rho filter. Vector. n x 1 vector which
   * contains the Tukey's biweight rho */
  /*                 associated to the residuals or Mahalanobis distances for */
  /*                 the n units of the sample */
  /*                Function OPTrho transforms vector u as follows  */
  /*  */
  /*                |  (1/3.25*c^2) x^2/2 |x|<=2c */
  /*                |    */
  /*    \rho(x,c) = |  (1/3.25) * (1.792 - 0.972 * (x/c)^2 + 0.432 * (x/c)^4 -
   * 0.052 * (x/c)^6 + 0.002 * (x/c)^8)    2c<=|x|<=3c */
  /*                | */
  /*                |   1 |x|>3c                               */
  /*  */
  /*   */
  /*  */
  /*   Remark: Yohai and Zamar (1997)  showed that the $\rho$ function given
   * above */
  /*   is optimal in the following highly desirable sense: the final M estimate
   */
  /*   has a breakdown point of one-half and minimizes the maximum bias under */
  /*   contamination distributions (locally for small fraction of */
  /*   contamination), subject to achieving a desidered nominal asymptotic */
  /*   efficiency when the data are Gaussian. */
  /*  */
  /*  See also HYPrho, HArho, TBrho */
  /*  */
  /*  References: */
  /*  */
  /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics, Theory
   */
  /*  and Methods", Wiley, New York. */
  /*  Riani, M., Cerioli, A. and Torti, F. (2014), On consistency factors and */
  /*  efficiency of robust S-estimators, "TEST", Vol. 23, pp. 356-387. */
  /*  http://dx.doi.org/10.1007/s11749-014-0357-7 */
  /*  Yohai V.J., Zamar R.H. (1997) Optimal locally robust M-estimates of */
  /*  regression. "Journal of Planning and Statistical Inference", Vol. 64, pp.
   */
  /*  309-323. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('OPTrho')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /* { */
  /*     % Plot of rho function.  */
  /*     x=-6:0.01:6; */
  /*     rhoOPT=OPTrho(x,2); */
  /*     plot(x,rhoOPT) */
  /*     xlabel('x','Interpreter','Latex') */
  /*     ylabel('$\rho (x)$','Interpreter','Latex') */
  /*  */
  /* } */
  /*  Beginning of code */
  /*  MATLAB Ccoder instruction to enforce that c is a scalar */
  absx = fabs(u);
  /*  x^2/2 /(3.25c^2) if x <=2*c */
  trueCount = 0;
  if (absx <= 2.0 * c) {
    trueCount = 1;
  }
  emxInit_real_T(&r, 2);
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = trueCount;
  emxEnsureCapacity_real_T(r, i);
  r1 = r->data;
  for (i = 0; i < trueCount; i++) {
    r1[0] = rt_powd_snf(u, 2.0);
  }
  b_c = c * c;
  c_c = 3.25 * b_c;
  for (i = 0; i < trueCount; i++) {
    tmp_data = r1[0] / 2.0 / c_c;
  }
  rhoOPT = 1.0;
  /*  1/(3.25) * ( 1.792 .... +0.002 (r/c)^8 )    if    2c< |x| <3c */
  b = (absx > 2.0 * c);
  b1 = (absx <= 3.0 * c);
  trueCount = 0;
  if (absx <= 2.0 * c) {
    rhoOPT = tmp_data;
  }
  if (b && b1) {
    trueCount = 1;
  }
  c_c = rt_powd_snf(c, 4.0);
  absx = rt_powd_snf(c, 6.0);
  d_c = rt_powd_snf(c, 8.0);
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = trueCount;
  emxEnsureCapacity_real_T(r, i);
  r1 = r->data;
  for (i = 0; i < trueCount; i++) {
    r1[0] = rt_powd_snf(u, 2.0);
  }
  emxInit_real_T(&r2, 2);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = 1;
  r2->size[1] = trueCount;
  emxEnsureCapacity_real_T(r2, i);
  r3 = r2->data;
  for (i = 0; i < trueCount; i++) {
    r3[0] = rt_powd_snf(u, 4.0);
  }
  emxInit_real_T(&r4, 2);
  i = r4->size[0] * r4->size[1];
  r4->size[0] = 1;
  r4->size[1] = trueCount;
  emxEnsureCapacity_real_T(r4, i);
  r5 = r4->data;
  for (i = 0; i < trueCount; i++) {
    r5[0] = rt_powd_snf(u, 6.0);
  }
  emxInit_real_T(&r6, 2);
  i = r6->size[0] * r6->size[1];
  r6->size[0] = 1;
  r6->size[1] = trueCount;
  emxEnsureCapacity_real_T(r6, i);
  r7 = r6->data;
  for (i = 0; i < trueCount; i++) {
    r7[0] = rt_powd_snf(u, 8.0);
  }
  for (i = 0; i < trueCount; i++) {
    tmp_data = ((((1.792 - 0.972 * r1[0] / b_c) + 0.432 * r3[0] / c_c) -
                 0.052 * r5[0] / absx) +
                0.002 * r7[0] / d_c) /
               3.25;
  }
  emxFree_real_T(&r6);
  emxFree_real_T(&r4);
  emxFree_real_T(&r2);
  emxFree_real_T(&r);
  if (b && b1) {
    rhoOPT = tmp_data;
  }
  /*  1 if r >3*c */
  return rhoOPT;
}

void b_OPTrho(const emxArray_real_T *u, const emxArray_real_T *c,
              emxArray_real_T *rhoOPT)
{
  emxArray_boolean_T *r4;
  emxArray_boolean_T *r6;
  emxArray_int32_T *r;
  emxArray_real_T *absx;
  emxArray_real_T *r10;
  emxArray_real_T *r2;
  emxArray_real_T *r8;
  emxArray_real_T *x1;
  const double *c_data;
  const double *u_data;
  double b_c;
  double c_c;
  double d_c;
  double e_c;
  double varargin_1;
  double *absx_data;
  double *r11;
  double *r3;
  double *r9;
  double *rhoOPT_data;
  double *x1_data;
  int i;
  int k;
  int nx;
  int *r1;
  bool *r5;
  bool *r7;
  c_data = c->data;
  u_data = u->data;
  /* OPTrho computes rho function for optimal weight function */
  /*  */
  /* <a href="matlab: docsearchFS('OPTrho')">Link to the help function</a> */
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
  /*   Optional input arguments: TODO_OPTrho_INPUT_OPTIONS */
  /*   Output: */
  /*  */
  /*    rhoOPT :      residuals after rho filter. Vector. n x 1 vector which
   * contains the Tukey's biweight rho */
  /*                 associated to the residuals or Mahalanobis distances for */
  /*                 the n units of the sample */
  /*                Function OPTrho transforms vector u as follows  */
  /*  */
  /*                |  (1/3.25*c^2) x^2/2 |x|<=2c */
  /*                |    */
  /*    \rho(x,c) = |  (1/3.25) * (1.792 - 0.972 * (x/c)^2 + 0.432 * (x/c)^4 -
   * 0.052 * (x/c)^6 + 0.002 * (x/c)^8)    2c<=|x|<=3c */
  /*                | */
  /*                |   1 |x|>3c                               */
  /*  */
  /*   */
  /*  */
  /*   Remark: Yohai and Zamar (1997)  showed that the $\rho$ function given
   * above */
  /*   is optimal in the following highly desirable sense: the final M estimate
   */
  /*   has a breakdown point of one-half and minimizes the maximum bias under */
  /*   contamination distributions (locally for small fraction of */
  /*   contamination), subject to achieving a desidered nominal asymptotic */
  /*   efficiency when the data are Gaussian. */
  /*  */
  /*  See also HYPrho, HArho, TBrho */
  /*  */
  /*  References: */
  /*  */
  /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics, Theory
   */
  /*  and Methods", Wiley, New York. */
  /*  Riani, M., Cerioli, A. and Torti, F. (2014), On consistency factors and */
  /*  efficiency of robust S-estimators, "TEST", Vol. 23, pp. 356-387. */
  /*  http://dx.doi.org/10.1007/s11749-014-0357-7 */
  /*  Yohai V.J., Zamar R.H. (1997) Optimal locally robust M-estimates of */
  /*  regression. "Journal of Planning and Statistical Inference", Vol. 64, pp.
   */
  /*  309-323. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('OPTrho')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /* { */
  /*     % Plot of rho function.  */
  /*     x=-6:0.01:6; */
  /*     rhoOPT=OPTrho(x,2); */
  /*     plot(x,rhoOPT) */
  /*     xlabel('x','Interpreter','Latex') */
  /*     ylabel('$\rho (x)$','Interpreter','Latex') */
  /*  */
  /* } */
  /*  Beginning of code */
  b_c = c_data[0];
  /*  MATLAB Ccoder instruction to enforce that c is a scalar */
  i = rhoOPT->size[0];
  rhoOPT->size[0] = u->size[0];
  emxEnsureCapacity_real_T(rhoOPT, i);
  rhoOPT_data = rhoOPT->data;
  nx = u->size[0];
  for (i = 0; i < nx; i++) {
    rhoOPT_data[i] = 1.0;
  }
  emxInit_real_T(&absx, 1);
  nx = u->size[0];
  i = absx->size[0];
  absx->size[0] = u->size[0];
  emxEnsureCapacity_real_T(absx, i);
  absx_data = absx->data;
  for (k = 0; k < nx; k++) {
    absx_data[k] = fabs(u_data[k]);
  }
  /*  x^2/2 /(3.25c^2) if x <=2*c */
  k = absx->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absx_data[i] <= 2.0 * b_c) {
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
    if (absx_data[i] <= 2.0 * b_c) {
      r1[nx] = i + 1;
      nx++;
    }
  }
  emxInit_real_T(&r2, 1);
  i = r2->size[0];
  r2->size[0] = r->size[0];
  emxEnsureCapacity_real_T(r2, i);
  r3 = r2->data;
  nx = r->size[0];
  for (i = 0; i < nx; i++) {
    varargin_1 = u_data[r1[i] - 1];
    r3[i] = varargin_1 * varargin_1;
  }
  emxFree_int32_T(&r);
  c_c = c_data[0] * c_data[0];
  varargin_1 = 3.25 * c_c;
  nx = r2->size[0];
  for (i = 0; i < nx; i++) {
    r3[i] = r3[i] / 2.0 / varargin_1;
  }
  k = absx->size[0];
  nx = 0;
  for (i = 0; i < k; i++) {
    if (absx_data[i] <= 2.0 * b_c) {
      rhoOPT_data[i] = r3[nx];
      nx++;
    }
  }
  emxInit_boolean_T(&r4, 1);
  /*  1/(3.25) * ( 1.792 .... +0.002 (r/c)^8 )    if    2c< |x| <3c */
  varargin_1 = 2.0 * c_data[0];
  i = r4->size[0];
  r4->size[0] = absx->size[0];
  emxEnsureCapacity_boolean_T(r4, i);
  r5 = r4->data;
  nx = absx->size[0];
  for (i = 0; i < nx; i++) {
    r5[i] = (absx_data[i] > varargin_1);
  }
  emxInit_boolean_T(&r6, 1);
  varargin_1 = 3.0 * c_data[0];
  i = r6->size[0];
  r6->size[0] = absx->size[0];
  emxEnsureCapacity_boolean_T(r6, i);
  r7 = r6->data;
  nx = absx->size[0];
  for (i = 0; i < nx; i++) {
    r7[i] = (absx_data[i] <= varargin_1);
  }
  k = r4->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r5[i] && r7[i]) {
      nx++;
    }
  }
  emxInit_real_T(&x1, 1);
  i = x1->size[0];
  x1->size[0] = nx;
  emxEnsureCapacity_real_T(x1, i);
  x1_data = x1->data;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r5[i] && r7[i]) {
      x1_data[nx] = u_data[i];
      nx++;
    }
  }
  b_c = rt_powd_snf(c_data[0], 4.0);
  d_c = rt_powd_snf(c_data[0], 6.0);
  e_c = rt_powd_snf(c_data[0], 8.0);
  i = r2->size[0];
  r2->size[0] = x1->size[0];
  emxEnsureCapacity_real_T(r2, i);
  r3 = r2->data;
  nx = x1->size[0];
  for (i = 0; i < nx; i++) {
    varargin_1 = x1_data[i];
    r3[i] = varargin_1 * varargin_1;
  }
  emxInit_real_T(&r8, 1);
  i = r8->size[0];
  r8->size[0] = x1->size[0];
  emxEnsureCapacity_real_T(r8, i);
  r9 = r8->data;
  nx = x1->size[0];
  for (i = 0; i < nx; i++) {
    varargin_1 = x1_data[i];
    r9[i] = rt_powd_snf(varargin_1, 4.0);
  }
  emxInit_real_T(&r10, 1);
  i = r10->size[0];
  r10->size[0] = x1->size[0];
  emxEnsureCapacity_real_T(r10, i);
  r11 = r10->data;
  nx = x1->size[0];
  for (i = 0; i < nx; i++) {
    varargin_1 = x1_data[i];
    r11[i] = rt_powd_snf(varargin_1, 6.0);
  }
  i = absx->size[0];
  absx->size[0] = x1->size[0];
  emxEnsureCapacity_real_T(absx, i);
  absx_data = absx->data;
  nx = x1->size[0];
  for (i = 0; i < nx; i++) {
    varargin_1 = x1_data[i];
    absx_data[i] = rt_powd_snf(varargin_1, 8.0);
  }
  emxFree_real_T(&x1);
  if (r2->size[0] == 1) {
    nx = r8->size[0];
  } else {
    nx = r2->size[0];
  }
  if (r2->size[0] == 1) {
    i = r8->size[0];
  } else {
    i = r2->size[0];
  }
  if (i == 1) {
    i = r10->size[0];
  } else if (r2->size[0] == 1) {
    i = r8->size[0];
  } else {
    i = r2->size[0];
  }
  if ((r2->size[0] == r8->size[0]) && (nx == r10->size[0]) &&
      (i == absx->size[0])) {
    nx = r2->size[0];
    for (i = 0; i < nx; i++) {
      r3[i] = ((((1.792 - 0.972 * r3[i] / c_c) + 0.432 * r9[i] / b_c) -
                0.052 * r11[i] / d_c) +
               0.002 * absx_data[i] / e_c) /
              3.25;
    }
  } else {
    re_binary_expand_op(r2, c_c, r8, b_c, r10, d_c, absx, e_c);
    r3 = r2->data;
  }
  emxFree_real_T(&r10);
  emxFree_real_T(&r8);
  emxFree_real_T(&absx);
  k = r4->size[0];
  nx = 0;
  for (i = 0; i < k; i++) {
    if (r5[i] && r7[i]) {
      rhoOPT_data[i] = r3[nx];
      nx++;
    }
  }
  emxFree_real_T(&r2);
  emxFree_boolean_T(&r6);
  emxFree_boolean_T(&r4);
  /*  1 if r >3*c */
}

/* End of code generation (OPTrho.c) */
