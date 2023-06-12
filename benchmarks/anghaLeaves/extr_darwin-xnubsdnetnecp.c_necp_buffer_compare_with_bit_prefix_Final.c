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
typedef  int u_int8_t ;
typedef  int u_int32_t ;

/* Variables and functions */
 int FALSE ; 
 int TRUE ; 

__attribute__((used)) static bool
necp_buffer_compare_with_bit_prefix(u_int8_t *p1, u_int8_t *p2, u_int32_t bits)
{
	u_int8_t mask;

	/* Handle null pointers */
	if (p1 == NULL || p2 == NULL) {
		return (p1 == p2);
	}

	while (bits >= 8) {
		if (*p1++ != *p2++) {
			return (FALSE);
		}
		bits -= 8;
	}

	if (bits > 0) {
		mask = ~((1<<(8-bits))-1);
		if ((*p1 & mask) != (*p2 & mask)) {
			return (FALSE);
		}
	}
	return (TRUE);
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
          // static_instructions_O0 : 50
          // dynamic_instructions_O0 : 562
          // ------------------------------- 
          // static_instructions_O1 : 31
          // dynamic_instructions_O1 : 301
          // ------------------------------- 
          // static_instructions_O2 : 31
          // dynamic_instructions_O2 : 301
          // ------------------------------- 
          // static_instructions_O3 : 31
          // dynamic_instructions_O3 : 301
          // ------------------------------- 
          // static_instructions_Ofast : 31
          // dynamic_instructions_Ofast : 301
          // ------------------------------- 
          // static_instructions_Os : 30
          // dynamic_instructions_Os : 300
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 269
          // ------------------------------- 

          int bits = 255;
        
          int _len_p10 = 65025;
          int * p1 = (int *) malloc(_len_p10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p10; _i0++) {
            p1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p20 = 65025;
          int * p2 = (int *) malloc(_len_p20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p20; _i0++) {
            p2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = necp_buffer_compare_with_bit_prefix(p1,p2,bits);
          printf("%d\n", benchRet); 
          free(p1);
          free(p2);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 50
          // dynamic_instructions_O0 : 52
          // ------------------------------- 
          // static_instructions_O1 : 31
          // dynamic_instructions_O1 : 31
          // ------------------------------- 
          // static_instructions_O2 : 31
          // dynamic_instructions_O2 : 31
          // ------------------------------- 
          // static_instructions_O3 : 31
          // dynamic_instructions_O3 : 31
          // ------------------------------- 
          // static_instructions_Ofast : 31
          // dynamic_instructions_Ofast : 31
          // ------------------------------- 
          // static_instructions_Os : 30
          // dynamic_instructions_Os : 30
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 29
          // ------------------------------- 

          int bits = 10;
        
          int _len_p10 = 100;
          int * p1 = (int *) malloc(_len_p10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p10; _i0++) {
            p1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p20 = 100;
          int * p2 = (int *) malloc(_len_p20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p20; _i0++) {
            p2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = necp_buffer_compare_with_bit_prefix(p1,p2,bits);
          printf("%d\n", benchRet); 
          free(p1);
          free(p2);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int bits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_p10 = 1;
          int * p1 = (int *) malloc(_len_p10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p10; _i0++) {
            p1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p20 = 1;
          int * p2 = (int *) malloc(_len_p20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p20; _i0++) {
            p2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = necp_buffer_compare_with_bit_prefix(p1,p2,bits);
          printf("%d\n", benchRet); 
          free(p1);
          free(p2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
