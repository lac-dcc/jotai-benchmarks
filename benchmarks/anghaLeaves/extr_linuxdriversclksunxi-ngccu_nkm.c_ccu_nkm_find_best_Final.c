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
struct _ccu_nkm {unsigned long min_k; unsigned long max_k; unsigned long min_n; unsigned long max_n; unsigned long min_m; unsigned long max_m; unsigned long n; unsigned long k; unsigned long m; } ;

/* Variables and functions */

__attribute__((used)) static void ccu_nkm_find_best(unsigned long parent, unsigned long rate,
			      struct _ccu_nkm *nkm)
{
	unsigned long best_rate = 0;
	unsigned long best_n = 0, best_k = 0, best_m = 0;
	unsigned long _n, _k, _m;

	for (_k = nkm->min_k; _k <= nkm->max_k; _k++) {
		for (_n = nkm->min_n; _n <= nkm->max_n; _n++) {
			for (_m = nkm->min_m; _m <= nkm->max_m; _m++) {
				unsigned long tmp_rate;

				tmp_rate = parent * _n * _k / _m;

				if (tmp_rate > rate)
					continue;
				if ((rate - tmp_rate) < (rate - best_rate)) {
					best_rate = tmp_rate;
					best_n = _n;
					best_k = _k;
					best_m = _m;
				}
			}
		}
	}

	nkm->n = best_n;
	nkm->k = best_k;
	nkm->m = best_m;
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
          int _len_nkm0 = 1;
          struct _ccu_nkm * nkm = (struct _ccu_nkm *) malloc(_len_nkm0*sizeof(struct _ccu_nkm));
          for(int _i0 = 0; _i0 < _len_nkm0; _i0++) {
            nkm[_i0].min_k = ((-2 * (next_i()%2)) + 1) * next_i();
        nkm[_i0].max_k = ((-2 * (next_i()%2)) + 1) * next_i();
        nkm[_i0].min_n = ((-2 * (next_i()%2)) + 1) * next_i();
        nkm[_i0].max_n = ((-2 * (next_i()%2)) + 1) * next_i();
        nkm[_i0].min_m = ((-2 * (next_i()%2)) + 1) * next_i();
        nkm[_i0].max_m = ((-2 * (next_i()%2)) + 1) * next_i();
        nkm[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
        nkm[_i0].k = ((-2 * (next_i()%2)) + 1) * next_i();
        nkm[_i0].m = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ccu_nkm_find_best(parent,rate,nkm);
          free(nkm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
