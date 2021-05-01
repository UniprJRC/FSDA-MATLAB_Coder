/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * addt_wrapper.h
 *
 * Code generation for function 'addt_wrapper'
 *
 */

#ifndef ADDT_WRAPPER_H
#define ADDT_WRAPPER_H

/* Include files */
#include "addt_wrapper_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>
#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  extern void addt_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
    const emxArray_real_T *w, bool intercept, const double la_data[], const int
    la_size[2], bool nocheck, struct0_T *out);

#ifdef __cplusplus

}
#endif
#endif

/* End of code generation (addt_wrapper.h) */
