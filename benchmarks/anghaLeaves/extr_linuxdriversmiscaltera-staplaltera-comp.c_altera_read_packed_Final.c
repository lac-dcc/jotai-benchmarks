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
       0            empty\n\
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
typedef  scalar_t__ u8 ;
typedef  scalar_t__ u32 ;

/* Variables and functions */
 scalar_t__ CHAR_BITS ; 
 scalar_t__ SHORT_BITS ; 

__attribute__((used)) static u32 altera_read_packed(u8 *buffer, u32 bits, u32 *bits_avail,
							u32 *in_index)
{
	u32 result = 0;
	u32 shift = 0;
	u32 databyte = 0;

	while (bits > 0) {
		databyte = buffer[*in_index];
		result |= (((databyte >> (CHAR_BITS - *bits_avail))
			& (0xff >> (CHAR_BITS - *bits_avail))) << shift);

		if (bits <= *bits_avail) {
			result &= (0xffff >> (SHORT_BITS - (bits + shift)));
			*bits_avail -= bits;
			bits = 0;
		} else {
			++(*in_index);
			shift += *bits_avail;
			bits -= *bits_avail;
			*bits_avail = CHAR_BITS;
		}
	}

	return result;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          long bits = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_buffer0 = 1;
          long * buffer = (long *) malloc(_len_buffer0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_bits_avail0 = 1;
          long * bits_avail = (long *) malloc(_len_bits_avail0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_bits_avail0; _i0++) {
            bits_avail[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_in_index0 = 1;
          long * in_index = (long *) malloc(_len_in_index0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_in_index0; _i0++) {
            in_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = altera_read_packed(buffer,bits,bits_avail,in_index);
          printf("%ld\n", benchRet); 
          free(buffer);
          free(bits_avail);
          free(in_index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
