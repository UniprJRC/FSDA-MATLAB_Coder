/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * OPTwei.c
 *
 * Code generation for function 'OPTwei'
 *
 */

/* Include files */
#include "OPTwei.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Declarations */
static void se_binary_expand_op(emxArray_real_T *r4, double c, double b_c,
                                const emxArray_real_T *r5, double c_c,
                                const emxArray_real_T *absx, double d_c);

/* Function Definitions */
static void se_binary_expand_op(emxArray_real_T *r4, double c, double b_c,
                                const emxArray_real_T *r5, double c_c,
                                const emxArray_real_T *absx, double d_c)
{
  emxArray_real_T *r2;
  const double *absx_data;
  const double *r;
  double d;
  double *r1;
  double *r3;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  absx_data = absx->data;
  r = r5->data;
  r1 = r4->data;
  emxInit_real_T(&r2, 1);
  d = -1.944 / c;
  i = r2->size[0];
  if (absx->size[0] == 1) {
    if (r5->size[0] == 1) {
      r2->size[0] = r4->size[0];
    } else {
      r2->size[0] = r5->size[0];
    }
  } else {
    r2->size[0] = absx->size[0];
  }
  emxEnsureCapacity_real_T(r2, i);
  r3 = r2->data;
  stride_0_0 = (r4->size[0] != 1);
  stride_1_0 = (r5->size[0] != 1);
  stride_2_0 = (absx->size[0] != 1);
  if (absx->size[0] == 1) {
    if (r5->size[0] == 1) {
      loop_ub = r4->size[0];
    } else {
      loop_ub = r5->size[0];
    }
  } else {
    loop_ub = absx->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    r3[i] = (((d + 1.728 * r1[i * stride_0_0] / b_c) -
              0.312 * r[i * stride_1_0] / c_c) +
             0.016 * absx_data[i * stride_2_0] / d_c) /
            3.25;
  }
  i = r4->size[0];
  r4->size[0] = r2->size[0];
  emxEnsureCapacity_real_T(r4, i);
  r1 = r4->data;
  loop_ub = r2->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1[i] = r3[i];
  }
  emxFree_real_T(&r2);
}

