/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * logmvnpdfFS.h
 *
 * Code generation for function 'logmvnpdfFS'
 *
 */

#ifndef LOGMVNPDFFS_H
#define LOGMVNPDFFS_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void logmvnpdfFS(const emxArray_real_T *X, const emxArray_real_T *Mu,
                 const emxArray_real_T *Sigma, emxArray_real_T *y);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (logmvnpdfFS.h) */
