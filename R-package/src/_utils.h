
#ifndef UTILS_H
#define UTILS_H

#include <R.h>

#include "fsdaC_emxAPI.h"
#include "fsdaC_terminate.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"

/* for "tracing" only : */
void disp_mat(double **a, int n, int m);
void disp_dble(double *a, int n);
void disp_int(int *a, int n);
void disp_lmat(double *a, int n, int p);
void disp_lmat_cm(double *a, int n, int p);

//  emxAPI help function Declarations: functions to handle MATLAB generated data types
void argInit_scalar(double a, bool b, double result_data[], int result_size[2]);
void argInit_scalar2(double a[], double result_data[], int result_size[2]);
emxArray_real_T *argInit_vector(const double *yy, const int *nn);
emxArray_real_T *argInit_matrix(const double *xx, const int *nn, const int *pp);
emxArray_real_T *argCreate_matrix(const int nn, const int pp);
emxArray_real_T *argCreate_vector(const int nn);

#endif

