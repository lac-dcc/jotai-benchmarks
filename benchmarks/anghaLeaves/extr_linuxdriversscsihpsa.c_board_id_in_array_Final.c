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
typedef  scalar_t__ u32 ;

/* Variables and functions */

__attribute__((used)) static int board_id_in_array(u32 a[], int nelems, u32 board_id)
{
	int i;

	for (i = 0; i < nelems; i++)
		if (a[i] == board_id)
			return 1;
	return 0;
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
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 3328
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 1285
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 1285
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 1285
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 1285
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 1285
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 1541
          // ------------------------------- 

          int nelems = 255;
        
          long board_id = 255;
        
          int _len_a0 = 65025;
          long * a = (long *) malloc(_len_a0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = board_id_in_array(a,nelems,board_id);
          printf("%d\n", benchRet); 
          free(a);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 143
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 60
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 60
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 60
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 60
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 60
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 71
          // ------------------------------- 

          int nelems = 10;
        
          long board_id = 10;
        
          int _len_a0 = 100;
          long * a = (long *) malloc(_len_a0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = board_id_in_array(a,nelems,board_id);
          printf("%d\n", benchRet); 
          free(a);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int nelems = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long board_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_a0 = 1;
          long * a = (long *) malloc(_len_a0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = board_id_in_array(a,nelems,board_id);
          printf("%d\n", benchRet); 
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
