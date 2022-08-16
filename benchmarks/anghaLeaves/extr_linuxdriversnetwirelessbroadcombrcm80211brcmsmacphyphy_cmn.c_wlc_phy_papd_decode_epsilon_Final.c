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
typedef  int u32 ;
typedef  int s32 ;

/* Variables and functions */

void
wlc_phy_papd_decode_epsilon(u32 epsilon, s32 *eps_real, s32 *eps_imag)
{
	*eps_imag = (epsilon >> 13);
	if (*eps_imag > 0xfff)
		*eps_imag -= 0x2000;

	*eps_real = (epsilon & 0x1fff);
	if (*eps_real > 0xfff)
		*eps_real -= 0x2000;
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
          int epsilon = 100;
          int _len_eps_real0 = 1;
          int * eps_real = (int *) malloc(_len_eps_real0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_eps_real0; _i0++) {
            eps_real[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_eps_imag0 = 1;
          int * eps_imag = (int *) malloc(_len_eps_imag0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_eps_imag0; _i0++) {
            eps_imag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wlc_phy_papd_decode_epsilon(epsilon,eps_real,eps_imag);
          free(eps_real);
          free(eps_imag);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
