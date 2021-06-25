/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: addt_wrapper.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef ADDT_WRAPPER_H
#define ADDT_WRAPPER_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void addt_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                         const emxArray_real_T *w, bool intercept,
                         const double la_data[], const int la_size[2],
                         bool nocheck, struct_addt_T *out);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for addt_wrapper.h
 *
 * [EOF]
 */
