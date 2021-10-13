/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * unibiv_wrapper.c
 *
 * Code generation for function 'unibiv_wrapper'
 *
 */

/* Include files */
#include "unibiv_wrapper.h"
#include "blockedSummation.h"
#include "eig.h"
#include "find.h"
#include "finv.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_initialize.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "iqr.h"
#include "mad.h"
#include "median.h"
#include "quantile.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sqrt.h"
#include "tril.h"
#include "unibiv.h"
#include "vvarstd.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void unibiv_wrapper(const emxArray_real_T *Y, double madcoef, double robscale,
                    double rf, emxArray_real_T *fre)
{
  static creal_T b_The1max[7202];
  static creal_T new1[7202];
  emxArray_boolean_T *r;
  emxArray_creal_T *b_Xs;
  emxArray_creal_T *new2;
  emxArray_int32_T *ii;
  emxArray_int32_T *jj;
  emxArray_int32_T *r1;
  emxArray_real_T *MDbiv;
  emxArray_real_T *Xs;
  emxArray_real_T *Ys;
  emxArray_real_T *b_Y;
  emxArray_real_T *biv;
  emxArray_real_T *bivT;
  emxArray_real_T *datax;
  emxArray_real_T *outy;
  emxArray_real_T *seq;
  emxArray_real_T *univT;
  emxArray_real_T *xrank;
  emxArray_real_T *y;
  emxArray_real_T *yrank;
  emxArray_uint8_T *r2;
  creal_T xnew[3601];
  creal_T ynew[3601];
  creal_T M[4];
  creal_T aut[2];
  creal_T b_a;
  creal_T sinth;
  creal_T *b_Xs_data;
  creal_T *new2_data;
  double The1max[3601];
  double The2max[3601];
  double rr[4];
  double quan[3];
  const double *Y_data;
  double Sy;
  double Tx;
  double Ty;
  double a;
  double a_tmp;
  double b_robscale;
  double ch_re;
  double costh_im;
  double costh_re;
  double fuo;
  double mady;
  double s;
  double sgnbr;
  double uq;
  double *MDbiv_data;
  double *Xs_data;
  double *Ys_data;
  double *bivT_data;
  double *biv_data;
  double *seq_data;
  double *univT_data;
  double *xrank_data;
  double *y_data;
  unsigned int b_jl;
  int boffset;
  int coffset;
  int i;
  int i1;
  int il;
  int j;
  int jl;
  int k;
  int n;
  int nx;
  int *ii_data;
  int *jj_data;
  unsigned char *r4;
  bool *r3;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  Y_data = Y->data;
  emxInit_real_T(&bivT, 1);
  /*  Wrapper function for FSM. NV pair names are not taken as */
  /*  inputs. Instead, just the values are taken as inputs. */
  /*  Y: an array of doubles of any dimensions */
  /*  Optional input arguments (name / pairs) in (case insensitive) */
  /*  alphabetical order */
  /*  robscale a scalar double */
  /*  rf: a scalar of type double */
  /* unibiv has the purpose of detecting univariate and bivariate outliers */
  /*  */
  /* <a href="matlab: docsearchFS('unibiv')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
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
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*        madcoef :  scaled MAD. Scalar. Coefficient which is used to scale
   * MAD */
  /*                    coefficient to have a robust estimate of dispersion.
   * The */
  /*                    default is 1.4815 so that 1.4815*MAD(N(0,1))=1. */
  /*                  Example - 'madcoef',2 */
  /*                  Data Types - double */
  /*                    Remark: if mad =median(y-median(y))=0 then the
   * interquartile */
  /*                    range is used. If also the interquartile range is 0 */
  /*                    than the MD (mean absolute deviation) is used.  In */
  /*                    other words MD=mean(abs(y-mean(Y)) */
  /*  */
  /*            rf  :  It specifies the confidence */
  /*                   level of the robust bivariate ellipses. Scalar. 0<rf<1.
   */
  /*                   The default value is 0.95 that is the outer contour in */
  /*                   presence of normality for each ellipse should leave */
  /*                   outside 5% of the values. */
  /*                  Example - 'rf',0.99 */
  /*                  Data Types - double */
  /*  */
  /*       robscale :   how to compute dispersion. Scalar. It specifies the */
  /*                    statistical indexes to use to compute the dispersion of
   */
  /*                    each variable and the correlation among each pair of */
  /*                    variables. */
  /*                    robscale=1 (default): the program uses the median
   * correlation */
  /*                    and the MAD as estimate of the dispersion of each
   * variable; */
  /*                    robscale=2: the correlation coefficient among ranks is
   * used */
  /*                    (Spearman's rho) and the MAD as estimate of the
   * dispersion */
  /*                    of each variable; */
  /*                    robscale=3: the correlation coefficient is based on
   * Kendall's tau b */
  /*                    and the MAD as estimate of the dispersion of each */
  /*                    variable; */
  /*                    robscale=4: tetracoric correlation coefficient is used
   * and the MAD */
  /*                    as estimate of the dispersion of each variable; */
  /*                    otherwise the correlation and the dispersion of the
   * variables are */
  /*                    computed using the traditional (non robust) formulae */
  /*                    around the univariate medians. */
  /*                  Example - 'robscale',2 */
  /*                  Data Types - double */
  /*  */
  /*          plots :   Plot on the screen. Scalar. It specifies whether it is
   */
  /*                    necessary to produce a plot */
  /*                    with univariate standardized boxplots on the */
  /*                    main diagonal and bivariate confidence ellipses out of
   */
  /*                    the main diagonal. If plots is equal to 1 a plot */
  /*                    which contains univariate standardized boxplots on the
   */
  /*                    main diagonal and bivariate confidence ellipses out of
   */
  /*                    the main diagonal is produced on the screen. If plots is
   */
  /*                    <> 1 no plot is produced. As default no plot is */
  /*                    produced. */
  /*                  Example - 'plots',2 */
  /*                  Data Types - double */
  /*  */
  /*        tag     :   plot tag.  Character. It identifies the handle of the
   * plot which */
  /*                    is about to be created. The default is to use tag */
  /*                    'pl_unibiv'. Notice that if the program finds a plot
   * which */
  /*                    has a tag equal to the one specified by the user, then
   */
  /*                    the output of the new plot overwrites the existing one
   */
  /*                    in the same window else a new window is created. */
  /*                  Example - 'tag','new_tag' */
  /*                  Data Types - char */
  /*  */
  /*        textlab : plot labels. Scalar.  Scalar which controls the labels in
   */
  /*                    the plots. If textlab=1 and */
  /*                    plots=1 the labels associated */
  /*                    to the units which are univariate outliers or which are
   */
  /*                    outside the confidence levels of the contours are */
  /*                    displayed on the screen. */
  /*                  Example - 'textlab',0 */
  /*                  Data Types - double */
  /*  */
  /*  Output: */
  /*  */
  /*    fre  :  n x 4 matrix which contains details about the univariate and */
  /*            bivariate outliers. */
  /*            1st col = index of the units; */
  /*            2nd col = number of times unit has been declared */
  /*            univariate outliers; */
  /*            3rd col = number of times unit has been declared */
  /*            bivariate outlier; */
  /*            4th col = pseudo MD as sum of bivariate MD. */
  /*  */
  /*  See also: FSMmmd */
  /*  */
  /*  References: */
  /*  */
  /*        Riani, M., Zani S. (1997). An iterative method for the detection of
   */
  /*        multivariate outliers, "Metron", Vol. LV, pp. 101-117. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('unibiv')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % unibiv with all default options. */
  /*     % Run this code to see the output shown in the help file */
  /*     n=500; */
  /*     p=5; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,p); */
  /*     [out]=unibiv(Y); */
  /* } */
  /* { */
  /*     %% unibiv with optional arguments. */
  /*     % Stack loss data. */
  /*     Y=load('stack_loss.txt'); */
  /*     % Show robust confidence ellipses */
  /*     out=unibiv(Y,'plots',1,'textlab',1); */
  /* } */
  /*  Beginning of code */
  n = Y->size[0];
  /*  Default confidence level for bivariate ellipses */
  /*  Input parameters checking */
  /*  Write in structure 'options' the options chosen by the user */
  b_robscale = robscale;
  /*  bivT contains the frequency distribution of biv. outliers */
  i = bivT->size[0];
  bivT->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(bivT, i);
  bivT_data = bivT->data;
  coffset = Y->size[0];
  for (i = 0; i < coffset; i++) {
    bivT_data[i] = 0.0;
  }
  emxInit_real_T(&univT, 1);
  /*  univT contains the frequency distribution of univ. outliers */
  i = univT->size[0];
  univT->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(univT, i);
  univT_data = univT->data;
  coffset = Y->size[0];
  for (i = 0; i < coffset; i++) {
    univT_data[i] = 0.0;
  }
  emxInit_real_T(&MDbiv, 1);
  /*  MDbiv= vector which contains the sum of the bivaraite Mahalanobis
   * distances for each unit */
  i = MDbiv->size[0];
  MDbiv->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(MDbiv, i);
  MDbiv_data = MDbiv->data;
  coffset = Y->size[0];
  for (i = 0; i < coffset; i++) {
    MDbiv_data[i] = 0.0;
  }
  /*  madcoef=1; */
  emxInit_real_T(&biv, 2);
  biv_data = biv->data;
  if (Y->size[0] < 1) {
    biv->size[0] = 1;
    biv->size[1] = 0;
  } else {
    i = biv->size[0] * biv->size[1];
    biv->size[0] = 1;
    biv->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(biv, i);
    biv_data = biv->data;
    coffset = Y->size[0] - 1;
    for (i = 0; i <= coffset; i++) {
      biv_data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&seq, 1);
  i = seq->size[0];
  seq->size[0] = biv->size[1];
  emxEnsureCapacity_real_T(seq, i);
  seq_data = seq->data;
  coffset = biv->size[1];
  for (i = 0; i < coffset; i++) {
    seq_data[i] = biv_data[i];
  }
  i = Y->size[1];
  emxInit_real_T(&y, 1);
  emxInit_real_T(&Ys, 1);
  emxInit_real_T(&datax, 2);
  emxInit_real_T(&outy, 2);
  emxInit_real_T(&Xs, 1);
  emxInit_real_T(&xrank, 1);
  emxInit_real_T(&yrank, 1);
  emxInit_creal_T(&new2, 2);
  emxInit_boolean_T(&r, 1);
  emxInit_int32_T(&r1, 1);
  emxInit_int32_T(&ii, 1);
  emxInit_int32_T(&jj, 1);
  emxInit_uint8_T(&r2);
  emxInit_real_T(&b_Y, 1);
  emxInit_creal_T(&b_Xs, 2);
  for (il = 0; il < i; il++) {
    /*  il is linked to the rows */
    /*  Ys = vector which contains standardized data */
    coffset = Y->size[0];
    i1 = y->size[0];
    y->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(y, i1);
    y_data = y->data;
    i1 = b_Y->size[0];
    b_Y->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(b_Y, i1);
    biv_data = b_Y->data;
    for (i1 = 0; i1 < coffset; i1++) {
      Tx = Y_data[i1 + Y->size[0] * il];
      y_data[i1] = Tx;
      biv_data[i1] = Tx;
    }
    Ty = median(b_Y);
    coffset = Y->size[0];
    i1 = b_Y->size[0];
    b_Y->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(b_Y, i1);
    biv_data = b_Y->data;
    for (i1 = 0; i1 < coffset; i1++) {
      biv_data[i1] = Y_data[i1 + Y->size[0] * il];
    }
    mady = mad(b_Y);
    if (mady > 0.0) {
      mady *= madcoef;
      coffset = Y->size[0];
      i1 = Ys->size[0];
      Ys->size[0] = Y->size[0];
      emxEnsureCapacity_real_T(Ys, i1);
      Ys_data = Ys->data;
      for (i1 = 0; i1 < coffset; i1++) {
        Ys_data[i1] = (Y_data[i1 + Y->size[0] * il] - Ty) / mady;
      }
    } else {
      coffset = Y->size[0];
      i1 = b_Y->size[0];
      b_Y->size[0] = Y->size[0];
      emxEnsureCapacity_real_T(b_Y, i1);
      biv_data = b_Y->data;
      for (i1 = 0; i1 < coffset; i1++) {
        biv_data[i1] = Y_data[i1 + Y->size[0] * il];
      }
      if (iqr(b_Y) > 0.0) {
        coffset = Y->size[0];
        i1 = b_Y->size[0];
        b_Y->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(b_Y, i1);
        biv_data = b_Y->data;
        for (i1 = 0; i1 < coffset; i1++) {
          biv_data[i1] = Y_data[i1 + Y->size[0] * il];
        }
        mady = madcoef * (1.349 * iqr(b_Y) / 0.6745);
        coffset = Y->size[0];
        i1 = Ys->size[0];
        Ys->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(Ys, i1);
        Ys_data = Ys->data;
        for (i1 = 0; i1 < coffset; i1++) {
          Ys_data[i1] = (Y_data[i1 + Y->size[0] * il] - Ty) / mady;
        }
      } else {
        coffset = Y->size[0];
        i1 = b_Y->size[0];
        b_Y->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(b_Y, i1);
        biv_data = b_Y->data;
        for (i1 = 0; i1 < coffset; i1++) {
          biv_data[i1] = Y_data[i1 + Y->size[0] * il];
        }
        mady = madcoef * (1.2533 * b_mad(b_Y) / 0.6745);
        coffset = Y->size[0];
        i1 = Ys->size[0];
        Ys->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(Ys, i1);
        Ys_data = Ys->data;
        for (i1 = 0; i1 < coffset; i1++) {
          Ys_data[i1] = (Y_data[i1 + Y->size[0] * il] - Ty) / mady;
        }
      }
    }
    if (b_robscale > 4.0) {
      /*  Sy is the unrobust standard deviation of y */
      coffset = Y->size[0];
      i1 = Ys->size[0];
      Ys->size[0] = Y->size[0];
      emxEnsureCapacity_real_T(Ys, i1);
      Ys_data = Ys->data;
      for (i1 = 0; i1 < coffset; i1++) {
        Ys_data[i1] = Y_data[i1 + Y->size[0] * il] - Ty;
      }
      mady = 0.0;
      coffset = Ys->size[0];
      for (i1 = 0; i1 < coffset; i1++) {
        mady += Ys_data[i1] * Ys_data[i1];
      }
      Sy = sqrt(mady / ((double)n - 1.0));
      coffset = Ys->size[0];
      for (i1 = 0; i1 < coffset; i1++) {
        Ys_data[i1] /= Sy;
      }
    } else {
      Sy = 0.0;
    }
    /*  datax x add a sequence to standardized data */
    coffset = seq->size[0];
    i1 = datax->size[0] * datax->size[1];
    datax->size[0] = seq->size[0];
    datax->size[1] = 2;
    emxEnsureCapacity_real_T(datax, i1);
    biv_data = datax->data;
    for (i1 = 0; i1 < coffset; i1++) {
      biv_data[i1] = seq_data[i1];
    }
    coffset = Ys->size[0];
    for (i1 = 0; i1 < coffset; i1++) {
      biv_data[i1 + datax->size[0]] = Ys_data[i1];
    }
    /*  quan = 1 x 3 vector which contins 1% quartile median and 3rd */
    /*  quartile */
    quantile(Ys, quan);
    /*  di= interquartile difference */
    mady = quan[2] - quan[0];
    /*  uq=upper truncation point */
    uq = quan[2] + 1.5 * mady;
    /*  lq=lower truncation point */
    mady = quan[0] - 1.5 * mady;
    /*  outy is a (l+1) x 2 matrix. the first column contains */
    /*  the indexes of the units declared univariate */
    /*  outliers, the second columns gives the standardized */
    /*  values of the outliers */
    nx = datax->size[0] - 1;
    i1 = xrank->size[0];
    xrank->size[0] = datax->size[0];
    emxEnsureCapacity_real_T(xrank, i1);
    xrank_data = xrank->data;
    for (k = 0; k <= nx; k++) {
      xrank_data[k] = fabs(biv_data[k + datax->size[0]]);
    }
    if (datax->size[0] == xrank->size[0]) {
      coffset = datax->size[0];
      i1 = r->size[0];
      r->size[0] = datax->size[0];
      emxEnsureCapacity_boolean_T(r, i1);
      r3 = r->data;
      for (i1 = 0; i1 < coffset; i1++) {
        Tx = biv_data[i1 + datax->size[0]];
        r3[i1] = ((Tx > uq) || (Tx < mady) || (xrank_data[i1] > 3.0));
      }
    } else {
      l_binary_expand_op(r, datax, uq, mady, xrank);
      r3 = r->data;
    }
    coffset = r->size[0] - 1;
    nx = 0;
    for (boffset = 0; boffset <= coffset; boffset++) {
      if (r3[boffset]) {
        nx++;
      }
    }
    i1 = r1->size[0];
    r1->size[0] = nx;
    emxEnsureCapacity_int32_T(r1, i1);
    jj_data = r1->data;
    nx = 0;
    for (boffset = 0; boffset <= coffset; boffset++) {
      if (r3[boffset]) {
        jj_data[nx] = boffset + 1;
        nx++;
      }
    }
    coffset = r1->size[0];
    i1 = outy->size[0] * outy->size[1];
    outy->size[0] = r1->size[0];
    outy->size[1] = 2;
    emxEnsureCapacity_real_T(outy, i1);
    xrank_data = outy->data;
    for (i1 = 0; i1 < 2; i1++) {
      for (j = 0; j < coffset; j++) {
        xrank_data[j + outy->size[0] * i1] =
            biv_data[(jj_data[j] + datax->size[0] * i1) - 1];
      }
    }
    coffset = r1->size[0];
    if (r1->size[0] != 0) {
      /*  Increase by 1 the frequencey distribution of */
      /*  univariate outliers in vector univT */
      i1 = b_Y->size[0];
      b_Y->size[0] = r1->size[0];
      emxEnsureCapacity_real_T(b_Y, i1);
      biv_data = b_Y->data;
      for (i1 = 0; i1 < coffset; i1++) {
        biv_data[i1] = univT_data[(int)xrank_data[i1] - 1] + 1.0;
      }
      coffset = b_Y->size[0];
      for (i1 = 0; i1 < coffset; i1++) {
        univT_data[(int)xrank_data[i1] - 1] = biv_data[i1];
      }
    }
    i1 = Y->size[1] - il;
    for (jl = 0; jl < i1; jl++) {
      b_jl = ((unsigned int)il + jl) + 1U;
      /*  jl is linked to columns */
      if ((unsigned int)(il + 1) != b_jl) {
        /*  beginning of bivariate part */
        /*  Tx is the coordinate of the  Median */
        coffset = Y->size[0];
        j = b_Y->size[0];
        b_Y->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(b_Y, j);
        biv_data = b_Y->data;
        for (j = 0; j < coffset; j++) {
          biv_data[j] = Y_data[j + Y->size[0] * ((int)b_jl - 1)];
        }
        Tx = median(b_Y);
        coffset = Y->size[0];
        j = b_Y->size[0];
        b_Y->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(b_Y, j);
        biv_data = b_Y->data;
        for (j = 0; j < coffset; j++) {
          biv_data[j] = Y_data[j + Y->size[0] * ((int)b_jl - 1)];
        }
        mady = mad(b_Y);
        if (mady > 0.0) {
          mady *= madcoef;
          coffset = Y->size[0];
          j = Xs->size[0];
          Xs->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(Xs, j);
          Xs_data = Xs->data;
          for (j = 0; j < coffset; j++) {
            Xs_data[j] = (Y_data[j + Y->size[0] * ((int)b_jl - 1)] - Tx) / mady;
          }
        } else {
          if (b_robscale == 1.0) {
            b_robscale = 2.0;
          }
          coffset = Y->size[0];
          j = b_Y->size[0];
          b_Y->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(b_Y, j);
          biv_data = b_Y->data;
          for (j = 0; j < coffset; j++) {
            biv_data[j] = Y_data[j + Y->size[0] * ((int)b_jl - 1)];
          }
          mady = iqr(b_Y);
          if (mady > 0.0) {
            mady = madcoef * (1.349 * mady / 0.6745);
            coffset = Y->size[0];
            j = Xs->size[0];
            Xs->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(Xs, j);
            Xs_data = Xs->data;
            for (j = 0; j < coffset; j++) {
              Xs_data[j] =
                  (Y_data[j + Y->size[0] * ((int)b_jl - 1)] - Tx) / mady;
            }
          } else {
            coffset = Y->size[0];
            j = b_Y->size[0];
            b_Y->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(b_Y, j);
            biv_data = b_Y->data;
            for (j = 0; j < coffset; j++) {
              biv_data[j] = Y_data[j + Y->size[0] * ((int)b_jl - 1)];
            }
            mady = madcoef * (1.2533 * b_mad(b_Y) / 0.6745);
            coffset = Y->size[0];
            j = Xs->size[0];
            Xs->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(Xs, j);
            Xs_data = Xs->data;
            for (j = 0; j < coffset; j++) {
              Xs_data[j] =
                  (Y_data[j + Y->size[0] * ((int)b_jl - 1)] - Tx) / mady;
            }
          }
        }
        if (b_robscale == 1.0) {
          if (Xs->size[0] == Ys->size[0]) {
            j = yrank->size[0];
            yrank->size[0] = Xs->size[0];
            emxEnsureCapacity_real_T(yrank, j);
            biv_data = yrank->data;
            coffset = Xs->size[0];
            for (j = 0; j < coffset; j++) {
              biv_data[j] = Xs_data[j] + Ys_data[j];
            }
          } else {
            b_plus(yrank, Xs, Ys);
            biv_data = yrank->data;
          }
          nx = yrank->size[0];
          j = xrank->size[0];
          xrank->size[0] = yrank->size[0];
          emxEnsureCapacity_real_T(xrank, j);
          xrank_data = xrank->data;
          for (k = 0; k < nx; k++) {
            xrank_data[k] = fabs(biv_data[k]);
          }
          a = median(xrank);
          Tx = a * a;
          if (Xs->size[0] == Ys->size[0]) {
            j = yrank->size[0];
            yrank->size[0] = Xs->size[0];
            emxEnsureCapacity_real_T(yrank, j);
            biv_data = yrank->data;
            coffset = Xs->size[0];
            for (j = 0; j < coffset; j++) {
              biv_data[j] = Xs_data[j] - Ys_data[j];
            }
          } else {
            minus(yrank, Xs, Ys);
            biv_data = yrank->data;
          }
          nx = yrank->size[0];
          j = xrank->size[0];
          xrank->size[0] = yrank->size[0];
          emxEnsureCapacity_real_T(xrank, j);
          xrank_data = xrank->data;
          for (k = 0; k < nx; k++) {
            xrank_data[k] = fabs(biv_data[k]);
          }
          a = median(xrank);
          mady = a * a;
          Tx = (Tx - mady) / (Tx + mady);
          if (rtIsNaN(Tx)) {
            Tx = 0.0;
          }
        } else if (b_robscale == 2.0) {
          /*  r is computed using ranks */
          coffset = Y->size[0];
          j = b_Y->size[0];
          b_Y->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(b_Y, j);
          biv_data = b_Y->data;
          for (j = 0; j < coffset; j++) {
            biv_data[j] = Y_data[j + Y->size[0] * ((int)b_jl - 1)];
          }
          tiedrankFS(b_Y, xrank);
          xrank_data = xrank->data;
          tiedrankFS(y, yrank);
          biv_data = yrank->data;
          mady =
              blockedSummation(xrank, xrank->size[0]) / (double)xrank->size[0];
          Tx = blockedSummation(yrank, yrank->size[0]) / (double)yrank->size[0];
          uq = 0.0;
          coffset = xrank->size[0];
          for (j = 0; j < coffset; j++) {
            uq += (xrank_data[j] - mady) * (biv_data[j] - Tx);
          }
          Tx = uq / (((double)n - 1.0) * vvarstd(xrank, xrank->size[0]) *
                     vvarstd(yrank, yrank->size[0]));
        } else if (b_robscale == 3.0) {
          /*  r is based on the linear correlation */
          /*  between the "concordances" sign(x(i)-x(j))*sign(y(i)-y(j)), i<j,
           * with */
          /*  an adjustment for ties.  This is often referred to as Kendall's
           * tau-b. */
          /*  Manual computation of Kendall correlation */
          /*  coefficient. */
          /*  Prepare indexes for all combinations without repetition */
          j = r2->size[0] * r2->size[1];
          r2->size[0] = n;
          r2->size[1] = n;
          emxEnsureCapacity_uint8_T(r2, j);
          r4 = r2->data;
          coffset = n * n;
          for (j = 0; j < coffset; j++) {
            r4[j] = 1U;
          }
          tril(r2);
          c_eml_find(r2, ii, jj);
          jj_data = jj->data;
          ii_data = ii->data;
          coffset = Y->size[0];
          j = datax->size[0] * datax->size[1];
          datax->size[0] = Y->size[0];
          datax->size[1] = 2;
          emxEnsureCapacity_real_T(datax, j);
          biv_data = datax->data;
          for (j = 0; j < coffset; j++) {
            biv_data[j] = Y_data[j + Y->size[0] * ((int)b_jl - 1)];
          }
          coffset = y->size[0];
          for (j = 0; j < coffset; j++) {
            biv_data[j + datax->size[0]] = y_data[j];
          }
          /*  Now, this is just a linear correlation using the signs of */
          /*  [T * (T - 1) / 2] differences */
          coffset = jj->size[0];
          if (jj->size[0] == ii->size[0]) {
            j = outy->size[0] * outy->size[1];
            outy->size[0] = jj->size[0];
            outy->size[1] = 2;
            emxEnsureCapacity_real_T(outy, j);
            xrank_data = outy->data;
            for (j = 0; j < 2; j++) {
              for (boffset = 0; boffset < coffset; boffset++) {
                xrank_data[boffset + outy->size[0] * j] =
                    biv_data[(jj_data[boffset] + datax->size[0] * j) - 1] -
                    biv_data[(ii_data[boffset] + datax->size[0] * j) - 1];
              }
            }
          } else {
            mf_binary_expand_op(outy, datax, jj, ii);
            xrank_data = outy->data;
          }
          nx = outy->size[0] << 1;
          for (k = 0; k < nx; k++) {
            mady = xrank_data[k];
            if (xrank_data[k] < 0.0) {
              mady = -1.0;
            } else if (xrank_data[k] > 0.0) {
              mady = 1.0;
            } else if (xrank_data[k] == 0.0) {
              mady = 0.0;
            }
            xrank_data[k] = mady;
          }
          nx = outy->size[0];
          for (j = 0; j < 2; j++) {
            coffset = j << 1;
            boffset = j * outy->size[0];
            rr[coffset] = 0.0;
            rr[coffset + 1] = 0.0;
            for (k = 0; k < nx; k++) {
              mady = xrank_data[boffset + k];
              rr[coffset] += xrank_data[k] * mady;
              rr[coffset + 1] += xrank_data[outy->size[0] + k] * mady;
            }
          }
          rr[2] /= sqrt(rr[0] * rr[3]);
          Tx = rr[2];
        } else if (b_robscale == 4.0) {
          /*  r is based on the tetracoric correlation */
          coffset = Y->size[0];
          if (Y->size[0] == y->size[0]) {
            j = yrank->size[0];
            yrank->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(yrank, j);
            biv_data = yrank->data;
            for (j = 0; j < coffset; j++) {
              biv_data[j] = (Y_data[j + Y->size[0] * ((int)b_jl - 1)] - Tx) *
                            (y_data[j] - Ty);
            }
          } else {
            nf_binary_expand_op(yrank, Y, b_jl, Tx, y, Ty);
            biv_data = yrank->data;
          }
          nx = yrank->size[0];
          for (k = 0; k < nx; k++) {
            mady = biv_data[k];
            if (biv_data[k] < 0.0) {
              mady = -1.0;
            } else if (biv_data[k] > 0.0) {
              mady = 1.0;
            } else if (biv_data[k] == 0.0) {
              mady = 0.0;
            }
            biv_data[k] = mady;
          }
          Tx = blockedSummation(yrank, yrank->size[0]) / (double)n;
        } else {
          coffset = Y->size[0];
          j = Xs->size[0];
          Xs->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(Xs, j);
          Xs_data = Xs->data;
          for (j = 0; j < coffset; j++) {
            Xs_data[j] = Y_data[j + Y->size[0] * ((int)b_jl - 1)] - Tx;
          }
          mady = 0.0;
          coffset = Xs->size[0];
          for (j = 0; j < coffset; j++) {
            mady += Xs_data[j] * Xs_data[j];
          }
          mady = sqrt(mady / ((double)n - 1.0));
          /*  Sx is the unrobust standard deviation of x */
          coffset = Xs->size[0];
          for (j = 0; j < coffset; j++) {
            Xs_data[j] /= mady;
          }
          /*  standardization of x */
          coffset = y->size[0];
          j = Ys->size[0];
          Ys->size[0] = y->size[0];
          emxEnsureCapacity_real_T(Ys, j);
          Ys_data = Ys->data;
          for (j = 0; j < coffset; j++) {
            Ys_data[j] = (y_data[j] - Ty) / Sy;
          }
          /*  standardization of y */
          mady = 0.0;
          coffset = Xs->size[0];
          for (j = 0; j < coffset; j++) {
            mady += Xs_data[j] * Ys_data[j];
          }
          Tx = mady / ((double)n - 1.0);
          /*  r= unrobust correlation */
        }
        /*  Spearman's rho and Kendall's tau and tetracoric correlation */
        /*  are discrete-valued statistics, and */
        /*  their distributions have positive probability at 1 and -1. */
        /*  If their value is equal to 1 or -1 then artificially put the value
         * equal */
        /*  to 0.999 or -0.999 */
        if (Tx == 1.0) {
          Tx = 0.999;
        } else if (Tx == -1.0) {
          Tx = -0.999;
        }
        /*  Now we calculate Mahalanobis distances with centroid defined */
        /*  by medians */
        a = 2.0 * Tx;
        mady = Tx * Tx;
        /*  Create the vector of pseudoMahalanobis distances (based on the sum
         */
        /*  of each bivariate projection) */
        j = yrank->size[0];
        yrank->size[0] = Xs->size[0];
        emxEnsureCapacity_real_T(yrank, j);
        biv_data = yrank->data;
        coffset = Xs->size[0];
        for (j = 0; j < coffset; j++) {
          uq = Xs_data[j];
          biv_data[j] = uq * uq;
        }
        j = xrank->size[0];
        xrank->size[0] = Ys->size[0];
        emxEnsureCapacity_real_T(xrank, j);
        xrank_data = xrank->data;
        coffset = Ys->size[0];
        for (j = 0; j < coffset; j++) {
          uq = Ys_data[j];
          xrank_data[j] = uq * uq;
        }
        if (yrank->size[0] == 1) {
          nx = xrank->size[0];
        } else {
          nx = yrank->size[0];
        }
        if (Xs->size[0] == 1) {
          coffset = Ys->size[0];
        } else {
          coffset = Xs->size[0];
        }
        if ((yrank->size[0] == xrank->size[0]) &&
            (Xs->size[0] == Ys->size[0]) && (nx == coffset)) {
          coffset = yrank->size[0];
          for (j = 0; j < coffset; j++) {
            biv_data[j] =
                ((biv_data[j] + xrank_data[j]) - a * Xs_data[j] * Ys_data[j]) /
                (1.0 - mady);
          }
        } else {
          k_binary_expand_op(yrank, xrank, a, Xs, Ys, mady);
          biv_data = yrank->data;
        }
        nx = yrank->size[0];
        for (k = 0; k < nx; k++) {
          biv_data[k] = sqrt(biv_data[k]);
        }
        coffset = MDbiv->size[0];
        if (MDbiv->size[0] == yrank->size[0]) {
          for (j = 0; j < coffset; j++) {
            MDbiv_data[j] += biv_data[j];
          }
        } else {
          plus(MDbiv, yrank);
          MDbiv_data = MDbiv->data;
        }
        /*   Em  is the median  of vector E */
        mady = sqrt(2.0 * ((double)n - 1.0) / ((double)n - 2.0) *
                    finv(rf, (double)n - 2.0));
        /*  hinge=ellipse containing 50% of the values */
        /*  fence=ellipe containing (1-\alpha)% of the values */
        a = mady * sqrt((Tx + 1.0) / 2.0);
        uq = mady * sqrt((1.0 - Tx) / 2.0);
        for (j = 0; j < 3601; j++) {
          The1max[j] = a * dv[j];
          The2max[j] = uq * dv1[j];
        }
        /*  rotation of the coordinates */
        a = 1.0 / (mady * mady * (1.0 - Tx * Tx));
        mady = -Tx * a;
        rr[0] = a;
        rr[2] = mady;
        rr[1] = mady;
        rr[3] = a;
        eig(rr, aut);
        b_sort(aut);
        a_tmp = a - aut[1].re;
        Tx = a_tmp * (0.0 - aut[1].im);
        a_tmp = (a_tmp * a_tmp - (0.0 - aut[1].im) * (0.0 - aut[1].im)) +
                mady * mady;
        b_a.re = a_tmp;
        b_a.im = Tx + Tx;
        b_sqrt(&b_a);
        if (b_a.im == 0.0) {
          costh_re = mady / b_a.re;
          costh_im = 0.0;
        } else if (b_a.re == 0.0) {
          if (mady == 0.0) {
            costh_re = 0.0 / b_a.im;
            costh_im = 0.0;
          } else {
            costh_re = 0.0;
            costh_im = -(mady / b_a.im);
          }
        } else {
          ch_re = fabs(b_a.re);
          uq = fabs(b_a.im);
          if (ch_re > uq) {
            s = b_a.im / b_a.re;
            ch_re = b_a.re + s * b_a.im;
            costh_re = (mady + s * 0.0) / ch_re;
            costh_im = (0.0 - s * mady) / ch_re;
          } else if (uq == ch_re) {
            if (b_a.re > 0.0) {
              sgnbr = 0.5;
            } else {
              sgnbr = -0.5;
            }
            if (b_a.im > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            costh_re = (mady * sgnbr + 0.0 * s) / ch_re;
            costh_im = (0.0 * sgnbr - mady * s) / ch_re;
          } else {
            s = b_a.re / b_a.im;
            ch_re = b_a.im + s * b_a.re;
            costh_re = s * mady / ch_re;
            costh_im = (s * 0.0 - mady) / ch_re;
          }
        }
        b_a.re = a_tmp;
        b_a.im = Tx + Tx;
        b_sqrt(&b_a);
        mady = aut[1].re - a;
        if (b_a.im == 0.0) {
          if (aut[1].im == 0.0) {
            sinth.re = mady / b_a.re;
            sinth.im = 0.0;
          } else if (mady == 0.0) {
            sinth.re = 0.0;
            sinth.im = aut[1].im / b_a.re;
          } else {
            sinth.re = mady / b_a.re;
            sinth.im = aut[1].im / b_a.re;
          }
        } else if (b_a.re == 0.0) {
          if (mady == 0.0) {
            sinth.re = aut[1].im / b_a.im;
            sinth.im = 0.0;
          } else if (aut[1].im == 0.0) {
            sinth.re = 0.0;
            sinth.im = -(mady / b_a.im);
          } else {
            sinth.re = aut[1].im / b_a.im;
            sinth.im = -(mady / b_a.im);
          }
        } else {
          ch_re = fabs(b_a.re);
          uq = fabs(b_a.im);
          if (ch_re > uq) {
            s = b_a.im / b_a.re;
            ch_re = b_a.re + s * b_a.im;
            sinth.re = (mady + s * aut[1].im) / ch_re;
            sinth.im = (aut[1].im - s * mady) / ch_re;
          } else if (uq == ch_re) {
            if (b_a.re > 0.0) {
              sgnbr = 0.5;
            } else {
              sgnbr = -0.5;
            }
            if (b_a.im > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            sinth.re = (mady * sgnbr + aut[1].im * s) / ch_re;
            sinth.im = (aut[1].im * sgnbr - mady * s) / ch_re;
          } else {
            s = b_a.re / b_a.im;
            ch_re = b_a.im + s * b_a.re;
            sinth.re = (s * mady + aut[1].im) / ch_re;
            sinth.im = (s * aut[1].im - mady) / ch_re;
          }
        }
        /*  M is the orthogonal matrix which enables the rotation of the axes */
        M[0].re = costh_re;
        M[0].im = costh_im;
        M[2] = sinth;
        M[1].re = -sinth.re;
        M[1].im = -sinth.im;
        M[3].re = costh_re;
        M[3].im = costh_im;
        /*  fou = fires of the ellipse */
        if (aut[0].im == 0.0) {
          Tx = 1.0 / aut[0].re;
          a = 0.0;
        } else if (aut[0].re == 0.0) {
          Tx = 0.0;
          a = -(1.0 / aut[0].im);
        } else {
          ch_re = fabs(aut[0].re);
          uq = fabs(aut[0].im);
          if (ch_re > uq) {
            s = aut[0].im / aut[0].re;
            ch_re = aut[0].re + s * aut[0].im;
            Tx = (s * 0.0 + 1.0) / ch_re;
            a = (0.0 - s) / ch_re;
          } else if (uq == ch_re) {
            if (aut[0].re > 0.0) {
              sgnbr = 0.5;
            } else {
              sgnbr = -0.5;
            }
            if (aut[0].im > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            Tx = (sgnbr + 0.0 * s) / ch_re;
            a = (0.0 * sgnbr - s) / ch_re;
          } else {
            s = aut[0].re / aut[0].im;
            ch_re = aut[0].im + s * aut[0].re;
            Tx = s / ch_re;
            a = (s * 0.0 - 1.0) / ch_re;
          }
        }
        if (aut[1].im == 0.0) {
          uq = 1.0 / aut[1].re;
          mady = 0.0;
        } else if (aut[1].re == 0.0) {
          uq = 0.0;
          mady = -(1.0 / aut[1].im);
        } else {
          ch_re = fabs(aut[1].re);
          uq = fabs(aut[1].im);
          if (ch_re > uq) {
            s = aut[1].im / aut[1].re;
            ch_re = aut[1].re + s * aut[1].im;
            uq = (s * 0.0 + 1.0) / ch_re;
            mady = (0.0 - s) / ch_re;
          } else if (uq == ch_re) {
            if (aut[1].re > 0.0) {
              sgnbr = 0.5;
            } else {
              sgnbr = -0.5;
            }
            if (aut[1].im > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            uq = (sgnbr + 0.0 * s) / ch_re;
            mady = (0.0 * sgnbr - s) / ch_re;
          } else {
            s = aut[1].re / aut[1].im;
            ch_re = aut[1].im + s * aut[1].re;
            uq = s / ch_re;
            mady = (s * 0.0 - 1.0) / ch_re;
          }
        }
        fuo = sqrt(rt_hypotd_snf(Tx - uq, a - mady));
        /*  new1 = 2 x n matrix which contains the coordinates of the rotated
         * ellipse */
        for (j = 0; j < 3601; j++) {
          boffset = j << 1;
          Tx = The1max[j];
          mady = The2max[j];
          b_The1max[boffset].re = Tx + mady;
          b_The1max[boffset].im = 0.0;
          b_The1max[boffset + 1].re = Tx - mady;
          b_The1max[boffset + 1].im = 0.0;
        }
        for (j = 0; j < 2; j++) {
          mady = M[j].re;
          uq = M[j].im;
          Tx = M[j + 2].re;
          a = M[j + 2].im;
          for (boffset = 0; boffset < 3601; boffset++) {
            nx = boffset << 1;
            costh_im = b_The1max[nx].im;
            s = b_The1max[nx].re;
            ch_re = b_The1max[nx + 1].im;
            sgnbr = b_The1max[nx + 1].re;
            nx += j;
            new1[nx].re = (mady * s - uq * costh_im) + (Tx * sgnbr - a * ch_re);
            new1[nx].im = (mady * costh_im + uq * s) + (Tx * ch_re + a * sgnbr);
          }
        }
        /*  xnew = n x 1 vector which contains x coord. of rotated points */
        /*  ynew = n x 1 vector which contains y coord. of rotated points */
        for (j = 0; j < 3601; j++) {
          boffset = j << 1;
          xnew[j].re = new1[boffset].re;
          xnew[j].im = -new1[boffset].im;
          ynew[j].re = new1[boffset + 1].re;
          ynew[j].im = -new1[boffset + 1].im;
        }
        /*  new2 = 2 x n matrix which contains the coordinates of the rotated
         * points */
        j = b_Xs->size[0] * b_Xs->size[1];
        b_Xs->size[0] = 2;
        b_Xs->size[1] = Xs->size[0];
        emxEnsureCapacity_creal_T(b_Xs, j);
        b_Xs_data = b_Xs->data;
        coffset = Xs->size[0];
        for (j = 0; j < coffset; j++) {
          b_Xs_data[2 * j].re = Xs_data[j];
          b_Xs_data[2 * j].im = 0.0;
        }
        coffset = Ys->size[0];
        for (j = 0; j < coffset; j++) {
          boffset = 2 * j + 1;
          b_Xs_data[boffset].re = Ys_data[j];
          b_Xs_data[boffset].im = 0.0;
        }
        j = new2->size[0] * new2->size[1];
        new2->size[0] = 2;
        new2->size[1] = b_Xs->size[1];
        emxEnsureCapacity_creal_T(new2, j);
        new2_data = new2->data;
        coffset = b_Xs->size[1];
        for (j = 0; j < 2; j++) {
          for (boffset = 0; boffset < coffset; boffset++) {
            mady = M[j].re;
            uq = b_Xs_data[2 * boffset].im;
            Tx = M[j].im;
            a = b_Xs_data[2 * boffset].re;
            costh_im = M[j + 2].re;
            nx = 2 * boffset + 1;
            s = b_Xs_data[nx].im;
            ch_re = M[j + 2].im;
            sgnbr = b_Xs_data[nx].re;
            nx = j + 2 * boffset;
            new2_data[nx].re =
                (mady * a - Tx * uq) + (costh_im * sgnbr - ch_re * s);
            new2_data[nx].im =
                (mady * uq + Tx * a) + (costh_im * s + ch_re * sgnbr);
          }
        }
        /*  ch is the fixed distance of each point lying on the ellipse */
        sinth.re = ynew[9].re * ynew[9].re - ynew[9].im * ynew[9].im;
        mady = ynew[9].re * ynew[9].im;
        sinth.im = mady + mady;
        b_a.re = xnew[9].re + fuo;
        costh_re = xnew[9].re - fuo;
        sgnbr = xnew[9].im * xnew[9].im;
        Tx = b_a.re * b_a.re - sgnbr;
        costh_im = b_a.re * xnew[9].im;
        b_a.re = Tx + sinth.re;
        b_a.im = (costh_im + costh_im) + sinth.im;
        b_sqrt(&b_a);
        mady = costh_re * xnew[9].im;
        sinth.re += costh_re * costh_re - sgnbr;
        sinth.im += mady + mady;
        b_sqrt(&sinth);
        ch_re = b_a.re + sinth.re;
        /*  biv is the 1 x n vector which contains potential bivariate outliers
         */
        j = biv->size[0] * biv->size[1];
        biv->size[0] = 1;
        biv->size[1] = n;
        emxEnsureCapacity_real_T(biv, j);
        biv_data = biv->data;
        for (j = 0; j < n; j++) {
          biv_data[j] = 0.0;
        }
        for (coffset = 0; coffset < n; coffset++) {
          a_tmp = new2_data[2 * coffset].re;
          b_a.re = a_tmp + fuo;
          a = new2_data[2 * coffset].im;
          costh_re = a_tmp - fuo;
          sgnbr = a * a;
          Tx = b_a.re * b_a.re - sgnbr;
          costh_im = b_a.re * a;
          nx = 2 * coffset + 1;
          mady = new2_data[nx].re;
          uq = new2_data[nx].im;
          s = mady * mady - uq * uq;
          uq *= mady;
          uq += uq;
          b_a.re = Tx + s;
          b_a.im = (costh_im + costh_im) + uq;
          b_sqrt(&b_a);
          mady = costh_re * a;
          sinth.re = (costh_re * costh_re - sgnbr) + s;
          sinth.im = (mady + mady) + uq;
          b_sqrt(&sinth);
          if (b_a.re + sinth.re > ch_re) {
            biv_data[coffset]++;
          }
        }
        /*  bivT contains cumulative distribution of bivariate outliers */
        coffset = bivT->size[0];
        if (bivT->size[0] == biv->size[1]) {
          for (j = 0; j < coffset; j++) {
            bivT_data[j] += biv_data[j];
          }
        } else {
          j_binary_expand_op(bivT, biv);
          bivT_data = bivT->data;
        }
        /*  the following lines plot the hinge together with the fence */
      } else {
        /*  plotting part */
        /*  produce a vertical boxplot @ */
        /*  end of univariate part */
      }
      /*  endif of il=jl */
    }
    /*  endif of jl=1:v */
  }
  emxFree_creal_T(&b_Xs);
  emxFree_real_T(&b_Y);
  emxFree_uint8_T(&r2);
  emxFree_int32_T(&jj);
  emxFree_int32_T(&ii);
  emxFree_int32_T(&r1);
  emxFree_boolean_T(&r);
  emxFree_real_T(&biv);
  emxFree_creal_T(&new2);
  emxFree_real_T(&yrank);
  emxFree_real_T(&xrank);
  emxFree_real_T(&Xs);
  emxFree_real_T(&outy);
  emxFree_real_T(&datax);
  emxFree_real_T(&Ys);
  emxFree_real_T(&y);
  /*  endif of il=1:v */
  i = fre->size[0] * fre->size[1];
  fre->size[0] = seq->size[0];
  fre->size[1] = 4;
  emxEnsureCapacity_real_T(fre, i);
  biv_data = fre->data;
  coffset = seq->size[0];
  for (i = 0; i < coffset; i++) {
    biv_data[i] = seq_data[i];
  }
  emxFree_real_T(&seq);
  coffset = univT->size[0];
  for (i = 0; i < coffset; i++) {
    biv_data[i + fre->size[0]] = univT_data[i];
  }
  emxFree_real_T(&univT);
  coffset = bivT->size[0];
  for (i = 0; i < coffset; i++) {
    biv_data[i + fre->size[0] * 2] = bivT_data[i];
  }
  emxFree_real_T(&bivT);
  coffset = MDbiv->size[0];
  for (i = 0; i < coffset; i++) {
    biv_data[i + fre->size[0] * 3] = MDbiv_data[i];
  }
  emxFree_real_T(&MDbiv);
}

/* End of code generation (unibiv_wrapper.c) */
