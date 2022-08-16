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
struct max3191x_chip {scalar_t__ mode; } ;

/* Variables and functions */
 scalar_t__ STATUS_BYTE_ENABLED ; 

__attribute__((used)) static unsigned int max3191x_wordlen(struct max3191x_chip *max3191x)
{
	return max3191x->mode == STATUS_BYTE_ENABLED ? 2 : 1;
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
          int _len_max3191x0 = 1;
          struct max3191x_chip * max3191x = (struct max3191x_chip *) malloc(_len_max3191x0*sizeof(struct max3191x_chip));
          for(int _i0 = 0; _i0 < _len_max3191x0; _i0++) {
            max3191x[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = max3191x_wordlen(max3191x);
          printf("%u\n", benchRet); 
          free(max3191x);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_max3191x0 = 100;
          struct max3191x_chip * max3191x = (struct max3191x_chip *) malloc(_len_max3191x0*sizeof(struct max3191x_chip));
          for(int _i0 = 0; _i0 < _len_max3191x0; _i0++) {
            max3191x[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = max3191x_wordlen(max3191x);
          printf("%u\n", benchRet); 
          free(max3191x);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
