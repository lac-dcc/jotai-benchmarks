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

/* Variables and functions */

__attribute__((used)) static inline short int ulaw2linear(unsigned char ulaw)
{
	short mu, e, f, y;
	static short etab[] = {0, 132, 396, 924, 1980, 4092, 8316, 16764};

	mu = 255 - ulaw;
	e = (mu & 0x70) / 16;
	f = mu & 0x0f;
	y = f * (1 << (e + 3));
	y += etab[e];
	if (mu & 0x80)
		y = -y;
	return y;
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
          unsigned char ulaw = 100;
          short benchRet = ulaw2linear(ulaw);
          printf("%hi\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char ulaw = 255;
          short benchRet = ulaw2linear(ulaw);
          printf("%hi\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char ulaw = 10;
          short benchRet = ulaw2linear(ulaw);
          printf("%hi\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
