/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: lsqcurvefit.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef LSQCURVEFIT_H
#define LSQCURVEFIT_H

/* Include Files */
#include "fsdaC_internal_types.h"
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
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
    e_struct_T *output, b_struct_T *lambda, emxArray_real_T *jacobian);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for lsqcurvefit.h
 *
 * [EOF]
 */
