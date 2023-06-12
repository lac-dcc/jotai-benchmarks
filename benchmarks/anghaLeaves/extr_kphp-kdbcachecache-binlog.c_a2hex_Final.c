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

__attribute__((used)) static void a2hex (unsigned char *a, int len, char *output) {
  static char hcyf[16] = "0123456789abcdef";
  int i;
  for (i = 0; i < len; i++) {
    output[2*i] = hcyf[(a[i] >> 4)];
    output[2*i+1] = hcyf[a[i] & 15];
  }
  output[2*len] = 0;
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
          // dynamic_instructions_O0 : 7666
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 2816
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 2816
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 2816
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 2816
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 2815
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 3072
          // ------------------------------- 

          int len = 255;
        
          int _len_a0 = 65025;
          unsigned char * a = (unsigned char *) malloc(_len_a0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_output0 = 65025;
          char * output = (char *) malloc(_len_output0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          a2hex(a,len,output);
          free(a);
          free(output);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 316
          // ------------------------------- 
          // static_instructions_O1 : 22
          // dynamic_instructions_O1 : 121
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 121
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 121
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 121
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 120
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 132
          // ------------------------------- 

          int len = 10;
        
          int _len_a0 = 100;
          unsigned char * a = (unsigned char *) malloc(_len_a0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_output0 = 100;
          char * output = (char *) malloc(_len_output0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          a2hex(a,len,output);
          free(a);
          free(output);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
