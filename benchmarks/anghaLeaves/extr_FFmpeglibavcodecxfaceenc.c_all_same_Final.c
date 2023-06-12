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

/* Variables and functions */
 int /*<<< orphan*/  XFACE_WIDTH ; 

__attribute__((used)) static int all_same(char *bitmap, int w, int h)
{
    char val, *row;
    int x;

    val = *bitmap;
    while (h--) {
        row = bitmap;
        x = w;
        while (x--)
            if (*(row++) != val)
                return 0;
        bitmap += XFACE_WIDTH;
    }
    return 1;
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
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 981003
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 392200
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 392200
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 392200
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 392200
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 391946
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 391945
          // ------------------------------- 

          int w = 255;
        
          int h = 255;
        
          int _len_bitmap0 = 65025;
          char * bitmap = (char *) malloc(_len_bitmap0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_bitmap0; _i0++) {
            bitmap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = all_same(bitmap,w,h);
          printf("%d\n", benchRet); 
          free(bitmap);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 1738
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 690
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 690
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 690
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 690
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 681
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 680
          // ------------------------------- 

          int w = 10;
        
          int h = 10;
        
          int _len_bitmap0 = 100;
          char * bitmap = (char *) malloc(_len_bitmap0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_bitmap0; _i0++) {
            bitmap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = all_same(bitmap,w,h);
          printf("%d\n", benchRet); 
          free(bitmap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
