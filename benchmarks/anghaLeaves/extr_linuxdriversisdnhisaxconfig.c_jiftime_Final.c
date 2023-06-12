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

int jiftime(char *s, long mark)
{
	s += 8;

	*s-- = '\0';
	*s-- = mark % 10 + '0';
	mark /= 10;
	*s-- = mark % 10 + '0';
	mark /= 10;
	*s-- = '.';
	*s-- = mark % 10 + '0';
	mark /= 10;
	*s-- = mark % 6 + '0';
	mark /= 6;
	*s-- = ':';
	*s-- = mark % 10 + '0';
	mark /= 10;
	*s-- = mark % 10 + '0';
	return 8;
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
          // static_instructions_O0 : 116
          // dynamic_instructions_O0 : 116
          // ------------------------------- 
          // static_instructions_O1 : 123
          // dynamic_instructions_O1 : 123
          // ------------------------------- 
          // static_instructions_O2 : 123
          // dynamic_instructions_O2 : 123
          // ------------------------------- 
          // static_instructions_O3 : 123
          // dynamic_instructions_O3 : 123
          // ------------------------------- 
          // static_instructions_Ofast : 123
          // dynamic_instructions_Ofast : 123
          // ------------------------------- 
          // static_instructions_Os : 123
          // dynamic_instructions_Os : 123
          // ------------------------------- 
          // static_instructions_Oz : 51
          // dynamic_instructions_Oz : 51
          // ------------------------------- 

          long mark = 255;
        
          int _len_s0 = 65025;
          char * s = (char *) malloc(_len_s0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = jiftime(s,mark);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 116
          // dynamic_instructions_O0 : 116
          // ------------------------------- 
          // static_instructions_O1 : 123
          // dynamic_instructions_O1 : 123
          // ------------------------------- 
          // static_instructions_O2 : 123
          // dynamic_instructions_O2 : 123
          // ------------------------------- 
          // static_instructions_O3 : 123
          // dynamic_instructions_O3 : 123
          // ------------------------------- 
          // static_instructions_Ofast : 123
          // dynamic_instructions_Ofast : 123
          // ------------------------------- 
          // static_instructions_Os : 123
          // dynamic_instructions_Os : 123
          // ------------------------------- 
          // static_instructions_Oz : 51
          // dynamic_instructions_Oz : 51
          // ------------------------------- 

          long mark = 10;
        
          int _len_s0 = 100;
          char * s = (char *) malloc(_len_s0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = jiftime(s,mark);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
