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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {scalar_t__ next_pts; } ;
struct TYPE_5__ {scalar_t__ next_pts; } ;
struct TYPE_7__ {TYPE_2__ a; scalar_t__ has_audio; TYPE_1__ v; scalar_t__ has_video; } ;
typedef  TYPE_3__ mp_media_t ;
typedef  scalar_t__ int64_t ;

/* Variables and functions */

__attribute__((used)) static inline int64_t mp_media_get_base_pts(mp_media_t *m)
{
	int64_t base_ts = 0;

	if (m->has_video && m->v.next_pts > base_ts)
		base_ts = m->v.next_pts;
	if (m->has_audio && m->a.next_pts > base_ts)
		base_ts = m->a.next_pts;

	return base_ts;
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
          struct TYPE_7__ * m = (struct TYPE_7__ *) malloc(_len_m0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].a.next_pts = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].has_audio = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].v.next_pts = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].has_video = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = mp_media_get_base_pts(m);
          printf("%ld\n", benchRet); 
          free(m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
