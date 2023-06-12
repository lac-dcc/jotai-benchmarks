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
typedef  int IDWTELEM ;

/* Variables and functions */

__attribute__((used)) static void horizontal_compose53i(IDWTELEM *b, IDWTELEM *temp, int width)
{
    const int width2 = width >> 1;
    const int w2     = (width + 1) >> 1;
    int x;

    for (x = 0; x < width2; x++) {
        temp[2 * x]     = b[x];
        temp[2 * x + 1] = b[x + w2];
    }
    if (width & 1)
        temp[2 * x] = b[x];

    b[0] = temp[0] - ((temp[1] + 1) >> 1);
    for (x = 2; x < width - 1; x += 2) {
        b[x]     = temp[x]     - ((temp[x - 1] + temp[x + 1] + 2) >> 2);
        b[x - 1] = temp[x - 1] + ((b[x - 2]    + b[x]        + 1) >> 1);
    }
    if (width & 1) {
        b[x]     = temp[x]     - ((temp[x - 1]     + 1) >> 1);
        b[x - 1] = temp[x - 1] + ((b[x - 2] + b[x] + 1) >> 1);
    } else
        b[x - 1] = temp[x - 1] + b[x - 2];
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
          // static_instructions_O0 : 152
          // dynamic_instructions_O0 : 9561
          // ------------------------------- 
          // static_instructions_O1 : 80
          // dynamic_instructions_O1 : 3212
          // ------------------------------- 
          // static_instructions_O2 : 99
          // dynamic_instructions_O2 : 3031
          // ------------------------------- 
          // static_instructions_O3 : 99
          // dynamic_instructions_O3 : 3031
          // ------------------------------- 
          // static_instructions_Ofast : 99
          // dynamic_instructions_Ofast : 3031
          // ------------------------------- 
          // static_instructions_Os : 80
          // dynamic_instructions_Os : 3212
          // ------------------------------- 
          // static_instructions_Oz : 76
          // dynamic_instructions_Oz : 3589
          // ------------------------------- 

          int width = 255;
        
          int _len_b0 = 65025;
          int * b = (int *) malloc(_len_b0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_temp0 = 65025;
          int * temp = (int *) malloc(_len_temp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_temp0; _i0++) {
            temp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          horizontal_compose53i(b,temp,width);
          free(b);
          free(temp);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 123
          // dynamic_instructions_O0 : 382
          // ------------------------------- 
          // static_instructions_O1 : 67
          // dynamic_instructions_O1 : 149
          // ------------------------------- 
          // static_instructions_O2 : 86
          // dynamic_instructions_O2 : 151
          // ------------------------------- 
          // static_instructions_O3 : 85
          // dynamic_instructions_O3 : 150
          // ------------------------------- 
          // static_instructions_Ofast : 85
          // dynamic_instructions_Ofast : 150
          // ------------------------------- 
          // static_instructions_Os : 67
          // dynamic_instructions_Os : 149
          // ------------------------------- 
          // static_instructions_Oz : 65
          // dynamic_instructions_Oz : 162
          // ------------------------------- 

          int width = 10;
        
          int _len_b0 = 100;
          int * b = (int *) malloc(_len_b0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_temp0 = 100;
          int * temp = (int *) malloc(_len_temp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_temp0; _i0++) {
            temp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          horizontal_compose53i(b,temp,width);
          free(b);
          free(temp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