void OPTwei(const emxArray_real_T *u, const emxArray_real_T *c,
            emxArray_real_T *w)
{
  emxArray_boolean_T *r2;
  emxArray_boolean_T *r4;
  emxArray_int32_T *r;
  emxArray_real_T *absx;
  emxArray_real_T *r6;
  emxArray_real_T *r8;
  emxArray_real_T *x1;
  const double *c_data;
  const double *u_data;
  double b_c;
  double c_c;
  double c_tmp;
  double d_c;
  double varargin_1;
  double *absx_data;
  double *r7;
  double *r9;
  double *w_data;
  double *x1_data;
  int i;
  int k;
  int nx;
  int *r1;
  bool *r3;
  bool *r5;
  c_data = c->data;
  u_data = u->data;
  /* OPTwei computes weight function psi(u)/u for optimal weight function */
  /*  */
  /* <a href="matlab: docsearchFS('OPTwei')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
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
  /*     w :         n x 1 vector which contains the optimal weights */
  /*                 associated to the scaled residuals or Mahalanobis */
  /*                 distances for the n units of the sample.  */
  /*  */
  /*  More About: */
  /*  */
  /*  Function OPTwei transforms vector u as follows */
  /*  */
  /*   \[ */
  /*    OPTwei(u,c) = \left\{ */
  /*     \begin{array}{cc} */
  /*                   1/(3.25*c^2)                      &           |u| \leq  2
   * \\ */
  /*                  */
  /*     (1/3.25) \left( -1.944 * 1 / c^2 + 1.728  \frac{u^2}{c^4} -
   * 0.312\frac{u^2}{c^6} + 0.016 \frac{u.^6}{c^8} \right) &  \qquad  2c\leq
   * |u|\leq 3c \\ */
  /*                  */
  /*                    0 */
  /*  \end{array} */
  /*     \right. */
  /*   \] */
  /*  */
  /*   Remark: Yohai and Zamar (1997)  showed that the optimal $\rho$ function
   */
  /*   is optimal in the following highly desirable sense: the final M estimate
   */
  /*   has a breakdown point of one-half and minimizes the maximum bias under */
  /*   contamination distributions (locally for small fraction of */
  /*   contamination), subject to achieving a desidered nominal asymptotic */
  /*   efficiency when the data are Gaussian. */
  /*  */
  /*  See also: HYPwei, HAwei, TBwei */
  /*  */
  /*  References: */
  /*  */
  /*  Yohai V.J., Zamar R.H. (1997) Optimal locally robust M-estimates of */
  /*  regression. "Journal of Planning and Statistical Inference", Vol. 64, pp.
   */
  /*  309-323. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('OPTwei')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /* { */
  /*     % Plot of weight function. */
  /*     x=-6:0.1:6; */
  /*     weiOPT=OPTwei(x,2); */
  /*     plot(x,weiOPT) */
  /*     xlabel('x','Interpreter','Latex') */
  /*     ylabel('$W (x) =\psi(x)/x$','Interpreter','Latex') */
  /*  */
  /* } */
  /*  Beginning of code */
  /*  MATLAB Ccoder instruction to enforce that c is a scalar */
  /*  weights are = 0 if r >3*c */
  i = w->size[0];
  w->size[0] = u->size[0];
  emxEnsureCapacity_real_T(w, i);
  w_data = w->data;
  nx = u->size[0];
  for (i = 0; i < nx; i++) {
    w_data[i] = 0.0;
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
  /*  weights are 1 /(3.25c^2) if |x| <=2*c */
  k = absx->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absx_data[i] <= 2.0 * c_data[0]) {
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
    if (absx_data[i] <= 2.0 * c_data[0]) {
      r1[nx] = i + 1;
      nx++;
    }
  }
  c_tmp = c_data[0] * c_data[0];
  nx = r->size[0];
  for (i = 0; i < nx; i++) {
    w_data[r1[i] - 1] = 1.0 / (3.25 * c_tmp);
  }
  emxFree_int32_T(&r);
  emxInit_boolean_T(&r2, 1);
  /*  weights are 1/(3.25) * (-1.944* (1/c^2)+1.728 * (x^2/c^4) .... +8*0.002 *
   * (x^6/c^8) )    if    2c< |x| <3c */
  varargin_1 = 2.0 * c_data[0];
  i = r2->size[0];
  r2->size[0] = absx->size[0];
  emxEnsureCapacity_boolean_T(r2, i);
  r3 = r2->data;
  nx = absx->size[0];
  for (i = 0; i < nx; i++) {
    r3[i] = (absx_data[i] > varargin_1);
  }
  emxInit_boolean_T(&r4, 1);
  varargin_1 = 3.0 * c_data[0];
  i = r4->size[0];
  r4->size[0] = absx->size[0];
  emxEnsureCapacity_boolean_T(r4, i);
  r5 = r4->data;
  nx = absx->size[0];
  for (i = 0; i < nx; i++) {
    r5[i] = (absx_data[i] <= varargin_1);
  }
  k = r2->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r3[i] && r5[i]) {
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
    if (r3[i] && r5[i]) {
      x1_data[nx] = u_data[i];
      nx++;
    }
  }
  emxInit_real_T(&r6, 1);
  b_c = rt_powd_snf(c_data[0], 4.0);
  c_c = rt_powd_snf(c_data[0], 6.0);
  d_c = rt_powd_snf(c_data[0], 8.0);
  i = r6->size[0];
  r6->size[0] = x1->size[0];
  emxEnsureCapacity_real_T(r6, i);
  r7 = r6->data;
  nx = x1->size[0];
  for (i = 0; i < nx; i++) {
    varargin_1 = x1_data[i];
    r7[i] = varargin_1 * varargin_1;
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
  i = absx->size[0];
  absx->size[0] = x1->size[0];
  emxEnsureCapacity_real_T(absx, i);
  absx_data = absx->data;
  nx = x1->size[0];
  for (i = 0; i < nx; i++) {
    varargin_1 = x1_data[i];
    absx_data[i] = rt_powd_snf(varargin_1, 6.0);
  }
  emxFree_real_T(&x1);
  if (r6->size[0] == 1) {
    nx = r8->size[0];
  } else {
    nx = r6->size[0];
  }
  if ((r6->size[0] == r8->size[0]) && (nx == absx->size[0])) {
    varargin_1 = -1.944 / c_tmp;
    nx = r6->size[0];
    for (i = 0; i < nx; i++) {
      r7[i] = (((varargin_1 + 1.728 * r7[i] / b_c) - 0.312 * r9[i] / c_c) +
               0.016 * absx_data[i] / d_c) /
              3.25;
    }
  } else {
    se_binary_expand_op(r6, c_tmp, b_c, r8, c_c, absx, d_c);
    r7 = r6->data;
  }
  emxFree_real_T(&r8);
  emxFree_real_T(&absx);
  k = r2->size[0];
  nx = 0;
  for (i = 0; i < k; i++) {
    if (r3[i] && r5[i]) {
      w_data[i] = r7[nx];
      nx++;
    }
  }
  emxFree_real_T(&r6);
  emxFree_boolean_T(&r4);
  emxFree_boolean_T(&r2);
  /*  Rescaled weights so that their maximum is 1 */
  varargin_1 = 3.25 * (c_data[0] * c_data[0]);
  nx = w->size[0];
  for (i = 0; i < nx; i++) {
    w_data[i] *= varargin_1;
  }
  /*  0 for |x| >3c */
}

/* End of code generation (OPTwei.c) */
