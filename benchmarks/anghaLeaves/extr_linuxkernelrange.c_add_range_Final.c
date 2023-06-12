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

/* Type definitions */
typedef  scalar_t__ u64 ;
struct range {scalar_t__ end; scalar_t__ start; } ;

/* Variables and functions */

int add_range(struct range *range, int az, int nr_range, u64 start, u64 end)
{
	if (start >= end)
		return nr_range;

	/* Out of slots: */
	if (nr_range >= az)
		return nr_range;

	range[nr_range].start = start;
	range[nr_range].end = end;

	nr_range++;

	return nr_range;
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 4
          // dynamic_instructions_O1 : 4
          // ------------------------------- 
          // static_instructions_O2 : 4
          // dynamic_instructions_O2 : 4
          // ------------------------------- 
          // static_instructions_O3 : 4
          // dynamic_instructions_O3 : 4
          // ------------------------------- 
          // static_instructions_Ofast : 4
          // dynamic_instructions_Ofast : 4
          // ------------------------------- 
          // static_instructions_Os : 4
          // dynamic_instructions_Os : 4
          // ------------------------------- 
          // static_instructions_Oz : 4
          // dynamic_instructions_Oz : 4
          // ------------------------------- 

          int az = 100;
        
          int nr_range = 100;
        
          long start = 100;
        
          long end = 100;
        
          int _len_range0 = 1;
          struct range * range = (struct range *) malloc(_len_range0*sizeof(struct range));
          for(int _i0 = 0; _i0 < _len_range0; _i0++) {
              range[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
          range[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = add_range(range,az,nr_range,start,end);
          printf("%d\n", benchRet); 
          free(range);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 4
          // dynamic_instructions_O1 : 4
          // ------------------------------- 
          // static_instructions_O2 : 4
          // dynamic_instructions_O2 : 4
          // ------------------------------- 
          // static_instructions_O3 : 4
          // dynamic_instructions_O3 : 4
          // ------------------------------- 
          // static_instructions_Ofast : 4
          // dynamic_instructions_Ofast : 4
          // ------------------------------- 
          // static_instructions_Os : 4
          // dynamic_instructions_Os : 4
          // ------------------------------- 
          // static_instructions_Oz : 4
          // dynamic_instructions_Oz : 4
          // ------------------------------- 

          int az = 255;
        
          int nr_range = 255;
        
          long start = 255;
        
          long end = 255;
        
          int _len_range0 = 65025;
          struct range * range = (struct range *) malloc(_len_range0*sizeof(struct range));
          for(int _i0 = 0; _i0 < _len_range0; _i0++) {
              range[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
          range[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = add_range(range,az,nr_range,start,end);
          printf("%d\n", benchRet); 
          free(range);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 4
          // dynamic_instructions_O1 : 4
          // ------------------------------- 
          // static_instructions_O2 : 4
          // dynamic_instructions_O2 : 4
          // ------------------------------- 
          // static_instructions_O3 : 4
          // dynamic_instructions_O3 : 4
          // ------------------------------- 
          // static_instructions_Ofast : 4
          // dynamic_instructions_Ofast : 4
          // ------------------------------- 
          // static_instructions_Os : 4
          // dynamic_instructions_Os : 4
          // ------------------------------- 
          // static_instructions_Oz : 4
          // dynamic_instructions_Oz : 4
          // ------------------------------- 

          int az = 10;
        
          int nr_range = 10;
        
          long start = 10;
        
          long end = 10;
        
          int _len_range0 = 100;
          struct range * range = (struct range *) malloc(_len_range0*sizeof(struct range));
          for(int _i0 = 0; _i0 < _len_range0; _i0++) {
              range[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
          range[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = add_range(range,az,nr_range,start,end);
          printf("%d\n", benchRet); 
          free(range);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 4
          // dynamic_instructions_O1 : 4
          // ------------------------------- 
          // static_instructions_O2 : 4
          // dynamic_instructions_O2 : 4
          // ------------------------------- 
          // static_instructions_O3 : 4
          // dynamic_instructions_O3 : 4
          // ------------------------------- 
          // static_instructions_Ofast : 4
          // dynamic_instructions_Ofast : 4
          // ------------------------------- 
          // static_instructions_Os : 4
          // dynamic_instructions_Os : 4
          // ------------------------------- 
          // static_instructions_Oz : 4
          // dynamic_instructions_Oz : 4
          // ------------------------------- 

          int az = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int nr_range = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long start = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long end = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_range0 = 1;
          struct range * range = (struct range *) malloc(_len_range0*sizeof(struct range));
          for(int _i0 = 0; _i0 < _len_range0; _i0++) {
              range[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
          range[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = add_range(range,az,nr_range,start,end);
          printf("%d\n", benchRet); 
          free(range);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
