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

/* Type definitions */
struct ipu_vdi {int dummy; } ;
struct ipu_soc {struct ipu_vdi* vdi_priv; } ;

/* Variables and functions */

struct ipu_vdi *ipu_vdi_get(struct ipu_soc *ipu)
{
	return ipu->vdi_priv;
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
          int _len_ipu0 = 1;
          struct ipu_soc * ipu = (struct ipu_soc *) malloc(_len_ipu0*sizeof(struct ipu_soc));
          for(int _i0 = 0; _i0 < _len_ipu0; _i0++) {
              int _len_ipu__i0__vdi_priv0 = 1;
          ipu[_i0].vdi_priv = (struct ipu_vdi *) malloc(_len_ipu__i0__vdi_priv0*sizeof(struct ipu_vdi));
          for(int _j0 = 0; _j0 < _len_ipu__i0__vdi_priv0; _j0++) {
            ipu[_i0].vdi_priv->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ipu_vdi * benchRet = ipu_vdi_get(ipu);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ipu0; _aux++) {
          free(ipu[_aux].vdi_priv);
          }
          free(ipu);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ipu0 = 65025;
          struct ipu_soc * ipu = (struct ipu_soc *) malloc(_len_ipu0*sizeof(struct ipu_soc));
          for(int _i0 = 0; _i0 < _len_ipu0; _i0++) {
              int _len_ipu__i0__vdi_priv0 = 1;
          ipu[_i0].vdi_priv = (struct ipu_vdi *) malloc(_len_ipu__i0__vdi_priv0*sizeof(struct ipu_vdi));
          for(int _j0 = 0; _j0 < _len_ipu__i0__vdi_priv0; _j0++) {
            ipu[_i0].vdi_priv->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ipu_vdi * benchRet = ipu_vdi_get(ipu);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ipu0; _aux++) {
          free(ipu[_aux].vdi_priv);
          }
          free(ipu);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ipu0 = 100;
          struct ipu_soc * ipu = (struct ipu_soc *) malloc(_len_ipu0*sizeof(struct ipu_soc));
          for(int _i0 = 0; _i0 < _len_ipu0; _i0++) {
              int _len_ipu__i0__vdi_priv0 = 1;
          ipu[_i0].vdi_priv = (struct ipu_vdi *) malloc(_len_ipu__i0__vdi_priv0*sizeof(struct ipu_vdi));
          for(int _j0 = 0; _j0 < _len_ipu__i0__vdi_priv0; _j0++) {
            ipu[_i0].vdi_priv->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ipu_vdi * benchRet = ipu_vdi_get(ipu);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ipu0; _aux++) {
          free(ipu[_aux].vdi_priv);
          }
          free(ipu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
