/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: FSRfan_wrapper.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef FSRFAN_WRAPPER_H
#define FSRFAN_WRAPPER_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void FSRfan_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                           bool intercept, bool nocheck,
                           const emxArray_real_T *la, double h, double nsamp,
                           const emxArray_real_T *lms, double init,
                           const emxArray_char_T *family, bool msg,
                           struct_FSRfan_T *out);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for FSRfan_wrapper.h
 *
 * [EOF]
 */
