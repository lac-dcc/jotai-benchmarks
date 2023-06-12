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

/* Variables and functions */

void myset (char *target, char ch, int size)
{
  int i;
  
  for (i = 0; i < size; ++i)
    {
      target[i] = ch;
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
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 2817
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
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
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 1284
          // ------------------------------- 

          char ch = 255;
        
          int size = 255;
        
          int _len_target0 = 65025;
          char * target = (char *) malloc(_len_target0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          myset(target,ch,size);
          free(target);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 122
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
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
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 59
          // ------------------------------- 

          char ch = 10;
        
          int size = 10;
        
          int _len_target0 = 100;
          char * target = (char *) malloc(_len_target0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          myset(target,ch,size);
          free(target);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 3
          // dynamic_instructions_O1 : 3
          // ------------------------------- 
          // static_instructions_O2 : 3
          // dynamic_instructions_O2 : 3
          // ------------------------------- 
          // static_instructions_O3 : 3
          // dynamic_instructions_O3 : 3
          // ------------------------------- 
          // static_instructions_Ofast : 3
          // dynamic_instructions_Ofast : 3
          // ------------------------------- 
          // static_instructions_Os : 3
          // dynamic_instructions_Os : 3
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          char ch = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_target0 = 1;
          char * target = (char *) malloc(_len_target0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          myset(target,ch,size);
          free(target);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
