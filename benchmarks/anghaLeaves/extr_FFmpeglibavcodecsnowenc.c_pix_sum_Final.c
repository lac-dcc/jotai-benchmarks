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
       1            big-arr-10x\n\
       2            empty\n\
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

__attribute__((used)) static int pix_sum(uint8_t * pix, int line_size, int w, int h)
{
    int s, i, j;

    s = 0;
    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            s += pix[0];
            pix ++;
        }
        pix += line_size - w;
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
        
          int w = 255;
        
          int h = 255;
        
          int _len_pix0 = 65025;
          long * pix = (long *) malloc(_len_pix0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pix0; _i0++) {
            pix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = pix_sum(pix,line_size,w,h);
          printf("%d\n", benchRet); 
          free(pix);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int line_size = 10;
        
          int w = 10;
        
          int h = 10;
        
          int _len_pix0 = 100;
          long * pix = (long *) malloc(_len_pix0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pix0; _i0++) {
            pix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = pix_sum(pix,line_size,w,h);
          printf("%d\n", benchRet); 
          free(pix);
        
        break;
    }
    // empty
    case 2:
    {
          int line_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int w = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int h = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pix0 = 1;
          long * pix = (long *) malloc(_len_pix0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pix0; _i0++) {
            pix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = pix_sum(pix,line_size,w,h);
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
