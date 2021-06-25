/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_fsdaC_api.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
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
                                real_T **y_data, int32_T y_size[2]);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);

static void bb_emlrt_marshallIn(const emlrtStack *sp,
                                const mxArray *restrfactor,
                                const char_T *identifier,
                                struct_tclustrestrfactor_T *y);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bonflev,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2]);

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);

static void c_emxFreeStruct_struct_LTStsmod(struct_LTStsmodel_T *pStruct);

static void
c_emxInitStruct_matlab_internal(e_matlab_internal_coder_tabular *pStruct);

static void c_emxInitStruct_struct_LTStsmod(const emlrtStack *sp,
                                            struct_LTStsmodel_T *pStruct,
                                            boolean_T doPush);

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                struct_tclustrestrfactor_T *y);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2]);

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);

static void
d_emxInitStruct_matlab_internal(f_matlab_internal_coder_tabular *pStruct);

static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                char_T y[3]);

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *crit,
                               const char_T *identifier, char_T y_data[],
                               int32_T y_size[2]);

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_FSR_T *u);

static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y,
                             const char_T *identifier, emxArray_real_T *y);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const struct_FSM_T *u);

static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray,
                                     int32_T oldNumel);

static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray,
                                     int32_T oldNumel);

static void emxFreeMatrix_cell_wrap_6(cell_wrap_6 pMatrix[4]);

static void emxFreeStruct_cell_wrap_36(cell_wrap_36 *pStruct);

static void emxFreeStruct_cell_wrap_6(cell_wrap_6 *pStruct);

static void emxFreeStruct_struct_FSM_T(struct_FSM_T *pStruct);

static void emxFreeStruct_struct_FSR_T(struct_FSR_T *pStruct);

static void emxFreeStruct_struct_FSRfan_T(struct_FSRfan_T *pStruct);

static void emxFreeStruct_struct_LTSts_T(struct_LTSts_T *pStruct);

static void emxFreeStruct_struct_LXS_T(struct_LXS_T *pStruct);

static void emxFreeStruct_struct_tclust_T(struct_tclust_T *pStruct);

static void emxFreeStruct_table(table *pStruct);

static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);

static void emxFree_cell_wrap_36(emxArray_cell_wrap_36 **pEmxArray);

static void emxFree_char_T(emxArray_char_T **pEmxArray);

static void emxFree_real32_T(emxArray_real32_T **pEmxArray);

static void emxFree_real_T(emxArray_real_T **pEmxArray);

static void emxInitMatrix_cell_wrap_48(cell_wrap_48 *pMatrix);

static void emxInitMatrix_cell_wrap_50(cell_wrap_50 pMatrix[4]);

static void emxInitMatrix_cell_wrap_6(const emlrtStack *sp,
                                      cell_wrap_6 pMatrix[4], boolean_T doPush);

static void emxInitStruct_cell_wrap_48(cell_wrap_48 *pStruct);

static void emxInitStruct_cell_wrap_50(cell_wrap_50 *pStruct);

static void emxInitStruct_cell_wrap_6(const emlrtStack *sp,
                                      cell_wrap_6 *pStruct, boolean_T doPush);

static void emxInitStruct_struct0_T(struct0_T *pStruct);

static void emxInitStruct_struct_FSM_T(const emlrtStack *sp,
                                       struct_FSM_T *pStruct, boolean_T doPush);

static void emxInitStruct_struct_FSR_T(const emlrtStack *sp,
                                       struct_FSR_T *pStruct, boolean_T doPush);

static void emxInitStruct_struct_FSRfan_T(const emlrtStack *sp,
                                          struct_FSRfan_T *pStruct,
                                          boolean_T doPush);

static void emxInitStruct_struct_LTSts_T(const emlrtStack *sp,
                                         struct_LTSts_T *pStruct,
                                         boolean_T doPush);

static void emxInitStruct_struct_LXS_T(const emlrtStack *sp,
                                       struct_LXS_T *pStruct, boolean_T doPush);

static void emxInitStruct_struct_tclust_T(const emlrtStack *sp,
                                          struct_tclust_T *pStruct,
                                          boolean_T doPush);

static void emxInitStruct_table(const emlrtStack *sp, table *pStruct,
                                boolean_T doPush);

static void emxInit_boolean_T(const emlrtStack *sp,
                              emxArray_boolean_T **pEmxArray,
                              int32_T numDimensions, boolean_T doPush);

static void emxInit_cell_wrap_36(const emlrtStack *sp,
                                 emxArray_cell_wrap_36 **pEmxArray,
                                 int32_T numDimensions, boolean_T doPush);

static void emxInit_char_T(const emlrtStack *sp, emxArray_char_T **pEmxArray,
                           int32_T numDimensions, boolean_T doPush);

static void emxInit_real32_T(const emlrtStack *sp,
                             emxArray_real32_T **pEmxArray,
                             int32_T numDimensions, boolean_T doPush);

static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
                           int32_T numDimensions, boolean_T doPush);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               char_T y_data[], int32_T y_size[2]);

static const mxArray *f_emlrt_marshallOut(const emxArray_real_T *u);

static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T **ret_data, int32_T ret_size[2]);

static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *init,
                                 const char_T *identifier);

static const mxArray *g_emlrt_marshallOut(const emxArray_real_T *u);

static void gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                char_T ret_data[], int32_T ret_size[2]);

static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static const mxArray *h_emlrt_marshallOut(const emxArray_real32_T *u);

static real_T hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *m0,
                               const char_T *identifier, emxArray_real_T *y);

static const mxArray *i_emlrt_marshallOut(const struct_FSRfan_T *u);

static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_LTSts_T *u);

static boolean_T jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                     const emlrtMsgIdentifier *msgId);

static boolean_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *msg,
                                    const char_T *identifier);

static const mxArray *k_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T u_size[2]);

static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static const mxArray *l_emlrt_marshallOut(const emlrtStack *sp, const table *u);

static void lb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_char_T *ret);

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bsbsteps,
                               const char_T *identifier, emxArray_real_T *y);

static const mxArray *m_emlrt_marshallOut(const emlrtStack *sp,
                                          const cell_wrap_50 u[4]);

static void mb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret_data[], int32_T ret_size[2]);

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *n_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_LXS_T *u);

static void nb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *family,
                               const char_T *identifier, emxArray_char_T *y);

static const mxArray *o_emlrt_marshallOut(const struct_addt_T u);

static void ob_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T **ret_data, int32_T ret_size[2]);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_char_T *y);

static const mxArray *p_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T u_size);

static void pb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, char_T ret[3]);

static struct_LTStslshiftlocref_T
q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lshiftlocref,
                   const char_T *identifier);

