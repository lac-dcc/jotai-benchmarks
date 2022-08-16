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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint64_t ;
struct ttm_mem_global {TYPE_1__* zone_kernel; } ;
struct TYPE_2__ {int /*<<< orphan*/  max_mem; } ;

/* Variables and functions */

uint64_t ttm_get_kernel_zone_memory_size(struct ttm_mem_global *glob)
{
	return glob->zone_kernel->max_mem;
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
          int _len_glob0 = 1;
          struct ttm_mem_global * glob = (struct ttm_mem_global *) malloc(_len_glob0*sizeof(struct ttm_mem_global));
          for(int _i0 = 0; _i0 < _len_glob0; _i0++) {
              int _len_glob__i0__zone_kernel0 = 1;
          glob[_i0].zone_kernel = (struct TYPE_2__ *) malloc(_len_glob__i0__zone_kernel0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_glob__i0__zone_kernel0; _j0++) {
            glob[_i0].zone_kernel->max_mem = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ttm_get_kernel_zone_memory_size(glob);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_glob0; _aux++) {
          free(glob[_aux].zone_kernel);
          }
          free(glob);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
