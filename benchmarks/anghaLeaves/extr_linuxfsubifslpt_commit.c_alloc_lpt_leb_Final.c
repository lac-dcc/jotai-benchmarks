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
struct ubifs_info {int lpt_first; int lpt_lebs; scalar_t__ leb_size; TYPE_1__* ltab; } ;
struct TYPE_2__ {int cmt; scalar_t__ free; scalar_t__ tgc; } ;

/* Variables and functions */
 int ENOSPC ; 

__attribute__((used)) static int alloc_lpt_leb(struct ubifs_info *c, int *lnum)
{
	int i, n;

	n = *lnum - c->lpt_first + 1;
	for (i = n; i < c->lpt_lebs; i++) {
		if (c->ltab[i].tgc || c->ltab[i].cmt)
			continue;
		if (c->ltab[i].free == c->leb_size) {
			c->ltab[i].cmt = 1;
			*lnum = i + c->lpt_first;
			return 0;
		}
	}

	for (i = 0; i < n; i++) {
		if (c->ltab[i].tgc || c->ltab[i].cmt)
			continue;
		if (c->ltab[i].free == c->leb_size) {
			c->ltab[i].cmt = 1;
			*lnum = i + c->lpt_first;
			return 0;
		}
	}
	return -ENOSPC;
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
            c[_i0].lpt_first = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].lpt_lebs = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].leb_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__ltab0 = 1;
          c[_i0].ltab = (struct TYPE_2__ *) malloc(_len_c__i0__ltab0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_c__i0__ltab0; _j0++) {
            c[_i0].ltab->cmt = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].ltab->free = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].ltab->tgc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_lnum0 = 1;
          int * lnum = (int *) malloc(_len_lnum0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lnum0; _i0++) {
            lnum[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = alloc_lpt_leb(c,lnum);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].ltab);
          }
          free(c);
          free(lnum);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
