/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * HYPrho.h
 *
 * Code generation for function 'HYPrho'
 *
 */

#ifndef HYPRHO_H
#define HYPRHO_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void HYPrho(const emxArray_real_T *u, const emxArray_real_T *cktuning,
            emxArray_real_T *rhoHYP);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (HYPrho.h) */
