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
struct patch {scalar_t__ is_rename; scalar_t__ is_copy; scalar_t__ is_new; scalar_t__ old_mode; scalar_t__ new_mode; scalar_t__ is_delete; } ;

/* Variables and functions */

__attribute__((used)) static inline int metadata_changes(struct patch *patch)
{
	return	patch->is_rename > 0 ||
		patch->is_copy > 0 ||
		patch->is_new > 0 ||
		patch->is_delete ||
		(patch->old_mode && patch->new_mode &&
		 patch->old_mode != patch->new_mode);
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
          int _len_patch0 = 1;
          struct patch * patch = (struct patch *) malloc(_len_patch0*sizeof(struct patch));
          for(int _i0 = 0; _i0 < _len_patch0; _i0++) {
            patch[_i0].is_rename = ((-2 * (next_i()%2)) + 1) * next_i();
        patch[_i0].is_copy = ((-2 * (next_i()%2)) + 1) * next_i();
        patch[_i0].is_new = ((-2 * (next_i()%2)) + 1) * next_i();
        patch[_i0].old_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        patch[_i0].new_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        patch[_i0].is_delete = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = metadata_changes(patch);
          printf("%d\n", benchRet); 
          free(patch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
