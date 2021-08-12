/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * setdiffFS.c
 *
 * Code generation for function 'setdiffFS'
 *
 */

/* Include files */
#include "setdiffFS.h"
#include "find.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "minOrMax.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void setdiffFS(const emxArray_real_T *a, const emxArray_real_T *b,
               emxArray_real_T *c)
{
  emxArray_boolean_T *aT;
  emxArray_boolean_T *bT;
  emxArray_int32_T *r;
  emxArray_real_T *b_a;
  double ma;
  int i;
  int loop_ub;
  bool varargin_1;
  bool varargin_2;
  emxInit_real_T(&b_a, 1);
  /* setdiffFS finds the positive integers in a which are not present in the
   * positive integers in b */
  /*  */
  /*  This is a faster special case of function setdiff when */
  /*  both vectors in a and b just contain positive integer numbers. */
  /*  */
  /* <a href="matlab: docsearchFS('setdiffFS')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*     a:         vector containing positive integer elements. Vector. A */
  /*                vector of length na containing positive integer numbers. */
  /*  */
  /*     b:         vector containing positive integer elements. Vector. A */
  /*                vector of length nb containing positive integer numbers. */
  /*  */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  */
  /*  Output: */
  /*  */
  /*     c:         vector containing positive integer elements thare are on a
   * but not in b. */
  /*                Column vector.  */
  /*                Note that the elements of c contain no repetitions and are
   * sorted. */
  /*  */
  /*  */
  /*  See also: setdiff */
  /*  */
  /*  References: */
  /*  */
  /*  */
  /*  Riani, M., Perrotta, D. and Cerioli, A. (2015), The Forward Search for */
  /*  Very Large Datasets, "Journal of Statistical Software" */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('setdiffFS')">Link to the help page for this
   * function</a> */
  /*  */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     %% Example of use of setdiffFS. */
  /*     % Define two vectors (containing positive integers) with values in */
  /*     % common. */
  /*     A = [3 6 2 1 5 1 1];  */
  /*     B = [2 4 6]; */
  /*     C=setdiffFS(A,B); */
  /*     disp(C); */
  /* } */
  /* { */
  /*     % Time comparison with setdiff. */
  /*     % 20000 calls to setdiff and to setdiffFS. */
  /*     % Analysis of computational time. */
  /*     n=100; */
  /*     nsimul=20000; */
  /*     tSETDIFF=0; */
  /*     tSETDIFFFS=0; */
  /*     for j=1:nsimul */
  /*         a=randi(n,[300,1]); */
  /*         b=randi(n,[40,1]); */
  /*  */
  /*         tsetdiff = tic; */
  /*         c=setdiff(a,b); */
  /*         tSETDIFF = tSETDIFF + toc(tsetdiff); */
  /*  */
  /*         tsetdiffFS = tic; */
  /*         cFS=setdiffFS(a,b); */
  /*         tSETDIFFFS = tSETDIFFFS + toc(tsetdiffFS); */
  /*  */
  /*         if ~isequal(c,cFS) */
  /*             error('FSDA:setdiffFS:WrongOutput','c and cFS are different')
   */
  /*         end */
  /*  */
  /*     end */
  /*  */
  /*     disp(array2table([tSETDIFF tSETDIFFFS],'VariableNames',{'setdiff time'
   * 'setdiffFS time'})) */
  /* } */
  /*  Beginning of code */
  i = b_a->size[0];
  b_a->size[0] = a->size[0] + b->size[0];
  emxEnsureCapacity_real_T(b_a, i);
  loop_ub = a->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_a->data[i] = a->data[i];
  }
  loop_ub = b->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_a->data[i + a->size[0]] = b->data[i];
  }
  emxInit_boolean_T(&aT, 1);
  ma = b_maximum(b_a);
  loop_ub = (int)b_maximum(b_a);
  i = aT->size[0];
  aT->size[0] = (int)ma;
  emxEnsureCapacity_boolean_T(aT, i);
  emxFree_real_T(&b_a);
  for (i = 0; i < loop_ub; i++) {
    aT->data[i] = false;
  }
  emxInit_boolean_T(&bT, 1);
  i = bT->size[0];
  bT->size[0] = (int)ma;
  emxEnsureCapacity_boolean_T(bT, i);
  for (i = 0; i < loop_ub; i++) {
    bT->data[i] = false;
  }
  emxInit_int32_T(&r, 1);
  i = r->size[0];
  r->size[0] = a->size[0];
  emxEnsureCapacity_int32_T(r, i);
  loop_ub = a->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (int)a->data[i];
  }
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    aT->data[r->data[i] - 1] = true;
  }
  i = r->size[0];
  r->size[0] = b->size[0];
  emxEnsureCapacity_int32_T(r, i);
  loop_ub = b->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (int)b->data[i];
  }
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    bT->data[r->data[i] - 1] = true;
  }
  /*  c = vector containing numbers which are inside vector a which are not
   * present in b */
  /*  Elements in c are sorted and contain no repetitions */
  loop_ub = aT->size[0];
  for (i = 0; i < loop_ub; i++) {
    varargin_1 = aT->data[i];
    varargin_2 = !bT->data[i];
    aT->data[i] = (varargin_1 && varargin_2);
  }
  emxFree_boolean_T(&bT);
  b_eml_find(aT, r);
  i = c->size[0];
  c->size[0] = r->size[0];
  emxEnsureCapacity_real_T(c, i);
  loop_ub = r->size[0];
  emxFree_boolean_T(&aT);
  for (i = 0; i < loop_ub; i++) {
    c->data[i] = r->data[i];
  }
  emxFree_int32_T(&r);
  /*  The instruction above is faster than the one below */
  /*  c=find(aT & ~bT); */
}

/* End of code generation (setdiffFS.c) */
