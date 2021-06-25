/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * restreigeneasy.h
 *
 * Code generation for function 'restreigeneasy'
 *
 */

#ifndef RESTREIGENEASY_H
#define RESTREIGENEASY_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void restreigeneasy(emxArray_real_T *eigenvalues, const emxArray_real_T *niini,
                    const double restr_data[], const int restr_size[2]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (restreigeneasy.h) */
