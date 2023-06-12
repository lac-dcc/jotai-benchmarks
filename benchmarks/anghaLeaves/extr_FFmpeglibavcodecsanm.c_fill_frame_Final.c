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
typedef  int /*<<< orphan*/  uint16_t ;

/* Variables and functions */

__attribute__((used)) static void fill_frame(uint16_t *pbuf, int buf_size, uint16_t color)
{
    while (buf_size--)
        *pbuf++ = color;
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
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 3328
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 1029
          // ------------------------------- 
          // static_instructions_O2 : 69
          // dynamic_instructions_O2 : 161
          // ------------------------------- 
          // static_instructions_O3 : 69
          // dynamic_instructions_O3 : 161
          // ------------------------------- 
          // static_instructions_Ofast : 69
          // dynamic_instructions_Ofast : 161
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 1028
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 1283
          // ------------------------------- 

          int buf_size = 255;
        
          int color = 255;
        
          int _len_pbuf0 = 65025;
          int * pbuf = (int *) malloc(_len_pbuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pbuf0; _i0++) {
            pbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          fill_frame(pbuf,buf_size,color);
          free(pbuf);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 143
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 49
          // ------------------------------- 
          // static_instructions_O2 : 48
          // dynamic_instructions_O2 : 52
          // ------------------------------- 
          // static_instructions_O3 : 48
          // dynamic_instructions_O3 : 52
          // ------------------------------- 
          // static_instructions_Ofast : 48
          // dynamic_instructions_Ofast : 52
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 48
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 58
          // ------------------------------- 

          int buf_size = 10;
        
          int color = 10;
        
          int _len_pbuf0 = 100;
          int * pbuf = (int *) malloc(_len_pbuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pbuf0; _i0++) {
            pbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          fill_frame(pbuf,buf_size,color);
          free(pbuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
