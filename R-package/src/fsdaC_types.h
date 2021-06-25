/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fsdaC_types.h
 *
 * Code generation for function 'FSM_wrapper'
 *
 */

#ifndef FSDAC_TYPES_H
#define FSDAC_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_struct_LTStslshiftlocref_T
#define typedef_struct_LTStslshiftlocref_T
typedef struct {
  double wlength;
  double typeres;
  double huberc;
} struct_LTStslshiftlocref_T;
#endif /* typedef_struct_LTStslshiftlocref_T */

#ifndef typedef_struct_LXSlms_T
#define typedef_struct_LXSlms_T
typedef struct {
  double bestr;
  double refsteps;
  double refstepsbestr;
  double reftol;
  double reftolbestr;
} struct_LXSlms_T;
#endif /* typedef_struct_LXSlms_T */

#ifndef enum_c_matlab_internal_coder_tabular
#define enum_c_matlab_internal_coder_tabular
enum c_matlab_internal_coder_tabular
{
  unset = 0, /* Default value */
  continuous,
  step,
  event
};
#endif /* enum_c_matlab_internal_coder_tabular */
#ifndef typedef_c_matlab_internal_coder_tabular
#define typedef_c_matlab_internal_coder_tabular
typedef enum c_matlab_internal_coder_tabular c_matlab_internal_coder_tabular;
#endif /* typedef_c_matlab_internal_coder_tabular */

#ifndef typedef_captured_var
#define typedef_captured_var
typedef struct {
  double contents;
} captured_var;
#endif /* typedef_captured_var */

#ifndef typedef_b_captured_var
#define typedef_b_captured_var
typedef struct {
  bool contents;
} b_captured_var;
#endif /* typedef_b_captured_var */

#ifndef typedef_d_matlab_internal_coder_tabular
#define typedef_d_matlab_internal_coder_tabular
typedef struct {
  double length;
} d_matlab_internal_coder_tabular;
#endif /* typedef_d_matlab_internal_coder_tabular */

#ifndef typedef_struct1_T
#define typedef_struct1_T
typedef struct {
  char pars[3];
  double cdet;
  double shw;
  double shb;
  double k;
  double maxiterDSR;
  double maxiterR;
  double maxiterS;
  bool msg;
  double tolR;
  double tolS;
  bool usepreviousest;
  double userepmat;
  double sortsh;
  double v;
  double zerotol;
} struct1_T;
#endif /* typedef_struct1_T */

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T {
  double *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  bool canFreeData;
};
#endif /* struct_emxArray_real_T */
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /* typedef_emxArray_real_T */

#ifndef struct_emxArray_real_T_1x1
#define struct_emxArray_real_T_1x1
struct emxArray_real_T_1x1 {
  double data[1];
  int size[2];
};
#endif /* struct_emxArray_real_T_1x1 */
#ifndef typedef_emxArray_real_T_1x1
#define typedef_emxArray_real_T_1x1
typedef struct emxArray_real_T_1x1 emxArray_real_T_1x1;
#endif /* typedef_emxArray_real_T_1x1 */

#ifndef struct_emxArray_char_T_1x3
#define struct_emxArray_char_T_1x3
struct emxArray_char_T_1x3 {
  char data[3];
  int size[2];
};
#endif /* struct_emxArray_char_T_1x3 */
#ifndef typedef_emxArray_char_T_1x3
#define typedef_emxArray_char_T_1x3
typedef struct emxArray_char_T_1x3 emxArray_char_T_1x3;
#endif /* typedef_emxArray_char_T_1x3 */

#ifndef struct_emxArray_real_T_2x5
#define struct_emxArray_real_T_2x5
struct emxArray_real_T_2x5 {
  double data[10];
  int size[2];
};
#endif /* struct_emxArray_real_T_2x5 */
#ifndef typedef_emxArray_real_T_2x5
#define typedef_emxArray_real_T_2x5
typedef struct emxArray_real_T_2x5 emxArray_real_T_2x5;
#endif /* typedef_emxArray_real_T_2x5 */

#ifndef typedef_struct_FSM_T
#define typedef_struct_FSM_T
typedef struct {
  emxArray_real_T *outliers;
  emxArray_real_T *loc;
  emxArray_real_T *cov;
  emxArray_real_T *md;
  emxArray_real_T *mmd;
  emxArray_real_T *Un;
  emxArray_real_T_2x5 nout;
  emxArray_char_T_1x3 class;
} struct_FSM_T;
#endif /* typedef_struct_FSM_T */

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T {
  int *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  bool canFreeData;
};
#endif /* struct_emxArray_int32_T */
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /* typedef_emxArray_int32_T */

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T {
  bool *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  bool canFreeData;
};
#endif /* struct_emxArray_boolean_T */
#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T
typedef struct emxArray_boolean_T emxArray_boolean_T;
#endif /* typedef_emxArray_boolean_T */

