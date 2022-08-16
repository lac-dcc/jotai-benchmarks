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
struct matrox_hw_state {unsigned int* DACclk; } ;

/* Variables and functions */
#define  M_SYSTEM_PLL 128 

__attribute__((used)) static void updatehwstate_clk(struct matrox_hw_state* hw, unsigned int mnp, unsigned int pll) {
	switch (pll) {
		case M_SYSTEM_PLL:
			hw->DACclk[3] = mnp >> 16;
			hw->DACclk[4] = mnp >> 8;
			hw->DACclk[5] = mnp;
			break;
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
          unsigned int mnp = 100;
          unsigned int pll = 100;
          int _len_hw0 = 1;
          struct matrox_hw_state * hw = (struct matrox_hw_state *) malloc(_len_hw0*sizeof(struct matrox_hw_state));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__DACclk0 = 1;
          hw[_i0].DACclk = (unsigned int *) malloc(_len_hw__i0__DACclk0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_hw__i0__DACclk0; _j0++) {
            hw[_i0].DACclk[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          updatehwstate_clk(hw,mnp,pll);
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].DACclk);
          }
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
