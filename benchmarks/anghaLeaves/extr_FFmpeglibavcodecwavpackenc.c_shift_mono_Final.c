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
       0            big-arr-10x\n\
       1            empty\n\
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
typedef  int int32_t ;

/* Variables and functions */

__attribute__((used)) static void shift_mono(int32_t *samples, int nb_samples, int shift)
{
    int i;
    for (i = 0; i < nb_samples; i++)
        samples[i] >>= shift;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr-10x
    case 0:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 161
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 50
          // ------------------------------- 
          // static_instructions_O2 : 37
          // dynamic_instructions_O2 : 41
          // ------------------------------- 
          // static_instructions_O3 : 37
          // dynamic_instructions_O3 : 41
          // ------------------------------- 
          // static_instructions_Ofast : 37
          // dynamic_instructions_Ofast : 41
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 49
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 60
          // ------------------------------- 

          int nb_samples = 10;
        
          int shift = 10;
        
          int _len_samples0 = 100;
          int * samples = (int *) malloc(_len_samples0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_samples0; _i0++) {
            samples[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          shift_mono(samples,nb_samples,shift);
          free(samples);
        
        break;
    }


    // empty
    case 1:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int nb_samples = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int shift = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_samples0 = 1;
          int * samples = (int *) malloc(_len_samples0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_samples0; _i0++) {
            samples[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          shift_mono(samples,nb_samples,shift);
          free(samples);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
