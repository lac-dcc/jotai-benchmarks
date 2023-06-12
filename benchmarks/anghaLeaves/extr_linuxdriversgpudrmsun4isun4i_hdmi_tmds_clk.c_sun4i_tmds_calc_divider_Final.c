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
       3            empty\n\
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
typedef  int u8 ;

/* Variables and functions */

__attribute__((used)) static unsigned long sun4i_tmds_calc_divider(unsigned long rate,
					     unsigned long parent_rate,
					     u8 div_offset,
					     u8 *div,
					     bool *half)
{
	unsigned long best_rate = 0;
	u8 best_m = 0, m;
	bool is_double;

	for (m = div_offset ?: 1; m < (16 + div_offset); m++) {
		u8 d;

		for (d = 1; d < 3; d++) {
			unsigned long tmp_rate;

			tmp_rate = parent_rate / m / d;

			if (tmp_rate > rate)
				continue;

			if (!best_rate ||
			    (rate - tmp_rate) < (rate - best_rate)) {
				best_rate = tmp_rate;
				best_m = m;
				is_double = d;
			}
		}
	}

	if (div && half) {
		*div = best_m;
		*half = is_double;
	}

	return best_rate;
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
          // static_instructions_O0 : 74
          // dynamic_instructions_O0 : 1076
          // ------------------------------- 
          // static_instructions_O1 : 62
          // dynamic_instructions_O1 : 717
          // ------------------------------- 
          // static_instructions_O2 : 64
          // dynamic_instructions_O2 : 538
          // ------------------------------- 
          // static_instructions_O3 : 64
          // dynamic_instructions_O3 : 538
          // ------------------------------- 
          // static_instructions_Ofast : 64
          // dynamic_instructions_Ofast : 538
          // ------------------------------- 
          // static_instructions_Os : 60
          // dynamic_instructions_Os : 670
          // ------------------------------- 
          // static_instructions_Oz : 63
          // dynamic_instructions_Oz : 753
          // ------------------------------- 

          unsigned long rate = 100;
        
          unsigned long parent_rate = 100;
        
          int div_offset = 100;
        
          int _len_div0 = 1;
          int * div = (int *) malloc(_len_div0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_div0; _i0++) {
            div[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_half0 = 1;
          int * half = (int *) malloc(_len_half0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_half0; _i0++) {
            half[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = sun4i_tmds_calc_divider(rate,parent_rate,div_offset,div,half);
          printf("%lu\n", benchRet); 
          free(div);
          free(half);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 74
          // dynamic_instructions_O0 : 1076
          // ------------------------------- 
          // static_instructions_O1 : 62
          // dynamic_instructions_O1 : 717
          // ------------------------------- 
          // static_instructions_O2 : 64
          // dynamic_instructions_O2 : 538
          // ------------------------------- 
          // static_instructions_O3 : 64
          // dynamic_instructions_O3 : 538
          // ------------------------------- 
          // static_instructions_Ofast : 64
          // dynamic_instructions_Ofast : 538
          // ------------------------------- 
          // static_instructions_Os : 60
          // dynamic_instructions_Os : 670
          // ------------------------------- 
          // static_instructions_Oz : 63
          // dynamic_instructions_Oz : 753
          // ------------------------------- 

          unsigned long rate = 255;
        
          unsigned long parent_rate = 255;
        
          int div_offset = 255;
        
          int _len_div0 = 65025;
          int * div = (int *) malloc(_len_div0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_div0; _i0++) {
            div[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_half0 = 65025;
          int * half = (int *) malloc(_len_half0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_half0; _i0++) {
            half[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = sun4i_tmds_calc_divider(rate,parent_rate,div_offset,div,half);
          printf("%lu\n", benchRet); 
          free(div);
          free(half);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 74
          // dynamic_instructions_O0 : 1076
          // ------------------------------- 
          // static_instructions_O1 : 62
          // dynamic_instructions_O1 : 717
          // ------------------------------- 
          // static_instructions_O2 : 64
          // dynamic_instructions_O2 : 538
          // ------------------------------- 
          // static_instructions_O3 : 64
          // dynamic_instructions_O3 : 538
          // ------------------------------- 
          // static_instructions_Ofast : 64
          // dynamic_instructions_Ofast : 538
          // ------------------------------- 
          // static_instructions_Os : 60
          // dynamic_instructions_Os : 670
          // ------------------------------- 
          // static_instructions_Oz : 63
          // dynamic_instructions_Oz : 753
          // ------------------------------- 

          unsigned long rate = 10;
        
          unsigned long parent_rate = 10;
        
          int div_offset = 10;
        
          int _len_div0 = 100;
          int * div = (int *) malloc(_len_div0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_div0; _i0++) {
            div[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_half0 = 100;
          int * half = (int *) malloc(_len_half0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_half0; _i0++) {
            half[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = sun4i_tmds_calc_divider(rate,parent_rate,div_offset,div,half);
          printf("%lu\n", benchRet); 
          free(div);
          free(half);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 74
          // dynamic_instructions_O0 : 1076
          // ------------------------------- 
          // static_instructions_O1 : 62
          // dynamic_instructions_O1 : 717
          // ------------------------------- 
          // static_instructions_O2 : 64
          // dynamic_instructions_O2 : 538
          // ------------------------------- 
          // static_instructions_O3 : 64
          // dynamic_instructions_O3 : 538
          // ------------------------------- 
          // static_instructions_Ofast : 64
          // dynamic_instructions_Ofast : 538
          // ------------------------------- 
          // static_instructions_Os : 60
          // dynamic_instructions_Os : 670
          // ------------------------------- 
          // static_instructions_Oz : 63
          // dynamic_instructions_Oz : 753
          // ------------------------------- 

          unsigned long rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long parent_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int div_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_div0 = 1;
          int * div = (int *) malloc(_len_div0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_div0; _i0++) {
            div[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_half0 = 1;
          int * half = (int *) malloc(_len_half0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_half0; _i0++) {
            half[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = sun4i_tmds_calc_divider(rate,parent_rate,div_offset,div,half);
          printf("%lu\n", benchRet); 
          free(div);
          free(half);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
