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
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include "omp.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_do_vectors(const emxArray_real_T *a, const emxArray_real_T *b,
                  emxArray_real_T *c, emxArray_int32_T *ia, int *ib_size);

void c_do_vectors(const emxArray_real_T *a, const emxArray_real_T *b,
                  emxArray_real_T *c, emxArray_int32_T *ia,
                  emxArray_int32_T *ib);

void d_do_vectors(double a, const emxArray_real_T *b, double c_data[],
                  int c_size[2], int ia_data[], int *ia_size, int ib_data[],
                  int *ib_size);

void do_vectors(double a, const emxArray_real_T *b, double c_data[],
                int *c_size, int ia_data[], int *ia_size, int ib_data[],
                int *ib_size);

void e_do_vectors(const emxArray_real_T *a, const emxArray_real_T *b,
                  emxArray_real_T *c, emxArray_int32_T *ia, int *ib_size);

void f_do_vectors(const emxArray_real_T *a, const emxArray_real32_T *b,
                  emxArray_real_T *c, emxArray_int32_T *ia, int *ib_size);

void g_do_vectors(const emxArray_real_T *a, const emxArray_real_T *b,
                  emxArray_real_T *c, emxArray_int32_T *ia, int *ib_size);

void h_do_vectors(double a, double c_data[], int c_size[2], int ia_data[],
                  int *ia_size, int ib_data[], int *ib_size);

void i_do_vectors(double a, double c_data[], int c_size[2], int ia_data[],
                  int *ia_size, int ib_data[], int *ib_size);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (eml_setop.h) */
