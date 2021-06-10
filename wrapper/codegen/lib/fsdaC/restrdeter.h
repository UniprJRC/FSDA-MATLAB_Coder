/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * restrdeter.h
 *
 * Code generation for function 'restrdeter'
 *
 */

#ifndef RESTRDETER_H
#define RESTRDETER_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void restrdeter(emxArray_real_T *eigenvalues, const emxArray_real_T *niini,
                double restr_data[], int restr_size[2], emxArray_real_T *out);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (restrdeter.h) */
