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
typedef  scalar_t__ u8 ;
typedef  size_t u32 ;

/* Variables and functions */

bool eqNByte(u8 *str1, u8 *str2, u32 num)
{
	if (num == 0)
		return false;
	while (num > 0) {
		num--;
		if (str1[num] != str2[num])
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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 3329
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 1796
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 1796
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 1796
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 1796
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 1795
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 1796
          // ------------------------------- 

          unsigned long num = 255;
        
          int _len_str10 = 65025;
          long * str1 = (long *) malloc(_len_str10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_str10; _i0++) {
            str1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_str20 = 65025;
          long * str2 = (long *) malloc(_len_str20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_str20; _i0++) {
            str2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = eqNByte(str1,str2,num);
          printf("%d\n", benchRet); 
          free(str1);
          free(str2);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 144
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 81
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 81
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 81
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 81
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 80
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 81
          // ------------------------------- 

          unsigned long num = 10;
        
          int _len_str10 = 100;
          long * str1 = (long *) malloc(_len_str10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_str10; _i0++) {
            str1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_str20 = 100;
          long * str2 = (long *) malloc(_len_str20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_str20; _i0++) {
            str2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = eqNByte(str1,str2,num);
          printf("%d\n", benchRet); 
          free(str1);
          free(str2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
