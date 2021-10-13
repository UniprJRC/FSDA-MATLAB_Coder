/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lsqcurvefit.c
 *
 * Code generation for function 'lsqcurvefit'
 *
 */

/* Include files */
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
#include "projectBox.h"
#include "rt_nonfinite.h"
#include "xgemv.h"
#include "xnrm2.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
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
    f_struct_T *output, b_struct_T *lambda, emxArray_real_T *jacobian)
{
  static const char b_cv[19] = {'l', 'e', 'v', 'e', 'n', 'b', 'e',
                                'r', 'g', '-', 'm', 'a', 'r', 'q',
                                'u', 'a', 'r', 'd', 't'};
  static const char t3_FiniteDifferenceType[7] = {'f', 'o', 'r', 'w',
                                                  'a', 'r', 'd'};
  c_captured_var *c_this_workspace_fun_workspace_;
  emxArray_boolean_T *hasLB;
  emxArray_boolean_T *hasUB;
  emxArray_real_T *F_temp;
  emxArray_real_T *augJacobian;
  emxArray_real_T *dx;
  emxArray_real_T *fNew;
  emxArray_real_T *gradf;
  emxArray_real_T *rhs;
  emxArray_real_T *xp;
  i_struct_T FiniteDifferences;
  i_struct_T b_FiniteDifferences;
  const double *x0_data;
  const double *ydata_data;
  double b_gamma;
  double funDiff;
  double projSteepestDescentInfNorm;
  double relFactor;
  double resnormNew;
  double *augJacobian_data;
  double *dx_data;
  double *fNew_data;
  double *gradf_data;
  double *jacobian_data;
  double *residual_data;
  double *rhs_data;
  double *x_data;
  double *xp_data;
  int funcCount;
  int i;
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
  ydata_data = ydata->data;
  x0_data = x0->data;
  emxInit_real_T(&gradf, 1);
  emxInit_real_T(&dx, 1);
  emxInitStruct_struct_T3(&FiniteDifferences);
  c_this_workspace_fun_workspace_ = fun_workspace_yhatseaso;
  n = x0->size[0];
  k = gradf->size[0];
  gradf->size[0] = x0->size[0];
  emxEnsureCapacity_real_T(gradf, k);
  k = dx->size[0];
  dx->size[0] = x0->size[0];
  emxEnsureCapacity_real_T(dx, k);
  dx_data = dx->data;
  loop_ub = x0->size[0];
  for (k = 0; k < loop_ub; k++) {
    dx_data[k] = rtInf;
  }
  emxInit_boolean_T(&hasLB, 1);
  emxInit_boolean_T(&hasUB, 1);
  funDiff = rtInf;
  iter = 0;
  options_MaxFunctionEvaluations = 200 * x0->size[0];
  k = hasLB->size[0];
  hasLB->size[0] = x0->size[0];
  emxEnsureCapacity_boolean_T(hasLB, k);
  k = hasUB->size[0];
  hasUB->size[0] = x0->size[0];
  emxEnsureCapacity_boolean_T(hasUB, k);
  b_hasFiniteBounds = hasFiniteBounds(x0->size[0], hasLB, hasUB, lb, ub);
  emxFree_boolean_T(&hasUB);
  emxFree_boolean_T(&hasLB);
  if (!b_hasFiniteBounds) {
    k = x->size[0];
    x->size[0] = x0->size[0];
    emxEnsureCapacity_real_T(x, k);
    x_data = x->data;
    loop_ub = x0->size[0];
    for (k = 0; k < loop_ub; k++) {
      x_data[k] = x0_data[k];
    }
  } else {
    k = x->size[0];
    x->size[0] = x0->size[0];
    emxEnsureCapacity_real_T(x, k);
    x_data = x->data;
    loop_ub = x0->size[0];
    for (k = 0; k < loop_ub; k++) {
      x_data[k] = x0_data[k];
    }
  }
  emxInit_real_T(&xp, 1);
  emxInit_real_T(&F_temp, 1);
  likyhat(fun_workspace_trend, fun_workspace_seasonal, fun_workspace_s,
          fun_workspace_yhatseaso, fun_workspace_Xseasof, fun_workspace_varampl,
          fun_workspace_Seqf, fun_workspace_nexpl, fun_workspace_isemptyX,
          fun_workspace_Xf, fun_workspace_lshiftYN, fun_workspace_Xlshiftf, x,
          xdata, F_temp);
  dx_data = F_temp->data;
  k = xp->size[0];
  xp->size[0] = F_temp->size[0];
  emxEnsureCapacity_real_T(xp, k);
  xp_data = xp->data;
  loop_ub = F_temp->size[0];
  for (k = 0; k < loop_ub; k++) {
    xp_data[k] = dx_data[k] - ydata_data[k];
  }
  emxInit_real_T(&fNew, 1);
  m_temp = xp->size[0];
  k = jacobian->size[0] * jacobian->size[1];
  jacobian->size[0] = F_temp->size[0];
  jacobian->size[1] = x0->size[0];
  emxEnsureCapacity_real_T(jacobian, k);
  jacobian_data = jacobian->data;
  m = F_temp->size[0] - 1;
  k = residual->size[0];
  residual->size[0] = xp->size[0];
  emxEnsureCapacity_real_T(residual, k);
  residual_data = residual->data;
  k = fNew->size[0];
  fNew->size[0] = xp->size[0];
  emxEnsureCapacity_real_T(fNew, k);
  fNew_data = fNew->data;
  for (i = 0; i <= m; i++) {
    residual_data[i] = xp_data[i];
  }
  emxInit_real_T(&augJacobian, 2);
  k = augJacobian->size[0] * augJacobian->size[1];
  augJacobian->size[0] = xp->size[0] + x0->size[0];
  augJacobian->size[1] = x0->size[0];
  emxEnsureCapacity_real_T(augJacobian, k);
  augJacobian_data = augJacobian->data;
  loop_ub = x0->size[0];
  for (k = 0; k < loop_ub; k++) {
    ixlast = jacobian->size[0];
    for (i = 0; i < ixlast; i++) {
      augJacobian_data[i + augJacobian->size[0] * k] =
          jacobian_data[i + jacobian->size[0] * k];
    }
  }
  emxInit_real_T(&rhs, 1);
  k = rhs->size[0];
  rhs->size[0] = xp->size[0] + x0->size[0];
  emxEnsureCapacity_real_T(rhs, k);
  rhs_data = rhs->data;
  *resnorm = 0.0;
  if (xp->size[0] >= 1) {
    ixlast = F_temp->size[0];
    for (k = 0; k < ixlast; k++) {
      *resnorm += residual_data[k] * residual_data[k];
    }
  }
  emxInitStruct_struct_T3(&b_FiniteDifferences);
  factoryConstruct(
      fun_workspace_trend, fun_workspace_seasonal, fun_workspace_s,
      c_this_workspace_fun_workspace_, fun_workspace_Xseasof,
      fun_workspace_varampl, fun_workspace_Seqf, fun_workspace_nexpl,
      fun_workspace_isemptyX, fun_workspace_Xf, fun_workspace_lshiftYN,
      fun_workspace_Xlshiftf, xdata, ydata, x0->size[0], xp->size[0], lb, ub,
      t3_FiniteDifferenceType, &b_FiniteDifferences);
  emxCopyStruct_struct_T(&FiniteDifferences, &b_FiniteDifferences);
  jacobianFiniteDifference(augJacobian, residual, x, t3_FiniteDifferenceType,
                           &FiniteDifferences, &funcCount, &stepSuccessful);
  augJacobian_data = augJacobian->data;
  b_gamma = 0.01;
  for (i = 0; i < n; i++) {
    ixlast = m_temp + n;
    loop_ub = ixlast * (i + 1) - n;
    for (k = 0; k < n; k++) {
      augJacobian_data[loop_ub + k] = 0.0;
    }
    augJacobian_data[(m_temp + i) + augJacobian->size[0] * i] = 0.1;
    ixlast *= i;
    loop_ub = m_temp * i;
    for (k = 0; k <= m; k++) {
      jacobian_data[loop_ub + k] = augJacobian_data[ixlast + k];
    }
  }
  xgemv(xp->size[0], x0->size[0], jacobian, xp->size[0], residual, gradf);
  gradf_data = gradf->data;
  k = F_temp->size[0];
  F_temp->size[0] = gradf->size[0];
  emxEnsureCapacity_real_T(F_temp, k);
  dx_data = F_temp->data;
  loop_ub = gradf->size[0];
  for (k = 0; k < loop_ub; k++) {
    dx_data[k] = -gradf_data[k];
  }
  projSteepestDescentInfNorm = projectBox(x, F_temp);
  resnormNew = computeFirstOrderOpt(gradf, b_hasFiniteBounds,
                                    &projSteepestDescentInfNorm);
  relFactor = fmax(resnormNew, 1.4901161193847656E-8);
  stepSuccessful = true;
  ixlast = checkStoppingCriteria(options_MaxFunctionEvaluations, gradf,
                                 relFactor, x, dx, funcCount,
                                 projSteepestDescentInfNorm, b_hasFiniteBounds);
  exitg1 = false;
  while ((!exitg1) && (ixlast == -5)) {
    k = F_temp->size[0];
    F_temp->size[0] = residual->size[0];
    emxEnsureCapacity_real_T(F_temp, k);
    dx_data = F_temp->data;
    loop_ub = residual->size[0];
    for (k = 0; k < loop_ub; k++) {
      dx_data[k] = -residual_data[k];
    }
    for (k = 0; k <= m; k++) {
      rhs_data[k] = dx_data[k];
    }
    for (k = 0; k < n; k++) {
      rhs_data[(m + k) + 1] = 0.0;
    }
    if (b_hasFiniteBounds) {
      k = F_temp->size[0];
      F_temp->size[0] = x0->size[0];
      emxEnsureCapacity_real_T(F_temp, k);
      dx_data = F_temp->data;
      ixlast = x0->size[0];
      for (k = 0; k < ixlast; k++) {
        dx_data[k] = 1.0;
      }
      k = xp->size[0];
      xp->size[0] = F_temp->size[0];
      emxEnsureCapacity_real_T(xp, k);
      xp_data = xp->data;
      ixlast = F_temp->size[0];
      for (k = 0; k < ixlast; k++) {
        xp_data[k] = 1.0;
      }
      k = xp->size[0];
      xp->size[0] = gradf->size[0];
      emxEnsureCapacity_real_T(xp, k);
      xp_data = xp->data;
      loop_ub = gradf->size[0];
      for (k = 0; k < loop_ub; k++) {
        xp_data[k] = -gradf_data[k] / (b_gamma + 1.0) / xp_data[k];
      }
      projSteepestDescentInfNorm = projectBox(x, xp);
    }
    linearLeastSquares(augJacobian, rhs, dx, m_temp + n, n);
    dx_data = dx->data;
    rhs_data = rhs->data;
    augJacobian_data = augJacobian->data;
    if (b_hasFiniteBounds) {
      k = xp->size[0];
      xp->size[0] = x->size[0];
      emxEnsureCapacity_real_T(xp, k);
      xp_data = xp->data;
      loop_ub = x->size[0];
      for (k = 0; k < loop_ub; k++) {
        xp_data[k] = x_data[k] + dx_data[k];
      }
    } else {
      k = xp->size[0];
      xp->size[0] = x->size[0];
      emxEnsureCapacity_real_T(xp, k);
      xp_data = xp->data;
      loop_ub = x->size[0];
      for (k = 0; k < loop_ub; k++) {
        xp_data[k] = x_data[k] + dx_data[k];
      }
    }
    likyhat(fun_workspace_trend, fun_workspace_seasonal, fun_workspace_s,
            fun_workspace_yhatseaso, fun_workspace_Xseasof,
            fun_workspace_varampl, fun_workspace_Seqf, fun_workspace_nexpl,
            fun_workspace_isemptyX, fun_workspace_Xf, fun_workspace_lshiftYN,
            fun_workspace_Xlshiftf, xp, xdata, F_temp);
    dx_data = F_temp->data;
    loop_ub = F_temp->size[0];
    for (k = 0; k < loop_ub; k++) {
      dx_data[k] -= ydata_data[k];
    }
    for (i = 0; i <= m; i++) {
      fNew_data[i] = dx_data[i];
    }
    resnormNew = 0.0;
    if (m_temp >= 1) {
      for (k = 0; k <= m; k++) {
        resnormNew += fNew_data[k] * fNew_data[k];
      }
    }
    evalOK = true;
    for (i = 0; i < m_temp; i++) {
      if ((!evalOK) || (rtIsInf(fNew_data[i]) || rtIsNaN(fNew_data[i]))) {
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
      residual_data = residual->data;
      loop_ub = fNew->size[0];
      for (k = 0; k < loop_ub; k++) {
        residual_data[k] = fNew_data[k];
      }
      emxCopyStruct_struct_T(&b_FiniteDifferences, &FiniteDifferences);
      evalOK = b_jacobianFiniteDifference(augJacobian, residual, &funcCount, xp,
                                          t3_FiniteDifferenceType,
                                          &b_FiniteDifferences);
      augJacobian_data = augJacobian->data;
      for (i = 0; i < n; i++) {
        ixlast = (m_temp + n) * i;
        loop_ub = m_temp * i;
        for (k = 0; k <= m; k++) {
          jacobian_data[loop_ub + k] = augJacobian_data[ixlast + k];
        }
      }
      if (evalOK) {
        k = x->size[0];
        x->size[0] = xp->size[0];
        emxEnsureCapacity_real_T(x, k);
        x_data = x->data;
        loop_ub = xp->size[0];
        for (k = 0; k < loop_ub; k++) {
          x_data[k] = xp_data[k];
        }
        if (stepSuccessful) {
          b_gamma *= 0.1;
        }
        stepSuccessful = true;
        guard1 = true;
      } else {
        ixlast = 2;
        n *= m_temp;
        for (k = 0; k < n; k++) {
          jacobian_data[k] = rtNaN;
        }
        exitg1 = true;
      }
    } else {
      b_gamma *= 10.0;
      stepSuccessful = false;
      loop_ub = jacobian->size[1];
      for (k = 0; k < loop_ub; k++) {
        ixlast = jacobian->size[0];
        for (i = 0; i < ixlast; i++) {
          augJacobian_data[i + augJacobian->size[0] * k] =
              jacobian_data[i + jacobian->size[0] * k];
        }
      }
      guard1 = true;
    }
    if (guard1) {
      resnormNew = sqrt(b_gamma);
      for (i = 0; i < n; i++) {
        loop_ub = (m_temp + n) * (i + 1) - n;
        for (k = 0; k < n; k++) {
          augJacobian_data[loop_ub + k] = 0.0;
        }
        augJacobian_data[(m_temp + i) + augJacobian->size[0] * i] = resnormNew;
      }
      xgemv(m_temp, n, jacobian, m_temp, residual, gradf);
      gradf_data = gradf->data;
      k = F_temp->size[0];
      F_temp->size[0] = gradf->size[0];
      emxEnsureCapacity_real_T(F_temp, k);
      dx_data = F_temp->data;
      loop_ub = gradf->size[0];
      for (k = 0; k < loop_ub; k++) {
        dx_data[k] = -gradf_data[k];
      }
      projSteepestDescentInfNorm = projectBox(x, F_temp);
      ixlast = b_checkStoppingCriteria(
          options_MaxFunctionEvaluations, gradf, relFactor, funDiff, x, dx,
          funcCount, stepSuccessful, &iter, projSteepestDescentInfNorm,
          b_hasFiniteBounds);
      if (ixlast != -5) {
        exitg1 = true;
      }
    }
  }
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
    output->stepsize = b_xnrm2(dx->size[0], dx);
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
      gradf_data[k] = -gradf_data[k] / (b_gamma + 1.0);
    }
    projectBox(x, gradf);
  }
  emxFree_real_T(&gradf);
  *exitflag = ixlast;
  emxFreeStruct_struct_T5(&FiniteDifferences);
}

/* End of code generation (lsqcurvefit.c) */