static const mxArray *q_emlrt_marshallOut(const struct_tclust_T *u);

static struct_LTStslshiftlocref_T
r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                   const emlrtMsgIdentifier *parentId);

static struct_LXSlms_T s_emlrt_marshallIn(const emlrtStack *sp,
                                          const mxArray *lts,
                                          const char_T *identifier);

static struct_LXSlms_T t_emlrt_marshallIn(const emlrtStack *sp,
                                          const mxArray *u,
                                          const emlrtMsgIdentifier *parentId);

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *model,
                               const char_T *identifier,
                               struct_LTStsmodel_T *y);

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct_LTStsmodel_T *y);

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y_data[], int32_T y_size[2]);

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nsamp,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2]);

/* Function Definitions */
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                real_T **y_data
 *                int32_T y_size[2]
 * Return Type  : void
 */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T **y_data, int32_T y_size[2])
{
  ob_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  eb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emxArray_real_T *u
 * Return Type  : const mxArray *
 */
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *restrfactor
 *                const char_T *identifier
 *                struct_tclustrestrfactor_T *y
 * Return Type  : void
 */
static void bb_emlrt_marshallIn(const emlrtStack *sp,
                                const mxArray *restrfactor,
                                const char_T *identifier,
                                struct_tclustrestrfactor_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  cb_emlrt_marshallIn(sp, emlrtAlias(restrfactor), &thisId, y);
  emlrtDestroyArray(&restrfactor);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *bonflev
 *                const char_T *identifier
 *                real_T **y_data
 *                int32_T y_size[2]
 * Return Type  : void
 */
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

/*
 * Arguments    : const emxArray_real_T *u
 * Return Type  : const mxArray *
 */
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

/*
 * Arguments    : struct_LTStsmodel_T *pStruct
 * Return Type  : void
 */
static void c_emxFreeStruct_struct_LTStsmod(struct_LTStsmodel_T *pStruct)
{
  emxFree_real_T(&pStruct->X);
}

/*
 * Arguments    : e_matlab_internal_coder_tabular *pStruct
 * Return Type  : void
 */
static void
c_emxInitStruct_matlab_internal(e_matlab_internal_coder_tabular *pStruct)
{
  emxInitMatrix_cell_wrap_48(&pStruct->labels[0]);
}

/*
 * Arguments    : const emlrtStack *sp
 *                struct_LTStsmodel_T *pStruct
 *                boolean_T doPush
 * Return Type  : void
 */
static void c_emxInitStruct_struct_LTStsmod(const emlrtStack *sp,
                                            struct_LTStsmodel_T *pStruct,
                                            boolean_T doPush)
{
  pStruct->ARp.size[0] = 0;
  pStruct->ARp.size[1] = 0;
  emxInit_real_T(sp, &pStruct->X, 2, doPush);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                struct_tclustrestrfactor_T *y
 * Return Type  : void
 */
static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
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
  db_emlrt_marshallIn(sp,
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                real_T **y_data
 *                int32_T y_size[2]
 * Return Type  : void
 */
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2])
{
  fb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emxArray_real_T *u
 * Return Type  : const mxArray *
 */
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

/*
 * Arguments    : f_matlab_internal_coder_tabular *pStruct
 * Return Type  : void
 */
static void
d_emxInitStruct_matlab_internal(f_matlab_internal_coder_tabular *pStruct)
{
  emxInitMatrix_cell_wrap_50(pStruct->descrs);
  emxInitMatrix_cell_wrap_50(pStruct->units);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                char_T y[3]
 * Return Type  : void
 */
static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId, char_T y[3])
{
  pb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *crit
 *                const char_T *identifier
 *                char_T y_data[]
 *                int32_T y_size[2]
 * Return Type  : void
 */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *crit,
                               const char_T *identifier, char_T y_data[],
                               int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(crit), &thisId, y_data, y_size);
  emlrtDestroyArray(&crit);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const struct_FSR_T *u
 * Return Type  : const mxArray *
 */
static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_FSR_T *u)
{
  static const int32_T iv[2] = {1, 3};
  static const char_T *sv[13] = {
      "ListOut",      "outliers",  "mdr",  "Un",     "nout",
      "beta",         "scale",     "mdag", "ListCl", "VIOMout",
      "fittedvalues", "residuals", "class"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 13, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"ListOut",
                      f_emlrt_marshallOut(u->ListOut), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliers",
                      f_emlrt_marshallOut(u->outliers), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"mdr", c_emlrt_marshallOut(u->mdr),
                      2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Un", c_emlrt_marshallOut(u->Un),
                      3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"nout",
                      c_emlrt_marshallOut(u->nout), 4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"beta",
                      g_emlrt_marshallOut(u->beta), 5);
  b_y = NULL;
  m = emlrtCreateDoubleScalar(u->scale);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"scale", b_y, 6);
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
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 3, m, &u->class[0]);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"class", c_y, 12);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                emxArray_real_T *ret
 * Return Type  : void
 */
static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *Y
 *                const char_T *identifier
 *                emxArray_real_T *y
 * Return Type  : void
 */
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

/*
 * Arguments    : const emlrtStack *sp
 *                const struct_FSM_T *u
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const struct_FSM_T *u)
{
  static const char_T *sv[8] = {"outliers", "loc", "cov",  "md",
                                "mmd",      "Un",  "nout", "class"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
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
  emlrtSetFieldR2017b(y, 0, (const char_T *)"mmd", c_emlrt_marshallOut(u->mmd),
                      4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Un", c_emlrt_marshallOut(u->Un),
                      5);
  c_y = NULL;
  iv[0] = u->nout.size[0];
  iv[1] = u->nout.size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->nout.size[1]; b_i++) {
    for (c_i = 0; c_i < u->nout.size[0]; c_i++) {
      pData[i] = u->nout.data[c_i + u->nout.size[0] * b_i];
      i++;
    }
  }
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"nout", c_y, 6);
  d_y = NULL;
  iv[0] = 1;
  iv[1] = u->class.size[1];
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, u->class.size[1], m,
                           &u->class.data[0]);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"class", d_y, 7);
  return y;
}

/*
 * Arguments    : emxArray_char_T *emxArray
 *                int32_T oldNumel
 * Return Type  : void
 */
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

/*
 * Arguments    : emxArray_real_T *emxArray
 *                int32_T oldNumel
 * Return Type  : void
 */
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

/*
 * Arguments    : cell_wrap_6 pMatrix[4]
 * Return Type  : void
 */
static void emxFreeMatrix_cell_wrap_6(cell_wrap_6 pMatrix[4])
{
  int32_T i;
  for (i = 0; i < 4; i++) {
    emxFreeStruct_cell_wrap_6(&pMatrix[i]);
  }
}

