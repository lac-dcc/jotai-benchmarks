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

int tftp_fetch_string (char *in, int avail_in) {
  int i = 0;
  while (i < avail_in && in[i]) {
    i++;
  }
  if (i >= avail_in) { return -1; }
  return i + 1;
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
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 4612
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 2055
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 1547
          // ------------------------------- 
          // static_instructions_O3 : 27
          // dynamic_instructions_O3 : 1547
          // ------------------------------- 
          // static_instructions_Ofast : 27
          // dynamic_instructions_Ofast : 1547
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 1545
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 1545
          // ------------------------------- 

          int avail_in = 255;
        
          int _len_in0 = 65025;
          char * in = (char *) malloc(_len_in0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = tftp_fetch_string(in,avail_in);
          printf("%d\n", benchRet); 
          free(in);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 202
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 95
          // ------------------------------- 
          // static_instructions_O2 : 27
          // dynamic_instructions_O2 : 77
          // ------------------------------- 
          // static_instructions_O3 : 27
          // dynamic_instructions_O3 : 77
          // ------------------------------- 
          // static_instructions_Ofast : 27
          // dynamic_instructions_Ofast : 77
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 75
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 75
          // ------------------------------- 

          int avail_in = 10;
        
          int _len_in0 = 100;
          char * in = (char *) malloc(_len_in0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = tftp_fetch_string(in,avail_in);
          printf("%d\n", benchRet); 
          free(in);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 4
          // dynamic_instructions_O2 : 4
          // ------------------------------- 
          // static_instructions_O3 : 4
          // dynamic_instructions_O3 : 4
          // ------------------------------- 
          // static_instructions_Ofast : 4
          // dynamic_instructions_Ofast : 4
          // ------------------------------- 
          // static_instructions_Os : 4
          // dynamic_instructions_Os : 4
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int avail_in = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_in0 = 1;
          char * in = (char *) malloc(_len_in0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = tftp_fetch_string(in,avail_in);
          printf("%d\n", benchRet); 
          free(in);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
