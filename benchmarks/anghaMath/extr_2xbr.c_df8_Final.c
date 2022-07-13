// ========================================================================= //

// includes
#include <math.h>
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int uint32_t ;

/* Variables and functions */

float df8(uint32_t A, uint32_t B,
      uint32_t pg_red_mask, uint32_t pg_green_mask, uint32_t pg_blue_mask)
{
   uint32_t r, g, b;
   uint32_t y, u, v;

#ifdef MSB_FIRST
   r = abs((int)(((A & pg_red_mask  )>>24) - ((B & pg_red_mask  )>> 24)));
   g = abs((int)(((A & pg_green_mask  )>>16) - ((B & pg_green_mask  )>> 16)));
   b = abs((int)(((A & pg_blue_mask  )>>8 ) - ((B & pg_blue_mask  )>> 8 )));
#else
   b = abs((int)(((A & pg_blue_mask  )>>16) - ((B & pg_blue_mask  )>> 16)));
   g = abs((int)(((A & pg_green_mask)>>8  ) - ((B & pg_green_mask )>>  8)));
   r = abs((int)(((A & pg_red_mask        ) -  (B & pg_red_mask         ))));
#endif

   y = fabs(0.299*r + 0.587*g + 0.114*b);
   u = fabs(-0.169*r - 0.331*g + 0.500*b);
   v = fabs(0.500*r - 0.419*g - 0.081*b);

   return 48*y + 7*u + 6*v;
}


// ------------------------------------------------------------------------- //




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
          int A = 100;
          int B = 100;
          int pg_red_mask = 100;
          int pg_green_mask = 100;
          int pg_blue_mask = 100;
          float benchRet = df8(A,B,pg_red_mask,pg_green_mask,pg_blue_mask);
          printf("%f\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int A = 255;
          int B = 255;
          int pg_red_mask = 255;
          int pg_green_mask = 255;
          int pg_blue_mask = 255;
          float benchRet = df8(A,B,pg_red_mask,pg_green_mask,pg_blue_mask);
          printf("%f\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int A = 10;
          int B = 10;
          int pg_red_mask = 10;
          int pg_green_mask = 10;
          int pg_blue_mask = 10;
          float benchRet = df8(A,B,pg_red_mask,pg_green_mask,pg_blue_mask);
          printf("%f\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
