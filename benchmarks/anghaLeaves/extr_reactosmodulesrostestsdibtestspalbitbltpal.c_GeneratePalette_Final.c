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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int rgbRed; int rgbGreen; int rgbBlue; scalar_t__ rgbReserved; } ;
typedef  TYPE_1__ RGBQUAD ;

/* Variables and functions */

void GeneratePalette(RGBQUAD* p)
{
	int i;
	for(i=0;i<256;i++)
	{
		p[i].rgbRed = i;
		p[i].rgbGreen = i;
		p[i].rgbBlue = i;
		p[i].rgbReserved = 0;
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
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 7432
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 2055
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 1799
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 1799
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 1799
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 2054
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 2312
          // ------------------------------- 

          int _len_p0 = 65025;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              p[_i0].rgbRed = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].rgbGreen = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].rgbBlue = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].rgbReserved = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          GeneratePalette(p);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
