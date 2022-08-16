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
struct usX2Ydev {int rate; } ;
struct snd_pcm_runtime {int buffer_size; } ;

/* Variables and functions */

__attribute__((used)) static inline int usX2Y_iso_frames_per_buffer(struct snd_pcm_runtime *runtime,
					      struct usX2Ydev * usX2Y)
{
	return (runtime->buffer_size * 1000) / usX2Y->rate + 1;	//FIXME: so far only correct period_size == 2^x ?
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
          int _len_runtime0 = 1;
          struct snd_pcm_runtime * runtime = (struct snd_pcm_runtime *) malloc(_len_runtime0*sizeof(struct snd_pcm_runtime));
          for(int _i0 = 0; _i0 < _len_runtime0; _i0++) {
            runtime[_i0].buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_usX2Y0 = 1;
          struct usX2Ydev * usX2Y = (struct usX2Ydev *) malloc(_len_usX2Y0*sizeof(struct usX2Ydev));
          for(int _i0 = 0; _i0 < _len_usX2Y0; _i0++) {
            usX2Y[_i0].rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = usX2Y_iso_frames_per_buffer(runtime,usX2Y);
          printf("%d\n", benchRet); 
          free(runtime);
          free(usX2Y);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
