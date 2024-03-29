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
struct mp_audio_buffer {double num_samples; scalar_t__ srate; } ;

/* Variables and functions */

double mp_audio_buffer_seconds(struct mp_audio_buffer *ab)
{
    return ab->num_samples / (double)ab->srate;
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
          int _len_ab0 = 65025;
          struct mp_audio_buffer * ab = (struct mp_audio_buffer *) malloc(_len_ab0*sizeof(struct mp_audio_buffer));
          for(int _i0 = 0; _i0 < _len_ab0; _i0++) {
              ab[_i0].num_samples = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          ab[_i0].srate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          double benchRet = mp_audio_buffer_seconds(ab);
          printf("%lf\n", benchRet); 
          free(ab);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ab0 = 100;
          struct mp_audio_buffer * ab = (struct mp_audio_buffer *) malloc(_len_ab0*sizeof(struct mp_audio_buffer));
          for(int _i0 = 0; _i0 < _len_ab0; _i0++) {
              ab[_i0].num_samples = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          ab[_i0].srate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          double benchRet = mp_audio_buffer_seconds(ab);
          printf("%lf\n", benchRet); 
          free(ab);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_ab0 = 1;
          struct mp_audio_buffer * ab = (struct mp_audio_buffer *) malloc(_len_ab0*sizeof(struct mp_audio_buffer));
          for(int _i0 = 0; _i0 < _len_ab0; _i0++) {
              ab[_i0].num_samples = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          ab[_i0].srate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          double benchRet = mp_audio_buffer_seconds(ab);
          printf("%lf\n", benchRet); 
          free(ab);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
