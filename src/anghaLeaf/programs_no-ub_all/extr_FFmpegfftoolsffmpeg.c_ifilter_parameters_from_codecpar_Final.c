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
       0            big-arr\n\
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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/  sample_aspect_ratio; int /*<<< orphan*/  height; int /*<<< orphan*/  width; int /*<<< orphan*/  channel_layout; int /*<<< orphan*/  channels; int /*<<< orphan*/  sample_rate; int /*<<< orphan*/  format; } ;
struct TYPE_5__ {int /*<<< orphan*/  sample_aspect_ratio; int /*<<< orphan*/  height; int /*<<< orphan*/  width; int /*<<< orphan*/  channel_layout; int /*<<< orphan*/  channels; int /*<<< orphan*/  sample_rate; int /*<<< orphan*/  format; } ;
typedef  TYPE_1__ InputFilter ;
typedef  TYPE_2__ AVCodecParameters ;

/* Variables and functions */

__attribute__((used)) static void ifilter_parameters_from_codecpar(InputFilter *ifilter, AVCodecParameters *par)
{
    // We never got any input. Set a fake format, which will
    // come from libavformat.
    ifilter->format                 = par->format;
    ifilter->sample_rate            = par->sample_rate;
    ifilter->channels               = par->channels;
    ifilter->channel_layout         = par->channel_layout;
    ifilter->width                  = par->width;
    ifilter->height                 = par->height;
    ifilter->sample_aspect_ratio    = par->sample_aspect_ratio;
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

    // big-arr
    case 0:
    {
          int _len_ifilter0 = 1;
          struct TYPE_5__ * ifilter = (struct TYPE_5__ *) malloc(_len_ifilter0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ifilter0; _i0++) {
            ifilter->sample_aspect_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
        ifilter->height = ((-2 * (next_i()%2)) + 1) * next_i();
        ifilter->width = ((-2 * (next_i()%2)) + 1) * next_i();
        ifilter->channel_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        ifilter->channels = ((-2 * (next_i()%2)) + 1) * next_i();
        ifilter->sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        ifilter->format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_par0 = 1;
          struct TYPE_6__ * par = (struct TYPE_6__ *) malloc(_len_par0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par->sample_aspect_ratio = ((-2 * (next_i()%2)) + 1) * next_i();
        par->height = ((-2 * (next_i()%2)) + 1) * next_i();
        par->width = ((-2 * (next_i()%2)) + 1) * next_i();
        par->channel_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        par->channels = ((-2 * (next_i()%2)) + 1) * next_i();
        par->sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        par->format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ifilter_parameters_from_codecpar(ifilter,par);
          free(ifilter);
          free(par);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
