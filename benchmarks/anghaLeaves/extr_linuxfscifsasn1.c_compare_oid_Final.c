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

__attribute__((used)) static int
compare_oid(unsigned long *oid1, unsigned int oid1len,
	    unsigned long *oid2, unsigned int oid2len)
{
	unsigned int i;

	if (oid1len != oid2len)
		return 0;
	else {
		for (i = 0; i < oid1len; i++) {
			if (oid1[i] != oid2[i])
				return 0;
		}
		return 1;
	}
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
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 3842
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 1797
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 1543
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 1543
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 1543
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 1543
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 1797
          // ------------------------------- 

          unsigned int oid1len = 255;
        
          unsigned int oid2len = 255;
        
          int _len_oid10 = 65025;
          unsigned long * oid1 = (unsigned long *) malloc(_len_oid10*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_oid10; _i0++) {
            oid1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_oid20 = 65025;
          unsigned long * oid2 = (unsigned long *) malloc(_len_oid20*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_oid20; _i0++) {
            oid2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = compare_oid(oid1,oid1len,oid2,oid2len);
          printf("%d\n", benchRet); 
          free(oid1);
          free(oid2);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 167
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 82
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 73
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 73
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 73
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 73
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 82
          // ------------------------------- 

          unsigned int oid1len = 10;
        
          unsigned int oid2len = 10;
        
          int _len_oid10 = 100;
          unsigned long * oid1 = (unsigned long *) malloc(_len_oid10*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_oid10; _i0++) {
            oid1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_oid20 = 100;
          unsigned long * oid2 = (unsigned long *) malloc(_len_oid20*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_oid20; _i0++) {
            oid2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = compare_oid(oid1,oid1len,oid2,oid2len);
          printf("%d\n", benchRet); 
          free(oid1);
          free(oid2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