#ifndef typedef_emxArray_creal_T
#define typedef_emxArray_creal_T
typedef struct {
  creal_T *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  bool canFreeData;
} emxArray_creal_T;
#endif /* typedef_emxArray_creal_T */

#ifndef struct_emxArray_uint32_T
#define struct_emxArray_uint32_T
struct emxArray_uint32_T {
  unsigned int *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  bool canFreeData;
};
#endif /* struct_emxArray_uint32_T */
#ifndef typedef_emxArray_uint32_T
#define typedef_emxArray_uint32_T
typedef struct emxArray_uint32_T emxArray_uint32_T;
#endif /* typedef_emxArray_uint32_T */

#ifndef struct_emxArray_real_T_1
#define struct_emxArray_real_T_1
struct emxArray_real_T_1 {
  double data[1];
  int size[1];
};
#endif /* struct_emxArray_real_T_1 */
#ifndef typedef_emxArray_real_T_1
#define typedef_emxArray_real_T_1
typedef struct emxArray_real_T_1 emxArray_real_T_1;
#endif /* typedef_emxArray_real_T_1 */

#ifndef typedef_struct_FSR_T
#define typedef_struct_FSR_T
typedef struct {
  emxArray_real_T *ListOut;
  emxArray_real_T *outliers;
  emxArray_real_T *mdr;
  emxArray_real_T *Un;
  emxArray_real_T *nout;
  emxArray_real_T *beta;
  double scale;
  emxArray_real_T *mdag;
  emxArray_real_T *ListCl;
  emxArray_real_T *VIOMout;
  emxArray_real_T *fittedvalues;
  emxArray_real_T *residuals;
  char class[3];
} struct_FSR_T;
#endif /* typedef_struct_FSR_T */

#ifndef typedef_struct_LXS_T
#define typedef_struct_LXS_T
typedef struct {
  emxArray_boolean_T *weights;
  bool rew;
  emxArray_real_T *beta;
  double scale;
  emxArray_real_T *residuals;
  emxArray_real_T *bs;
  emxArray_real_T *outliers;
  double conflev;
  double h;
  double singsub;
  emxArray_real_T *X;
  emxArray_real_T *y;
  char class[3];
} struct_LXS_T;
#endif /* typedef_struct_LXS_T */

#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct {
  emxArray_real_T *ListOut;
  emxArray_real_T *outliers;
  emxArray_real_T *mdr;
  emxArray_real_T *Un;
  emxArray_real_T_2x5 nout;
  emxArray_real_T *beta;
  double scale;
  emxArray_real_T_1x1 mdag;
  emxArray_real_T *ListCl;
  emxArray_real_T *VIOMout;
} struct_T;
#endif /* typedef_struct_T */

#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T
struct emxArray_char_T {
  char *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  bool canFreeData;
};
#endif /* struct_emxArray_char_T */
#ifndef typedef_emxArray_char_T
#define typedef_emxArray_char_T
typedef struct emxArray_char_T emxArray_char_T;
#endif /* typedef_emxArray_char_T */

#ifndef struct_emxArray_real32_T
#define struct_emxArray_real32_T
struct emxArray_real32_T {
  float *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  bool canFreeData;
};
#endif /* struct_emxArray_real32_T */
#ifndef typedef_emxArray_real32_T
#define typedef_emxArray_real32_T
typedef struct emxArray_real32_T emxArray_real32_T;
#endif /* typedef_emxArray_real32_T */

#ifndef typedef_cell_wrap_36
#define typedef_cell_wrap_36
typedef struct {
  emxArray_real_T *f1;
} cell_wrap_36;
#endif /* typedef_cell_wrap_36 */

#ifndef typedef_emxArray_cell_wrap_36
#define typedef_emxArray_cell_wrap_36
typedef struct {
  cell_wrap_36 *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  bool canFreeData;
} emxArray_cell_wrap_36;
#endif /* typedef_emxArray_cell_wrap_36 */

#ifndef typedef_struct_FSRfan_T
#define typedef_struct_FSRfan_T
typedef struct {
  emxArray_real_T *Score;
  emxArray_real_T *la;
  emxArray_real_T *bs;
  emxArray_cell_wrap_36 *Un;
  emxArray_real_T *y;
  emxArray_real_T *X;
  emxArray_real_T *Scorep;
  emxArray_real_T *Scoren;
  emxArray_real_T *Scoreb;
} struct_FSRfan_T;
#endif /* typedef_struct_FSRfan_T */

