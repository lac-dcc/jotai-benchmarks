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
typedef  int u8 ;

/* Variables and functions */

__attribute__((used)) static u8 vp702x_chksum(u8 *buf,int f, int count)
{
	u8 s = 0;
	int i;
	for (i = f; i < f+count; i++)
		s += buf[i];
	return ~s+1;
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
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 3588
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 1034
          // ------------------------------- 
          // static_instructions_O2 : 82
          // dynamic_instructions_O2 : 234
          // ------------------------------- 
          // static_instructions_O3 : 82
          // dynamic_instructions_O3 : 234
          // ------------------------------- 
          // static_instructions_Ofast : 82
          // dynamic_instructions_Ofast : 234
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 1032
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 1286
          // ------------------------------- 

          int f = 255;
        
          int count = 255;
        
          int _len_buf0 = 65025;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = vp702x_chksum(buf,f,count);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 158
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 54
          // ------------------------------- 
          // static_instructions_O2 : 58
          // dynamic_instructions_O2 : 62
          // ------------------------------- 
          // static_instructions_O3 : 58
          // dynamic_instructions_O3 : 62
          // ------------------------------- 
          // static_instructions_Ofast : 58
          // dynamic_instructions_Ofast : 62
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 52
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 61
          // ------------------------------- 

          int f = 10;
        
          int count = 10;
        
          int _len_buf0 = 100;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = vp702x_chksum(buf,f,count);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int f = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_buf0 = 1;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = vp702x_chksum(buf,f,count);
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
