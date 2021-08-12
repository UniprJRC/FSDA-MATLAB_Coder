/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_fsdaC_api.c
 *
 * Code generation for function 'FSM_wrapper'
 *
 */

/* Include files */
#include "_coder_fsdaC_api.h"
#include "_coder_fsdaC_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131610U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "fsdaC",                                              /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

/* Function Declarations */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                emxArray_real_T *y);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                emxArray_real_T *y);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bonflev,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2]);

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);

static void
c_emxFreeStruct_matlab_internal(f_matlab_internal_coder_tabular *pStruct);

static void c_emxFreeStruct_struct_LTStsmod(struct_LTStsmodel_T *pStruct);

static void
c_emxInitStruct_matlab_internal(const emlrtStack *sp,
                                f_matlab_internal_coder_tabular *pStruct,
                                boolean_T doPush);

static void c_emxInitStruct_struct_LTStsmod(const emlrtStack *sp,
                                            struct_LTStsmodel_T *pStruct,
                                            boolean_T doPush);

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nsamp,
                                const char_T *identifier, real_T **y_data,
                                int32_T y_size[2]);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2]);

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);

static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T **y_data, int32_T y_size[2]);

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *crit,
                               const char_T *identifier, emxArray_char_T *y);

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_FSR_T *u);

static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *InitialEst,
                                const char_T *identifier, struct1_T *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y,
                             const char_T *identifier, emxArray_real_T *y);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const struct_FSM_T *u);

static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray,
                                     int32_T oldNumel);

static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray,
                                     int32_T oldNumel);

static void emxFreeMatrix_cell_wrap_56(cell_wrap_56 pMatrix[4]);

static void emxFreeMatrix_cell_wrap_6(cell_wrap_6 pMatrix[4]);

static void emxFreeStruct_cell_wrap_43(cell_wrap_43 *pStruct);

static void emxFreeStruct_cell_wrap_56(cell_wrap_56 *pStruct);

static void emxFreeStruct_cell_wrap_6(cell_wrap_6 *pStruct);

static void emxFreeStruct_struct1_T(struct1_T *pStruct);

static void emxFreeStruct_struct_FSM_T(struct_FSM_T *pStruct);

static void emxFreeStruct_struct_FSR_T(struct_FSR_T *pStruct);

static void emxFreeStruct_struct_FSRfan_T(struct_FSRfan_T *pStruct);

static void emxFreeStruct_struct_FSRlms_T(struct_FSRlms_T *pStruct);

static void emxFreeStruct_struct_LTSts_T(struct_LTSts_T *pStruct);

static void emxFreeStruct_struct_LXS_T(struct_LXS_T *pStruct);

static void emxFreeStruct_struct_MMreg_T(struct_MMreg_T *pStruct);

static void emxFreeStruct_struct_MMregeda_T(struct_MMregeda_T *pStruct);

static void emxFreeStruct_struct_Sreg_T(struct_Sreg_T *pStruct);

static void emxFreeStruct_struct_Sregeda_T(struct_Sregeda_T *pStruct);

static void emxFreeStruct_struct_tclust_T(struct_tclust_T *pStruct);

static void emxFreeStruct_table(table *pStruct);

static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);

static void emxFree_cell_wrap_43(emxArray_cell_wrap_43 **pEmxArray);

static void emxFree_char_T(emxArray_char_T **pEmxArray);

static void emxFree_real_T(emxArray_real_T **pEmxArray);

static void emxInitMatrix_cell_wrap_56(const emlrtStack *sp,
                                       cell_wrap_56 pMatrix[4],
                                       boolean_T doPush);

static void emxInitMatrix_cell_wrap_6(const emlrtStack *sp,
                                      cell_wrap_6 pMatrix[4], boolean_T doPush);

static void emxInitStruct_cell_wrap_56(const emlrtStack *sp,
                                       cell_wrap_56 *pStruct, boolean_T doPush);

static void emxInitStruct_cell_wrap_6(const emlrtStack *sp,
                                      cell_wrap_6 *pStruct, boolean_T doPush);

static void emxInitStruct_struct0_T(struct0_T *pStruct);

static void emxInitStruct_struct1_T(const emlrtStack *sp, struct1_T *pStruct,
                                    boolean_T doPush);

static void emxInitStruct_struct_FSM_T(const emlrtStack *sp,
                                       struct_FSM_T *pStruct, boolean_T doPush);

static void emxInitStruct_struct_FSR_T(const emlrtStack *sp,
                                       struct_FSR_T *pStruct, boolean_T doPush);

static void emxInitStruct_struct_FSRfan_T(const emlrtStack *sp,
                                          struct_FSRfan_T *pStruct,
                                          boolean_T doPush);

static void emxInitStruct_struct_FSRlms_T(const emlrtStack *sp,
                                          struct_FSRlms_T *pStruct,
                                          boolean_T doPush);

static void emxInitStruct_struct_LTSts_T(const emlrtStack *sp,
                                         struct_LTSts_T *pStruct,
                                         boolean_T doPush);

static void emxInitStruct_struct_LXS_T(const emlrtStack *sp,
                                       struct_LXS_T *pStruct, boolean_T doPush);

static void emxInitStruct_struct_MMreg_T(const emlrtStack *sp,
                                         struct_MMreg_T *pStruct,
                                         boolean_T doPush);

static void emxInitStruct_struct_MMregeda_T(const emlrtStack *sp,
                                            struct_MMregeda_T *pStruct,
                                            boolean_T doPush);

static void emxInitStruct_struct_Sreg_T(const emlrtStack *sp,
                                        struct_Sreg_T *pStruct,
                                        boolean_T doPush);

static void emxInitStruct_struct_Sregeda_T(const emlrtStack *sp,
                                           struct_Sregeda_T *pStruct,
                                           boolean_T doPush);

static void emxInitStruct_struct_tclust_T(const emlrtStack *sp,
                                          struct_tclust_T *pStruct,
                                          boolean_T doPush);

static void emxInitStruct_table(const emlrtStack *sp, table *pStruct,
                                boolean_T doPush);

static void emxInit_boolean_T(const emlrtStack *sp,
                              emxArray_boolean_T **pEmxArray,
                              int32_T numDimensions, boolean_T doPush);

static void emxInit_cell_wrap_43(const emlrtStack *sp,
                                 emxArray_cell_wrap_43 **pEmxArray,
                                 int32_T numDimensions, boolean_T doPush);

static void emxInit_char_T(const emlrtStack *sp, emxArray_char_T **pEmxArray,
                           int32_T numDimensions, boolean_T doPush);

static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
                           int32_T numDimensions, boolean_T doPush);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_char_T *y);

static const mxArray *f_emlrt_marshallOut(const emxArray_real_T *u);

static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                struct1_T *y);

static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *init,
                                 const char_T *identifier);

static const mxArray *g_emlrt_marshallOut(const emxArray_real_T *u);

static void gb_emlrt_marshallIn(const emlrtStack *sp,
                                const mxArray *restrfactor,
                                const char_T *identifier,
                                struct_tclustrestrfactor_T *y);

static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static const mxArray *h_emlrt_marshallOut(const real_T u);

static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                struct_tclustrestrfactor_T *y);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *m0,
                               const char_T *identifier, emxArray_real_T *y);

static const mxArray *i_emlrt_marshallOut(const struct_FSRfan_T *u);

static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                char_T y[3]);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *j_emlrt_marshallOut(const emxArray_real_T *u);

static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static boolean_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *msg,
                                    const char_T *identifier);

static const mxArray *k_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_LTSts_T *u);

static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T **ret_data, int32_T ret_size[2]);

static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static const mxArray *l_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T u_size[2]);

static void lb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_char_T *ret);

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bsbsteps,
                               const char_T *identifier, emxArray_real_T *y);

static const mxArray *m_emlrt_marshallOut(const emlrtStack *sp, const table *u);

static real_T mb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId);

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *n_emlrt_marshallOut(const emlrtStack *sp,
                                          const cell_wrap_56 u[4]);

static void nb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *prob,
                               const char_T *identifier, emxArray_real_T *y);

static const mxArray *o_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_LXS_T *u);

static boolean_T ob_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                     const emlrtMsgIdentifier *msgId);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *p_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_MMreg_T *u);

static void pb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lms,
                               const char_T *identifier, struct_FSRlms_T *y);

static const mxArray *q_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_MMregeda_T *u);

static void qb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct_FSRlms_T *y);

static const mxArray *r_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_Sreg_T *u);

static void rb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *s_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_Sregeda_T *u);

static void sb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static struct_LTStslshiftlocref_T
t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lshiftlocref,
                   const char_T *identifier);

static const mxArray *t_emlrt_marshallOut(const struct_addt_T u);

static void tb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static struct_LTStslshiftlocref_T
u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                   const emlrtMsgIdentifier *parentId);

static const mxArray *u_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T u_size);

static void ub_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T **ret_data, int32_T ret_size[2]);

static struct_LXSlms_T v_emlrt_marshallIn(const emlrtStack *sp,
                                          const mxArray *lts,
                                          const char_T *identifier);

static const mxArray *v_emlrt_marshallOut(const struct_tclust_T *u);

static void vb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, char_T ret[3]);

static struct_LXSlms_T w_emlrt_marshallIn(const emlrtStack *sp,
                                          const mxArray *u,
                                          const emlrtMsgIdentifier *parentId);

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *model,
                               const char_T *identifier,
                               struct_LTStsmodel_T *y);

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct_LTStsmodel_T *y);

/* Function Definitions */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                emxArray_real_T *y)
{
  sb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  jb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  y = NULL;
  iv[0] = u->size[0];
  iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  b_i = 0;
  while (b_i < u->size[1]) {
    for (b_i = 0; b_i < u->size[0]; b_i++) {
      pData[i] = u->data[b_i];
      i++;
    }
    b_i = 1;
  }
  emlrtAssign(&y, m);
  return y;
}

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                emxArray_real_T *y)
{
  tb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bonflev,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  real_T *r;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(bonflev), &thisId, &r, y_size);
  *y_data = r;
  emlrtDestroyArray(&bonflev);
}

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  y = NULL;
  iv[0] = u->size[0];
  iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[1]; b_i++) {
    for (c_i = 0; c_i < u->size[0]; c_i++) {
      pData[i] = u->data[c_i + u->size[0] * b_i];
      i++;
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static void
c_emxFreeStruct_matlab_internal(f_matlab_internal_coder_tabular *pStruct)
{
  emxFreeMatrix_cell_wrap_56(pStruct->descrs);
  emxFreeMatrix_cell_wrap_56(pStruct->units);
}

static void c_emxFreeStruct_struct_LTStsmod(struct_LTStsmodel_T *pStruct)
{
  emxFree_real_T(&pStruct->lshift);
  emxFree_real_T(&pStruct->ARp);
  emxFree_real_T(&pStruct->X);
}

static void
c_emxInitStruct_matlab_internal(const emlrtStack *sp,
                                f_matlab_internal_coder_tabular *pStruct,
                                boolean_T doPush)
{
  emxInitMatrix_cell_wrap_56(sp, pStruct->descrs, doPush);
  emxInitMatrix_cell_wrap_56(sp, pStruct->units, doPush);
}

static void c_emxInitStruct_struct_LTStsmod(const emlrtStack *sp,
                                            struct_LTStsmodel_T *pStruct,
                                            boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->lshift, 2, doPush);
  emxInit_real_T(sp, &pStruct->ARp, 2, doPush);
  emxInit_real_T(sp, &pStruct->X, 2, doPush);
}

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nsamp,
                                const char_T *identifier, real_T **y_data,
                                int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  real_T *r;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  db_emlrt_marshallIn(sp, emlrtAlias(nsamp), &thisId, &r, y_size);
  *y_data = r;
  emlrtDestroyArray(&nsamp);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2])
{
  kb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u)
{
  static const int32_T iv[2] = {0, 0};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &u->data[0]);
  emlrtSetDimensions((mxArray *)m, &u->size[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T **y_data, int32_T y_size[2])
{
  ub_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *crit,
                               const char_T *identifier, emxArray_char_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(crit), &thisId, y);
  emlrtDestroyArray(&crit);
}

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_FSR_T *u)
{
  static const int32_T iv1[2] = {1, 3};
  static const char_T *sv[13] = {
      "ListOut",      "outliers",  "mdr",  "Un",     "nout",
      "beta",         "scale",     "mdag", "ListCl", "VIOMout",
      "fittedvalues", "residuals", "class"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 13, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"ListOut",
                      f_emlrt_marshallOut(u->ListOut), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliers",
                      f_emlrt_marshallOut(u->outliers), 1);
  b_y = NULL;
  iv[0] = u->mdr->size[0];
  iv[1] = u->mdr->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->mdr->size[1]; b_i++) {
    for (c_i = 0; c_i < u->mdr->size[0]; c_i++) {
      pData[i] = u->mdr->data[c_i + u->mdr->size[0] * b_i];
      i++;
    }
  }
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"mdr", b_y, 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Un", c_emlrt_marshallOut(u->Un),
                      3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"nout",
                      c_emlrt_marshallOut(u->nout), 4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"beta",
                      g_emlrt_marshallOut(u->beta), 5);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"scale",
                      h_emlrt_marshallOut(u->scale), 6);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"mdag",
                      c_emlrt_marshallOut(u->mdag), 7);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"ListCl",
                      f_emlrt_marshallOut(u->ListCl), 8);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"VIOMout",
                      f_emlrt_marshallOut(u->VIOMout), 9);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"fittedvalues",
                      b_emlrt_marshallOut(u->fittedvalues), 10);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"residuals",
                      b_emlrt_marshallOut(u->residuals), 11);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 3, m, &u->class[0]);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"class", c_y, 12);
  return y;
}

static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *InitialEst,
                                const char_T *identifier, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  fb_emlrt_marshallIn(sp, emlrtAlias(InitialEst), &thisId, y);
  emlrtDestroyArray(&InitialEst);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y,
                             const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(Y), &thisId, y);
  emlrtDestroyArray(&Y);
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const struct_FSM_T *u)
{
  static const char_T *sv[8] = {"outliers", "loc", "cov",  "md",
                                "mmd",      "Un",  "nout", "class"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 8, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliers",
                      b_emlrt_marshallOut(u->outliers), 0);
  b_y = NULL;
  iv[0] = u->loc->size[0];
  iv[1] = u->loc->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->loc->size[1]; b_i++) {
    c_i = 0;
    while (c_i < u->loc->size[0]) {
      pData[i] = u->loc->data[u->loc->size[0] * b_i];
      i++;
      c_i = 1;
    }
  }
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"loc", b_y, 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"cov", c_emlrt_marshallOut(u->cov),
                      2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"md", b_emlrt_marshallOut(u->md),
                      3);
  c_y = NULL;
  iv[0] = u->mmd->size[0];
  iv[1] = u->mmd->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->mmd->size[1]; b_i++) {
    for (c_i = 0; c_i < u->mmd->size[0]; c_i++) {
      pData[i] = u->mmd->data[c_i + u->mmd->size[0] * b_i];
      i++;
    }
  }
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"mmd", c_y, 4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Un", c_emlrt_marshallOut(u->Un),
                      5);
  d_y = NULL;
  iv[0] = u->nout->size[0];
  iv[1] = u->nout->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->nout->size[1]; b_i++) {
    for (c_i = 0; c_i < u->nout->size[0]; c_i++) {
      pData[i] = u->nout->data[c_i + u->nout->size[0] * b_i];
      i++;
    }
  }
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"nout", d_y, 6);
  e_y = NULL;
  iv[0] = 1;
  iv[1] = u->class.size[1];
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, u->class.size[1], m,
                           &u->class.data[0]);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"class", e_y, 7);
  return y;
}