#ifndef typedef_struct_LTStsmodel_T
#define typedef_struct_LTStsmodel_T
typedef struct {
  double lshift;
  double s;
  double trend;
  double seasonal;
  emxArray_real_T_1x1 ARp;
  emxArray_real_T *X;
} struct_LTStsmodel_T;
#endif /* typedef_struct_LTStsmodel_T */

#ifndef struct_emxArray_char_T_1x10
#define struct_emxArray_char_T_1x10
struct emxArray_char_T_1x10 {
  char data[10];
  int size[2];
};
#endif /* struct_emxArray_char_T_1x10 */
#ifndef typedef_emxArray_char_T_1x10
#define typedef_emxArray_char_T_1x10
typedef struct emxArray_char_T_1x10 emxArray_char_T_1x10;
#endif /* typedef_emxArray_char_T_1x10 */

#ifndef typedef_cell_wrap_48
#define typedef_cell_wrap_48
typedef struct {
  emxArray_char_T_1x10 f1;
} cell_wrap_48;
#endif /* typedef_cell_wrap_48 */

#ifndef typedef_e_matlab_internal_coder_tabular
#define typedef_e_matlab_internal_coder_tabular
typedef struct {
  cell_wrap_48 labels[1];
  double length;
} e_matlab_internal_coder_tabular;
#endif /* typedef_e_matlab_internal_coder_tabular */

#ifndef typedef_cell_wrap_6
#define typedef_cell_wrap_6
typedef struct {
  emxArray_real_T *f1;
} cell_wrap_6;
#endif /* typedef_cell_wrap_6 */

#ifndef typedef_c_captured_var
#define typedef_c_captured_var
typedef struct {
  emxArray_real_T *contents;
} c_captured_var;
#endif /* typedef_c_captured_var */

#ifndef typedef_d_captured_var
#define typedef_d_captured_var
typedef struct {
  emxArray_boolean_T *contents;
} d_captured_var;
#endif /* typedef_d_captured_var */

#ifndef typedef_b_struct_T
#define typedef_b_struct_T
typedef struct {
  emxArray_real_T *lower;
  emxArray_real_T *upper;
} b_struct_T;
#endif /* typedef_b_struct_T */

#ifndef typedef_c_struct_T
#define typedef_c_struct_T
typedef struct {
  emxArray_real_T *betarw;
  emxArray_real_T *yhat;
  emxArray_boolean_T *weights;
  double exiflag;
  double numscale2rw;
} c_struct_T;
#endif /* typedef_c_struct_T */

#ifndef typedef_d_struct_T
#define typedef_d_struct_T
typedef struct {
  captured_var *trend;
  captured_var *seasonal;
  captured_var *s;
  c_captured_var *yhatseaso;
  c_captured_var *Xseasof;
  captured_var *varampl;
  c_captured_var *Seqf;
  captured_var *nexpl;
  b_captured_var *isemptyX;
  c_captured_var *Xf;
  captured_var *lshiftYN;
  c_captured_var *Xlshiftf;
} d_struct_T;
#endif /* typedef_d_struct_T */

#ifndef typedef_nested_function
#define typedef_nested_function
typedef struct {
  d_struct_T workspace;
} nested_function;
#endif /* typedef_nested_function */

#ifndef typedef_struct_addt_T
#define typedef_struct_addt_T
typedef struct {
  emxArray_real_T_1 b;
  emxArray_real_T_1 S2add;
  emxArray_real_T_1x1 Tadd;
  emxArray_real_T_1x1 pval;
} struct_addt_T;
#endif /* typedef_struct_addt_T */

#ifndef typedef_struct_tclust_T
#define typedef_struct_tclust_T
typedef struct {
  emxArray_real_T *muopt;
  emxArray_real_T *sigmaopt;
  emxArray_real_T *idx;
  emxArray_real_T *postprob;
  emxArray_real_T_1x1 MIXMIX;
  emxArray_real_T_1x1 MIXCLA;
  double NlogL;
  emxArray_real_T_1x1 CLACLA;
  double notconver;
  emxArray_real_T *bs;
  double obj;
  bool equalweights;
  double h;
  emxArray_real_T *fullsol;
  emxArray_real_T *Y;
} struct_tclust_T;
#endif /* typedef_struct_tclust_T */

