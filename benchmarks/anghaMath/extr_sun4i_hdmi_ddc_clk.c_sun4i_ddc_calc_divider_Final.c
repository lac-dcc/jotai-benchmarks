// ========================================================================= //

// includes
#include <math.h>
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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

/* Variables and functions */

__attribute__((used)) static unsigned long sun4i_ddc_calc_divider(unsigned long rate,
					    unsigned long parent_rate,
					    const u8 pre_div,
					    const u8 m_offset,
					    u8 *m, u8 *n)
{
	unsigned long best_rate = 0;
	u8 best_m = 0, best_n = 0, _m, _n;

	for (_m = 0; _m < 8; _m++) {
		for (_n = 0; _n < 8; _n++) {
			unsigned long tmp_rate;

			tmp_rate = (((parent_rate / pre_div) / 10) >> _n) /
				(_m + m_offset);

			if (tmp_rate > rate)
				continue;

			if (abs(rate - tmp_rate) < abs(rate - best_rate)) {
				best_rate = tmp_rate;
				best_m = _m;
				best_n = _n;
			}
		}
	}

	if (m && n) {
		*m = best_m;
		*n = best_n;
	}

	return best_rate;
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
          unsigned long rate = 100;
          unsigned long parent_rate = 100;
          const int pre_div = 100;
          const int m_offset = 100;
          int _len_m0 = 1;
          int * m = (int *) malloc(_len_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_n0 = 1;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = sun4i_ddc_calc_divider(rate,parent_rate,pre_div,m_offset,m,n);
          printf("%lu\n", benchRet); 
          free(m);
          free(n);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long rate = 255;
          unsigned long parent_rate = 255;
          const int pre_div = 255;
          const int m_offset = 255;
          int _len_m0 = 65025;
          int * m = (int *) malloc(_len_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_n0 = 65025;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = sun4i_ddc_calc_divider(rate,parent_rate,pre_div,m_offset,m,n);
          printf("%lu\n", benchRet); 
          free(m);
          free(n);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long rate = 10;
          unsigned long parent_rate = 10;
          const int pre_div = 10;
          const int m_offset = 10;
          int _len_m0 = 100;
          int * m = (int *) malloc(_len_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_n0 = 100;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = sun4i_ddc_calc_divider(rate,parent_rate,pre_div,m_offset,m,n);
          printf("%lu\n", benchRet); 
          free(m);
          free(n);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
