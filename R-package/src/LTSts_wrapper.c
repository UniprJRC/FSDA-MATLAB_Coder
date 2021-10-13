/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LTSts_wrapper.c
 *
 * Code generation for function 'LTSts_wrapper'
 *
 */

/* Include files */
#include "LTSts_wrapper.h"
#include "LTSts.h"
#include "fsdaC_data.h"
#include "fsdaC_initialize.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void LTSts_wrapper(const emxArray_real_T *y, double conflev, bool dispresults,
                   double h, bool intercept,
                   const struct_LTStslshiftlocref_T *lshiftlocref,
                   const struct_LXSlms_T *lts, const struct_LTStsmodel_T *model,
                   bool msg, double nbestindexes, bool nocheck,
                   const double nsamp_data[], const int nsamp_size[2],
                   double refstepsALS, double reftolALS, double SmallSampleCor,
                   bool yxsave, struct_LTSts_T *out, double *C)
{
  double b_nsamp_data[2];
  int b_nsamp_size[2];
  int b_loop_ub;
  int i;
  int loop_ub;
  (void)nocheck;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  /*  Wrapper function for LTSts. NV pair names are not taken as */
  /*  inputs. Instead, just the values are taken as inputs. */
  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  Optional input arguments (name / pairs) in (case insensitive) */
  /*  alphabetical order */
  /*  conflev a scalar double */
  /*  dispresults a boolean */
  /*  h a scalar double */
  /*  intercept */
  /*  lshiftlocref: a struct (with 3 fields of type scalar double) */
  /*  field wlength a scalar of type double */
  /*  field lshiftlocref a scalar of type double */
  /*  field huberc a scalar of type double */
  /*  lts: a struct (with 5 fields of type scalar double) */
  /*  field bestr a scalar of type double */
  /*  field refsteps a scalar of type double */
  /*  field refstepsbestr a scalar of type double */
  /*  field reftol a scalar of type double */
  /*  field reftolbestr a scalar of type double */
  /*  model: a struct (with 6 fields of type scalar double) */
  /*  field lshift  a row vector of type double */
  /*  assert(size(model.lshift,1) == 1); */
  /*  assert(all(size(model.lshift) <= [Inf 1])); */
  /*  field s a scalar of type double */
  /*  field trend a scalar of type double */
  /*  field seasonal a scalar of type double */
  /*  field ARp a scalar of type double */
  /*  assert(size(model.ARp,1) == 1); */
  /*  field X a missing value or a matrix of any dimension */
  /*  msg a boolean */
  /*  nbestindexes a scalar double */
  /*  nocheck is a boolean */
  /*  nsamp: a column vector of maximum length equal to 2 */
  /*  refstepsALS a scalar double */
  /*  SmallSampleCor a scalar double */
  /*  yxsave is a boolean */
  b_nsamp_size[0] = nsamp_size[1];
  b_nsamp_size[1] = nsamp_size[0];
  loop_ub = nsamp_size[0];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = nsamp_size[1];
    if (0 <= b_loop_ub - 1) {
      b_nsamp_data[b_nsamp_size[0] * i] = nsamp_data[i];
    }
  }
  LTSts(y, conflev, dispresults, h, intercept, lshiftlocref->wlength,
        lshiftlocref->typeres, lshiftlocref->huberc, lts->bestr, lts->refsteps,
        lts->refstepsbestr, lts->reftol, lts->reftolbestr, *model, msg,
        nbestindexes, b_nsamp_data, b_nsamp_size, refstepsALS, reftolALS,
        SmallSampleCor, yxsave, out);
  *C = 1.0;
}

/* End of code generation (LTSts_wrapper.c) */
