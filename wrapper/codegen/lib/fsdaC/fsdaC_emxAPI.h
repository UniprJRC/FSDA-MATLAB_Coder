/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fsdaC_emxAPI.h
 *
 * Code generation for function 'fsdaC_emxAPI'
 *
 */

#ifndef FSDAC_EMXAPI_H
#define FSDAC_EMXAPI_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern emxArray_boolean_T *emxCreateND_boolean_T(int numDimensions,
                                                 const int *size);

extern emxArray_cell_wrap_39 *emxCreateND_cell_wrap_39(int numDimensions,
                                                       const int *size);

extern emxArray_char_T *emxCreateND_char_T(int numDimensions, const int *size);

extern emxArray_real_T *emxCreateND_real_T(int numDimensions, const int *size);

extern emxArray_boolean_T *
emxCreateWrapperND_boolean_T(bool *data, int numDimensions, const int *size);

extern emxArray_cell_wrap_39 *
emxCreateWrapperND_cell_wrap_39(cell_wrap_39 *data, int numDimensions,
                                const int *size);

extern emxArray_char_T *emxCreateWrapperND_char_T(char *data, int numDimensions,
                                                  const int *size);

extern emxArray_real_T *
emxCreateWrapperND_real_T(double *data, int numDimensions, const int *size);

extern emxArray_boolean_T *emxCreateWrapper_boolean_T(bool *data, int rows,
                                                      int cols);

extern emxArray_cell_wrap_39 *emxCreateWrapper_cell_wrap_39(cell_wrap_39 *data,
                                                            int rows, int cols);

extern emxArray_char_T *emxCreateWrapper_char_T(char *data, int rows, int cols);

extern emxArray_real_T *emxCreateWrapper_real_T(double *data, int rows,
                                                int cols);

extern emxArray_boolean_T *emxCreate_boolean_T(int rows, int cols);

extern emxArray_cell_wrap_39 *emxCreate_cell_wrap_39(int rows, int cols);

extern emxArray_char_T *emxCreate_char_T(int rows, int cols);

extern emxArray_real_T *emxCreate_real_T(int rows, int cols);

extern void emxDestroyArray_boolean_T(emxArray_boolean_T *emxArray);

extern void emxDestroyArray_cell_wrap_39(emxArray_cell_wrap_39 *emxArray);

extern void emxDestroyArray_char_T(emxArray_char_T *emxArray);

extern void emxDestroyArray_real_T(emxArray_real_T *emxArray);

extern void emxDestroy_struct0_T(struct0_T emxArray);

extern void emxDestroy_struct_FSM_T(struct_FSM_T emxArray);

extern void emxDestroy_struct_FSR_T(struct_FSR_T emxArray);

extern void emxDestroy_struct_FSRfan_T(struct_FSRfan_T emxArray);

extern void emxDestroy_struct_FSRlms_T(struct_FSRlms_T emxArray);

extern void emxDestroy_struct_LTSts_T(struct_LTSts_T emxArray);

extern void emxDestroy_struct_LTStsmodel_T(struct_LTStsmodel_T emxArray);

extern void emxDestroy_struct_LXS_T(struct_LXS_T emxArray);

extern void emxDestroy_struct_tclust_T(struct_tclust_T emxArray);

extern void emxInitArray_char_T(emxArray_char_T **pEmxArray, int numDimensions);

extern void emxInitArray_real_T(emxArray_real_T **pEmxArray, int numDimensions);

extern void emxInit_struct0_T(struct0_T *pStruct);

extern void emxInit_struct_FSM_T(struct_FSM_T *pStruct);

extern void emxInit_struct_FSR_T(struct_FSR_T *pStruct);

extern void emxInit_struct_FSRfan_T(struct_FSRfan_T *pStruct);

extern void emxInit_struct_FSRlms_T(struct_FSRlms_T *pStruct);

extern void emxInit_struct_LTSts_T(struct_LTSts_T *pStruct);

extern void emxInit_struct_LTStsmodel_T(struct_LTStsmodel_T *pStruct);

extern void emxInit_struct_LXS_T(struct_LXS_T *pStruct);

extern void emxInit_struct_tclust_T(struct_tclust_T *pStruct);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (fsdaC_emxAPI.h) */
