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
struct msm_gem_address_space {int dummy; } ;
struct drm_gem_object {int dummy; } ;

/* Variables and functions */

void msm_gem_put_iova(struct drm_gem_object *obj,
		struct msm_gem_address_space *aspace)
{
	// XXX TODO ..
	// NOTE: probably don't need a _locked() version.. we wouldn't
	// normally unmap here, but instead just mark that it could be
	// unmapped (if the iova refcnt drops to zero), but then later
	// if another _get_iova_locked() fails we can start unmapping
	// things that are no longer needed..
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
          struct drm_gem_object * obj = (struct drm_gem_object *) malloc(_len_obj0*sizeof(struct drm_gem_object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aspace0 = 1;
          struct msm_gem_address_space * aspace = (struct msm_gem_address_space *) malloc(_len_aspace0*sizeof(struct msm_gem_address_space));
          for(int _i0 = 0; _i0 < _len_aspace0; _i0++) {
            aspace[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          msm_gem_put_iova(obj,aspace);
          free(obj);
          free(aspace);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
