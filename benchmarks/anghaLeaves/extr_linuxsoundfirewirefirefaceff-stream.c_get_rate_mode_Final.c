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

/* Variables and functions */
 int CIP_SFC_COUNT ; 
 int EINVAL ; 
 unsigned int* amdtp_rate_table ; 

__attribute__((used)) static int get_rate_mode(unsigned int rate, unsigned int *mode)
{
	int i;

	for (i = 0; i < CIP_SFC_COUNT; i++) {
		if (amdtp_rate_table[i] == rate)
			break;
	}

	if (i == CIP_SFC_COUNT)
		return -EINVAL;

	*mode = ((int)i - 1) / 2;

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

    // int-bounds
    case 0:
    {
          unsigned int rate = 100;
          int _len_mode0 = 1;
          unsigned int * mode = (unsigned int *) malloc(_len_mode0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_rate_mode(rate,mode);
          printf("%d\n", benchRet); 
          free(mode);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int rate = 10;
          int _len_mode0 = 100;
          unsigned int * mode = (unsigned int *) malloc(_len_mode0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_rate_mode(rate,mode);
          printf("%d\n", benchRet); 
          free(mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