#ifndef struct_emxArray_int8_T
#define struct_emxArray_int8_T
struct emxArray_int8_T {
  signed char *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  bool canFreeData;
};
#endif /* struct_emxArray_int8_T */
#ifndef typedef_emxArray_int8_T
#define typedef_emxArray_int8_T
typedef struct emxArray_int8_T emxArray_int8_T;
#endif /* typedef_emxArray_int8_T */

#ifndef struct_emxArray_char_T_1x0
#define struct_emxArray_char_T_1x0
struct emxArray_char_T_1x0 {
  int size[2];
};
#endif /* struct_emxArray_char_T_1x0 */
#ifndef typedef_emxArray_char_T_1x0
#define typedef_emxArray_char_T_1x0
typedef struct emxArray_char_T_1x0 emxArray_char_T_1x0;
#endif /* typedef_emxArray_char_T_1x0 */

#ifndef typedef_cell_wrap_50
#define typedef_cell_wrap_50
typedef struct {
  emxArray_char_T_1x0 f1;
} cell_wrap_50;
#endif /* typedef_cell_wrap_50 */

#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct {
  emxArray_char_T_1x0 Description;
} struct0_T;
#endif /* typedef_struct0_T */

#ifndef typedef_f_struct_T
#define typedef_f_struct_T
typedef struct {
  nested_function fun;
  emxArray_real_T *xdata;
  emxArray_real_T *ydata;
} f_struct_T;
#endif /* typedef_f_struct_T */

#ifndef typedef_anonymous_function
#define typedef_anonymous_function
typedef struct {
  f_struct_T workspace;
} anonymous_function;
#endif /* typedef_anonymous_function */

#ifndef typedef_g_struct_T
#define typedef_g_struct_T
typedef struct {
  anonymous_function fun;
} g_struct_T;
#endif /* typedef_g_struct_T */

#ifndef typedef_b_anonymous_function
#define typedef_b_anonymous_function
typedef struct {
  g_struct_T workspace;
} b_anonymous_function;
#endif /* typedef_b_anonymous_function */

#ifndef typedef_h_struct_T
#define typedef_h_struct_T
typedef struct {
  b_anonymous_function nonlin;
  double f_1;
  emxArray_real_T *cEq_1;
  double f_2;
  emxArray_real_T *cEq_2;
  int nVar;
  int mIneq;
  int mEq;
  int numEvals;
  bool SpecifyObjectiveGradient;
  bool SpecifyConstraintGradient;
  bool isEmptyNonlcon;
  emxArray_boolean_T *hasLB;
  emxArray_boolean_T *hasUB;
  bool hasBounds;
  int FiniteDifferenceType;
} h_struct_T;
#endif /* typedef_h_struct_T */

#ifndef typedef_f_matlab_internal_coder_tabular
#define typedef_f_matlab_internal_coder_tabular
typedef struct {
  double length;
  cell_wrap_50 descrs[4];
  cell_wrap_50 units[4];
  c_matlab_internal_coder_tabular continuity[4];
  bool hasDescrs;
  bool hasUnits;
  bool hasContinuity;
  bool hasCustomProps;
} f_matlab_internal_coder_tabular;
#endif /* typedef_f_matlab_internal_coder_tabular */

#ifndef typedef_table
#define typedef_table
typedef struct {
  d_matlab_internal_coder_tabular metaDim;
  e_matlab_internal_coder_tabular rowDim;
  f_matlab_internal_coder_tabular varDim;
  cell_wrap_6 data[4];
  struct0_T arrayProps;
} table;
#endif /* typedef_table */

#ifndef typedef_struct_LTSts_T
#define typedef_struct_LTSts_T
typedef struct {
  emxArray_real_T *RES;
  emxArray_real_T *Hsubset;
  emxArray_real_T *B;
  emxArray_real_T_1x1 posLS;
  emxArray_real_T *yhat;
  emxArray_real_T *outliers;
  emxArray_real_T *outliersPval;
  double scale;
  emxArray_real_T *numscale2;
  emxArray_real_T *BestIndexes;
  emxArray_real_T *residuals;
  emxArray_real_T *bs;
  double conflev;
  double h;
  emxArray_boolean_T *weights;
  double singsub;
  char class[5];
  emxArray_real_T *Likloc;
  emxArray_real_T *y;
  emxArray_real_T *X;
  emxArray_real_T *invXX;
  table Btable;
  emxArray_real_T_1x1 LastHarmonicPval;
  emxArray_real_T_1x1 LevelShiftPval;
} struct_LTSts_T;
#endif /* typedef_struct_LTSts_T */

#endif
/* End of code generation (fsdaC_types.h) */
