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
struct mp_vo_opts {double monitor_pixel_aspect; int force_monitor_aspect; } ;

/* Variables and functions */

__attribute__((used)) static void calc_monitor_aspect(struct mp_vo_opts *opts, int scr_w, int scr_h,
                                double *pixelaspect, int *w, int *h)
{
    *pixelaspect = 1.0 / opts->monitor_pixel_aspect;

    if (scr_w > 0 && scr_h > 0 && opts->force_monitor_aspect)
        *pixelaspect = 1.0 / (opts->force_monitor_aspect * scr_h / scr_w);

    if (*pixelaspect < 1) {
        *h /= *pixelaspect;
    } else {
        *w *= *pixelaspect;
    }
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
          int scr_w = 100;
          int scr_h = 100;
          int _len_opts0 = 1;
          struct mp_vo_opts * opts = (struct mp_vo_opts *) malloc(_len_opts0*sizeof(struct mp_vo_opts));
          for(int _i0 = 0; _i0 < _len_opts0; _i0++) {
            opts[_i0].monitor_pixel_aspect = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        opts[_i0].force_monitor_aspect = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pixelaspect0 = 1;
          double * pixelaspect = (double *) malloc(_len_pixelaspect0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_pixelaspect0; _i0++) {
            pixelaspect[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_w0 = 1;
          int * w = (int *) malloc(_len_w0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
            w[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_h0 = 1;
          int * h = (int *) malloc(_len_h0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calc_monitor_aspect(opts,scr_w,scr_h,pixelaspect,w,h);
          free(opts);
          free(pixelaspect);
          free(w);
          free(h);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
