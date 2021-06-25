/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: eml_betainc.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef EML_BETAINC_H
#define EML_BETAINC_H

/* Include Files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
double betainc_cf(double x, double a, double b);

double eml_betainc(double x, double a, double b, double lbeta, bool upper);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for eml_betainc.h
 *
 * [EOF]
 */
