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
typedef  int /*<<< orphan*/  WCHAR ;

/* Variables and functions */

__attribute__((used)) static void regs_to_str( unsigned int *regs, unsigned int len, WCHAR *buffer )
{
    unsigned int i;
    unsigned char *p = (unsigned char *)regs;

    for (i = 0; i < len; i++) { buffer[i] = *p++; }
    buffer[i] = 0;
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
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 3841
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 1286
          // ------------------------------- 
          // static_instructions_O2 : 95
          // dynamic_instructions_O2 : 373
          // ------------------------------- 
          // static_instructions_O3 : 93
          // dynamic_instructions_O3 : 371
          // ------------------------------- 
          // static_instructions_Ofast : 93
          // dynamic_instructions_Ofast : 371
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 1285
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 1539
          // ------------------------------- 

          unsigned int len = 255;
        
          int _len_regs0 = 65025;
          unsigned int * regs = (unsigned int *) malloc(_len_regs0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_buffer0 = 65025;
          int * buffer = (int *) malloc(_len_buffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          regs_to_str(regs,len,buffer);
          free(regs);
          free(buffer);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 166
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 61
          // ------------------------------- 
          // static_instructions_O2 : 53
          // dynamic_instructions_O2 : 59
          // ------------------------------- 
          // static_instructions_O3 : 53
          // dynamic_instructions_O3 : 59
          // ------------------------------- 
          // static_instructions_Ofast : 53
          // dynamic_instructions_Ofast : 59
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 60
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 69
          // ------------------------------- 

          unsigned int len = 10;
        
          int _len_regs0 = 100;
          unsigned int * regs = (unsigned int *) malloc(_len_regs0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_buffer0 = 100;
          int * buffer = (int *) malloc(_len_buffer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          regs_to_str(regs,len,buffer);
          free(regs);
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
