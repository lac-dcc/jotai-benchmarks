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
typedef  int /*<<< orphan*/  u64 ;
struct nd_namespace_blk {int dummy; } ;
struct bio_integrity_payload {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int nd_blk_rw_integrity(struct nd_namespace_blk *nsblk,
		struct bio_integrity_payload *bip, u64 lba, int rw)
{
	return 0;
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
          int lba = 100;
          int rw = 100;
          int _len_nsblk0 = 1;
          struct nd_namespace_blk * nsblk = (struct nd_namespace_blk *) malloc(_len_nsblk0*sizeof(struct nd_namespace_blk));
          for(int _i0 = 0; _i0 < _len_nsblk0; _i0++) {
            nsblk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bip0 = 1;
          struct bio_integrity_payload * bip = (struct bio_integrity_payload *) malloc(_len_bip0*sizeof(struct bio_integrity_payload));
          for(int _i0 = 0; _i0 < _len_bip0; _i0++) {
            bip[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nd_blk_rw_integrity(nsblk,bip,lba,rw);
          printf("%d\n", benchRet); 
          free(nsblk);
          free(bip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
