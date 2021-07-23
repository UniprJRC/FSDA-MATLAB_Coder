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

/* Function Definitions */
double OPTrho(double u, double c)
{
  emxArray_real_T *y;
  double absx;
  double b_c;
  double b_y_data;
  double c_c;
  double c_y_data;
  double rhoOPT;
  double tmp_data;
  double y_data;
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
  absx = fabs(u);
  /*  x^2/2 /(3.25c^2) if x <=2*c */
  trueCount = 0;
  if (absx <= 2.0 * c) {
    trueCount = 1;
  }
  emxInit_real_T(&y, 2);
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = trueCount;
  emxEnsureCapacity_real_T(y, i);
  if (0 <= trueCount - 1) {
    y->data[0] = u * u;
  }
  b_c = c * c;
  c_c = 3.25 * b_c;
  for (i = 0; i < trueCount; i++) {
    tmp_data = y->data[0] / 2.0 / c_c;
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
    y_data = rt_powd_snf(u, 4.0);
  }
  c_c = rt_powd_snf(c, 4.0);
  if (0 <= trueCount - 1) {
    b_y_data = rt_powd_snf(u, 6.0);
  }
  absx = rt_powd_snf(c, 6.0);
  if (0 <= trueCount - 1) {
    c_y_data = rt_powd_snf(u, 8.0);
  }
  tmp_data = rt_powd_snf(c, 8.0);
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = trueCount;
  emxEnsureCapacity_real_T(y, i);
  if (0 <= trueCount - 1) {
    y->data[0] = u * u;
  }
  trueCount--;
  for (i = 0; i <= trueCount; i++) {
    y_data = ((((1.792 - 0.972 * y->data[0] / b_c) + 0.432 * y_data / c_c) -
               0.052 * b_y_data / absx) +
              0.002 * c_y_data / tmp_data) /
             3.25;
  }
  emxFree_real_T(&y);
  if (b && b1) {
    rhoOPT = y_data;
  }
  /*  1 if r >3*c */
  return rhoOPT;
}