static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray,
                                     int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = emlrtCallocMex((uint32_T)i, sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }
    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray,
                                     int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }
    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxFreeMatrix_cell_wrap_56(cell_wrap_56 pMatrix[4])
{
  int32_T i;
  for (i = 0; i < 4; i++) {
    emxFreeStruct_cell_wrap_56(&pMatrix[i]);
  }
}

static void emxFreeMatrix_cell_wrap_6(cell_wrap_6 pMatrix[4])
{
  int32_T i;
  for (i = 0; i < 4; i++) {
    emxFreeStruct_cell_wrap_6(&pMatrix[i]);
  }
}

static void emxFreeStruct_cell_wrap_43(cell_wrap_43 *pStruct)
{
  emxFree_real_T(&pStruct->f1);
}

static void emxFreeStruct_cell_wrap_56(cell_wrap_56 *pStruct)
{
  emxFree_char_T(&pStruct->f1);
}

static void emxFreeStruct_cell_wrap_6(cell_wrap_6 *pStruct)
{
  emxFree_real_T(&pStruct->f1);
}

static void emxFreeStruct_struct1_T(struct1_T *pStruct)
{
  emxFree_real_T(&pStruct->beta);
}

static void emxFreeStruct_struct_FSM_T(struct_FSM_T *pStruct)
{
  emxFree_real_T(&pStruct->outliers);
  emxFree_real_T(&pStruct->loc);
  emxFree_real_T(&pStruct->cov);
  emxFree_real_T(&pStruct->md);
  emxFree_real_T(&pStruct->mmd);
  emxFree_real_T(&pStruct->Un);
  emxFree_real_T(&pStruct->nout);
}

static void emxFreeStruct_struct_FSR_T(struct_FSR_T *pStruct)
{
  emxFree_real_T(&pStruct->ListOut);
  emxFree_real_T(&pStruct->outliers);
  emxFree_real_T(&pStruct->mdr);
  emxFree_real_T(&pStruct->Un);
  emxFree_real_T(&pStruct->nout);
  emxFree_real_T(&pStruct->beta);
  emxFree_real_T(&pStruct->mdag);
  emxFree_real_T(&pStruct->ListCl);
  emxFree_real_T(&pStruct->VIOMout);
  emxFree_real_T(&pStruct->fittedvalues);
  emxFree_real_T(&pStruct->residuals);
}

static void emxFreeStruct_struct_FSRfan_T(struct_FSRfan_T *pStruct)
{
  emxFree_real_T(&pStruct->Score);
  emxFree_real_T(&pStruct->la);
  emxFree_real_T(&pStruct->bs);
  emxFree_cell_wrap_43(&pStruct->Un);
  emxFree_real_T(&pStruct->y);
  emxFree_real_T(&pStruct->X);
  emxFree_real_T(&pStruct->Scorep);
  emxFree_real_T(&pStruct->Scoren);
  emxFree_real_T(&pStruct->Scoreb);
}

static void emxFreeStruct_struct_FSRlms_T(struct_FSRlms_T *pStruct)
{
  emxFree_real_T(&pStruct->bsb);
}

static void emxFreeStruct_struct_LTSts_T(struct_LTSts_T *pStruct)
{
  emxFree_real_T(&pStruct->RES);
  emxFree_real_T(&pStruct->Hsubset);
  emxFree_real_T(&pStruct->B);
  emxFree_real_T(&pStruct->yhat);
  emxFree_real_T(&pStruct->outliers);
  emxFree_real_T(&pStruct->outliersPval);
  emxFree_real_T(&pStruct->numscale2);
  emxFree_real_T(&pStruct->BestIndexes);
  emxFree_real_T(&pStruct->residuals);
  emxFree_real_T(&pStruct->bs);
  emxFree_boolean_T(&pStruct->weights);
  emxFree_real_T(&pStruct->Likloc);
  emxFree_real_T(&pStruct->y);
  emxFree_real_T(&pStruct->X);
  emxFree_real_T(&pStruct->invXX);
  emxFreeStruct_table(&pStruct->Btable);
}

static void emxFreeStruct_struct_LXS_T(struct_LXS_T *pStruct)
{
  emxFree_boolean_T(&pStruct->weights);
  emxFree_real_T(&pStruct->beta);
  emxFree_real_T(&pStruct->residuals);
  emxFree_real_T(&pStruct->bs);
  emxFree_real_T(&pStruct->outliers);
  emxFree_real_T(&pStruct->X);
  emxFree_real_T(&pStruct->y);
}

static void emxFreeStruct_struct_MMreg_T(struct_MMreg_T *pStruct)
{
  emxFree_real_T(&pStruct->beta);
  emxFree_real_T(&pStruct->fittedvalues);
  emxFree_real_T(&pStruct->residuals);
  emxFree_real_T(&pStruct->Sbeta);
  emxFree_real_T(&pStruct->weights);
  emxFree_real_T(&pStruct->outliers);
  emxFree_char_T(&pStruct->rhofuncS);
  emxFree_real_T(&pStruct->rhofuncparamS);
  emxFree_char_T(&pStruct->rhofunc);
  emxFree_real_T(&pStruct->rhofuncparam);
  emxFree_real_T(&pStruct->X);
  emxFree_real_T(&pStruct->y);
}

static void emxFreeStruct_struct_MMregeda_T(struct_MMregeda_T *pStruct)
{
  emxFree_real_T(&pStruct->Beta);
  emxFree_real_T(&pStruct->RES);
  emxFree_real_T(&pStruct->Weights);
  emxFree_boolean_T(&pStruct->Outliers);
  emxFree_real_T(&pStruct->Sbeta);
  emxFree_char_T(&pStruct->rhofunc);
  emxFree_real_T(&pStruct->rhofuncparam);
  emxFree_real_T(&pStruct->eff);
  emxFree_real_T(&pStruct->X);
  emxFree_real_T(&pStruct->y);
}

static void emxFreeStruct_struct_Sreg_T(struct_Sreg_T *pStruct)
{
  emxFree_real_T(&pStruct->beta);
  emxFree_real_T(&pStruct->bs);
  emxFree_real_T(&pStruct->weights);
  emxFree_real_T(&pStruct->fittedvalues);
  emxFree_real_T(&pStruct->residuals);
  emxFree_real_T(&pStruct->outliers);
  emxFree_char_T(&pStruct->rhofunc);
  emxFree_real_T(&pStruct->rhofuncparam);
  emxFree_real_T(&pStruct->X);
  emxFree_real_T(&pStruct->y);
}

static void emxFreeStruct_struct_Sregeda_T(struct_Sregeda_T *pStruct)
{
  emxFree_real_T(&pStruct->Beta);
  emxFree_real_T(&pStruct->Scale);
  emxFree_real_T(&pStruct->BS);
  emxFree_real_T(&pStruct->Weights);
  emxFree_real_T(&pStruct->RES);
  emxFree_real_T(&pStruct->Singsub);
  emxFree_boolean_T(&pStruct->Outliers);
  emxFree_real_T(&pStruct->bdp);
  emxFree_char_T(&pStruct->rhofunc);
  emxFree_real_T(&pStruct->rhofuncparam);
  emxFree_real_T(&pStruct->X);
  emxFree_real_T(&pStruct->y);
}

static void emxFreeStruct_struct_tclust_T(struct_tclust_T *pStruct)
{
  emxFree_real_T(&pStruct->muopt);
  emxFree_real_T(&pStruct->sigmaopt);
  emxFree_real_T(&pStruct->idx);
  emxFree_real_T(&pStruct->postprob);
  emxFree_real_T(&pStruct->bs);
  emxFree_real_T(&pStruct->fullsol);
  emxFree_real_T(&pStruct->Y);
}

static void emxFreeStruct_table(table *pStruct)
{
  c_emxFreeStruct_matlab_internal(&pStruct->varDim);
  emxFreeMatrix_cell_wrap_6(pStruct->data);
}

static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) &&
        (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }
    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_boolean_T *)NULL;
  }
}

static void emxFree_cell_wrap_43(emxArray_cell_wrap_43 **pEmxArray)
{
  int32_T i;
  int32_T numEl;
  if (*pEmxArray != (emxArray_cell_wrap_43 *)NULL) {
    if ((*pEmxArray)->data != (cell_wrap_43 *)NULL) {
      numEl = 1;
      for (i = 0; i < (*pEmxArray)->numDimensions; i++) {
        numEl *= (*pEmxArray)->size[i];
      }
      for (i = 0; i < numEl; i++) {
        emxFreeStruct_cell_wrap_43(&(*pEmxArray)->data[i]);
      }
      if ((*pEmxArray)->canFreeData) {
        emlrtFreeMex((*pEmxArray)->data);
      }
    }
    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_cell_wrap_43 *)NULL;
  }
}

static void emxFree_char_T(emxArray_char_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }
    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_char_T *)NULL;
  }
}

static void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }
    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

static void emxInitMatrix_cell_wrap_56(const emlrtStack *sp,
                                       cell_wrap_56 pMatrix[4],
                                       boolean_T doPush)
{
  int32_T i;
  for (i = 0; i < 4; i++) {
    emxInitStruct_cell_wrap_56(sp, &pMatrix[i], doPush);
  }
}

static void emxInitMatrix_cell_wrap_6(const emlrtStack *sp,
                                      cell_wrap_6 pMatrix[4], boolean_T doPush)
{
  int32_T i;
  for (i = 0; i < 4; i++) {
    emxInitStruct_cell_wrap_6(sp, &pMatrix[i], doPush);
  }
}

static void emxInitStruct_cell_wrap_56(const emlrtStack *sp,
                                       cell_wrap_56 *pStruct, boolean_T doPush)
{
  emxInit_char_T(sp, &pStruct->f1, 2, doPush);
}

static void emxInitStruct_cell_wrap_6(const emlrtStack *sp,
                                      cell_wrap_6 *pStruct, boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->f1, 1, doPush);
}

static void emxInitStruct_struct0_T(struct0_T *pStruct)
{
  pStruct->Description.size[0] = 0;
  pStruct->Description.size[1] = 0;
}

static void emxInitStruct_struct1_T(const emlrtStack *sp, struct1_T *pStruct,
                                    boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->beta, 1, doPush);
}

static void emxInitStruct_struct_FSM_T(const emlrtStack *sp,
                                       struct_FSM_T *pStruct, boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->outliers, 2, doPush);
  emxInit_real_T(sp, &pStruct->loc, 2, doPush);
  emxInit_real_T(sp, &pStruct->cov, 2, doPush);
  emxInit_real_T(sp, &pStruct->md, 2, doPush);
  emxInit_real_T(sp, &pStruct->mmd, 2, doPush);
  emxInit_real_T(sp, &pStruct->Un, 2, doPush);
  emxInit_real_T(sp, &pStruct->nout, 2, doPush);
  pStruct->class.size[0] = 0;
  pStruct->class.size[1] = 0;
}

static void emxInitStruct_struct_FSR_T(const emlrtStack *sp,
                                       struct_FSR_T *pStruct, boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->ListOut, 2, doPush);
  emxInit_real_T(sp, &pStruct->outliers, 2, doPush);
  emxInit_real_T(sp, &pStruct->mdr, 2, doPush);
  emxInit_real_T(sp, &pStruct->Un, 2, doPush);
  emxInit_real_T(sp, &pStruct->nout, 2, doPush);
  emxInit_real_T(sp, &pStruct->beta, 1, doPush);
  emxInit_real_T(sp, &pStruct->mdag, 2, doPush);
  emxInit_real_T(sp, &pStruct->ListCl, 2, doPush);
  emxInit_real_T(sp, &pStruct->VIOMout, 2, doPush);
  emxInit_real_T(sp, &pStruct->fittedvalues, 2, doPush);
  emxInit_real_T(sp, &pStruct->residuals, 2, doPush);
}

static void emxInitStruct_struct_FSRfan_T(const emlrtStack *sp,
                                          struct_FSRfan_T *pStruct,
                                          boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->Score, 2, doPush);
  emxInit_real_T(sp, &pStruct->la, 2, doPush);
  emxInit_real_T(sp, &pStruct->bs, 2, doPush);
  emxInit_cell_wrap_43(sp, &pStruct->Un, 1, doPush);
  emxInit_real_T(sp, &pStruct->y, 1, doPush);
  emxInit_real_T(sp, &pStruct->X, 2, doPush);
  emxInit_real_T(sp, &pStruct->Scorep, 2, doPush);
  emxInit_real_T(sp, &pStruct->Scoren, 2, doPush);
  emxInit_real_T(sp, &pStruct->Scoreb, 2, doPush);
}

static void emxInitStruct_struct_FSRlms_T(const emlrtStack *sp,
                                          struct_FSRlms_T *pStruct,
                                          boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->bsb, 1, doPush);
}

static void emxInitStruct_struct_LTSts_T(const emlrtStack *sp,
                                         struct_LTSts_T *pStruct,
                                         boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->RES, 2, doPush);
  emxInit_real_T(sp, &pStruct->Hsubset, 2, doPush);
  emxInit_real_T(sp, &pStruct->B, 2, doPush);
  pStruct->posLS.size[0] = 0;
  pStruct->posLS.size[1] = 0;
  emxInit_real_T(sp, &pStruct->yhat, 1, doPush);
  emxInit_real_T(sp, &pStruct->outliers, 1, doPush);
  emxInit_real_T(sp, &pStruct->outliersPval, 1, doPush);
  emxInit_real_T(sp, &pStruct->numscale2, 2, doPush);
  emxInit_real_T(sp, &pStruct->BestIndexes, 2, doPush);
  emxInit_real_T(sp, &pStruct->residuals, 1, doPush);
  emxInit_real_T(sp, &pStruct->bs, 1, doPush);
  emxInit_boolean_T(sp, &pStruct->weights, 1, doPush);
  emxInit_real_T(sp, &pStruct->Likloc, 2, doPush);
  emxInit_real_T(sp, &pStruct->y, 1, doPush);
  emxInit_real_T(sp, &pStruct->X, 2, doPush);
  emxInit_real_T(sp, &pStruct->invXX, 2, doPush);
  emxInitStruct_table(sp, &pStruct->Btable, doPush);
  pStruct->LastHarmonicPval.size[0] = 0;
  pStruct->LastHarmonicPval.size[1] = 0;
  pStruct->LevelShiftPval.size[0] = 0;
  pStruct->LevelShiftPval.size[1] = 0;
}

