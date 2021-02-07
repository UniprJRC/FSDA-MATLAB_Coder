/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * mrdivide_helper.h
 *
 * Code generation for function 'mrdivide_helper'
 *
 */

#ifndef MRDIVIDE_HELPER_H
#define MRDIVIDE_HELPER_H

/* Include files */
#include "addt_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_mrdiv(const emxArray_real_T *A, const creal_T B_data[],
             const int B_size[2], emxArray_creal_T *Y);

void mrdiv(const emxArray_real_T *A, const emxArray_real_T *B,
           emxArray_real_T *Y);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (mrdivide_helper.h) */