/*
 * Arguments    : cell_wrap_36 *pStruct
 * Return Type  : void
 */
static void emxFreeStruct_cell_wrap_36(cell_wrap_36 *pStruct)
{
  emxFree_real_T(&pStruct->f1);
}

/*
 * Arguments    : cell_wrap_6 *pStruct
 * Return Type  : void
 */
static void emxFreeStruct_cell_wrap_6(cell_wrap_6 *pStruct)
{
  emxFree_real_T(&pStruct->f1);
}

/*
 * Arguments    : struct_FSM_T *pStruct
 * Return Type  : void
 */
static void emxFreeStruct_struct_FSM_T(struct_FSM_T *pStruct)
{
  emxFree_real_T(&pStruct->outliers);
  emxFree_real_T(&pStruct->loc);
  emxFree_real_T(&pStruct->cov);
  emxFree_real_T(&pStruct->md);
  emxFree_real_T(&pStruct->mmd);
  emxFree_real_T(&pStruct->Un);
}

/*
 * Arguments    : struct_FSR_T *pStruct
 * Return Type  : void
 */
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

/*
 * Arguments    : struct_FSRfan_T *pStruct
 * Return Type  : void
 */
static void emxFreeStruct_struct_FSRfan_T(struct_FSRfan_T *pStruct)
{
  emxFree_real_T(&pStruct->Score);
  emxFree_real_T(&pStruct->la);
  emxFree_real_T(&pStruct->bs);
  emxFree_cell_wrap_36(&pStruct->Un);
  emxFree_real_T(&pStruct->y);
  emxFree_real_T(&pStruct->X);
  emxFree_real_T(&pStruct->Scorep);
  emxFree_real_T(&pStruct->Scoren);
  emxFree_real_T(&pStruct->Scoreb);
}

/*
 * Arguments    : struct_LTSts_T *pStruct
 * Return Type  : void
 */
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

/*
 * Arguments    : struct_LXS_T *pStruct
 * Return Type  : void
 */
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

/*
 * Arguments    : struct_tclust_T *pStruct
 * Return Type  : void
 */
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

/*
 * Arguments    : table *pStruct
 * Return Type  : void
 */
static void emxFreeStruct_table(table *pStruct)
{
  emxFreeMatrix_cell_wrap_6(pStruct->data);
}

/*
 * Arguments    : emxArray_boolean_T **pEmxArray
 * Return Type  : void
 */
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

/*
 * Arguments    : emxArray_cell_wrap_36 **pEmxArray
 * Return Type  : void
 */
static void emxFree_cell_wrap_36(emxArray_cell_wrap_36 **pEmxArray)
{
  int32_T i;
  int32_T numEl;
  if (*pEmxArray != (emxArray_cell_wrap_36 *)NULL) {
    if ((*pEmxArray)->data != (cell_wrap_36 *)NULL) {
      numEl = 1;
      for (i = 0; i < (*pEmxArray)->numDimensions; i++) {
        numEl *= (*pEmxArray)->size[i];
      }
      for (i = 0; i < numEl; i++) {
        emxFreeStruct_cell_wrap_36(&(*pEmxArray)->data[i]);
      }
      if ((*pEmxArray)->canFreeData) {
        emlrtFreeMex((*pEmxArray)->data);
      }
    }
    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_cell_wrap_36 *)NULL;
  }
}

/*
 * Arguments    : emxArray_char_T **pEmxArray
 * Return Type  : void
 */
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

/*
 * Arguments    : emxArray_real32_T **pEmxArray
 * Return Type  : void
 */
