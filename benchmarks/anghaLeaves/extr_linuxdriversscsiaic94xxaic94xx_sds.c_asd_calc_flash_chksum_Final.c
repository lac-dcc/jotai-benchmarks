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
typedef  int /*<<< orphan*/  u16 ;

/* Variables and functions */

__attribute__((used)) static u16 asd_calc_flash_chksum(u16 *p, int size)
{
	u16 chksum = 0;

	while (size-- > 0)
		chksum += *p++;

	return chksum;
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
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 1284
          // ------------------------------- 
          // static_instructions_O2 : 78
          // dynamic_instructions_O2 : 236
          // ------------------------------- 
          // static_instructions_O3 : 78
          // dynamic_instructions_O3 : 236
          // ------------------------------- 
          // static_instructions_Ofast : 78
          // dynamic_instructions_Ofast : 236
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 1284
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 1537
          // ------------------------------- 

          int size = 255;
        
          int _len_p0 = 65025;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = asd_calc_flash_chksum(p,size);
          printf("%d\n", benchRet); 
          free(p);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 154
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 59
          // ------------------------------- 
          // static_instructions_O2 : 57
          // dynamic_instructions_O2 : 62
          // ------------------------------- 
          // static_instructions_O3 : 57
          // dynamic_instructions_O3 : 62
          // ------------------------------- 
          // static_instructions_Ofast : 57
          // dynamic_instructions_Ofast : 62
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 59
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 67
          // ------------------------------- 

          int size = 10;
        
          int _len_p0 = 100;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = asd_calc_flash_chksum(p,size);
          printf("%d\n", benchRet); 
          free(p);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_p0 = 1;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = asd_calc_flash_chksum(p,size);
          printf("%d\n", benchRet); 
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
