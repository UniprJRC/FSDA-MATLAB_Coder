/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * computeFiniteDifferences.c
 *
 * Code generation for function 'computeFiniteDifferences'
 *
 */

/* Include files */
#include "computeFiniteDifferences.h"
#include "finDiffEvalAndChkErr.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
bool computeFiniteDifferences(h_struct_T *obj,
                              const emxArray_real_T *cEqCurrent,
                              emxArray_real_T *xk, emxArray_real_T *JacCeqTrans,
                              int ldJE)
{
  b_captured_var *m_t0_nonlin_workspace_fun_works;
  c_captured_var *h_t0_nonlin_workspace_fun_works;
  c_captured_var *i_t0_nonlin_workspace_fun_works;
  c_captured_var *k_t0_nonlin_workspace_fun_works;
  c_captured_var *n_t0_nonlin_workspace_fun_works;
  c_captured_var *p_t0_nonlin_workspace_fun_works;
  captured_var *e_t0_nonlin_workspace_fun_works;
  captured_var *f_t0_nonlin_workspace_fun_works;
  captured_var *g_t0_nonlin_workspace_fun_works;
  captured_var *j_t0_nonlin_workspace_fun_works;
  captured_var *l_t0_nonlin_workspace_fun_works;
  captured_var *o_t0_nonlin_workspace_fun_works;
  emxArray_real_T *c_t0_nonlin_workspace_fun_works;
  emxArray_real_T *d_t0_nonlin_workspace_fun_works;
  double d;
  double delta1;
  double delta2;
  double deltaX;
  int exitg3;
  int formulaType;
  int i;
  int idx;
  int loop_ub;
  bool evalOK;
  bool exitg1;
  bool exitg2;
  bool guard1 = false;
  if (obj->isEmptyNonlcon) {
    evalOK = true;
  } else {
    emxInit_real_T(&c_t0_nonlin_workspace_fun_works, 2);
    emxInit_real_T(&d_t0_nonlin_workspace_fun_works, 1);
    switch (obj->FiniteDifferenceType) {
    case 0:
      evalOK = true;
      obj->numEvals = 0;
      idx = 0;
      exitg2 = false;
      while ((!exitg2) && (idx <= obj->nVar - 1)) {
        deltaX = 1.4901161193847656E-8 *
                 (1.0 - 2.0 * (double)(xk->data[idx] < 0.0)) *
                 fmax(fabs(xk->data[idx]), 1.0);
        e_t0_nonlin_workspace_fun_works =
            obj->nonlin.workspace.fun.workspace.fun.workspace.trend;
        f_t0_nonlin_workspace_fun_works =
            obj->nonlin.workspace.fun.workspace.fun.workspace.seasonal;
        g_t0_nonlin_workspace_fun_works =
            obj->nonlin.workspace.fun.workspace.fun.workspace.s;
        h_t0_nonlin_workspace_fun_works =
            obj->nonlin.workspace.fun.workspace.fun.workspace.yhatseaso;
        i_t0_nonlin_workspace_fun_works =
            obj->nonlin.workspace.fun.workspace.fun.workspace.Xseasof;
        j_t0_nonlin_workspace_fun_works =
            obj->nonlin.workspace.fun.workspace.fun.workspace.varampl;
        k_t0_nonlin_workspace_fun_works =
            obj->nonlin.workspace.fun.workspace.fun.workspace.Seqf;
        l_t0_nonlin_workspace_fun_works =
            obj->nonlin.workspace.fun.workspace.fun.workspace.nexpl;
        m_t0_nonlin_workspace_fun_works =
            obj->nonlin.workspace.fun.workspace.fun.workspace.isemptyX;
        n_t0_nonlin_workspace_fun_works =
            obj->nonlin.workspace.fun.workspace.fun.workspace.Xf;
        o_t0_nonlin_workspace_fun_works =
            obj->nonlin.workspace.fun.workspace.fun.workspace.lshiftYN;
        p_t0_nonlin_workspace_fun_works =
            obj->nonlin.workspace.fun.workspace.fun.workspace.Xlshiftf;
        i = c_t0_nonlin_workspace_fun_works->size[0] *
            c_t0_nonlin_workspace_fun_works->size[1];
        c_t0_nonlin_workspace_fun_works->size[0] =
            obj->nonlin.workspace.fun.workspace.xdata->size[0];
        c_t0_nonlin_workspace_fun_works->size[1] =
            obj->nonlin.workspace.fun.workspace.xdata->size[1];
        emxEnsureCapacity_real_T(c_t0_nonlin_workspace_fun_works, i);
        loop_ub = obj->nonlin.workspace.fun.workspace.xdata->size[0] *
                  obj->nonlin.workspace.fun.workspace.xdata->size[1];
        for (i = 0; i < loop_ub; i++) {
          c_t0_nonlin_workspace_fun_works->data[i] =
              obj->nonlin.workspace.fun.workspace.xdata->data[i];
        }
        i = d_t0_nonlin_workspace_fun_works->size[0];
        d_t0_nonlin_workspace_fun_works->size[0] =
            obj->nonlin.workspace.fun.workspace.ydata->size[0];
        emxEnsureCapacity_real_T(d_t0_nonlin_workspace_fun_works, i);
        loop_ub = obj->nonlin.workspace.fun.workspace.ydata->size[0];
        for (i = 0; i < loop_ub; i++) {
          d_t0_nonlin_workspace_fun_works->data[i] =
              obj->nonlin.workspace.fun.workspace.ydata->data[i];
        }
        loop_ub = obj->mEq;
        d = 0.0;
        evalOK = finDiffEvalAndChkErr(
            e_t0_nonlin_workspace_fun_works, f_t0_nonlin_workspace_fun_works,
            g_t0_nonlin_workspace_fun_works, h_t0_nonlin_workspace_fun_works,
            i_t0_nonlin_workspace_fun_works, j_t0_nonlin_workspace_fun_works,
            k_t0_nonlin_workspace_fun_works, l_t0_nonlin_workspace_fun_works,
            m_t0_nonlin_workspace_fun_works, n_t0_nonlin_workspace_fun_works,
            o_t0_nonlin_workspace_fun_works, p_t0_nonlin_workspace_fun_works,
            c_t0_nonlin_workspace_fun_works, d_t0_nonlin_workspace_fun_works,
            loop_ub, &d, obj->cEq_1, idx + 1, deltaX, xk);
        obj->f_1 = 0.0;
        obj->numEvals++;
        guard1 = false;
        if (!evalOK) {
          deltaX = -deltaX;
          if (!obj->hasBounds) {
            e_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.trend;
            f_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.seasonal;
            g_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.s;
            h_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.yhatseaso;
            i_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.Xseasof;
            j_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.varampl;
            k_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.Seqf;
            l_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.nexpl;
            m_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.isemptyX;
            n_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.Xf;
            o_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.lshiftYN;
            p_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.Xlshiftf;
            i = c_t0_nonlin_workspace_fun_works->size[0] *
                c_t0_nonlin_workspace_fun_works->size[1];
            c_t0_nonlin_workspace_fun_works->size[0] =
                obj->nonlin.workspace.fun.workspace.xdata->size[0];
            c_t0_nonlin_workspace_fun_works->size[1] =
                obj->nonlin.workspace.fun.workspace.xdata->size[1];
            emxEnsureCapacity_real_T(c_t0_nonlin_workspace_fun_works, i);
            loop_ub = obj->nonlin.workspace.fun.workspace.xdata->size[0] *
                      obj->nonlin.workspace.fun.workspace.xdata->size[1];
            for (i = 0; i < loop_ub; i++) {
              c_t0_nonlin_workspace_fun_works->data[i] =
                  obj->nonlin.workspace.fun.workspace.xdata->data[i];
            }
            i = d_t0_nonlin_workspace_fun_works->size[0];
            d_t0_nonlin_workspace_fun_works->size[0] =
                obj->nonlin.workspace.fun.workspace.ydata->size[0];
            emxEnsureCapacity_real_T(d_t0_nonlin_workspace_fun_works, i);
            loop_ub = obj->nonlin.workspace.fun.workspace.ydata->size[0];
            for (i = 0; i < loop_ub; i++) {
              d_t0_nonlin_workspace_fun_works->data[i] =
                  obj->nonlin.workspace.fun.workspace.ydata->data[i];
            }
            loop_ub = obj->mEq;
            d = 0.0;
            evalOK =
                finDiffEvalAndChkErr(e_t0_nonlin_workspace_fun_works,
                                     f_t0_nonlin_workspace_fun_works,
                                     g_t0_nonlin_workspace_fun_works,
                                     h_t0_nonlin_workspace_fun_works,
                                     i_t0_nonlin_workspace_fun_works,
                                     j_t0_nonlin_workspace_fun_works,
                                     k_t0_nonlin_workspace_fun_works,
                                     l_t0_nonlin_workspace_fun_works,
                                     m_t0_nonlin_workspace_fun_works,
                                     n_t0_nonlin_workspace_fun_works,
                                     o_t0_nonlin_workspace_fun_works,
                                     p_t0_nonlin_workspace_fun_works,
                                     c_t0_nonlin_workspace_fun_works,
                                     d_t0_nonlin_workspace_fun_works, loop_ub,
                                     &d, obj->cEq_1, idx + 1, deltaX, xk);
            obj->f_1 = 0.0;
            obj->numEvals++;
          }
          if (!evalOK) {
            exitg2 = true;
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }
        if (guard1) {
          i = obj->mEq;
          for (loop_ub = 0; loop_ub < i; loop_ub++) {
            JacCeqTrans->data[idx + ldJE * loop_ub] =
                (obj->cEq_1->data[loop_ub] - cEqCurrent->data[loop_ub]) /
                deltaX;
          }
          idx++;
        }
      }
      break;
    default:
      evalOK = true;
      obj->numEvals = 0;
      idx = 0;
      exitg1 = false;
      while ((!exitg1) && (idx <= obj->nVar - 1)) {
        deltaX = 1.4901161193847656E-8 * fmax(fabs(xk->data[idx]), 1.0);
        formulaType = 0;
        delta1 = -deltaX;
        delta2 = deltaX;
        do {
          exitg3 = 0;
          e_t0_nonlin_workspace_fun_works =
              obj->nonlin.workspace.fun.workspace.fun.workspace.trend;
          f_t0_nonlin_workspace_fun_works =
              obj->nonlin.workspace.fun.workspace.fun.workspace.seasonal;
          g_t0_nonlin_workspace_fun_works =
              obj->nonlin.workspace.fun.workspace.fun.workspace.s;
          h_t0_nonlin_workspace_fun_works =
              obj->nonlin.workspace.fun.workspace.fun.workspace.yhatseaso;
          i_t0_nonlin_workspace_fun_works =
              obj->nonlin.workspace.fun.workspace.fun.workspace.Xseasof;
          j_t0_nonlin_workspace_fun_works =
              obj->nonlin.workspace.fun.workspace.fun.workspace.varampl;
          k_t0_nonlin_workspace_fun_works =
              obj->nonlin.workspace.fun.workspace.fun.workspace.Seqf;
          l_t0_nonlin_workspace_fun_works =
              obj->nonlin.workspace.fun.workspace.fun.workspace.nexpl;
          m_t0_nonlin_workspace_fun_works =
              obj->nonlin.workspace.fun.workspace.fun.workspace.isemptyX;
          n_t0_nonlin_workspace_fun_works =
              obj->nonlin.workspace.fun.workspace.fun.workspace.Xf;
          o_t0_nonlin_workspace_fun_works =
              obj->nonlin.workspace.fun.workspace.fun.workspace.lshiftYN;
          p_t0_nonlin_workspace_fun_works =
              obj->nonlin.workspace.fun.workspace.fun.workspace.Xlshiftf;
          i = c_t0_nonlin_workspace_fun_works->size[0] *
              c_t0_nonlin_workspace_fun_works->size[1];
          c_t0_nonlin_workspace_fun_works->size[0] =
              obj->nonlin.workspace.fun.workspace.xdata->size[0];
          c_t0_nonlin_workspace_fun_works->size[1] =
              obj->nonlin.workspace.fun.workspace.xdata->size[1];
          emxEnsureCapacity_real_T(c_t0_nonlin_workspace_fun_works, i);
          loop_ub = obj->nonlin.workspace.fun.workspace.xdata->size[0] *
                    obj->nonlin.workspace.fun.workspace.xdata->size[1];
          for (i = 0; i < loop_ub; i++) {
            c_t0_nonlin_workspace_fun_works->data[i] =
                obj->nonlin.workspace.fun.workspace.xdata->data[i];
          }
          i = d_t0_nonlin_workspace_fun_works->size[0];
          d_t0_nonlin_workspace_fun_works->size[0] =
              obj->nonlin.workspace.fun.workspace.ydata->size[0];
          emxEnsureCapacity_real_T(d_t0_nonlin_workspace_fun_works, i);
          loop_ub = obj->nonlin.workspace.fun.workspace.ydata->size[0];
          for (i = 0; i < loop_ub; i++) {
            d_t0_nonlin_workspace_fun_works->data[i] =
                obj->nonlin.workspace.fun.workspace.ydata->data[i];
          }
          loop_ub = obj->mEq;
          d = 0.0;
          evalOK = finDiffEvalAndChkErr(
              e_t0_nonlin_workspace_fun_works, f_t0_nonlin_workspace_fun_works,
              g_t0_nonlin_workspace_fun_works, h_t0_nonlin_workspace_fun_works,
              i_t0_nonlin_workspace_fun_works, j_t0_nonlin_workspace_fun_works,
              k_t0_nonlin_workspace_fun_works, l_t0_nonlin_workspace_fun_works,
              m_t0_nonlin_workspace_fun_works, n_t0_nonlin_workspace_fun_works,
              o_t0_nonlin_workspace_fun_works, p_t0_nonlin_workspace_fun_works,
              c_t0_nonlin_workspace_fun_works, d_t0_nonlin_workspace_fun_works,
              loop_ub, &d, obj->cEq_1, idx + 1, delta1, xk);
          obj->f_1 = 0.0;
          obj->numEvals++;
          if (!evalOK) {
            if ((formulaType == 0) && (!obj->hasBounds)) {
              formulaType = 1;
              delta1 = deltaX;
              delta2 = 2.0 * deltaX;
            } else {
              exitg3 = 1;
            }
          } else {
            e_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.trend;
            f_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.seasonal;
            g_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.s;
            h_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.yhatseaso;
            i_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.Xseasof;
            j_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.varampl;
            k_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.Seqf;
            l_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.nexpl;
            m_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.isemptyX;
            n_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.Xf;
            o_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.lshiftYN;
            p_t0_nonlin_workspace_fun_works =
                obj->nonlin.workspace.fun.workspace.fun.workspace.Xlshiftf;
            i = c_t0_nonlin_workspace_fun_works->size[0] *
                c_t0_nonlin_workspace_fun_works->size[1];
            c_t0_nonlin_workspace_fun_works->size[0] =
                obj->nonlin.workspace.fun.workspace.xdata->size[0];
            c_t0_nonlin_workspace_fun_works->size[1] =
                obj->nonlin.workspace.fun.workspace.xdata->size[1];
            emxEnsureCapacity_real_T(c_t0_nonlin_workspace_fun_works, i);
            loop_ub = obj->nonlin.workspace.fun.workspace.xdata->size[0] *
                      obj->nonlin.workspace.fun.workspace.xdata->size[1];
            for (i = 0; i < loop_ub; i++) {
              c_t0_nonlin_workspace_fun_works->data[i] =
                  obj->nonlin.workspace.fun.workspace.xdata->data[i];
            }
            i = d_t0_nonlin_workspace_fun_works->size[0];
            d_t0_nonlin_workspace_fun_works->size[0] =
                obj->nonlin.workspace.fun.workspace.ydata->size[0];
            emxEnsureCapacity_real_T(d_t0_nonlin_workspace_fun_works, i);
            loop_ub = obj->nonlin.workspace.fun.workspace.ydata->size[0];
            for (i = 0; i < loop_ub; i++) {
              d_t0_nonlin_workspace_fun_works->data[i] =
                  obj->nonlin.workspace.fun.workspace.ydata->data[i];
            }
            loop_ub = obj->mEq;
            d = 0.0;
            evalOK =
                finDiffEvalAndChkErr(e_t0_nonlin_workspace_fun_works,
                                     f_t0_nonlin_workspace_fun_works,
                                     g_t0_nonlin_workspace_fun_works,
                                     h_t0_nonlin_workspace_fun_works,
                                     i_t0_nonlin_workspace_fun_works,
                                     j_t0_nonlin_workspace_fun_works,
                                     k_t0_nonlin_workspace_fun_works,
                                     l_t0_nonlin_workspace_fun_works,
                                     m_t0_nonlin_workspace_fun_works,
                                     n_t0_nonlin_workspace_fun_works,
                                     o_t0_nonlin_workspace_fun_works,
                                     p_t0_nonlin_workspace_fun_works,
                                     c_t0_nonlin_workspace_fun_works,
                                     d_t0_nonlin_workspace_fun_works, loop_ub,
                                     &d, obj->cEq_2, idx + 1, delta2, xk);
            obj->f_2 = 0.0;
            obj->numEvals++;
            if ((!evalOK) && (formulaType == 0) && (!obj->hasBounds)) {
              formulaType = -1;
              delta1 = -2.0 * deltaX;
              delta2 = -deltaX;
            } else {
              exitg3 = 1;
            }
          }
        } while (exitg3 == 0);
        if (!evalOK) {
          exitg1 = true;
        } else {
          if (obj->mEq > 0) {
            loop_ub = obj->mEq - 1;
            switch (formulaType) {
            case 0:
              for (formulaType = 0; formulaType <= loop_ub; formulaType++) {
                JacCeqTrans->data[idx + ldJE * formulaType] =
                    (-obj->cEq_1->data[formulaType] +
                     obj->cEq_2->data[formulaType]) /
                    (2.0 * deltaX);
              }
              break;
            case 1:
              for (formulaType = 0; formulaType <= loop_ub; formulaType++) {
                JacCeqTrans->data[idx + ldJE * formulaType] =
                    ((-3.0 * cEqCurrent->data[formulaType] +
                      4.0 * obj->cEq_1->data[formulaType]) -
                     obj->cEq_2->data[formulaType]) /
                    (2.0 * deltaX);
              }
              break;
            default:
              for (formulaType = 0; formulaType <= loop_ub; formulaType++) {
                JacCeqTrans->data[idx + ldJE * formulaType] =
                    ((obj->cEq_1->data[formulaType] -
                      4.0 * obj->cEq_2->data[formulaType]) +
                     3.0 * cEqCurrent->data[formulaType]) /
                    (2.0 * deltaX);
              }
              break;
            }
          }
          idx++;
        }
      }
      break;
    }
    emxFree_real_T(&d_t0_nonlin_workspace_fun_works);
    emxFree_real_T(&c_t0_nonlin_workspace_fun_works);
  }
  return evalOK;
}

/* End of code generation (computeFiniteDifferences.c) */
