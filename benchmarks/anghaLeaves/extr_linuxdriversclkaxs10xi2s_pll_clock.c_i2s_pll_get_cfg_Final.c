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
struct i2s_pll_cfg {int dummy; } ;

/* Variables and functions */
 struct i2s_pll_cfg const* i2s_pll_cfg_27m ; 
 struct i2s_pll_cfg const* i2s_pll_cfg_28m ; 

__attribute__((used)) static const struct i2s_pll_cfg *i2s_pll_get_cfg(unsigned long prate)
{
	switch (prate) {
	case 27000000:
		return i2s_pll_cfg_27m;
	case 28224000:
		return i2s_pll_cfg_28m;
	default:
		return NULL;
	}
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
          unsigned long prate = 100;
          const struct i2s_pll_cfg * benchRet = i2s_pll_get_cfg(prate);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long prate = 255;
          const struct i2s_pll_cfg * benchRet = i2s_pll_get_cfg(prate);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long prate = 10;
          const struct i2s_pll_cfg * benchRet = i2s_pll_get_cfg(prate);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
