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
struct msm_dsi_pll {int dummy; } ;
struct clk {int dummy; } ;

/* Variables and functions */
 int ENODEV ; 

__attribute__((used)) static inline int msm_dsi_pll_get_clk_provider(struct msm_dsi_pll *pll,
	struct clk **byte_clk_provider, struct clk **pixel_clk_provider)
{
	return -ENODEV;
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
          int _len_pll0 = 1;
          struct msm_dsi_pll * pll = (struct msm_dsi_pll *) malloc(_len_pll0*sizeof(struct msm_dsi_pll));
          for(int _i0 = 0; _i0 < _len_pll0; _i0++) {
            pll[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_byte_clk_provider0 = 1;
          struct clk ** byte_clk_provider = (struct clk **) malloc(_len_byte_clk_provider0*sizeof(struct clk *));
          for(int _i0 = 0; _i0 < _len_byte_clk_provider0; _i0++) {
            int _len_byte_clk_provider1 = 1;
            byte_clk_provider[_i0] = (struct clk *) malloc(_len_byte_clk_provider1*sizeof(struct clk));
            for(int _i1 = 0; _i1 < _len_byte_clk_provider1; _i1++) {
              byte_clk_provider[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pixel_clk_provider0 = 1;
          struct clk ** pixel_clk_provider = (struct clk **) malloc(_len_pixel_clk_provider0*sizeof(struct clk *));
          for(int _i0 = 0; _i0 < _len_pixel_clk_provider0; _i0++) {
            int _len_pixel_clk_provider1 = 1;
            pixel_clk_provider[_i0] = (struct clk *) malloc(_len_pixel_clk_provider1*sizeof(struct clk));
            for(int _i1 = 0; _i1 < _len_pixel_clk_provider1; _i1++) {
              pixel_clk_provider[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = msm_dsi_pll_get_clk_provider(pll,byte_clk_provider,pixel_clk_provider);
          printf("%d\n", benchRet); 
          free(pll);
          for(int i1 = 0; i1 < _len_byte_clk_provider0; i1++) {
            int _len_byte_clk_provider1 = 1;
              free(byte_clk_provider[i1]);
          }
          free(byte_clk_provider);
          for(int i1 = 0; i1 < _len_pixel_clk_provider0; i1++) {
            int _len_pixel_clk_provider1 = 1;
              free(pixel_clk_provider[i1]);
          }
          free(pixel_clk_provider);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
