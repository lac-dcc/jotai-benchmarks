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
struct oxu_hcd {int dummy; } ;

/* Variables and functions */
 unsigned int USB_PORT_STAT_HIGH_SPEED ; 
 unsigned int USB_PORT_STAT_LOW_SPEED ; 

__attribute__((used)) static inline unsigned int oxu_port_speed(struct oxu_hcd *oxu,
						unsigned int portsc)
{
	switch ((portsc >> 26) & 3) {
	case 0:
		return 0;
	case 1:
		return USB_PORT_STAT_LOW_SPEED;
	case 2:
	default:
		return USB_PORT_STAT_HIGH_SPEED;
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


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned int portsc = 100;
        
          int _len_oxu0 = 1;
          struct oxu_hcd * oxu = (struct oxu_hcd *) malloc(_len_oxu0*sizeof(struct oxu_hcd));
          for(int _i0 = 0; _i0 < _len_oxu0; _i0++) {
              oxu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned int benchRet = oxu_port_speed(oxu,portsc);
          printf("%u\n", benchRet); 
          free(oxu);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned int portsc = 255;
        
          int _len_oxu0 = 65025;
          struct oxu_hcd * oxu = (struct oxu_hcd *) malloc(_len_oxu0*sizeof(struct oxu_hcd));
          for(int _i0 = 0; _i0 < _len_oxu0; _i0++) {
              oxu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned int benchRet = oxu_port_speed(oxu,portsc);
          printf("%u\n", benchRet); 
          free(oxu);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned int portsc = 10;
        
          int _len_oxu0 = 100;
          struct oxu_hcd * oxu = (struct oxu_hcd *) malloc(_len_oxu0*sizeof(struct oxu_hcd));
          for(int _i0 = 0; _i0 < _len_oxu0; _i0++) {
              oxu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned int benchRet = oxu_port_speed(oxu,portsc);
          printf("%u\n", benchRet); 
          free(oxu);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int portsc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_oxu0 = 1;
          struct oxu_hcd * oxu = (struct oxu_hcd *) malloc(_len_oxu0*sizeof(struct oxu_hcd));
          for(int _i0 = 0; _i0 < _len_oxu0; _i0++) {
              oxu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned int benchRet = oxu_port_speed(oxu,portsc);
          printf("%u\n", benchRet); 
          free(oxu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