void b_OPTrho(const emxArray_real_T *u, const double c_data[],
              const int c_size[2], emxArray_real_T *rhoOPT)
{
  emxArray_real_T *Y;
  emxArray_real_T *absx;
  emxArray_real_T *b_Y;
  emxArray_real_T *b_y;
  emxArray_real_T *c_Y;
  emxArray_real_T *y;
  double B_data[5];
  double b_tmp_data[5];
  double b_tmp;
  double b_z1_data;
  double x1_data;
  double z1_data;
  int i;
  int k;
  int nx;
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
  i = rhoOPT->size[0];
  rhoOPT->size[0] = u->size[0];
  emxEnsureCapacity_real_T(rhoOPT, i);
  nx = u->size[0];
  for (i = 0; i < nx; i++) {
    rhoOPT->data[i] = 1.0;
  }
  emxInit_real_T(&absx, 1);
  nx = u->size[0];
  i = absx->size[0];
  absx->size[0] = u->size[0];
  emxEnsureCapacity_real_T(absx, i);
  for (k = 0; k < nx; k++) {
    absx->data[k] = fabs(u->data[k]);
  }
  emxInit_real_T(&y, 2);
  /*  x^2/2 /(3.25c^2) if x <=2*c */
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = c_size[1];
  emxEnsureCapacity_real_T(y, i);
  nx = c_size[1];
  for (i = 0; i < nx; i++) {
    y->data[i] = 2.0 * c_data[i];
  }
  trueCount = 0;
  if (absx->data[0] <= y->data[0]) {
    trueCount = 1;
  }
  k = c_size[1];
  x1_data = c_data[0];
  nx = c_size[1];
  for (i = 0; i < nx; i++) {
    b_tmp_data[i] = x1_data * c_data[i];
  }
  emxInit_real_T(&Y, 1);
  emxInit_real_T(&b_y, 1);
  i = b_y->size[0];
  b_y->size[0] = trueCount;
  emxEnsureCapacity_real_T(b_y, i);
  if (0 <= trueCount - 1) {
    b_y->data[0] = u->data[0] * u->data[0];
  }
  for (i = 0; i < trueCount; i++) {
    b_y->data[0] /= 2.0;
  }
  for (i = 0; i < k; i++) {
    B_data[i] = 3.25 * b_tmp_data[i];
  }
  if (trueCount == 0) {
    Y->size[0] = 0;
  } else {
    i = Y->size[0];
    Y->size[0] = 1;
    emxEnsureCapacity_real_T(Y, i);
    Y->data[0] = b_y->data[0] / B_data[0];
  }
  /*  1/(3.25) * ( 1.792 .... +0.002 (r/c)^8 )    if    2c< |x| <3c */
  b = (absx->data[0] > y->data[0]);
  b1 = (absx->data[0] <= 3.0 * c_data[0]);
  trueCount = 0;
  if (absx->data[0] <= y->data[0]) {
    rhoOPT->data[0] = Y->data[0];
  }
  emxFree_real_T(&y);
  if (b && b1) {
    trueCount = 1;
  }
  for (i = 0; i < trueCount; i++) {
    x1_data = u->data[0];
  }
  i = b_y->size[0];
  b_y->size[0] = trueCount;
  emxEnsureCapacity_real_T(b_y, i);
  if (0 <= trueCount - 1) {
    b_y->data[0] = x1_data * x1_data;
  }
  for (i = 0; i < trueCount; i++) {
    b_y->data[0] *= 0.972;
  }
  if (trueCount == 0) {
    Y->size[0] = 0;
  } else {
    i = Y->size[0];
    Y->size[0] = 1;
    emxEnsureCapacity_real_T(Y, i);
    Y->data[0] = b_y->data[0] / b_tmp_data[0];
  }
  i = b_y->size[0];
  b_y->size[0] = trueCount;
  emxEnsureCapacity_real_T(b_y, i);
  if (0 <= trueCount - 1) {
    b_y->data[0] = rt_powd_snf(x1_data, 4.0);
  }
  for (i = 0; i < trueCount; i++) {
    b_y->data[0] *= 0.432;
  }
  emxInit_real_T(&b_Y, 1);
  x1_data = c_data[0];
  nx = c_size[1];
  for (i = 0; i < nx; i++) {
    b_tmp_data[i] = x1_data * c_data[i];
  }
  b_tmp = b_tmp_data[0];
  nx = c_size[1] - 1;
  for (i = 0; i <= nx; i++) {
    b_tmp_data[i] *= b_tmp;
  }
  if (trueCount == 0) {
    b_Y->size[0] = 0;
  } else {
    i = b_Y->size[0];
    b_Y->size[0] = 1;
    emxEnsureCapacity_real_T(b_Y, i);
    b_Y->data[0] = b_y->data[0] / b_tmp_data[0];
    z1_data = rt_powd_snf(u->data[0], 6.0);
  }
  i = b_y->size[0];
  b_y->size[0] = trueCount;
  emxEnsureCapacity_real_T(b_y, i);
  for (i = 0; i < trueCount; i++) {
    b_y->data[0] = 0.052 * z1_data;
  }
  emxInit_real_T(&c_Y, 1);
  k = c_size[1];
  x1_data = c_data[0];
  nx = c_size[1];
  for (i = 0; i < nx; i++) {
    b_tmp_data[i] = x1_data * c_data[i];
  }
  b_tmp = b_tmp_data[0];
  x1_data = b_tmp_data[0];
  for (i = 0; i < k; i++) {
    B_data[i] = b_tmp * (x1_data * b_tmp_data[i]);
  }
  if (trueCount == 0) {
    c_Y->size[0] = 0;
  } else {
    i = c_Y->size[0];
    c_Y->size[0] = 1;
    emxEnsureCapacity_real_T(c_Y, i);
    c_Y->data[0] = b_y->data[0] / B_data[0];
    b_z1_data = rt_powd_snf(u->data[0], 8.0);
  }
  i = b_y->size[0];
  b_y->size[0] = trueCount;
  emxEnsureCapacity_real_T(b_y, i);
  for (i = 0; i < trueCount; i++) {
    b_y->data[0] = 0.002 * b_z1_data;
  }
  x1_data = c_data[0];
  nx = c_size[1];
  for (i = 0; i < nx; i++) {
    b_tmp_data[i] = x1_data * c_data[i];
  }
  b_tmp = b_tmp_data[0];
  nx = c_size[1] - 1;
  for (i = 0; i <= nx; i++) {
    b_tmp_data[i] *= b_tmp;
  }
  b_tmp = b_tmp_data[0];
  for (i = 0; i <= nx; i++) {
    b_tmp_data[i] *= b_tmp;
  }
  if (trueCount == 0) {
    absx->size[0] = 0;
  } else {
    i = absx->size[0];
    absx->size[0] = 1;
    emxEnsureCapacity_real_T(absx, i);
    absx->data[0] = b_y->data[0] / b_tmp_data[0];
  }
  emxFree_real_T(&b_y);
  nx = Y->size[0];
  for (i = 0; i < nx; i++) {
    x1_data = ((((1.792 - Y->data[0]) + b_Y->data[0]) - c_Y->data[0]) +
               absx->data[0]) /
              3.25;
  }
  emxFree_real_T(&c_Y);
  emxFree_real_T(&b_Y);
  emxFree_real_T(&Y);
  emxFree_real_T(&absx);
  if (b && b1) {
    rhoOPT->data[0] = x1_data;
  }
  /*  1 if r >3*c */
}

/* End of code generation (OPTrho.c) */
