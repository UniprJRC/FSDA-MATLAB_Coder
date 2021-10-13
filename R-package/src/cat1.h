/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cat1.h
 *
 * Code generation for function 'cat1'
 *
 */

#ifndef CAT1_H
#define CAT1_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_binary_expand_op(emxArray_real_T *gfind, const emxArray_real_T *gmin1,
                        int i1, int i2, int i3, int i4, const struct_FSM_T *out,
                        int i5, int i6);

void kc_binary_expand_op(emxArray_real_T *MDRenv, const emxArray_real_T *m,
                         const emxArray_real_T *MinSca,
                         const emxArray_real_T *mm);

void mb_binary_expand_op(emxArray_real_T *gfind, const emxArray_real_T *gmin1,
                         int i1, int i2, int i3, int i4,
                         const emxArray_real_T *out_mmd, int i5, int i6);

void vb_binary_expand_op(emxArray_real_T *ord, const emxArray_real_T *r,
                         const emxArray_real_T *ncl, const emxArray_real_T *b,
                         const emxArray_real_T *e);

void xb_binary_expand_op(emxArray_real_T *gval, const emxArray_real_T *gmin1,
                         int i1, int i2, int i3, int i4, const struct_T *out,
                         int i5, int i6);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (cat1.h) */
