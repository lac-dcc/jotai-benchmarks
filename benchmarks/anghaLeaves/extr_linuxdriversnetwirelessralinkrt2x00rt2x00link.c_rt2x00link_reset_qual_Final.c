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
struct link_qual {scalar_t__ tx_failed; scalar_t__ tx_success; scalar_t__ rx_failed; scalar_t__ rx_success; } ;
struct TYPE_2__ {struct link_qual qual; } ;
struct rt2x00_dev {TYPE_1__ link; } ;

/* Variables and functions */

__attribute__((used)) static void rt2x00link_reset_qual(struct rt2x00_dev *rt2x00dev)
{
	struct link_qual *qual = &rt2x00dev->link.qual;

	qual->rx_success = 0;
	qual->rx_failed = 0;
	qual->tx_success = 0;
	qual->tx_failed = 0;
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
          int _len_rt2x00dev0 = 1;
          struct rt2x00_dev * rt2x00dev = (struct rt2x00_dev *) malloc(_len_rt2x00dev0*sizeof(struct rt2x00_dev));
          for(int _i0 = 0; _i0 < _len_rt2x00dev0; _i0++) {
            rt2x00dev[_i0].link.qual.tx_failed = ((-2 * (next_i()%2)) + 1) * next_i();
        rt2x00dev[_i0].link.qual.tx_success = ((-2 * (next_i()%2)) + 1) * next_i();
        rt2x00dev[_i0].link.qual.rx_failed = ((-2 * (next_i()%2)) + 1) * next_i();
        rt2x00dev[_i0].link.qual.rx_success = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rt2x00link_reset_qual(rt2x00dev);
          free(rt2x00dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
