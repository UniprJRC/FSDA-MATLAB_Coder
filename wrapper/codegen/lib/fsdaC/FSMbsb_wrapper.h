/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: FSMbsb_wrapper.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef FSMBSB_WRAPPER_H
#define FSMBSB_WRAPPER_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void FSMbsb_wrapper(const emxArray_real_T *Y, const emxArray_real_T *bsb,
                           const emxArray_real_T *bsbsteps, double init,
                           bool msg, bool nocheck, emxArray_real_T *Un,
                           emxArray_real_T *BB);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for FSMbsb_wrapper.h
 *
 * [EOF]
 */
