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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct setup_revision_opt {int dummy; } ;
struct TYPE_2__ {scalar_t__ output_format; } ;
struct rev_info {TYPE_1__ diffopt; scalar_t__ dense_combined_merges; } ;

/* Variables and functions */
 scalar_t__ DIFF_FORMAT_PATCH ; 
 scalar_t__ DIFF_FORMAT_RAW ; 

__attribute__((used)) static void diff_tree_tweak_rev(struct rev_info *rev, struct setup_revision_opt *opt)
{
	if (!rev->diffopt.output_format) {
		if (rev->dense_combined_merges)
			rev->diffopt.output_format = DIFF_FORMAT_PATCH;
		else
			rev->diffopt.output_format = DIFF_FORMAT_RAW;
	}
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
          int _len_rev0 = 1;
          struct rev_info * rev = (struct rev_info *) malloc(_len_rev0*sizeof(struct rev_info));
          for(int _i0 = 0; _i0 < _len_rev0; _i0++) {
            rev[_i0].diffopt.output_format = ((-2 * (next_i()%2)) + 1) * next_i();
        rev[_i0].dense_combined_merges = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opt0 = 1;
          struct setup_revision_opt * opt = (struct setup_revision_opt *) malloc(_len_opt0*sizeof(struct setup_revision_opt));
          for(int _i0 = 0; _i0 < _len_opt0; _i0++) {
            opt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          diff_tree_tweak_rev(rev,opt);
          free(rev);
          free(opt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
