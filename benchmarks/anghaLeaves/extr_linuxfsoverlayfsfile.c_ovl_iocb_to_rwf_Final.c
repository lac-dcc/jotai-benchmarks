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
struct kiocb {int ki_flags; } ;
typedef  int /*<<< orphan*/  rwf_t ;

/* Variables and functions */
 int IOCB_DSYNC ; 
 int IOCB_HIPRI ; 
 int IOCB_NOWAIT ; 
 int IOCB_SYNC ; 
 int /*<<< orphan*/  RWF_DSYNC ; 
 int /*<<< orphan*/  RWF_HIPRI ; 
 int /*<<< orphan*/  RWF_NOWAIT ; 
 int /*<<< orphan*/  RWF_SYNC ; 

__attribute__((used)) static rwf_t ovl_iocb_to_rwf(struct kiocb *iocb)
{
	int ifl = iocb->ki_flags;
	rwf_t flags = 0;

	if (ifl & IOCB_NOWAIT)
		flags |= RWF_NOWAIT;
	if (ifl & IOCB_HIPRI)
		flags |= RWF_HIPRI;
	if (ifl & IOCB_DSYNC)
		flags |= RWF_DSYNC;
	if (ifl & IOCB_SYNC)
		flags |= RWF_SYNC;

	return flags;
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
          int _len_iocb0 = 1;
          struct kiocb * iocb = (struct kiocb *) malloc(_len_iocb0*sizeof(struct kiocb));
          for(int _i0 = 0; _i0 < _len_iocb0; _i0++) {
            iocb[_i0].ki_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ovl_iocb_to_rwf(iocb);
          printf("%d\n", benchRet); 
          free(iocb);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_iocb0 = 100;
          struct kiocb * iocb = (struct kiocb *) malloc(_len_iocb0*sizeof(struct kiocb));
          for(int _i0 = 0; _i0 < _len_iocb0; _i0++) {
            iocb[_i0].ki_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ovl_iocb_to_rwf(iocb);
          printf("%d\n", benchRet); 
          free(iocb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
