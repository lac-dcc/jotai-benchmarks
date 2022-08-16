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
typedef  int /*<<< orphan*/  dwc_otg_pcd_t ;

/* Variables and functions */

__attribute__((used)) static inline void print_ep0_state(dwc_otg_pcd_t * pcd)
{
#ifdef DEBUG
	char str[40];

	switch (pcd->ep0state) {
	case EP0_DISCONNECT:
		dwc_strcpy(str, "EP0_DISCONNECT");
		break;
	case EP0_IDLE:
		dwc_strcpy(str, "EP0_IDLE");
		break;
	case EP0_IN_DATA_PHASE:
		dwc_strcpy(str, "EP0_IN_DATA_PHASE");
		break;
	case EP0_OUT_DATA_PHASE:
		dwc_strcpy(str, "EP0_OUT_DATA_PHASE");
		break;
	case EP0_IN_STATUS_PHASE:
		dwc_strcpy(str, "EP0_IN_STATUS_PHASE");
		break;
	case EP0_OUT_STATUS_PHASE:
		dwc_strcpy(str, "EP0_OUT_STATUS_PHASE");
		break;
	case EP0_STALL:
		dwc_strcpy(str, "EP0_STALL");
		break;
	default:
		dwc_strcpy(str, "EP0_INVALID");
	}

	DWC_DEBUGPL(DBG_ANY, "%s(%d)\n", str, pcd->ep0state);
#endif
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
          int _len_pcd0 = 1;
          int * pcd = (int *) malloc(_len_pcd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcd0; _i0++) {
            pcd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          print_ep0_state(pcd);
          free(pcd);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pcd0 = 100;
          int * pcd = (int *) malloc(_len_pcd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcd0; _i0++) {
            pcd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          print_ep0_state(pcd);
          free(pcd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
