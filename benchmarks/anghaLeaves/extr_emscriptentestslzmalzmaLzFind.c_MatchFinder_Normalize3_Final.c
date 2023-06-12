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
typedef  size_t UInt32 ;
typedef  size_t CLzRef ;

/* Variables and functions */
 size_t kEmptyHashValue ; 

void MatchFinder_Normalize3(UInt32 subValue, CLzRef *items, UInt32 numItems)
{
  UInt32 i;
  for (i = 0; i < numItems; i++)
  {
    UInt32 value = items[i];
    if (value <= subValue)
      value = kEmptyHashValue;
    else
      value -= subValue;
    items[i] = value;
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
          // static_instructions_O0 : 30
          // dynamic_instructions_O0 : 5621
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 1793
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 1415
          // ------------------------------- 
          // static_instructions_O3 : 29
          // dynamic_instructions_O3 : 1415
          // ------------------------------- 
          // static_instructions_Ofast : 29
          // dynamic_instructions_Ofast : 1415
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 1792
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 2047
          // ------------------------------- 

          unsigned long subValue = 255;
        
          unsigned long numItems = 255;
        
          int _len_items0 = 65025;
          unsigned long * items = (unsigned long *) malloc(_len_items0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_items0; _i0++) {
            items[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          MatchFinder_Normalize3(subValue,items,numItems);
          free(items);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 30
          // dynamic_instructions_O0 : 231
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 78
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 69
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 69
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 69
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 77
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 87
          // ------------------------------- 

          unsigned long subValue = 10;
        
          unsigned long numItems = 10;
        
          int _len_items0 = 100;
          unsigned long * items = (unsigned long *) malloc(_len_items0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_items0; _i0++) {
            items[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          MatchFinder_Normalize3(subValue,items,numItems);
          free(items);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
