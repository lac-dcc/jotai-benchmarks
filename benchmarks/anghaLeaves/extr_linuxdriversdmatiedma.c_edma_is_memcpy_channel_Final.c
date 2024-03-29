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
       0            empty\n\
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
typedef  int s32 ;

/* Variables and functions */

__attribute__((used)) static bool edma_is_memcpy_channel(int ch_num, s32 *memcpy_channels)
{
	if (!memcpy_channels)
		return false;
	while (*memcpy_channels != -1) {
		if (*memcpy_channels == ch_num)
			return true;
		memcpy_channels++;
	}
	return false;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          int ch_num = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_memcpy_channels0 = 1;
          int * memcpy_channels = (int *) malloc(_len_memcpy_channels0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_memcpy_channels0; _i0++) {
            memcpy_channels[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = edma_is_memcpy_channel(ch_num,memcpy_channels);
          printf("%d\n", benchRet); 
          free(memcpy_channels);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
