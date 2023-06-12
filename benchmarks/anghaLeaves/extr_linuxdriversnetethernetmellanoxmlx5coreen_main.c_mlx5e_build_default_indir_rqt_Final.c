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
       2            empty\n\
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
typedef  int u32 ;

/* Variables and functions */

void mlx5e_build_default_indir_rqt(u32 *indirection_rqt, int len,
				   int num_channels)
{
	int i;

	for (i = 0; i < len; i++)
		indirection_rqt[i] = i % num_channels;
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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 3326
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 1795
          // ------------------------------- 
          // static_instructions_O2 : 31
          // dynamic_instructions_O2 : 1417
          // ------------------------------- 
          // static_instructions_O3 : 31
          // dynamic_instructions_O3 : 1417
          // ------------------------------- 
          // static_instructions_Ofast : 31
          // dynamic_instructions_Ofast : 1417
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 1794
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 2050
          // ------------------------------- 

          int len = 255;
        
          int num_channels = 255;
        
          int _len_indirection_rqt0 = 65025;
          int * indirection_rqt = (int *) malloc(_len_indirection_rqt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_indirection_rqt0; _i0++) {
            indirection_rqt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          mlx5e_build_default_indir_rqt(indirection_rqt,len,num_channels);
          free(indirection_rqt);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 141
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 80
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 71
          // ------------------------------- 
          // static_instructions_O3 : 27
          // dynamic_instructions_O3 : 71
          // ------------------------------- 
          // static_instructions_Ofast : 27
          // dynamic_instructions_Ofast : 71
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 79
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 90
          // ------------------------------- 

          int len = 10;
        
          int num_channels = 10;
        
          int _len_indirection_rqt0 = 100;
          int * indirection_rqt = (int *) malloc(_len_indirection_rqt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_indirection_rqt0; _i0++) {
            indirection_rqt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          mlx5e_build_default_indir_rqt(indirection_rqt,len,num_channels);
          free(indirection_rqt);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_indirection_rqt0 = 1;
          int * indirection_rqt = (int *) malloc(_len_indirection_rqt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_indirection_rqt0; _i0++) {
            indirection_rqt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          mlx5e_build_default_indir_rqt(indirection_rqt,len,num_channels);
          free(indirection_rqt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
