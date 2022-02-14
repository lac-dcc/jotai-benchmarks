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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct grouping_des {int dummy; } ;
typedef  int calculated_number ;
struct TYPE_4__ {int points_wanted; } ;
struct TYPE_5__ {int group; TYPE_1__ internal; } ;
typedef  TYPE_2__ RRDR ;

/* Variables and functions */
 int max_window_size ; 

__attribute__((used)) static inline calculated_number window(RRDR *r, struct grouping_des *g) {
    (void)g;

    calculated_number points;
    if(r->group == 1) {
        // provide a running DES
        points = r->internal.points_wanted;
    }
    else {
        // provide a SES with flush points
        points = r->group;
    }

    // https://en.wikipedia.org/wiki/Moving_average#Exponential_moving_average
    // A commonly used value for alpha is 2 / (N + 1)
    return (points > max_window_size) ? max_window_size : points;
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
          int _len_r0 = 1;
          struct TYPE_5__ * r = (struct TYPE_5__ *) malloc(_len_r0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r->group = ((-2 * (next_i()%2)) + 1) * next_i();
        r->internal.points_wanted = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_g0 = 1;
          struct grouping_des * g = (struct grouping_des *) malloc(_len_g0*sizeof(struct grouping_des));
          for(int _i0 = 0; _i0 < _len_g0; _i0++) {
            g->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = window(r,g);
          printf("%d\n", benchRet); 
          free(r);
          free(g);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
