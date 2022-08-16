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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct mp_decode {scalar_t__ frame_pts; scalar_t__ frame_ready; } ;
struct TYPE_3__ {scalar_t__ next_pts_ns; } ;
typedef  TYPE_1__ mp_media_t ;

/* Variables and functions */

__attribute__((used)) static inline bool mp_media_can_play_frame(mp_media_t *m,
		struct mp_decode *d)
{
	return d->frame_ready && d->frame_pts <= m->next_pts_ns;
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
          int _len_m0 = 1;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].next_pts_ns = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_d0 = 1;
          struct mp_decode * d = (struct mp_decode *) malloc(_len_d0*sizeof(struct mp_decode));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].frame_pts = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].frame_ready = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mp_media_can_play_frame(m,d);
          printf("%d\n", benchRet); 
          free(m);
          free(d);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
