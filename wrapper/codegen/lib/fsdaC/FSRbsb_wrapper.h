/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: FSRbsb_wrapper.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef FSRBSB_WRAPPER_H
#define FSRBSB_WRAPPER_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void FSRbsb_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                           const emxArray_real_T *bsb,
                           const emxArray_real_T *bsbsteps, double init,
                           bool intercept, bool msg, bool nocheck,
                           emxArray_real_T *Un, emxArray_real32_T *BB);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for FSRbsb_wrapper.h
 *
 * [EOF]
 */
