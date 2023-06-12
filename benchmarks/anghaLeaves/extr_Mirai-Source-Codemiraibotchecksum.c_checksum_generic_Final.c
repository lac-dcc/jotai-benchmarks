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
typedef  int uint32_t ;
typedef  unsigned long uint16_t ;

/* Variables and functions */

uint16_t checksum_generic(uint16_t *addr, uint32_t count)
{
    register unsigned long sum = 0;

    for (sum = 0; count > 1; count -= 2)
        sum += *addr++;
    if (count == 1)
        sum += (char)*addr;

    sum = (sum >> 16) + (sum & 0xFFFF);
    sum += (sum >> 16);
    
    return ~sum;
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
          // static_instructions_O0 : 40
          // dynamic_instructions_O0 : 1680
          // ------------------------------- 
          // static_instructions_O1 : 27
          // dynamic_instructions_O1 : 783
          // ------------------------------- 
          // static_instructions_O2 : 90
          // dynamic_instructions_O2 : 230
          // ------------------------------- 
          // static_instructions_O3 : 90
          // dynamic_instructions_O3 : 230
          // ------------------------------- 
          // static_instructions_Ofast : 90
          // dynamic_instructions_Ofast : 230
          // ------------------------------- 
          // static_instructions_Os : 26
          // dynamic_instructions_Os : 782
          // ------------------------------- 
          // static_instructions_Oz : 23
          // dynamic_instructions_Oz : 781
          // ------------------------------- 

          int count = 255;
        
          int _len_addr0 = 65025;
          unsigned long * addr = (unsigned long *) malloc(_len_addr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = checksum_generic(addr,count);
          printf("%lu\n", benchRet); 
          free(addr);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 89
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 49
          // ------------------------------- 
          // static_instructions_O2 : 68
          // dynamic_instructions_O2 : 68
          // ------------------------------- 
          // static_instructions_O3 : 68
          // dynamic_instructions_O3 : 68
          // ------------------------------- 
          // static_instructions_Ofast : 68
          // dynamic_instructions_Ofast : 68
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 48
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 47
          // ------------------------------- 

          int count = 10;
        
          int _len_addr0 = 100;
          unsigned long * addr = (unsigned long *) malloc(_len_addr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = checksum_generic(addr,count);
          printf("%lu\n", benchRet); 
          free(addr);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_addr0 = 1;
          unsigned long * addr = (unsigned long *) malloc(_len_addr0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = checksum_generic(addr,count);
          printf("%lu\n", benchRet); 
          free(addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
