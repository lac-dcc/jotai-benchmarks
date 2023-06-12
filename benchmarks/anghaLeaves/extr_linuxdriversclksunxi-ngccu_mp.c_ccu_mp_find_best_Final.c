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
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Variables and functions */

__attribute__((used)) static void ccu_mp_find_best(unsigned long parent, unsigned long rate,
			     unsigned int max_m, unsigned int max_p,
			     unsigned int *m, unsigned int *p)
{
	unsigned long best_rate = 0;
	unsigned int best_m = 0, best_p = 0;
	unsigned int _m, _p;

	for (_p = 1; _p <= max_p; _p <<= 1) {
		for (_m = 1; _m <= max_m; _m++) {
			unsigned long tmp_rate = parent / _p / _m;

			if (tmp_rate > rate)
				continue;

			if ((rate - tmp_rate) < (rate - best_rate)) {
				best_rate = tmp_rate;
				best_m = _m;
				best_p = _p;
			}
		}
	}

	*m = best_m;
	*p = best_p;
}

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
        
          unsigned int max_m = 100;
        
          unsigned int max_p = 100;
        
          int _len_m0 = 1;
          unsigned int * m = (unsigned int *) malloc(_len_m0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p0 = 1;
          unsigned int * p = (unsigned int *) malloc(_len_p0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ccu_mp_find_best(parent,rate,max_m,max_p,m,p);
          free(m);
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long parent = 255;
        
          unsigned long rate = 255;
        
          unsigned int max_m = 255;
        
          unsigned int max_p = 255;
        
          int _len_m0 = 65025;
          unsigned int * m = (unsigned int *) malloc(_len_m0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p0 = 65025;
          unsigned int * p = (unsigned int *) malloc(_len_p0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ccu_mp_find_best(parent,rate,max_m,max_p,m,p);
          free(m);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long parent = 10;
        
          unsigned long rate = 10;
        
          unsigned int max_m = 10;
        
          unsigned int max_p = 10;
        
          int _len_m0 = 100;
          unsigned int * m = (unsigned int *) malloc(_len_m0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p0 = 100;
          unsigned int * p = (unsigned int *) malloc(_len_p0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ccu_mp_find_best(parent,rate,max_m,max_p,m,p);
          free(m);
          free(p);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
