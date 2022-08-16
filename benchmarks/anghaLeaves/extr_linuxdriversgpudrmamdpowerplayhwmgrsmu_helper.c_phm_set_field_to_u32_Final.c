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
       0            int-bounds\n\
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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int uint32_t ;
typedef  int /*<<< orphan*/  uint16_t ;
typedef  int u32 ;

/* Variables and functions */

uint32_t phm_set_field_to_u32(u32 offset, u32 original_data, u32 field, u32 size)
{
	u32 mask = 0;
	u32 shift = 0;

	shift = (offset % 4) << 3;
	if (size == sizeof(uint8_t))
		mask = 0xFF << shift;
	else if (size == sizeof(uint16_t))
		mask = 0xFFFF << shift;

	original_data &= ~mask;
	original_data |= (field << shift);
	return original_data;
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int offset = 100;
          int original_data = 100;
          int field = 100;
          int size = 100;
          int benchRet = phm_set_field_to_u32(offset,original_data,field,size);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int offset = 10;
          int original_data = 10;
          int field = 10;
          int size = 10;
          int benchRet = phm_set_field_to_u32(offset,original_data,field,size);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
