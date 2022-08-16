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
struct sba_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void
sba_get_pat_resources(struct sba_device *sba_dev)
{
#if 0
/*
** TODO/REVISIT/FIXME: support for directed ranges requires calls to
**      PAT PDC to program the SBA/LBA directed range registers...this
**      burden may fall on the LBA code since it directly supports the
**      PCI subsystem. It's not clear yet. - ggg
*/
PAT_MOD(mod)->mod_info.mod_pages   = PAT_GET_MOD_PAGES(temp);
	FIXME : ???
PAT_MOD(mod)->mod_info.dvi         = PAT_GET_DVI(temp);
	Tells where the dvi bits are located in the address.
PAT_MOD(mod)->mod_info.ioc         = PAT_GET_IOC(temp);
	FIXME : ???
#endif
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
          int _len_sba_dev0 = 1;
          struct sba_device * sba_dev = (struct sba_device *) malloc(_len_sba_dev0*sizeof(struct sba_device));
          for(int _i0 = 0; _i0 < _len_sba_dev0; _i0++) {
            sba_dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sba_get_pat_resources(sba_dev);
          free(sba_dev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_sba_dev0 = 100;
          struct sba_device * sba_dev = (struct sba_device *) malloc(_len_sba_dev0*sizeof(struct sba_device));
          for(int _i0 = 0; _i0 < _len_sba_dev0; _i0++) {
            sba_dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sba_get_pat_resources(sba_dev);
          free(sba_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
