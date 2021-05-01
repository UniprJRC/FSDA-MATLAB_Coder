/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * quickselectFS.c
 *
 * Code generation for function 'quickselectFS'
 *
 */

/* Include files */
#include "quickselectFS.h"
#include "FSM_wrapper_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
double quickselectFS(emxArray_real_T *A, double k, double kiniindex)
{
  double Ak;
  double d;
  double pivot;
  int b_i;
  unsigned int c_i;
  int i;
  int left;
  int right;
  /* quickselectFS finds the k-th order statistic */
  /*  */
  /* <a href="matlab: docsearchFS('quickselectFS')">Link to the help
   * function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*    A:  a set of unique numbers. Vector. Vector containing a set of n */
  /*        (distinct) numbers. */
  /*                  Data Types - double */
  /*    k:  order statistic index. Scalar. An integer between 1 and n indicating
   * the */
  /*        desired order statistic. */
  /*                  Data Types - double */
  /*  */
  /*  */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*   kiniindex: Index of an element in A. Scalar. */
  /*       The index of an element in A that is supposed to be "close" */
  /*       to the desired k-th order statistic. This information is used to */
  /*       choose the pivot so that the chance to fall into the worst case */
  /*       performance ($O(n^2)$) is minimized and the average case performance
   */
  /*       is maximized. */
  /*       Example - 'kiniindex',1  */
  /*       Data Types - double */
  /*  */
  /*  Output: */
  /*  */
  /*  kE : k-th order statistic. Scalar. Element in A that is larger than
   * exactly k - 1 other elements of A. */
  /*  */
  /*  Optional Output: */
  /*      */
  /*     Asor   : Sorted input. Vector. Input vector A sorted. */
  /*  */
  /*  See also:  FSMmmd */
  /*  */
  /*  References: */
  /*  */
  /*  Riani, M., Perrotta, D. and Cerioli, A. (2015), The Forward Search for */
  /*  Very Large Datasets, "Journal of Statistical Software" */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('quickselectFS')">Link to the help page for
   * this function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
  /* { */
  /*     %% quickselectFS with all default options. */
  /*     n=200; */
  /*     Y=randn(n,1); */
  /*     k=10; */
  /*     [out]=quickselectFS(Y,k); */
  /*     % Check the result */
  /*     sorY=sort(Y); */
  /*     disp([out,sorY(k)]) */
  /* } */
  /* { */
  /*     %% quickselectFS with kiniindex supplied. */
  /*     n=200; */
  /*     Y=randn(n,1); */
  /*     k=10; */
  /*     % kiniindex is supplied  */
  /*     [out]=quickselectFS(Y,k,20); */
  /*     % Check the result */
  /*     sorY=sort(Y); */
  /*     disp([out,sorY(k)]) */
  /* } */
  /* { */
  /*     %% quickselectFS with two output arguments. */
  /*     n=10; */
  /*     Y=randn(n,1); */
  /*     k=3; */
  /*     % kiniindex is supplied  */
  /*     [out,Ysor]=quickselectFS(Y,k); */
  /*     % Check the result */
  /*     disp([Y, Ysor]) */
  /* } */
  /*  Beginning of code */
  /*  Initialise the two sentinels */
  left = 0;
  right = A->size[0] - 1;
  /*  if we know that element in position kiniindex is "close" to the desired
   * order */
  /*  statistic k, than swap A(k) and A(kiniindex). */
  Ak = A->data[(int)k - 1];
  A->data[(int)k - 1] = A->data[(int)kiniindex - 1];
  A->data[(int)kiniindex - 1] = Ak;
  /*  pivot is chosen at fixed position k.  */
  Ak = -999.0;
  while (Ak != k) {
    /* while ((left < right) && (position ~= k)) */
    pivot = A->data[(int)k - 1];
    /*  Swap right sentinel and pivot element */
    A->data[(int)k - 1] = A->data[right];
    A->data[right] = pivot;
    Ak = left + 1;
    i = right - left;
    for (b_i = 0; b_i <= i; b_i++) {
      c_i = ((unsigned int)left + b_i) + 1U;
      d = A->data[(int)c_i - 1];
      if (d < pivot) {
        /*  Swap A(i) with A(position)! */
        /*  A([i,position])=A([position,i]) would be more elegant but slower */
        A->data[(int)c_i - 1] = A->data[(int)Ak - 1];
        A->data[(int)Ak - 1] = d;
        Ak++;
      }
    }
    /*  Swap A(right) with A(position) */
    A->data[right] = A->data[(int)Ak - 1];
    A->data[(int)Ak - 1] = pivot;
    if (Ak < k) {
      left = (int)Ak;
    } else {
      /*  this is 'elseif pos > k' as pos == k cannot hold (see 'while') */
      right = (int)Ak - 2;
    }
    /*  Pivot: extension to random choice has to be studied. */
    /* pivotIndex = ceil(( left + right ) / 2); */
  }
  return A->data[(int)k - 1];
}

/* End of code generation (quickselectFS.c) */
