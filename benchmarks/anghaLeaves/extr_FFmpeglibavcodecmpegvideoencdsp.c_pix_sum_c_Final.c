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
       0            big-arr\n\
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
typedef  scalar_t__ uint8_t ;

/* Variables and functions */

__attribute__((used)) static int pix_sum_c(uint8_t *pix, int line_size)
{
    int s = 0, i, j;

    for (i = 0; i < 16; i++) {
        for (j = 0; j < 16; j += 8) {
            s   += pix[0];
            s   += pix[1];
            s   += pix[2];
            s   += pix[3];
            s   += pix[4];
            s   += pix[5];
            s   += pix[6];
            s   += pix[7];
            pix += 8;
        }
        pix += line_size - 16;
    }
    return s;
}

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
          int line_size = 255;
        
          int _len_pix0 = 65025;
          long * pix = (long *) malloc(_len_pix0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pix0; _i0++) {
            pix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = pix_sum_c(pix,line_size);
          printf("%d\n", benchRet); 
          free(pix);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
