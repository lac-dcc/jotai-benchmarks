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
typedef  int uint8_t ;
typedef  int uint16_t ;

/* Variables and functions */

void pack6bit(uint8_t *buf, int index, uint8_t inVal) {
    int addr = (index * 6) / 8;
    int offset = 10-(index * 6) % 8;
    // compute the mask and value shifted into the correct location in the bit array
    uint16_t value = (inVal & 0x3F) << offset;
    uint16_t mask = ~(0x003F << offset);

    // zero out the bits we are working on
    buf[addr]   &= mask >> 8;
    buf[addr+1] &= mask & 0xFF;
    // copy the value into the destination
    buf[addr]   |= value >> 8;
    buf[addr+1] |= value & 0xFF;
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
          // static_instructions_O0 : 57
          // dynamic_instructions_O0 : 57
          // ------------------------------- 
          // static_instructions_O1 : 32
          // dynamic_instructions_O1 : 32
          // ------------------------------- 
          // static_instructions_O2 : 32
          // dynamic_instructions_O2 : 32
          // ------------------------------- 
          // static_instructions_O3 : 32
          // dynamic_instructions_O3 : 32
          // ------------------------------- 
          // static_instructions_Ofast : 32
          // dynamic_instructions_Ofast : 32
          // ------------------------------- 
          // static_instructions_Os : 32
          // dynamic_instructions_Os : 32
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 27
          // ------------------------------- 

          int index = 255;
        
          int inVal = 255;
        
          int _len_buf0 = 65025;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          pack6bit(buf,index,inVal);
          free(buf);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 57
          // dynamic_instructions_O0 : 57
          // ------------------------------- 
          // static_instructions_O1 : 32
          // dynamic_instructions_O1 : 32
          // ------------------------------- 
          // static_instructions_O2 : 32
          // dynamic_instructions_O2 : 32
          // ------------------------------- 
          // static_instructions_O3 : 32
          // dynamic_instructions_O3 : 32
          // ------------------------------- 
          // static_instructions_Ofast : 32
          // dynamic_instructions_Ofast : 32
          // ------------------------------- 
          // static_instructions_Os : 32
          // dynamic_instructions_Os : 32
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 27
          // ------------------------------- 

          int index = 10;
        
          int inVal = 10;
        
          int _len_buf0 = 100;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          pack6bit(buf,index,inVal);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
