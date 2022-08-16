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
struct ocfs2_extent_map_item {unsigned int ei_cpos; unsigned int ei_clusters; } ;

/* Variables and functions */

__attribute__((used)) static int ocfs2_ei_is_contained(struct ocfs2_extent_map_item *emi1,
				 struct ocfs2_extent_map_item *emi2)
{
	unsigned int range1, range2;

	/*
	 * Check if logical start of emi2 is inside emi1
	 */
	range1 = emi1->ei_cpos + emi1->ei_clusters;
	if (emi2->ei_cpos >= emi1->ei_cpos && emi2->ei_cpos < range1)
		return 1;

	/*
	 * Check if logical end of emi2 is inside emi1
	 */
	range2 = emi2->ei_cpos + emi2->ei_clusters;
	if (range2 > emi1->ei_cpos && range2 <= range1)
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
          int _len_emi10 = 1;
          struct ocfs2_extent_map_item * emi1 = (struct ocfs2_extent_map_item *) malloc(_len_emi10*sizeof(struct ocfs2_extent_map_item));
          for(int _i0 = 0; _i0 < _len_emi10; _i0++) {
            emi1[_i0].ei_cpos = ((-2 * (next_i()%2)) + 1) * next_i();
        emi1[_i0].ei_clusters = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_emi20 = 1;
          struct ocfs2_extent_map_item * emi2 = (struct ocfs2_extent_map_item *) malloc(_len_emi20*sizeof(struct ocfs2_extent_map_item));
          for(int _i0 = 0; _i0 < _len_emi20; _i0++) {
            emi2[_i0].ei_cpos = ((-2 * (next_i()%2)) + 1) * next_i();
        emi2[_i0].ei_clusters = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ocfs2_ei_is_contained(emi1,emi2);
          printf("%d\n", benchRet); 
          free(emi1);
          free(emi2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
