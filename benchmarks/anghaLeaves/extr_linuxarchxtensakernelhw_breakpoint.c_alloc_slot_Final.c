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
struct perf_event {int dummy; } ;

/* Variables and functions */
 int EBUSY ; 

__attribute__((used)) static int alloc_slot(struct perf_event **slot, size_t n,
		      struct perf_event *bp)
{
	size_t i;

	for (i = 0; i < n; ++i) {
		if (!slot[i]) {
			slot[i] = bp;
			return i;
		}
	}
	return -EBUSY;
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
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 3075
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 1285
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 1285
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 1285
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 1285
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 1285
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 1540
          // ------------------------------- 

          unsigned long n = 255;
        
          int _len_slot0 = 65025;
          struct perf_event ** slot = (struct perf_event **) malloc(_len_slot0*sizeof(struct perf_event *));
          for(int _i0 = 0; _i0 < _len_slot0; _i0++) {
            int _len_slot1 = 1;
            slot[_i0] = (struct perf_event *) malloc(_len_slot1*sizeof(struct perf_event));
            for(int _i1 = 0; _i1 < _len_slot1; _i1++) {
                slot[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int _len_bp0 = 65025;
          struct perf_event * bp = (struct perf_event *) malloc(_len_bp0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
              bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = alloc_slot(slot,n,bp);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_slot0; i1++) {
              free(slot[i1]);
          }
          free(slot);
          free(bp);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 135
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 60
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 60
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 60
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 60
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 60
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 70
          // ------------------------------- 

          unsigned long n = 10;
        
          int _len_slot0 = 100;
          struct perf_event ** slot = (struct perf_event **) malloc(_len_slot0*sizeof(struct perf_event *));
          for(int _i0 = 0; _i0 < _len_slot0; _i0++) {
            int _len_slot1 = 1;
            slot[_i0] = (struct perf_event *) malloc(_len_slot1*sizeof(struct perf_event));
            for(int _i1 = 0; _i1 < _len_slot1; _i1++) {
                slot[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          int _len_bp0 = 100;
          struct perf_event * bp = (struct perf_event *) malloc(_len_bp0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
              bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = alloc_slot(slot,n,bp);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_slot0; i1++) {
              free(slot[i1]);
          }
          free(slot);
          free(bp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