static void emxInitStruct_struct_LXS_T(const emlrtStack *sp,
                                       struct_LXS_T *pStruct, boolean_T doPush)
{
  emxInit_boolean_T(sp, &pStruct->weights, 1, doPush);
  emxInit_real_T(sp, &pStruct->beta, 1, doPush);
  emxInit_real_T(sp, &pStruct->residuals, 1, doPush);
  emxInit_real_T(sp, &pStruct->bs, 2, doPush);
  emxInit_real_T(sp, &pStruct->outliers, 2, doPush);
  emxInit_real_T(sp, &pStruct->X, 2, doPush);
  emxInit_real_T(sp, &pStruct->y, 2, doPush);
}

static void emxInitStruct_struct_MMreg_T(const emlrtStack *sp,
                                         struct_MMreg_T *pStruct,
                                         boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->beta, 1, doPush);
  emxInit_real_T(sp, &pStruct->fittedvalues, 1, doPush);
  emxInit_real_T(sp, &pStruct->residuals, 1, doPush);
  emxInit_real_T(sp, &pStruct->Sbeta, 1, doPush);
  emxInit_real_T(sp, &pStruct->weights, 1, doPush);
  emxInit_real_T(sp, &pStruct->outliers, 2, doPush);
  emxInit_char_T(sp, &pStruct->rhofuncS, 2, doPush);
  emxInit_real_T(sp, &pStruct->rhofuncparamS, 2, doPush);
  emxInit_char_T(sp, &pStruct->rhofunc, 2, doPush);
  emxInit_real_T(sp, &pStruct->rhofuncparam, 2, doPush);
  emxInit_real_T(sp, &pStruct->X, 2, doPush);
  emxInit_real_T(sp, &pStruct->y, 2, doPush);
}

static void emxInitStruct_struct_MMregeda_T(const emlrtStack *sp,
                                            struct_MMregeda_T *pStruct,
                                            boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->Beta, 2, doPush);
  emxInit_real_T(sp, &pStruct->RES, 2, doPush);
  emxInit_real_T(sp, &pStruct->Weights, 2, doPush);
  emxInit_boolean_T(sp, &pStruct->Outliers, 2, doPush);
  emxInit_real_T(sp, &pStruct->Sbeta, 1, doPush);
  emxInit_char_T(sp, &pStruct->rhofunc, 2, doPush);
  emxInit_real_T(sp, &pStruct->rhofuncparam, 2, doPush);
  emxInit_real_T(sp, &pStruct->eff, 2, doPush);
  emxInit_real_T(sp, &pStruct->X, 2, doPush);
  emxInit_real_T(sp, &pStruct->y, 1, doPush);
}

static void emxInitStruct_struct_Sreg_T(const emlrtStack *sp,
                                        struct_Sreg_T *pStruct,
                                        boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->beta, 1, doPush);
  emxInit_real_T(sp, &pStruct->bs, 2, doPush);
  emxInit_real_T(sp, &pStruct->weights, 1, doPush);
  emxInit_real_T(sp, &pStruct->fittedvalues, 1, doPush);
  emxInit_real_T(sp, &pStruct->residuals, 1, doPush);
  emxInit_real_T(sp, &pStruct->outliers, 2, doPush);
  emxInit_char_T(sp, &pStruct->rhofunc, 2, doPush);
  emxInit_real_T(sp, &pStruct->rhofuncparam, 2, doPush);
  emxInit_real_T(sp, &pStruct->X, 2, doPush);
  emxInit_real_T(sp, &pStruct->y, 2, doPush);
}

static void emxInitStruct_struct_Sregeda_T(const emlrtStack *sp,
                                           struct_Sregeda_T *pStruct,
                                           boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->Beta, 2, doPush);
  emxInit_real_T(sp, &pStruct->Scale, 1, doPush);
  emxInit_real_T(sp, &pStruct->BS, 2, doPush);
  emxInit_real_T(sp, &pStruct->Weights, 2, doPush);
  emxInit_real_T(sp, &pStruct->RES, 2, doPush);
  emxInit_real_T(sp, &pStruct->Singsub, 1, doPush);
  emxInit_boolean_T(sp, &pStruct->Outliers, 2, doPush);
  emxInit_real_T(sp, &pStruct->bdp, 1, doPush);
  emxInit_char_T(sp, &pStruct->rhofunc, 2, doPush);
  emxInit_real_T(sp, &pStruct->rhofuncparam, 2, doPush);
  emxInit_real_T(sp, &pStruct->X, 2, doPush);
  emxInit_real_T(sp, &pStruct->y, 1, doPush);
}

static void emxInitStruct_struct_tclust_T(const emlrtStack *sp,
                                          struct_tclust_T *pStruct,
                                          boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->muopt, 2, doPush);
  emxInit_real_T(sp, &pStruct->sigmaopt, 3, doPush);
  emxInit_real_T(sp, &pStruct->idx, 1, doPush);
  emxInit_real_T(sp, &pStruct->postprob, 2, doPush);
  pStruct->MIXMIX.size[0] = 0;
  pStruct->MIXMIX.size[1] = 0;
  pStruct->MIXCLA.size[0] = 0;
  pStruct->MIXCLA.size[1] = 0;
  pStruct->CLACLA.size[0] = 0;
  pStruct->CLACLA.size[1] = 0;
  emxInit_real_T(sp, &pStruct->bs, 2, doPush);
  emxInit_real_T(sp, &pStruct->fullsol, 1, doPush);
  emxInit_real_T(sp, &pStruct->Y, 2, doPush);
}

static void emxInitStruct_table(const emlrtStack *sp, table *pStruct,
                                boolean_T doPush)
{
  c_emxInitStruct_matlab_internal(sp, &pStruct->varDim, doPush);
  emxInitMatrix_cell_wrap_6(sp, pStruct->data, doPush);
  emxInitStruct_struct0_T(&pStruct->arrayProps);
}

static void emxInit_boolean_T(const emlrtStack *sp,
                              emxArray_boolean_T **pEmxArray,
                              int32_T numDimensions, boolean_T doPush)
{
  emxArray_boolean_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2021a((emlrtCTX)sp, false, (void *)pEmxArray,
                                      (void *)&emxFree_boolean_T, NULL, NULL,
                                      NULL);
  }
  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInit_cell_wrap_43(const emlrtStack *sp,
                                 emxArray_cell_wrap_43 **pEmxArray,
                                 int32_T numDimensions, boolean_T doPush)
{
  emxArray_cell_wrap_43 *emxArray;
  int32_T i;
  *pEmxArray =
      (emxArray_cell_wrap_43 *)emlrtMallocMex(sizeof(emxArray_cell_wrap_43));
  if (doPush) {
    emlrtPushHeapReferenceStackR2021a((emlrtCTX)sp, false, (void *)pEmxArray,
                                      (void *)&emxFree_cell_wrap_43, NULL, NULL,
                                      NULL);
  }
  emxArray = *pEmxArray;
  emxArray->data = (cell_wrap_43 *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInit_char_T(const emlrtStack *sp, emxArray_char_T **pEmxArray,
                           int32_T numDimensions, boolean_T doPush)
{
  emxArray_char_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_char_T *)emlrtMallocMex(sizeof(emxArray_char_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2021a((emlrtCTX)sp, false, (void *)pEmxArray,
                                      (void *)&emxFree_char_T, NULL, NULL,
                                      NULL);
  }
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
                           int32_T numDimensions, boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2021a((emlrtCTX)sp, false, (void *)pEmxArray,
                                      (void *)&emxFree_real_T, NULL, NULL,
                                      NULL);
  }
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_char_T *y)
{
  lb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *f_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  y = NULL;
  iv[0] = 1;
  iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[1]; b_i++) {
    pData[i] = u->data[b_i];
    i++;
  }
  emlrtAssign(&y, m);
  return y;
}

static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                struct1_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[2] = {"beta", "scale"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtCTX)sp, parentId, u, 2,
                         (const char_T **)&fieldNames[0], 0U, (void *)&dims);
  thisId.fIdentifier = "beta";
  s_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 0,
                                                    (const char_T *)"beta")),
                     &thisId, y->beta);
  thisId.fIdentifier = "scale";
  y->scale =
      h_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 1, (const char_T *)"scale")),
                         &thisId);
  emlrtDestroyArray(&u);
}

static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *init,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(init), &thisId);
  emlrtDestroyArray(&init);
  return y;
}

static const mxArray *g_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_i;
  int32_T i;
  y = NULL;
  i = u->size[0];
  m = emlrtCreateNumericArray(1, &i, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[0]; b_i++) {
    pData[i] = u->data[b_i];
    i++;
  }
  emlrtAssign(&y, m);
  return y;
}

static void gb_emlrt_marshallIn(const emlrtStack *sp,
                                const mxArray *restrfactor,
                                const char_T *identifier,
                                struct_tclustrestrfactor_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  hb_emlrt_marshallIn(sp, emlrtAlias(restrfactor), &thisId, y);
  emlrtDestroyArray(&restrfactor);
}

static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = mb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *h_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                struct_tclustrestrfactor_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[16] = {
      "pars",      "cdet",     "shw", "shb",    "k",    "maxiterDSR",
      "maxiterR",  "maxiterS", "msg", "tolR",   "tolS", "usepreviousest",
      "userepmat", "sortsh",   "v",   "zerotol"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtCTX)sp, parentId, u, 16,
                         (const char_T **)&fieldNames[0], 0U, (void *)&dims);
  thisId.fIdentifier = "pars";
  ib_emlrt_marshallIn(sp,
                      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 0,
                                                     (const char_T *)"pars")),
                      &thisId, y->pars);
  thisId.fIdentifier = "cdet";
  y->cdet =
      h_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 1, (const char_T *)"cdet")),
                         &thisId);
  thisId.fIdentifier = "shw";
  y->shw =
      h_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 2,
                                                        (const char_T *)"shw")),
                         &thisId);
  thisId.fIdentifier = "shb";
  y->shb =
      h_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 3,
                                                        (const char_T *)"shb")),
                         &thisId);
  thisId.fIdentifier = "k";
  y->k = h_emlrt_marshallIn(sp,
                            emlrtAlias(emlrtGetFieldR2017b(
                                (emlrtCTX)sp, u, 0, 4, (const char_T *)"k")),
                            &thisId);
  thisId.fIdentifier = "maxiterDSR";
  y->maxiterDSR = h_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 5,
                                     (const char_T *)"maxiterDSR")),
      &thisId);
  thisId.fIdentifier = "maxiterR";
  y->maxiterR = h_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 6,
                                     (const char_T *)"maxiterR")),
      &thisId);
  thisId.fIdentifier = "maxiterS";
  y->maxiterS = h_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 7,
                                     (const char_T *)"maxiterS")),
      &thisId);
  thisId.fIdentifier = "msg";
  y->msg =
      l_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 8,
                                                        (const char_T *)"msg")),
                         &thisId);
  thisId.fIdentifier = "tolR";
  y->tolR =
      h_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 9, (const char_T *)"tolR")),
                         &thisId);
  thisId.fIdentifier = "tolS";
  y->tolS =
      h_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 10, (const char_T *)"tolS")),
                         &thisId);
  thisId.fIdentifier = "usepreviousest";
  y->usepreviousest = l_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 11,
                                     (const char_T *)"usepreviousest")),
      &thisId);
  thisId.fIdentifier = "userepmat";
  y->userepmat = h_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 12,
                                     (const char_T *)"userepmat")),
      &thisId);
  thisId.fIdentifier = "sortsh";
  y->sortsh =
      h_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 13, (const char_T *)"sortsh")),
                         &thisId);
  thisId.fIdentifier = "v";
  y->v = h_emlrt_marshallIn(sp,
                            emlrtAlias(emlrtGetFieldR2017b(
                                (emlrtCTX)sp, u, 0, 14, (const char_T *)"v")),
                            &thisId);
  thisId.fIdentifier = "zerotol";
  y->zerotol = h_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 15,
                                     (const char_T *)"zerotol")),
      &thisId);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *m0,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(m0), &thisId, y);
  emlrtDestroyArray(&m0);
}

static const mxArray *i_emlrt_marshallOut(const struct_FSRfan_T *u)
{
  static const char_T *sv[9] = {"Score", "la",     "bs",     "Un",    "y",
                                "X",     "Scorep", "Scoren", "Scoreb"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  int32_T i1;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 9, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Score",
                      c_emlrt_marshallOut(u->Score), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"la", j_emlrt_marshallOut(u->la),
                      1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"bs", c_emlrt_marshallOut(u->bs),
                      2);
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateCellArrayR2014a(1, &u->Un->size[0]));
  for (i = 0; i < u->Un->size[0]; i++) {
    c_y = NULL;
    iv[0] = u->Un->data[i].f1->size[0];
    iv[1] = 11;
    m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
    pData = emlrtMxGetPr(m);
    i1 = 0;
    for (b_i = 0; b_i < 11; b_i++) {
      for (c_i = 0; c_i < u->Un->data[i].f1->size[0]; c_i++) {
        pData[i1] =
            u->Un->data[i].f1->data[c_i + u->Un->data[i].f1->size[0] * b_i];
        i1++;
      }
    }
    emlrtAssign(&c_y, m);
    emlrtSetCell(b_y, i, c_y);
  }
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Un", b_y, 3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"y", g_emlrt_marshallOut(u->y), 4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"X", c_emlrt_marshallOut(u->X), 5);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Scorep",
                      c_emlrt_marshallOut(u->Scorep), 6);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Scoren",
                      c_emlrt_marshallOut(u->Scoren), 7);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Scoreb",
                      c_emlrt_marshallOut(u->Scoreb), 8);
  return y;
}

static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId, char_T y[3])
{
  vb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  nb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *j_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  y = NULL;
  iv[0] = u->size[0];
  iv[1] = 1;
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[0]; b_i++) {
    pData[i] = u->data[b_i];
    i++;
  }
  emlrtAssign(&y, m);
  return y;
}

static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret)
{
  static const int32_T dims[2] = {-1, -1};
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(ret, i);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static boolean_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *msg,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = l_emlrt_marshallIn(sp, emlrtAlias(msg), &thisId);
  emlrtDestroyArray(&msg);
  return y;
}

