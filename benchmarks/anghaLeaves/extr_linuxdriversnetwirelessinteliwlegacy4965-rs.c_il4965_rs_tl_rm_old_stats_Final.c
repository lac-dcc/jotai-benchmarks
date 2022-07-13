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
typedef  scalar_t__ u32 ;
struct il_traffic_load {scalar_t__ time_stamp; size_t head; scalar_t__ queue_count; scalar_t__* packet_count; int /*<<< orphan*/  total; } ;

/* Variables and functions */
 scalar_t__ TID_MAX_TIME_DIFF ; 
 scalar_t__ TID_QUEUE_CELL_SPACING ; 
 size_t TID_QUEUE_MAX_SIZE ; 

__attribute__((used)) static void
il4965_rs_tl_rm_old_stats(struct il_traffic_load *tl, u32 curr_time)
{
	/* The oldest age we want to keep */
	u32 oldest_time = curr_time - TID_MAX_TIME_DIFF;

	while (tl->queue_count && tl->time_stamp < oldest_time) {
		tl->total -= tl->packet_count[tl->head];
		tl->packet_count[tl->head] = 0;
		tl->time_stamp += TID_QUEUE_CELL_SPACING;
		tl->queue_count--;
		tl->head++;
		if (tl->head >= TID_QUEUE_MAX_SIZE)
			tl->head = 0;
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
          long curr_time = 100;
          int _len_tl0 = 1;
          struct il_traffic_load * tl = (struct il_traffic_load *) malloc(_len_tl0*sizeof(struct il_traffic_load));
          for(int _i0 = 0; _i0 < _len_tl0; _i0++) {
            tl[_i0].time_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
        tl[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
        tl[_i0].queue_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tl__i0__packet_count0 = 1;
          tl[_i0].packet_count = (long *) malloc(_len_tl__i0__packet_count0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tl__i0__packet_count0; _j0++) {
            tl[_i0].packet_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tl[_i0].total = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          il4965_rs_tl_rm_old_stats(tl,curr_time);
          for(int _aux = 0; _aux < _len_tl0; _aux++) {
          free(tl[_aux].packet_count);
          }
          free(tl);
        
        break;
    }
    // big-arr
    case 1:
    {
          long curr_time = 255;
          int _len_tl0 = 65025;
          struct il_traffic_load * tl = (struct il_traffic_load *) malloc(_len_tl0*sizeof(struct il_traffic_load));
          for(int _i0 = 0; _i0 < _len_tl0; _i0++) {
            tl[_i0].time_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
        tl[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
        tl[_i0].queue_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tl__i0__packet_count0 = 1;
          tl[_i0].packet_count = (long *) malloc(_len_tl__i0__packet_count0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tl__i0__packet_count0; _j0++) {
            tl[_i0].packet_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tl[_i0].total = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          il4965_rs_tl_rm_old_stats(tl,curr_time);
          for(int _aux = 0; _aux < _len_tl0; _aux++) {
          free(tl[_aux].packet_count);
          }
          free(tl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long curr_time = 10;
          int _len_tl0 = 100;
          struct il_traffic_load * tl = (struct il_traffic_load *) malloc(_len_tl0*sizeof(struct il_traffic_load));
          for(int _i0 = 0; _i0 < _len_tl0; _i0++) {
            tl[_i0].time_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
        tl[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
        tl[_i0].queue_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tl__i0__packet_count0 = 1;
          tl[_i0].packet_count = (long *) malloc(_len_tl__i0__packet_count0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tl__i0__packet_count0; _j0++) {
            tl[_i0].packet_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tl[_i0].total = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          il4965_rs_tl_rm_old_stats(tl,curr_time);
          for(int _aux = 0; _aux < _len_tl0; _aux++) {
          free(tl[_aux].packet_count);
          }
          free(tl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
