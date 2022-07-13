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
struct copro_slb {unsigned long esid; } ;

/* Variables and functions */
 unsigned long ESID_MASK ; 

__attribute__((used)) static inline int __slb_present(struct copro_slb *slbs, int nr_slbs,
		void *new_addr)
{
	unsigned long ea = (unsigned long)new_addr;
	int i;

	for (i = 0; i < nr_slbs; i++)
		if (!((slbs[i].esid ^ ea) & ESID_MASK))
			return 1;

	return 0;
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
          int nr_slbs = 100;
          int _len_slbs0 = 1;
          struct copro_slb * slbs = (struct copro_slb *) malloc(_len_slbs0*sizeof(struct copro_slb));
          for(int _i0 = 0; _i0 < _len_slbs0; _i0++) {
            slbs[_i0].esid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * new_addr;
          int benchRet = __slb_present(slbs,nr_slbs,new_addr);
          printf("%d\n", benchRet); 
          free(slbs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int nr_slbs = 255;
          int _len_slbs0 = 65025;
          struct copro_slb * slbs = (struct copro_slb *) malloc(_len_slbs0*sizeof(struct copro_slb));
          for(int _i0 = 0; _i0 < _len_slbs0; _i0++) {
            slbs[_i0].esid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * new_addr;
          int benchRet = __slb_present(slbs,nr_slbs,new_addr);
          printf("%d\n", benchRet); 
          free(slbs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nr_slbs = 10;
          int _len_slbs0 = 100;
          struct copro_slb * slbs = (struct copro_slb *) malloc(_len_slbs0*sizeof(struct copro_slb));
          for(int _i0 = 0; _i0 < _len_slbs0; _i0++) {
            slbs[_i0].esid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * new_addr;
          int benchRet = __slb_present(slbs,nr_slbs,new_addr);
          printf("%d\n", benchRet); 
          free(slbs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
