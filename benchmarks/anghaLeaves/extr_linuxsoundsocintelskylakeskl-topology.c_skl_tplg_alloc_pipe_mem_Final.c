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
struct skl_module_cfg {TYPE_2__* pipe; } ;
struct TYPE_3__ {int /*<<< orphan*/  mem; } ;
struct skl {TYPE_1__ resource; } ;
struct TYPE_4__ {scalar_t__ memory_pages; } ;

/* Variables and functions */

__attribute__((used)) static void skl_tplg_alloc_pipe_mem(struct skl *skl,
				struct skl_module_cfg *mconfig)
{
	skl->resource.mem += mconfig->pipe->memory_pages;
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
          int _len_skl0 = 1;
          struct skl * skl = (struct skl *) malloc(_len_skl0*sizeof(struct skl));
          for(int _i0 = 0; _i0 < _len_skl0; _i0++) {
            skl[_i0].resource.mem = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mconfig0 = 1;
          struct skl_module_cfg * mconfig = (struct skl_module_cfg *) malloc(_len_mconfig0*sizeof(struct skl_module_cfg));
          for(int _i0 = 0; _i0 < _len_mconfig0; _i0++) {
              int _len_mconfig__i0__pipe0 = 1;
          mconfig[_i0].pipe = (struct TYPE_4__ *) malloc(_len_mconfig__i0__pipe0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mconfig__i0__pipe0; _j0++) {
            mconfig[_i0].pipe->memory_pages = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          skl_tplg_alloc_pipe_mem(skl,mconfig);
          free(skl);
          for(int _aux = 0; _aux < _len_mconfig0; _aux++) {
          free(mconfig[_aux].pipe);
          }
          free(mconfig);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
