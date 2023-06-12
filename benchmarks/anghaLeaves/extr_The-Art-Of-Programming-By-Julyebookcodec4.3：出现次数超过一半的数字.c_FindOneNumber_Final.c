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

/* Variables and functions */

int FindOneNumber(int* a, int length)
{
	int candidate = a[0];
	int nTimes, i;
	for (i = nTimes = 0; i < length; i++)
	{
		if (candidate == a[i])
			nTimes++;
		else 
			nTimes--;
		if (nTimes == 0)
		{
			candidate = a[i];
			nTimes = 1;
		}
	}
	return candidate;
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
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 4860
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 3072
          // ------------------------------- 
          // static_instructions_O2 : 55
          // dynamic_instructions_O2 : 3835
          // ------------------------------- 
          // static_instructions_O3 : 55
          // dynamic_instructions_O3 : 3835
          // ------------------------------- 
          // static_instructions_Ofast : 55
          // dynamic_instructions_Ofast : 3835
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 4329
          // ------------------------------- 
          // static_instructions_Oz : 23
          // dynamic_instructions_Oz : 3327
          // ------------------------------- 

          int length = 255;
        
          int _len_a0 = 65025;
          int * a = (int *) malloc(_len_a0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = FindOneNumber(a,length);
          printf("%d\n", benchRet); 
          free(a);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 205
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 132
          // ------------------------------- 
          // static_instructions_O2 : 63
          // dynamic_instructions_O2 : 153
          // ------------------------------- 
          // static_instructions_O3 : 63
          // dynamic_instructions_O3 : 153
          // ------------------------------- 
          // static_instructions_Ofast : 63
          // dynamic_instructions_Ofast : 153
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 164
          // ------------------------------- 
          // static_instructions_Oz : 23
          // dynamic_instructions_Oz : 142
          // ------------------------------- 

          int length = 10;
        
          int _len_a0 = 100;
          int * a = (int *) malloc(_len_a0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = FindOneNumber(a,length);
          printf("%d\n", benchRet); 
          free(a);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_a0 = 1;
          int * a = (int *) malloc(_len_a0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = FindOneNumber(a,length);
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
