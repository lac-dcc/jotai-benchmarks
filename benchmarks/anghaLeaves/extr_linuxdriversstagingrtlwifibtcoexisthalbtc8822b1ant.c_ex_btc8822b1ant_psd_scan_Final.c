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
typedef  int /*<<< orphan*/  u32 ;
struct btc_coexist {int dummy; } ;

/* Variables and functions */

void ex_btc8822b1ant_psd_scan(struct btc_coexist *btcoexist, u32 cent_freq,
			      u32 offset, u32 span, u32 seconds)
{
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
          int cent_freq = 100;
          int offset = 100;
          int span = 100;
          int seconds = 100;
          int _len_btcoexist0 = 1;
          struct btc_coexist * btcoexist = (struct btc_coexist *) malloc(_len_btcoexist0*sizeof(struct btc_coexist));
          for(int _i0 = 0; _i0 < _len_btcoexist0; _i0++) {
            btcoexist[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ex_btc8822b1ant_psd_scan(btcoexist,cent_freq,offset,span,seconds);
          free(btcoexist);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int cent_freq = 10;
          int offset = 10;
          int span = 10;
          int seconds = 10;
          int _len_btcoexist0 = 100;
          struct btc_coexist * btcoexist = (struct btc_coexist *) malloc(_len_btcoexist0*sizeof(struct btc_coexist));
          for(int _i0 = 0; _i0 < _len_btcoexist0; _i0++) {
            btcoexist[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ex_btc8822b1ant_psd_scan(btcoexist,cent_freq,offset,span,seconds);
          free(btcoexist);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
