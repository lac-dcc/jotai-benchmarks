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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ mode; } ;
struct TYPE_4__ {int number_of_assembled_ant2_4; } ;
struct TYPE_6__ {TYPE_2__ ht; TYPE_1__ phy; } ;
struct wl18xx_priv {TYPE_3__ conf; } ;
struct wl1271 {struct wl18xx_priv* priv; } ;

/* Variables and functions */
 scalar_t__ HT_MODE_SISO20 ; 
 scalar_t__ HT_MODE_WIDE ; 

__attribute__((used)) static bool wl18xx_is_mimo_supported(struct wl1271 *wl)
{
	struct wl18xx_priv *priv = wl->priv;

	/* only support MIMO with multiple antennas, and when SISO
	 * is not forced through config
	 */
	return (priv->conf.phy.number_of_assembled_ant2_4 >= 2) &&
	       (priv->conf.ht.mode != HT_MODE_WIDE) &&
	       (priv->conf.ht.mode != HT_MODE_SISO20);
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
          int _len_wl0 = 1;
          struct wl1271 * wl = (struct wl1271 *) malloc(_len_wl0*sizeof(struct wl1271));
          for(int _i0 = 0; _i0 < _len_wl0; _i0++) {
              int _len_wl__i0__priv0 = 1;
          wl[_i0].priv = (struct wl18xx_priv *) malloc(_len_wl__i0__priv0*sizeof(struct wl18xx_priv));
          for(int _j0 = 0; _j0 < _len_wl__i0__priv0; _j0++) {
            wl[_i0].priv->conf.ht.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        wl[_i0].priv->conf.phy.number_of_assembled_ant2_4 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = wl18xx_is_mimo_supported(wl);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_wl0; _aux++) {
          free(wl[_aux].priv);
          }
          free(wl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