static void emxFree_real32_T(emxArray_real32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real32_T *)NULL) {
    if (((*pEmxArray)->data != (real32_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }
    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_real32_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_real_T **pEmxArray
 * Return Type  : void
 */
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

/*
 * Arguments    : cell_wrap_48 *pMatrix
 * Return Type  : void
 */
static void emxInitMatrix_cell_wrap_48(cell_wrap_48 *pMatrix)
{
  int32_T i;
  for (i = 0; i < 1; i++) {
    emxInitStruct_cell_wrap_48(pMatrix);
  }
}

/*
 * Arguments    : cell_wrap_50 pMatrix[4]
 * Return Type  : void
 */
static void emxInitMatrix_cell_wrap_50(cell_wrap_50 pMatrix[4])
{
  int32_T i;
  for (i = 0; i < 4; i++) {
    emxInitStruct_cell_wrap_50(&pMatrix[i]);
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                cell_wrap_6 pMatrix[4]
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInitMatrix_cell_wrap_6(const emlrtStack *sp,
                                      cell_wrap_6 pMatrix[4], boolean_T doPush)
{
  int32_T i;
  for (i = 0; i < 4; i++) {
    emxInitStruct_cell_wrap_6(sp, &pMatrix[i], doPush);
  }
}

/*
 * Arguments    : cell_wrap_48 *pStruct
 * Return Type  : void
 */
static void emxInitStruct_cell_wrap_48(cell_wrap_48 *pStruct)
{
  pStruct->f1.size[0] = 0;
  pStruct->f1.size[1] = 0;
}

/*
 * Arguments    : cell_wrap_50 *pStruct
 * Return Type  : void
 */
static void emxInitStruct_cell_wrap_50(cell_wrap_50 *pStruct)
{
  pStruct->f1.size[0] = 0;
  pStruct->f1.size[1] = 0;
}

/*
 * Arguments    : const emlrtStack *sp
 *                cell_wrap_6 *pStruct
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInitStruct_cell_wrap_6(const emlrtStack *sp,
                                      cell_wrap_6 *pStruct, boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->f1, 1, doPush);
}

/*
 * Arguments    : struct0_T *pStruct
 * Return Type  : void
 */
static void emxInitStruct_struct0_T(struct0_T *pStruct)
{
  pStruct->Description.size[0] = 0;
  pStruct->Description.size[1] = 0;
}

/*
 * Arguments    : const emlrtStack *sp
 *                struct_FSM_T *pStruct
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInitStruct_struct_FSM_T(const emlrtStack *sp,
                                       struct_FSM_T *pStruct, boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->outliers, 2, doPush);
  emxInit_real_T(sp, &pStruct->loc, 2, doPush);
  emxInit_real_T(sp, &pStruct->cov, 2, doPush);
  emxInit_real_T(sp, &pStruct->md, 2, doPush);
  emxInit_real_T(sp, &pStruct->mmd, 2, doPush);
  emxInit_real_T(sp, &pStruct->Un, 2, doPush);
  pStruct->nout.size[0] = 0;
  pStruct->nout.size[1] = 0;
  pStruct->class.size[0] = 0;
  pStruct->class.size[1] = 0;
}

/*
 * Arguments    : const emlrtStack *sp
 *                struct_FSR_T *pStruct
 *                boolean_T doPush
 * Return Type  : void
 */
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

/*
 * Arguments    : const emlrtStack *sp
 *                struct_FSRfan_T *pStruct
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInitStruct_struct_FSRfan_T(const emlrtStack *sp,
                                          struct_FSRfan_T *pStruct,
                                          boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->Score, 2, doPush);
  emxInit_real_T(sp, &pStruct->la, 2, doPush);
  emxInit_real_T(sp, &pStruct->bs, 2, doPush);
  emxInit_cell_wrap_36(sp, &pStruct->Un, 1, doPush);
  emxInit_real_T(sp, &pStruct->y, 1, doPush);
  emxInit_real_T(sp, &pStruct->X, 2, doPush);
  emxInit_real_T(sp, &pStruct->Scorep, 2, doPush);
  emxInit_real_T(sp, &pStruct->Scoren, 2, doPush);
  emxInit_real_T(sp, &pStruct->Scoreb, 2, doPush);
}

/*
 * Arguments    : const emlrtStack *sp
 *                struct_LTSts_T *pStruct
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInitStruct_struct_LTSts_T(const emlrtStack *sp,
                                         struct_LTSts_T *pStruct,
                                         boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->RES, 1, doPush);
  emxInit_real_T(sp, &pStruct->Hsubset, 1, doPush);
  emxInit_real_T(sp, &pStruct->B, 2, doPush);
  pStruct->posLS.size[0] = 0;
  pStruct->posLS.size[1] = 0;
  emxInit_real_T(sp, &pStruct->yhat, 1, doPush);
  emxInit_real_T(sp, &pStruct->outliers, 1, doPush);
  emxInit_real_T(sp, &pStruct->outliersPval, 1, doPush);
  emxInit_real_T(sp, &pStruct->numscale2, 1, doPush);
  emxInit_real_T(sp, &pStruct->BestIndexes, 1, doPush);
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

/*
 * Arguments    : const emlrtStack *sp
 *                struct_LXS_T *pStruct
 *                boolean_T doPush
 * Return Type  : void
 */
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

/*
 * Arguments    : const emlrtStack *sp
 *                struct_tclust_T *pStruct
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInitStruct_struct_tclust_T(const emlrtStack *sp,
                                          struct_tclust_T *pStruct,
                                          boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->muopt, 2, doPush);
  emxInit_real_T(sp, &pStruct->sigmaopt, 3, doPush);
  emxInit_real_T(sp, &pStruct->idx, 1, doPush);
  emxInit_real_T(sp, &pStruct->postprob, 1, doPush);
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

/*
 * Arguments    : const emlrtStack *sp
 *                table *pStruct
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInitStruct_table(const emlrtStack *sp, table *pStruct,
                                boolean_T doPush)
{
  c_emxInitStruct_matlab_internal(&pStruct->rowDim);
  d_emxInitStruct_matlab_internal(&pStruct->varDim);
  emxInitMatrix_cell_wrap_6(sp, pStruct->data, doPush);
  emxInitStruct_struct0_T(&pStruct->arrayProps);
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_boolean_T **pEmxArray
 *                int32_T numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
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

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_cell_wrap_36 **pEmxArray
 *                int32_T numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInit_cell_wrap_36(const emlrtStack *sp,
                                 emxArray_cell_wrap_36 **pEmxArray,
                                 int32_T numDimensions, boolean_T doPush)
{
  emxArray_cell_wrap_36 *emxArray;
  int32_T i;
  *pEmxArray =
      (emxArray_cell_wrap_36 *)emlrtMallocMex(sizeof(emxArray_cell_wrap_36));
  if (doPush) {
    emlrtPushHeapReferenceStackR2021a((emlrtCTX)sp, false, (void *)pEmxArray,
                                      (void *)&emxFree_cell_wrap_36, NULL, NULL,
                                      NULL);
  }
  emxArray = *pEmxArray;
  emxArray->data = (cell_wrap_36 *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_char_T **pEmxArray
 *                int32_T numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
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

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_real32_T **pEmxArray
 *                int32_T numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInit_real32_T(const emlrtStack *sp,
                             emxArray_real32_T **pEmxArray,
                             int32_T numDimensions, boolean_T doPush)
{
  emxArray_real32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real32_T *)emlrtMallocMex(sizeof(emxArray_real32_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2021a((emlrtCTX)sp, false, (void *)pEmxArray,
                                      (void *)&emxFree_real32_T, NULL, NULL,
                                      NULL);
  }
  emxArray = *pEmxArray;
  emxArray->data = (real32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_real_T **pEmxArray
 *                int32_T numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                char_T y_data[]
 *                int32_T y_size[2]
 * Return Type  : void
 */
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               char_T y_data[], int32_T y_size[2])
{
  gb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emxArray_real_T *u
 * Return Type  : const mxArray *
 */
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                real_T **ret_data
 *                int32_T ret_size[2]
 * Return Type  : void
 */
static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *init
 *                const char_T *identifier
 * Return Type  : real_T
 */
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

/*
 * Arguments    : const emxArray_real_T *u
 * Return Type  : const mxArray *
 */
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                char_T ret_data[]
 *                int32_T ret_size[2]
 * Return Type  : void
 */
static void gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                char_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2] = {1, 3};
  int32_T iv[2];
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret_data[0], 1, false);
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T
 */
static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = hb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emxArray_real32_T *u
 * Return Type  : const mxArray *
 */
static const mxArray *h_emlrt_marshallOut(const emxArray_real32_T *u)
{
  static const int32_T iv[2] = {0, 0};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxSINGLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &u->data[0]);
  emlrtSetDimensions((mxArray *)m, &u->size[0], 2);
  emlrtAssign(&y, m);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T
 */
static real_T hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *m0
 *                const char_T *identifier
 *                emxArray_real_T *y
 * Return Type  : void
 */
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

/*
 * Arguments    : const struct_FSRfan_T *u
 * Return Type  : const mxArray *
 */
static const mxArray *i_emlrt_marshallOut(const struct_FSRfan_T *u)
{
  static const char_T *sv[9] = {"Score", "la",     "bs",     "Un",    "y",
                                "X",     "Scorep", "Scoren", "Scoreb"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
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
  b_y = NULL;
  iv[0] = u->la->size[0];
  iv[1] = 1;
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->la->size[0]; b_i++) {
    pData[i] = u->la->data[b_i];
    i++;
  }
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"la", b_y, 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"bs", c_emlrt_marshallOut(u->bs),
                      2);
  c_y = NULL;
  emlrtAssign(&c_y, emlrtCreateCellArrayR2014a(1, &u->Un->size[0]));
  for (i = 0; i < u->Un->size[0]; i++) {
    d_y = NULL;
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
    emlrtAssign(&d_y, m);
    emlrtSetCell(c_y, i, d_y);
  }
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Un", c_y, 3);
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                emxArray_real_T *ret
 * Return Type  : void
 */
static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  ib_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const struct_LTSts_T *u
 * Return Type  : const mxArray *
 */
static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp,
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
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 24, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"RES", g_emlrt_marshallOut(u->RES),
                      0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Hsubset",
                      g_emlrt_marshallOut(u->Hsubset), 1);
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
                      k_emlrt_marshallOut(u->posLS.data, u->posLS.size), 3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"yhat",
                      g_emlrt_marshallOut(u->yhat), 4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliers",
                      g_emlrt_marshallOut(u->outliers), 5);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliersPval",
                      g_emlrt_marshallOut(u->outliersPval), 6);
  c_y = NULL;
  m = emlrtCreateDoubleScalar(u->scale);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"scale", c_y, 7);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"numscale2",
                      g_emlrt_marshallOut(u->numscale2), 8);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"BestIndexes",
                      g_emlrt_marshallOut(u->BestIndexes), 9);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"residuals",
                      g_emlrt_marshallOut(u->residuals), 10);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"bs", g_emlrt_marshallOut(u->bs),
                      11);
  d_y = NULL;
  m = emlrtCreateDoubleScalar(u->conflev);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"conflev", d_y, 12);
  e_y = NULL;
  m = emlrtCreateDoubleScalar(u->h);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"h", e_y, 13);
  f_y = NULL;
  i = u->weights->size[0];
  m = emlrtCreateLogicalArray(1, &i);
  emlrtInitLogicalArray(u->weights->size[0], m, &u->weights->data[0]);
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"weights", f_y, 14);
  g_y = NULL;
  m = emlrtCreateDoubleScalar(u->singsub);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"singsub", g_y, 15);
  h_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 5, m, &u->class[0]);
  emlrtAssign(&h_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"class", h_y, 16);
  i_y = NULL;
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
  emlrtAssign(&i_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Likloc", i_y, 17);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"y", g_emlrt_marshallOut(u->y), 18);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"X", c_emlrt_marshallOut(u->X), 19);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"invXX",
                      c_emlrt_marshallOut(u->invXX), 20);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Btable",
                      l_emlrt_marshallOut(sp, &u->Btable), 21);
  emlrtSetFieldR2017b(
      y, 0, (const char_T *)"LastHarmonicPval",
      k_emlrt_marshallOut(u->LastHarmonicPval.data, u->LastHarmonicPval.size),
      22);
  emlrtSetFieldR2017b(
      y, 0, (const char_T *)"LevelShiftPval",
      k_emlrt_marshallOut(u->LevelShiftPval.data, u->LevelShiftPval.size), 23);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : boolean_T
 */
