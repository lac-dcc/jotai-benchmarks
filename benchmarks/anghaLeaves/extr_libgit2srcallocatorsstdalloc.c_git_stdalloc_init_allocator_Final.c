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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  gfree; int /*<<< orphan*/  gmallocarray; int /*<<< orphan*/  greallocarray; int /*<<< orphan*/  grealloc; int /*<<< orphan*/  gsubstrdup; int /*<<< orphan*/  gstrndup; int /*<<< orphan*/  gstrdup; int /*<<< orphan*/  gcalloc; int /*<<< orphan*/  gmalloc; } ;
typedef  TYPE_1__ git_allocator ;

/* Variables and functions */
 int /*<<< orphan*/  stdalloc__calloc ; 
 int /*<<< orphan*/  stdalloc__free ; 
 int /*<<< orphan*/  stdalloc__malloc ; 
 int /*<<< orphan*/  stdalloc__mallocarray ; 
 int /*<<< orphan*/  stdalloc__realloc ; 
 int /*<<< orphan*/  stdalloc__reallocarray ; 
 int /*<<< orphan*/  stdalloc__strdup ; 
 int /*<<< orphan*/  stdalloc__strndup ; 
 int /*<<< orphan*/  stdalloc__substrdup ; 

int git_stdalloc_init_allocator(git_allocator *allocator)
{
	allocator->gmalloc = stdalloc__malloc;
	allocator->gcalloc = stdalloc__calloc;
	allocator->gstrdup = stdalloc__strdup;
	allocator->gstrndup = stdalloc__strndup;
	allocator->gsubstrdup = stdalloc__substrdup;
	allocator->grealloc = stdalloc__realloc;
	allocator->greallocarray = stdalloc__reallocarray;
	allocator->gmallocarray = stdalloc__mallocarray;
	allocator->gfree = stdalloc__free;
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
          int _len_allocator0 = 1;
          struct TYPE_3__ * allocator = (struct TYPE_3__ *) malloc(_len_allocator0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_allocator0; _i0++) {
            allocator[_i0].gfree = ((-2 * (next_i()%2)) + 1) * next_i();
        allocator[_i0].gmallocarray = ((-2 * (next_i()%2)) + 1) * next_i();
        allocator[_i0].greallocarray = ((-2 * (next_i()%2)) + 1) * next_i();
        allocator[_i0].grealloc = ((-2 * (next_i()%2)) + 1) * next_i();
        allocator[_i0].gsubstrdup = ((-2 * (next_i()%2)) + 1) * next_i();
        allocator[_i0].gstrndup = ((-2 * (next_i()%2)) + 1) * next_i();
        allocator[_i0].gstrdup = ((-2 * (next_i()%2)) + 1) * next_i();
        allocator[_i0].gcalloc = ((-2 * (next_i()%2)) + 1) * next_i();
        allocator[_i0].gmalloc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = git_stdalloc_init_allocator(allocator);
          printf("%d\n", benchRet); 
          free(allocator);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
