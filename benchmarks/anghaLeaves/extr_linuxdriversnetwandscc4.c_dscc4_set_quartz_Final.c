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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct dscc4_dev_priv {TYPE_1__* pci_priv; } ;
struct TYPE_2__ {int xtal_hz; } ;

/* Variables and functions */
 int DSCC4_HZ_MAX ; 
 int EOPNOTSUPP ; 

__attribute__((used)) static inline int dscc4_set_quartz(struct dscc4_dev_priv *dpriv, int hz)
{
	int ret = 0;

	if ((hz < 0) || (hz > DSCC4_HZ_MAX))
		ret = -EOPNOTSUPP;
	else
		dpriv->pci_priv->xtal_hz = hz;

	return ret;
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
          int hz = 100;
          int _len_dpriv0 = 1;
          struct dscc4_dev_priv * dpriv = (struct dscc4_dev_priv *) malloc(_len_dpriv0*sizeof(struct dscc4_dev_priv));
          for(int _i0 = 0; _i0 < _len_dpriv0; _i0++) {
              int _len_dpriv__i0__pci_priv0 = 1;
          dpriv[_i0].pci_priv = (struct TYPE_2__ *) malloc(_len_dpriv__i0__pci_priv0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dpriv__i0__pci_priv0; _j0++) {
            dpriv[_i0].pci_priv->xtal_hz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = dscc4_set_quartz(dpriv,hz);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dpriv0; _aux++) {
          free(dpriv[_aux].pci_priv);
          }
          free(dpriv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int hz = 255;
          int _len_dpriv0 = 65025;
          struct dscc4_dev_priv * dpriv = (struct dscc4_dev_priv *) malloc(_len_dpriv0*sizeof(struct dscc4_dev_priv));
          for(int _i0 = 0; _i0 < _len_dpriv0; _i0++) {
              int _len_dpriv__i0__pci_priv0 = 1;
          dpriv[_i0].pci_priv = (struct TYPE_2__ *) malloc(_len_dpriv__i0__pci_priv0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dpriv__i0__pci_priv0; _j0++) {
            dpriv[_i0].pci_priv->xtal_hz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = dscc4_set_quartz(dpriv,hz);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dpriv0; _aux++) {
          free(dpriv[_aux].pci_priv);
          }
          free(dpriv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hz = 10;
          int _len_dpriv0 = 100;
          struct dscc4_dev_priv * dpriv = (struct dscc4_dev_priv *) malloc(_len_dpriv0*sizeof(struct dscc4_dev_priv));
          for(int _i0 = 0; _i0 < _len_dpriv0; _i0++) {
              int _len_dpriv__i0__pci_priv0 = 1;
          dpriv[_i0].pci_priv = (struct TYPE_2__ *) malloc(_len_dpriv__i0__pci_priv0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dpriv__i0__pci_priv0; _j0++) {
            dpriv[_i0].pci_priv->xtal_hz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = dscc4_set_quartz(dpriv,hz);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dpriv0; _aux++) {
          free(dpriv[_aux].pci_priv);
          }
          free(dpriv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
