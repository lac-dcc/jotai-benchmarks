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
typedef  scalar_t__ INTFLOAT ;

/* Variables and functions */

__attribute__((used)) static void sbr_sum64x5_c(INTFLOAT *z)
{
    int k;
    for (k = 0; k < 64; k++) {
        INTFLOAT f = z[k] + z[k + 64] + z[k + 128] + z[k + 192] + z[k + 256];
        z[k] = f;
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
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 2184
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 582
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 422
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 422
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 422
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 421
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 647
          // ------------------------------- 

          int _len_z0 = 65025;
          long * z = (long *) malloc(_len_z0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_z0; _i0++) {
            z[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          sbr_sum64x5_c(z);
          free(z);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
