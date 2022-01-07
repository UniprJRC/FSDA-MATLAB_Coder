#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "_utils.h"

/* Include files */
#include "FSMinvmmd_wrapper.h"

void r_fsminvmmd(double *MMD, int *nmmd, int *pmmd, 
            double *v, double *n,  double *MMDinv, 
            int *nn1, int *pp1)
{
    int i, loop_ub;
    
  

    // input matrices  
    emxArray_real_T *MMDinvIN;
    // emxArray_real_T *probvec;
   // emxArray_real_T *bsb;
   // emxArray_real_T *bsbsteps;
   

    // output matrices
    emxArray_real_T *MMDinvMat;
    //emxArray_real_T *Un;
    //emxArray_real_T *BB;
    
    /* Initialize function 'r_fsmmmd' input arguments. ==============================*/
   
    /* create matrices doing a shallow copy */
    MMDinvIN = argInit_matrix(MMD, nmmd, pmmd);           //  Initialize function input  argument 'MMDinvIN'  n x p
    MMDinvMat = argInit_matrix(MMDinv, nn1, pp1);         //  Initialize function output argument 'MMDinvMat' n x p
    
    
    /* Initialize function 'r_fsminvmmd' output arguments. ==============================*/

    /* create matrices doing a deep copy 
    NB: these arrays must be destroyed after copying them into 
    R arrays to free ram */
    //mmd = emxCreate_real_T(*nmmd, *pmmd);   //  Initialize function output argument 'mmd'

                      
              

    FSMinvmmd_wrapper(MMDinvIN, *v, *n, MMDinvMat);
    
   // some debug
    
 //   Rprintf("\n MMDinvMat dimensions: %d, %d \n", MMDinvMat->size[0], MMDinvMat->size[1]); 
  //  disp_lmat_cm(MMDinvMat->data, MMDinvMat->size[0], MMDinvMat->size[1]);
    

    // Copy the output matrix MMDenvMat
   
    loop_ub = MMDinvMat->size[0] * MMDinvMat->size[1];
    for(i=0; i < loop_ub; i++) {
        MMDinv[i] = MMDinvMat->data[i];
    }
    

    
    // destroy the arrays
    // (not needed)
    
}

