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
struct cache_local_copy {int flags; scalar_t__ yellow_light_start; } ;

/* Variables and functions */
 int CACHE_LOCAL_COPY_FLAG_YELLOW_LIGHT_MASK ; 
 scalar_t__ log_last_ts ; 

void cache_local_copy_get_yellow_light_time (struct cache_local_copy *L, int *remaining_time, int *elapsed_time) {
  *remaining_time = *elapsed_time = 0;
  int duration = L->flags & CACHE_LOCAL_COPY_FLAG_YELLOW_LIGHT_MASK;
  if (!duration || (L->yellow_light_start + duration <= log_last_ts)) {
    return;
  }
  *elapsed_time = log_last_ts - L->yellow_light_start;
  *remaining_time = duration - (*elapsed_time);
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
          int _len_L0 = 1;
          struct cache_local_copy * L = (struct cache_local_copy *) malloc(_len_L0*sizeof(struct cache_local_copy));
          for(int _i0 = 0; _i0 < _len_L0; _i0++) {
            L[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        L[_i0].yellow_light_start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_remaining_time0 = 1;
          int * remaining_time = (int *) malloc(_len_remaining_time0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_remaining_time0; _i0++) {
            remaining_time[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_elapsed_time0 = 1;
          int * elapsed_time = (int *) malloc(_len_elapsed_time0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_elapsed_time0; _i0++) {
            elapsed_time[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cache_local_copy_get_yellow_light_time(L,remaining_time,elapsed_time);
          free(L);
          free(remaining_time);
          free(elapsed_time);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
