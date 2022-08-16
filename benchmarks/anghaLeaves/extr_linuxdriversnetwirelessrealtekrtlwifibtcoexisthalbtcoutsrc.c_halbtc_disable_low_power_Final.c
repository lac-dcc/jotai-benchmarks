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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int bt_disable_low_pwr; } ;
struct btc_coexist {TYPE_1__ bt_info; } ;

/* Variables and functions */

__attribute__((used)) static void halbtc_disable_low_power(struct btc_coexist *btcoexist,
				     bool low_pwr_disable)
{
	/* TODO: original/leave 32k low power */
	btcoexist->bt_info.bt_disable_low_pwr = low_pwr_disable;
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
          int low_pwr_disable = 100;
          int _len_btcoexist0 = 1;
          struct btc_coexist * btcoexist = (struct btc_coexist *) malloc(_len_btcoexist0*sizeof(struct btc_coexist));
          for(int _i0 = 0; _i0 < _len_btcoexist0; _i0++) {
            btcoexist[_i0].bt_info.bt_disable_low_pwr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          halbtc_disable_low_power(btcoexist,low_pwr_disable);
          free(btcoexist);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int low_pwr_disable = 10;
          int _len_btcoexist0 = 100;
          struct btc_coexist * btcoexist = (struct btc_coexist *) malloc(_len_btcoexist0*sizeof(struct btc_coexist));
          for(int _i0 = 0; _i0 < _len_btcoexist0; _i0++) {
            btcoexist[_i0].bt_info.bt_disable_low_pwr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          halbtc_disable_low_power(btcoexist,low_pwr_disable);
          free(btcoexist);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
