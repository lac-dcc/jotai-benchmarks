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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  int u32 ;
struct octeon_droq {scalar_t__ max_empty_descs; scalar_t__ max_count; scalar_t__ buffer_size; } ;

/* Variables and functions */

__attribute__((used)) static void octeon_droq_compute_max_packet_bufs(struct octeon_droq *droq)
{
	u32 count = 0;

	/* max_empty_descs is the max. no. of descs that can have no buffers.
	 * If the empty desc count goes beyond this value, we cannot safely
	 * read in a 64K packet sent by Octeon
	 * (64K is max pkt size from Octeon)
	 */
	droq->max_empty_descs = 0;

	do {
		droq->max_empty_descs++;
		count += droq->buffer_size;
	} while (count < (64 * 1024));

	droq->max_empty_descs = droq->max_count - droq->max_empty_descs;
}

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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 229342930
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 104246793
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 104246790
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 104246790
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 104246790
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 104246789
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 104246789
          // ------------------------------- 

          int _len_droq0 = 65025;
          struct octeon_droq * droq = (struct octeon_droq *) malloc(_len_droq0*sizeof(struct octeon_droq));
          for(int _i0 = 0; _i0 < _len_droq0; _i0++) {
              droq[_i0].max_empty_descs = ((-2 * (next_i()%2)) + 1) * next_i();
          droq[_i0].max_count = ((-2 * (next_i()%2)) + 1) * next_i();
          droq[_i0].buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          octeon_droq_compute_max_packet_bufs(droq);
          free(droq);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 229342930
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 104246793
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 104246790
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 104246790
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 104246790
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 104246789
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 104246789
          // ------------------------------- 

          int _len_droq0 = 100;
          struct octeon_droq * droq = (struct octeon_droq *) malloc(_len_droq0*sizeof(struct octeon_droq));
          for(int _i0 = 0; _i0 < _len_droq0; _i0++) {
              droq[_i0].max_empty_descs = ((-2 * (next_i()%2)) + 1) * next_i();
          droq[_i0].max_count = ((-2 * (next_i()%2)) + 1) * next_i();
          droq[_i0].buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          octeon_droq_compute_max_packet_bufs(droq);
          free(droq);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 229342930
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 104246793
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 104246790
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 104246790
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 104246790
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 104246789
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 104246789
          // ------------------------------- 

          int _len_droq0 = 1;
          struct octeon_droq * droq = (struct octeon_droq *) malloc(_len_droq0*sizeof(struct octeon_droq));
          for(int _i0 = 0; _i0 < _len_droq0; _i0++) {
              droq[_i0].max_empty_descs = ((-2 * (next_i()%2)) + 1) * next_i();
          droq[_i0].max_count = ((-2 * (next_i()%2)) + 1) * next_i();
          droq[_i0].buffer_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          octeon_droq_compute_max_packet_bufs(droq);
          free(droq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
