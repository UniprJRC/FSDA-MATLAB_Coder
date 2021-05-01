/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_LTSts_wrapper_api.c
 *
 * Code generation for function 'LTSts_wrapper'
 *
 */

/* Include files */
#include "_coder_LTSts_wrapper_api.h"
#include "_coder_LTSts_wrapper_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131610U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "LTSts_wrapper",                                      /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *conflev,
                                 const char_T *identifier);

static const mxArray *c_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T u_size[2]);

static void
c_emxInitStruct_matlab_internal(e_matlab_internal_coder_tabular *pStruct);

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);

static void
d_emxInitStruct_matlab_internal(f_matlab_internal_coder_tabular *pStruct);

static boolean_T e_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *dispresults,
                                    const char_T *identifier);

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const table *u);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                             const char_T *identifier, emxArray_real_T *b_y);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const struct3_T *u);

static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray,
                                     int32_T oldNumel);

static void emxFreeMatrix_cell_wrap_4(cell_wrap_4 pMatrix[4]);

static void emxFreeStruct_cell_wrap_4(cell_wrap_4 *pStruct);

static void emxFreeStruct_struct2_T(struct2_T *pStruct);

static void emxFreeStruct_struct3_T(struct3_T *pStruct);

static void emxFreeStruct_table(table *pStruct);

static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);

static void emxFree_real_T(emxArray_real_T **pEmxArray);

static void emxInitMatrix_cell_wrap_1(cell_wrap_1 *pMatrix);

static void emxInitMatrix_cell_wrap_3(cell_wrap_3 pMatrix[4]);

static void emxInitMatrix_cell_wrap_4(const emlrtStack *sp,
                                      cell_wrap_4 pMatrix[4], boolean_T doPush);

static void emxInitStruct_cell_wrap_1(cell_wrap_1 *pStruct);

static void emxInitStruct_cell_wrap_3(cell_wrap_3 *pStruct);

static void emxInitStruct_cell_wrap_4(const emlrtStack *sp,
                                      cell_wrap_4 *pStruct, boolean_T doPush);

static void emxInitStruct_struct2_T(const emlrtStack *sp, struct2_T *pStruct,
                                    boolean_T doPush);

static void emxInitStruct_struct3_T(const emlrtStack *sp, struct3_T *pStruct,
                                    boolean_T doPush);

static void emxInitStruct_struct4_T(struct4_T *pStruct);

static void emxInitStruct_table(const emlrtStack *sp, table *pStruct,
                                boolean_T doPush);

static void emxInit_boolean_T(const emlrtStack *sp,
                              emxArray_boolean_T **pEmxArray,
                              int32_T numDimensions, boolean_T doPush);

static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
                           int32_T numDimensions, boolean_T doPush);

static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp,
                                          const cell_wrap_3 u[4]);

static struct0_T g_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *lshiftlocref,
                                    const char_T *identifier);

static const mxArray *g_emlrt_marshallOut(const emxArray_real_T *u);

static struct0_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static struct1_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lts,
                                    const char_T *identifier);

static struct1_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *model,
                               const char_T *identifier, struct2_T *y);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct2_T *y);

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y_data[], int32_T y_size[2]);

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nsamp,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2]);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2]);

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static real_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static boolean_T s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId);

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret_data[], int32_T ret_size[2]);

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T **ret_data, int32_T ret_size[2]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
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

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *conflev,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(conflev), &thisId);
  emlrtDestroyArray(&conflev);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const real_T u_data[],
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

static void
c_emxInitStruct_matlab_internal(e_matlab_internal_coder_tabular *pStruct)
{
  emxInitMatrix_cell_wrap_1(&pStruct->labels[0]);
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u)
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
d_emxInitStruct_matlab_internal(f_matlab_internal_coder_tabular *pStruct)
{
  emxInitMatrix_cell_wrap_3(pStruct->descrs);
  emxInitMatrix_cell_wrap_3(pStruct->units);
}

