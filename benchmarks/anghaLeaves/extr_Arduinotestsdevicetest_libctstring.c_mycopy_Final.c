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

void mycopy (char *target, char *source, int size)
{
  int i;

  for (i = 0; i < size; ++i)
    {
      target[i] = source[i];
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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 3326
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 1284
          // ------------------------------- 
          // static_instructions_O2 : 109
          // dynamic_instructions_O2 : 143
          // ------------------------------- 
          // static_instructions_O3 : 109
          // dynamic_instructions_O3 : 143
          // ------------------------------- 
          // static_instructions_Ofast : 109
          // dynamic_instructions_Ofast : 143
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 1283
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 1539
          // ------------------------------- 

          int size = 255;
        
          int _len_target0 = 65025;
          char * target = (char *) malloc(_len_target0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_source0 = 65025;
          char * source = (char *) malloc(_len_source0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_source0; _i0++) {
            source[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          mycopy(target,source,size);
          free(target);
          free(source);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 141
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 59
          // ------------------------------- 
          // static_instructions_O2 : 45
          // dynamic_instructions_O2 : 50
          // ------------------------------- 
          // static_instructions_O3 : 45
          // dynamic_instructions_O3 : 50
          // ------------------------------- 
          // static_instructions_Ofast : 45
          // dynamic_instructions_Ofast : 50
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 58
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 69
          // ------------------------------- 

          int size = 10;
        
          int _len_target0 = 100;
          char * target = (char *) malloc(_len_target0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_source0 = 100;
          char * source = (char *) malloc(_len_source0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_source0; _i0++) {
            source[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          mycopy(target,source,size);
          free(target);
          free(source);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_target0 = 1;
          char * target = (char *) malloc(_len_target0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_source0 = 1;
          char * source = (char *) malloc(_len_source0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_source0; _i0++) {
            source[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          mycopy(target,source,size);
          free(target);
          free(source);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
