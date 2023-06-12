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
       3            empty\n\
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
 int EOVERFLOW ; 

__attribute__((used)) static int altera_check_stack(int stack_ptr, int count, int *status)
{
	if (stack_ptr < count) {
		*status = -EOVERFLOW;
		return 0;
	}

	return 1;
}

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
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 4
          // dynamic_instructions_O1 : 4
          // ------------------------------- 
          // static_instructions_O2 : 4
          // dynamic_instructions_O2 : 4
          // ------------------------------- 
          // static_instructions_O3 : 4
          // dynamic_instructions_O3 : 4
          // ------------------------------- 
          // static_instructions_Ofast : 4
          // dynamic_instructions_Ofast : 4
          // ------------------------------- 
          // static_instructions_Os : 4
          // dynamic_instructions_Os : 4
          // ------------------------------- 
          // static_instructions_Oz : 4
          // dynamic_instructions_Oz : 4
          // ------------------------------- 

          int stack_ptr = 100;
        
          int count = 100;
        
          int _len_status0 = 1;
          int * status = (int *) malloc(_len_status0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = altera_check_stack(stack_ptr,count,status);
          printf("%d\n", benchRet); 
          free(status);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 4
          // dynamic_instructions_O1 : 4
          // ------------------------------- 
          // static_instructions_O2 : 4
          // dynamic_instructions_O2 : 4
          // ------------------------------- 
          // static_instructions_O3 : 4
          // dynamic_instructions_O3 : 4
          // ------------------------------- 
          // static_instructions_Ofast : 4
          // dynamic_instructions_Ofast : 4
          // ------------------------------- 
          // static_instructions_Os : 4
          // dynamic_instructions_Os : 4
          // ------------------------------- 
          // static_instructions_Oz : 4
          // dynamic_instructions_Oz : 4
          // ------------------------------- 

          int stack_ptr = 255;
        
          int count = 255;
        
          int _len_status0 = 65025;
          int * status = (int *) malloc(_len_status0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = altera_check_stack(stack_ptr,count,status);
          printf("%d\n", benchRet); 
          free(status);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 4
          // dynamic_instructions_O1 : 4
          // ------------------------------- 
          // static_instructions_O2 : 4
          // dynamic_instructions_O2 : 4
          // ------------------------------- 
          // static_instructions_O3 : 4
          // dynamic_instructions_O3 : 4
          // ------------------------------- 
          // static_instructions_Ofast : 4
          // dynamic_instructions_Ofast : 4
          // ------------------------------- 
          // static_instructions_Os : 4
          // dynamic_instructions_Os : 4
          // ------------------------------- 
          // static_instructions_Oz : 4
          // dynamic_instructions_Oz : 4
          // ------------------------------- 

          int stack_ptr = 10;
        
          int count = 10;
        
          int _len_status0 = 100;
          int * status = (int *) malloc(_len_status0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = altera_check_stack(stack_ptr,count,status);
          printf("%d\n", benchRet); 
          free(status);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 4
          // dynamic_instructions_O1 : 4
          // ------------------------------- 
          // static_instructions_O2 : 4
          // dynamic_instructions_O2 : 4
          // ------------------------------- 
          // static_instructions_O3 : 4
          // dynamic_instructions_O3 : 4
          // ------------------------------- 
          // static_instructions_Ofast : 4
          // dynamic_instructions_Ofast : 4
          // ------------------------------- 
          // static_instructions_Os : 4
          // dynamic_instructions_Os : 4
          // ------------------------------- 
          // static_instructions_Oz : 4
          // dynamic_instructions_Oz : 4
          // ------------------------------- 

          int stack_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_status0 = 1;
          int * status = (int *) malloc(_len_status0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = altera_check_stack(stack_ptr,count,status);
          printf("%d\n", benchRet); 
          free(status);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
