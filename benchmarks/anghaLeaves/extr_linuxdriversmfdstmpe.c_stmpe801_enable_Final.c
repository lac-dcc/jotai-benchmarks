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
struct stmpe {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 unsigned int STMPE_BLOCK_GPIO ; 

__attribute__((used)) static int stmpe801_enable(struct stmpe *stmpe, unsigned int blocks,
			   bool enable)
{
	if (blocks & STMPE_BLOCK_GPIO)
		return 0;
	else
		return -EINVAL;
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
          unsigned int blocks = 100;
          int enable = 100;
          int _len_stmpe0 = 1;
          struct stmpe * stmpe = (struct stmpe *) malloc(_len_stmpe0*sizeof(struct stmpe));
          for(int _i0 = 0; _i0 < _len_stmpe0; _i0++) {
            stmpe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stmpe801_enable(stmpe,blocks,enable);
          printf("%d\n", benchRet); 
          free(stmpe);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int blocks = 10;
          int enable = 10;
          int _len_stmpe0 = 100;
          struct stmpe * stmpe = (struct stmpe *) malloc(_len_stmpe0*sizeof(struct stmpe));
          for(int _i0 = 0; _i0 < _len_stmpe0; _i0++) {
            stmpe[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stmpe801_enable(stmpe,blocks,enable);
          printf("%d\n", benchRet); 
          free(stmpe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
