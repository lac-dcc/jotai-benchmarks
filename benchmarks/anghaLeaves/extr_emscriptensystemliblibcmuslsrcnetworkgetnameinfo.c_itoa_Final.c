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

__attribute__((used)) static char *itoa(char *p, unsigned x) {
	p += 3*sizeof(int);
	*--p = 0;
	do {
		*--p = '0' + x % 10;
		x /= 10;
	} while (x);
	return p;
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
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 69
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 49
          // ------------------------------- 
          // static_instructions_O2 : 23
          // dynamic_instructions_O2 : 49
          // ------------------------------- 
          // static_instructions_O3 : 23
          // dynamic_instructions_O3 : 49
          // ------------------------------- 
          // static_instructions_Ofast : 23
          // dynamic_instructions_Ofast : 49
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 47
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 35
          // ------------------------------- 

          unsigned int x = 255;
        
          int _len_p0 = 65025;
          char * p = (char *) malloc(_len_p0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = itoa(p,x);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(p);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 51
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 36
          // ------------------------------- 
          // static_instructions_O2 : 23
          // dynamic_instructions_O2 : 36
          // ------------------------------- 
          // static_instructions_O3 : 23
          // dynamic_instructions_O3 : 36
          // ------------------------------- 
          // static_instructions_Ofast : 23
          // dynamic_instructions_Ofast : 36
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 34
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 26
          // ------------------------------- 

          unsigned int x = 10;
        
          int _len_p0 = 100;
          char * p = (char *) malloc(_len_p0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          char * benchRet = itoa(p,x);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