static const mxArray *k_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_LTSts_T *u)
{
  static const int32_T iv1[2] = {1, 5};
  static const char_T *sv[24] = {"RES",
                                 "Hsubset",
                                 "B",
                                 "posLS",
                                 "yhat",
                                 "outliers",
                                 "outliersPval",
                                 "scale",
                                 "numscale2",
                                 "BestIndexes",
                                 "residuals",
                                 "bs",
                                 "conflev",
                                 "h",
                                 "weights",
                                 "singsub",
                                 "class",
                                 "Likloc",
                                 "y",
                                 "X",
                                 "invXX",
                                 "Btable",
                                 "LastHarmonicPval",
                                 "LevelShiftPval"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 24, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"RES", c_emlrt_marshallOut(u->RES),
                      0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Hsubset",
                      c_emlrt_marshallOut(u->Hsubset), 1);
  b_y = NULL;
  iv[0] = u->B->size[0];
  iv[1] = 4;
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->B->size[0]; b_i++) {
    pData[i] = u->B->data[b_i];
    i++;
  }
  for (b_i = 0; b_i < u->B->size[0]; b_i++) {
    pData[i] = u->B->data[b_i + u->B->size[0]];
    i++;
  }
  for (b_i = 0; b_i < u->B->size[0]; b_i++) {
    pData[i] = u->B->data[b_i + u->B->size[0] * 2];
    i++;
  }
  for (b_i = 0; b_i < u->B->size[0]; b_i++) {
    pData[i] = u->B->data[b_i + u->B->size[0] * 3];
    i++;
  }
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"B", b_y, 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"posLS",
                      l_emlrt_marshallOut(u->posLS.data, u->posLS.size), 3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"yhat",
                      g_emlrt_marshallOut(u->yhat), 4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliers",
                      g_emlrt_marshallOut(u->outliers), 5);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliersPval",
                      g_emlrt_marshallOut(u->outliersPval), 6);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"scale",
                      h_emlrt_marshallOut(u->scale), 7);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"numscale2",
                      c_emlrt_marshallOut(u->numscale2), 8);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"BestIndexes",
                      c_emlrt_marshallOut(u->BestIndexes), 9);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"residuals",
                      g_emlrt_marshallOut(u->residuals), 10);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"bs", g_emlrt_marshallOut(u->bs),
                      11);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"conflev",
                      h_emlrt_marshallOut(u->conflev), 12);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"h", h_emlrt_marshallOut(u->h), 13);
  c_y = NULL;
  i = u->weights->size[0];
  m = emlrtCreateLogicalArray(1, &i);
  emlrtInitLogicalArray(u->weights->size[0], m, &u->weights->data[0]);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"weights", c_y, 14);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"singsub",
                      h_emlrt_marshallOut(u->singsub), 15);
  d_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 5, m, &u->class[0]);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"class", d_y, 16);
  e_y = NULL;
  iv[0] = u->Likloc->size[0];
  iv[1] = u->Likloc->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->Likloc->size[1]; b_i++) {
    for (c_i = 0; c_i < u->Likloc->size[0]; c_i++) {
      pData[i] = u->Likloc->data[c_i + u->Likloc->size[0] * b_i];
      i++;
    }
  }
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Likloc", e_y, 17);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"y", g_emlrt_marshallOut(u->y), 18);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"X", c_emlrt_marshallOut(u->X), 19);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"invXX",
                      c_emlrt_marshallOut(u->invXX), 20);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Btable",
                      m_emlrt_marshallOut(sp, &u->Btable), 21);
  emlrtSetFieldR2017b(
      y, 0, (const char_T *)"LastHarmonicPval",
      l_emlrt_marshallOut(u->LastHarmonicPval.data, u->LastHarmonicPval.size),
      22);
  emlrtSetFieldR2017b(
      y, 0, (const char_T *)"LevelShiftPval",
      l_emlrt_marshallOut(u->LevelShiftPval.data, u->LevelShiftPval.size), 23);
  return y;
}

static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T **ret_data, int32_T ret_size[2])
{
  static const int32_T dims[2] = {1, 1};
  int32_T iv[2];
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  *ret_data = (real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = ob_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *l_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T u_size[2])
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  y = NULL;
  iv[0] = u_size[0];
  iv[1] = u_size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  b_i = 0;
  while (b_i < u_size[1]) {
    b_i = 0;
    while (b_i < u_size[0]) {
      pData[i] = u_data[0];
      i++;
      b_i = 1;
    }
    b_i = 1;
  }
  emlrtAssign(&y, m);
  return y;
}

static void lb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_char_T *ret)
{
  static const int32_T dims[2] = {1, -1};
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_char_T(ret, i);
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret->data[0], 1, false);
  emlrtDestroyArray(&src);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bsbsteps,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  n_emlrt_marshallIn(sp, emlrtAlias(bsbsteps), &thisId, y);
  emlrtDestroyArray(&bsbsteps);
}

static const mxArray *m_emlrt_marshallOut(const emlrtStack *sp, const table *u)
{
  static const int32_T enumValues[4] = {0, 1, 2, 3};
  static const int32_T iv1[2] = {1, 3};
  static const int32_T iv2[2] = {1, 9};
  static const int32_T iv3[2] = {1, 5};
  static const int32_T iv4[2] = {1, 2};
  static const int32_T iv5[2] = {1, 4};
  static const int32_T iv6[2] = {1, 4};
  static const int32_T iv7[2] = {0, 0};
  static const char_T c_u[9] = {'V', 'a', 'r', 'i', 'a', 'b', 'l', 'e', 's'};
  static const char_T d_u[5] = {'C', 'o', 'e', 'f', 'f'};
  static const char_T *enumNames[4] = {"unset", "continuous", "step", "event"};
  static const char_T f_u[4] = {'p', 'v', 'a', 'l'};
  static const char_T b_u[3] = {'R', 'o', 'w'};
  static const char_T e_u[2] = {'S', 'E'};
  static const char_T *sv[2] = {"Description", "UserData"};
  const mxArray *c_propValues[10];
  const mxArray *b_propValues[5];
  const mxArray *propValues[2];
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m10;
  const mxArray *m11;
  const mxArray *m12;
  const mxArray *m13;
  const mxArray *m14;
  const mxArray *m15;
  const mxArray *m16;
  const mxArray *m17;
  const mxArray *m18;
  const mxArray *m19;
  const mxArray *m2;
  const mxArray *m20;
  const mxArray *m3;
  const mxArray *m4;
  const mxArray *m5;
  const mxArray *m6;
  const mxArray *m7;
  const mxArray *m8;
  const mxArray *m9;
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *q_y;
  const mxArray *r_y;
  const mxArray *s_y;
  const mxArray *t_y;
  const mxArray *u_y;
  const mxArray *v_y;
  const mxArray *w_y;
  const mxArray *x_y;
  const mxArray *y;
  int32_T iv[2];
  int32_T *pData;
  const char_T *c_propClasses[10] = {
      "matlab.internal.coder.tabular.private.varNamesDim",
      "matlab.internal.coder.tabular.private.varNamesDim",
      "matlab.internal.coder.tabular.private.varNamesDim",
      "matlab.internal.coder.tabular.private.varNamesDim",
      "matlab.internal.coder.tabular.private.varNamesDim",
      "matlab.internal.coder.tabular.private.varNamesDim",
      "matlab.internal.coder.tabular.private.varNamesDim",
      "matlab.internal.coder.tabular.private.varNamesDim",
      "matlab.internal.coder.tabular.private.varNamesDim",
      "matlab.internal.coder.tabular.private.varNamesDim"};
  const char_T *c_propNames[10] = {
      "labels",        "length",        "descrs",    "units",
      "continuity",    "customProps",   "hasDescrs", "hasUnits",
      "hasContinuity", "hasCustomProps"};
  const char_T *d_propClasses[5] = {
      "matlab.internal.coder.table", "matlab.internal.coder.table",
      "matlab.internal.coder.table", "matlab.internal.coder.table",
      "matlab.internal.coder.table"};
  const char_T *d_propNames[5] = {"metaDim", "rowDim", "varDim", "data",
                                  "arrayProps"};
  const char_T *b_propClasses[2] = {
      "matlab.internal.coder.tabular.private.rowNamesDim",
      "matlab.internal.coder.tabular.private.rowNamesDim"};
  const char_T *b_propNames[2] = {"labels", "length"};
  const char_T *propClasses[2] = {
      "matlab.internal.coder.tabular.private.metaDim",
      "matlab.internal.coder.tabular.private.metaDim"};
  const char_T *propNames[2] = {"labels", "length"};
  y = NULL;
  m = NULL;
  m1 = NULL;
  m2 = NULL;
  m3 = NULL;
  m4 = NULL;
  emlrtAssign(&y, emlrtCreateClassInstance(
                      (const char_T *)"matlab.internal.coder.table"));
  m = NULL;
  b_y = NULL;
  m5 = NULL;
  m6 = NULL;
  emlrtAssign(
      &b_y,
      emlrtCreateClassInstance(
          (const char_T *)"matlab.internal.coder.tabular.private.metaDim"));
  m5 = NULL;
  c_y = NULL;
  iv[0] = 1;
  iv[1] = 2;
  emlrtAssign(&c_y, emlrtCreateCellArrayR2014a(2, &iv[0]));
  d_y = NULL;
  m7 = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 3, m7, &b_u[0]);
  emlrtAssign(&d_y, m7);
  emlrtSetCell(c_y, 0, d_y);
  e_y = NULL;
  m7 = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 9, m7, &c_u[0]);
  emlrtAssign(&e_y, m7);
  emlrtSetCell(c_y, 1, e_y);
  emlrtAssign(&m5, c_y);
  propValues[0] = m5;
  m6 = NULL;
  emlrtAssign(&m6, h_emlrt_marshallOut(u->metaDim.length));
  propValues[1] = m6;
  emlrtSetAllProperties((emlrtCTX)sp, &b_y, 0, 2,
                        (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  emlrtAssign(
      &b_y,
      emlrtConvertInstanceToRedirectSource(
          (emlrtCTX)sp, b_y, 0,
          (const char_T *)"matlab.internal.coder.tabular.private.metaDim"));
  emlrtAssign(&m, b_y);
  b_propValues[0] = m;
  m1 = NULL;
  f_y = NULL;
  m8 = NULL;
  m9 = NULL;
  emlrtAssign(
      &f_y,
      emlrtCreateClassInstance(
          (const char_T *)"matlab.internal.coder.tabular.private.rowNamesDim"));
  m8 = NULL;
  g_y = NULL;
  iv[0] = 0;
  iv[1] = 0;
  emlrtAssign(&g_y, emlrtCreateCellArrayR2014a(2, &iv[0]));
  emlrtAssign(&m8, g_y);
  propValues[0] = m8;
  m9 = NULL;
  emlrtAssign(&m9, h_emlrt_marshallOut(u->rowDim.length));
  propValues[1] = m9;
  emlrtSetAllProperties((emlrtCTX)sp, &f_y, 0, 2,
                        (const char_T **)&b_propNames[0],
                        (const char_T **)&b_propClasses[0], &propValues[0]);
  emlrtAssign(
      &f_y,
      emlrtConvertInstanceToRedirectSource(
          (emlrtCTX)sp, f_y, 0,
          (const char_T *)"matlab.internal.coder.tabular.private.rowNamesDim"));
  emlrtAssign(&m1, f_y);
  b_propValues[1] = m1;
  m2 = NULL;
  h_y = NULL;
  m10 = NULL;
  m11 = NULL;
  m12 = NULL;
  m13 = NULL;
  m14 = NULL;
  m15 = NULL;
  m16 = NULL;
  m17 = NULL;
  m18 = NULL;
  m19 = NULL;
  emlrtAssign(
      &h_y,
      emlrtCreateClassInstance(
          (const char_T *)"matlab.internal.coder.tabular.private.varNamesDim"));
  m10 = NULL;
  i_y = NULL;
  iv[0] = 1;
  iv[1] = 4;
  emlrtAssign(&i_y, emlrtCreateCellArrayR2014a(2, &iv[0]));
  j_y = NULL;
  m7 = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 5, m7, &d_u[0]);
  emlrtAssign(&j_y, m7);
  emlrtSetCell(i_y, 0, j_y);
  k_y = NULL;
  m7 = emlrtCreateCharArray(2, &iv4[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 2, m7, &e_u[0]);
  emlrtAssign(&k_y, m7);
  emlrtSetCell(i_y, 1, k_y);
  l_y = NULL;
  m7 = emlrtCreateString1('t');
  emlrtAssign(&l_y, m7);
  emlrtSetCell(i_y, 2, l_y);
  m_y = NULL;
  m7 = emlrtCreateCharArray(2, &iv5[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 4, m7, &f_u[0]);
  emlrtAssign(&m_y, m7);
  emlrtSetCell(i_y, 3, m_y);
  emlrtAssign(&m10, i_y);
  c_propValues[0] = m10;
  m11 = NULL;
  emlrtAssign(&m11, h_emlrt_marshallOut(u->varDim.length));
  c_propValues[1] = m11;
  m12 = NULL;
  emlrtAssign(&m12, n_emlrt_marshallOut(sp, u->varDim.descrs));
  c_propValues[2] = m12;
  m13 = NULL;
  emlrtAssign(&m13, n_emlrt_marshallOut(sp, u->varDim.units));
  c_propValues[3] = m13;
  m14 = NULL;
  n_y = NULL;
  m20 = NULL;
  emlrtCheckEnumR2012b(
      (emlrtCTX)sp, (const char_T *)"matlab.internal.coder.tabular.Continuity",
      4, (const char_T **)&enumNames[0], &enumValues[0]);
  o_y = NULL;
  m7 = emlrtCreateNumericArray(2, (const void *)&iv6[0], mxINT32_CLASS, mxREAL);
  pData = (int32_T *)emlrtMxGetData(m7);
  *pData = (int32_T)u->varDim.continuity[0];
  pData[1] = (int32_T)u->varDim.continuity[1];
  pData[2] = (int32_T)u->varDim.continuity[2];
  pData[3] = (int32_T)u->varDim.continuity[3];
  emlrtAssign(&o_y, m7);
  emlrtAssign(&m20, o_y);
  emlrtAssign(&n_y,
              emlrtCreateEnumR2012b(
                  (emlrtCTX)sp,
                  (const char_T *)"matlab.internal.coder.tabular.Continuity",
                  m20));
  emlrtDestroyArray(&m20);
  emlrtAssign(&m14, n_y);
  c_propValues[4] = m14;
  m15 = NULL;
  p_y = NULL;
  emlrtAssign(&p_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  emlrtAssign(&m15, p_y);
  c_propValues[5] = m15;
  m16 = NULL;
  q_y = NULL;
  m7 = emlrtCreateLogicalScalar(u->varDim.hasDescrs);
  emlrtAssign(&q_y, m7);
  emlrtAssign(&m16, q_y);
  c_propValues[6] = m16;
  m17 = NULL;
  r_y = NULL;
  m7 = emlrtCreateLogicalScalar(u->varDim.hasUnits);
  emlrtAssign(&r_y, m7);
  emlrtAssign(&m17, r_y);
  c_propValues[7] = m17;
  m18 = NULL;
  s_y = NULL;
  m7 = emlrtCreateLogicalScalar(u->varDim.hasContinuity);
  emlrtAssign(&s_y, m7);
  emlrtAssign(&m18, s_y);
  c_propValues[8] = m18;
  m19 = NULL;
  t_y = NULL;
  m7 = emlrtCreateLogicalScalar(u->varDim.hasCustomProps);
  emlrtAssign(&t_y, m7);
  emlrtAssign(&m19, t_y);
  c_propValues[9] = m19;
  emlrtSetAllProperties((emlrtCTX)sp, &h_y, 0, 10,
                        (const char_T **)&c_propNames[0],
                        (const char_T **)&c_propClasses[0], &c_propValues[0]);
  emlrtAssign(
      &h_y,
      emlrtConvertInstanceToRedirectSource(
          (emlrtCTX)sp, h_y, 0,
          (const char_T *)"matlab.internal.coder.tabular.private.varNamesDim"));
  emlrtAssign(&m2, h_y);
  b_propValues[2] = m2;
  m3 = NULL;
  u_y = NULL;
  iv[0] = 1;
  iv[1] = 4;
  emlrtAssign(&u_y, emlrtCreateCellArrayR2014a(2, &iv[0]));
  emlrtSetCell(u_y, 0, g_emlrt_marshallOut(u->data[0].f1));
  emlrtSetCell(u_y, 1, g_emlrt_marshallOut(u->data[1].f1));
  emlrtSetCell(u_y, 2, g_emlrt_marshallOut(u->data[2].f1));
  emlrtSetCell(u_y, 3, g_emlrt_marshallOut(u->data[3].f1));
  emlrtAssign(&m3, u_y);
  b_propValues[3] = m3;
  m4 = NULL;
  v_y = NULL;
  emlrtAssign(&v_y, emlrtCreateStructMatrix(1, 1, 2, (const char_T **)&sv[0]));
  w_y = NULL;
  iv[0] = 1;
  iv[1] = 0;
  m7 = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 0, m7, NULL);
  emlrtAssign(&w_y, m7);
  emlrtSetFieldR2017b(v_y, 0, (const char_T *)"Description", w_y, 0);
  x_y = NULL;
  m7 =
      emlrtCreateNumericArray(2, (const void *)&iv7[0], mxDOUBLE_CLASS, mxREAL);
  emlrtAssign(&x_y, m7);
  emlrtSetFieldR2017b(v_y, 0, (const char_T *)"UserData", x_y, 1);
  emlrtAssign(&m4, v_y);
  b_propValues[4] = m4;
  emlrtSetAllProperties((emlrtCTX)sp, &y, 0, 5,
                        (const char_T **)&d_propNames[0],
                        (const char_T **)&d_propClasses[0], &b_propValues[0]);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource(
                      (emlrtCTX)sp, y, 0,
                      (const char_T *)"matlab.internal.coder.table"));
  return y;
}

static real_T mb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 0U, (void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  pb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *n_emlrt_marshallOut(const emlrtStack *sp,
                                          const cell_wrap_56 u[4])
{
  emxArray_char_T *b_u;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T iv[2];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  y = NULL;
  iv[0] = 1;
  iv[1] = 4;
  emlrtAssign(&y, emlrtCreateCellArrayR2014a(2, &iv[0]));
  emxInit_char_T(sp, &b_u, 2, true);
  for (i = 0; i < 4; i++) {
    i1 = b_u->size[0] * b_u->size[1];
    b_u->size[0] = u[i].f1->size[0];
    b_u->size[1] = u[i].f1->size[1];
    emxEnsureCapacity_char_T(b_u, i1);
    loop_ub = u[i].f1->size[0] * u[i].f1->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_u->data[i1] = u[i].f1->data[i1];
    }
    b_y = NULL;
    iv[0] = b_u->size[0];
    iv[1] = b_u->size[1];
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, b_u->size[0] * b_u->size[1], m,
                             &b_u->data[0]);
    emlrtAssign(&b_y, m);
    emlrtSetCell(y, i, b_y);
  }
  emxFree_char_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return y;
}

