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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u64 ;
struct TYPE_2__ {int /*<<< orphan*/  offset; } ;
struct qxl_bo {TYPE_1__ tbo; } ;

/* Variables and functions */

__attribute__((used)) static inline u64 qxl_bo_gpu_offset(struct qxl_bo *bo)
{
	return bo->tbo.offset;
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
          int _len_bo0 = 1;
          struct qxl_bo * bo = (struct qxl_bo *) malloc(_len_bo0*sizeof(struct qxl_bo));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
            bo[_i0].tbo.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qxl_bo_gpu_offset(bo);
          printf("%d\n", benchRet); 
          free(bo);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_bo0 = 100;
          struct qxl_bo * bo = (struct qxl_bo *) malloc(_len_bo0*sizeof(struct qxl_bo));
          for(int _i0 = 0; _i0 < _len_bo0; _i0++) {
            bo[_i0].tbo.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qxl_bo_gpu_offset(bo);
          printf("%d\n", benchRet); 
          free(bo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
