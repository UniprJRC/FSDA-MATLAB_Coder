/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_LTSts_wrapper_api.c
 *
 * Code generation for function '_coder_LTSts_wrapper_api'
 *
 */

/* Include files */
#include "_coder_LTSts_wrapper_api.h"
#include "LTSts_wrapper.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_mexutil.h"
#include "LTSts_wrapper_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo kv_emlrtRTEI = {
    1,                          /* lineNo */
    1,                          /* colNo */
    "_coder_LTSts_wrapper_api", /* fName */
    ""                          /* pName */
};

/* Function Declarations */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T **y_data, int32_T y_size[2]);

static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static boolean_T ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                     const emlrtMsgIdentifier *msgId);

static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret_data[], int32_T ret_size[2]);

static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static const mxArray *l_emlrt_marshallOut(const emlrtStack *sp,
                                          const struct3_T *u);

static void lb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T **ret_data, int32_T ret_size[2]);

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                               const char_T *identifier, emxArray_real_T *b_y);

static const mxArray *m_emlrt_marshallOut(const emxArray_real_T *u);

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *n_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T u_size[2]);

static boolean_T o_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *dispresults,
                                    const char_T *identifier);

static const mxArray *o_emlrt_marshallOut(const emxArray_real_T *u);

static boolean_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static const mxArray *p_emlrt_marshallOut(const emlrtStack *sp, const table *u);

static struct0_T q_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *lshiftlocref,
                                    const char_T *identifier);

static const mxArray *q_emlrt_marshallOut(const emlrtStack *sp,
                                          const cell_wrap_3 u[4]);

static struct0_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static const mxArray *r_emlrt_marshallOut(const emxArray_real_T *u);

static struct1_T s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lts,
                                    const char_T *identifier);

static struct1_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *model,
                               const char_T *identifier, struct2_T *y);

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct2_T *y);

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
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T **y_data, int32_T y_size[2])
{
  lb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static boolean_T ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2] = {1, 1};
  int32_T iv[2];
  const boolean_T b_bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &b_bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret_data[0], 8, false);
  emlrtDestroyArray(&src);
}

static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret)
{
  static const int32_T dims[2] = {-1, -1};
  int32_T iv[2];
  int32_T i;
  const boolean_T b_bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &b_bv[0], &iv[0]);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret->data[0], 8, false);
  emlrtDestroyArray(&src);
}

