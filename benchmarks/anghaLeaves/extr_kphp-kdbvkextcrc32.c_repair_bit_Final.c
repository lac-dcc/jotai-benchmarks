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

__attribute__((used)) static int repair_bit (unsigned char *input, int l, int k) {
  if (k < 0) {
    return -1;
  }
  int idx = k >> 5, bit = k & 31, i = (l - 1) - (idx - 1) * 4;
  while (bit >= 8) {
    i--;
    bit -= 8;
  }
  if (i < 0) {
    return -2;
  }
  if (i >= l) {
    return -3;
  }
  int j = 7 - bit;
  input[i] ^= 1 << j;
  return 0;
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
          // static_instructions_O0 : 49
          // dynamic_instructions_O0 : 69
          // ------------------------------- 
          // static_instructions_O1 : 41
          // dynamic_instructions_O1 : 41
          // ------------------------------- 
          // static_instructions_O2 : 41
          // dynamic_instructions_O2 : 41
          // ------------------------------- 
          // static_instructions_O3 : 41
          // dynamic_instructions_O3 : 41
          // ------------------------------- 
          // static_instructions_Ofast : 41
          // dynamic_instructions_Ofast : 41
          // ------------------------------- 
          // static_instructions_Os : 41
          // dynamic_instructions_Os : 41
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 29
          // ------------------------------- 

          int l = 255;
        
          int k = 255;
        
          int _len_input0 = 65025;
          unsigned char * input = (unsigned char *) malloc(_len_input0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = repair_bit(input,l,k);
          printf("%d\n", benchRet); 
          free(input);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 39
          // dynamic_instructions_O0 : 41
          // ------------------------------- 
          // static_instructions_O1 : 31
          // dynamic_instructions_O1 : 31
          // ------------------------------- 
          // static_instructions_O2 : 31
          // dynamic_instructions_O2 : 31
          // ------------------------------- 
          // static_instructions_O3 : 31
          // dynamic_instructions_O3 : 31
          // ------------------------------- 
          // static_instructions_Ofast : 31
          // dynamic_instructions_Ofast : 31
          // ------------------------------- 
          // static_instructions_Os : 31
          // dynamic_instructions_Os : 31
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int l = 10;
        
          int k = 10;
        
          int _len_input0 = 100;
          unsigned char * input = (unsigned char *) malloc(_len_input0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = repair_bit(input,l,k);
          printf("%d\n", benchRet); 
          free(input);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 4
          // dynamic_instructions_O1 : 4
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
          // static_instructions_Oz : 4
          // dynamic_instructions_Oz : 4
          // ------------------------------- 

          int l = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int k = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_input0 = 1;
          unsigned char * input = (unsigned char *) malloc(_len_input0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = repair_bit(input,l,k);
          printf("%d\n", benchRet); 
          free(input);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