static boolean_T jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *msg
 *                const char_T *identifier
 * Return Type  : boolean_T
 */
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

/*
 * Arguments    : const real_T u_data[]
 *                const int32_T u_size[2]
 * Return Type  : const mxArray *
 */
static const mxArray *k_emlrt_marshallOut(const real_T u_data[],
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                emxArray_real_T *ret
 * Return Type  : void
 */
static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : boolean_T
 */
static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = jb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const table *u
 * Return Type  : const mxArray *
 */
static const mxArray *l_emlrt_marshallOut(const emlrtStack *sp, const table *u)
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
  const mxArray *ab_y;
  const mxArray *b_y;
  const mxArray *bb_y;
  const mxArray *c_y;
  const mxArray *cb_y;
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
  const mxArray *y_y;
  int32_T iv[2];
  int32_T i;
  int32_T loop_ub;
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
  char_T u_data[10];
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
  f_y = NULL;
  m7 = emlrtCreateDoubleScalar(u->metaDim.length);
  emlrtAssign(&f_y, m7);
  emlrtAssign(&m6, f_y);
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
  g_y = NULL;
  m8 = NULL;
  m9 = NULL;
  emlrtAssign(
      &g_y,
      emlrtCreateClassInstance(
          (const char_T *)"matlab.internal.coder.tabular.private.rowNamesDim"));
  m8 = NULL;
  h_y = NULL;
  iv[0] = 1;
  iv[1] = 1;
  emlrtAssign(&h_y, emlrtCreateCellArrayR2014a(2, &iv[0]));
  loop_ub = u->rowDim.labels[0].f1.size[1];
  for (i = 0; i < loop_ub; i++) {
    u_data[i] = u->rowDim.labels[0].f1.data[i];
  }
  i_y = NULL;
  iv[0] = 1;
  iv[1] = u->rowDim.labels[0].f1.size[1];
  m7 = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, u->rowDim.labels[0].f1.size[1], m7,
                           &u_data[0]);
  emlrtAssign(&i_y, m7);
  emlrtSetCell(h_y, 0, i_y);
  emlrtAssign(&m8, h_y);
  propValues[0] = m8;
  m9 = NULL;
  j_y = NULL;
  m7 = emlrtCreateDoubleScalar(u->rowDim.length);
  emlrtAssign(&j_y, m7);
  emlrtAssign(&m9, j_y);
  propValues[1] = m9;
  emlrtSetAllProperties((emlrtCTX)sp, &g_y, 0, 2,
                        (const char_T **)&b_propNames[0],
                        (const char_T **)&b_propClasses[0], &propValues[0]);
  emlrtAssign(
      &g_y,
      emlrtConvertInstanceToRedirectSource(
          (emlrtCTX)sp, g_y, 0,
          (const char_T *)"matlab.internal.coder.tabular.private.rowNamesDim"));
  emlrtAssign(&m1, g_y);
  b_propValues[1] = m1;
  m2 = NULL;
  k_y = NULL;
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
      &k_y,
      emlrtCreateClassInstance(
          (const char_T *)"matlab.internal.coder.tabular.private.varNamesDim"));
  m10 = NULL;
  l_y = NULL;
  iv[0] = 1;
  iv[1] = 4;
  emlrtAssign(&l_y, emlrtCreateCellArrayR2014a(2, &iv[0]));
  m_y = NULL;
  m7 = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 5, m7, &d_u[0]);
  emlrtAssign(&m_y, m7);
  emlrtSetCell(l_y, 0, m_y);
  n_y = NULL;
  m7 = emlrtCreateCharArray(2, &iv4[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 2, m7, &e_u[0]);
  emlrtAssign(&n_y, m7);
  emlrtSetCell(l_y, 1, n_y);
  o_y = NULL;
  m7 = emlrtCreateString1('t');
  emlrtAssign(&o_y, m7);
  emlrtSetCell(l_y, 2, o_y);
  p_y = NULL;
  m7 = emlrtCreateCharArray(2, &iv5[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 4, m7, &f_u[0]);
  emlrtAssign(&p_y, m7);
  emlrtSetCell(l_y, 3, p_y);
  emlrtAssign(&m10, l_y);
  c_propValues[0] = m10;
  m11 = NULL;
  q_y = NULL;
  m7 = emlrtCreateDoubleScalar(u->varDim.length);
  emlrtAssign(&q_y, m7);
  emlrtAssign(&m11, q_y);
  c_propValues[1] = m11;
  m12 = NULL;
  emlrtAssign(&m12, m_emlrt_marshallOut(sp, u->varDim.descrs));
  c_propValues[2] = m12;
  m13 = NULL;
  emlrtAssign(&m13, m_emlrt_marshallOut(sp, u->varDim.units));
  c_propValues[3] = m13;
  m14 = NULL;
  r_y = NULL;
  m20 = NULL;
  emlrtCheckEnumR2012b(
      (emlrtCTX)sp, (const char_T *)"matlab.internal.coder.tabular.Continuity",
      4, (const char_T **)&enumNames[0], &enumValues[0]);
  s_y = NULL;
  m7 = emlrtCreateNumericArray(2, (const void *)&iv6[0], mxINT32_CLASS, mxREAL);
  pData = (int32_T *)emlrtMxGetData(m7);
  *pData = (int32_T)u->varDim.continuity[0];
  pData[1] = (int32_T)u->varDim.continuity[1];
  pData[2] = (int32_T)u->varDim.continuity[2];
  pData[3] = (int32_T)u->varDim.continuity[3];
  emlrtAssign(&s_y, m7);
  emlrtAssign(&m20, s_y);
  emlrtAssign(&r_y,
              emlrtCreateEnumR2012b(
                  (emlrtCTX)sp,
                  (const char_T *)"matlab.internal.coder.tabular.Continuity",
                  m20));
  emlrtDestroyArray(&m20);
  emlrtAssign(&m14, r_y);
  c_propValues[4] = m14;
  m15 = NULL;
  t_y = NULL;
  emlrtAssign(&t_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  emlrtAssign(&m15, t_y);
  c_propValues[5] = m15;
  m16 = NULL;
  u_y = NULL;
  m7 = emlrtCreateLogicalScalar(u->varDim.hasDescrs);
  emlrtAssign(&u_y, m7);
  emlrtAssign(&m16, u_y);
  c_propValues[6] = m16;
  m17 = NULL;
  v_y = NULL;
  m7 = emlrtCreateLogicalScalar(u->varDim.hasUnits);
  emlrtAssign(&v_y, m7);
  emlrtAssign(&m17, v_y);
  c_propValues[7] = m17;
  m18 = NULL;
  w_y = NULL;
  m7 = emlrtCreateLogicalScalar(u->varDim.hasContinuity);
  emlrtAssign(&w_y, m7);
  emlrtAssign(&m18, w_y);
  c_propValues[8] = m18;
  m19 = NULL;
  x_y = NULL;
  m7 = emlrtCreateLogicalScalar(u->varDim.hasCustomProps);
  emlrtAssign(&x_y, m7);
  emlrtAssign(&m19, x_y);
  c_propValues[9] = m19;
  emlrtSetAllProperties((emlrtCTX)sp, &k_y, 0, 10,
                        (const char_T **)&c_propNames[0],
                        (const char_T **)&c_propClasses[0], &c_propValues[0]);
  emlrtAssign(
      &k_y,
      emlrtConvertInstanceToRedirectSource(
          (emlrtCTX)sp, k_y, 0,
          (const char_T *)"matlab.internal.coder.tabular.private.varNamesDim"));
  emlrtAssign(&m2, k_y);
  b_propValues[2] = m2;
  m3 = NULL;
  y_y = NULL;
  iv[0] = 1;
  iv[1] = 4;
  emlrtAssign(&y_y, emlrtCreateCellArrayR2014a(2, &iv[0]));
  emlrtSetCell(y_y, 0, g_emlrt_marshallOut(u->data[0].f1));
  emlrtSetCell(y_y, 1, g_emlrt_marshallOut(u->data[1].f1));
  emlrtSetCell(y_y, 2, g_emlrt_marshallOut(u->data[2].f1));
  emlrtSetCell(y_y, 3, g_emlrt_marshallOut(u->data[3].f1));
  emlrtAssign(&m3, y_y);
  b_propValues[3] = m3;
  m4 = NULL;
  ab_y = NULL;
  emlrtAssign(&ab_y, emlrtCreateStructMatrix(1, 1, 2, (const char_T **)&sv[0]));
  bb_y = NULL;
  iv[0] = 1;
  iv[1] = 0;
  m7 = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 0, m7, NULL);
  emlrtAssign(&bb_y, m7);
  emlrtSetFieldR2017b(ab_y, 0, (const char_T *)"Description", bb_y, 0);
  cb_y = NULL;
  m7 =
      emlrtCreateNumericArray(2, (const void *)&iv7[0], mxDOUBLE_CLASS, mxREAL);
  emlrtAssign(&cb_y, m7);
  emlrtSetFieldR2017b(ab_y, 0, (const char_T *)"UserData", cb_y, 1);
  emlrtAssign(&m4, ab_y);
  b_propValues[4] = m4;
  emlrtSetAllProperties((emlrtCTX)sp, &y, 0, 5,
                        (const char_T **)&d_propNames[0],
                        (const char_T **)&d_propClasses[0], &b_propValues[0]);
  emlrtAssign(&y, emlrtConvertInstanceToRedirectSource(
                      (emlrtCTX)sp, y, 0,
                      (const char_T *)"matlab.internal.coder.table"));
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                emxArray_char_T *ret
 * Return Type  : void
 */
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *bsbsteps
 *                const char_T *identifier
 *                emxArray_real_T *y
 * Return Type  : void
 */
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

/*
 * Arguments    : const emlrtStack *sp
 *                const cell_wrap_50 u[4]
 * Return Type  : const mxArray *
 */
static const mxArray *m_emlrt_marshallOut(const emlrtStack *sp,
                                          const cell_wrap_50 u[4])
{
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T iv[2];
  int32_T i;
  y = NULL;
  iv[0] = 1;
  iv[1] = 4;
  emlrtAssign(&y, emlrtCreateCellArrayR2014a(2, &iv[0]));
  for (i = 0; i < 4; i++) {
    b_y = NULL;
    iv[0] = u[i].f1.size[0];
    iv[1] = 0;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 0, m, NULL);
    emlrtAssign(&b_y, m);
    emlrtSetCell(y, i, b_y);
  }
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                real_T ret_data[]
 *                int32_T ret_size[2]
 * Return Type  : void
 */
static void mb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2] = {1, 1};
  int32_T iv[2];
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret_data[0], 8, false);
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  kb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const struct_LXS_T *u
 * Return Type  : const mxArray *
 */
