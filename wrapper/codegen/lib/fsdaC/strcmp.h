/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * strcmp.h
 *
 * Code generation for function 'strcmp'
 *
 */

#ifndef STRCMP_H
#define STRCMP_H

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
bool b_strcmp(const char a_data[], const int a_size[2]);

bool c_strcmp(const char a_data[], const int a_size[2]);

bool d_strcmp(const char a_data[], const int a_size[2]);

bool e_strcmp(const char a_data[], const int a_size[2]);

bool f_strcmp(const char a_data[], const int a_size[2]);

bool g_strcmp(const char a_data[], const int a_size[2]);

bool h_strcmp(const emxArray_char_T *a);

bool i_strcmp(const emxArray_char_T *a);

bool j_strcmp(const emxArray_char_T *a);

bool k_strcmp(const emxArray_char_T *a);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (strcmp.h) */
