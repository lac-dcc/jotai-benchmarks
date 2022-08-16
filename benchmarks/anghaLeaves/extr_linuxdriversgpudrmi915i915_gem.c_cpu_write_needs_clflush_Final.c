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
struct drm_i915_gem_object {int cache_coherent; int pin_global; scalar_t__ cache_dirty; } ;

/* Variables and functions */
 int I915_BO_CACHE_COHERENT_FOR_WRITE ; 

__attribute__((used)) static bool cpu_write_needs_clflush(struct drm_i915_gem_object *obj)
{
	if (obj->cache_dirty)
		return false;

	if (!(obj->cache_coherent & I915_BO_CACHE_COHERENT_FOR_WRITE))
		return true;

	return obj->pin_global; /* currently in use by HW, keep flushed */
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
          int _len_obj0 = 1;
          struct drm_i915_gem_object * obj = (struct drm_i915_gem_object *) malloc(_len_obj0*sizeof(struct drm_i915_gem_object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0].cache_coherent = ((-2 * (next_i()%2)) + 1) * next_i();
        obj[_i0].pin_global = ((-2 * (next_i()%2)) + 1) * next_i();
        obj[_i0].cache_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cpu_write_needs_clflush(obj);
          printf("%d\n", benchRet); 
          free(obj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
