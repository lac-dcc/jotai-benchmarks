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
typedef  scalar_t__ uint64_t ;
struct amdgpu_sa_bo {scalar_t__ soffset; TYPE_1__* manager; } ;
struct TYPE_2__ {scalar_t__ gpu_addr; } ;

/* Variables and functions */

__attribute__((used)) static inline uint64_t amdgpu_sa_bo_gpu_addr(struct amdgpu_sa_bo *sa_bo)
{
	return sa_bo->manager->gpu_addr + sa_bo->soffset;
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
          int _len_sa_bo0 = 1;
          struct amdgpu_sa_bo * sa_bo = (struct amdgpu_sa_bo *) malloc(_len_sa_bo0*sizeof(struct amdgpu_sa_bo));
          for(int _i0 = 0; _i0 < _len_sa_bo0; _i0++) {
            sa_bo[_i0].soffset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sa_bo__i0__manager0 = 1;
          sa_bo[_i0].manager = (struct TYPE_2__ *) malloc(_len_sa_bo__i0__manager0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sa_bo__i0__manager0; _j0++) {
            sa_bo[_i0].manager->gpu_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = amdgpu_sa_bo_gpu_addr(sa_bo);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_sa_bo0; _aux++) {
          free(sa_bo[_aux].manager);
          }
          free(sa_bo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
