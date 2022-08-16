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
struct aoe_atahdr {int lba0; int lba1; int lba2; int lba3; int lba4; int lba5; } ;
typedef  int sector_t ;

/* Variables and functions */

__attribute__((used)) static inline void
put_lba(struct aoe_atahdr *ah, sector_t lba)
{
	ah->lba0 = lba;
	ah->lba1 = lba >>= 8;
	ah->lba2 = lba >>= 8;
	ah->lba3 = lba >>= 8;
	ah->lba4 = lba >>= 8;
	ah->lba5 = lba >>= 8;
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
          int _len_ah0 = 1;
          struct aoe_atahdr * ah = (struct aoe_atahdr *) malloc(_len_ah0*sizeof(struct aoe_atahdr));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
            ah[_i0].lba0 = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].lba1 = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].lba2 = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].lba3 = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].lba4 = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].lba5 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          put_lba(ah,lba);
          free(ah);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