static void nb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret)
{
  static const int32_T dims = -1;
  int32_T i;
  int32_T i1;
  const boolean_T b = true;
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 1U, (void *)&dims, &b, &i);
  ret->allocatedSize = i;
  i1 = ret->size[0];
  ret->size[0] = i;
  emxEnsureCapacity_real_T(ret, i1);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *prob,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  p_emlrt_marshallIn(sp, emlrtAlias(prob), &thisId, y);
  emlrtDestroyArray(&prob);
}

static const mxArray *o_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_LXS_T *u)
{
  static const int32_T iv[2] = {1, 3};
  static const char_T *sv[13] = {
      "weights", "rew", "beta",    "scale", "residuals", "bs",   "outliers",
      "conflev", "h",   "singsub", "X",     "y",         "class"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 13, (const char_T **)&sv[0]));
  b_y = NULL;
  i = u->weights->size[0];
  m = emlrtCreateLogicalArray(1, &i);
  emlrtInitLogicalArray(u->weights->size[0], m, &u->weights->data[0]);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"weights", b_y, 0);
  c_y = NULL;
  m = emlrtCreateLogicalScalar(u->rew);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"rew", c_y, 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"beta",
                      g_emlrt_marshallOut(u->beta), 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"scale",
                      h_emlrt_marshallOut(u->scale), 3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"residuals",
                      g_emlrt_marshallOut(u->residuals), 4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"bs", f_emlrt_marshallOut(u->bs),
                      5);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliers",
                      f_emlrt_marshallOut(u->outliers), 6);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"conflev",
                      h_emlrt_marshallOut(u->conflev), 7);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"h", h_emlrt_marshallOut(u->h), 8);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"singsub",
                      h_emlrt_marshallOut(u->singsub), 9);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"X", c_emlrt_marshallOut(u->X), 10);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"y", b_emlrt_marshallOut(u->y), 11);
  d_y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 3, m, &u->class[0]);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"class", d_y, 12);
  return y;
}

static boolean_T ob_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                     const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  boolean_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"logical",
                          false, 0U, (void *)&dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  qb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *p_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_MMreg_T *u)
{
  static const int32_T iv[2] = {1, 5};
  static const char_T *sv[16] = {
      "beta",     "auxscale",      "fittedvalues", "residuals",    "Sbeta",
      "Ssingsub", "weights",       "outliers",     "conflev",      "class",
      "rhofuncS", "rhofuncparamS", "rhofunc",      "rhofuncparam", "X",
      "y"};
  emxArray_char_T *b_u;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T iv1[2];
  int32_T i;
  int32_T loop_ub;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_char_T(sp, &b_u, 2, true);
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 16, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"beta",
                      g_emlrt_marshallOut(u->beta), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"auxscale",
                      h_emlrt_marshallOut(u->auxscale), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"fittedvalues",
                      g_emlrt_marshallOut(u->fittedvalues), 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"residuals",
                      g_emlrt_marshallOut(u->residuals), 3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Sbeta",
                      g_emlrt_marshallOut(u->Sbeta), 4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Ssingsub",
                      h_emlrt_marshallOut(u->Ssingsub), 5);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"weights",
                      g_emlrt_marshallOut(u->weights), 6);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliers",
                      f_emlrt_marshallOut(u->outliers), 7);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"conflev",
                      h_emlrt_marshallOut(u->conflev), 8);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 5, m, &u->class[0]);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"class", b_y, 9);
  i = b_u->size[0] * b_u->size[1];
  b_u->size[0] = u->rhofuncS->size[0];
  b_u->size[1] = u->rhofuncS->size[1];
  emxEnsureCapacity_char_T(b_u, i);
  loop_ub = u->rhofuncS->size[0] * u->rhofuncS->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_u->data[i] = u->rhofuncS->data[i];
  }
  c_y = NULL;
  iv1[0] = u->rhofuncS->size[0];
  iv1[1] = u->rhofuncS->size[1];
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp,
                           u->rhofuncS->size[0] * u->rhofuncS->size[1], m,
                           &b_u->data[0]);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"rhofuncS", c_y, 10);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"rhofuncparamS",
                      b_emlrt_marshallOut(u->rhofuncparamS), 11);
  i = b_u->size[0] * b_u->size[1];
  b_u->size[0] = u->rhofunc->size[0];
  b_u->size[1] = u->rhofunc->size[1];
  emxEnsureCapacity_char_T(b_u, i);
  loop_ub = u->rhofunc->size[0] * u->rhofunc->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_u->data[i] = u->rhofunc->data[i];
  }
  d_y = NULL;
  iv1[0] = u->rhofunc->size[0];
  iv1[1] = u->rhofunc->size[1];
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp,
                           u->rhofunc->size[0] * u->rhofunc->size[1], m,
                           &b_u->data[0]);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"rhofunc", d_y, 12);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"rhofuncparam",
                      b_emlrt_marshallOut(u->rhofuncparam), 13);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"X", c_emlrt_marshallOut(u->X), 14);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"y", b_emlrt_marshallOut(u->y), 15);
  emxFree_char_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return y;
}

static void pb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret)
{
  static const int32_T dims[2] = {-1, 1};
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(ret, i);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lms,
                               const char_T *identifier, struct_FSRlms_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  r_emlrt_marshallIn(sp, emlrtAlias(lms), &thisId, y);
  emlrtDestroyArray(&lms);
}

static const mxArray *q_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_MMregeda_T *u)
{
  static const int32_T iv1[2] = {1, 8};
  static const char_T *sv[14] = {
      "Beta",         "RES",      "Weights", "Outliers", "Sbeta",
      "auxscale",     "Ssingsub", "conflev", "class",    "rhofunc",
      "rhofuncparam", "eff",      "X",       "y"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T iv[2];
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 14, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Beta",
                      c_emlrt_marshallOut(u->Beta), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"RES", c_emlrt_marshallOut(u->RES),
                      1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Weights",
                      c_emlrt_marshallOut(u->Weights), 2);
  b_y = NULL;
  iv[0] = u->Outliers->size[0];
  iv[1] = u->Outliers->size[1];
  m = emlrtCreateLogicalArray(2, &iv[0]);
  emlrtInitLogicalArray(u->Outliers->size[0] * u->Outliers->size[1], m,
                        &u->Outliers->data[0]);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Outliers", b_y, 3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Sbeta",
                      g_emlrt_marshallOut(u->Sbeta), 4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"auxscale",
                      h_emlrt_marshallOut(u->auxscale), 5);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Ssingsub",
                      h_emlrt_marshallOut(u->Ssingsub), 6);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"conflev",
                      h_emlrt_marshallOut(u->conflev), 7);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 8, m, &u->class[0]);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"class", c_y, 8);
  d_y = NULL;
  iv[0] = u->rhofunc->size[0];
  iv[1] = u->rhofunc->size[1];
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp,
                           u->rhofunc->size[0] * u->rhofunc->size[1], m,
                           &u->rhofunc->data[0]);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"rhofunc", d_y, 9);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"rhofuncparam",
                      b_emlrt_marshallOut(u->rhofuncparam), 10);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"eff", j_emlrt_marshallOut(u->eff),
                      11);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"X", c_emlrt_marshallOut(u->X), 12);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"y", g_emlrt_marshallOut(u->y), 13);
  return y;
}

static void qb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret)
{
  static const int32_T dims[2] = {1, -1};
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {false, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(ret, i);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct_FSRlms_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames = "bsb";
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtCTX)sp, parentId, u, 1,
                         (const char_T **)&fieldNames, 0U, (void *)&dims);
  thisId.fIdentifier = "bsb";
  s_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 0,
                                                    (const char_T *)"bsb")),
                     &thisId, y->bsb);
  emlrtDestroyArray(&u);
}

static const mxArray *r_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_Sreg_T *u)
{
  static const int32_T iv1[2] = {1, 4};
  static const char_T *sv[14] = {
      "beta",         "scale",   "bs",      "weights",  "fittedvalues",
      "residuals",    "singsub", "conflev", "outliers", "rhofunc",
      "rhofuncparam", "X",       "y",       "class"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T iv[2];
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 14, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"beta",
                      g_emlrt_marshallOut(u->beta), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"scale",
                      h_emlrt_marshallOut(u->scale), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"bs", f_emlrt_marshallOut(u->bs),
                      2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"weights",
                      g_emlrt_marshallOut(u->weights), 3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"fittedvalues",
                      g_emlrt_marshallOut(u->fittedvalues), 4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"residuals",
                      g_emlrt_marshallOut(u->residuals), 5);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"singsub",
                      h_emlrt_marshallOut(u->singsub), 6);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"conflev",
                      h_emlrt_marshallOut(u->conflev), 7);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliers",
                      f_emlrt_marshallOut(u->outliers), 8);
  b_y = NULL;
  iv[0] = u->rhofunc->size[0];
  iv[1] = u->rhofunc->size[1];
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp,
                           u->rhofunc->size[0] * u->rhofunc->size[1], m,
                           &u->rhofunc->data[0]);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"rhofunc", b_y, 9);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"rhofuncparam",
                      b_emlrt_marshallOut(u->rhofuncparam), 10);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"X", c_emlrt_marshallOut(u->X), 11);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"y", b_emlrt_marshallOut(u->y), 12);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 4, m, &u->class[0]);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"class", c_y, 13);
  return y;
}

static void rb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret)
{
  static const int32_T dims = -1;
  int32_T i;
  int32_T i1;
  const boolean_T b = true;
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 1U, (void *)&dims, &b, &i);
  i1 = ret->size[0];
  ret->size[0] = i;
  emxEnsureCapacity_real_T(ret, i1);
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret->data[0], 8, false);
  emlrtDestroyArray(&src);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  rb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *s_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_Sregeda_T *u)
{
  static const int32_T iv1[2] = {1, 7};
  static const char_T *sv[14] = {
      "conflev",  "Beta", "Scale", "BS",      "Weights",      "RES", "Singsub",
      "Outliers", "bdp",  "class", "rhofunc", "rhofuncparam", "X",   "y"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T iv[2];
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 14, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"conflev",
                      h_emlrt_marshallOut(u->conflev), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Beta",
                      c_emlrt_marshallOut(u->Beta), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Scale",
                      g_emlrt_marshallOut(u->Scale), 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"BS", c_emlrt_marshallOut(u->BS),
                      3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Weights",
                      c_emlrt_marshallOut(u->Weights), 4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"RES", c_emlrt_marshallOut(u->RES),
                      5);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Singsub",
                      g_emlrt_marshallOut(u->Singsub), 6);
  b_y = NULL;
  iv[0] = u->Outliers->size[0];
  iv[1] = u->Outliers->size[1];
  m = emlrtCreateLogicalArray(2, &iv[0]);
  emlrtInitLogicalArray(u->Outliers->size[0] * u->Outliers->size[1], m,
                        &u->Outliers->data[0]);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Outliers", b_y, 7);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"bdp", g_emlrt_marshallOut(u->bdp),
                      8);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &u->class[0]);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"class", c_y, 9);
  d_y = NULL;
  iv[0] = u->rhofunc->size[0];
  iv[1] = u->rhofunc->size[1];
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp,
                           u->rhofunc->size[0] * u->rhofunc->size[1], m,
                           &u->rhofunc->data[0]);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"rhofunc", d_y, 10);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"rhofuncparam",
                      b_emlrt_marshallOut(u->rhofuncparam), 11);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"X", c_emlrt_marshallOut(u->X), 12);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"y", g_emlrt_marshallOut(u->y), 13);
  return y;
}

