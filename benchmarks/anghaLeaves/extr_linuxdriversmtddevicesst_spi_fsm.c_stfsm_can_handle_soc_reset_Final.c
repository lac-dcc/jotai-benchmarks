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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct stfsm {scalar_t__ reset_por; TYPE_1__* info; scalar_t__ reset_signal; } ;
struct TYPE_2__ {int flags; } ;

/* Variables and functions */
 int FLASH_FLAG_RESET ; 

__attribute__((used)) static bool stfsm_can_handle_soc_reset(struct stfsm *fsm)
{
	/* Reset signal is available on the board and supported by the device */
	if (fsm->reset_signal && fsm->info->flags & FLASH_FLAG_RESET)
		return true;

	/* Board-level logic forces a power-on-reset */
	if (fsm->reset_por)
		return true;

	/* Reset is not properly handled and may result in failure to reboot */
	return false;
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
          int _len_fsm0 = 1;
          struct stfsm * fsm = (struct stfsm *) malloc(_len_fsm0*sizeof(struct stfsm));
          for(int _i0 = 0; _i0 < _len_fsm0; _i0++) {
            fsm[_i0].reset_por = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fsm__i0__info0 = 1;
          fsm[_i0].info = (struct TYPE_2__ *) malloc(_len_fsm__i0__info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fsm__i0__info0; _j0++) {
            fsm[_i0].info->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fsm[_i0].reset_signal = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stfsm_can_handle_soc_reset(fsm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fsm0; _aux++) {
          free(fsm[_aux].info);
          }
          free(fsm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
