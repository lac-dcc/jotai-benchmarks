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
struct pstore {int exceptions_per_area; } ;
typedef  int chunk_t ;

/* Variables and functions */
 int NUM_SNAPSHOT_HDR_CHUNKS ; 

__attribute__((used)) static chunk_t area_location(struct pstore *ps, chunk_t area)
{
	return NUM_SNAPSHOT_HDR_CHUNKS + ((ps->exceptions_per_area + 1) * area);
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
          int area = 100;
          int _len_ps0 = 1;
          struct pstore * ps = (struct pstore *) malloc(_len_ps0*sizeof(struct pstore));
          for(int _i0 = 0; _i0 < _len_ps0; _i0++) {
            ps[_i0].exceptions_per_area = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = area_location(ps,area);
          printf("%d\n", benchRet); 
          free(ps);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int area = 10;
          int _len_ps0 = 100;
          struct pstore * ps = (struct pstore *) malloc(_len_ps0*sizeof(struct pstore));
          for(int _i0 = 0; _i0 < _len_ps0; _i0++) {
            ps[_i0].exceptions_per_area = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = area_location(ps,area);
          printf("%d\n", benchRet); 
          free(ps);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
