// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
typedef  double REAL ;

/* Variables and functions */

void matgen (REAL a[], int lda, int n, REAL b[], REAL *norma)


/* We would like to declare a[][lda], but c does not allow it.  In this
function, references to a[i][j] are written a[lda*i+j].  */

{
        int init, i, j;

        init = 1325;
        *norma = 0.0;
        for (j = 0; j < n; j++) {
                for (i = 0; i < n; i++) {
                        init = 3125*init % 65536;
                        a[lda*j+i] = (init - 32768.0)/16384.0;                        
                        *norma = (a[lda*j+i] > *norma) ? a[lda*j+i] : *norma;
                        
                        /* alternative for some compilers
                        if (fabs(a[lda*j+i]) > *norma) *norma = fabs(a[lda*j+i]);
                        */
                }
        }
        for (i = 0; i < n; i++) {
          b[i] = 0.0;
        }
        for (j = 0; j < n; j++) {
                for (i = 0; i < n; i++) {
                        b[i] = b[i] + a[lda*j+i];
                }
        }
        return;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 110
          // dynamic_instructions_O0 : 3715430
          // ------------------------------- 
          // static_instructions_O1 : 81
          // dynamic_instructions_O1 : 1629237
          // ------------------------------- 
          // static_instructions_O2 : 164
          // dynamic_instructions_O2 : 1402814
          // ------------------------------- 
          // static_instructions_O3 : 164
          // dynamic_instructions_O3 : 1402814
          // ------------------------------- 
          // static_instructions_Ofast : 164
          // dynamic_instructions_Ofast : 1402814
          // ------------------------------- 
          // static_instructions_Os : 72
          // dynamic_instructions_Os : 1628212
          // ------------------------------- 
          // static_instructions_Oz : 62
          // dynamic_instructions_Oz : 1370910
          // ------------------------------- 

          int lda = 255;
        
          int n = 255;
        
          int _len_a0 = 65025;
          double * a = (double *) malloc(_len_a0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_b0 = 65025;
          double * b = (double *) malloc(_len_b0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_norma0 = 65025;
          double * norma = (double *) malloc(_len_norma0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_norma0; _i0++) {
            norma[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          matgen(a,lda,n,b,norma);
          free(a);
          free(b);
          free(norma);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 110
          // dynamic_instructions_O0 : 6090
          // ------------------------------- 
          // static_instructions_O1 : 81
          // dynamic_instructions_O1 : 2682
          // ------------------------------- 
          // static_instructions_O2 : 149
          // dynamic_instructions_O2 : 2669
          // ------------------------------- 
          // static_instructions_O3 : 149
          // dynamic_instructions_O3 : 2669
          // ------------------------------- 
          // static_instructions_Ofast : 149
          // dynamic_instructions_Ofast : 2669
          // ------------------------------- 
          // static_instructions_Os : 72
          // dynamic_instructions_Os : 2637
          // ------------------------------- 
          // static_instructions_Oz : 62
          // dynamic_instructions_Oz : 2340
          // ------------------------------- 

          int lda = 10;
        
          int n = 10;
        
          int _len_a0 = 100;
          double * a = (double *) malloc(_len_a0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_b0 = 100;
          double * b = (double *) malloc(_len_b0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_norma0 = 100;
          double * norma = (double *) malloc(_len_norma0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_norma0; _i0++) {
            norma[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          matgen(a,lda,n,b,norma);
          free(a);
          free(b);
          free(norma);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 28
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 30
          // ------------------------------- 

          int lda = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_a0 = 1;
          double * a = (double *) malloc(_len_a0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_b0 = 1;
          double * b = (double *) malloc(_len_b0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_norma0 = 1;
          double * norma = (double *) malloc(_len_norma0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_norma0; _i0++) {
            norma[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          matgen(a,lda,n,b,norma);
          free(a);
          free(b);
          free(norma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
