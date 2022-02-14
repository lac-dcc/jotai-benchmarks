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

/* Type definitions */
typedef  int u8 ;
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static inline void cw1200_queue_parse_id(u32 packet_id, u8 *queue_generation,
					 u8 *queue_id, u8 *item_generation,
					 u8 *item_id)
{
	*item_id		= (packet_id >>  0) & 0xFF;
	*item_generation	= (packet_id >>  8) & 0xFF;
	*queue_id		= (packet_id >> 16) & 0xFF;
	*queue_generation	= (packet_id >> 24) & 0xFF;
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
          int packet_id = 255;
          int _len_queue_generation0 = 65025;
          int * queue_generation = (int *) malloc(_len_queue_generation0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_queue_generation0; _i0++) {
            queue_generation[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_queue_id0 = 65025;
          int * queue_id = (int *) malloc(_len_queue_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_queue_id0; _i0++) {
            queue_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_item_generation0 = 65025;
          int * item_generation = (int *) malloc(_len_item_generation0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_item_generation0; _i0++) {
            item_generation[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_item_id0 = 65025;
          int * item_id = (int *) malloc(_len_item_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_item_id0; _i0++) {
            item_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cw1200_queue_parse_id(packet_id,queue_generation,queue_id,item_generation,item_id);
          free(queue_generation);
          free(queue_id);
          free(item_generation);
          free(item_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
