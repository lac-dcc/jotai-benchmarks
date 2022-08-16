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
struct ref_entry {scalar_t__ root_objectid; scalar_t__ parent; scalar_t__ owner; scalar_t__ offset; } ;

/* Variables and functions */

__attribute__((used)) static int comp_refs(struct ref_entry *ref1, struct ref_entry *ref2)
{
	if (ref1->root_objectid < ref2->root_objectid)
		return -1;
	if (ref1->root_objectid > ref2->root_objectid)
		return 1;
	if (ref1->parent < ref2->parent)
		return -1;
	if (ref1->parent > ref2->parent)
		return 1;
	if (ref1->owner < ref2->owner)
		return -1;
	if (ref1->owner > ref2->owner)
		return 1;
	if (ref1->offset < ref2->offset)
		return -1;
	if (ref1->offset > ref2->offset)
		return 1;
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
          int _len_ref10 = 1;
          struct ref_entry * ref1 = (struct ref_entry *) malloc(_len_ref10*sizeof(struct ref_entry));
          for(int _i0 = 0; _i0 < _len_ref10; _i0++) {
            ref1[_i0].root_objectid = ((-2 * (next_i()%2)) + 1) * next_i();
        ref1[_i0].parent = ((-2 * (next_i()%2)) + 1) * next_i();
        ref1[_i0].owner = ((-2 * (next_i()%2)) + 1) * next_i();
        ref1[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ref20 = 1;
          struct ref_entry * ref2 = (struct ref_entry *) malloc(_len_ref20*sizeof(struct ref_entry));
          for(int _i0 = 0; _i0 < _len_ref20; _i0++) {
            ref2[_i0].root_objectid = ((-2 * (next_i()%2)) + 1) * next_i();
        ref2[_i0].parent = ((-2 * (next_i()%2)) + 1) * next_i();
        ref2[_i0].owner = ((-2 * (next_i()%2)) + 1) * next_i();
        ref2[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = comp_refs(ref1,ref2);
          printf("%d\n", benchRet); 
          free(ref1);
          free(ref2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
