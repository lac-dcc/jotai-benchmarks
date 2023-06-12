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
typedef  int /*<<< orphan*/  u8 ;
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static void convert_endian(u8 flag, u32 size, u8 *d)
{
	u32 i;

	if (!flag)
		return;
	for (i = 0; i < (size & ~3); i += 4) {
		d[i + 0] ^= d[i + 3];
		d[i + 3] ^= d[i + 0];
		d[i + 0] ^= d[i + 3];

		d[i + 1] ^= d[i + 2];
		d[i + 2] ^= d[i + 1];
		d[i + 1] ^= d[i + 2];
	}

	switch (size & 3) {
	case 0:
	case 1:
		/* do nothing */
		break;
	case 2:
		d[i + 0] ^= d[i + 1];
		d[i + 1] ^= d[i + 0];
		d[i + 0] ^= d[i + 1];
		break;

	case 3:
		d[i + 0] ^= d[i + 2];
		d[i + 2] ^= d[i + 0];
		d[i + 0] ^= d[i + 2];
		break;
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
          // static_instructions_O0 : 131
          // dynamic_instructions_O0 : 4786
          // ------------------------------- 
          // static_instructions_O1 : 37
          // dynamic_instructions_O1 : 533
          // ------------------------------- 
          // static_instructions_O2 : 33
          // dynamic_instructions_O2 : 405
          // ------------------------------- 
          // static_instructions_O3 : 32
          // dynamic_instructions_O3 : 404
          // ------------------------------- 
          // static_instructions_Ofast : 32
          // dynamic_instructions_Ofast : 404
          // ------------------------------- 
          // static_instructions_Os : 31
          // dynamic_instructions_Os : 403
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 463
          // ------------------------------- 

          int flag = 255;
        
          int size = 255;
        
          int _len_d0 = 65025;
          int * d = (int *) malloc(_len_d0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          convert_endian(flag,size,d);
          free(d);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 128
          // dynamic_instructions_O0 : 208
          // ------------------------------- 
          // static_instructions_O1 : 36
          // dynamic_instructions_O1 : 44
          // ------------------------------- 
          // static_instructions_O2 : 32
          // dynamic_instructions_O2 : 38
          // ------------------------------- 
          // static_instructions_O3 : 31
          // dynamic_instructions_O3 : 37
          // ------------------------------- 
          // static_instructions_Ofast : 31
          // dynamic_instructions_Ofast : 37
          // ------------------------------- 
          // static_instructions_Os : 30
          // dynamic_instructions_Os : 36
          // ------------------------------- 
          // static_instructions_Oz : 23
          // dynamic_instructions_Oz : 32
          // ------------------------------- 

          int flag = 10;
        
          int size = 10;
        
          int _len_d0 = 100;
          int * d = (int *) malloc(_len_d0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          convert_endian(flag,size,d);
          free(d);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
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
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int flag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_d0 = 1;
          int * d = (int *) malloc(_len_d0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          convert_endian(flag,size,d);
          free(d);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
