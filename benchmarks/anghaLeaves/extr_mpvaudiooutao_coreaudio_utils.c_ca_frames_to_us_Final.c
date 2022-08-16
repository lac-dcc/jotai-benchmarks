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
       0            int-bounds\n\
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
typedef  float uint32_t ;
struct ao {scalar_t__ samplerate; } ;
typedef  float int64_t ;

/* Variables and functions */

int64_t ca_frames_to_us(struct ao *ao, uint32_t frames)
{
    return frames / (float) ao->samplerate * 1e6;
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          float frames = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_ao0 = 1;
          struct ao * ao = (struct ao *) malloc(_len_ao0*sizeof(struct ao));
          for(int _i0 = 0; _i0 < _len_ao0; _i0++) {
            ao[_i0].samplerate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          float benchRet = ca_frames_to_us(ao,frames);
          printf("%f\n", benchRet); 
          free(ao);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          float frames = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_ao0 = 100;
          struct ao * ao = (struct ao *) malloc(_len_ao0*sizeof(struct ao));
          for(int _i0 = 0; _i0 < _len_ao0; _i0++) {
            ao[_i0].samplerate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          float benchRet = ca_frames_to_us(ao,frames);
          printf("%f\n", benchRet); 
          free(ao);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
