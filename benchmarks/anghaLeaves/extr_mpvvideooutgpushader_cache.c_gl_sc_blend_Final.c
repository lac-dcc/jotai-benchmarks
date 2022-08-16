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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int enable_blend; int blend_src_rgb; int blend_dst_rgb; int blend_src_alpha; int blend_dst_alpha; } ;
struct gl_shader_cache {TYPE_1__ params; } ;
typedef  enum ra_blend { ____Placeholder_ra_blend } ra_blend ;

/* Variables and functions */

void gl_sc_blend(struct gl_shader_cache *sc,
                 enum ra_blend blend_src_rgb,
                 enum ra_blend blend_dst_rgb,
                 enum ra_blend blend_src_alpha,
                 enum ra_blend blend_dst_alpha)
{
    sc->params.enable_blend = true;
    sc->params.blend_src_rgb = blend_src_rgb;
    sc->params.blend_dst_rgb = blend_dst_rgb;
    sc->params.blend_src_alpha = blend_src_alpha;
    sc->params.blend_dst_alpha = blend_dst_alpha;
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
          enum ra_blend blend_src_rgb = 0;
          enum ra_blend blend_dst_rgb = 0;
          enum ra_blend blend_src_alpha = 0;
          enum ra_blend blend_dst_alpha = 0;
          int _len_sc0 = 1;
          struct gl_shader_cache * sc = (struct gl_shader_cache *) malloc(_len_sc0*sizeof(struct gl_shader_cache));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].params.enable_blend = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].params.blend_src_rgb = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].params.blend_dst_rgb = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].params.blend_src_alpha = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].params.blend_dst_alpha = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gl_sc_blend(sc,blend_src_rgb,blend_dst_rgb,blend_src_alpha,blend_dst_alpha);
          free(sc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
