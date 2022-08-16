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
struct dsa_switch {struct b53_device* priv; } ;
struct bcm_sf2_priv {int dummy; } ;
struct b53_device {struct bcm_sf2_priv* priv; } ;

/* Variables and functions */

__attribute__((used)) static inline struct bcm_sf2_priv *bcm_sf2_to_priv(struct dsa_switch *ds)
{
	struct b53_device *dev = ds->priv;

	return dev->priv;
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
          int _len_ds0 = 1;
          struct dsa_switch * ds = (struct dsa_switch *) malloc(_len_ds0*sizeof(struct dsa_switch));
          for(int _i0 = 0; _i0 < _len_ds0; _i0++) {
              int _len_ds__i0__priv0 = 1;
          ds[_i0].priv = (struct b53_device *) malloc(_len_ds__i0__priv0*sizeof(struct b53_device));
          for(int _j0 = 0; _j0 < _len_ds__i0__priv0; _j0++) {
              int _len_ds__i0__priv_priv0 = 1;
          ds[_i0].priv->priv = (struct bcm_sf2_priv *) malloc(_len_ds__i0__priv_priv0*sizeof(struct bcm_sf2_priv));
          for(int _j0 = 0; _j0 < _len_ds__i0__priv_priv0; _j0++) {
            ds[_i0].priv->priv->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct bcm_sf2_priv * benchRet = bcm_sf2_to_priv(ds);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ds0; _aux++) {
          free(ds[_aux].priv);
          }
          free(ds);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
