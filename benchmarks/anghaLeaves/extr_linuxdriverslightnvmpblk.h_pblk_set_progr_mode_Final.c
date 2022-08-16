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
struct pblk {struct nvm_tgt_dev* dev; } ;
struct nvm_geo {scalar_t__ version; int pln_mode; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;

/* Variables and functions */
 int NVM_IO_SCRAMBLE_ENABLE ; 
 scalar_t__ NVM_OCSSD_SPEC_20 ; 
 int PBLK_WRITE ; 

__attribute__((used)) static inline int pblk_set_progr_mode(struct pblk *pblk, int type)
{
	struct nvm_tgt_dev *dev = pblk->dev;
	struct nvm_geo *geo = &dev->geo;
	int flags;

	if (geo->version == NVM_OCSSD_SPEC_20)
		return 0;

	flags = geo->pln_mode >> 1;

	if (type == PBLK_WRITE)
		flags |= NVM_IO_SCRAMBLE_ENABLE;

	return flags;
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
          int type = 100;
          int _len_pblk0 = 1;
          struct pblk * pblk = (struct pblk *) malloc(_len_pblk0*sizeof(struct pblk));
          for(int _i0 = 0; _i0 < _len_pblk0; _i0++) {
              int _len_pblk__i0__dev0 = 1;
          pblk[_i0].dev = (struct nvm_tgt_dev *) malloc(_len_pblk__i0__dev0*sizeof(struct nvm_tgt_dev));
          for(int _j0 = 0; _j0 < _len_pblk__i0__dev0; _j0++) {
            pblk[_i0].dev->geo.version = ((-2 * (next_i()%2)) + 1) * next_i();
        pblk[_i0].dev->geo.pln_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = pblk_set_progr_mode(pblk,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pblk0; _aux++) {
          free(pblk[_aux].dev);
          }
          free(pblk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
