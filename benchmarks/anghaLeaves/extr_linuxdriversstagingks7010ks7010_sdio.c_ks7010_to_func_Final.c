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
struct sdio_func {int dummy; } ;
struct ks_wlan_private {struct ks_sdio_card* if_hw; } ;
struct ks_sdio_card {struct sdio_func* func; } ;

/* Variables and functions */

__attribute__((used)) static struct sdio_func *ks7010_to_func(struct ks_wlan_private *priv)
{
	struct ks_sdio_card *ks_sdio = priv->if_hw;

	return ks_sdio->func;
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
          int _len_priv0 = 1;
          struct ks_wlan_private * priv = (struct ks_wlan_private *) malloc(_len_priv0*sizeof(struct ks_wlan_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__if_hw0 = 1;
          priv[_i0].if_hw = (struct ks_sdio_card *) malloc(_len_priv__i0__if_hw0*sizeof(struct ks_sdio_card));
          for(int _j0 = 0; _j0 < _len_priv__i0__if_hw0; _j0++) {
              int _len_priv__i0__if_hw_func0 = 1;
          priv[_i0].if_hw->func = (struct sdio_func *) malloc(_len_priv__i0__if_hw_func0*sizeof(struct sdio_func));
          for(int _j0 = 0; _j0 < _len_priv__i0__if_hw_func0; _j0++) {
            priv[_i0].if_hw->func->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct sdio_func * benchRet = ks7010_to_func(priv);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].if_hw);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
