/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: factoryConstruct.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "factoryConstruct.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "hasFiniteBounds.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : captured_var *c_nonlin_workspace_fun_workspac
 *                captured_var *d_nonlin_workspace_fun_workspac
 *                captured_var *e_nonlin_workspace_fun_workspac
 *                c_captured_var *f_nonlin_workspace_fun_workspac
 *                c_captured_var *g_nonlin_workspace_fun_workspac
 *                captured_var *h_nonlin_workspace_fun_workspac
 *                c_captured_var *i_nonlin_workspace_fun_workspac
 *                captured_var *j_nonlin_workspace_fun_workspac
 *                b_captured_var *k_nonlin_workspace_fun_workspac
 *                c_captured_var *l_nonlin_workspace_fun_workspac
 *                captured_var *m_nonlin_workspace_fun_workspac
 *                c_captured_var *n_nonlin_workspace_fun_workspac
 *                const emxArray_real_T *o_nonlin_workspace_fun_workspac
 *                const emxArray_real_T *p_nonlin_workspace_fun_workspac
 *                int nVar
 *                int mCeq
 *                const emxArray_real_T *lb
 *                const emxArray_real_T *ub
 *                const char options_FiniteDifferenceType[7]
 *                h_struct_T *obj
 * Return Type  : void
 */
void factoryConstruct(captured_var *c_nonlin_workspace_fun_workspac,
                      captured_var *d_nonlin_workspace_fun_workspac,
                      captured_var *e_nonlin_workspace_fun_workspac,
                      c_captured_var *f_nonlin_workspace_fun_workspac,
                      c_captured_var *g_nonlin_workspace_fun_workspac,
                      captured_var *h_nonlin_workspace_fun_workspac,
                      c_captured_var *i_nonlin_workspace_fun_workspac,
                      captured_var *j_nonlin_workspace_fun_workspac,
                      b_captured_var *k_nonlin_workspace_fun_workspac,
                      c_captured_var *l_nonlin_workspace_fun_workspac,
                      captured_var *m_nonlin_workspace_fun_workspac,
                      c_captured_var *n_nonlin_workspace_fun_workspac,
                      const emxArray_real_T *o_nonlin_workspace_fun_workspac,
                      const emxArray_real_T *p_nonlin_workspace_fun_workspac,
                      int nVar, int mCeq, const emxArray_real_T *lb,
                      const emxArray_real_T *ub,
                      const char options_FiniteDifferenceType[7],
                      h_struct_T *obj)
{
  static const char b_cv[7] = {'f', 'o', 'r', 'w', 'a', 'r', 'd'};
  int exitg1;
  int i;
  int loop_ub;
  bool b_bool;
  obj->nonlin.workspace.fun.workspace.fun.workspace.trend =
      c_nonlin_workspace_fun_workspac;
  obj->nonlin.workspace.fun.workspace.fun.workspace.seasonal =
      d_nonlin_workspace_fun_workspac;
  obj->nonlin.workspace.fun.workspace.fun.workspace.s =
      e_nonlin_workspace_fun_workspac;
  obj->nonlin.workspace.fun.workspace.fun.workspace.yhatseaso =
      f_nonlin_workspace_fun_workspac;
  obj->nonlin.workspace.fun.workspace.fun.workspace.Xseasof =
      g_nonlin_workspace_fun_workspac;
  obj->nonlin.workspace.fun.workspace.fun.workspace.varampl =
      h_nonlin_workspace_fun_workspac;
  obj->nonlin.workspace.fun.workspace.fun.workspace.Seqf =
      i_nonlin_workspace_fun_workspac;
  obj->nonlin.workspace.fun.workspace.fun.workspace.nexpl =
      j_nonlin_workspace_fun_workspac;
  obj->nonlin.workspace.fun.workspace.fun.workspace.isemptyX =
      k_nonlin_workspace_fun_workspac;
  obj->nonlin.workspace.fun.workspace.fun.workspace.Xf =
      l_nonlin_workspace_fun_workspac;
  obj->nonlin.workspace.fun.workspace.fun.workspace.lshiftYN =
      m_nonlin_workspace_fun_workspac;
  obj->nonlin.workspace.fun.workspace.fun.workspace.Xlshiftf =
      n_nonlin_workspace_fun_workspac;
  i = obj->nonlin.workspace.fun.workspace.xdata->size[0] *
      obj->nonlin.workspace.fun.workspace.xdata->size[1];
  obj->nonlin.workspace.fun.workspace.xdata->size[0] =
      o_nonlin_workspace_fun_workspac->size[0];
  obj->nonlin.workspace.fun.workspace.xdata->size[1] =
      o_nonlin_workspace_fun_workspac->size[1];
  emxEnsureCapacity_real_T(obj->nonlin.workspace.fun.workspace.xdata, i);
  loop_ub = o_nonlin_workspace_fun_workspac->size[0] *
            o_nonlin_workspace_fun_workspac->size[1];
  for (i = 0; i < loop_ub; i++) {
    obj->nonlin.workspace.fun.workspace.xdata->data[i] =
        o_nonlin_workspace_fun_workspac->data[i];
  }
  i = obj->nonlin.workspace.fun.workspace.ydata->size[0];
  obj->nonlin.workspace.fun.workspace.ydata->size[0] =
      p_nonlin_workspace_fun_workspac->size[0];
  emxEnsureCapacity_real_T(obj->nonlin.workspace.fun.workspace.ydata, i);
  loop_ub = p_nonlin_workspace_fun_workspac->size[0];
  for (i = 0; i < loop_ub; i++) {
    obj->nonlin.workspace.fun.workspace.ydata->data[i] =
        p_nonlin_workspace_fun_workspac->data[i];
  }
  obj->f_1 = 0.0;
  i = obj->cEq_1->size[0];
  obj->cEq_1->size[0] = mCeq;
  emxEnsureCapacity_real_T(obj->cEq_1, i);
  obj->f_2 = 0.0;
  i = obj->cEq_2->size[0];
  obj->cEq_2->size[0] = mCeq;
  emxEnsureCapacity_real_T(obj->cEq_2, i);
  obj->nVar = nVar;
  obj->mIneq = 0;
  obj->mEq = mCeq;
  obj->numEvals = 0;
  obj->SpecifyObjectiveGradient = false;
  obj->SpecifyConstraintGradient = false;
  obj->isEmptyNonlcon = (mCeq == 0);
  i = obj->hasLB->size[0];
  obj->hasLB->size[0] = nVar;
  emxEnsureCapacity_boolean_T(obj->hasLB, i);
  i = obj->hasUB->size[0];
  obj->hasUB->size[0] = nVar;
  emxEnsureCapacity_boolean_T(obj->hasUB, i);
  b_bool = false;
  loop_ub = 0;
  do {
    exitg1 = 0;
    if (loop_ub < 7) {
      if (cv[(unsigned char)options_FiniteDifferenceType[loop_ub]] !=
          cv[(int)b_cv[loop_ub]]) {
        exitg1 = 1;
      } else {
        loop_ub++;
      }
    } else {
      b_bool = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  obj->FiniteDifferenceType = !b_bool;
  obj->hasBounds = hasFiniteBounds(nVar, obj->hasLB, obj->hasUB, lb, ub);
}

/*
 * File trailer for factoryConstruct.c
 *
 * [EOF]
 */
