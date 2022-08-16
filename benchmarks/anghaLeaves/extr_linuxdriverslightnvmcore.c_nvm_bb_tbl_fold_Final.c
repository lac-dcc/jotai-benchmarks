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
typedef  int u8 ;
struct nvm_geo {int num_chk; int pln_mode; } ;
struct nvm_dev {struct nvm_geo geo; } ;

/* Variables and functions */
 int EINVAL ; 
 int NVM_BLK_T_BAD ; 
 int NVM_BLK_T_GRWN_BAD ; 

int nvm_bb_tbl_fold(struct nvm_dev *dev, u8 *blks, int nr_blks)
{
	struct nvm_geo *geo = &dev->geo;
	int blk, offset, pl, blktype;

	if (nr_blks != geo->num_chk * geo->pln_mode)
		return -EINVAL;

	for (blk = 0; blk < geo->num_chk; blk++) {
		offset = blk * geo->pln_mode;
		blktype = blks[offset];

		/* Bad blocks on any planes take precedence over other types */
		for (pl = 0; pl < geo->pln_mode; pl++) {
			if (blks[offset + pl] &
					(NVM_BLK_T_BAD|NVM_BLK_T_GRWN_BAD)) {
				blktype = blks[offset + pl];
				break;
			}
		}

		blks[blk] = blktype;
	}

	return geo->num_chk;
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
          int nr_blks = 100;
          int _len_dev0 = 1;
          struct nvm_dev * dev = (struct nvm_dev *) malloc(_len_dev0*sizeof(struct nvm_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].geo.num_chk = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].geo.pln_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_blks0 = 1;
          int * blks = (int *) malloc(_len_blks0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_blks0; _i0++) {
            blks[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nvm_bb_tbl_fold(dev,blks,nr_blks);
          printf("%d\n", benchRet); 
          free(dev);
          free(blks);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
