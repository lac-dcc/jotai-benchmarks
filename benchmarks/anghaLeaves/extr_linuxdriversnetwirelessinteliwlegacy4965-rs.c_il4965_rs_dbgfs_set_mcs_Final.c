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
typedef  int /*<<< orphan*/  u32 ;
struct il_lq_sta {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void
il4965_rs_dbgfs_set_mcs(struct il_lq_sta *lq_sta, u32 * rate_n_flags, int idx)
{
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
          int idx = 100;
          int _len_lq_sta0 = 1;
          struct il_lq_sta * lq_sta = (struct il_lq_sta *) malloc(_len_lq_sta0*sizeof(struct il_lq_sta));
          for(int _i0 = 0; _i0 < _len_lq_sta0; _i0++) {
            lq_sta[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rate_n_flags0 = 1;
          int * rate_n_flags = (int *) malloc(_len_rate_n_flags0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rate_n_flags0; _i0++) {
            rate_n_flags[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          il4965_rs_dbgfs_set_mcs(lq_sta,rate_n_flags,idx);
          free(lq_sta);
          free(rate_n_flags);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
