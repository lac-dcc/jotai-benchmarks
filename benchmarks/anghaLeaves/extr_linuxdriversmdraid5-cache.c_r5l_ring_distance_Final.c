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
       1            big-arr-10x\n\
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
struct r5l_log {scalar_t__ device_size; } ;
typedef  scalar_t__ sector_t ;

/* Variables and functions */

__attribute__((used)) static sector_t r5l_ring_distance(struct r5l_log *log, sector_t start,
				  sector_t end)
{
	if (end >= start)
		return end - start;
	else
		return end + log->device_size - start;
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
          long start = 100;
          long end = 100;
          int _len_log0 = 1;
          struct r5l_log * log = (struct r5l_log *) malloc(_len_log0*sizeof(struct r5l_log));
          for(int _i0 = 0; _i0 < _len_log0; _i0++) {
            log[_i0].device_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = r5l_ring_distance(log,start,end);
          printf("%ld\n", benchRet); 
          free(log);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long start = 10;
          long end = 10;
          int _len_log0 = 100;
          struct r5l_log * log = (struct r5l_log *) malloc(_len_log0*sizeof(struct r5l_log));
          for(int _i0 = 0; _i0 < _len_log0; _i0++) {
            log[_i0].device_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = r5l_ring_distance(log,start,end);
          printf("%ld\n", benchRet); 
          free(log);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
