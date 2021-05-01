/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_setop.h
 *
 * Code generation for function 'eml_setop'
 *
 */

#ifndef EML_SETOP_H
#define EML_SETOP_H

/* Include files */
#include "FSMbsb_wrapper_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void do_vectors(double a, const emxArray_real_T *b, double c_data[],
                int *c_size, int ia_data[], int *ia_size, int ib_data[],
                int *ib_size);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (eml_setop.h) */
