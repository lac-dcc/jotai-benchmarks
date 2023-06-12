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
typedef  int uint8_t ;
typedef  int uint32_t ;
typedef  int uint16_t ;

/* Variables and functions */

__attribute__((used)) static void renew_table3(uint32_t nsym, uint32_t *cntsum,
                         uint16_t *freqs, uint16_t *freqs1,
                         uint16_t *cnts, uint8_t *dectab)
{
    uint32_t a = 0, b = 4096 / nsym, c = b - (b >> 1);

    *cntsum = c * nsym;

    for (int d = 0; d < nsym; d++) {
        freqs[d] = b;
        freqs1[d] = a;
        cnts[d] = c;
        for (int q = a + 128 - 1 >> 7, f = (a + b - 1 >> 7) + 1; q < f; q++)
            dectab[q] = d;

        a += b;
    }
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
          // static_instructions_O0 : 69
          // dynamic_instructions_O0 : 9560
          // ------------------------------- 
          // static_instructions_O1 : 50
          // dynamic_instructions_O1 : 3885
          // ------------------------------- 
          // static_instructions_O2 : 66
          // dynamic_instructions_O2 : 4025
          // ------------------------------- 
          // static_instructions_O3 : 66
          // dynamic_instructions_O3 : 4025
          // ------------------------------- 
          // static_instructions_Ofast : 66
          // dynamic_instructions_Ofast : 4025
          // ------------------------------- 
          // static_instructions_Os : 47
          // dynamic_instructions_Os : 3820
          // ------------------------------- 
          // static_instructions_Oz : 46
          // dynamic_instructions_Oz : 4777
          // ------------------------------- 

          int nsym = 255;
        
          int _len_cntsum0 = 65025;
          int * cntsum = (int *) malloc(_len_cntsum0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cntsum0; _i0++) {
            cntsum[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_freqs0 = 65025;
          int * freqs = (int *) malloc(_len_freqs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_freqs0; _i0++) {
            freqs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_freqs10 = 65025;
          int * freqs1 = (int *) malloc(_len_freqs10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_freqs10; _i0++) {
            freqs1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_cnts0 = 65025;
          int * cnts = (int *) malloc(_len_cnts0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cnts0; _i0++) {
            cnts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dectab0 = 65025;
          int * dectab = (int *) malloc(_len_dectab0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dectab0; _i0++) {
            dectab[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          renew_table3(nsym,cntsum,freqs,freqs1,cnts,dectab);
          free(cntsum);
          free(freqs);
          free(freqs1);
          free(cnts);
          free(dectab);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 69
          // dynamic_instructions_O0 : 740
          // ------------------------------- 
          // static_instructions_O1 : 50
          // dynamic_instructions_O1 : 345
          // ------------------------------- 
          // static_instructions_O2 : 66
          // dynamic_instructions_O2 : 397
          // ------------------------------- 
          // static_instructions_O3 : 66
          // dynamic_instructions_O3 : 397
          // ------------------------------- 
          // static_instructions_Ofast : 66
          // dynamic_instructions_Ofast : 397
          // ------------------------------- 
          // static_instructions_Os : 47
          // dynamic_instructions_Os : 324
          // ------------------------------- 
          // static_instructions_Oz : 46
          // dynamic_instructions_Oz : 367
          // ------------------------------- 

          int nsym = 10;
        
          int _len_cntsum0 = 100;
          int * cntsum = (int *) malloc(_len_cntsum0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cntsum0; _i0++) {
            cntsum[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_freqs0 = 100;
          int * freqs = (int *) malloc(_len_freqs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_freqs0; _i0++) {
            freqs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_freqs10 = 100;
          int * freqs1 = (int *) malloc(_len_freqs10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_freqs10; _i0++) {
            freqs1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_cnts0 = 100;
          int * cnts = (int *) malloc(_len_cnts0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cnts0; _i0++) {
            cnts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dectab0 = 100;
          int * dectab = (int *) malloc(_len_dectab0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dectab0; _i0++) {
            dectab[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          renew_table3(nsym,cntsum,freqs,freqs1,cnts,dectab);
          free(cntsum);
          free(freqs);
          free(freqs1);
          free(cnts);
          free(dectab);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 24
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 28
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 24
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 27
          // ------------------------------- 

          int nsym = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_cntsum0 = 1;
          int * cntsum = (int *) malloc(_len_cntsum0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cntsum0; _i0++) {
            cntsum[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_freqs0 = 1;
          int * freqs = (int *) malloc(_len_freqs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_freqs0; _i0++) {
            freqs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_freqs10 = 1;
          int * freqs1 = (int *) malloc(_len_freqs10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_freqs10; _i0++) {
            freqs1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_cnts0 = 1;
          int * cnts = (int *) malloc(_len_cnts0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cnts0; _i0++) {
            cnts[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dectab0 = 1;
          int * dectab = (int *) malloc(_len_dectab0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dectab0; _i0++) {
            dectab[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          renew_table3(nsym,cntsum,freqs,freqs1,cnts,dectab);
          free(cntsum);
          free(freqs);
          free(freqs1);
          free(cnts);
          free(dectab);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
