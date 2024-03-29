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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {unsigned short logical_block_size; unsigned short physical_block_size; unsigned short io_min; } ;
struct request_queue {TYPE_1__ limits; } ;

/* Variables and functions */

void blk_queue_logical_block_size(struct request_queue *q, unsigned short size)
{
	q->limits.logical_block_size = size;

	if (q->limits.physical_block_size < size)
		q->limits.physical_block_size = size;

	if (q->limits.io_min < q->limits.physical_block_size)
		q->limits.io_min = q->limits.physical_block_size;
}

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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          unsigned short size = 100;
        
          int _len_q0 = 1;
          struct request_queue * q = (struct request_queue *) malloc(_len_q0*sizeof(struct request_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              q[_i0].limits.logical_block_size = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].limits.physical_block_size = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].limits.io_min = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          blk_queue_logical_block_size(q,size);
          free(q);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          unsigned short size = 255;
        
          int _len_q0 = 65025;
          struct request_queue * q = (struct request_queue *) malloc(_len_q0*sizeof(struct request_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              q[_i0].limits.logical_block_size = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].limits.physical_block_size = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].limits.io_min = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          blk_queue_logical_block_size(q,size);
          free(q);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          unsigned short size = 10;
        
          int _len_q0 = 100;
          struct request_queue * q = (struct request_queue *) malloc(_len_q0*sizeof(struct request_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              q[_i0].limits.logical_block_size = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].limits.physical_block_size = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].limits.io_min = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          blk_queue_logical_block_size(q,size);
          free(q);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          unsigned short size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_q0 = 1;
          struct request_queue * q = (struct request_queue *) malloc(_len_q0*sizeof(struct request_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              q[_i0].limits.logical_block_size = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].limits.physical_block_size = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].limits.io_min = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          blk_queue_logical_block_size(q,size);
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
