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
       0            big-arr\n\
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
typedef  int s8 ;

/* Variables and functions */

__attribute__((used)) static inline s8 phydm_get_rx_pwr(u8 LNA_idx, u8 VGA_idx, u8 cck_highpwr)
{
	switch (LNA_idx) {
	case 7:
		if (VGA_idx <= 27)
			return -100 + 2 * (27 - VGA_idx); /*VGA_idx = 27~2*/
		else
			return -100;
		break;
	case 6:
		return -48 + 2 * (2 - VGA_idx); /*VGA_idx = 2~0*/
	case 5:
		return -42 + 2 * (7 - VGA_idx); /*VGA_idx = 7~5*/
	case 4:
		return -36 + 2 * (7 - VGA_idx); /*VGA_idx = 7~4*/
	case 3:
		return -24 + 2 * (7 - VGA_idx); /*VGA_idx = 7~0*/
	case 2:
		if (cck_highpwr)
			return -12 + 2 * (5 - VGA_idx); /*VGA_idx = 5~0*/
		else
			return -6 + 2 * (5 - VGA_idx);
		break;
	case 1:
		return 8 - 2 * VGA_idx;
	case 0:
		return 14 - 2 * VGA_idx;
	default:
		break;
	}
	return 0;
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

    // big-arr
    case 0:
    {
          int LNA_idx = 255;
          int VGA_idx = 255;
          int cck_highpwr = 255;
          int benchRet = phydm_get_rx_pwr(LNA_idx,VGA_idx,cck_highpwr);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
