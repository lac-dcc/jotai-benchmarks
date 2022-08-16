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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u16 ;
struct TYPE_4__ {scalar_t__ x; } ;
struct TYPE_3__ {scalar_t__ x; } ;
struct tcm_area {TYPE_2__ p0; TYPE_1__ p1; } ;

/* Variables and functions */

__attribute__((used)) static inline u16 __tcm_area_width(struct tcm_area *area)
{
	return area->p1.x - area->p0.x + 1;
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
          int _len_area0 = 1;
          struct tcm_area * area = (struct tcm_area *) malloc(_len_area0*sizeof(struct tcm_area));
          for(int _i0 = 0; _i0 < _len_area0; _i0++) {
            area[_i0].p0.x = ((-2 * (next_i()%2)) + 1) * next_i();
        area[_i0].p1.x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = __tcm_area_width(area);
          printf("%ld\n", benchRet); 
          free(area);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
