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
struct resource {scalar_t__ end; scalar_t__ start; } ;
typedef  scalar_t__ resource_size_t ;

/* Variables and functions */

__attribute__((used)) static void resource_clip(struct resource *res, resource_size_t start,
			  resource_size_t end)
{
	resource_size_t low = 0, high = 0;

	if (res->end < start || res->start > end)
		return;		/* no conflict */

	if (res->start < start)
		low = start - res->start;

	if (res->end > end)
		high = res->end - end;

	/* Keep the area above or below the conflict, whichever is larger */
	if (low > high)
		res->end = start - 1;
	else
		res->start = end + 1;
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
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          long start = 100;
        
          long end = 100;
        
          int _len_res0 = 1;
          struct resource * res = (struct resource *) malloc(_len_res0*sizeof(struct resource));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              res[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
          res[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          resource_clip(res,start,end);
          free(res);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          long start = 255;
        
          long end = 255;
        
          int _len_res0 = 65025;
          struct resource * res = (struct resource *) malloc(_len_res0*sizeof(struct resource));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              res[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
          res[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          resource_clip(res,start,end);
          free(res);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          long start = 10;
        
          long end = 10;
        
          int _len_res0 = 100;
          struct resource * res = (struct resource *) malloc(_len_res0*sizeof(struct resource));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              res[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
          res[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          resource_clip(res,start,end);
          free(res);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          long start = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long end = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_res0 = 1;
          struct resource * res = (struct resource *) malloc(_len_res0*sizeof(struct resource));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              res[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
          res[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          resource_clip(res,start,end);
          free(res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
