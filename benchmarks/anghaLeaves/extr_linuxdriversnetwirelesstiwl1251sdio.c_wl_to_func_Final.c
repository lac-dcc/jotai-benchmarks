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
struct wl1251_sdio {struct sdio_func* func; } ;
struct wl1251 {struct wl1251_sdio* if_priv; } ;
struct sdio_func {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct sdio_func *wl_to_func(struct wl1251 *wl)
{
	struct wl1251_sdio *wl_sdio = wl->if_priv;
	return wl_sdio->func;
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
          struct wl1251 * wl = (struct wl1251 *) malloc(_len_wl0*sizeof(struct wl1251));
          for(int _i0 = 0; _i0 < _len_wl0; _i0++) {
              int _len_wl__i0__if_priv0 = 1;
          wl[_i0].if_priv = (struct wl1251_sdio *) malloc(_len_wl__i0__if_priv0*sizeof(struct wl1251_sdio));
          for(int _j0 = 0; _j0 < _len_wl__i0__if_priv0; _j0++) {
              int _len_wl__i0__if_priv_func0 = 1;
          wl[_i0].if_priv->func = (struct sdio_func *) malloc(_len_wl__i0__if_priv_func0*sizeof(struct sdio_func));
          for(int _j0 = 0; _j0 < _len_wl__i0__if_priv_func0; _j0++) {
            wl[_i0].if_priv->func->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct sdio_func * benchRet = wl_to_func(wl);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_wl0; _aux++) {
          free(wl[_aux].if_priv);
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
