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
struct brcmf_pub {int /*<<< orphan*/ * iflist; } ;

/* Variables and functions */
 int BRCMF_MAX_IFS ; 
 int ENOMEM ; 

__attribute__((used)) static int brcmf_get_first_free_bsscfgidx(struct brcmf_pub *drvr)
{
	int bsscfgidx;

	for (bsscfgidx = 0; bsscfgidx < BRCMF_MAX_IFS; bsscfgidx++) {
		/* bsscfgidx 1 is reserved for legacy P2P */
		if (bsscfgidx == 1)
			continue;
		if (!drvr->iflist[bsscfgidx])
			return bsscfgidx;
	}

	return -ENOMEM;
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
          int _len_drvr0 = 1;
          struct brcmf_pub * drvr = (struct brcmf_pub *) malloc(_len_drvr0*sizeof(struct brcmf_pub));
          for(int _i0 = 0; _i0 < _len_drvr0; _i0++) {
              int _len_drvr__i0__iflist0 = 1;
          drvr[_i0].iflist = (int *) malloc(_len_drvr__i0__iflist0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_drvr__i0__iflist0; _j0++) {
            drvr[_i0].iflist[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = brcmf_get_first_free_bsscfgidx(drvr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_drvr0; _aux++) {
          free(drvr[_aux].iflist);
          }
          free(drvr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
