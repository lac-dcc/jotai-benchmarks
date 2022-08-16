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
typedef  int uint ;
struct fec_enet_private {int work_rx; int work_tx; } ;

/* Variables and functions */
 int FEC_ENET_RXF_0 ; 
 int FEC_ENET_RXF_1 ; 
 int FEC_ENET_RXF_2 ; 
 int FEC_ENET_TXF_0 ; 
 int FEC_ENET_TXF_1 ; 
 int FEC_ENET_TXF_2 ; 

__attribute__((used)) static bool
fec_enet_collect_events(struct fec_enet_private *fep, uint int_events)
{
	if (int_events == 0)
		return false;

	if (int_events & FEC_ENET_RXF_0)
		fep->work_rx |= (1 << 2);
	if (int_events & FEC_ENET_RXF_1)
		fep->work_rx |= (1 << 0);
	if (int_events & FEC_ENET_RXF_2)
		fep->work_rx |= (1 << 1);

	if (int_events & FEC_ENET_TXF_0)
		fep->work_tx |= (1 << 2);
	if (int_events & FEC_ENET_TXF_1)
		fep->work_tx |= (1 << 0);
	if (int_events & FEC_ENET_TXF_2)
		fep->work_tx |= (1 << 1);

	return true;
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
          int int_events = 100;
          int _len_fep0 = 1;
          struct fec_enet_private * fep = (struct fec_enet_private *) malloc(_len_fep0*sizeof(struct fec_enet_private));
          for(int _i0 = 0; _i0 < _len_fep0; _i0++) {
            fep[_i0].work_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        fep[_i0].work_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fec_enet_collect_events(fep,int_events);
          printf("%d\n", benchRet); 
          free(fep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
