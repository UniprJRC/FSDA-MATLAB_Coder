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
  /*  MATLAB Ccoder instruction to enforce that c is a scalar */
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
              emxArray_real_T *rhoOPT)
{
  emxArray_boolean_T *r1;
  emxArray_boolean_T *r2;
  emxArray_int32_T *r;
  emxArray_real_T *absx;
  emxArray_real_T *b;
  emxArray_real_T *b_y;
  emxArray_real_T *x1;
  emxArray_real_T *y;
  double b_c;
  double c;
  double c_c;
  double y_tmp;
  int i;
  int k;
  int nx;
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
  c = c_data[0];
  /*  MATLAB Ccoder instruction to enforce that c is a scalar */
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
  /*  x^2/2 /(3.25c^2) if x <=2*c */
  k = absx->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absx->data[i] <= 2.0 * c) {
      nx++;
    }
  }
  emxInit_int32_T(&r, 1);
  i = r->size[0];
  r->size[0] = nx;
  emxEnsureCapacity_int32_T(r, i);
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (absx->data[i] <= 2.0 * c) {
      r->data[nx] = i + 1;
      nx++;
    }
  }
  emxInit_real_T(&y, 1);
  i = y->size[0];
  y->size[0] = r->size[0];
  emxEnsureCapacity_real_T(y, i);
  nx = r->size[0];
  for (k = 0; k < nx; k++) {
    y_tmp = u->data[r->data[k] - 1];
    y->data[k] = y_tmp * y_tmp;
  }
  emxFree_int32_T(&r);
  b_c = c_data[0] * c_data[0];
  y_tmp = 3.25 * b_c;
  nx = y->size[0];
  for (i = 0; i < nx; i++) {
    y->data[i] = y->data[i] / 2.0 / y_tmp;
  }
  k = absx->size[0];
  nx = 0;
  for (i = 0; i < k; i++) {
    if (absx->data[i] <= 2.0 * c) {
      rhoOPT->data[i] = y->data[nx];
      nx++;
    }
  }
  emxInit_boolean_T(&r1, 1);
  /*  1/(3.25) * ( 1.792 .... +0.002 (r/c)^8 )    if    2c< |x| <3c */
  y_tmp = 2.0 * c_data[0];
  i = r1->size[0];
  r1->size[0] = absx->size[0];
  emxEnsureCapacity_boolean_T(r1, i);
  nx = absx->size[0];
  for (i = 0; i < nx; i++) {
    r1->data[i] = (absx->data[i] > y_tmp);
  }
  emxInit_boolean_T(&r2, 1);
  y_tmp = 3.0 * c_data[0];
  i = r2->size[0];
  r2->size[0] = absx->size[0];
  emxEnsureCapacity_boolean_T(r2, i);
  nx = absx->size[0];
  for (i = 0; i < nx; i++) {
    r2->data[i] = (absx->data[i] <= y_tmp);
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
  emxInit_real_T(&b, 1);
  c = rt_powd_snf(c_data[0], 4.0);
  y_tmp = rt_powd_snf(c_data[0], 6.0);
  i = b->size[0];
  b->size[0] = x1->size[0];
  emxEnsureCapacity_real_T(b, i);
  nx = x1->size[0];
  for (k = 0; k < nx; k++) {
    b->data[k] = rt_powd_snf(x1->data[k], 8.0);
  }
  c_c = rt_powd_snf(c_data[0], 8.0);
  i = y->size[0];
  y->size[0] = x1->size[0];
  emxEnsureCapacity_real_T(y, i);
  nx = x1->size[0];
  for (k = 0; k < nx; k++) {
    y->data[k] = x1->data[k] * x1->data[k];
  }
  i = absx->size[0];
  absx->size[0] = x1->size[0];
  emxEnsureCapacity_real_T(absx, i);
  nx = x1->size[0];
  for (k = 0; k < nx; k++) {
    absx->data[k] = rt_powd_snf(x1->data[k], 4.0);
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
  nx = y->size[0];
  for (i = 0; i < nx; i++) {
    y->data[i] =
        ((((1.792 - 0.972 * y->data[i] / b_c) + 0.432 * absx->data[i] / c) -
          0.052 * b_y->data[i] / y_tmp) +
         0.002 * b->data[i] / c_c) /
        3.25;
  }
  emxFree_real_T(&b_y);
  emxFree_real_T(&b);
  emxFree_real_T(&absx);
  k = r1->size[0];
  nx = 0;
  for (i = 0; i < k; i++) {
    if (r1->data[i] && r2->data[i]) {
      rhoOPT->data[i] = y->data[nx];
      nx++;
    }
  }
  emxFree_real_T(&y);
  emxFree_boolean_T(&r2);
  emxFree_boolean_T(&r1);
  /*  1 if r >3*c */
}

/* End of code generation (OPTrho.c) */
