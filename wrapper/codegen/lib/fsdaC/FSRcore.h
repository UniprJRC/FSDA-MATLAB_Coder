/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: FSRcore.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef FSRCORE_H
#define FSRCORE_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void FSRcore(const emxArray_real_T *INP_y, const emxArray_real_T *INP_X,
             double INP_n, double INP_p, const emxArray_real_T *INP_mdr,
             double INP_init, const emxArray_real_T *INP_Un,
             const emxArray_real_T *INP_bb, const emxArray_real_T *INP_Bcoeff,
             const emxArray_real_T *INP_S2, bool INP_weak,
             const double options_bonflev_data[],
             const int options_bonflev_size[2], bool options_msg,
             struct_T *out);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for FSRcore.h
 *
 * [EOF]
 */
