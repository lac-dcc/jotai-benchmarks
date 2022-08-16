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
typedef  int uint32_t ;
typedef  int /*<<< orphan*/  uint16_t ;

/* Variables and functions */
 int RADEON_MAX_UV_ADR_MASK ; 
 int RADEON_MAX_UV_ADR_SHIFT ; 
 int RADEON_TABLE1_BOT_ADR_MASK ; 
 int RADEON_TABLE1_BOT_ADR_SHIFT ; 
 int RADEON_TABLE3_TOP_ADR_MASK ; 
 int RADEON_TABLE3_TOP_ADR_SHIFT ; 
 int RADEON_VCODE_TABLE_SEL_MASK ; 
 int RADEON_VCODE_TABLE_SEL_SHIFT ; 

__attribute__((used)) static uint16_t radeon_get_vtiming_tables_addr(uint32_t tv_uv_adr)
{
	uint16_t v_table;

	switch ((tv_uv_adr & RADEON_VCODE_TABLE_SEL_MASK) >> RADEON_VCODE_TABLE_SEL_SHIFT) {
	case 0:
		v_table = ((tv_uv_adr & RADEON_MAX_UV_ADR_MASK) >> RADEON_MAX_UV_ADR_SHIFT) * 2 + 1;
		break;
	case 1:
		v_table = ((tv_uv_adr & RADEON_TABLE1_BOT_ADR_MASK) >> RADEON_TABLE1_BOT_ADR_SHIFT) * 2 + 1;
		break;
	case 2:
		v_table = ((tv_uv_adr & RADEON_TABLE3_TOP_ADR_MASK) >> RADEON_TABLE3_TOP_ADR_SHIFT) * 2 + 1;
		break;
	default:
		v_table = 0;
		break;
	}
	return v_table;
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
          int tv_uv_adr = 100;
          int benchRet = radeon_get_vtiming_tables_addr(tv_uv_adr);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int tv_uv_adr = 255;
          int benchRet = radeon_get_vtiming_tables_addr(tv_uv_adr);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tv_uv_adr = 10;
          int benchRet = radeon_get_vtiming_tables_addr(tv_uv_adr);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
