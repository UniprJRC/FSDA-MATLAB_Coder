/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * finDiffEvalAndChkErr.c
 *
 * Code generation for function 'finDiffEvalAndChkErr'
 *
 */

/* Include files */
#include "finDiffEvalAndChkErr.h"
#include "LTSts.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void finDiffEvalAndChkErr(
    const captured_var *c_obj_nonlin_workspace_fun_work,
    const captured_var *d_obj_nonlin_workspace_fun_work,
    const captured_var *e_obj_nonlin_workspace_fun_work,
    c_captured_var *f_obj_nonlin_workspace_fun_work,
    const c_captured_var *g_obj_nonlin_workspace_fun_work,
    const captured_var *h_obj_nonlin_workspace_fun_work,
    const c_captured_var *i_obj_nonlin_workspace_fun_work,
    const captured_var *j_obj_nonlin_workspace_fun_work,
    const b_captured_var *k_obj_nonlin_workspace_fun_work,
    const c_captured_var *l_obj_nonlin_workspace_fun_work,
    const captured_var *m_obj_nonlin_workspace_fun_work,
    const c_captured_var *n_obj_nonlin_workspace_fun_work,
    const emxArray_real_T *o_obj_nonlin_workspace_fun_work,
    const emxArray_real_T *p_obj_nonlin_workspace_fun_work, int obj_mEq,
    emxArray_real_T *cEqPlus, int dim, double delta, emxArray_real_T *xk,
    bool *evalOK, double *fplus)
{
  const double *q_obj_nonlin_workspace_fun_work;
  double temp_tmp;
  double *cEqPlus_data;
  double *xk_data;
  int i;
  int loop_ub;
  xk_data = xk->data;
  q_obj_nonlin_workspace_fun_work = p_obj_nonlin_workspace_fun_work->data;
  *fplus = 0.0;
  *evalOK = true;
  temp_tmp = xk_data[dim - 1];
  xk_data[dim - 1] = temp_tmp + delta;
  likyhat(c_obj_nonlin_workspace_fun_work, d_obj_nonlin_workspace_fun_work,
          e_obj_nonlin_workspace_fun_work, f_obj_nonlin_workspace_fun_work,
          g_obj_nonlin_workspace_fun_work, h_obj_nonlin_workspace_fun_work,
          i_obj_nonlin_workspace_fun_work, j_obj_nonlin_workspace_fun_work,
          k_obj_nonlin_workspace_fun_work, l_obj_nonlin_workspace_fun_work,
          m_obj_nonlin_workspace_fun_work, n_obj_nonlin_workspace_fun_work, xk,
          o_obj_nonlin_workspace_fun_work, cEqPlus);
  cEqPlus_data = cEqPlus->data;
  loop_ub = cEqPlus->size[0];
  for (i = 0; i < loop_ub; i++) {
    cEqPlus_data[i] -= q_obj_nonlin_workspace_fun_work[i];
  }
  loop_ub = 0;
  while ((*evalOK) && (loop_ub + 1 <= obj_mEq)) {
    *evalOK = ((!rtIsInf(cEqPlus_data[loop_ub])) &&
               (!rtIsNaN(cEqPlus_data[loop_ub])));
    loop_ub++;
  }
  xk_data[dim - 1] = temp_tmp;
}

/* End of code generation (finDiffEvalAndChkErr.c) */
