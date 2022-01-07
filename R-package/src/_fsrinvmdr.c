#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "_utils.h"

/* Include files */
#include "FSRinvmdr_wrapper.h"

void r_fsrinvmdr(double *MDR, int *nmdr, int *pmdr, 
            double *p, double *n,  double *MDRinv, 
            int *nn1, int *pp1)
{
    int i, loop_ub;
    
  

    // input matrices  
    emxArray_real_T *MDRinvIN;
    // emxArray_real_T *probvec;
   // emxArray_real_T *bsb;
   // emxArray_real_T *bsbsteps;
   

    // output matrices
    emxArray_real_T *MDRinvMat;
    //emxArray_real_T *Un;
    //emxArray_real_T *BB;
    
    /* Initialize function 'r_fsmmmd' input arguments. ==============================*/
   
    /* create matrices doing a shallow copy */
    MDRinvIN = argInit_matrix(MDR, nmdr, pmdr);           //  Initialize function input  argument 'MMDinvIN'  n x p
    MDRinvMat = argInit_matrix(MDRinv, nn1, pp1);         //  Initialize function output argument 'MMDinvMat' n x p
    
    
    /* Initialize function 'r_fsminvmmd' output arguments. ==============================*/

    /* create matrices doing a deep copy 
    NB: these arrays must be destroyed after copying them into 
    R arrays to free ram */
    //mmd = emxCreate_real_T(*nmmd, *pmmd);   //  Initialize function output argument 'mmd'

                      
              

    FSRinvmdr_wrapper(MDRinvIN, *p, *n, MDRinvMat);
    
   // some debug
    /*
    Rprintf("\n MMDenvMat dimensions: %d, %d \n", MMDenvMat->size[0], MMDenvMat->size[1]); 
    disp_lmat_cm(MMDenvMat->data, MMDenvMat->size[0], MMDenvMat->size[1]);
    */

    // Copy the output matrix MMDenvMat
   
    loop_ub = MDRinvMat->size[0] * MDRinvMat->size[1];
    for(i=0; i < loop_ub; i++) {
        MDRinv[i] = MDRinvMat->data[i];
    }
    

    
    // destroy the arrays
    // (not needed)
    
}

