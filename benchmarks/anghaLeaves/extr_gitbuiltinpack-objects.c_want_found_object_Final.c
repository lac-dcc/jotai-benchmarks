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
struct packed_git {scalar_t__ pack_keep_in_core; scalar_t__ pack_keep; scalar_t__ pack_local; } ;

/* Variables and functions */
 int /*<<< orphan*/  have_non_local_packs ; 
 scalar_t__ ignore_packed_keep_in_core ; 
 scalar_t__ ignore_packed_keep_on_disk ; 
 scalar_t__ incremental ; 
 scalar_t__ local ; 

__attribute__((used)) static int want_found_object(int exclude, struct packed_git *p)
{
	if (exclude)
		return 1;
	if (incremental)
		return 0;

	/*
	 * When asked to do --local (do not include an object that appears in a
	 * pack we borrow from elsewhere) or --honor-pack-keep (do not include
	 * an object that appears in a pack marked with .keep), finding a pack
	 * that matches the criteria is sufficient for us to decide to omit it.
	 * However, even if this pack does not satisfy the criteria, we need to
	 * make sure no copy of this object appears in _any_ pack that makes us
	 * to omit the object, so we need to check all the packs.
	 *
	 * We can however first check whether these options can possible matter;
	 * if they do not matter we know we want the object in generated pack.
	 * Otherwise, we signal "-1" at the end to tell the caller that we do
	 * not know either way, and it needs to check more packs.
	 */
	if (!ignore_packed_keep_on_disk &&
	    !ignore_packed_keep_in_core &&
	    (!local || !have_non_local_packs))
		return 1;

	if (local && !p->pack_local)
		return 0;
	if (p->pack_local &&
	    ((ignore_packed_keep_on_disk && p->pack_keep) ||
	     (ignore_packed_keep_in_core && p->pack_keep_in_core)))
		return 0;

	/* we don't know yet; keep looking for more packs */
	return -1;
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
          int exclude = 100;
          int _len_p0 = 1;
          struct packed_git * p = (struct packed_git *) malloc(_len_p0*sizeof(struct packed_git));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].pack_keep_in_core = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].pack_keep = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].pack_local = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = want_found_object(exclude,p);
          printf("%d\n", benchRet); 
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
