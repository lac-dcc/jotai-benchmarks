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
struct bridge_softc {int dummy; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 

__attribute__((used)) static int
bridge_ioctl_sma(struct bridge_softc *sc, void *arg)
{
#if BRIDGESTP
	struct ifbrparam *param = arg;

	if (!bridge_in_bsd_mode(sc)) {
		return (EOPNOTSUPP);
	}
	return (bstp_set_maxage(&sc->sc_stp, param->ifbrp_maxage));
#else /* !BRIDGESTP */
#pragma unused(sc, arg)
	return (EOPNOTSUPP);
#endif /* !BRIDGESTP */
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
          int _len_sc0 = 1;
          struct bridge_softc * sc = (struct bridge_softc *) malloc(_len_sc0*sizeof(struct bridge_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = bridge_ioctl_sma(sc,arg);
          printf("%d\n", benchRet); 
          free(sc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sc0 = 65025;
          struct bridge_softc * sc = (struct bridge_softc *) malloc(_len_sc0*sizeof(struct bridge_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = bridge_ioctl_sma(sc,arg);
          printf("%d\n", benchRet); 
          free(sc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sc0 = 100;
          struct bridge_softc * sc = (struct bridge_softc *) malloc(_len_sc0*sizeof(struct bridge_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * arg;
          int benchRet = bridge_ioctl_sma(sc,arg);
          printf("%d\n", benchRet); 
          free(sc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
