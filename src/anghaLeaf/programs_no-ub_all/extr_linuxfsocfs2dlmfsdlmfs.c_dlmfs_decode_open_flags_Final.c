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

/* Variables and functions */
 int DLM_LKF_NOQUEUE ; 
 int DLM_LOCK_EX ; 
 int DLM_LOCK_PR ; 
 int O_NONBLOCK ; 
 int O_RDWR ; 
 int O_WRONLY ; 

__attribute__((used)) static int dlmfs_decode_open_flags(int open_flags,
				   int *level,
				   int *flags)
{
	if (open_flags & (O_WRONLY|O_RDWR))
		*level = DLM_LOCK_EX;
	else
		*level = DLM_LOCK_PR;

	*flags = 0;
	if (open_flags & O_NONBLOCK)
		*flags |= DLM_LKF_NOQUEUE;

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
          int open_flags = 255;
          int _len_level0 = 65025;
          int * level = (int *) malloc(_len_level0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_level0; _i0++) {
            level[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_flags0 = 65025;
          int * flags = (int *) malloc(_len_flags0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_flags0; _i0++) {
            flags[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dlmfs_decode_open_flags(open_flags,level,flags);
          printf("%d\n", benchRet); 
          free(level);
          free(flags);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
