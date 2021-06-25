/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: tcdf.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef TCDF_H
#define TCDF_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_tcdf(const double x_data[], const int x_size[2], double v,
            double p_data[], int p_size[2]);

void tcdf(const emxArray_real_T *x, double v, emxArray_real_T *p);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for tcdf.h
 *
 * [EOF]
 */