static boolean_T e_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *dispresults,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(dispresults), &thisId);
  emlrtDestroyArray(&dispresults);
  return y;
}

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const table *u)
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
  emlrtAssign(&m12, f_emlrt_marshallOut(sp, u->varDim.descrs));
  c_propValues[2] = m12;
  m13 = NULL;
  emlrtAssign(&m13, f_emlrt_marshallOut(sp, u->varDim.units));
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
  emlrtSetCell(y_y, 0, b_emlrt_marshallOut(u->data[0].f1));
  emlrtSetCell(y_y, 1, b_emlrt_marshallOut(u->data[1].f1));
  emlrtSetCell(y_y, 2, b_emlrt_marshallOut(u->data[2].f1));
  emlrtSetCell(y_y, 3, b_emlrt_marshallOut(u->data[3].f1));
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

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                             const char_T *identifier, emxArray_real_T *b_y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(y), &thisId, b_y);
  emlrtDestroyArray(&y);
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const struct3_T *u)
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
  const mxArray *j_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 24, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"RES", b_emlrt_marshallOut(u->RES),
                      0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Hsubset",
                      b_emlrt_marshallOut(u->Hsubset), 1);
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
                      c_emlrt_marshallOut(u->posLS.data, u->posLS.size), 3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"yhat",
                      b_emlrt_marshallOut(u->yhat), 4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliers",
                      b_emlrt_marshallOut(u->outliers), 5);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliersPval",
                      b_emlrt_marshallOut(u->outliersPval), 6);
  c_y = NULL;
  m = emlrtCreateDoubleScalar(u->scale);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"scale", c_y, 7);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"numscale2",
                      b_emlrt_marshallOut(u->numscale2), 8);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"BestIndexes",
                      b_emlrt_marshallOut(u->BestIndexes), 9);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"residuals",
                      b_emlrt_marshallOut(u->residuals), 10);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"bs", b_emlrt_marshallOut(u->bs),
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
  emlrtSetFieldR2017b(y, 0, (const char_T *)"y", b_emlrt_marshallOut(u->y), 18);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"X", d_emlrt_marshallOut(u->X), 19);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"invXX",
                      d_emlrt_marshallOut(u->invXX), 20);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Btable",
                      e_emlrt_marshallOut(sp, &u->Btable), 21);
  j_y = NULL;
  m = emlrtCreateDoubleScalar(u->LastHarmonicPval);
  emlrtAssign(&j_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"LastHarmonicPval", j_y, 22);
  emlrtSetFieldR2017b(
      y, 0, (const char_T *)"LevelShiftPval",
      c_emlrt_marshallOut(u->LevelShiftPval.data, u->LevelShiftPval.size), 23);
  return y;
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

static void emxFreeMatrix_cell_wrap_4(cell_wrap_4 pMatrix[4])
{
  int32_T i;
  for (i = 0; i < 4; i++) {
    emxFreeStruct_cell_wrap_4(&pMatrix[i]);
  }
}

static void emxFreeStruct_cell_wrap_4(cell_wrap_4 *pStruct)
{
  emxFree_real_T(&pStruct->f1);
}

static void emxFreeStruct_struct2_T(struct2_T *pStruct)
{
  emxFree_real_T(&pStruct->X);
}

static void emxFreeStruct_struct3_T(struct3_T *pStruct)
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

static void emxFreeStruct_table(table *pStruct)
{
  emxFreeMatrix_cell_wrap_4(pStruct->data);
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

static void emxInitMatrix_cell_wrap_1(cell_wrap_1 *pMatrix)
{
  int32_T i;
  for (i = 0; i < 1; i++) {
    emxInitStruct_cell_wrap_1(pMatrix);
  }
}

static void emxInitMatrix_cell_wrap_3(cell_wrap_3 pMatrix[4])
{
  int32_T i;
  for (i = 0; i < 4; i++) {
    emxInitStruct_cell_wrap_3(&pMatrix[i]);
  }
}

static void emxInitMatrix_cell_wrap_4(const emlrtStack *sp,
                                      cell_wrap_4 pMatrix[4], boolean_T doPush)
{
  int32_T i;
  for (i = 0; i < 4; i++) {
    emxInitStruct_cell_wrap_4(sp, &pMatrix[i], doPush);
  }
}

static void emxInitStruct_cell_wrap_1(cell_wrap_1 *pStruct)
{
  pStruct->f1.size[0] = 0;
  pStruct->f1.size[1] = 0;
}

static void emxInitStruct_cell_wrap_3(cell_wrap_3 *pStruct)
{
  pStruct->f1.size[0] = 0;
  pStruct->f1.size[1] = 0;
}

static void emxInitStruct_cell_wrap_4(const emlrtStack *sp,
                                      cell_wrap_4 *pStruct, boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->f1, 1, doPush);
}

static void emxInitStruct_struct2_T(const emlrtStack *sp, struct2_T *pStruct,
                                    boolean_T doPush)
{
  pStruct->ARp.size[0] = 0;
  pStruct->ARp.size[1] = 0;
  emxInit_real_T(sp, &pStruct->X, 2, doPush);
}

static void emxInitStruct_struct3_T(const emlrtStack *sp, struct3_T *pStruct,
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
  pStruct->LevelShiftPval.size[0] = 0;
  pStruct->LevelShiftPval.size[1] = 0;
}

static void emxInitStruct_struct4_T(struct4_T *pStruct)
{
  pStruct->Description.size[0] = 0;
  pStruct->Description.size[1] = 0;
}

static void emxInitStruct_table(const emlrtStack *sp, table *pStruct,
                                boolean_T doPush)
{
  c_emxInitStruct_matlab_internal(&pStruct->rowDim);
  d_emxInitStruct_matlab_internal(&pStruct->varDim);
  emxInitMatrix_cell_wrap_4(sp, pStruct->data, doPush);
  emxInitStruct_struct4_T(&pStruct->arrayProps);
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

static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = s_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp,
                                          const cell_wrap_3 u[4])
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

static struct0_T g_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *lshiftlocref,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct0_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(lshiftlocref), &thisId);
  emlrtDestroyArray(&lshiftlocref);
  return y;
}

