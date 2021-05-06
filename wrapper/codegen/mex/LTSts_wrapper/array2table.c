/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * array2table.c
 *
 * Code generation for function 'array2table'
 *
 */

/* Include files */
#include "array2table.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo xcb_emlrtRSI =
    {
        32,            /* lineNo */
        "array2table", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\tabular\\array2tabl"
        "e.m" /* pathName */
};

static emlrtRSInfo ycb_emlrtRSI = {
    56,            /* lineNo */
    "array2table", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\array2table.m" /* pathName */
};

static emlrtRSInfo adb_emlrtRSI = {
    322,          /* lineNo */
    "table/init", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@table\\table.m" /* pathName */
};

static emlrtRSInfo bdb_emlrtRSI = {
    263,                     /* lineNo */
    "tabular/initInternals", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\tabular.m" /* pathName */
};

static emlrtRSInfo cdb_emlrtRSI = {
    56,                       /* lineNo */
    "rowNamesDim/createLike", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\rowNamesDim.m" /* pathName
                                                                    */
};

static emlrtRSInfo ddb_emlrtRSI = {
    70,                            /* lineNo */
    "tabularDimension/createLike", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\tabularDimens"
    "ion.m" /* pathName */
};

static emlrtRSInfo edb_emlrtRSI = {
    222,                          /* lineNo */
    "tabularDimension/setLabels", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\tabularDimens"
    "ion.m" /* pathName */
};

static emlrtRSInfo fdb_emlrtRSI = {
    32,         /* lineNo */
    "firstcol", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\strfun\\strtrim.m" /* pathName
                                                                           */
};

static emlrtRSInfo gdb_emlrtRSI = {
    51,          /* lineNo */
    "allwspace", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\strfun\\strtrim.m" /* pathName
                                                                           */
};

static emlrtRSInfo hdb_emlrtRSI = {
    41,        /* lineNo */
    "lastcol", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\strfun\\strtrim.m" /* pathName
                                                                           */
};

static emlrtRSInfo idb_emlrtRSI = {
    151,                                   /* lineNo */
    "rowNamesDim/validateAndAssignLabels", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\rowNamesDim.m" /* pathName
                                                                    */
};

static emlrtRSInfo jdb_emlrtRSI = {
    153,                                   /* lineNo */
    "rowNamesDim/validateAndAssignLabels", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\rowNamesDim.m" /* pathName
                                                                    */
};

static emlrtRSInfo kdb_emlrtRSI = {
    158,                                   /* lineNo */
    "rowNamesDim/validateAndAssignLabels", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\rowNamesDim.m" /* pathName
                                                                    */
};

static emlrtRSInfo ldb_emlrtRSI = {
    21,                /* lineNo */
    "cellstr_strtrim", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\shared\\codegen\\+"
    "matlab\\+internal\\+coder\\+datatypes\\cellstr_strtrim.m" /* pathName */
};

static emlrtRSInfo mdb_emlrtRSI = {
    23,        /* lineNo */
    "strtrim", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\strfun\\strtrim.m" /* pathName
                                                                           */
};

static emlrtRSInfo ndb_emlrtRSI = {
    24,        /* lineNo */
    "strtrim", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\strfun\\strtrim.m" /* pathName
                                                                           */
};

static emlrtRSInfo odb_emlrtRSI = {
    253,                         /* lineNo */
    "rowNamesDim/makeValidName", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\rowNamesDim.m" /* pathName
                                                                    */
};

static emlrtRSInfo pdb_emlrtRSI = {
    235,                              /* lineNo */
    "rowNamesDim/checkReservedNames", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\rowNamesDim.m" /* pathName
                                                                    */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    415,                             /* lineNo */
    43,                              /* colNo */
    "tabularDimension/assignLabels", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\tabularDimens"
    "ion.m" /* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = {
    520,                                   /* lineNo */
    59,                                    /* colNo */
    "tabularDimension/checkReservedNames", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\tabularDimens"
    "ion.m" /* pName */
};

static emlrtBCInfo jp_emlrtBCI = {
    -1,                           /* iFirst */
    -1,                           /* iLast */
    206,                          /* lineNo */
    21,                           /* colNo */
    "",                           /* aName */
    "tabularDimension/setLabels", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\tabularDimens"
    "ion.m", /* pName */
    0        /* checkKind */
};

static emlrtRTEInfo ax_emlrtRTEI = {
    51,            /* lineNo */
    13,            /* colNo */
    "array2table", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\array2table.m" /* pName */
};

