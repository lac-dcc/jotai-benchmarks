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
struct async_icount {int /*<<< orphan*/  dcd; int /*<<< orphan*/  rng; int /*<<< orphan*/  cts; int /*<<< orphan*/  dsr; } ;

/* Variables and functions */
 unsigned char MCT_U232_MSR_DCD ; 
 unsigned char MCT_U232_MSR_DCTS ; 
 unsigned char MCT_U232_MSR_DDSR ; 
 unsigned char MCT_U232_MSR_DRI ; 

__attribute__((used)) static void mct_u232_msr_to_icount(struct async_icount *icount,
						unsigned char msr)
{
	/* Translate Control Line states */
	if (msr & MCT_U232_MSR_DDSR)
		icount->dsr++;
	if (msr & MCT_U232_MSR_DCTS)
		icount->cts++;
	if (msr & MCT_U232_MSR_DRI)
		icount->rng++;
	if (msr & MCT_U232_MSR_DCD)
		icount->dcd++;
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
          unsigned char msr = 100;
          int _len_icount0 = 1;
          struct async_icount * icount = (struct async_icount *) malloc(_len_icount0*sizeof(struct async_icount));
          for(int _i0 = 0; _i0 < _len_icount0; _i0++) {
            icount[_i0].dcd = ((-2 * (next_i()%2)) + 1) * next_i();
        icount[_i0].rng = ((-2 * (next_i()%2)) + 1) * next_i();
        icount[_i0].cts = ((-2 * (next_i()%2)) + 1) * next_i();
        icount[_i0].dsr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mct_u232_msr_to_icount(icount,msr);
          free(icount);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
