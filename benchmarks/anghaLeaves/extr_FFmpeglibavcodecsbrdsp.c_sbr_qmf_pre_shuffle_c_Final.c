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
union av_intfloat32 {unsigned int i; } ;

/* Variables and functions */

__attribute__((used)) static void sbr_qmf_pre_shuffle_c(float *z)
{
    union av_intfloat32 *zi = (union av_intfloat32*) z;
    int k;
    zi[64].i = zi[0].i;
    zi[65].i = zi[1].i;
    for (k = 1; k < 31; k += 2) {
        zi[64 + 2 * k + 0].i = zi[64 - k].i ^ (1U << 31);
        zi[64 + 2 * k + 1].i = zi[ k + 1].i;
        zi[64 + 2 * k + 2].i = zi[63 - k].i ^ (1U << 31);
        zi[64 + 2 * k + 3].i = zi[ k + 2].i;
    }

    zi[64 + 2 * 31 + 0].i = zi[64 - 31].i ^ (1U << 31);
    zi[64 + 2 * 31 + 1].i = zi[31 +  1].i;
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
          // static_instructions_O0 : 81
          // dynamic_instructions_O0 : 867
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 226
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 226
          // ------------------------------- 
          // static_instructions_O3 : 161
          // dynamic_instructions_O3 : 161
          // ------------------------------- 
          // static_instructions_Ofast : 161
          // dynamic_instructions_Ofast : 161
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 224
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 259
          // ------------------------------- 

          int _len_z0 = 65025;
          float * z = (float *) malloc(_len_z0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_z0; _i0++) {
            z[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          sbr_qmf_pre_shuffle_c(z);
          free(z);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
