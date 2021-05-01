/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * str2double1.h
 *
 * Code generation for function 'str2double1'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
boolean_T b_copydigits(char_T s1[4], int32_T *idx, const char_T s[2],
                       int32_T *k, boolean_T allowpoint);

boolean_T b_copyexponent(char_T s1[4], int32_T *idx, const char_T s[2],
                         int32_T *k);

void b_readNonFinite(const char_T s[2], int32_T *k, boolean_T *b_finite,
                     real_T *fv);

void b_readfloat(const emlrtStack *sp, char_T s1[4], int32_T *idx,
                 const char_T s[2], int32_T *k, boolean_T allowimag,
                 boolean_T *isimag, boolean_T *b_finite, real_T *nfv,
                 boolean_T *foundsign, boolean_T *success);

void b_skipspaces(const emlrtStack *sp, const char_T s[2], int32_T *k);

boolean_T copydigits(char_T s1[3], int32_T *idx, char_T s, int32_T *k,
                     boolean_T allowpoint);

boolean_T copyexponent(char_T s1[3], int32_T *idx, char_T s, int32_T *k);

void readNonFinite(char_T s, int32_T *k, boolean_T *b_finite, real_T *fv);

void readfloat(const emlrtStack *sp, char_T s1[3], int32_T *idx, char_T s,
               int32_T *k, boolean_T allowimag, boolean_T *isimag,
               boolean_T *b_finite, real_T *nfv, boolean_T *foundsign,
               boolean_T *success);

void skipspaces(const emlrtStack *sp, char_T s, int32_T *k);

/* End of code generation (str2double1.h) */
