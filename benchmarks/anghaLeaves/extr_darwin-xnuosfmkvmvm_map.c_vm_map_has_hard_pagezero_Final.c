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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* vm_map_t ;
typedef  scalar_t__ vm_map_offset_t ;
typedef  int boolean_t ;
struct TYPE_3__ {scalar_t__ min_offset; } ;

/* Variables and functions */

boolean_t
vm_map_has_hard_pagezero(
		vm_map_t 	map,
		vm_map_offset_t	pagezero_size)
{
	/*
	 * XXX FBDP
	 * We should lock the VM map (for read) here but we can get away
	 * with it for now because there can't really be any race condition:
	 * the VM map's min_offset is changed only when the VM map is created
	 * and when the zero page is established (when the binary gets loaded),
	 * and this routine gets called only when the task terminates and the
	 * VM map is being torn down, and when a new map is created via
	 * load_machfile()/execve().
	 */
	return (map->min_offset >= pagezero_size);
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
          long pagezero_size = 100;
          int _len_map0 = 1;
          struct TYPE_3__ * map = (struct TYPE_3__ *) malloc(_len_map0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0].min_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vm_map_has_hard_pagezero(map,pagezero_size);
          printf("%d\n", benchRet); 
          free(map);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long pagezero_size = 10;
          int _len_map0 = 100;
          struct TYPE_3__ * map = (struct TYPE_3__ *) malloc(_len_map0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
            map[_i0].min_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vm_map_has_hard_pagezero(map,pagezero_size);
          printf("%d\n", benchRet); 
          free(map);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
