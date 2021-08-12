/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * factoryConstruct.h
 *
 * Code generation for function 'factoryConstruct'
 *
 */

#ifndef FACTORYCONSTRUCT_H
#define FACTORYCONSTRUCT_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
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
                      i_struct_T *obj);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (factoryConstruct.h) */
