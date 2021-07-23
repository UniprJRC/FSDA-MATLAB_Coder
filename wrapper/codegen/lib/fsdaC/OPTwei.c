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
void OPTwei(const emxArray_real_T *u, const double c_data[],
            const int c_size[2], emxArray_real_T *w)
{
  emxArray_real_T *Y;
  emxArray_real_T *absx;
  emxArray_real_T *b_Y;
  emxArray_real_T *b_w;
  emxArray_real_T *y;
  double B_data[5];
  double aBuffer_data[5];
  double b_tmp_data[5];
  double aBuffer;
  double c;
  double x1_data=0;
  double z1_data;
  int b_tmp_size_idx_1;
  int i;
  int loop_ub;
  int nx;
  int trueCount;
  bool b;
  bool b1;
  emxInit_real_T(&b_w, 1);
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
  /*  weights are = 0 if r >3*c */
  i = b_w->size[0];
  b_w->size[0] = u->size[0];
  emxEnsureCapacity_real_T(b_w, i);
  loop_ub = u->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_w->data[i] = 0.0;
  }
  emxInit_real_T(&absx, 1);
  nx = u->size[0];
  i = absx->size[0];
  absx->size[0] = u->size[0];
  emxEnsureCapacity_real_T(absx, i);
  for (loop_ub = 0; loop_ub < nx; loop_ub++) {
    absx->data[loop_ub] = fabs(u->data[loop_ub]);
  }
  emxInit_real_T(&y, 2);
  /*  weights are 1 /(3.25c^2) if |x| <=2*c */
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = c_size[1];
  emxEnsureCapacity_real_T(y, i);
  loop_ub = c_size[1];
  for (i = 0; i < loop_ub; i++) {
    y->data[i] = 2.0 * c_data[i];
  }
  trueCount = 0;
  if (absx->data[0] <= y->data[0]) {
    trueCount = 1;
  }
  b_tmp_size_idx_1 = c_size[1];
  c = c_data[0];
  loop_ub = c_size[1];
  for (i = 0; i < loop_ub; i++) {
    b_tmp_data[i] = c * c_data[i];
  }
  c = 1.0 / (3.25 * b_tmp_data[0]);
  for (i = 0; i < trueCount; i++) {
    b_w->data[0] = c;
  }
  /*  weights are 1/(3.25) * (-1.944* (1/c^2)+1.728 * (x^2/c^4) .... +8*0.002 *
   * (x^6/c^8) )    if    2c< |x| <3c */
  b = (absx->data[0] > y->data[0]);
  b1 = (absx->data[0] <= 3.0 * c_data[0]);
  trueCount = 0;
  emxFree_real_T(&y);
  if (b && b1) {
    trueCount = 1;
  }
  for (i = 0; i < trueCount; i++) {
    x1_data = u->data[0];
  }
  i = absx->size[0];
  absx->size[0] = trueCount;
  emxEnsureCapacity_real_T(absx, i);
  if (0 <= trueCount - 1) {
    absx->data[0] = x1_data * x1_data;
  }
  for (i = 0; i < trueCount; i++) {
    absx->data[0] *= 1.728;
  }
  emxInit_real_T(&Y, 1);
  c = c_data[0];
  loop_ub = c_size[1];
  for (i = 0; i < loop_ub; i++) {
    aBuffer_data[i] = c * c_data[i];
  }
  aBuffer = aBuffer_data[0];
  loop_ub = c_size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    aBuffer_data[i] *= aBuffer;
  }
  if (trueCount == 0) {
    Y->size[0] = 0;
  } else {
    i = Y->size[0];
    Y->size[0] = 1;
    emxEnsureCapacity_real_T(Y, i);
    Y->data[0] = absx->data[0] / aBuffer_data[0];
  }
  i = absx->size[0];
  absx->size[0] = trueCount;
  emxEnsureCapacity_real_T(absx, i);
  if (0 <= trueCount - 1) {
    absx->data[0] = rt_powd_snf(x1_data, 4.0);
  }
  for (i = 0; i < trueCount; i++) {
    absx->data[0] *= 0.312;
  }
  emxInit_real_T(&b_Y, 1);
  nx = c_size[1];
  c = c_data[0];
  loop_ub = c_size[1];
  for (i = 0; i < loop_ub; i++) {
    aBuffer_data[i] = c * c_data[i];
  }
  aBuffer = aBuffer_data[0];
  c = aBuffer_data[0];
  for (i = 0; i < nx; i++) {
    B_data[i] = aBuffer * (c * aBuffer_data[i]);
  }
  if (trueCount == 0) {
    b_Y->size[0] = 0;
  } else {
    i = b_Y->size[0];
    b_Y->size[0] = 1;
    emxEnsureCapacity_real_T(b_Y, i);
    b_Y->data[0] = absx->data[0] / B_data[0];
    z1_data = rt_powd_snf(u->data[0], 6.0);
  }
  i = absx->size[0];
  absx->size[0] = trueCount;
  emxEnsureCapacity_real_T(absx, i);
  for (i = 0; i < trueCount; i++) {
    absx->data[0] = 0.016 * z1_data;
  }
  c = c_data[0];
  loop_ub = c_size[1];
  for (i = 0; i < loop_ub; i++) {
    aBuffer_data[i] = c * c_data[i];
  }
  aBuffer = aBuffer_data[0];
  nx = c_size[1] - 1;
  for (i = 0; i <= nx; i++) {
    aBuffer_data[i] *= aBuffer;
  }
  aBuffer = aBuffer_data[0];
  for (i = 0; i <= nx; i++) {
    aBuffer_data[i] *= aBuffer;
  }
  if (trueCount == 0) {
    absx->size[0] = 0;
  } else {
    c = absx->data[0];
    i = absx->size[0];
    absx->size[0] = 1;
    emxEnsureCapacity_real_T(absx, i);
    absx->data[0] = c / aBuffer_data[0];
  }
  c = -1.944 / b_tmp_data[0];
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    x1_data = (((c + Y->data[0]) - b_Y->data[0]) + absx->data[0]) / 3.25;
  }
  emxFree_real_T(&b_Y);
  emxFree_real_T(&Y);
  emxFree_real_T(&absx);
  if (b && b1) {
    b_w->data[0] = x1_data;
  }
  /*  Rescaled weights so that their maximum is 1 */
  i = w->size[0] * w->size[1];
  w->size[0] = b_w->size[0];
  w->size[1] = c_size[1];
  emxEnsureCapacity_real_T(w, i);
  for (i = 0; i < b_tmp_size_idx_1; i++) {
    loop_ub = b_w->size[0];
    for (nx = 0; nx < loop_ub; nx++) {
      w->data[nx + w->size[0] * i] = b_w->data[nx] * (3.25 * b_tmp_data[i]);
    }
  }
  emxFree_real_T(&b_w);
  /*  0 for |x| >3c */
}

/* End of code generation (OPTwei.c) */
