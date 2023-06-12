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
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static void mul_thrmat_c(int16_t *thr_adr_noq, int16_t *thr_adr, int q)
{
    int a;
    for (a = 0; a < 64; a++)
        thr_adr[a] = q * thr_adr_noq[a];
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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 842
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 390
          // ------------------------------- 
          // static_instructions_O2 : 137
          // dynamic_instructions_O2 : 137
          // ------------------------------- 
          // static_instructions_O3 : 137
          // dynamic_instructions_O3 : 137
          // ------------------------------- 
          // static_instructions_Ofast : 137
          // dynamic_instructions_Ofast : 137
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 389
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 455
          // ------------------------------- 

          int q = 255;
        
          int _len_thr_adr_noq0 = 65025;
          int * thr_adr_noq = (int *) malloc(_len_thr_adr_noq0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_thr_adr_noq0; _i0++) {
            thr_adr_noq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_thr_adr0 = 65025;
          int * thr_adr = (int *) malloc(_len_thr_adr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_thr_adr0; _i0++) {
            thr_adr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          mul_thrmat_c(thr_adr_noq,thr_adr,q);
          free(thr_adr_noq);
          free(thr_adr);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 842
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 390
          // ------------------------------- 
          // static_instructions_O2 : 137
          // dynamic_instructions_O2 : 137
          // ------------------------------- 
          // static_instructions_O3 : 137
          // dynamic_instructions_O3 : 137
          // ------------------------------- 
          // static_instructions_Ofast : 137
          // dynamic_instructions_Ofast : 137
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 389
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 455
          // ------------------------------- 

          int q = 10;
        
          int _len_thr_adr_noq0 = 100;
          int * thr_adr_noq = (int *) malloc(_len_thr_adr_noq0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_thr_adr_noq0; _i0++) {
            thr_adr_noq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_thr_adr0 = 100;
          int * thr_adr = (int *) malloc(_len_thr_adr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_thr_adr0; _i0++) {
            thr_adr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          mul_thrmat_c(thr_adr_noq,thr_adr,q);
          free(thr_adr_noq);
          free(thr_adr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
