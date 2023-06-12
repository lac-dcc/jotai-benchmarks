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
typedef  int /*<<< orphan*/  u8 ;
typedef  scalar_t__ u32 ;
typedef  int /*<<< orphan*/  u16 ;

/* Variables and functions */

__attribute__((used)) static void xemaclite_aligned_read(u32 *src_ptr, u8 *dest_ptr,
				   unsigned length)
{
	u16 *to_u16_ptr, *from_u16_ptr;
	u32 *from_u32_ptr;
	u32 align_buffer;

	from_u32_ptr = src_ptr;
	to_u16_ptr = (u16 *)dest_ptr;

	for (; length > 3; length -= 4) {
		/* Copy each word into the temporary buffer */
		align_buffer = *from_u32_ptr++;
		from_u16_ptr = (u16 *)&align_buffer;

		/* Read data from source */
		*to_u16_ptr++ = *from_u16_ptr++;
		*to_u16_ptr++ = *from_u16_ptr++;
	}

	if (length) {
		u8 *to_u8_ptr, *from_u8_ptr;

		/* Set up to read the remaining data */
		to_u8_ptr = (u8 *)to_u16_ptr;
		align_buffer = *from_u32_ptr++;
		from_u8_ptr = (u8 *)&align_buffer;

		/* Read the remaining data */
		for (; length > 0; length--)
			*to_u8_ptr = *from_u8_ptr;
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
          // static_instructions_O0 : 68
          // dynamic_instructions_O0 : 2200
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 452
          // ------------------------------- 
          // static_instructions_O2 : 44
          // dynamic_instructions_O2 : 240
          // ------------------------------- 
          // static_instructions_O3 : 44
          // dynamic_instructions_O3 : 240
          // ------------------------------- 
          // static_instructions_Ofast : 44
          // dynamic_instructions_Ofast : 240
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 451
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 452
          // ------------------------------- 

          unsigned int length = 255;
        
          int _len_src_ptr0 = 65025;
          long * src_ptr = (long *) malloc(_len_src_ptr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_src_ptr0; _i0++) {
            src_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dest_ptr0 = 65025;
          int * dest_ptr = (int *) malloc(_len_dest_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_ptr0; _i0++) {
            dest_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          xemaclite_aligned_read(src_ptr,dest_ptr,length);
          free(src_ptr);
          free(dest_ptr);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 68
          // dynamic_instructions_O0 : 116
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 25
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 37
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 37
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 37
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 24
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          unsigned int length = 10;
        
          int _len_src_ptr0 = 100;
          long * src_ptr = (long *) malloc(_len_src_ptr0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_src_ptr0; _i0++) {
            src_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dest_ptr0 = 100;
          int * dest_ptr = (int *) malloc(_len_dest_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest_ptr0; _i0++) {
            dest_ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          xemaclite_aligned_read(src_ptr,dest_ptr,length);
          free(src_ptr);
          free(dest_ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
