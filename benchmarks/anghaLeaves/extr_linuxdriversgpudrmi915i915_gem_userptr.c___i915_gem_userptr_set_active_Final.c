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
struct drm_i915_gem_object {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int
__i915_gem_userptr_set_active(struct drm_i915_gem_object *obj,
			      bool value)
{
	int ret = 0;

	/* During mm_invalidate_range we need to cancel any userptr that
	 * overlaps the range being invalidated. Doing so requires the
	 * struct_mutex, and that risks recursion. In order to cause
	 * recursion, the user must alias the userptr address space with
	 * a GTT mmapping (possible with a MAP_FIXED) - then when we have
	 * to invalidate that mmaping, mm_invalidate_range is called with
	 * the userptr address *and* the struct_mutex held.  To prevent that
	 * we set a flag under the i915_mmu_notifier spinlock to indicate
	 * whether this object is valid.
	 */
#if defined(CONFIG_MMU_NOTIFIER)
	if (obj->userptr.mmu_object == NULL)
		return 0;

	spin_lock(&obj->userptr.mmu_object->mn->lock);
	/* In order to serialise get_pages with an outstanding
	 * cancel_userptr, we must drop the struct_mutex and try again.
	 */
	if (!value)
		del_object(obj->userptr.mmu_object);
	else if (!work_pending(&obj->userptr.mmu_object->work))
		add_object(obj->userptr.mmu_object);
	else
		ret = -EAGAIN;
	spin_unlock(&obj->userptr.mmu_object->mn->lock);
#endif

	return ret;
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
          int value = 100;
          int _len_obj0 = 1;
          struct drm_i915_gem_object * obj = (struct drm_i915_gem_object *) malloc(_len_obj0*sizeof(struct drm_i915_gem_object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __i915_gem_userptr_set_active(obj,value);
          printf("%d\n", benchRet); 
          free(obj);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int value = 10;
          int _len_obj0 = 100;
          struct drm_i915_gem_object * obj = (struct drm_i915_gem_object *) malloc(_len_obj0*sizeof(struct drm_i915_gem_object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __i915_gem_userptr_set_active(obj,value);
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
