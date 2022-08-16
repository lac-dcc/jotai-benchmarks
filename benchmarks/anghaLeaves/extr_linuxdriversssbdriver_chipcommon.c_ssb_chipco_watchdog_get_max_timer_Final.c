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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct ssb_chipcommon {int capabilities; TYPE_2__* dev; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; } ;

/* Variables and functions */
 int SSB_CHIPCO_CAP_PMU ; 

__attribute__((used)) static u32 ssb_chipco_watchdog_get_max_timer(struct ssb_chipcommon *cc)
{
	u32 nb;

	if (cc->capabilities & SSB_CHIPCO_CAP_PMU) {
		if (cc->dev->id.revision < 26)
			nb = 16;
		else
			nb = (cc->dev->id.revision >= 37) ? 32 : 24;
	} else {
		nb = 28;
	}
	if (nb == 32)
		return 0xffffffff;
	else
		return (1 << nb) - 1;
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
          int _len_cc0 = 1;
          struct ssb_chipcommon * cc = (struct ssb_chipcommon *) malloc(_len_cc0*sizeof(struct ssb_chipcommon));
          for(int _i0 = 0; _i0 < _len_cc0; _i0++) {
            cc[_i0].capabilities = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cc__i0__dev0 = 1;
          cc[_i0].dev = (struct TYPE_4__ *) malloc(_len_cc__i0__dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cc__i0__dev0; _j0++) {
            cc[_i0].dev->id.revision = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ssb_chipco_watchdog_get_max_timer(cc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cc0; _aux++) {
          free(cc[_aux].dev);
          }
          free(cc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