static emlrtRTEInfo bx_emlrtRTEI = {
    70,                 /* lineNo */
    23,                 /* colNo */
    "tabularDimension", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\tabularDimens"
    "ion.m" /* pName */
};

static emlrtRTEInfo cx_emlrtRTEI = {
    204,                /* lineNo */
    17,                 /* colNo */
    "tabularDimension", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\tabularDimens"
    "ion.m" /* pName */
};

/* Function Definitions */
void array2table(const emlrtStack *sp, const emxArray_real_T *x,
                 const char_T varargin_2_Value_data[],
                 const int32_T varargin_2_Value_size[2],
                 real_T *t_metaDim_length, cell_wrap_1 *t_rowDim_labels,
                 real_T *t_rowDim_length,
                 f_matlab_internal_coder_tabular *t_varDim,
                 cell_wrap_4 t_data[4],
                 int32_T t_arrayProps_Description_size[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack k_st;
  emlrtStack l_st;
  emlrtStack m_st;
  emlrtStack n_st;
  emlrtStack st;
  emxArray_uint32_T *indices;
  int32_T b_j1;
  int32_T b_t_rowDim_length;
  int32_T i;
  int32_T j2;
  char_T b_x;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  k_st.prev = &j_st;
  k_st.tls = j_st.tls;
  l_st.prev = &k_st;
  l_st.tls = k_st.tls;
  m_st.prev = &l_st;
  m_st.tls = l_st.tls;
  n_st.prev = &m_st;
  n_st.tls = m_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &xcb_emlrtRSI;
  j2 = x->size[0];
  i = t_data[0].f1->size[0];
  t_data[0].f1->size[0] = x->size[0];
  emxEnsureCapacity_real_T(&st, t_data[0].f1, i, &ax_emlrtRTEI);
  for (i = 0; i < j2; i++) {
    t_data[0].f1->data[i] = x->data[i];
  }
  j2 = x->size[0];
  i = t_data[1].f1->size[0];
  t_data[1].f1->size[0] = x->size[0];
  emxEnsureCapacity_real_T(&st, t_data[1].f1, i, &ax_emlrtRTEI);
  for (i = 0; i < j2; i++) {
    t_data[1].f1->data[i] = x->data[i + x->size[0]];
  }
  j2 = x->size[0];
  i = t_data[2].f1->size[0];
  t_data[2].f1->size[0] = x->size[0];
  emxEnsureCapacity_real_T(&st, t_data[2].f1, i, &ax_emlrtRTEI);
  for (i = 0; i < j2; i++) {
    t_data[2].f1->data[i] = x->data[i + x->size[0] * 2];
  }
  j2 = x->size[0];
  i = t_data[3].f1->size[0];
  t_data[3].f1->size[0] = x->size[0];
  emxEnsureCapacity_real_T(&st, t_data[3].f1, i, &ax_emlrtRTEI);
  for (i = 0; i < j2; i++) {
    t_data[3].f1->data[i] = x->data[i + x->size[0] * 3];
  }
  emxInit_uint32_T(&st, &indices, 2, &cx_emlrtRTEI, true);
  b_st.site = &ycb_emlrtRSI;
  c_st.site = &adb_emlrtRSI;
  d_st.site = &bdb_emlrtRSI;
  e_st.site = &cdb_emlrtRSI;
  b_t_rowDim_length = x->size[0];
  f_st.site = &ddb_emlrtRSI;
  i = indices->size[0] * indices->size[1];
  indices->size[0] = 1;
  indices->size[1] = x->size[0];
  emxEnsureCapacity_uint32_T(&f_st, indices, i, &bx_emlrtRTEI);
  i = x->size[0];
  for (j2 = 0; j2 < i; j2++) {
    if (j2 + 1 > indices->size[1]) {
      emlrtDynamicBoundsCheckR2012b(j2 + 1, 1, indices->size[1], &jp_emlrtBCI,
                                    &f_st);
    }
    indices->data[j2] = (uint32_T)(j2 + 1);
  }
  emxFree_uint32_T(&indices);
  g_st.site = &edb_emlrtRSI;
  h_st.site = &idb_emlrtRSI;
  i_st.site = &ldb_emlrtRSI;
  j_st.site = &mdb_emlrtRSI;
  b_j1 = 0;
  exitg1 = false;
  while ((!exitg1) && (b_j1 + 1 <= varargin_2_Value_size[1])) {
    k_st.site = &fdb_emlrtRSI;
    l_st.site = &gdb_emlrtRSI;
    b_x = varargin_2_Value_data[b_j1];
    m_st.site = &dg_emlrtRSI;
    n_st.site = &eg_emlrtRSI;
    if ((uint8_T)b_x > 127) {
      emlrtErrorWithMessageIdR2018a(
          &n_st, &o_emlrtRTEI, "Coder:toolbox:unsupportedString",
          "Coder:toolbox:unsupportedString", 2, 12, 127);
    }
    if (!bv[(uint8_T)b_x & 127]) {
      p = false;
    } else {
      p = true;
    }
    if (p) {
      b_j1++;
    } else {
      exitg1 = true;
    }
  }
  j_st.site = &ndb_emlrtRSI;
  j2 = varargin_2_Value_size[1];
  exitg1 = false;
  while ((!exitg1) && (j2 > 0)) {
    k_st.site = &hdb_emlrtRSI;
    l_st.site = &gdb_emlrtRSI;
    b_x = varargin_2_Value_data[j2 - 1];
    m_st.site = &dg_emlrtRSI;
    n_st.site = &eg_emlrtRSI;
    if ((uint8_T)b_x > 127) {
      emlrtErrorWithMessageIdR2018a(
          &n_st, &o_emlrtRTEI, "Coder:toolbox:unsupportedString",
          "Coder:toolbox:unsupportedString", 2, 12, 127);
    }
    if (!bv[(uint8_T)b_x & 127]) {
      p = false;
    } else {
      p = true;
    }
    if (p) {
      j2--;
    } else {
      exitg1 = true;
    }
  }
  if (b_j1 + 1 > j2) {
    b_j1 = 0;
    j2 = 0;
  }
  t_rowDim_labels->f1.size[0] = 1;
  j2 -= b_j1;
  t_rowDim_labels->f1.size[1] = j2;
  for (i = 0; i < j2; i++) {
    t_rowDim_labels->f1.data[i] = varargin_2_Value_data[b_j1 + i];
  }
  h_st.site = &jdb_emlrtRSI;
  i_st.site = &odb_emlrtRSI;
  j_st.site = &pdb_emlrtRSI;
  p = false;
  if ((j2 == 1) && (!(varargin_2_Value_data[b_j1] != ':'))) {
    p = true;
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        &j_st, &sc_emlrtRTEI, "MATLAB:table:ReservedDimNameConflict",
        "MATLAB:table:ReservedDimNameConflict", 2, 6, 1.0);
  }
  h_st.site = &kdb_emlrtRSI;
  if (1 != x->size[0]) {
    emlrtErrorWithMessageIdR2018a(&h_st, &rc_emlrtRTEI,
                                  "MATLAB:table:IncorrectNumberOfRowNames",
                                  "MATLAB:table:IncorrectNumberOfRowNames", 0);
  }
  t_varDim->length = 4.0;
  t_varDim->hasUnits = false;
  t_varDim->units[0].f1.size[0] = 1;
  t_varDim->units[0].f1.size[1] = 0;
  t_varDim->units[1].f1.size[0] = 1;
  t_varDim->units[1].f1.size[1] = 0;
  t_varDim->units[2].f1.size[0] = 1;
  t_varDim->units[2].f1.size[1] = 0;
  t_varDim->units[3].f1.size[0] = 1;
  t_varDim->units[3].f1.size[1] = 0;
  t_varDim->hasDescrs = false;
  t_varDim->descrs[0].f1.size[0] = 1;
  t_varDim->descrs[0].f1.size[1] = 0;
  t_varDim->descrs[1].f1.size[0] = 1;
  t_varDim->descrs[1].f1.size[1] = 0;
  t_varDim->descrs[2].f1.size[0] = 1;
  t_varDim->descrs[2].f1.size[1] = 0;
  t_varDim->descrs[3].f1.size[0] = 1;
  t_varDim->descrs[3].f1.size[1] = 0;
  t_varDim->hasContinuity = false;
  t_varDim->continuity[0] = unset;
  t_varDim->continuity[1] = unset;
  t_varDim->continuity[2] = unset;
  t_varDim->continuity[3] = unset;
  t_varDim->hasCustomProps = false;
  t_arrayProps_Description_size[0] = 1;
  t_arrayProps_Description_size[1] = 0;
  *t_metaDim_length = 2.0;
  *t_rowDim_length = b_t_rowDim_length;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (array2table.c) */
