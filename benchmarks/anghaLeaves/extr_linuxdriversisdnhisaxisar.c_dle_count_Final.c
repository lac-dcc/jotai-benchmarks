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

/* Variables and functions */
 int /*<<< orphan*/  DLE ; 

__attribute__((used)) static inline int
dle_count(unsigned char *buf, int len)
{
	int count = 0;

	while (len--)
		if (*buf++ == DLE)
			count++;
	return count;
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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 3584
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 2051
          // ------------------------------- 
          // static_instructions_O2 : 86
          // dynamic_instructions_O2 : 456
          // ------------------------------- 
          // static_instructions_O3 : 86
          // dynamic_instructions_O3 : 456
          // ------------------------------- 
          // static_instructions_Ofast : 86
          // dynamic_instructions_Ofast : 456
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 2051
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 2305
          // ------------------------------- 

          int len = 255;
        
          int _len_buf0 = 65025;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = dle_count(buf,len);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 154
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 91
          // ------------------------------- 
          // static_instructions_O2 : 58
          // dynamic_instructions_O2 : 66
          // ------------------------------- 
          // static_instructions_O3 : 58
          // dynamic_instructions_O3 : 66
          // ------------------------------- 
          // static_instructions_Ofast : 58
          // dynamic_instructions_Ofast : 66
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 91
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 100
          // ------------------------------- 

          int len = 10;
        
          int _len_buf0 = 100;
          unsigned char * buf = (unsigned char *) malloc(_len_buf0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = dle_count(buf,len);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
