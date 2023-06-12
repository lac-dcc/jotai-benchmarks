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
typedef  unsigned long ulong ;

/* Variables and functions */

__attribute__((used)) static unsigned long decode (unsigned long *data, unsigned long *raw,
			     int len)
{
	ulong *odd, *even;

	/* convert length from bytes to longwords */
	len >>= 2;
	odd = raw;
	even = odd + len;

	/* prepare return pointer */
	raw += len * 2;

	do {
		*data++ = ((*odd++ & 0x55555555) << 1) | (*even++ & 0x55555555);
	} while (--len != 0);

	return (ulong)raw;
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
          // dynamic_instructions_O0 : 1537
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 578
          // ------------------------------- 
          // static_instructions_O2 : 103
          // dynamic_instructions_O2 : 341
          // ------------------------------- 
          // static_instructions_O3 : 103
          // dynamic_instructions_O3 : 341
          // ------------------------------- 
          // static_instructions_Ofast : 103
          // dynamic_instructions_Ofast : 341
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 579
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 579
          // ------------------------------- 

          int len = 255;
        
          int _len_data0 = 65025;
          unsigned long * data = (unsigned long *) malloc(_len_data0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_raw0 = 65025;
          unsigned long * raw = (unsigned long *) malloc(_len_raw0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_raw0; _i0++) {
            raw[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = decode(data,raw,len);
          printf("%lu\n", benchRet); 
          free(data);
          free(raw);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 49
          // dynamic_instructions_O0 : 73
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 45
          // dynamic_instructions_O2 : 45
          // ------------------------------- 
          // static_instructions_O3 : 45
          // dynamic_instructions_O3 : 45
          // ------------------------------- 
          // static_instructions_Ofast : 45
          // dynamic_instructions_Ofast : 45
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 30
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 30
          // ------------------------------- 

          int len = 10;
        
          int _len_data0 = 100;
          unsigned long * data = (unsigned long *) malloc(_len_data0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_raw0 = 100;
          unsigned long * raw = (unsigned long *) malloc(_len_raw0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_raw0; _i0++) {
            raw[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = decode(data,raw,len);
          printf("%lu\n", benchRet); 
          free(data);
          free(raw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