static const mxArray *g_emlrt_marshallOut(const emxArray_real_T *u)
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

static struct0_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[3] = {"wlength", "typeres", "huberc"};
  emlrtMsgIdentifier thisId;
  struct0_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtCTX)sp, parentId, u, 3,
                         (const char_T **)&fieldNames[0], 0U, (void *)&dims);
  thisId.fIdentifier = "wlength";
  y.wlength =
      d_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 0, (const char_T *)"wlength")),
                         &thisId);
  thisId.fIdentifier = "typeres";
  y.typeres =
      d_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 1, (const char_T *)"typeres")),
                         &thisId);
  thisId.fIdentifier = "huberc";
  y.huberc =
      d_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 2, (const char_T *)"huberc")),
                         &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static struct1_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lts,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct1_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(lts), &thisId);
  emlrtDestroyArray(&lts);
  return y;
}

static struct1_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[5] = {"bestr", "refsteps", "refstepsbestr",
                                        "reftol", "reftolbestr"};
  emlrtMsgIdentifier thisId;
  struct1_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtCTX)sp, parentId, u, 5,
                         (const char_T **)&fieldNames[0], 0U, (void *)&dims);
  thisId.fIdentifier = "bestr";
  y.bestr =
      d_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 0, (const char_T *)"bestr")),
                         &thisId);
  thisId.fIdentifier = "refsteps";
  y.refsteps = d_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 1,
                                     (const char_T *)"refsteps")),
      &thisId);
  thisId.fIdentifier = "refstepsbestr";
  y.refstepsbestr = d_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 2,
                                     (const char_T *)"refstepsbestr")),
      &thisId);
  thisId.fIdentifier = "reftol";
  y.reftol =
      d_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 3, (const char_T *)"reftol")),
                         &thisId);
  thisId.fIdentifier = "reftolbestr";
  y.reftolbestr = d_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 4,
                                     (const char_T *)"reftolbestr")),
      &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *model,
                               const char_T *identifier, struct2_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(model), &thisId, y);
  emlrtDestroyArray(&model);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, struct2_T *y)
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
      d_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 0, (const char_T *)"lshift")),
                         &thisId);
  thisId.fIdentifier = "s";
  y->s = d_emlrt_marshallIn(sp,
                            emlrtAlias(emlrtGetFieldR2017b(
                                (emlrtCTX)sp, u, 0, 1, (const char_T *)"s")),
                            &thisId);
  thisId.fIdentifier = "trend";
  y->trend =
      d_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 2, (const char_T *)"trend")),
                         &thisId);
  thisId.fIdentifier = "seasonal";
  y->seasonal = d_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 3,
                                     (const char_T *)"seasonal")),
      &thisId);
  thisId.fIdentifier = "ARp";
  m_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 4,
                                                    (const char_T *)"ARp")),
                     &thisId, y->ARp.data, y->ARp.size);
  thisId.fIdentifier = "X";
  n_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 5,
                                                    (const char_T *)"X")),
                     &thisId, y->X);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y_data[], int32_T y_size[2])
{
  t_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  u_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nsamp,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  real_T *r;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  p_emlrt_marshallIn(sp, emlrtAlias(nsamp), &thisId, &r, y_size);
  *y_data = r;
  emlrtDestroyArray(&nsamp);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2])
{
  v_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static real_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static boolean_T s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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
  struct0_T lshiftlocref;
  struct1_T lts;
  struct2_T b_model;
  struct2_T model;
  struct3_T out;
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
  emxInitStruct_struct2_T(&st, &model, true);
  emxInitStruct_struct3_T(&st, &out, true);
  emxInit_real_T(&st, &C, 2, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  conflev = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "conflev");
  dispresults = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "dispresults");
  h = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "h");
  intercept = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "intercept");
  lshiftlocref = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "lshiftlocref");
  lts = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "lts");
  k_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "model", &model);
  msg = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "msg");
  nbestindexes = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "nbestindexes");
  nocheck = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "nocheck");
  o_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "nsamp", (real_T **)&nsamp_data,
                     nsamp_size);
  refstepsALS = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "refstepsALS");
  reftolALS = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "reftolALS");
  SmallSampleCor =
      c_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "SmallSampleCor");
  yxsave = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "yxsave");
  /* Invoke the target function */
  b_model = model;
  LTSts_wrapper(y, conflev, dispresults, h, intercept, &lshiftlocref, &lts,
                &b_model, msg, nbestindexes, nocheck, *nsamp_data, nsamp_size,
                refstepsALS, reftolALS, SmallSampleCor, yxsave, &out, C);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct3_T(&out);
  emxFreeStruct_struct2_T(&model);
  emxFree_real_T(&y);
  if (nlhs > 1) {
    C->canFreeData = false;
    plhs[1] = g_emlrt_marshallOut(C);
  }
  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void LTSts_wrapper_atexit(void)
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
  LTSts_wrapper_xil_terminate();
  LTSts_wrapper_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void LTSts_wrapper_initialize(void)
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

void LTSts_wrapper_terminate(void)
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

/* End of code generation (_coder_LTSts_wrapper_api.c) */
