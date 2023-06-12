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
typedef  scalar_t__ U_64 ;
typedef  scalar_t__ IDATA ;

/* Variables and functions */

IDATA addHighPrecision (U_64 * arg1, IDATA length1, U_64 * arg2, IDATA length2)
{

	U_64 temp1, temp2, temp3;     /* temporary variables to help the SH-4, and gcc */
	U_64 carry;
	IDATA index;

	if (length1 == 0 || length2 == 0)
    {
		return 0;
    }
	else if (length1 < length2)
    {
		length2 = length1;
    }

	carry = 0;
	index = 0;
	do
    {
		temp1 = arg1[index];
		temp2 = arg2[index];
		temp3 = temp1 + temp2;
		arg1[index] = temp3 + carry;
		if (arg2[index] < arg1[index])
			carry = 0;
		else if (arg2[index] != arg1[index])
			carry = 1;
    }
	while (++index < length2);
	if (!carry)
		return 0;
	else if (index == length1)
		return 1;

	while (++arg1[index] == 0 && ++index < length1);

	return (IDATA) index == length1;
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
          // static_instructions_O0 : 64
          // dynamic_instructions_O0 : 9716
          // ------------------------------- 
          // static_instructions_O1 : 33
          // dynamic_instructions_O1 : 3081
          // ------------------------------- 
          // static_instructions_O2 : 60
          // dynamic_instructions_O2 : 2202
          // ------------------------------- 
          // static_instructions_O3 : 60
          // dynamic_instructions_O3 : 2202
          // ------------------------------- 
          // static_instructions_Ofast : 60
          // dynamic_instructions_Ofast : 2202
          // ------------------------------- 
          // static_instructions_Os : 33
          // dynamic_instructions_Os : 3081
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 3078
          // ------------------------------- 

          long length1 = 255;
        
          long length2 = 255;
        
          int _len_arg10 = 65025;
          long * arg1 = (long *) malloc(_len_arg10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_arg10; _i0++) {
            arg1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_arg20 = 65025;
          long * arg2 = (long *) malloc(_len_arg20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_arg20; _i0++) {
            arg2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = addHighPrecision(arg1,length1,arg2,length2);
          printf("%ld\n", benchRet); 
          free(arg1);
          free(arg2);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 64
          // dynamic_instructions_O0 : 406
          // ------------------------------- 
          // static_instructions_O1 : 33
          // dynamic_instructions_O1 : 141
          // ------------------------------- 
          // static_instructions_O2 : 50
          // dynamic_instructions_O2 : 118
          // ------------------------------- 
          // static_instructions_O3 : 50
          // dynamic_instructions_O3 : 118
          // ------------------------------- 
          // static_instructions_Ofast : 50
          // dynamic_instructions_Ofast : 118
          // ------------------------------- 
          // static_instructions_Os : 33
          // dynamic_instructions_Os : 141
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 138
          // ------------------------------- 

          long length1 = 10;
        
          long length2 = 10;
        
          int _len_arg10 = 100;
          long * arg1 = (long *) malloc(_len_arg10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_arg10; _i0++) {
            arg1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_arg20 = 100;
          long * arg2 = (long *) malloc(_len_arg20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_arg20; _i0++) {
            arg2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = addHighPrecision(arg1,length1,arg2,length2);
          printf("%ld\n", benchRet); 
          free(arg1);
          free(arg2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
