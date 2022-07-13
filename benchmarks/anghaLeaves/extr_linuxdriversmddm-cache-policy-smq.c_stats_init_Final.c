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
struct stats {unsigned int hit_threshold; unsigned int hits; unsigned int misses; } ;

/* Variables and functions */

__attribute__((used)) static void stats_init(struct stats *s, unsigned nr_levels)
{
	s->hit_threshold = (nr_levels * 3u) / 4u;
	s->hits = 0u;
	s->misses = 0u;
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
          unsigned int nr_levels = 100;
          int _len_s0 = 1;
          struct stats * s = (struct stats *) malloc(_len_s0*sizeof(struct stats));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].hit_threshold = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].hits = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].misses = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stats_init(s,nr_levels);
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int nr_levels = 255;
          int _len_s0 = 65025;
          struct stats * s = (struct stats *) malloc(_len_s0*sizeof(struct stats));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].hit_threshold = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].hits = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].misses = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stats_init(s,nr_levels);
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int nr_levels = 10;
          int _len_s0 = 100;
          struct stats * s = (struct stats *) malloc(_len_s0*sizeof(struct stats));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].hit_threshold = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].hits = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].misses = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stats_init(s,nr_levels);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
