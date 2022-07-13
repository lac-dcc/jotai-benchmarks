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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct ttm_tt {int dummy; } ;
struct amdgpu_ttm_tt {int userflags; } ;

/* Variables and functions */
 int AMDGPU_GEM_USERPTR_READONLY ; 

bool amdgpu_ttm_tt_is_readonly(struct ttm_tt *ttm)
{
	struct amdgpu_ttm_tt *gtt = (void *)ttm;

	if (gtt == NULL)
		return false;

	return !!(gtt->userflags & AMDGPU_GEM_USERPTR_READONLY);
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
          int _len_ttm0 = 1;
          struct ttm_tt * ttm = (struct ttm_tt *) malloc(_len_ttm0*sizeof(struct ttm_tt));
          for(int _i0 = 0; _i0 < _len_ttm0; _i0++) {
            ttm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = amdgpu_ttm_tt_is_readonly(ttm);
          printf("%d\n", benchRet); 
          free(ttm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ttm0 = 65025;
          struct ttm_tt * ttm = (struct ttm_tt *) malloc(_len_ttm0*sizeof(struct ttm_tt));
          for(int _i0 = 0; _i0 < _len_ttm0; _i0++) {
            ttm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = amdgpu_ttm_tt_is_readonly(ttm);
          printf("%d\n", benchRet); 
          free(ttm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ttm0 = 100;
          struct ttm_tt * ttm = (struct ttm_tt *) malloc(_len_ttm0*sizeof(struct ttm_tt));
          for(int _i0 = 0; _i0 < _len_ttm0; _i0++) {
            ttm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = amdgpu_ttm_tt_is_readonly(ttm);
          printf("%d\n", benchRet); 
          free(ttm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
