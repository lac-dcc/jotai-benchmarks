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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int uint8_t ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int mlx90632_channel_new_select(int perform_ret, uint8_t *channel_new,
				       uint8_t *channel_old)
{
	switch (perform_ret) {
	case 1:
		*channel_new = 1;
		*channel_old = 2;
		break;
	case 2:
		*channel_new = 2;
		*channel_old = 1;
		break;
	default:
		return -EINVAL;
	}

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
          int perform_ret = 100;
          int _len_channel_new0 = 1;
          int * channel_new = (int *) malloc(_len_channel_new0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_channel_new0; _i0++) {
            channel_new[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel_old0 = 1;
          int * channel_old = (int *) malloc(_len_channel_old0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_channel_old0; _i0++) {
            channel_old[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx90632_channel_new_select(perform_ret,channel_new,channel_old);
          printf("%d\n", benchRet); 
          free(channel_new);
          free(channel_old);
        
        break;
    }
    // big-arr
    case 1:
    {
          int perform_ret = 255;
          int _len_channel_new0 = 65025;
          int * channel_new = (int *) malloc(_len_channel_new0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_channel_new0; _i0++) {
            channel_new[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel_old0 = 65025;
          int * channel_old = (int *) malloc(_len_channel_old0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_channel_old0; _i0++) {
            channel_old[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx90632_channel_new_select(perform_ret,channel_new,channel_old);
          printf("%d\n", benchRet); 
          free(channel_new);
          free(channel_old);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int perform_ret = 10;
          int _len_channel_new0 = 100;
          int * channel_new = (int *) malloc(_len_channel_new0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_channel_new0; _i0++) {
            channel_new[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channel_old0 = 100;
          int * channel_old = (int *) malloc(_len_channel_old0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_channel_old0; _i0++) {
            channel_old[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx90632_channel_new_select(perform_ret,channel_new,channel_old);
          printf("%d\n", benchRet); 
          free(channel_new);
          free(channel_old);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
