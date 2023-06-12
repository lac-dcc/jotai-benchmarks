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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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

/* Variables and functions */

__attribute__((used)) static void find_bits(unsigned long mask, u8 *pos, u8 *size)
{
	u8 first, len;

	first = 0;
	len = 0;

	if (mask) {
		while (!(mask & 0x1)) {
			mask = mask >> 1;
			first++;
		}

		while (mask & 0x1) {
			mask = mask >> 1;
			len++;
		}
	}

	*pos = first;
	*size = len;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 46
          // dynamic_instructions_O0 : 71
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 35
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 32
          // ------------------------------- 
          // static_instructions_O3 : 27
          // dynamic_instructions_O3 : 32
          // ------------------------------- 
          // static_instructions_Ofast : 27
          // dynamic_instructions_Ofast : 32
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 30
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 29
          // ------------------------------- 

          unsigned long mask = 100;
        
          int _len_pos0 = 1;
          long * pos = (long *) malloc(_len_pos0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_size0 = 1;
          long * size = (long *) malloc(_len_size0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          find_bits(mask,pos,size);
          free(pos);
          free(size);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 39
          // dynamic_instructions_O0 : 120
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 57
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 54
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 54
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 54
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 53
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 54
          // ------------------------------- 

          unsigned long mask = 255;
        
          int _len_pos0 = 65025;
          long * pos = (long *) malloc(_len_pos0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_size0 = 65025;
          long * size = (long *) malloc(_len_size0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          find_bits(mask,pos,size);
          free(pos);
          free(size);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 46
          // dynamic_instructions_O0 : 57
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 30
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 27
          // ------------------------------- 
          // static_instructions_O3 : 27
          // dynamic_instructions_O3 : 27
          // ------------------------------- 
          // static_instructions_Ofast : 27
          // dynamic_instructions_Ofast : 27
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 24
          // ------------------------------- 

          unsigned long mask = 10;
        
          int _len_pos0 = 100;
          long * pos = (long *) malloc(_len_pos0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_size0 = 100;
          long * size = (long *) malloc(_len_size0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          find_bits(mask,pos,size);
          free(pos);
          free(size);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 39
          // dynamic_instructions_O0 : 43
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 22
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 18
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          unsigned long mask = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pos0 = 1;
          long * pos = (long *) malloc(_len_pos0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_size0 = 1;
          long * size = (long *) malloc(_len_size0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          find_bits(mask,pos,size);
          free(pos);
          free(size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
