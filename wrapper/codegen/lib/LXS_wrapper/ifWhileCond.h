/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ifWhileCond.h
 *
 * Code generation for function 'ifWhileCond'
 *
 */

#ifndef IFWHILECOND_H
#define IFWHILECOND_H

/* Include files */
#include "LXS_wrapper_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
bool b_ifWhileCond(const emxArray_boolean_T *x);

bool c_ifWhileCond(const bool x_data[], const int x_size[2]);

bool ifWhileCond(const emxArray_boolean_T *x);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (ifWhileCond.h) */
