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
struct demuxer {int dummy; } ;
struct MPContext {scalar_t__ playback_pts; scalar_t__ last_seek_pts; struct demuxer* demuxer; } ;

/* Variables and functions */
 scalar_t__ MP_NOPTS_VALUE ; 

double get_current_time(struct MPContext *mpctx)
{
    struct demuxer *demuxer = mpctx->demuxer;
    if (demuxer) {
        if (mpctx->playback_pts != MP_NOPTS_VALUE)
            return mpctx->playback_pts;
        if (mpctx->last_seek_pts != MP_NOPTS_VALUE)
            return mpctx->last_seek_pts;
    }
    return MP_NOPTS_VALUE;
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
          int _len_mpctx0 = 1;
          struct MPContext * mpctx = (struct MPContext *) malloc(_len_mpctx0*sizeof(struct MPContext));
          for(int _i0 = 0; _i0 < _len_mpctx0; _i0++) {
            mpctx[_i0].playback_pts = ((-2 * (next_i()%2)) + 1) * next_i();
        mpctx[_i0].last_seek_pts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mpctx__i0__demuxer0 = 1;
          mpctx[_i0].demuxer = (struct demuxer *) malloc(_len_mpctx__i0__demuxer0*sizeof(struct demuxer));
          for(int _j0 = 0; _j0 < _len_mpctx__i0__demuxer0; _j0++) {
            mpctx[_i0].demuxer->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          double benchRet = get_current_time(mpctx);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_mpctx0; _aux++) {
          free(mpctx[_aux].demuxer);
          }
          free(mpctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
