#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "_utils.h"

/* Include files */
#include "FSRbsb_wrapper.h"

/*
    The parameters passed to MATLAB are:
    y, X, bsb, bsbsteps, init, intercept, msg, nocheck. 
        
    'intercept', 'msg' and 'nocheck' are bool, default to true, true and false,
    'init' is double

    The dimensions of y and x, n and p, are passed by R, by also the corrected by 
    the R version of chkinputR() function dimensions n1 and p1 are passed.
    
    The return values are the two matrices Un abd BB. The dimensions of 
    Un are n-init x 11 and of BB - n x either n-init+1 or length(bsbsteps),
    depending on wheather bsbsteps is provided or not. These dimensions are determined in R and passed to this C function.
    
    Please note, that 'n' used in the definition of the dimensions is 
    the 'n' returned by the function chkinpudtR(), i.e. it can be smaller 
    than n if missing values were present. 
*/

void r_fsrbsb(double *yy, double *xx, int *nn, int *pp, 
            double *xbsb, int *nbsb, 
            double *xbsbsteps, int *nbsbsteps,
            double *init, int *intercept, int *msg, int *nocheck,
            double *xUn, int *nUn, int *pUn, 
            double *xBB, int *nBB, int *pBB)
{
    int i, loop_ub;
    
    bool b_intercept = *intercept != 0;
    bool b_msg = *msg != 0;
    bool b_nocheck = *nocheck != 0;
   
    
    emxArray_real_T *y;
    emxArray_real_T *X;
    emxArray_real_T *bsb;
    emxArray_real_T *bsbsteps;
    emxArray_real_T *Un;
    emxArray_real32_T *BB;

    /* Initialize function 'r_fsrbsb' input arguments. ==============================*/
    
    y = argInit_vector(yy, nn);         //  Initialize function input argument 'y'  
    X = argInit_matrix(xx, nn, pp);     //  Initialize function input argument 'X'
    bsb = argInit_vector(xbsb, nbsb);   //  Initialize function input argument 'bsb'
    bsbsteps = argInit_vector(xbsbsteps, nbsbsteps);        //  Initialize function input argument 'bsbsteps'

    Un = emxCreate_real_T(*nUn, *pUn);      //  Initialize function output argument 'Un'
    BB =  emxCreate_real32_T(*nBB, *pBB);   //  Initialize function input argument 'BB'
                      
    FSRbsb_wrapper(y, X, bsb, bsbsteps, *init, b_intercept, b_msg, b_nocheck, Un, BB);
    
    if(Un->size[0] != *nUn || Un->size[1] != *pUn)
        Rprintf("\nWARNING: the size of output matrix Un changed: was %d, %d, now is %d, %d \n", *nUn, *pUn, Un->size[0], Un->size[1]); 
    if(BB->size[0] != *nBB || BB->size[1] != *pBB)
        Rprintf("\nWARNING: the size of output matrix BB changed: was %d, %d, now is %d, %d \n", *nBB, *pBB, BB->size[0], BB->size[1]); 

    // Copy the output matrices Un and BB
    loop_ub = Un->size[0] * Un->size[1];
    for(i=0; i < loop_ub; i++) {
        xUn[i] = Un->data[i];
    }

    loop_ub = BB->size[0] * BB->size[1];
    for(i=0; i < loop_ub; i++) {
        xBB[i] = BB->data[i];
    }

    emxDestroyArray_real32_T(BB);
    emxDestroyArray_real_T(Un);
}

