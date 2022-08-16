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
typedef  int u32 ;
typedef  scalar_t__ u16 ;
struct hfi1_pportdata {scalar_t__ link_speed_active; scalar_t__ link_width_active; } ;

/* Variables and functions */
 scalar_t__ OPA_LINK_SPEED_25G ; 
#define  OPA_LINK_WIDTH_2X 130 
#define  OPA_LINK_WIDTH_3X 129 
#define  OPA_LINK_WIDTH_4X 128 

__attribute__((used)) static inline u32 active_egress_rate(struct hfi1_pportdata *ppd)
{
	u16 link_speed = ppd->link_speed_active;
	u16 link_width = ppd->link_width_active;
	u32 egress_rate;

	if (link_speed == OPA_LINK_SPEED_25G)
		egress_rate = 25000;
	else /* assume OPA_LINK_SPEED_12_5G */
		egress_rate = 12500;

	switch (link_width) {
	case OPA_LINK_WIDTH_4X:
		egress_rate *= 4;
		break;
	case OPA_LINK_WIDTH_3X:
		egress_rate *= 3;
		break;
	case OPA_LINK_WIDTH_2X:
		egress_rate *= 2;
		break;
	default:
		/* assume IB_WIDTH_1X */
		break;
	}

	return egress_rate;
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
          int _len_ppd0 = 1;
          struct hfi1_pportdata * ppd = (struct hfi1_pportdata *) malloc(_len_ppd0*sizeof(struct hfi1_pportdata));
          for(int _i0 = 0; _i0 < _len_ppd0; _i0++) {
            ppd[_i0].link_speed_active = ((-2 * (next_i()%2)) + 1) * next_i();
        ppd[_i0].link_width_active = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = active_egress_rate(ppd);
          printf("%d\n", benchRet); 
          free(ppd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
