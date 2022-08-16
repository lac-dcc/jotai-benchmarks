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
struct link_config {unsigned int supported; int requested_fc; int fc; int advertising; int /*<<< orphan*/  autoneg; int /*<<< orphan*/  duplex; int /*<<< orphan*/  requested_duplex; int /*<<< orphan*/  speed; int /*<<< orphan*/  requested_speed; } ;

/* Variables and functions */
 int /*<<< orphan*/  AUTONEG_DISABLE ; 
 int /*<<< orphan*/  AUTONEG_ENABLE ; 
 int /*<<< orphan*/  DUPLEX_INVALID ; 
 int PAUSE_AUTONEG ; 
 int PAUSE_RX ; 
 int PAUSE_TX ; 
 int /*<<< orphan*/  SPEED_INVALID ; 
 int SUPPORTED_Autoneg ; 

__attribute__((used)) static void init_link_config(struct link_config *lc, unsigned int caps)
{
	lc->supported = caps;
	lc->requested_speed = lc->speed = SPEED_INVALID;
	lc->requested_duplex = lc->duplex = DUPLEX_INVALID;
	lc->requested_fc = lc->fc = PAUSE_RX | PAUSE_TX;
	if (lc->supported & SUPPORTED_Autoneg) {
		lc->advertising = lc->supported;
		lc->autoneg = AUTONEG_ENABLE;
		lc->requested_fc |= PAUSE_AUTONEG;
	} else {
		lc->advertising = 0;
		lc->autoneg = AUTONEG_DISABLE;
	}
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
          unsigned int caps = 100;
          int _len_lc0 = 1;
          struct link_config * lc = (struct link_config *) malloc(_len_lc0*sizeof(struct link_config));
          for(int _i0 = 0; _i0 < _len_lc0; _i0++) {
            lc[_i0].supported = ((-2 * (next_i()%2)) + 1) * next_i();
        lc[_i0].requested_fc = ((-2 * (next_i()%2)) + 1) * next_i();
        lc[_i0].fc = ((-2 * (next_i()%2)) + 1) * next_i();
        lc[_i0].advertising = ((-2 * (next_i()%2)) + 1) * next_i();
        lc[_i0].autoneg = ((-2 * (next_i()%2)) + 1) * next_i();
        lc[_i0].duplex = ((-2 * (next_i()%2)) + 1) * next_i();
        lc[_i0].requested_duplex = ((-2 * (next_i()%2)) + 1) * next_i();
        lc[_i0].speed = ((-2 * (next_i()%2)) + 1) * next_i();
        lc[_i0].requested_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_link_config(lc,caps);
          free(lc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
