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
typedef  scalar_t__ uint64_t ;
struct vdpctx {scalar_t__ recent_vsync_time; scalar_t__ vsync_interval; } ;
typedef  scalar_t__ int64_t ;

/* Variables and functions */

__attribute__((used)) static inline uint64_t prev_vsync(struct vdpctx *vc, uint64_t ts)
{
    int64_t diff = (int64_t)(ts - vc->recent_vsync_time);
    int64_t offset = diff % vc->vsync_interval;
    if (offset < 0)
        offset += vc->vsync_interval;
    return ts - offset;
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
          long ts = 100;
          int _len_vc0 = 1;
          struct vdpctx * vc = (struct vdpctx *) malloc(_len_vc0*sizeof(struct vdpctx));
          for(int _i0 = 0; _i0 < _len_vc0; _i0++) {
            vc[_i0].recent_vsync_time = ((-2 * (next_i()%2)) + 1) * next_i();
        vc[_i0].vsync_interval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = prev_vsync(vc,ts);
          printf("%ld\n", benchRet); 
          free(vc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