static const mxArray *l_emlrt_marshallOut(const emlrtStack *sp,
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
  const emxArray_real_T *b_u;
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
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *q_y;
  const mxArray *r_y;
  const mxArray *s_y;
  const mxArray *t_y;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 24, (const char_T **)&sv[0]));
  b_u = u->RES;
  b_y = NULL;
  m = emlrtCreateNumericArray(1, &u->RES->size[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < b_u->size[0]; b_i++) {
    pData[i] = b_u->data[b_i];
    i++;
  }
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"RES", b_y, 0);
  b_u = u->Hsubset;
  c_y = NULL;
  m = emlrtCreateNumericArray(1, &u->Hsubset->size[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < b_u->size[0]; b_i++) {
    pData[i] = b_u->data[b_i];
    i++;
  }
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Hsubset", c_y, 1);
  d_y = NULL;
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
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"B", d_y, 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"posLS",
                      n_emlrt_marshallOut(u->posLS.data, u->posLS.size), 3);
  b_u = u->yhat;
  e_y = NULL;
  m = emlrtCreateNumericArray(1, &u->yhat->size[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < b_u->size[0]; b_i++) {
    pData[i] = b_u->data[b_i];
    i++;
  }
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"yhat", e_y, 4);
  b_u = u->outliers;
  f_y = NULL;
  m = emlrtCreateNumericArray(1, &u->outliers->size[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < b_u->size[0]; b_i++) {
    pData[i] = b_u->data[b_i];
    i++;
  }
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliers", f_y, 5);
  b_u = u->outliersPval;
  g_y = NULL;
  m = emlrtCreateNumericArray(1, &u->outliersPval->size[0], mxDOUBLE_CLASS,
                              mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < b_u->size[0]; b_i++) {
    pData[i] = b_u->data[b_i];
    i++;
  }
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliersPval", g_y, 6);
  h_y = NULL;
  m = emlrtCreateDoubleScalar(u->scale);
  emlrtAssign(&h_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"scale", h_y, 7);
  b_u = u->numscale2;
  i_y = NULL;
  m = emlrtCreateNumericArray(1, &u->numscale2->size[0], mxDOUBLE_CLASS,
                              mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < b_u->size[0]; b_i++) {
    pData[i] = b_u->data[b_i];
    i++;
  }
  emlrtAssign(&i_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"numscale2", i_y, 8);
  b_u = u->BestIndexes;
  j_y = NULL;
  m = emlrtCreateNumericArray(1, &u->BestIndexes->size[0], mxDOUBLE_CLASS,
                              mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < b_u->size[0]; b_i++) {
    pData[i] = b_u->data[b_i];
    i++;
  }
  emlrtAssign(&j_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"BestIndexes", j_y, 9);
  b_u = u->residuals;
  k_y = NULL;
  m = emlrtCreateNumericArray(1, &u->residuals->size[0], mxDOUBLE_CLASS,
                              mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < b_u->size[0]; b_i++) {
    pData[i] = b_u->data[b_i];
    i++;
  }
  emlrtAssign(&k_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"residuals", k_y, 10);
  b_u = u->bs;
  l_y = NULL;
  m = emlrtCreateNumericArray(1, &u->bs->size[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < b_u->size[0]; b_i++) {
    pData[i] = b_u->data[b_i];
    i++;
  }
  emlrtAssign(&l_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"bs", l_y, 11);
  m_y = NULL;
  m = emlrtCreateDoubleScalar(u->conflev);
  emlrtAssign(&m_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"conflev", m_y, 12);
  n_y = NULL;
  m = emlrtCreateDoubleScalar(u->h);
  emlrtAssign(&n_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"h", n_y, 13);
  o_y = NULL;
  m = emlrtCreateLogicalArray(1, &u->weights->size[0]);
  emlrtInitLogicalArray(u->weights->size[0], m, &u->weights->data[0]);
  emlrtAssign(&o_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"weights", o_y, 14);
  p_y = NULL;
  m = emlrtCreateDoubleScalar(u->singsub);
  emlrtAssign(&p_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"singsub", p_y, 15);
  q_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 5, m, &u->class[0]);
  emlrtAssign(&q_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"class", q_y, 16);
  r_y = NULL;
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
  emlrtAssign(&r_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Likloc", r_y, 17);
  b_u = u->y;
  s_y = NULL;
  m = emlrtCreateNumericArray(1, &u->y->size[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < b_u->size[0]; b_i++) {
    pData[i] = b_u->data[b_i];
    i++;
  }
  emlrtAssign(&s_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"y", s_y, 18);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"X", o_emlrt_marshallOut(u->X), 19);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"invXX",
                      o_emlrt_marshallOut(u->invXX), 20);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Btable",
                      p_emlrt_marshallOut(sp, &u->Btable), 21);
  t_y = NULL;
  m = emlrtCreateDoubleScalar(u->LastHarmonicPval);
  emlrtAssign(&t_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"LastHarmonicPval", t_y, 22);
  emlrtSetFieldR2017b(
      y, 0, (const char_T *)"LevelShiftPval",
      n_emlrt_marshallOut(u->LevelShiftPval.data, u->LevelShiftPval.size), 23);
  return y;
}

static void lb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T **ret_data, int32_T ret_size[2])
{
  static const int32_T dims[2] = {2, 1};
  int32_T iv[2];
  const boolean_T b_bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &b_bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  *ret_data = (real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                               const char_T *identifier, emxArray_real_T *b_y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  n_emlrt_marshallIn(sp, emlrtAlias(y), &thisId, b_y);
  emlrtDestroyArray(&y);
}

static const mxArray *m_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_i;
  int32_T i;
  y = NULL;
  m = emlrtCreateNumericArray(1, &u->size[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[0]; b_i++) {
    pData[i] = u->data[b_i];
    i++;
  }
  emlrtAssign(&y, m);
  return y;
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  hb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *n_emlrt_marshallOut(const real_T u_data[],
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

static boolean_T o_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *dispresults,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = p_emlrt_marshallIn(sp, emlrtAlias(dispresults), &thisId);
  emlrtDestroyArray(&dispresults);
  return y;
}

static const mxArray *o_emlrt_marshallOut(const emxArray_real_T *u)
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

static boolean_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = ib_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *p_emlrt_marshallOut(const emlrtStack *sp, const table *u)
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
  emlrtAssign(&m12, q_emlrt_marshallOut(sp, u->varDim.descrs));
  c_propValues[2] = m12;
  m13 = NULL;
  emlrtAssign(&m13, q_emlrt_marshallOut(sp, u->varDim.units));
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
  emlrtAssign(&y_y, emlrtCreateCellArrayR2014a(2, &iv[0]));
  emlrtSetCell(y_y, 0, m_emlrt_marshallOut(u->data[0].f1));
  emlrtSetCell(y_y, 1, m_emlrt_marshallOut(u->data[1].f1));
  emlrtSetCell(y_y, 2, m_emlrt_marshallOut(u->data[2].f1));
  emlrtSetCell(y_y, 3, m_emlrt_marshallOut(u->data[3].f1));
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

static struct0_T q_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *lshiftlocref,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct0_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = r_emlrt_marshallIn(sp, emlrtAlias(lshiftlocref), &thisId);
  emlrtDestroyArray(&lshiftlocref);
  return y;
}

static const mxArray *q_emlrt_marshallOut(const emlrtStack *sp,
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
  iv[1] = 0;
  for (i = 0; i < 4; i++) {
    b_y = NULL;
    iv[0] = u[i].f1.size[0];
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 0, m, NULL);
    emlrtAssign(&b_y, m);
    emlrtSetCell(y, i, b_y);
  }
  return y;
}

