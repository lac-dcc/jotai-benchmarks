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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Type definitions */
struct mp_colorspace {scalar_t__ light; scalar_t__ sig_peak; scalar_t__ gamma; scalar_t__ primaries; scalar_t__ levels; scalar_t__ space; } ;

/* Variables and functions */

void mp_colorspace_merge(struct mp_colorspace *orig, struct mp_colorspace *new)
{
    if (!orig->space)
        orig->space = new->space;
    if (!orig->levels)
        orig->levels = new->levels;
    if (!orig->primaries)
        orig->primaries = new->primaries;
    if (!orig->gamma)
        orig->gamma = new->gamma;
    if (!orig->sig_peak)
        orig->sig_peak = new->sig_peak;
    if (!orig->light)
        orig->light = new->light;
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
          int _len_orig0 = 1;
          struct mp_colorspace * orig = (struct mp_colorspace *) malloc(_len_orig0*sizeof(struct mp_colorspace));
          for(int _i0 = 0; _i0 < _len_orig0; _i0++) {
            orig[_i0].light = ((-2 * (next_i()%2)) + 1) * next_i();
        orig[_i0].sig_peak = ((-2 * (next_i()%2)) + 1) * next_i();
        orig[_i0].gamma = ((-2 * (next_i()%2)) + 1) * next_i();
        orig[_i0].primaries = ((-2 * (next_i()%2)) + 1) * next_i();
        orig[_i0].levels = ((-2 * (next_i()%2)) + 1) * next_i();
        orig[_i0].space = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_new0 = 1;
          struct mp_colorspace * new = (struct mp_colorspace *) malloc(_len_new0*sizeof(struct mp_colorspace));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
            new[_i0].light = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].sig_peak = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].gamma = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].primaries = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].levels = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].space = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp_colorspace_merge(orig,new);
          free(orig);
          free(new);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_orig0 = 65025;
          struct mp_colorspace * orig = (struct mp_colorspace *) malloc(_len_orig0*sizeof(struct mp_colorspace));
          for(int _i0 = 0; _i0 < _len_orig0; _i0++) {
            orig[_i0].light = ((-2 * (next_i()%2)) + 1) * next_i();
        orig[_i0].sig_peak = ((-2 * (next_i()%2)) + 1) * next_i();
        orig[_i0].gamma = ((-2 * (next_i()%2)) + 1) * next_i();
        orig[_i0].primaries = ((-2 * (next_i()%2)) + 1) * next_i();
        orig[_i0].levels = ((-2 * (next_i()%2)) + 1) * next_i();
        orig[_i0].space = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_new0 = 65025;
          struct mp_colorspace * new = (struct mp_colorspace *) malloc(_len_new0*sizeof(struct mp_colorspace));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
            new[_i0].light = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].sig_peak = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].gamma = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].primaries = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].levels = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].space = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp_colorspace_merge(orig,new);
          free(orig);
          free(new);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_orig0 = 100;
          struct mp_colorspace * orig = (struct mp_colorspace *) malloc(_len_orig0*sizeof(struct mp_colorspace));
          for(int _i0 = 0; _i0 < _len_orig0; _i0++) {
            orig[_i0].light = ((-2 * (next_i()%2)) + 1) * next_i();
        orig[_i0].sig_peak = ((-2 * (next_i()%2)) + 1) * next_i();
        orig[_i0].gamma = ((-2 * (next_i()%2)) + 1) * next_i();
        orig[_i0].primaries = ((-2 * (next_i()%2)) + 1) * next_i();
        orig[_i0].levels = ((-2 * (next_i()%2)) + 1) * next_i();
        orig[_i0].space = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_new0 = 100;
          struct mp_colorspace * new = (struct mp_colorspace *) malloc(_len_new0*sizeof(struct mp_colorspace));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
            new[_i0].light = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].sig_peak = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].gamma = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].primaries = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].levels = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].space = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp_colorspace_merge(orig,new);
          free(orig);
          free(new);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
