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
typedef  scalar_t__ u32 ;
struct tipc_name_seq {scalar_t__ lower; scalar_t__ upper; } ;

/* Variables and functions */

int tipc_sub_check_overlap(struct tipc_name_seq *seq, u32 found_lower,
			   u32 found_upper)
{
	if (found_lower < seq->lower)
		found_lower = seq->lower;
	if (found_upper > seq->upper)
		found_upper = seq->upper;
	if (found_lower > found_upper)
		return 0;
	return 1;
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
          long found_lower = 100;
          long found_upper = 100;
          int _len_seq0 = 1;
          struct tipc_name_seq * seq = (struct tipc_name_seq *) malloc(_len_seq0*sizeof(struct tipc_name_seq));
          for(int _i0 = 0; _i0 < _len_seq0; _i0++) {
            seq[_i0].lower = ((-2 * (next_i()%2)) + 1) * next_i();
        seq[_i0].upper = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tipc_sub_check_overlap(seq,found_lower,found_upper);
          printf("%d\n", benchRet); 
          free(seq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
