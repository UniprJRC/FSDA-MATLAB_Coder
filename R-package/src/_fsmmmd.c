#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "_utils.h"

/* Include files */
#include "FSMmmd_wrapper.h"

void r_fsmmmd(double *YY, int *nn, int *pp, 
            double *xbsb, int *nbsb, 
            double *xbsbsteps, int *nbsbsteps, 
            double *init, int *msg, int *nocheck,
            double *xmmd, int *nmmd, int *pmmd, 
            double *xUn, int *nUn, int *pUn, 
            double *xBB, int *nBB, int *pBB)
{
    int i, loop_ub;
    
    bool b_msg = *msg != 0;
    bool b_nocheck = *nocheck != 0;
 
    // input matrices  
    emxArray_real_T *Y;
    emxArray_real_T *bsb;
    emxArray_real_T *bsbsteps;
   

    // output matrices
    emxArray_real_T *mmd;
    emxArray_real_T *Un;
    emxArray_real_T *BB;
    
    /* Initialize function 'r_fsmmmd' input arguments. ==============================*/
    
    /* create matrices doing a shallow copy */
    Y = argInit_matrix(YY, nn, pp);         //  Initialize function input argument 'YY'
    bsb = argInit_vector(xbsb, nbsb);       //  Initialize function input argument 'bsb'
    bsbsteps = argInit_vector(xbsbsteps, nbsbsteps);        //  Initialize function input argument 'bsbsteps'

    /* Initialize function 'r_fsmmmd' output arguments. ==============================*/

    /* create matrices doing a deep copy 
    NB: these arrays must be destroyed after copying them into 
    R arrays to free ram */
    mmd = emxCreate_real_T(*nmmd, *pmmd);   //  Initialize function output argument 'mmd'
    Un = emxCreate_real_T(*nUn, *pUn);      //  Initialize function output argument 'Un'
    BB = emxCreate_real_T(*nBB, *pBB);     //  Initialize function input argument 'BB'
                      
              

    FSMmmd_wrapper(Y, bsb, bsbsteps, *init, b_msg, b_nocheck, mmd, Un, BB);
    

    
    // Copy the output matrices mdr, Un and BB
    
    *nmmd = mmd->size[0];
    *pmmd = mmd->size[1];
    loop_ub = mmd->size[0] * mmd->size[1];
    for(i=0; i < loop_ub; i++) {
        xmmd[i] = mmd->data[i];
    }
    

    *nUn = Un->size[0];
    *pUn = Un->size[1];
    loop_ub = Un->size[0] * Un->size[1];
    for(i=0; i < loop_ub; i++) {
        xUn[i] = Un->data[i];
    }

    *nBB = BB->size[0];
    *pBB = BB->size[1];
    loop_ub = BB->size[0] * BB->size[1];
    for(i=0; i < loop_ub; i++) {
        xBB[i] = BB->data[i];
    }

    
    // destroy the arrays
    emxDestroyArray_real_T(BB);
    emxDestroyArray_real_T(Un);
    emxDestroyArray_real_T(mmd);
}

