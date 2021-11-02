#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "_utils.h"

/* Include files */
#include "FSMenvmmd_wrapper.h"

void r_fsmenvmmd(double *nn, double *vv, double *init, 
            double *prob, int *pprob, 
            int *scaled, double *MMDenv, 
            int *nn1, int *pp1)
{
    int i, loop_ub;
    
    bool b_scaled = *scaled != 0;
    const int probrows = 1;
    const int *nprob;
    nprob = &probrows;

    // input matrices  
    emxArray_real_T *probvec;
   // emxArray_real_T *bsb;
   // emxArray_real_T *bsbsteps;
   

    // output matrices
    emxArray_real_T *MMDenvMat;
    //emxArray_real_T *Un;
    //emxArray_real_T *BB;
    
    /* Initialize function 'r_fsmmmd' input arguments. ==============================*/
    
    /* create matrices doing a shallow copy */
    MMDenvMat = argInit_matrix(MMDenv, nn1, pp1);         //  Initialize function input argument 'MMDenvMat' n x p
    probvec = argInit_matrix(prob, nprob, pprob);       //  Initialize function input argument 'probvec' 1 x p
    
    /* Initialize function 'r_fsmmmd' output arguments. ==============================*/

    /* create matrices doing a deep copy 
    NB: these arrays must be destroyed after copying them into 
    R arrays to free ram */
    //mmd = emxCreate_real_T(*nmmd, *pmmd);   //  Initialize function output argument 'mmd'

                      
              

    FSMenvmmd_wrapper(*nn, *vv, *init, probvec, b_scaled, MMDenvMat);
    
   // some debug
    /*
    Rprintf("\n MMDenvMat dimensions: %d, %d \n", MMDenvMat->size[0], MMDenvMat->size[1]); 
    disp_lmat_cm(MMDenvMat->data, MMDenvMat->size[0], MMDenvMat->size[1]);
    */

    // Copy the output matrix MMDenvMat
   
    loop_ub = MMDenvMat->size[0] * MMDenvMat->size[1];
    for(i=0; i < loop_ub; i++) {
        MMDenv[i] = MMDenvMat->data[i];
    }
    

    
    // destroy the arrays
    // (not needed)
    
}