static const mxArray *n_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct_LXS_T *u)
{
  static const int32_T iv[2] = {1, 3};
  static const char_T *sv[13] = {
      "weights", "rew", "beta",    "scale", "residuals", "bs",   "outliers",
      "conflev", "h",   "singsub", "X",     "y",         "class"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
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
  d_y = NULL;
  m = emlrtCreateDoubleScalar(u->scale);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"scale", d_y, 3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"residuals",
                      g_emlrt_marshallOut(u->residuals), 4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"bs", f_emlrt_marshallOut(u->bs),
                      5);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliers",
                      f_emlrt_marshallOut(u->outliers), 6);
  e_y = NULL;
  m = emlrtCreateDoubleScalar(u->conflev);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"conflev", e_y, 7);
  f_y = NULL;
  m = emlrtCreateDoubleScalar(u->h);
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"h", f_y, 8);
  g_y = NULL;
  m = emlrtCreateDoubleScalar(u->singsub);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"singsub", g_y, 9);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"X", c_emlrt_marshallOut(u->X), 10);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"y", b_emlrt_marshallOut(u->y), 11);
  h_y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 3, m, &u->class[0]);
  emlrtAssign(&h_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"class", h_y, 12);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                emxArray_real_T *ret
 * Return Type  : void
 */
