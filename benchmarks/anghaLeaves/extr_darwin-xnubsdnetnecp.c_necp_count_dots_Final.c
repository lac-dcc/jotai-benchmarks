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

__attribute__((used)) static inline int
necp_count_dots(char *string, size_t length)
{
	int dot_count = 0;
	size_t i = 0;

	for (i = 0; i < length; i++) {
		if (string[i] == '.') {
			dot_count++;
		}
	}

	return (dot_count);
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
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 1794
          // ------------------------------- 
          // static_instructions_O2 : 84
          // dynamic_instructions_O2 : 504
          // ------------------------------- 
          // static_instructions_O3 : 84
          // dynamic_instructions_O3 : 504
          // ------------------------------- 
          // static_instructions_Ofast : 84
          // dynamic_instructions_Ofast : 504
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 1794
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 2048
          // ------------------------------- 

          unsigned long length = 255;
        
          int _len_string0 = 65025;
          char * string = (char *) malloc(_len_string0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
            string[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = necp_count_dots(string,length);
          printf("%d\n", benchRet); 
          free(string);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 143
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 79
          // ------------------------------- 
          // static_instructions_O2 : 51
          // dynamic_instructions_O2 : 58
          // ------------------------------- 
          // static_instructions_O3 : 51
          // dynamic_instructions_O3 : 58
          // ------------------------------- 
          // static_instructions_Ofast : 51
          // dynamic_instructions_Ofast : 58
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 79
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 88
          // ------------------------------- 

          unsigned long length = 10;
        
          int _len_string0 = 100;
          char * string = (char *) malloc(_len_string0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_string0; _i0++) {
            string[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = necp_count_dots(string,length);
          printf("%d\n", benchRet); 
          free(string);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
