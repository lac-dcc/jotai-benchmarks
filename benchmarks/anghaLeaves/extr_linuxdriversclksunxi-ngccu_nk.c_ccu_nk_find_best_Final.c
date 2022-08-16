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
struct _ccu_nk {unsigned int min_k; unsigned int max_k; unsigned int min_n; unsigned int max_n; unsigned int k; unsigned int n; } ;

/* Variables and functions */

__attribute__((used)) static void ccu_nk_find_best(unsigned long parent, unsigned long rate,
			     struct _ccu_nk *nk)
{
	unsigned long best_rate = 0;
	unsigned int best_k = 0, best_n = 0;
	unsigned int _k, _n;

	for (_k = nk->min_k; _k <= nk->max_k; _k++) {
		for (_n = nk->min_n; _n <= nk->max_n; _n++) {
			unsigned long tmp_rate = parent * _n * _k;

			if (tmp_rate > rate)
				continue;

			if ((rate - tmp_rate) < (rate - best_rate)) {
				best_rate = tmp_rate;
				best_k = _k;
				best_n = _n;
			}
		}
	}

	nk->k = best_k;
	nk->n = best_n;
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
          unsigned long parent = 100;
          unsigned long rate = 100;
          int _len_nk0 = 1;
          struct _ccu_nk * nk = (struct _ccu_nk *) malloc(_len_nk0*sizeof(struct _ccu_nk));
          for(int _i0 = 0; _i0 < _len_nk0; _i0++) {
            nk[_i0].min_k = ((-2 * (next_i()%2)) + 1) * next_i();
        nk[_i0].max_k = ((-2 * (next_i()%2)) + 1) * next_i();
        nk[_i0].min_n = ((-2 * (next_i()%2)) + 1) * next_i();
        nk[_i0].max_n = ((-2 * (next_i()%2)) + 1) * next_i();
        nk[_i0].k = ((-2 * (next_i()%2)) + 1) * next_i();
        nk[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ccu_nk_find_best(parent,rate,nk);
          free(nk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
