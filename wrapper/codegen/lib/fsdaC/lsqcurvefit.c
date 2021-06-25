/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: lsqcurvefit.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "lsqcurvefit.h"
#include "LTSts.h"
#include "checkStoppingCriteria.h"
#include "driver.h"
#include "factoryConstruct.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_types.h"
#include "hasFiniteBounds.h"
#include "jacobianFiniteDifference.h"
#include "linearLeastSquares.h"
#include "minOrMax.h"
#include "projectBox.h"
#include "rt_nonfinite.h"
#include "xgemv.h"
#include "xnrm2.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : captured_var *fun_workspace_trend
 *                captured_var *fun_workspace_seasonal
 *                captured_var *fun_workspace_s
 *                c_captured_var *fun_workspace_yhatseaso
 *                c_captured_var *fun_workspace_Xseasof
 *                captured_var *fun_workspace_varampl
 *                c_captured_var *fun_workspace_Seqf
 *                captured_var *fun_workspace_nexpl
 *                b_captured_var *fun_workspace_isemptyX
 *                c_captured_var *fun_workspace_Xf
 *                captured_var *fun_workspace_lshiftYN
 *                c_captured_var *fun_workspace_Xlshiftf
 *                const emxArray_real_T *x0
 *                const emxArray_real_T *xdata
 *                const emxArray_real_T *ydata
 *                const emxArray_real_T *lb
 *                const emxArray_real_T *ub
 *                emxArray_real_T *x
 *                double *resnorm
 *                emxArray_real_T *residual
 *                double *exitflag
 *                e_struct_T *output
 *                b_struct_T *lambda
 *                emxArray_real_T *jacobian
 * Return Type  : void
 */
