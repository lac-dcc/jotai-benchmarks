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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  tracing_map_cmp_fn_t ;

/* Variables and functions */
 int /*<<< orphan*/  tracing_map_cmp_none ; 
 int /*<<< orphan*/  tracing_map_cmp_s16 ; 
 int /*<<< orphan*/  tracing_map_cmp_s32 ; 
 int /*<<< orphan*/  tracing_map_cmp_s64 ; 
 int /*<<< orphan*/  tracing_map_cmp_s8 ; 
 int /*<<< orphan*/  tracing_map_cmp_u16 ; 
 int /*<<< orphan*/  tracing_map_cmp_u32 ; 
 int /*<<< orphan*/  tracing_map_cmp_u64 ; 
 int /*<<< orphan*/  tracing_map_cmp_u8 ; 

tracing_map_cmp_fn_t tracing_map_cmp_num(int field_size,
					 int field_is_signed)
{
	tracing_map_cmp_fn_t fn = tracing_map_cmp_none;

	switch (field_size) {
	case 8:
		if (field_is_signed)
			fn = tracing_map_cmp_s64;
		else
			fn = tracing_map_cmp_u64;
		break;
	case 4:
		if (field_is_signed)
			fn = tracing_map_cmp_s32;
		else
			fn = tracing_map_cmp_u32;
		break;
	case 2:
		if (field_is_signed)
			fn = tracing_map_cmp_s16;
		else
			fn = tracing_map_cmp_u16;
		break;
	case 1:
		if (field_is_signed)
			fn = tracing_map_cmp_s8;
		else
			fn = tracing_map_cmp_u8;
		break;
	}

	return fn;
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
          int field_size = 100;
          int field_is_signed = 100;
          int benchRet = tracing_map_cmp_num(field_size,field_is_signed);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int field_size = 255;
          int field_is_signed = 255;
          int benchRet = tracing_map_cmp_num(field_size,field_is_signed);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int field_size = 10;
          int field_is_signed = 10;
          int benchRet = tracing_map_cmp_num(field_size,field_is_signed);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
