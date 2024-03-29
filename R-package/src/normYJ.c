/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * normYJ.c
 *
 * Code generation for function 'normYJ'
 *
 */

/* Include files */
#include "normYJ.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void normYJ(const emxArray_real_T *Y, double la, emxArray_real_T *Ytra)
{
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_real_T *x;
  const double *Y_data;
  double varargin_1;
  double *Ytra_data;
  double *x_data;
  int end;
  int i;
  int nx;
  int *r2;
  int *r3;
  Y_data = Y->data;
  /* normYJ computes (normalized) Yeo-Johnson transformation */
  /*  */
  /* <a href="matlab: docsearchFS('normYJ')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*  Y :           Input data. Matrix. */
  /*                n x v data matrix; n observations and v variables. Rows of
   */
  /*                Y represent observations, and columns represent variables.
   */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
  /*    ColtoTra:   Variable to transform. Vector.  k x 1 integer vector */
  /*                specifying the variables which must be */
  /*                transformed. If it is missing and length(la)=v all */
  /*                variables are transformed */
  /*                 Data Types - single|double */
  /*         la :   transformation parameters. Vector. */
  /*                k x 1 vector containing set of transformation */
  /*                parameters for the k ColtoTra. */
  /*                 Data Types - single|double */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*   inverse :    Inverse transformation. Logical. If inverse is true, the */
  /*                inverse transformation is returned. The default value of */
  /*                inverse is false. */
  /*                  Example - 'inverse',true */
  /*                  Data Types - Logical */
  /*  */
  /*   Jacobian :   Requested Jacobian of transformed values. true (default) or
   */
  /*                false. If true (default) the transformation is normalized */
  /*                to have Jacobian equal to 1 */
  /*                  Example - 'Jacobian',true */
  /*                  Data Types - Logical */
  /*  */
  /*  Output: */
  /*  */
  /*    Ytra    : transformed data matrix. Matrix. n x v data matrix containing
   */
  /*                transformed observations */
  /*              The Yeo-Johnson transformation is the Box-Cox transformation
   */
  /*              of y+1 for nonnegative values, and of |y|+1 with parameter */
  /*              2-lambda for y negative. */
  /*  */
  /*  See also normBoxCox, normYJpn */
  /*  */
  /*  References: */
  /*  */
  /*  Yeo, I.K and Johnson, R. (2000), A new family of power transformations to
   */
  /*  improve normality or symmetry, "Biometrika", Vol. 87, pp. 954-959. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('normYJ')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % Example of use of normYJ with all default options. */
  /*     % Transform value -3, -2, ..., 3 */
  /*     y=(-3:3)'; */
  /*     lambda=0 */
  /*     y1=normYJ(y,1,lambda) */
  /*     plot(y,y1) */
  /*     xlabel('Original values') */
  /*     ylabel('Transformed values') */
  /*  */
  /* } */
  /* { */
  /*     % Comparison between Box-Cox and Yeo-Johnson transformation. */
  /*     close all */
  /*     y=(-2:0.1:2)'; */
  /*     n=length(y); */
  /*     la=-1:1:3; */
  /*     nla=length(la); */
  /*     YtraYJ=zeros(n,nla); */
  /*     YtraBC=nan(n,nla); */
  /*     posy=y>0; */
  /*     for j=1:nla */
  /*       YtraYJ(:,j)=normYJ(y,1,la(j),'Jacobian',false); */
  /*  */
  /*       YtraBC(posy,j)=normBoxCox(y(posy),1,la(j),'Jacobian',false); */
  /*     end */
  /*     subplot(1,2,1) */
  /*     plot(y,YtraYJ) */
  /*     for j=1:nla */
  /*         text(y(1), YtraYJ(1,j),['\lambda=' num2str(la(j))]) */
  /*     end */
  /*  */
  /*     xlabel('Original values') */
  /*     ylabel('Transformed values') */
  /*     title('Yeo-Johnson transformation') */
  /*  */
  /*     subplot(1,2,2) */
  /*     plot(y,YtraBC) */
  /*     xlim([y(1) y(end)]) */
  /*     for j=1:nla */
  /*         text(y(16), YtraBC(22,j),['\lambda=' num2str(la(j))]) */
  /*     end */
  /*     xlabel('Original values') */
  /*     ylabel('Transformed values') */
  /*     title('Box-Cox transformation') */
  /* } */
  /* { */
  /*     % Simulated data check inverse transformation. */
  /*     n=100;p=5; */
  /*     Y=randn(n,p); */
  /*     Y(3,1:3)=0; */
  /*     la=[0.5 0 -0.5 2 0]; */
  /*     % Transform all columns of matrix Y according to the values of la */
  /*     Ytra=normYJ(Y,[],la,'Jacobian',false); */
  /*     Ychk=normYJ(Ytra,[],la,'Jacobian',false,'inverse',true); */
  /*     disp(max(max(abs(Y-Ychk)))) */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  /*  Extract size of the data */
  /*  Write in structure 'options' the options chosen by the user */
  /*  Normalized Yeo-Johnson transformation of columns ColtoTra using la */
  i = Ytra->size[0];
  Ytra->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(Ytra, i);
  Ytra_data = Ytra->data;
  nx = Y->size[0];
  for (i = 0; i < nx; i++) {
    Ytra_data[i] = Y_data[i];
  }
  /*  YJ transformation is the Box-Cox transformation of */
  /*  y+1 for nonnegative values of y */
  emxInit_int32_T(&r, 1);
  emxInit_int32_T(&r1, 1);
  emxInit_real_T(&x, 1);
  if (la != 0.0) {
    end = Y->size[0] - 1;
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (Y_data[i] >= 0.0) {
        nx++;
      }
    }
    i = r->size[0];
    r->size[0] = nx;
    emxEnsureCapacity_int32_T(r, i);
    r2 = r->data;
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (Y_data[i] >= 0.0) {
        r2[nx] = i + 1;
        nx++;
      }
    }
    end = Y->size[0] - 1;
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (Y_data[i] >= 0.0) {
        nx++;
      }
    }
    i = r1->size[0];
    r1->size[0] = nx;
    emxEnsureCapacity_int32_T(r1, i);
    r3 = r1->data;
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (Y_data[i] >= 0.0) {
        r3[nx] = i + 1;
        nx++;
      }
    }
    i = x->size[0];
    x->size[0] = r->size[0];
    emxEnsureCapacity_real_T(x, i);
    x_data = x->data;
    nx = r->size[0];
    for (i = 0; i < nx; i++) {
      varargin_1 = Y_data[r2[i] - 1] + 1.0;
      x_data[i] = rt_powd_snf(varargin_1, la);
    }
    nx = x->size[0];
    for (i = 0; i < nx; i++) {
      Ytra_data[r3[i] - 1] = (x_data[i] - 1.0) / la;
    }
  } else {
    end = Y->size[0] - 1;
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (Y_data[i] >= 0.0) {
        nx++;
      }
    }
    i = r->size[0];
    r->size[0] = nx;
    emxEnsureCapacity_int32_T(r, i);
    r2 = r->data;
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (Y_data[i] >= 0.0) {
        r2[nx] = i + 1;
        nx++;
      }
    }
    end = Y->size[0] - 1;
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (Y_data[i] >= 0.0) {
        nx++;
      }
    }
    i = r1->size[0];
    r1->size[0] = nx;
    emxEnsureCapacity_int32_T(r1, i);
    r3 = r1->data;
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (Y_data[i] >= 0.0) {
        r3[nx] = i + 1;
        nx++;
      }
    }
    i = x->size[0];
    x->size[0] = r->size[0];
    emxEnsureCapacity_real_T(x, i);
    x_data = x->data;
    nx = r->size[0];
    for (i = 0; i < nx; i++) {
      x_data[i] = Y_data[r2[i] - 1] + 1.0;
    }
    nx = x->size[0];
    for (end = 0; end < nx; end++) {
      x_data[end] = log(x_data[end]);
    }
    nx = x->size[0];
    for (i = 0; i < nx; i++) {
      Ytra_data[r3[i] - 1] = x_data[i];
    }
  }
  emxFree_int32_T(&r1);
  emxFree_int32_T(&r);
  /*  YJ transformation is the Box-Cox transformation of */
  /*   |y|+1 with parameter 2-lambda for y negative. */
  emxInit_int32_T(&r4, 1);
  emxInit_int32_T(&r5, 1);
  if (2.0 - la != 0.0) {
    end = Y->size[0] - 1;
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (!(Y_data[i] >= 0.0)) {
        nx++;
      }
    }
    i = r4->size[0];
    r4->size[0] = nx;
    emxEnsureCapacity_int32_T(r4, i);
    r2 = r4->data;
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (!(Y_data[i] >= 0.0)) {
        r2[nx] = i + 1;
        nx++;
      }
    }
    end = Y->size[0] - 1;
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (!(Y_data[i] >= 0.0)) {
        nx++;
      }
    }
    i = r5->size[0];
    r5->size[0] = nx;
    emxEnsureCapacity_int32_T(r5, i);
    r3 = r5->data;
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (!(Y_data[i] >= 0.0)) {
        r3[nx] = i + 1;
        nx++;
      }
    }
    i = x->size[0];
    x->size[0] = r4->size[0];
    emxEnsureCapacity_real_T(x, i);
    x_data = x->data;
    nx = r4->size[0];
    for (i = 0; i < nx; i++) {
      varargin_1 = -Y_data[r2[i] - 1] + 1.0;
      x_data[i] = rt_powd_snf(varargin_1, 2.0 - la);
    }
    nx = x->size[0];
    for (i = 0; i < nx; i++) {
      Ytra_data[r3[i] - 1] = -(x_data[i] - 1.0) / (2.0 - la);
    }
  } else {
    end = Y->size[0] - 1;
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (!(Y_data[i] >= 0.0)) {
        nx++;
      }
    }
    i = r4->size[0];
    r4->size[0] = nx;
    emxEnsureCapacity_int32_T(r4, i);
    r2 = r4->data;
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (!(Y_data[i] >= 0.0)) {
        r2[nx] = i + 1;
        nx++;
      }
    }
    end = Y->size[0] - 1;
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (!(Y_data[i] >= 0.0)) {
        nx++;
      }
    }
    i = r5->size[0];
    r5->size[0] = nx;
    emxEnsureCapacity_int32_T(r5, i);
    r3 = r5->data;
    nx = 0;
    for (i = 0; i <= end; i++) {
      if (!(Y_data[i] >= 0.0)) {
        r3[nx] = i + 1;
        nx++;
      }
    }
    i = x->size[0];
    x->size[0] = r4->size[0];
    emxEnsureCapacity_real_T(x, i);
    x_data = x->data;
    nx = r4->size[0];
    for (i = 0; i < nx; i++) {
      x_data[i] = -Y_data[r2[i] - 1] + 1.0;
    }
    nx = x->size[0];
    for (end = 0; end < nx; end++) {
      x_data[end] = log(x_data[end]);
    }
    nx = x->size[0];
    for (i = 0; i < nx; i++) {
      Ytra_data[r3[i] - 1] = -x_data[i];
    }
  }
  emxFree_real_T(&x);
  emxFree_int32_T(&r5);
  emxFree_int32_T(&r4);
  /*  If Jacobian ==true the transformation is normalized so that its */
  /*  Jacobian will be 1 */
}

/* End of code generation (normYJ.c) */
