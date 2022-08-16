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
typedef  int u8 ;
struct h5 {int tx_win; } ;

/* Variables and functions */

__attribute__((used)) static u8 h5_cfg_field(struct h5 *h5)
{
	/* Sliding window size (first 3 bits) */
	return h5->tx_win & 0x07;
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
          int _len_h50 = 1;
          struct h5 * h5 = (struct h5 *) malloc(_len_h50*sizeof(struct h5));
          for(int _i0 = 0; _i0 < _len_h50; _i0++) {
            h5[_i0].tx_win = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = h5_cfg_field(h5);
          printf("%d\n", benchRet); 
          free(h5);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_h50 = 100;
          struct h5 * h5 = (struct h5 *) malloc(_len_h50*sizeof(struct h5));
          for(int _i0 = 0; _i0 < _len_h50; _i0++) {
            h5[_i0].tx_win = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = h5_cfg_field(h5);
          printf("%d\n", benchRet); 
          free(h5);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
