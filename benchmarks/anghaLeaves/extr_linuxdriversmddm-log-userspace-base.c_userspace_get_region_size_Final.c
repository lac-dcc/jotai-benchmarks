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

/* Type definitions */
typedef  int /*<<< orphan*/  uint32_t ;
struct log_c {int /*<<< orphan*/  region_size; } ;
struct dm_dirty_log {struct log_c* context; } ;

/* Variables and functions */

__attribute__((used)) static uint32_t userspace_get_region_size(struct dm_dirty_log *log)
{
	struct log_c *lc = log->context;

	return lc->region_size;
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
          int _len_log0 = 1;
          struct dm_dirty_log * log = (struct dm_dirty_log *) malloc(_len_log0*sizeof(struct dm_dirty_log));
          for(int _i0 = 0; _i0 < _len_log0; _i0++) {
              int _len_log__i0__context0 = 1;
          log[_i0].context = (struct log_c *) malloc(_len_log__i0__context0*sizeof(struct log_c));
          for(int _j0 = 0; _j0 < _len_log__i0__context0; _j0++) {
            log[_i0].context->region_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = userspace_get_region_size(log);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_log0; _aux++) {
          free(log[_aux].context);
          }
          free(log);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
