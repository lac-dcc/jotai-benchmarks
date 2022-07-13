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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int bits_written; int bit_rate; int samples_written; int sample_rate; int frame_size; int frame_size_min; int num_blocks; } ;
typedef  TYPE_1__ AC3EncodeContext ;

/* Variables and functions */
 int AC3_BLOCK_SIZE ; 

void ff_ac3_adjust_frame_size(AC3EncodeContext *s)
{
    while (s->bits_written >= s->bit_rate && s->samples_written >= s->sample_rate) {
        s->bits_written    -= s->bit_rate;
        s->samples_written -= s->sample_rate;
    }
    s->frame_size = s->frame_size_min +
                    2 * (s->bits_written * s->sample_rate < s->samples_written * s->bit_rate);
    s->bits_written    += s->frame_size * 8;
    s->samples_written += AC3_BLOCK_SIZE * s->num_blocks;
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
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].bits_written = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].bit_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].samples_written = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].frame_size = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].frame_size_min = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].num_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_ac3_adjust_frame_size(s);
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].bits_written = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].bit_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].samples_written = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].frame_size = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].frame_size_min = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].num_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_ac3_adjust_frame_size(s);
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].bits_written = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].bit_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].samples_written = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].frame_size = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].frame_size_min = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].num_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_ac3_adjust_frame_size(s);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
