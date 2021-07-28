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

/* Function Definitions */
void OPTwei(const emxArray_real_T *u, const double c_data[], emxArray_real_T *w)
{
  emxArray_boolean_T *r1;
  emxArray_boolean_T *r2;
  emxArray_int32_T *r;
  emxArray_real_T *absx;
  emxArray_real_T *b_y;
  emxArray_real_T *x1;
  emxArray_real_T *y;
  double b_c;
  double c;
  double c_c;
  double c_tmp;
  double d;
  int i;
  int k;
  int nx;
  /* OPTwei computes weight function psi(u)/u for optimal weight function */
  /*  */
  /* <a href="matlab: docsearchFS('OPTwei')">Link to the help function</a> */
  /*  */
  /*  */
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
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
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
  nx = u->size[0];
  for (i = 0; i < nx; i++) {
    w->data[i] = 0.0;
  }
  emxInit_real_T(&absx, 1);
  nx = u->size[0];
  i = absx->size[0];
  absx->size[0] = u->size[0];
  emxEnsureCapacity_real_T(absx, i);
  for (k = 0; k < nx; k++) {
    absx->data[k] = fabs(u->data[k]);
  }
  /*  weights are 1 /(3.25c^2) if |x| <=2*c */
  k = absx->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absx->data[i] <= 2.0 * c_data[0]) {
      nx++;
    }
  }
  emxInit_int32_T(&r, 1);
  i = r->size[0];
  r->size[0] = nx;
  emxEnsureCapacity_int32_T(r, i);
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absx->data[i] <= 2.0 * c_data[0]) {
      r->data[nx] = i + 1;
      nx++;
    }
  }
  c_tmp = c_data[0] * c_data[0];
  nx = r->size[0];
  for (i = 0; i < nx; i++) {
    w->data[r->data[i] - 1] = 1.0 / (3.25 * c_tmp);
  }
  emxFree_int32_T(&r);
  emxInit_boolean_T(&r1, 1);
  /*  weights are 1/(3.25) * (-1.944* (1/c^2)+1.728 * (x^2/c^4) .... +8*0.002 *
   * (x^6/c^8) )    if    2c< |x| <3c */
  d = 2.0 * c_data[0];
  i = r1->size[0];
  r1->size[0] = absx->size[0];
  emxEnsureCapacity_boolean_T(r1, i);
  nx = absx->size[0];
  for (i = 0; i < nx; i++) {
    r1->data[i] = (absx->data[i] > d);
  }
  emxInit_boolean_T(&r2, 1);
  d = 3.0 * c_data[0];
  i = r2->size[0];
  r2->size[0] = absx->size[0];
  emxEnsureCapacity_boolean_T(r2, i);
  nx = absx->size[0];
  for (i = 0; i < nx; i++) {
    r2->data[i] = (absx->data[i] <= d);
  }
  k = r1->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r1->data[i] && r2->data[i]) {
      nx++;
    }
  }
  emxInit_real_T(&x1, 1);
  i = x1->size[0];
  x1->size[0] = nx;
  emxEnsureCapacity_real_T(x1, i);
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r1->data[i] && r2->data[i]) {
      x1->data[nx] = u->data[i];
      nx++;
    }
  }
  c = rt_powd_snf(c_data[0], 4.0);
  b_c = rt_powd_snf(c_data[0], 6.0);
  c_c = rt_powd_snf(c_data[0], 8.0);
  i = absx->size[0];
  absx->size[0] = x1->size[0];
  emxEnsureCapacity_real_T(absx, i);
  nx = x1->size[0];
  for (k = 0; k < nx; k++) {
    absx->data[k] = x1->data[k] * x1->data[k];
  }
  emxInit_real_T(&y, 1);
  i = y->size[0];
  y->size[0] = x1->size[0];
  emxEnsureCapacity_real_T(y, i);
  nx = x1->size[0];
  for (k = 0; k < nx; k++) {
    y->data[k] = rt_powd_snf(x1->data[k], 4.0);
  }
  emxInit_real_T(&b_y, 1);
  i = b_y->size[0];
  b_y->size[0] = x1->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  nx = x1->size[0];
  for (k = 0; k < nx; k++) {
    b_y->data[k] = rt_powd_snf(x1->data[k], 6.0);
  }
  emxFree_real_T(&x1);
  d = -1.944 / c_tmp;
  nx = absx->size[0];
  for (i = 0; i < nx; i++) {
    absx->data[i] =
        (((d + 1.728 * absx->data[i] / c) - 0.312 * y->data[i] / b_c) +
         0.016 * b_y->data[i] / c_c) /
        3.25;
  }
  emxFree_real_T(&b_y);
  emxFree_real_T(&y);
  k = r1->size[0];
  nx = 0;
  for (i = 0; i < k; i++) {
    if (r1->data[i] && r2->data[i]) {
      w->data[i] = absx->data[nx];
      nx++;
    }
  }
  emxFree_boolean_T(&r2);
  emxFree_boolean_T(&r1);
  emxFree_real_T(&absx);
  /*  Rescaled weights so that their maximum is 1 */
  c_tmp = 3.25 * (c_data[0] * c_data[0]);
  nx = w->size[0];
  for (i = 0; i < nx; i++) {
    w->data[i] *= c_tmp;
  }
  /*  0 for |x| >3c */
}

/* End of code generation (OPTwei.c) */