void lsqcurvefit(
    captured_var *fun_workspace_trend, captured_var *fun_workspace_seasonal,
    captured_var *fun_workspace_s, c_captured_var *fun_workspace_yhatseaso,
    c_captured_var *fun_workspace_Xseasof, captured_var *fun_workspace_varampl,
    c_captured_var *fun_workspace_Seqf, captured_var *fun_workspace_nexpl,
    b_captured_var *fun_workspace_isemptyX, c_captured_var *fun_workspace_Xf,
    captured_var *fun_workspace_lshiftYN,
    c_captured_var *fun_workspace_Xlshiftf, const emxArray_real_T *x0,
    const emxArray_real_T *xdata, const emxArray_real_T *ydata,
    const emxArray_real_T *lb, const emxArray_real_T *ub, emxArray_real_T *x,
    double *resnorm, emxArray_real_T *residual, double *exitflag,
    e_struct_T *output, b_struct_T *lambda, emxArray_real_T *jacobian)
{
  static const char b_cv[19] = {'l', 'e', 'v', 'e', 'n', 'b', 'e',
                                'r', 'g', '-', 'm', 'a', 'r', 'q',
                                'u', 'a', 'r', 'd', 't'};
  static const char t1_FiniteDifferenceType[7] = {'f', 'o', 'r', 'w',
                                                  'a', 'r', 'd'};
  c_captured_var *c_this_workspace_fun_workspace_;
  emxArray_boolean_T *hasLB;
  emxArray_boolean_T *hasUB;
  emxArray_real_T c_dx;
  emxArray_real_T *F_temp;
  emxArray_real_T *augJacobian;
  emxArray_real_T *b_dx;
  emxArray_real_T *dx;
  emxArray_real_T *fNew;
  emxArray_real_T *gradf;
  emxArray_real_T *rhs;
  emxArray_real_T *xp;
  h_struct_T FiniteDifferences;
  h_struct_T b_FiniteDifferences;
  double b_gamma;
  double funDiff;
  double minWidth;
  double projSteepestDescentInfNorm;
  double relFactor;
  double resnormNew;
  int b_exitflag;
  int d_dx;
  int funcCount;
  int iter;
  int ixlast;
  int k;
  int loop_ub;
  int m;
  int m_temp;
  int n;
  int options_MaxFunctionEvaluations;
  bool b_hasFiniteBounds;
  bool evalOK;
  bool exitg1;
  bool guard1 = false;
  bool stepSuccessful;
  emxInit_real_T(&gradf, 1);
  emxInit_real_T(&dx, 2);
  emxInitStruct_struct_T3(&FiniteDifferences);
  c_this_workspace_fun_workspace_ = fun_workspace_yhatseaso;
  n = x0->size[0];
  k = gradf->size[0];
  gradf->size[0] = x0->size[0];
  emxEnsureCapacity_real_T(gradf, k);
  k = dx->size[0] * dx->size[1];
  dx->size[0] = x0->size[0];
  dx->size[1] = 1;
  emxEnsureCapacity_real_T(dx, k);
  loop_ub = x0->size[0];
  for (k = 0; k < loop_ub; k++) {
    dx->data[k] = rtInf;
  }
  funDiff = rtInf;
  iter = 0;
  options_MaxFunctionEvaluations = 200 * x0->size[0];
  emxInit_real_T(&F_temp, 1);
  if ((lb->size[0] != 0) && (ub->size[0] != 0)) {
    k = F_temp->size[0];
    F_temp->size[0] = ub->size[0];
    emxEnsureCapacity_real_T(F_temp, k);
    loop_ub = ub->size[0];
    for (k = 0; k < loop_ub; k++) {
      F_temp->data[k] = ub->data[k] - lb->data[k];
    }
    minWidth = c_minimum(F_temp);
  } else {
    minWidth = rtInf;
  }
  emxInit_boolean_T(&hasLB, 1);
  emxInit_boolean_T(&hasUB, 1);
  k = hasLB->size[0];
  hasLB->size[0] = x0->size[0];
  emxEnsureCapacity_boolean_T(hasLB, k);
  k = hasUB->size[0];
  hasUB->size[0] = x0->size[0];
  emxEnsureCapacity_boolean_T(hasUB, k);
  b_hasFiniteBounds = hasFiniteBounds(x0->size[0], hasLB, hasUB, lb, ub);
  emxFree_boolean_T(&hasUB);
  emxFree_boolean_T(&hasLB);
  if ((!b_hasFiniteBounds) || (minWidth < 0.0)) {
    k = x->size[0];
    x->size[0] = x0->size[0];
    emxEnsureCapacity_real_T(x, k);
    loop_ub = x0->size[0];
    for (k = 0; k < loop_ub; k++) {
      x->data[k] = x0->data[k];
    }
  } else {
    k = x->size[0];
    x->size[0] = x0->size[0];
    emxEnsureCapacity_real_T(x, k);
    loop_ub = x0->size[0];
    for (k = 0; k < loop_ub; k++) {
      x->data[k] = x0->data[k];
    }
  }
  likyhat(fun_workspace_trend, fun_workspace_seasonal, fun_workspace_s,
          fun_workspace_yhatseaso, fun_workspace_Xseasof, fun_workspace_varampl,
          fun_workspace_Seqf, fun_workspace_nexpl, fun_workspace_isemptyX,
          fun_workspace_Xf, fun_workspace_lshiftYN, fun_workspace_Xlshiftf, x,
          xdata, F_temp);
  loop_ub = F_temp->size[0];
  for (k = 0; k < loop_ub; k++) {
    F_temp->data[k] -= ydata->data[k];
  }
  emxInit_real_T(&fNew, 1);
  m_temp = F_temp->size[0];
  k = jacobian->size[0] * jacobian->size[1];
  jacobian->size[0] = F_temp->size[0];
  jacobian->size[1] = x0->size[0];
  emxEnsureCapacity_real_T(jacobian, k);
  m = F_temp->size[0] - 1;
  k = residual->size[0];
  residual->size[0] = F_temp->size[0];
  emxEnsureCapacity_real_T(residual, k);
  k = fNew->size[0];
  fNew->size[0] = F_temp->size[0];
  emxEnsureCapacity_real_T(fNew, k);
  for (b_exitflag = 0; b_exitflag <= m; b_exitflag++) {
    residual->data[b_exitflag] = F_temp->data[b_exitflag];
  }
  emxInit_real_T(&augJacobian, 2);
  k = augJacobian->size[0] * augJacobian->size[1];
  augJacobian->size[0] = F_temp->size[0] + x0->size[0];
  augJacobian->size[1] = x0->size[0];
  emxEnsureCapacity_real_T(augJacobian, k);
  loop_ub = x0->size[0];
  for (k = 0; k < loop_ub; k++) {
    ixlast = jacobian->size[0];
    for (b_exitflag = 0; b_exitflag < ixlast; b_exitflag++) {
      augJacobian->data[b_exitflag + augJacobian->size[0] * k] =
          jacobian->data[b_exitflag + jacobian->size[0] * k];
    }
  }
  emxInit_real_T(&rhs, 1);
  k = rhs->size[0];
  rhs->size[0] = F_temp->size[0] + x0->size[0];
  emxEnsureCapacity_real_T(rhs, k);
  *resnorm = 0.0;
  if (F_temp->size[0] >= 1) {
    ixlast = F_temp->size[0];
    for (k = 0; k < ixlast; k++) {
      *resnorm += residual->data[k] * residual->data[k];
    }
  }
  emxInitStruct_struct_T3(&b_FiniteDifferences);
  factoryConstruct(
      fun_workspace_trend, fun_workspace_seasonal, fun_workspace_s,
      c_this_workspace_fun_workspace_, fun_workspace_Xseasof,
      fun_workspace_varampl, fun_workspace_Seqf, fun_workspace_nexpl,
      fun_workspace_isemptyX, fun_workspace_Xf, fun_workspace_lshiftYN,
      fun_workspace_Xlshiftf, xdata, ydata, x0->size[0], F_temp->size[0], lb,
      ub, t1_FiniteDifferenceType, &b_FiniteDifferences);
  emxCopyStruct_struct_T(&FiniteDifferences, &b_FiniteDifferences);
  jacobianFiniteDifference(augJacobian, residual, x, t1_FiniteDifferenceType,
                           &FiniteDifferences, &funcCount, &stepSuccessful);
  b_gamma = 0.01;
  for (b_exitflag = 0; b_exitflag < n; b_exitflag++) {
    ixlast = m_temp + n;
    loop_ub = ixlast * (b_exitflag + 1) - n;
    for (k = 0; k < n; k++) {
      augJacobian->data[loop_ub + k] = 0.0;
    }
    augJacobian
        ->data[(m_temp + b_exitflag) + augJacobian->size[0] * b_exitflag] = 0.1;
    ixlast *= b_exitflag;
    loop_ub = m_temp * b_exitflag;
    for (k = 0; k <= m; k++) {
      jacobian->data[loop_ub + k] = augJacobian->data[ixlast + k];
    }
  }
  emxInit_real_T(&xp, 1);
  xgemv(F_temp->size[0], x0->size[0], jacobian, F_temp->size[0], residual,
        gradf);
  k = xp->size[0];
  xp->size[0] = gradf->size[0];
  emxEnsureCapacity_real_T(xp, k);
  loop_ub = gradf->size[0];
  for (k = 0; k < loop_ub; k++) {
    xp->data[k] = -gradf->data[k];
  }
  projSteepestDescentInfNorm = projectBox(x, xp);
  resnormNew = computeFirstOrderOpt(gradf, b_hasFiniteBounds,
                                    &projSteepestDescentInfNorm);
  relFactor = fmax(resnormNew, 1.4901161193847656E-8);
  stepSuccessful = true;
  if (minWidth < 0.0) {
    b_exitflag = -2;
  } else {
    b_exitflag = checkStoppingCriteria(
        options_MaxFunctionEvaluations, gradf, relFactor, x, dx, funcCount,
        projSteepestDescentInfNorm, b_hasFiniteBounds);
  }
  emxInit_real_T(&b_dx, 2);
  exitg1 = false;
  while ((!exitg1) && (b_exitflag == -5)) {
    k = xp->size[0];
    xp->size[0] = residual->size[0];
    emxEnsureCapacity_real_T(xp, k);
    loop_ub = residual->size[0];
    for (k = 0; k < loop_ub; k++) {
      xp->data[k] = -residual->data[k];
    }
    for (k = 0; k <= m; k++) {
      rhs->data[k] = xp->data[k];
    }
    for (k = 0; k < n; k++) {
      rhs->data[(m + k) + 1] = 0.0;
    }
    if (b_hasFiniteBounds) {
      k = xp->size[0];
      xp->size[0] = x0->size[0];
      emxEnsureCapacity_real_T(xp, k);
      ixlast = x0->size[0];
      for (k = 0; k < ixlast; k++) {
        xp->data[k] = 1.0;
      }
      k = F_temp->size[0];
      F_temp->size[0] = xp->size[0];
      emxEnsureCapacity_real_T(F_temp, k);
      ixlast = xp->size[0];
      for (k = 0; k < ixlast; k++) {
        F_temp->data[k] = 1.0;
      }
      k = F_temp->size[0];
      F_temp->size[0] = gradf->size[0];
      emxEnsureCapacity_real_T(F_temp, k);
      loop_ub = gradf->size[0];
      for (k = 0; k < loop_ub; k++) {
        F_temp->data[k] = -gradf->data[k] / (b_gamma + 1.0) / F_temp->data[k];
      }
      projSteepestDescentInfNorm = projectBox(x, F_temp);
    }
    k = b_dx->size[0] * b_dx->size[1];
    b_dx->size[0] = dx->size[0];
    b_dx->size[1] = 1;
    emxEnsureCapacity_real_T(b_dx, k);
    loop_ub = dx->size[0] * dx->size[1] - 1;
    for (k = 0; k <= loop_ub; k++) {
      b_dx->data[k] = dx->data[k];
    }
    linearLeastSquares(augJacobian, rhs, b_dx, m_temp + n, n, dx);
    if (b_hasFiniteBounds) {
      k = xp->size[0];
      xp->size[0] = x->size[0];
      emxEnsureCapacity_real_T(xp, k);
      loop_ub = x->size[0];
      for (k = 0; k < loop_ub; k++) {
        xp->data[k] = x->data[k] + dx->data[k];
      }
    } else {
      k = xp->size[0];
      xp->size[0] = x->size[0];
      emxEnsureCapacity_real_T(xp, k);
      loop_ub = x->size[0];
      for (k = 0; k < loop_ub; k++) {
        xp->data[k] = x->data[k] + dx->data[k];
      }
    }
    likyhat(fun_workspace_trend, fun_workspace_seasonal, fun_workspace_s,
            fun_workspace_yhatseaso, fun_workspace_Xseasof,
            fun_workspace_varampl, fun_workspace_Seqf, fun_workspace_nexpl,
            fun_workspace_isemptyX, fun_workspace_Xf, fun_workspace_lshiftYN,
            fun_workspace_Xlshiftf, xp, xdata, F_temp);
    loop_ub = F_temp->size[0];
    for (k = 0; k < loop_ub; k++) {
      F_temp->data[k] -= ydata->data[k];
    }
    for (b_exitflag = 0; b_exitflag <= m; b_exitflag++) {
      fNew->data[b_exitflag] = F_temp->data[b_exitflag];
    }
    resnormNew = 0.0;
    if (m_temp >= 1) {
      for (k = 0; k <= m; k++) {
        resnormNew += fNew->data[k] * fNew->data[k];
      }
    }
    evalOK = true;
    for (b_exitflag = 0; b_exitflag < m_temp; b_exitflag++) {
      if ((!evalOK) || (rtIsInf(fNew->data[b_exitflag]) ||
                        rtIsNaN(fNew->data[b_exitflag]))) {
        evalOK = false;
      }
    }
    funcCount++;
    guard1 = false;
    if ((resnormNew < *resnorm) && evalOK) {
      iter++;
      funDiff = fabs(resnormNew - *resnorm) / *resnorm;
      *resnorm = resnormNew;
      k = residual->size[0];
      residual->size[0] = fNew->size[0];
      emxEnsureCapacity_real_T(residual, k);
      loop_ub = fNew->size[0];
      for (k = 0; k < loop_ub; k++) {
        residual->data[k] = fNew->data[k];
      }
      emxCopyStruct_struct_T(&b_FiniteDifferences, &FiniteDifferences);
      evalOK = b_jacobianFiniteDifference(augJacobian, residual, &funcCount, xp,
                                          t1_FiniteDifferenceType,
                                          &b_FiniteDifferences);
      for (b_exitflag = 0; b_exitflag < n; b_exitflag++) {
        ixlast = (m_temp + n) * b_exitflag;
        loop_ub = m_temp * b_exitflag;
        for (k = 0; k <= m; k++) {
          jacobian->data[loop_ub + k] = augJacobian->data[ixlast + k];
        }
      }
      if (evalOK) {
        k = x->size[0];
        x->size[0] = xp->size[0];
        emxEnsureCapacity_real_T(x, k);
        loop_ub = xp->size[0];
        for (k = 0; k < loop_ub; k++) {
          x->data[k] = xp->data[k];
        }
        if (stepSuccessful) {
          b_gamma *= 0.1;
        }
        stepSuccessful = true;
        guard1 = true;
      } else {
        b_exitflag = 2;
        n *= m_temp;
        for (k = 0; k < n; k++) {
          jacobian->data[k] = rtNaN;
        }
        exitg1 = true;
      }
    } else {
      b_gamma *= 10.0;
      stepSuccessful = false;
      loop_ub = jacobian->size[1];
      for (k = 0; k < loop_ub; k++) {
        ixlast = jacobian->size[0];
        for (b_exitflag = 0; b_exitflag < ixlast; b_exitflag++) {
          augJacobian->data[b_exitflag + augJacobian->size[0] * k] =
              jacobian->data[b_exitflag + jacobian->size[0] * k];
        }
      }
      guard1 = true;
    }
    if (guard1) {
      resnormNew = sqrt(b_gamma);
      for (b_exitflag = 0; b_exitflag < n; b_exitflag++) {
        loop_ub = (m_temp + n) * (b_exitflag + 1) - n;
        for (k = 0; k < n; k++) {
          augJacobian->data[loop_ub + k] = 0.0;
        }
        augJacobian
            ->data[(m_temp + b_exitflag) + augJacobian->size[0] * b_exitflag] =
            resnormNew;
      }
      xgemv(m_temp, n, jacobian, m_temp, residual, gradf);
      k = xp->size[0];
      xp->size[0] = gradf->size[0];
      emxEnsureCapacity_real_T(xp, k);
      loop_ub = gradf->size[0];
      for (k = 0; k < loop_ub; k++) {
        xp->data[k] = -gradf->data[k];
      }
      projSteepestDescentInfNorm = projectBox(x, xp);
      b_exitflag = b_checkStoppingCriteria(
          options_MaxFunctionEvaluations, gradf, relFactor, funDiff, x, dx,
          funcCount, stepSuccessful, &iter, projSteepestDescentInfNorm,
          b_hasFiniteBounds);
      if (b_exitflag != -5) {
        exitg1 = true;
      }
    }
  }
  emxFree_real_T(&b_dx);
  emxFree_real_T(&F_temp);
  emxFreeStruct_struct_T5(&b_FiniteDifferences);
  emxFree_real_T(&rhs);
  emxFree_real_T(&augJacobian);
  emxFree_real_T(&fNew);
  emxFree_real_T(&xp);
  output->firstorderopt = computeFirstOrderOpt(gradf, b_hasFiniteBounds,
                                               &projSteepestDescentInfNorm);
  output->iterations = iter;
  output->funcCount = funcCount;
  if (dx->size[0] == 0) {
    output->stepsize = 0.0;
  } else {
    ixlast = dx->size[0];
    c_dx = *dx;
    d_dx = ixlast;
    c_dx.size = &d_dx;
    c_dx.numDimensions = 1;
    output->stepsize = b_xnrm2(dx->size[0], &c_dx);
  }
  emxFree_real_T(&dx);
  for (k = 0; k < 19; k++) {
    output->algorithm[k] = b_cv[k];
  }
  k = lambda->lower->size[0];
  lambda->lower->size[0] = x0->size[0];
  emxEnsureCapacity_real_T(lambda->lower, k);
  loop_ub = x0->size[0];
  for (k = 0; k < loop_ub; k++) {
    lambda->lower->data[k] = 0.0;
  }
  k = lambda->upper->size[0];
  lambda->upper->size[0] = x0->size[0];
  emxEnsureCapacity_real_T(lambda->upper, k);
  loop_ub = x0->size[0];
  for (k = 0; k < loop_ub; k++) {
    lambda->upper->data[k] = 0.0;
  }
  if (b_hasFiniteBounds) {
    loop_ub = gradf->size[0];
    for (k = 0; k < loop_ub; k++) {
      gradf->data[k] = -gradf->data[k] / (b_gamma + 1.0);
    }
    projectBox(x, gradf);
  }
  emxFree_real_T(&gradf);
  *exitflag = b_exitflag;
  emxFreeStruct_struct_T5(&FiniteDifferences);
}

/*
 * File trailer for lsqcurvefit.c
 *
 * [EOF]
 */