static void sb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret)
{
  static const int32_T dims[2] = {1, -1};
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(ret, i);
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret->data[0], 8, false);
  emlrtDestroyArray(&src);
}

static struct_LTStslshiftlocref_T
t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lshiftlocref,
                   const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct_LTStslshiftlocref_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = u_emlrt_marshallIn(sp, emlrtAlias(lshiftlocref), &thisId);
  emlrtDestroyArray(&lshiftlocref);
  return y;
}

static const mxArray *t_emlrt_marshallOut(const struct_addt_T u)
{
  static const char_T *sv[4] = {"b", "S2add", "Tadd", "pval"};
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 4, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"b",
                      u_emlrt_marshallOut(u.b.data, u.b.size[0]), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"S2add",
                      u_emlrt_marshallOut(u.S2add.data, u.S2add.size[0]), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Tadd",
                      l_emlrt_marshallOut(u.Tadd.data, u.Tadd.size), 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"pval",
                      l_emlrt_marshallOut(u.pval.data, u.pval.size), 3);
  return y;
}

static void tb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret)
{
  static const int32_T dims[2] = {-1, -1};
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(ret, i);
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret->data[0], 8, false);
  emlrtDestroyArray(&src);
}

static struct_LTStslshiftlocref_T
u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                   const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[3] = {"wlength", "typeres", "huberc"};
  emlrtMsgIdentifier thisId;
  struct_LTStslshiftlocref_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtCTX)sp, parentId, u, 3,
                         (const char_T **)&fieldNames[0], 0U, (void *)&dims);
  thisId.fIdentifier = "wlength";
  y.wlength =
      h_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 0, (const char_T *)"wlength")),
                         &thisId);
  thisId.fIdentifier = "typeres";
  y.typeres =
      h_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 1, (const char_T *)"typeres")),
                         &thisId);
  thisId.fIdentifier = "huberc";
  y.huberc =
      h_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 2, (const char_T *)"huberc")),
                         &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *u_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T u_size)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_i;
  int32_T i;
  y = NULL;
  i = u_size;
  m = emlrtCreateNumericArray(1, &i, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  b_i = 0;
  while (b_i < u_size) {
    pData[i] = u_data[0];
    i++;
    b_i = 1;
  }
  emlrtAssign(&y, m);
  return y;
}

static void ub_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T **ret_data, int32_T ret_size[2])
{
  static const int32_T dims[2] = {2, 1};
  int32_T iv[2];
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  *ret_data = (real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

static struct_LXSlms_T v_emlrt_marshallIn(const emlrtStack *sp,
                                          const mxArray *lts,
                                          const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct_LXSlms_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = w_emlrt_marshallIn(sp, emlrtAlias(lts), &thisId);
  emlrtDestroyArray(&lts);
  return y;
}

static const mxArray *v_emlrt_marshallOut(const struct_tclust_T *u)
{
  static const char_T *sv[15] = {
      "muopt",  "sigmaopt",     "idx",    "postprob",  "MIXMIX",
      "MIXCLA", "NlogL",        "CLACLA", "notconver", "bs",
      "obj",    "equalweights", "h",      "fullsol",   "Y"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[3];
  int32_T b_i;
  int32_T c_i;
  int32_T d_i;
  int32_T i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 15, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"muopt",
                      c_emlrt_marshallOut(u->muopt), 0);
  b_y = NULL;
  iv[0] = u->sigmaopt->size[0];
  iv[1] = u->sigmaopt->size[1];
  iv[2] = u->sigmaopt->size[2];
  m = emlrtCreateNumericArray(3, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->sigmaopt->size[2]; b_i++) {
    for (c_i = 0; c_i < u->sigmaopt->size[1]; c_i++) {
      for (d_i = 0; d_i < u->sigmaopt->size[0]; d_i++) {
        pData[i] =
            u->sigmaopt
                ->data[(d_i + u->sigmaopt->size[0] * c_i) +
                       u->sigmaopt->size[0] * u->sigmaopt->size[1] * b_i];
        i++;
      }
    }
  }
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"sigmaopt", b_y, 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"idx", g_emlrt_marshallOut(u->idx),
                      2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"postprob",
                      c_emlrt_marshallOut(u->postprob), 3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"MIXMIX",
                      l_emlrt_marshallOut(u->MIXMIX.data, u->MIXMIX.size), 4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"MIXCLA",
                      l_emlrt_marshallOut(u->MIXCLA.data, u->MIXCLA.size), 5);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"NlogL",
                      h_emlrt_marshallOut(u->NlogL), 6);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"CLACLA",
                      l_emlrt_marshallOut(u->CLACLA.data, u->CLACLA.size), 7);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"notconver",
                      h_emlrt_marshallOut(u->notconver), 8);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"bs", f_emlrt_marshallOut(u->bs),
                      9);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"obj", h_emlrt_marshallOut(u->obj),
                      10);
  c_y = NULL;
  m = emlrtCreateLogicalScalar(u->equalweights);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"equalweights", c_y, 11);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"h", h_emlrt_marshallOut(u->h), 12);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"fullsol",
                      g_emlrt_marshallOut(u->fullsol), 13);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Y", c_emlrt_marshallOut(u->Y), 14);
  return y;
}

static void vb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, char_T ret[3])
{
  static const int32_T dims[2] = {1, 3};
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                          false, 2U, (void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtCTX)sp, src, &ret[0], 3);
  emlrtDestroyArray(&src);
}

static struct_LXSlms_T w_emlrt_marshallIn(const emlrtStack *sp,
                                          const mxArray *u,
                                          const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[5] = {"bestr", "refsteps", "refstepsbestr",
                                        "reftol", "reftolbestr"};
  emlrtMsgIdentifier thisId;
  struct_LXSlms_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtCTX)sp, parentId, u, 5,
                         (const char_T **)&fieldNames[0], 0U, (void *)&dims);
  thisId.fIdentifier = "bestr";
  y.bestr =
      h_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 0, (const char_T *)"bestr")),
                         &thisId);
  thisId.fIdentifier = "refsteps";
  y.refsteps = h_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 1,
                                     (const char_T *)"refsteps")),
      &thisId);
  thisId.fIdentifier = "refstepsbestr";
  y.refstepsbestr = h_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 2,
                                     (const char_T *)"refstepsbestr")),
      &thisId);
  thisId.fIdentifier = "reftol";
  y.reftol =
      h_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 3, (const char_T *)"reftol")),
                         &thisId);
  thisId.fIdentifier = "reftolbestr";
  y.reftolbestr = h_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 4,
                                     (const char_T *)"reftolbestr")),
      &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *model,
                               const char_T *identifier, struct_LTStsmodel_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y_emlrt_marshallIn(sp, emlrtAlias(model), &thisId, y);
  emlrtDestroyArray(&model);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct_LTStsmodel_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[6] = {"lshift",   "s",   "trend",
                                        "seasonal", "ARp", "X"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtCTX)sp, parentId, u, 6,
                         (const char_T **)&fieldNames[0], 0U, (void *)&dims);
  thisId.fIdentifier = "lshift";
  ab_emlrt_marshallIn(sp,
                      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 0,
                                                     (const char_T *)"lshift")),
                      &thisId, y->lshift);
  thisId.fIdentifier = "s";
  y->s = h_emlrt_marshallIn(sp,
                            emlrtAlias(emlrtGetFieldR2017b(
                                (emlrtCTX)sp, u, 0, 1, (const char_T *)"s")),
                            &thisId);
  thisId.fIdentifier = "trend";
  y->trend =
      h_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 2, (const char_T *)"trend")),
                         &thisId);
  thisId.fIdentifier = "seasonal";
  y->seasonal = h_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 3,
                                     (const char_T *)"seasonal")),
      &thisId);
  thisId.fIdentifier = "ARp";
  ab_emlrt_marshallIn(sp,
                      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 4,
                                                     (const char_T *)"ARp")),
                      &thisId, y->ARp);
  thisId.fIdentifier = "X";
  bb_emlrt_marshallIn(sp,
                      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 5,
                                                     (const char_T *)"X")),
                      &thisId, y->X);
  emlrtDestroyArray(&u);
}

