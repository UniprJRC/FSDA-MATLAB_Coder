/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: FSR_wrapper.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef FSR_WRAPPER_H
#define FSR_WRAPPER_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void FSR_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                        bool bsbmfullrank, const double bonflev_data[],
                        const int bonflev_size[2], double h, double init,
                        bool intercept, double lms, bool msg, bool nocheck,
                        double nsamp, const double threshoutX_data[],
                        const int threshoutX_size[2], bool weak,
                        struct_FSR_T *out);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for FSR_wrapper.h
 *
 * [EOF]
 */
