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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int nr_secs; } ;
struct pblk {int addrf_len; TYPE_1__ rl; } ;

/* Variables and functions */

__attribute__((used)) static size_t pblk_trans_map_size(struct pblk *pblk)
{
	int entry_size = 8;

	if (pblk->addrf_len < 32)
		entry_size = 4;

	return entry_size * pblk->rl.nr_secs;
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
          int _len_pblk0 = 1;
          struct pblk * pblk = (struct pblk *) malloc(_len_pblk0*sizeof(struct pblk));
          for(int _i0 = 0; _i0 < _len_pblk0; _i0++) {
            pblk[_i0].addrf_len = ((-2 * (next_i()%2)) + 1) * next_i();
        pblk[_i0].rl.nr_secs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = pblk_trans_map_size(pblk);
          printf("%lu\n", benchRet); 
          free(pblk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
