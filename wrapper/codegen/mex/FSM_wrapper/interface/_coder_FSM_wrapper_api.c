/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_FSM_wrapper_api.c
 *
 * Code generation for function '_coder_FSM_wrapper_api'
 *
 */

/* Include files */
#include "_coder_FSM_wrapper_api.h"
#include "FSM_wrapper.h"
#include "FSM_wrapper_data.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_mexutil.h"
#include "FSM_wrapper_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo lt_emlrtRTEI = {
    1,                        /* lineNo */
    1,                        /* colNo */
    "_coder_FSM_wrapper_api", /* fName */
    ""                        /* pName */
};

/* Function Declarations */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T **ret_data, int32_T ret_size[2]);

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                char_T ret_data[], int32_T ret_size[2]);

static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static boolean_T eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                     const emlrtMsgIdentifier *msgId);

static const mxArray *gb_emlrt_marshallOut(const emlrtStack *sp,
                                           const struct_FSM_T *u);

static const mxArray *hb_emlrt_marshallOut(const emxArray_real_T *u);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y,
                               const char_T *identifier, emxArray_real_T *y);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bonflev,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2]);

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2]);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *crit,
                               const char_T *identifier, char_T y_data[],
                               int32_T y_size[2]);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               char_T y_data[], int32_T y_size[2]);

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *m0,
                               const char_T *identifier, emxArray_real_T *y);

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static boolean_T s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *msg,
                                    const char_T *identifier);

static boolean_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

/* Function Definitions */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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
  emxEnsureCapacity_real_T(sp, ret, i1, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static boolean_T eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static const mxArray *gb_emlrt_marshallOut(const emlrtStack *sp,
                                           const struct_FSM_T *u)
{
  static const char_T *sv[8] = {"outliers", "loc", "cov",  "md",
                                "mmd",      "Un",  "nout", "class"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
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
                      hb_emlrt_marshallOut(u->outliers), 0);
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
  c_y = NULL;
  iv[0] = u->cov->size[0];
  iv[1] = u->cov->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->cov->size[1]; b_i++) {
    for (c_i = 0; c_i < u->cov->size[0]; c_i++) {
      pData[i] = u->cov->data[c_i + u->cov->size[0] * b_i];
      i++;
    }
  }
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"cov", c_y, 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"md", hb_emlrt_marshallOut(u->md),
                      3);
  d_y = NULL;
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
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"mmd", d_y, 4);
  e_y = NULL;
  iv[0] = u->Un->size[0];
  iv[1] = u->Un->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->Un->size[1]; b_i++) {
    for (c_i = 0; c_i < u->Un->size[0]; c_i++) {
      pData[i] = u->Un->data[c_i + u->Un->size[0] * b_i];
      i++;
    }
  }
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Un", e_y, 5);
  f_y = NULL;
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
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"nout", f_y, 6);
  g_y = NULL;
  iv[0] = 1;
  iv[1] = u->class.size[1];
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, u->class.size[1], m,
                           &u->class.data[0]);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"class", g_y, 7);
  return y;
}

static const mxArray *hb_emlrt_marshallOut(const emxArray_real_T *u)
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

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(Y), &thisId, y);
  emlrtDestroyArray(&Y);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bonflev,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  n_emlrt_marshallIn(sp, emlrtAlias(bonflev), &thisId, y_data, y_size);
  emlrtDestroyArray(&bonflev);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2])
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *crit,
                               const char_T *identifier, char_T y_data[],
                               int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  p_emlrt_marshallIn(sp, emlrtAlias(crit), &thisId, y_data, y_size);
  emlrtDestroyArray(&crit);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               char_T y_data[], int32_T y_size[2])
{
  cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *m0,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  r_emlrt_marshallIn(sp, emlrtAlias(m0), &thisId, y);
  emlrtDestroyArray(&m0);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  db_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *msg,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = t_emlrt_marshallIn(sp, emlrtAlias(msg), &thisId);
  emlrtDestroyArray(&msg);
  return y;
}

static boolean_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = eb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

void FSM_wrapper_api(FSM_wrapperStackData *SD, const mxArray *const prhs[8],
                     const mxArray **plhs)
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
  emxInit_real_T(&st, &Y, 2, &lt_emlrtRTEI, true);
  emxInit_real_T(&st, &m0, 1, &lt_emlrtRTEI, true);
  emxInitStruct_struct_FSM_T(&st, &out, &lt_emlrtRTEI, true);
  /* Marshall function inputs */
  Y->canFreeData = false;
  k_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Y", Y);
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "bonflev",
                     (real_T **)&bonflev_data, bonflev_size);
  o_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "crit", crit_data, crit_size);
  init = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "init");
  m0->canFreeData = false;
  q_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "m0", m0);
  msg = s_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "msg");
  nocheck = s_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "nocheck");
  rf = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "rf");
  /* Invoke the target function */
  FSM_wrapper(SD, &st, Y, (real_T *)bonflev_data, bonflev_size, crit_data,
              crit_size, init, m0, msg, nocheck, rf, &out);
  /* Marshall function outputs */
  *plhs = gb_emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct_FSM_T(&out);
  emxFree_real_T(&m0);
  emxFree_real_T(&Y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_FSM_wrapper_api.c) */
