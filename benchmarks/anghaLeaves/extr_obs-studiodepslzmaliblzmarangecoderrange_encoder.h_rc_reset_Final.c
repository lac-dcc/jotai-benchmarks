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
struct TYPE_3__ {int cache_size; scalar_t__ pos; scalar_t__ count; scalar_t__ cache; int /*<<< orphan*/  range; scalar_t__ low; } ;
typedef  TYPE_1__ lzma_range_encoder ;

/* Variables and functions */
 int /*<<< orphan*/  UINT32_MAX ; 

__attribute__((used)) static inline void
rc_reset(lzma_range_encoder *rc)
{
	rc->low = 0;
	rc->cache_size = 1;
	rc->range = UINT32_MAX;
	rc->cache = 0;
	rc->count = 0;
	rc->pos = 0;
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
          int _len_rc0 = 1;
          struct TYPE_3__ * rc = (struct TYPE_3__ *) malloc(_len_rc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rc0; _i0++) {
            rc[_i0].cache_size = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].cache = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].range = ((-2 * (next_i()%2)) + 1) * next_i();
        rc[_i0].low = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rc_reset(rc);
          free(rc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
