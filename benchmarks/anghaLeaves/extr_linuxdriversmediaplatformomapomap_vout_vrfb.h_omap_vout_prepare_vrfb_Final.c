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
struct videobuf_buffer {int dummy; } ;
struct omap_vout_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int omap_vout_prepare_vrfb(struct omap_vout_device *vout,
			struct videobuf_buffer *vb)
		{ return 0; }


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
          int _len_vout0 = 1;
          struct omap_vout_device * vout = (struct omap_vout_device *) malloc(_len_vout0*sizeof(struct omap_vout_device));
          for(int _i0 = 0; _i0 < _len_vout0; _i0++) {
            vout[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vb0 = 1;
          struct videobuf_buffer * vb = (struct videobuf_buffer *) malloc(_len_vb0*sizeof(struct videobuf_buffer));
          for(int _i0 = 0; _i0 < _len_vb0; _i0++) {
            vb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = omap_vout_prepare_vrfb(vout,vb);
          printf("%d\n", benchRet); 
          free(vout);
          free(vb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
