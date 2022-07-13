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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int uint64_t ;
struct TYPE_6__ {unsigned int den; scalar_t__ num; } ;
struct TYPE_5__ {unsigned int maxbitdepth; } ;
typedef  TYPE_1__ AudioStatsContext ;
typedef  TYPE_2__ AVRational ;

/* Variables and functions */

__attribute__((used)) static void bit_depth(AudioStatsContext *s, uint64_t mask, uint64_t imask, AVRational *depth)
{
    unsigned result = s->maxbitdepth;

    mask = mask & (~imask);

    for (; result && !(mask & 1); --result, mask >>= 1);

    depth->den = result;
    depth->num = 0;

    for (; result; --result, mask >>= 1)
        if (mask & 1)
            depth->num++;
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
          int mask = 100;
          int imask = 100;
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].maxbitdepth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_depth0 = 1;
          struct TYPE_6__ * depth = (struct TYPE_6__ *) malloc(_len_depth0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_depth0; _i0++) {
            depth[_i0].den = ((-2 * (next_i()%2)) + 1) * next_i();
        depth[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bit_depth(s,mask,imask,depth);
          free(s);
          free(depth);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mask = 255;
          int imask = 255;
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].maxbitdepth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_depth0 = 65025;
          struct TYPE_6__ * depth = (struct TYPE_6__ *) malloc(_len_depth0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_depth0; _i0++) {
            depth[_i0].den = ((-2 * (next_i()%2)) + 1) * next_i();
        depth[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bit_depth(s,mask,imask,depth);
          free(s);
          free(depth);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mask = 10;
          int imask = 10;
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].maxbitdepth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_depth0 = 100;
          struct TYPE_6__ * depth = (struct TYPE_6__ *) malloc(_len_depth0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_depth0; _i0++) {
            depth[_i0].den = ((-2 * (next_i()%2)) + 1) * next_i();
        depth[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bit_depth(s,mask,imask,depth);
          free(s);
          free(depth);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
