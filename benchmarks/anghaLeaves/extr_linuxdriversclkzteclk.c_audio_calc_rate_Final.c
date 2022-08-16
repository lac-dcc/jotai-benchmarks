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
       1            big-arr-10x\n\
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
typedef  int u32 ;
struct clk_zx_audio_divider {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static unsigned long audio_calc_rate(struct clk_zx_audio_divider *audio_div,
				     u32 reg_frac, u32 reg_int,
				     unsigned long parent_rate)
{
	unsigned long rate, m, n;

	m = reg_frac & 0xffff;
	n = (reg_frac >> 16) & 0xffff;

	m = (reg_int & 0xffff) * n + m;
	rate = (parent_rate * n) / m;

	return rate;
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
          int reg_frac = 100;
          int reg_int = 100;
          unsigned long parent_rate = 100;
          int _len_audio_div0 = 1;
          struct clk_zx_audio_divider * audio_div = (struct clk_zx_audio_divider *) malloc(_len_audio_div0*sizeof(struct clk_zx_audio_divider));
          for(int _i0 = 0; _i0 < _len_audio_div0; _i0++) {
            audio_div[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = audio_calc_rate(audio_div,reg_frac,reg_int,parent_rate);
          printf("%lu\n", benchRet); 
          free(audio_div);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int reg_frac = 10;
          int reg_int = 10;
          unsigned long parent_rate = 10;
          int _len_audio_div0 = 100;
          struct clk_zx_audio_divider * audio_div = (struct clk_zx_audio_divider *) malloc(_len_audio_div0*sizeof(struct clk_zx_audio_divider));
          for(int _i0 = 0; _i0 < _len_audio_div0; _i0++) {
            audio_div[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = audio_calc_rate(audio_div,reg_frac,reg_int,parent_rate);
          printf("%lu\n", benchRet); 
          free(audio_div);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
