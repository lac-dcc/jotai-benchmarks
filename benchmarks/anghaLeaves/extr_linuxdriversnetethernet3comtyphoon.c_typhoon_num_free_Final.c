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
struct cmd_desc {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int
typhoon_num_free(int lastWrite, int lastRead, int ringSize)
{
	/* this works for all descriptors but rx_desc, as they are a
	 * different size than the cmd_desc -- everyone else is the same
	 */
	lastWrite /= sizeof(struct cmd_desc);
	lastRead /= sizeof(struct cmd_desc);
	return (ringSize + lastRead - lastWrite - 1) % ringSize;
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
          int lastWrite = 100;
          int lastRead = 100;
          int ringSize = 100;
          int benchRet = typhoon_num_free(lastWrite,lastRead,ringSize);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int lastWrite = 255;
          int lastRead = 255;
          int ringSize = 255;
          int benchRet = typhoon_num_free(lastWrite,lastRead,ringSize);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int lastWrite = 10;
          int lastRead = 10;
          int ringSize = 10;
          int benchRet = typhoon_num_free(lastWrite,lastRead,ringSize);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
