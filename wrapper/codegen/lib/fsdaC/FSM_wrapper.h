/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: FSM_wrapper.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef FSM_WRAPPER_H
#define FSM_WRAPPER_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void FSM_wrapper(const emxArray_real_T *Y, const double bonflev_data[],
                        const int bonflev_size[2], const char crit_data[],
                        const int crit_size[2], double init,
                        const emxArray_real_T *m0, bool msg, bool nocheck,
                        double rf, struct_FSM_T *out);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for FSM_wrapper.h
 *
 * [EOF]
 */