static void nb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *family
 *                const char_T *identifier
 *                emxArray_char_T *y
 * Return Type  : void
 */
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *family,
                               const char_T *identifier, emxArray_char_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  p_emlrt_marshallIn(sp, emlrtAlias(family), &thisId, y);
  emlrtDestroyArray(&family);
}

/*
 * Arguments    : const struct_addt_T u
 * Return Type  : const mxArray *
 */
static const mxArray *o_emlrt_marshallOut(const struct_addt_T u)
{
  static const char_T *sv[4] = {"b", "S2add", "Tadd", "pval"};
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 4, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"b",
                      p_emlrt_marshallOut(u.b.data, u.b.size[0]), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"S2add",
                      p_emlrt_marshallOut(u.S2add.data, u.S2add.size[0]), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Tadd",
                      k_emlrt_marshallOut(u.Tadd.data, u.Tadd.size), 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"pval",
                      k_emlrt_marshallOut(u.pval.data, u.pval.size), 3);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                real_T **ret_data
 *                int32_T ret_size[2]
 * Return Type  : void
 */
static void ob_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                emxArray_char_T *y
 * Return Type  : void
 */
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_char_T *y)
{
  lb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const real_T u_data[]
 *                const int32_T u_size
 * Return Type  : const mxArray *
 */
static const mxArray *p_emlrt_marshallOut(const real_T u_data[],
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                char_T ret[3]
 * Return Type  : void
 */
static void pb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, char_T ret[3])
{
  static const int32_T dims[2] = {1, 3};
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                          false, 2U, (void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtCTX)sp, src, &ret[0], 3);
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *lshiftlocref
 *                const char_T *identifier
 * Return Type  : struct_LTStslshiftlocref_T
 */
static struct_LTStslshiftlocref_T
q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lshiftlocref,
                   const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct_LTStslshiftlocref_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = r_emlrt_marshallIn(sp, emlrtAlias(lshiftlocref), &thisId);
  emlrtDestroyArray(&lshiftlocref);
  return y;
}

/*
 * Arguments    : const struct_tclust_T *u
 * Return Type  : const mxArray *
 */
static const mxArray *q_emlrt_marshallOut(const struct_tclust_T *u)
{
  static const char_T *sv[15] = {
      "muopt",  "sigmaopt",     "idx",    "postprob",  "MIXMIX",
      "MIXCLA", "NlogL",        "CLACLA", "notconver", "bs",
      "obj",    "equalweights", "h",      "fullsol",   "Y"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
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
                      g_emlrt_marshallOut(u->postprob), 3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"MIXMIX",
                      k_emlrt_marshallOut(u->MIXMIX.data, u->MIXMIX.size), 4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"MIXCLA",
                      k_emlrt_marshallOut(u->MIXCLA.data, u->MIXCLA.size), 5);
  c_y = NULL;
  m = emlrtCreateDoubleScalar(u->NlogL);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"NlogL", c_y, 6);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"CLACLA",
                      k_emlrt_marshallOut(u->CLACLA.data, u->CLACLA.size), 7);
  d_y = NULL;
  m = emlrtCreateDoubleScalar(u->notconver);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"notconver", d_y, 8);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"bs", f_emlrt_marshallOut(u->bs),
                      9);
  e_y = NULL;
  m = emlrtCreateDoubleScalar(u->obj);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"obj", e_y, 10);
  f_y = NULL;
  m = emlrtCreateLogicalScalar(u->equalweights);
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"equalweights", f_y, 11);
  g_y = NULL;
  m = emlrtCreateDoubleScalar(u->h);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"h", g_y, 12);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"fullsol",
                      g_emlrt_marshallOut(u->fullsol), 13);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Y", c_emlrt_marshallOut(u->Y), 14);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : struct_LTStslshiftlocref_T
 */
static struct_LTStslshiftlocref_T
r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *lts
 *                const char_T *identifier
 * Return Type  : struct_LXSlms_T
 */
static struct_LXSlms_T s_emlrt_marshallIn(const emlrtStack *sp,
                                          const mxArray *lts,
                                          const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct_LXSlms_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = t_emlrt_marshallIn(sp, emlrtAlias(lts), &thisId);
  emlrtDestroyArray(&lts);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : struct_LXSlms_T
 */
static struct_LXSlms_T t_emlrt_marshallIn(const emlrtStack *sp,
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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *model
 *                const char_T *identifier
 *                struct_LTStsmodel_T *y
 * Return Type  : void
 */
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *model,
                               const char_T *identifier, struct_LTStsmodel_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  v_emlrt_marshallIn(sp, emlrtAlias(model), &thisId, y);
  emlrtDestroyArray(&model);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                struct_LTStsmodel_T *y
 * Return Type  : void
 */
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
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
  y->lshift =
      h_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 0, (const char_T *)"lshift")),
                         &thisId);
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
  w_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 4,
                                                    (const char_T *)"ARp")),
                     &thisId, y->ARp.data, y->ARp.size);
  thisId.fIdentifier = "X";
  x_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 5,
                                                    (const char_T *)"X")),
                     &thisId, y->X);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                real_T y_data[]
 *                int32_T y_size[2]
 * Return Type  : void
 */
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y_data[], int32_T y_size[2])
{
  mb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  nb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *nsamp
 *                const char_T *identifier
 *                real_T **y_data
 *                int32_T y_size[2]
 * Return Type  : void
 */
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nsamp,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  real_T *r;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  ab_emlrt_marshallIn(sp, emlrtAlias(nsamp), &thisId, &r, y_size);
  *y_data = r;
  emlrtDestroyArray(&nsamp);
}

