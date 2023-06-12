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
typedef  scalar_t__ pid_t ;

/* Variables and functions */

__attribute__((used)) static int pidlist_uniq(pid_t *list, int length)
{
	int src, dest = 1;

	/*
	 * we presume the 0th element is unique, so i starts at 1. trivial
	 * edge cases first; no work needs to be done for either
	 */
	if (length == 0 || length == 1)
		return length;
	/* src and dest walk down the list; dest counts unique elements */
	for (src = 1; src < length; src++) {
		/* find next unique element */
		while (list[src] == list[src-1]) {
			src++;
			if (src == length)
				goto after;
		}
		/* dest always points to where the next unique element goes */
		list[dest] = list[src];
		dest++;
	}
after:
	return dest;
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
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 4083
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 2810
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 2810
          // ------------------------------- 
          // static_instructions_O3 : 27
          // dynamic_instructions_O3 : 2810
          // ------------------------------- 
          // static_instructions_Ofast : 27
          // dynamic_instructions_Ofast : 2810
          // ------------------------------- 
          // static_instructions_Os : 27
          // dynamic_instructions_Os : 2810
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 2304
          // ------------------------------- 

          int length = 255;
        
          int _len_list0 = 65025;
          long * list = (long *) malloc(_len_list0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = pidlist_uniq(list,length);
          printf("%d\n", benchRet); 
          free(list);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 163
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 115
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 115
          // ------------------------------- 
          // static_instructions_O3 : 27
          // dynamic_instructions_O3 : 115
          // ------------------------------- 
          // static_instructions_Ofast : 27
          // dynamic_instructions_Ofast : 115
          // ------------------------------- 
          // static_instructions_Os : 27
          // dynamic_instructions_Os : 115
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 99
          // ------------------------------- 

          int length = 10;
        
          int _len_list0 = 100;
          long * list = (long *) malloc(_len_list0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = pidlist_uniq(list,length);
          printf("%d\n", benchRet); 
          free(list);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_list0 = 1;
          long * list = (long *) malloc(_len_list0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = pidlist_uniq(list,length);
          printf("%d\n", benchRet); 
          free(list);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
