/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * finDiffEvalAndChkErr.h
 *
 * Code generation for function 'finDiffEvalAndChkErr'
 *
 */

#ifndef FINDIFFEVALANDCHKERR_H
#define FINDIFFEVALANDCHKERR_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
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
    bool *evalOK, double *fplus);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (finDiffEvalAndChkErr.h) */
