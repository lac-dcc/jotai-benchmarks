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
typedef  int /*<<< orphan*/  u32 ;
struct zram {int dummy; } ;
struct bio_vec {int dummy; } ;
struct bio {int dummy; } ;

/* Variables and functions */
 int EIO ; 

__attribute__((used)) static int write_to_bdev(struct zram *zram, struct bio_vec *bvec,
					u32 index, struct bio *parent,
					unsigned long *pentry)

{
	return -EIO;
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
          int index = 100;
          int _len_zram0 = 1;
          struct zram * zram = (struct zram *) malloc(_len_zram0*sizeof(struct zram));
          for(int _i0 = 0; _i0 < _len_zram0; _i0++) {
            zram[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bvec0 = 1;
          struct bio_vec * bvec = (struct bio_vec *) malloc(_len_bvec0*sizeof(struct bio_vec));
          for(int _i0 = 0; _i0 < _len_bvec0; _i0++) {
            bvec[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parent0 = 1;
          struct bio * parent = (struct bio *) malloc(_len_parent0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_parent0; _i0++) {
            parent[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pentry0 = 1;
          unsigned long * pentry = (unsigned long *) malloc(_len_pentry0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_pentry0; _i0++) {
            pentry[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = write_to_bdev(zram,bvec,index,parent,pentry);
          printf("%d\n", benchRet); 
          free(zram);
          free(bvec);
          free(parent);
          free(pentry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
