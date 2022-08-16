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

/* Type definitions */
typedef  int /*<<< orphan*/  u32 ;
struct i915_vma {int flags; } ;
typedef  enum i915_cache_level { ____Placeholder_i915_cache_level } i915_cache_level ;

/* Variables and functions */
 int I915_VMA_GLOBAL_BIND ; 
 int I915_VMA_LOCAL_BIND ; 

__attribute__((used)) static int mock_bind_ggtt(struct i915_vma *vma,
			  enum i915_cache_level cache_level,
			  u32 flags)
{
	vma->flags |= I915_VMA_GLOBAL_BIND | I915_VMA_LOCAL_BIND;
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

    // int-bounds
    case 0:
    {
          enum i915_cache_level cache_level = 0;
          int flags = 100;
          int _len_vma0 = 1;
          struct i915_vma * vma = (struct i915_vma *) malloc(_len_vma0*sizeof(struct i915_vma));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
            vma[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mock_bind_ggtt(vma,cache_level,flags);
          printf("%d\n", benchRet); 
          free(vma);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum i915_cache_level cache_level = 0;
          int flags = 10;
          int _len_vma0 = 100;
          struct i915_vma * vma = (struct i915_vma *) malloc(_len_vma0*sizeof(struct i915_vma));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
            vma[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mock_bind_ggtt(vma,cache_level,flags);
          printf("%d\n", benchRet); 
          free(vma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
