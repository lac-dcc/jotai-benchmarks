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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int max_frame_size; int /*<<< orphan*/  temp_memory_required; int /*<<< orphan*/  setup_temp_memory_required; int /*<<< orphan*/  setup_memory_required; int /*<<< orphan*/  sample_rate; int /*<<< orphan*/  channels; } ;
typedef  TYPE_1__ stb_vorbis_info ;
struct TYPE_6__ {int blocksize_1; int /*<<< orphan*/  temp_memory_required; int /*<<< orphan*/  setup_temp_memory_required; int /*<<< orphan*/  setup_memory_required; int /*<<< orphan*/  sample_rate; int /*<<< orphan*/  channels; } ;
typedef  TYPE_2__ stb_vorbis ;

/* Variables and functions */

stb_vorbis_info stb_vorbis_get_info(stb_vorbis *f)
{
   stb_vorbis_info d;
   d.channels = f->channels;
   d.sample_rate = f->sample_rate;
   d.setup_memory_required = f->setup_memory_required;
   d.setup_temp_memory_required = f->setup_temp_memory_required;
   d.temp_memory_required = f->temp_memory_required;
   d.max_frame_size = f->blocksize_1 >> 1;
   return d;
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
          int _len_f0 = 1;
          struct TYPE_6__ * f = (struct TYPE_6__ *) malloc(_len_f0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].blocksize_1 = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].temp_memory_required = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].setup_temp_memory_required = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].setup_memory_required = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_5__ benchRet = stb_vorbis_get_info(f);
          printf("%d\n", benchRet.max_frame_size);
          printf("%d\n", benchRet.temp_memory_required);
          printf("%d\n", benchRet.setup_temp_memory_required);
          printf("%d\n", benchRet.setup_memory_required);
          printf("%d\n", benchRet.sample_rate);
          printf("%d\n", benchRet.channels);
          free(f);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
