/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: restreigen.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef RESTREIGEN_H
#define RESTREIGEN_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_restreigen(emxArray_real_T *eigenvalues, double restr, double tol,
                  double userepmat);

void c_restreigen(emxArray_real_T *eigenvalues, const emxArray_real_T *niini,
                  double restr, double tol, double userepmat);

void restreigen(emxArray_real_T *eigenvalues, const emxArray_real_T *niini,
                double restr);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for restreigen.h
 *
 * [EOF]
 */
