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
       0            big-arr\n\
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
struct dm_space_map {int dummy; } ;
typedef  int /*<<< orphan*/  dm_block_t ;

/* Variables and functions */

__attribute__((used)) static int sm_bootstrap_count_is_more_than_one(struct dm_space_map *sm,
					       dm_block_t b, int *result)
{
	*result = 0;

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

    // big-arr
    case 0:
    {
          int b = 255;
          int _len_sm0 = 1;
          struct dm_space_map * sm = (struct dm_space_map *) malloc(_len_sm0*sizeof(struct dm_space_map));
          for(int _i0 = 0; _i0 < _len_sm0; _i0++) {
            sm->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_result0 = 65025;
          int * result = (int *) malloc(_len_result0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sm_bootstrap_count_is_more_than_one(sm,b,result);
          printf("%d\n", benchRet); 
          free(sm);
          free(result);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