void FSM_wrapper_api(const mxArray *const prhs[8], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_char_T *crit;
  emxArray_real_T *Y;
  emxArray_real_T *m0;
  struct_FSM_T out;
  real_T init;
  real_T rf;
  real_T *bonflev_data;
  int32_T bonflev_size[2];
  boolean_T msg;
  boolean_T nocheck;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Y, 2, true);
  emxInit_char_T(&st, &crit, 2, true);
  emxInit_real_T(&st, &m0, 1, true);
  emxInitStruct_struct_FSM_T(&st, &out, true);
  /* Marshall function inputs */
  Y->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Y", Y);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "bonflev",
                     (real_T **)&bonflev_data, bonflev_size);
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "crit", crit);
  init = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "init");
  m0->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "m0", m0);
  msg = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "msg");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "nocheck");
  rf = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "rf");
  /* Invoke the target function */
  FSM_wrapper(Y, (real_T *)bonflev_data, bonflev_size, crit, init, m0, msg,
              nocheck, rf, &out);
  /* Marshall function outputs */
  *plhs = emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct_FSM_T(&out);
  emxFree_real_T(&m0);
  emxFree_char_T(&crit);
  emxFree_real_T(&Y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void FSMbsb_wrapper_api(const mxArray *const prhs[6], int32_T nlhs,
                        const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *BB;
  emxArray_real_T *Un;
  emxArray_real_T *Y;
  emxArray_real_T *bsb;
  emxArray_real_T *bsbsteps;
  real_T init;
  boolean_T msg;
  boolean_T nocheck;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Y, 2, true);
  emxInit_real_T(&st, &bsb, 1, true);
  emxInit_real_T(&st, &bsbsteps, 2, true);
  emxInit_real_T(&st, &Un, 2, true);
  emxInit_real_T(&st, &BB, 2, true);
  /* Marshall function inputs */
  Y->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Y", Y);
  bsb->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "bsb", bsb);
  bsbsteps->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "bsbsteps", bsbsteps);
  init = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "init");
  msg = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "msg");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "nocheck");
  /* Invoke the target function */
  FSMbsb_wrapper(Y, bsb, bsbsteps, init, msg, nocheck, Un, BB);
  /* Marshall function outputs */
  Un->canFreeData = false;
  plhs[0] = d_emlrt_marshallOut(Un);
  emxFree_real_T(&Un);
  emxFree_real_T(&bsbsteps);
  emxFree_real_T(&bsb);
  emxFree_real_T(&Y);
  if (nlhs > 1) {
    BB->canFreeData = false;
    plhs[1] = d_emlrt_marshallOut(BB);
  }
  emxFree_real_T(&BB);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void FSMenvmmd_wrapper_api(const mxArray *const prhs[5], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *MMDenv;
  emxArray_real_T *prob;
  real_T init;
  real_T n;
  real_T v;
  boolean_T scaled;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &prob, 2, true);
  emxInit_real_T(&st, &MMDenv, 2, true);
  /* Marshall function inputs */
  n = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "n");
  v = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "v");
  init = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "init");
  prob->canFreeData = false;
  o_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "prob", prob);
  scaled = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "scaled");
  /* Invoke the target function */
  FSMenvmmd_wrapper(n, v, init, prob, scaled, MMDenv);
  /* Marshall function outputs */
  MMDenv->canFreeData = false;
  *plhs = d_emlrt_marshallOut(MMDenv);
  emxFree_real_T(&MMDenv);
  emxFree_real_T(&prob);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void FSMmmd_wrapper_api(const mxArray *const prhs[6], int32_T nlhs,
                        const mxArray *plhs[3])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *BB;
  emxArray_real_T *Un;
  emxArray_real_T *Y;
  emxArray_real_T *bsb;
  emxArray_real_T *bsbsteps;
  emxArray_real_T *mmd;
  real_T init;
  boolean_T msg;
  boolean_T nocheck;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Y, 2, true);
  emxInit_real_T(&st, &bsb, 1, true);
  emxInit_real_T(&st, &bsbsteps, 2, true);
  emxInit_real_T(&st, &mmd, 2, true);
  emxInit_real_T(&st, &Un, 2, true);
  emxInit_real_T(&st, &BB, 2, true);
  /* Marshall function inputs */
  Y->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Y", Y);
  bsb->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "bsb", bsb);
  bsbsteps->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "bsbsteps", bsbsteps);
  init = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "init");
  msg = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "msg");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "nocheck");
  /* Invoke the target function */
  FSMmmd_wrapper(Y, bsb, bsbsteps, init, msg, nocheck, mmd, Un, BB);
  /* Marshall function outputs */
  mmd->canFreeData = false;
  plhs[0] = d_emlrt_marshallOut(mmd);
  emxFree_real_T(&mmd);
  emxFree_real_T(&bsbsteps);
  emxFree_real_T(&bsb);
  emxFree_real_T(&Y);
  if (nlhs > 1) {
    Un->canFreeData = false;
    plhs[1] = d_emlrt_marshallOut(Un);
  }
  emxFree_real_T(&Un);
  if (nlhs > 2) {
    BB->canFreeData = false;
    plhs[2] = d_emlrt_marshallOut(BB);
  }
  emxFree_real_T(&BB);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void FSR_wrapper1_api(const mxArray *const prhs[13], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *X;
  emxArray_real_T *y;
  struct_FSR_T out;
  struct_FSRlms_T b_lms;
  struct_FSRlms_T lms;
  real_T h;
  real_T init;
  real_T nsamp;
  real_T *bonflev_data;
  real_T *threshoutX_data;
  int32_T bonflev_size[2];
  int32_T threshoutX_size[2];
  boolean_T bsbmfullrank;
  boolean_T intercept;
  boolean_T msg;
  boolean_T nocheck;
  boolean_T weak;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, true);
  emxInit_real_T(&st, &X, 2, true);
  emxInitStruct_struct_FSRlms_T(&st, &lms, true);
  emxInitStruct_struct_FSR_T(&st, &out, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  bsbmfullrank = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "bsbmfullrank");
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "bonflev",
                     (real_T **)&bonflev_data, bonflev_size);
  h = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "h");
  init = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "init");
  intercept = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "intercept");
  q_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "lms", &lms);
  msg = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "msg");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "nocheck");
  nsamp = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "nsamp");
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "threshoutX",
                     (real_T **)&threshoutX_data, threshoutX_size);
  weak = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "weak");
  /* Invoke the target function */
  b_lms = lms;
  FSR_wrapper1(y, X, bsbmfullrank, (real_T *)bonflev_data, bonflev_size, h,
               init, intercept, &b_lms, msg, nocheck, nsamp,
               (real_T *)threshoutX_data, threshoutX_size, weak, &out);
  /* Marshall function outputs */
  *plhs = e_emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct_FSR_T(&out);
  emxFreeStruct_struct_FSRlms_T(&lms);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void FSR_wrapper_api(const mxArray *const prhs[13], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *X;
  emxArray_real_T *y;
  struct_FSR_T out;
  real_T h;
  real_T init;
  real_T lms;
  real_T nsamp;
  real_T *bonflev_data;
  real_T *threshoutX_data;
  int32_T bonflev_size[2];
  int32_T threshoutX_size[2];
  boolean_T bsbmfullrank;
  boolean_T intercept;
  boolean_T msg;
  boolean_T nocheck;
  boolean_T weak;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, true);
  emxInit_real_T(&st, &X, 2, true);
  emxInitStruct_struct_FSR_T(&st, &out, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  bsbmfullrank = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "bsbmfullrank");
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "bonflev",
                     (real_T **)&bonflev_data, bonflev_size);
  h = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "h");
  init = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "init");
  intercept = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "intercept");
  lms = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "lms");
  msg = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "msg");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "nocheck");
  nsamp = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "nsamp");
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "threshoutX",
                     (real_T **)&threshoutX_data, threshoutX_size);
  weak = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "weak");
  /* Invoke the target function */
  FSR_wrapper(y, X, bsbmfullrank, (real_T *)bonflev_data, bonflev_size, h, init,
              intercept, lms, msg, nocheck, nsamp, (real_T *)threshoutX_data,
              threshoutX_size, weak, &out);
  /* Marshall function outputs */
  *plhs = e_emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct_FSR_T(&out);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void FSRbsb_wrapper_api(const mxArray *const prhs[8], int32_T nlhs,
                        const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *BB;
  emxArray_real_T *Un;
  emxArray_real_T *X;
  emxArray_real_T *bsb;
  emxArray_real_T *bsbsteps;
  emxArray_real_T *y;
  real_T init;
  boolean_T intercept;
  boolean_T msg;
  boolean_T nocheck;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, true);
  emxInit_real_T(&st, &X, 2, true);
  emxInit_real_T(&st, &bsb, 1, true);
  emxInit_real_T(&st, &bsbsteps, 2, true);
  emxInit_real_T(&st, &Un, 2, true);
  emxInit_real_T(&st, &BB, 2, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  bsb->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "bsb", bsb);
  bsbsteps->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "bsbsteps", bsbsteps);
  init = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "init");
  intercept = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "intercept");
  msg = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "msg");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "nocheck");
  /* Invoke the target function */
  FSRbsb_wrapper(y, X, bsb, bsbsteps, init, intercept, msg, nocheck, Un, BB);
  /* Marshall function outputs */
  Un->canFreeData = false;
  plhs[0] = d_emlrt_marshallOut(Un);
  emxFree_real_T(&Un);
  emxFree_real_T(&bsbsteps);
  emxFree_real_T(&bsb);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  if (nlhs > 1) {
    BB->canFreeData = false;
    plhs[1] = d_emlrt_marshallOut(BB);
  }
  emxFree_real_T(&BB);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void FSRenvmdr_wrapper_api(const mxArray *const prhs[4], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *MDRenv;
  emxArray_real_T *prob;
  real_T init;
  real_T n;
  real_T p;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &prob, 2, true);
  emxInit_real_T(&st, &MDRenv, 2, true);
  /* Marshall function inputs */
  n = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "n");
  p = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "p");
  init = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "init");
  prob->canFreeData = false;
  o_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "prob", prob);
  /* Invoke the target function */
  FSRenvmdr_wrapper(n, p, init, prob, MDRenv);
  /* Marshall function outputs */
  MDRenv->canFreeData = false;
  *plhs = d_emlrt_marshallOut(MDRenv);
  emxFree_real_T(&MDRenv);
  emxFree_real_T(&prob);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void FSRfan_wrapper_api(const mxArray *const prhs[11], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_char_T *family;
  emxArray_real_T *X;
  emxArray_real_T *la;
  emxArray_real_T *lms;
  emxArray_real_T *y;
  struct_FSRfan_T out;
  real_T h;
  real_T init;
  real_T nsamp;
  boolean_T intercept;
  boolean_T msg;
  boolean_T nocheck;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, true);
  emxInit_real_T(&st, &X, 2, true);
  emxInit_real_T(&st, &la, 1, true);
  emxInit_real_T(&st, &lms, 2, true);
  emxInit_char_T(&st, &family, 2, true);
  emxInitStruct_struct_FSRfan_T(&st, &out, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  intercept = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "intercept");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "nocheck");
  la->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "la", la);
  h = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "h");
  nsamp = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "nsamp");
  lms->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "lms", lms);
  init = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "init");
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "family", family);
  msg = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "msg");
  /* Invoke the target function */
  FSRfan_wrapper(y, X, intercept, nocheck, la, h, nsamp, lms, init, family, msg,
                 &out);
  /* Marshall function outputs */
  *plhs = i_emlrt_marshallOut(&out);
  emxFreeStruct_struct_FSRfan_T(&out);
  emxFree_char_T(&family);
  emxFree_real_T(&lms);
  emxFree_real_T(&la);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void FSRmdr_wrapper_api(const mxArray *const prhs[12], int32_T nlhs,
                        const mxArray *plhs[5])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *BB;
  emxArray_real_T *Bols;
  emxArray_real_T *S2;
  emxArray_real_T *Un;
  emxArray_real_T *X;
  emxArray_real_T *bsb;
  emxArray_real_T *bsbsteps;
  emxArray_real_T *constr;
  emxArray_real_T *mdr;
  emxArray_real_T *y;
  real_T init;
  real_T *threshlevoutX_data;
  int32_T threshlevoutX_size[2];
  boolean_T bsbmfullrank;
  boolean_T intercept;
  boolean_T internationaltrade;
  boolean_T msg;
  boolean_T nocheck;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, true);
  emxInit_real_T(&st, &X, 2, true);
  emxInit_real_T(&st, &bsb, 1, true);
  emxInit_real_T(&st, &bsbsteps, 2, true);
  emxInit_real_T(&st, &constr, 2, true);
  emxInit_real_T(&st, &mdr, 2, true);
  emxInit_real_T(&st, &Un, 2, true);
  emxInit_real_T(&st, &BB, 2, true);
  emxInit_real_T(&st, &Bols, 2, true);
  emxInit_real_T(&st, &S2, 2, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  bsb->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "bsb", bsb);
  bsbmfullrank = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "bsbmfullrank");
  bsbsteps->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "bsbsteps", bsbsteps);
  constr->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "constr", constr);
  init = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "init");
  intercept = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "intercept");
  internationaltrade =
      k_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "internationaltrade");
  msg = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "msg");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "nocheck");
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "threshlevoutX",
                     (real_T **)&threshlevoutX_data, threshlevoutX_size);
  /* Invoke the target function */
  FSRmdr_wrapper(y, X, bsb, bsbmfullrank, bsbsteps, constr, init, intercept,
                 internationaltrade, msg, nocheck, (real_T *)threshlevoutX_data,
                 threshlevoutX_size, mdr, Un, BB, Bols, S2);
  /* Marshall function outputs */
  mdr->canFreeData = false;
  plhs[0] = d_emlrt_marshallOut(mdr);
  emxFree_real_T(&mdr);
  emxFree_real_T(&constr);
  emxFree_real_T(&bsbsteps);
  emxFree_real_T(&bsb);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  if (nlhs > 1) {
    Un->canFreeData = false;
    plhs[1] = d_emlrt_marshallOut(Un);
  }
  emxFree_real_T(&Un);
  if (nlhs > 2) {
    BB->canFreeData = false;
    plhs[2] = d_emlrt_marshallOut(BB);
  }
  emxFree_real_T(&BB);
  if (nlhs > 3) {
    Bols->canFreeData = false;
    plhs[3] = d_emlrt_marshallOut(Bols);
  }
  emxFree_real_T(&Bols);
  if (nlhs > 4) {
    S2->canFreeData = false;
    plhs[4] = d_emlrt_marshallOut(S2);
  }
  emxFree_real_T(&S2);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void LTSts_wrapper_api(const mxArray *const prhs[16], int32_T nlhs,
                       const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *y;
  struct_LTSts_T out;
  struct_LTStslshiftlocref_T lshiftlocref;
  struct_LTStsmodel_T b_model;
  struct_LTStsmodel_T model;
  struct_LXSlms_T lts;
  real_T(*nsamp_data)[2];
  real_T C;
  real_T SmallSampleCor;
  real_T conflev;
  real_T h;
  real_T nbestindexes;
  real_T refstepsALS;
  real_T reftolALS;
  int32_T nsamp_size[2];
  boolean_T dispresults;
  boolean_T intercept;
  boolean_T msg;
  boolean_T nocheck;
  boolean_T yxsave;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, true);
  c_emxInitStruct_struct_LTStsmod(&st, &model, true);
  emxInitStruct_struct_LTSts_T(&st, &out, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  conflev = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "conflev");
  dispresults = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "dispresults");
  h = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "h");
  intercept = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "intercept");
  lshiftlocref = t_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "lshiftlocref");
  lts = v_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "lts");
  x_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "model", &model);
  msg = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "msg");
  nbestindexes = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "nbestindexes");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "nocheck");
  cb_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "nsamp",
                      (real_T **)&nsamp_data, nsamp_size);
  refstepsALS = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "refstepsALS");
  reftolALS = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "reftolALS");
  SmallSampleCor =
      g_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "SmallSampleCor");
  yxsave = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "yxsave");
  /* Invoke the target function */
  b_model = model;
  LTSts_wrapper(y, conflev, dispresults, h, intercept, &lshiftlocref, &lts,
                &b_model, msg, nbestindexes, nocheck, *nsamp_data, nsamp_size,
                refstepsALS, reftolALS, SmallSampleCor, yxsave, &out, &C);
  /* Marshall function outputs */
  plhs[0] = k_emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct_LTSts_T(&out);
  c_emxFreeStruct_struct_LTStsmod(&model);
  emxFree_real_T(&y);
  if (nlhs > 1) {
    plhs[1] = h_emlrt_marshallOut(C);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void LXS_wrapper1_api(const mxArray *const prhs[13], int32_T nlhs,
                      const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *C;
  emxArray_real_T *X;
  emxArray_real_T *y;
  struct_LXS_T out;
  struct_LXSlms_T lms;
  real_T conflev;
  real_T h;
  real_T nsamp;
  real_T *bonflevoutX_data;
  int32_T bonflevoutX_size[2];
  boolean_T intercept;
  boolean_T msg;
  boolean_T nocheck;
  boolean_T nomes;
  boolean_T rew;
  boolean_T yxsave;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, true);
  emxInit_real_T(&st, &X, 2, true);
  emxInitStruct_struct_LXS_T(&st, &out, true);
  emxInit_real_T(&st, &C, 2, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "bonflevoutX",
                     (real_T **)&bonflevoutX_data, bonflevoutX_size);
  conflev = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "conflev");
  h = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "h");
  intercept = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "intercept");
  lms = v_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "lms");
  msg = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "msg");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "nocheck");
  nomes = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "nomes");
  nsamp = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "nsamp");
  rew = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "rew");
  yxsave = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "yxsave");
  /* Invoke the target function */
  LXS_wrapper1(y, X, (real_T *)bonflevoutX_data, bonflevoutX_size, conflev, h,
               intercept, &lms, msg, nocheck, nomes, nsamp, rew, yxsave, &out,
               C);
  /* Marshall function outputs */
  plhs[0] = o_emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct_LXS_T(&out);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  if (nlhs > 1) {
    C->canFreeData = false;
    plhs[1] = d_emlrt_marshallOut(C);
  }
  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void LXS_wrapper_api(const mxArray *const prhs[13], int32_T nlhs,
                     const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *C;
  emxArray_real_T *X;
  emxArray_real_T *y;
  struct_LXS_T out;
  real_T conflev;
  real_T h;
  real_T lms;
  real_T nsamp;
  real_T *bonflevoutX_data;
  int32_T bonflevoutX_size[2];
  boolean_T intercept;
  boolean_T msg;
  boolean_T nocheck;
  boolean_T nomes;
  boolean_T rew;
  boolean_T yxsave;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, true);
  emxInit_real_T(&st, &X, 2, true);
  emxInitStruct_struct_LXS_T(&st, &out, true);
  emxInit_real_T(&st, &C, 2, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "bonflevoutX",
                     (real_T **)&bonflevoutX_data, bonflevoutX_size);
  conflev = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "conflev");
  h = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "h");
  intercept = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "intercept");
  lms = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "lms");
  msg = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "msg");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "nocheck");
  nomes = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "nomes");
  nsamp = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "nsamp");
  rew = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "rew");
  yxsave = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "yxsave");
  /* Invoke the target function */
  LXS_wrapper(y, X, (real_T *)bonflevoutX_data, bonflevoutX_size, conflev, h,
              intercept, lms, msg, nocheck, nomes, nsamp, rew, yxsave, &out, C);
  /* Marshall function outputs */
  plhs[0] = o_emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct_LXS_T(&out);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  if (nlhs > 1) {
    C->canFreeData = false;
    plhs[1] = d_emlrt_marshallOut(C);
  }
  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void MMreg_wrapper_api(const mxArray *const prhs[23], int32_T nlhs,
                       const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_char_T *Srhofunc;
  emxArray_char_T *rhofunc;
  emxArray_real_T *C;
  emxArray_real_T *Srhofuncparam;
  emxArray_real_T *X;
  emxArray_real_T *rhofuncparam;
  emxArray_real_T *y;
  struct1_T InitialEst;
  struct1_T b_InitialEst;
  struct_MMreg_T out;
  real_T Sbdp;
  real_T Sbestr;
  real_T Sminsctol;
  real_T Snsamp;
  real_T Srefsteps;
  real_T Srefstepsbestr;
  real_T Sreftol;
  real_T Sreftolbestr;
  real_T conflev;
  real_T eff;
  real_T refsteps;
  real_T tol;
  boolean_T intercept;
  boolean_T msg;
  boolean_T nocheck;
  boolean_T yxsave;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, true);
  emxInit_real_T(&st, &X, 2, true);
  emxInitStruct_struct1_T(&st, &InitialEst, true);
  emxInit_char_T(&st, &rhofunc, 2, true);
  emxInit_real_T(&st, &rhofuncparam, 2, true);
  emxInit_char_T(&st, &Srhofunc, 2, true);
  emxInit_real_T(&st, &Srhofuncparam, 2, true);
  emxInitStruct_struct_MMreg_T(&st, &out, true);
  emxInit_real_T(&st, &C, 2, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  conflev = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "conflev");
  eff = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "eff");
  eb_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "InitialEst", &InitialEst);
  intercept = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "intercept");
  msg = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "msg");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "nocheck");
  refsteps = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "refsteps");
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "rhofunc", rhofunc);
  rhofuncparam->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[10]), "rhofuncparam", rhofuncparam);
  Sbdp = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "Sbdp");
  Sbestr = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "Sbestr");
  Sminsctol = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "Sminsctol");
  Snsamp = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "Snsamp");
  Srefsteps = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "Srefsteps");
  Srefstepsbestr =
      g_emlrt_marshallIn(&st, emlrtAliasP(prhs[16]), "Srefstepsbestr");
  Sreftol = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[17]), "Sreftol");
  Sreftolbestr = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[18]), "Sreftolbestr");
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[19]), "Srhofunc", Srhofunc);
  Srhofuncparam->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[20]), "Srhofuncparam", Srhofuncparam);
  tol = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[21]), "tol");
  yxsave = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[22]), "yxsave");
  /* Invoke the target function */
  b_InitialEst = InitialEst;
  MMreg_wrapper(y, X, conflev, eff, &b_InitialEst, intercept, msg, nocheck,
                refsteps, rhofunc, rhofuncparam, Sbdp, Sbestr, Sminsctol,
                Snsamp, Srefsteps, Srefstepsbestr, Sreftol, Sreftolbestr,
                Srhofunc, Srhofuncparam, tol, yxsave, &out, C);
  /* Marshall function outputs */
  plhs[0] = p_emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct_MMreg_T(&out);
  emxFree_real_T(&Srhofuncparam);
  emxFree_char_T(&Srhofunc);
  emxFree_real_T(&rhofuncparam);
  emxFree_char_T(&rhofunc);
  emxFreeStruct_struct1_T(&InitialEst);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  if (nlhs > 1) {
    C->canFreeData = false;
    plhs[1] = d_emlrt_marshallOut(C);
  }
  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void MMregeda_wrapper_api(const mxArray *const prhs[22], int32_T nlhs,
                          const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_char_T *Srhofunc;
  emxArray_char_T *rhofunc;
  emxArray_real_T *C;
  emxArray_real_T *Srhofuncparam;
  emxArray_real_T *X;
  emxArray_real_T *eff;
  emxArray_real_T *rhofuncparam;
  emxArray_real_T *y;
  struct1_T InitialEst;
  struct1_T b_InitialEst;
  struct_MMregeda_T out;
  real_T Sbdp;
  real_T Sbestr;
  real_T Sminsctol;
  real_T Snsamp;
  real_T Srefsteps;
  real_T Srefstepsbestr;
  real_T Sreftol;
  real_T Sreftolbestr;
  real_T conflev;
  real_T refsteps;
  real_T tol;
  boolean_T Smsg;
  boolean_T intercept;
  boolean_T nocheck;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, true);
  emxInit_real_T(&st, &X, 2, true);
  emxInit_real_T(&st, &eff, 1, true);
  emxInitStruct_struct1_T(&st, &InitialEst, true);
  emxInit_char_T(&st, &rhofunc, 2, true);
  emxInit_real_T(&st, &rhofuncparam, 2, true);
  emxInit_char_T(&st, &Srhofunc, 2, true);
  emxInit_real_T(&st, &Srhofuncparam, 2, true);
  emxInitStruct_struct_MMregeda_T(&st, &out, true);
  emxInit_real_T(&st, &C, 2, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  conflev = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "conflev");
  eff->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "eff", eff);
  eb_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "InitialEst", &InitialEst);
  intercept = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "intercept");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "nocheck");
  refsteps = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "refsteps");
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "rhofunc", rhofunc);
  rhofuncparam->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "rhofuncparam", rhofuncparam);
  Sbdp = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "Sbdp");
  Sbestr = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "Sbestr");
  Sminsctol = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "Sminsctol");
  Smsg = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "Smsg");
  Snsamp = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "Snsamp");
  Srefsteps = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "Srefsteps");
  Srefstepsbestr =
      g_emlrt_marshallIn(&st, emlrtAliasP(prhs[16]), "Srefstepsbestr");
  Sreftol = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[17]), "Sreftol");
  Sreftolbestr = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[18]), "Sreftolbestr");
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[19]), "Srhofunc", Srhofunc);
  Srhofuncparam->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[20]), "Srhofuncparam", Srhofuncparam);
  tol = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[21]), "tol");
  /* Invoke the target function */
  b_InitialEst = InitialEst;
  MMregeda_wrapper(y, X, conflev, eff, &b_InitialEst, intercept, nocheck,
                   refsteps, rhofunc, rhofuncparam, Sbdp, Sbestr, Sminsctol,
                   Smsg, Snsamp, Srefsteps, Srefstepsbestr, Sreftol,
                   Sreftolbestr, Srhofunc, Srhofuncparam, tol, &out, C);
  /* Marshall function outputs */
  plhs[0] = q_emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct_MMregeda_T(&out);
  emxFree_real_T(&Srhofuncparam);
  emxFree_char_T(&Srhofunc);
  emxFree_real_T(&rhofuncparam);
  emxFree_char_T(&rhofunc);
  emxFreeStruct_struct1_T(&InitialEst);
  emxFree_real_T(&eff);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  if (nlhs > 1) {
    C->canFreeData = false;
    plhs[1] = d_emlrt_marshallOut(C);
  }
  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void Sreg_wrapper_api(const mxArray *const prhs[17], int32_T nlhs,
                      const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_char_T *rhofunc;
  emxArray_real_T *C;
  emxArray_real_T *X;
  emxArray_real_T *rhofuncparam;
  emxArray_real_T *y;
  struct_Sreg_T out;
  real_T bdp;
  real_T bestr;
  real_T conflev;
  real_T minsctol;
  real_T nsamp;
  real_T refsteps;
  real_T refstepsbestr;
  real_T reftol;
  real_T reftolbestr;
  boolean_T intercept;
  boolean_T msg;
  boolean_T nocheck;
  boolean_T yxsave;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, true);
  emxInit_real_T(&st, &X, 2, true);
  emxInit_char_T(&st, &rhofunc, 2, true);
  emxInit_real_T(&st, &rhofuncparam, 2, true);
  emxInitStruct_struct_Sreg_T(&st, &out, true);
  emxInit_real_T(&st, &C, 2, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  bdp = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "bdp");
  bestr = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "bestr");
  conflev = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "conflev");
  intercept = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "intercept");
  minsctol = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "minsctol");
  msg = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "msg");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "nocheck");
  nsamp = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "nsamp");
  refsteps = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "refsteps");
  refstepsbestr =
      g_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "refstepsbestr");
  reftol = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "reftol");
  reftolbestr = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "reftolbestr");
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "rhofunc", rhofunc);
  rhofuncparam->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[15]), "rhofuncparam", rhofuncparam);
  yxsave = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[16]), "yxsave");
  /* Invoke the target function */
  Sreg_wrapper(y, X, bdp, bestr, conflev, intercept, minsctol, msg, nocheck,
               nsamp, refsteps, refstepsbestr, reftol, reftolbestr, rhofunc,
               rhofuncparam, yxsave, &out, C);
  /* Marshall function outputs */
  plhs[0] = r_emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct_Sreg_T(&out);
  emxFree_real_T(&rhofuncparam);
  emxFree_char_T(&rhofunc);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  if (nlhs > 1) {
    C->canFreeData = false;
    plhs[1] = d_emlrt_marshallOut(C);
  }
  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void Sregeda_wrapper_api(const mxArray *const prhs[16], int32_T nlhs,
                         const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_char_T *rhofunc;
  emxArray_real_T *C;
  emxArray_real_T *X;
  emxArray_real_T *bdp;
  emxArray_real_T *rhofuncparam;
  emxArray_real_T *y;
  struct_Sregeda_T out;
  real_T bestr;
  real_T conflev;
  real_T minsctol;
  real_T nsamp;
  real_T refsteps;
  real_T refstepsbestr;
  real_T reftol;
  real_T reftolbestr;
  boolean_T intercept;
  boolean_T msg;
  boolean_T nocheck;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, true);
  emxInit_real_T(&st, &X, 2, true);
  emxInit_real_T(&st, &bdp, 1, true);
  emxInit_char_T(&st, &rhofunc, 2, true);
  emxInit_real_T(&st, &rhofuncparam, 2, true);
  emxInitStruct_struct_Sregeda_T(&st, &out, true);
  emxInit_real_T(&st, &C, 2, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  bdp->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "bdp", bdp);
  bestr = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "bestr");
  conflev = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "conflev");
  intercept = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "intercept");
  minsctol = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "minsctol");
  msg = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "msg");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "nocheck");
  nsamp = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "nsamp");
  refsteps = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "refsteps");
  refstepsbestr =
      g_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "refstepsbestr");
  reftol = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "reftol");
  reftolbestr = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "reftolbestr");
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "rhofunc", rhofunc);
  rhofuncparam->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[15]), "rhofuncparam", rhofuncparam);
  /* Invoke the target function */
  Sregeda_wrapper(y, X, bdp, bestr, conflev, intercept, minsctol, msg, nocheck,
                  nsamp, refsteps, refstepsbestr, reftol, reftolbestr, rhofunc,
                  rhofuncparam, &out, C);
  /* Marshall function outputs */
  plhs[0] = s_emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct_Sregeda_T(&out);
  emxFree_real_T(&rhofuncparam);
  emxFree_char_T(&rhofunc);
  emxFree_real_T(&bdp);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  if (nlhs > 1) {
    C->canFreeData = false;
    plhs[1] = d_emlrt_marshallOut(C);
  }
  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void addt_wrapper_api(const mxArray *const prhs[6], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *X;
  emxArray_real_T *w;
  emxArray_real_T *y;
  struct_addt_T out;
  real_T *la_data;
  int32_T la_size[2];
  boolean_T intercept;
  boolean_T nocheck;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, true);
  emxInit_real_T(&st, &X, 2, true);
  emxInit_real_T(&st, &w, 1, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  w->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "w", w);
  intercept = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "intercept");
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "la", (real_T **)&la_data,
                     la_size);
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "nocheck");
  /* Invoke the target function */
  addt_wrapper(y, X, w, intercept, (real_T *)la_data, la_size, nocheck, &out);
  /* Marshall function outputs */
  *plhs = t_emlrt_marshallOut(out);
  emxFree_real_T(&w);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void fsdaC_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  fsdaC_xil_terminate();
  fsdaC_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void fsdaC_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

