/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * addt_emxAPI.h
 *
 * Code generation for function 'addt_emxAPI'
 *
 */

#ifndef ADDT_EMXAPI_H
#define ADDT_EMXAPI_H

/* Include files */
#include "addt_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern emxArray_real_T *emxCreateND_real_T(int numDimensions, const int *size);

extern emxArray_real_T *
emxCreateWrapperND_real_T(double *data, int numDimensions, const int *size);

extern emxArray_real_T *emxCreateWrapper_real_T(double *data, int rows,
                                                int cols);

extern emxArray_real_T *emxCreate_real_T(int rows, int cols);

extern void emxDestroyArray_real_T(emxArray_real_T *emxArray);

extern void emxInitArray_real_T(emxArray_real_T **pEmxArray, int numDimensions);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (addt_emxAPI.h) */
