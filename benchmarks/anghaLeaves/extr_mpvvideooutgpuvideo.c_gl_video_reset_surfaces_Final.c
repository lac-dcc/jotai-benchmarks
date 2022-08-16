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
struct gl_video {int output_tex_valid; scalar_t__ frames_drawn; scalar_t__ surface_now; scalar_t__ surface_idx; TYPE_1__* surfaces; } ;
struct TYPE_2__ {int /*<<< orphan*/  pts; scalar_t__ id; } ;

/* Variables and functions */
 int /*<<< orphan*/  MP_NOPTS_VALUE ; 
 int SURFACES_MAX ; 

__attribute__((used)) static void gl_video_reset_surfaces(struct gl_video *p)
{
    for (int i = 0; i < SURFACES_MAX; i++) {
        p->surfaces[i].id = 0;
        p->surfaces[i].pts = MP_NOPTS_VALUE;
    }
    p->surface_idx = 0;
    p->surface_now = 0;
    p->frames_drawn = 0;
    p->output_tex_valid = false;
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
          int _len_p0 = 1;
          struct gl_video * p = (struct gl_video *) malloc(_len_p0*sizeof(struct gl_video));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].output_tex_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].frames_drawn = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].surface_now = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].surface_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__surfaces0 = 1;
          p[_i0].surfaces = (struct TYPE_2__ *) malloc(_len_p__i0__surfaces0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p__i0__surfaces0; _j0++) {
            p[_i0].surfaces->pts = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].surfaces->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          gl_video_reset_surfaces(p);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].surfaces);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