void fsdaC_terminate(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void tclust_wrapper1_api(const mxArray *const prhs[14], int32_T nlhs,
                         const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *C;
  emxArray_real_T *RandNumbForNini;
  emxArray_real_T *Y;
  emxArray_real_T *nsamp;
  struct_tclust_T out;
  struct_tclustrestrfactor_T restrfactor;
  real_T alpha;
  real_T k;
  real_T mixt;
  real_T msg;
  real_T refsteps;
  real_T reftol;
  boolean_T Ysave;
  boolean_T equalweights;
  boolean_T nocheck;
  boolean_T startv1;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Y, 2, true);
  emxInit_real_T(&st, &nsamp, 2, true);
  emxInit_real_T(&st, &RandNumbForNini, 2, true);
  emxInitStruct_struct_tclust_T(&st, &out, true);
  emxInit_real_T(&st, &C, 2, true);
  /* Marshall function inputs */
  Y->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Y", Y);
  k = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "k");
  alpha = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "alpha");
  gb_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "restrfactor", &restrfactor);
  equalweights = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "equalweights");
  mixt = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "mixt");
  msg = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "msg");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "nocheck");
  nsamp->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "nsamp", nsamp);
  RandNumbForNini->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "RandNumbForNini",
                   RandNumbForNini);
  refsteps = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "refsteps");
  reftol = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "reftol");
  startv1 = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "startv1");
  Ysave = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "Ysave");
  /* Invoke the target function */
  tclust_wrapper1(Y, k, alpha, &restrfactor, equalweights, mixt, msg, nocheck,
                  nsamp, RandNumbForNini, refsteps, reftol, startv1, Ysave,
                  &out, C);
  /* Marshall function outputs */
  plhs[0] = v_emlrt_marshallOut(&out);
  emxFreeStruct_struct_tclust_T(&out);
  emxFree_real_T(&RandNumbForNini);
  emxFree_real_T(&nsamp);
  emxFree_real_T(&Y);
  if (nlhs > 1) {
    C->canFreeData = false;
    plhs[1] = d_emlrt_marshallOut(C);
  }
  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void tclust_wrapper_api(const mxArray *const prhs[14], int32_T nlhs,
                        const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *C;
  emxArray_real_T *RandNumbForNini;
  emxArray_real_T *Y;
  emxArray_real_T *nsamp;
  struct_tclust_T out;
  real_T alpha;
  real_T k;
  real_T mixt;
  real_T msg;
  real_T refsteps;
  real_T reftol;
  real_T restrfactor;
  boolean_T Ysave;
  boolean_T equalweights;
  boolean_T nocheck;
  boolean_T startv1;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Y, 2, true);
  emxInit_real_T(&st, &nsamp, 2, true);
  emxInit_real_T(&st, &RandNumbForNini, 2, true);
  emxInitStruct_struct_tclust_T(&st, &out, true);
  emxInit_real_T(&st, &C, 2, true);
  /* Marshall function inputs */
  Y->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Y", Y);
  k = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "k");
  alpha = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "alpha");
  restrfactor = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "restrfactor");
  equalweights = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "equalweights");
  mixt = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "mixt");
  msg = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "msg");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "nocheck");
  nsamp->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "nsamp", nsamp);
  RandNumbForNini->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "RandNumbForNini",
                   RandNumbForNini);
  refsteps = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "refsteps");
  reftol = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "reftol");
  startv1 = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "startv1");
  Ysave = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "Ysave");
  /* Invoke the target function */
  tclust_wrapper(Y, k, alpha, restrfactor, equalweights, mixt, msg, nocheck,
                 nsamp, RandNumbForNini, refsteps, reftol, startv1, Ysave, &out,
                 C);
  /* Marshall function outputs */
  plhs[0] = v_emlrt_marshallOut(&out);
  emxFreeStruct_struct_tclust_T(&out);
  emxFree_real_T(&RandNumbForNini);
  emxFree_real_T(&nsamp);
  emxFree_real_T(&Y);
  if (nlhs > 1) {
    C->canFreeData = false;
    plhs[1] = d_emlrt_marshallOut(C);
  }
  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void unibiv_wrapper_api(const mxArray *const prhs[4], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *Y;
  emxArray_real_T *fre;
  real_T madcoef;
  real_T rf;
  real_T robscale;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Y, 2, true);
  emxInit_real_T(&st, &fre, 2, true);
  /* Marshall function inputs */
  Y->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Y", Y);
  madcoef = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "madcoef");
  robscale = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "robscale");
  rf = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "rf");
  /* Invoke the target function */
  unibiv_wrapper(Y, madcoef, robscale, rf, fre);
  /* Marshall function outputs */
  fre->canFreeData = false;
  *plhs = d_emlrt_marshallOut(fre);
  emxFree_real_T(&fre);
  emxFree_real_T(&Y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_fsdaC_api.c) */
