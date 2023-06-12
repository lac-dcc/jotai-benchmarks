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
typedef  scalar_t__ u64 ;
typedef  size_t u32 ;

/* Variables and functions */

__attribute__((used)) static bool i40iw_check_mem_contiguous(u64 *arr, u32 npages, u32 pg_size)
{
	u32 pg_idx;

	for (pg_idx = 0; pg_idx < npages; pg_idx++) {
		if ((*arr + (pg_size * pg_idx)) != arr[pg_idx])
			return false;
	}
	return true;
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
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 40
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 27
          // ------------------------------- 

          unsigned long npages = 255;
        
          unsigned long pg_size = 255;
        
          int _len_arr0 = 65025;
          long * arr = (long *) malloc(_len_arr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_arr0; _i0++) {
            arr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = i40iw_check_mem_contiguous(arr,npages,pg_size);
          printf("%d\n", benchRet); 
          free(arr);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 40
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 27
          // ------------------------------- 

          unsigned long npages = 10;
        
          unsigned long pg_size = 10;
        
          int _len_arr0 = 100;
          long * arr = (long *) malloc(_len_arr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_arr0; _i0++) {
            arr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = i40iw_check_mem_contiguous(arr,npages,pg_size);
          printf("%d\n", benchRet); 
          free(arr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
