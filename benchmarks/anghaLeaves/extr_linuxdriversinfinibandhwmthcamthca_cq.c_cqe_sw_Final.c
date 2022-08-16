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
struct mthca_cqe {int owner; } ;

/* Variables and functions */
 int MTHCA_CQ_ENTRY_OWNER_HW ; 

__attribute__((used)) static inline struct mthca_cqe *cqe_sw(struct mthca_cqe *cqe)
{
	return MTHCA_CQ_ENTRY_OWNER_HW & cqe->owner ? NULL : cqe;
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
          int _len_cqe0 = 1;
          struct mthca_cqe * cqe = (struct mthca_cqe *) malloc(_len_cqe0*sizeof(struct mthca_cqe));
          for(int _i0 = 0; _i0 < _len_cqe0; _i0++) {
            cqe[_i0].owner = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mthca_cqe * benchRet = cqe_sw(cqe);
          printf("%d\n", (*benchRet).owner);
          free(cqe);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_cqe0 = 100;
          struct mthca_cqe * cqe = (struct mthca_cqe *) malloc(_len_cqe0*sizeof(struct mthca_cqe));
          for(int _i0 = 0; _i0 < _len_cqe0; _i0++) {
            cqe[_i0].owner = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mthca_cqe * benchRet = cqe_sw(cqe);
          printf("%d\n", (*benchRet).owner);
          free(cqe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
