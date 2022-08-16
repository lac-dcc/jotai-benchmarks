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
       1            big-arr-10x\n\
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
struct qed_ptt {int idx; } ;
struct pxp_ptt_entry {int dummy; } ;

/* Variables and functions */
 scalar_t__ PXP_PF_WINDOW_ADMIN_PER_PF_START ; 

__attribute__((used)) static u32 qed_ptt_config_addr(struct qed_ptt *p_ptt)
{
	return PXP_PF_WINDOW_ADMIN_PER_PF_START +
	       p_ptt->idx * sizeof(struct pxp_ptt_entry);
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
          int _len_p_ptt0 = 1;
          struct qed_ptt * p_ptt = (struct qed_ptt *) malloc(_len_p_ptt0*sizeof(struct qed_ptt));
          for(int _i0 = 0; _i0 < _len_p_ptt0; _i0++) {
            p_ptt[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = qed_ptt_config_addr(p_ptt);
          printf("%ld\n", benchRet); 
          free(p_ptt);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_p_ptt0 = 100;
          struct qed_ptt * p_ptt = (struct qed_ptt *) malloc(_len_p_ptt0*sizeof(struct qed_ptt));
          for(int _i0 = 0; _i0 < _len_p_ptt0; _i0++) {
            p_ptt[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = qed_ptt_config_addr(p_ptt);
          printf("%ld\n", benchRet); 
          free(p_ptt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
