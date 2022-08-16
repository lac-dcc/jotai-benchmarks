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
struct opa_vnic_grp_stats {int /*<<< orphan*/  s_64; int /*<<< orphan*/  s_65_127; int /*<<< orphan*/  s_128_255; int /*<<< orphan*/  s_256_511; int /*<<< orphan*/  s_512_1023; int /*<<< orphan*/  s_1024_1518; int /*<<< orphan*/  s_1519_max; } ;

/* Variables and functions */

__attribute__((used)) static inline void update_len_counters(struct opa_vnic_grp_stats *grp,
				       int len)
{
	/* account for 4 byte FCS */
	if (len >= 1515)
		grp->s_1519_max++;
	else if (len >= 1020)
		grp->s_1024_1518++;
	else if (len >= 508)
		grp->s_512_1023++;
	else if (len >= 252)
		grp->s_256_511++;
	else if (len >= 124)
		grp->s_128_255++;
	else if (len >= 61)
		grp->s_65_127++;
	else
		grp->s_64++;
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
          int len = 100;
          int _len_grp0 = 1;
          struct opa_vnic_grp_stats * grp = (struct opa_vnic_grp_stats *) malloc(_len_grp0*sizeof(struct opa_vnic_grp_stats));
          for(int _i0 = 0; _i0 < _len_grp0; _i0++) {
            grp[_i0].s_64 = ((-2 * (next_i()%2)) + 1) * next_i();
        grp[_i0].s_65_127 = ((-2 * (next_i()%2)) + 1) * next_i();
        grp[_i0].s_128_255 = ((-2 * (next_i()%2)) + 1) * next_i();
        grp[_i0].s_256_511 = ((-2 * (next_i()%2)) + 1) * next_i();
        grp[_i0].s_512_1023 = ((-2 * (next_i()%2)) + 1) * next_i();
        grp[_i0].s_1024_1518 = ((-2 * (next_i()%2)) + 1) * next_i();
        grp[_i0].s_1519_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_len_counters(grp,len);
          free(grp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
