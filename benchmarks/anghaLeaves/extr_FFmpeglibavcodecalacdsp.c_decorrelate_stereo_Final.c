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
       0            empty\n\
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

__attribute__((used)) static void decorrelate_stereo(int32_t *buffer[2], int nb_samples,
                               int decorr_shift, int decorr_left_weight)
{
    int i;

    for (i = 0; i < nb_samples; i++) {
        int32_t a, b;

        a = buffer[0][i];
        b = buffer[1][i];

        a -= (b * decorr_left_weight) >> decorr_shift;
        b += a;

        buffer[0][i] = b;
        buffer[1][i] = a;
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


    // empty
    case 0:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int nb_samples = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int decorr_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int decorr_left_weight = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_buffer0 = 2;
          int ** buffer = (int **) malloc(_len_buffer0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            int _len_buffer1 = 1;
            buffer[_i0] = (int *) malloc(_len_buffer1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_buffer1; _i1++) {
              buffer[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        
          decorrelate_stereo(buffer,nb_samples,decorr_shift,decorr_left_weight);
          for(int i1 = 0; i1 < _len_buffer0; i1++) {
              free(buffer[i1]);
          }
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
