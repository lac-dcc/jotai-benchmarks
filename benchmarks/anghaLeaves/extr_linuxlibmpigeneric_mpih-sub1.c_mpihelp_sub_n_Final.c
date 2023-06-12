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
typedef  int mpi_size_t ;
typedef  scalar_t__* mpi_ptr_t ;
typedef  scalar_t__ mpi_limb_t ;

/* Variables and functions */

mpi_limb_t
mpihelp_sub_n(mpi_ptr_t res_ptr, mpi_ptr_t s1_ptr,
	      mpi_ptr_t s2_ptr, mpi_size_t size)
{
	mpi_limb_t x, y, cy;
	mpi_size_t j;

	/* The loop counter and index J goes from -SIZE to -1.  This way
	   the loop becomes faster.  */
	j = -size;

	/* Offset the base pointers to compensate for the negative indices.  */
	s1_ptr -= j;
	s2_ptr -= j;
	res_ptr -= j;

	cy = 0;
	do {
		y = s2_ptr[j];
		x = s1_ptr[j];
		y += cy;	/* add previous carry to subtrahend */
		cy = y < cy;	/* get out carry from that addition */
		y = x - y;	/* main subtract */
		cy += y > x;	/* get out carry from the subtract, combine */
		res_ptr[j] = y;
	} while (++j);

	return cy;
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
          int size = 255;
        
          int _len_res_ptr0 = 65025;
          long * res_ptr = (long *) malloc(_len_res_ptr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_res_ptr0; _i0++) {
            res_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_s1_ptr0 = 65025;
          long * s1_ptr = (long *) malloc(_len_s1_ptr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_s1_ptr0; _i0++) {
            s1_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_s2_ptr0 = 65025;
          long * s2_ptr = (long *) malloc(_len_s2_ptr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_s2_ptr0; _i0++) {
            s2_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = mpihelp_sub_n(res_ptr,s1_ptr,s2_ptr,size);
          printf("%ld\n", benchRet); 
          free(res_ptr);
          free(s1_ptr);
          free(s2_ptr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int size = 10;
        
          int _len_res_ptr0 = 100;
          long * res_ptr = (long *) malloc(_len_res_ptr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_res_ptr0; _i0++) {
            res_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_s1_ptr0 = 100;
          long * s1_ptr = (long *) malloc(_len_s1_ptr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_s1_ptr0; _i0++) {
            s1_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_s2_ptr0 = 100;
          long * s2_ptr = (long *) malloc(_len_s2_ptr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_s2_ptr0; _i0++) {
            s2_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = mpihelp_sub_n(res_ptr,s1_ptr,s2_ptr,size);
          printf("%ld\n", benchRet); 
          free(res_ptr);
          free(s1_ptr);
          free(s2_ptr);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