/*
 * Arguments    : const mxArray * const prhs[8]
 *                const mxArray **plhs
 * Return Type  : void
 */
void FSM_wrapper_api(const mxArray *const prhs[8], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *Y;
  emxArray_real_T *m0;
  struct_FSM_T out;
  real_T init;
  real_T rf;
  real_T *bonflev_data;
  int32_T bonflev_size[2];
  int32_T crit_size[2];
  char_T crit_data[3];
  boolean_T msg;
  boolean_T nocheck;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Y, 2, true);
  emxInit_real_T(&st, &m0, 1, true);
  emxInitStruct_struct_FSM_T(&st, &out, true);
  /* Marshall function inputs */
  Y->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Y", Y);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "bonflev",
                     (real_T **)&bonflev_data, bonflev_size);
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "crit", crit_data, crit_size);
  init = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "init");
  m0->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "m0", m0);
  msg = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "msg");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "nocheck");
  rf = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "rf");
  /* Invoke the target function */
  FSM_wrapper(Y, (real_T *)bonflev_data, bonflev_size, crit_data, crit_size,
              init, m0, msg, nocheck, rf, &out);
  /* Marshall function outputs */
  *plhs = emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct_FSM_T(&out);
  emxFree_real_T(&m0);
  emxFree_real_T(&Y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/*
 * Arguments    : const mxArray * const prhs[6]
 *                int32_T nlhs
 *                const mxArray *plhs[2]
 * Return Type  : void
 */
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

/*
 * Arguments    : const mxArray * const prhs[6]
 *                int32_T nlhs
 *                const mxArray *plhs[3]
 * Return Type  : void
 */
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

/*
 * Arguments    : const mxArray * const prhs[13]
 *                const mxArray **plhs
 * Return Type  : void
 */
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

/*
 * Arguments    : const mxArray * const prhs[8]
 *                int32_T nlhs
 *                const mxArray *plhs[2]
 * Return Type  : void
 */
void FSRbsb_wrapper_api(const mxArray *const prhs[8], int32_T nlhs,
                        const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real32_T *BB;
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
  emxInit_real32_T(&st, &BB, 2, true);
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
    plhs[1] = h_emlrt_marshallOut(BB);
  }
  emxFree_real32_T(&BB);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/*
 * Arguments    : const mxArray * const prhs[11]
 *                const mxArray **plhs
 * Return Type  : void
 */
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
  o_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "family", family);
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

/*
 * Arguments    : const mxArray * const prhs[12]
 *                int32_T nlhs
 *                const mxArray *plhs[5]
 * Return Type  : void
 */
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

/*
 * Arguments    : const mxArray * const prhs[16]
 *                int32_T nlhs
 *                const mxArray *plhs[2]
 * Return Type  : void
 */
void LTSts_wrapper_api(const mxArray *const prhs[16], int32_T nlhs,
                       const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *C;
  emxArray_real_T *y;
  struct_LTSts_T out;
  struct_LTStslshiftlocref_T lshiftlocref;
  struct_LTStsmodel_T b_model;
  struct_LTStsmodel_T model;
  struct_LXSlms_T lts;
  real_T(*nsamp_data)[2];
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
  emxInit_real_T(&st, &C, 2, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  conflev = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "conflev");
  dispresults = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "dispresults");
  h = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "h");
  intercept = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "intercept");
  lshiftlocref = q_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "lshiftlocref");
  lts = s_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "lts");
  u_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "model", &model);
  msg = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "msg");
  nbestindexes = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "nbestindexes");
  nocheck = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "nocheck");
  y_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "nsamp", (real_T **)&nsamp_data,
                     nsamp_size);
  refstepsALS = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "refstepsALS");
  reftolALS = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "reftolALS");
  SmallSampleCor =
      g_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "SmallSampleCor");
  yxsave = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "yxsave");
  /* Invoke the target function */
  b_model = model;
  LTSts_wrapper(y, conflev, dispresults, h, intercept, &lshiftlocref, &lts,
                &b_model, msg, nbestindexes, nocheck, *nsamp_data, nsamp_size,
                refstepsALS, reftolALS, SmallSampleCor, yxsave, &out, C);
  /* Marshall function outputs */
  plhs[0] = j_emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct_LTSts_T(&out);
  c_emxFreeStruct_struct_LTStsmod(&model);
  emxFree_real_T(&y);
  if (nlhs > 1) {
    C->canFreeData = false;
    plhs[1] = d_emlrt_marshallOut(C);
  }
  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/*
 * Arguments    : const mxArray * const prhs[13]
 *                int32_T nlhs
 *                const mxArray *plhs[2]
 * Return Type  : void
 */
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
  lms = s_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "lms");
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
  plhs[0] = n_emlrt_marshallOut(&st, &out);
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

/*
 * Arguments    : const mxArray * const prhs[13]
 *                int32_T nlhs
 *                const mxArray *plhs[2]
 * Return Type  : void
 */
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
  plhs[0] = n_emlrt_marshallOut(&st, &out);
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

/*
 * Arguments    : const mxArray * const prhs[6]
 *                const mxArray **plhs
 * Return Type  : void
 */
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
  *plhs = o_emlrt_marshallOut(out);
  emxFree_real_T(&w);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
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

/*
 * Arguments    : void
 * Return Type  : void
 */
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

/*
 * Arguments    : void
 * Return Type  : void
 */
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

/*
 * Arguments    : const mxArray * const prhs[14]
 *                int32_T nlhs
 *                const mxArray *plhs[2]
 * Return Type  : void
 */
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
  bb_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "restrfactor", &restrfactor);
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
  plhs[0] = q_emlrt_marshallOut(&out);
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

/*
 * Arguments    : const mxArray * const prhs[14]
 *                int32_T nlhs
 *                const mxArray *plhs[2]
 * Return Type  : void
 */
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
  plhs[0] = q_emlrt_marshallOut(&out);
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

/*
 * File trailer for _coder_fsdaC_api.c
 *
 * [EOF]
 */
