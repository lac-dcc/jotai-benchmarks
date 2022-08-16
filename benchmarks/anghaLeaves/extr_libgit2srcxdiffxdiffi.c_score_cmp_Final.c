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
struct split_score {scalar_t__ effective_indent; int penalty; } ;

/* Variables and functions */
 int INDENT_WEIGHT ; 

__attribute__((used)) static int score_cmp(struct split_score *s1, struct split_score *s2)
{
	/* -1 if s1.effective_indent < s2->effective_indent, etc. */
	int cmp_indents = ((s1->effective_indent > s2->effective_indent) -
			   (s1->effective_indent < s2->effective_indent));

	return INDENT_WEIGHT * cmp_indents + (s1->penalty - s2->penalty);
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
          int _len_s10 = 1;
          struct split_score * s1 = (struct split_score *) malloc(_len_s10*sizeof(struct split_score));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0].effective_indent = ((-2 * (next_i()%2)) + 1) * next_i();
        s1[_i0].penalty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s20 = 1;
          struct split_score * s2 = (struct split_score *) malloc(_len_s20*sizeof(struct split_score));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0].effective_indent = ((-2 * (next_i()%2)) + 1) * next_i();
        s2[_i0].penalty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = score_cmp(s1,s2);
          printf("%d\n", benchRet); 
          free(s1);
          free(s2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