static struct0_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
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
      b_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 0, (const char_T *)"wlength")),
                         &thisId);
  thisId.fIdentifier = "typeres";
  y.typeres =
      b_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 1, (const char_T *)"typeres")),
                         &thisId);
  thisId.fIdentifier = "huberc";
  y.huberc =
      b_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 2, (const char_T *)"huberc")),
                         &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *r_emlrt_marshallOut(const emxArray_real_T *u)
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

static struct1_T s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *lts,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  struct1_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = t_emlrt_marshallIn(sp, emlrtAlias(lts), &thisId);
  emlrtDestroyArray(&lts);
  return y;
}

static struct1_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
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
      b_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 0, (const char_T *)"bestr")),
                         &thisId);
  thisId.fIdentifier = "refsteps";
  y.refsteps = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 1,
                                     (const char_T *)"refsteps")),
      &thisId);
  thisId.fIdentifier = "refstepsbestr";
  y.refstepsbestr = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 2,
                                     (const char_T *)"refstepsbestr")),
      &thisId);
  thisId.fIdentifier = "reftol";
  y.reftol =
      b_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 3, (const char_T *)"reftol")),
                         &thisId);
  thisId.fIdentifier = "reftolbestr";
  y.reftolbestr = b_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtCTX)sp, u, 0, 4,
                                     (const char_T *)"reftolbestr")),
      &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *model,
                               const char_T *identifier, struct2_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  v_emlrt_marshallIn(sp, emlrtAlias(model), &thisId, y);
  emlrtDestroyArray(&model);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
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
      b_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 0, (const char_T *)"lshift")),
                         &thisId);
  thisId.fIdentifier = "s";
  y->s = b_emlrt_marshallIn(sp,
                            emlrtAlias(emlrtGetFieldR2017b(
                                (emlrtCTX)sp, u, 0, 1, (const char_T *)"s")),
                            &thisId);
  thisId.fIdentifier = "trend";
  y->trend =
      b_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtCTX)sp, u, 0, 2, (const char_T *)"trend")),
                         &thisId);
  thisId.fIdentifier = "seasonal";
  y->seasonal = b_emlrt_marshallIn(
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

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y_data[], int32_T y_size[2])
{
  jb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  kb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nsamp,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  ab_emlrt_marshallIn(sp, emlrtAlias(nsamp), &thisId, y_data, y_size);
  emlrtDestroyArray(&nsamp);
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
  emxInit_real_T(&st, &y, 1, &kv_emlrtRTEI, true);
  emxInitStruct_struct2_T(&st, &model, &kv_emlrtRTEI, true);
  emxInitStruct_struct3_T(&st, &out, &kv_emlrtRTEI, true);
  emxInit_real_T(&st, &C, 2, &kv_emlrtRTEI, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  conflev = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "conflev");
  dispresults = o_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "dispresults");
  h = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "h");
  intercept = o_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "intercept");
  lshiftlocref = q_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "lshiftlocref");
  lts = s_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "lts");
  u_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "model", &model);
  msg = o_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "msg");
  nbestindexes = emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "nbestindexes");
  nocheck = o_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "nocheck");
  y_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "nsamp", (real_T **)&nsamp_data,
                     nsamp_size);
  refstepsALS = emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "refstepsALS");
  reftolALS = emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "reftolALS");
  SmallSampleCor =
      emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "SmallSampleCor");
  yxsave = o_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "yxsave");
  /* Invoke the target function */
  LTSts_wrapper(&st, y, conflev, dispresults, h, intercept, &lshiftlocref, &lts,
                &model, msg, nbestindexes, nocheck, *nsamp_data, nsamp_size,
                refstepsALS, reftolALS, SmallSampleCor, yxsave, &out, C);
  /* Marshall function outputs */
  plhs[0] = l_emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct3_T(&out);
  emxFreeStruct_struct2_T(&model);
  emxFree_real_T(&y);
  if (nlhs > 1) {
    C->canFreeData = false;
    plhs[1] = r_emlrt_marshallOut(C);
  }
  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_LTSts_wrapper_api.c) */
