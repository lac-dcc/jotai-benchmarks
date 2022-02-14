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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
union hsw_tsx_tuning {int /*<<< orphan*/  cycles_last_block; scalar_t__ value; } ;
typedef  int /*<<< orphan*/  u64 ;
struct pebs_record_skl {scalar_t__ tsx_tuning; } ;

/* Variables and functions */

__attribute__((used)) static inline u64 intel_hsw_weight(struct pebs_record_skl *pebs)
{
	if (pebs->tsx_tuning) {
		union hsw_tsx_tuning tsx = { .value = pebs->tsx_tuning };
		return tsx.cycles_last_block;
	}
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

    // big-arr
    case 0:
    {
          int _len_pebs0 = 1;
          struct pebs_record_skl * pebs = (struct pebs_record_skl *) malloc(_len_pebs0*sizeof(struct pebs_record_skl));
          for(int _i0 = 0; _i0 < _len_pebs0; _i0++) {
            pebs->tsx_tuning = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_hsw_weight(pebs);
          printf("%d\n", benchRet); 
          free(pebs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
