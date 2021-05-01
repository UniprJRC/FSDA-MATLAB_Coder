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

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
boolean_T b_strcmp(const char_T a_data[], const int32_T a_size[2]);

boolean_T c_strcmp(const char_T a_data[], const int32_T a_size[2]);

boolean_T d_strcmp(const char_T a_data[], const int32_T a_size[2]);

/* End of code generation (strcmp.h) */
