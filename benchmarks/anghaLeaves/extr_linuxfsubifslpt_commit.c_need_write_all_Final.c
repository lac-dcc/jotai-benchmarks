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
struct ubifs_info {int lpt_lebs; scalar_t__ lpt_first; scalar_t__ nhead_lnum; scalar_t__ leb_size; scalar_t__ nhead_offs; int lpt_sz; TYPE_1__* ltab; } ;
struct TYPE_2__ {scalar_t__ free; scalar_t__ dirty; } ;

/* Variables and functions */

__attribute__((used)) static int need_write_all(struct ubifs_info *c)
{
	long long free = 0;
	int i;

	for (i = 0; i < c->lpt_lebs; i++) {
		if (i + c->lpt_first == c->nhead_lnum)
			free += c->leb_size - c->nhead_offs;
		else if (c->ltab[i].free == c->leb_size)
			free += c->leb_size;
		else if (c->ltab[i].free + c->ltab[i].dirty == c->leb_size)
			free += c->leb_size;
	}
	/* Less than twice the size left */
	if (free <= c->lpt_sz * 2)
		return 1;
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
          int _len_c0 = 1;
          struct ubifs_info * c = (struct ubifs_info *) malloc(_len_c0*sizeof(struct ubifs_info));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].lpt_lebs = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].lpt_first = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].nhead_lnum = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].leb_size = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].nhead_offs = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].lpt_sz = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__ltab0 = 1;
          c[_i0].ltab = (struct TYPE_2__ *) malloc(_len_c__i0__ltab0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_c__i0__ltab0; _j0++) {
            c[_i0].ltab->free = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].ltab->dirty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = need_write_all(c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].ltab);
          }
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
