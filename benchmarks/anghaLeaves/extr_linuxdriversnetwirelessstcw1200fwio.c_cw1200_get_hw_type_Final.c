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
typedef  int u32 ;

/* Variables and functions */
 int HIF_8601_SILICON ; 
 int HIF_8601_VERSATILE ; 
 int HIF_9000_SILICON_VERSATILE ; 

__attribute__((used)) static int cw1200_get_hw_type(u32 config_reg_val, int *major_revision)
{
	int hw_type = -1;
	u32 silicon_type = (config_reg_val >> 24) & 0x7;
	u32 silicon_vers = (config_reg_val >> 31) & 0x1;

	switch (silicon_type) {
	case 0x00:
		*major_revision = 1;
		hw_type = HIF_9000_SILICON_VERSATILE;
		break;
	case 0x01:
	case 0x02: /* CW1x00 */
	case 0x04: /* CW1x60 */
		*major_revision = silicon_type;
		if (silicon_vers)
			hw_type = HIF_8601_VERSATILE;
		else
			hw_type = HIF_8601_SILICON;
		break;
	default:
		break;
	}

	return hw_type;
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
          int config_reg_val = 100;
          int _len_major_revision0 = 1;
          int * major_revision = (int *) malloc(_len_major_revision0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_major_revision0; _i0++) {
            major_revision[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cw1200_get_hw_type(config_reg_val,major_revision);
          printf("%d\n", benchRet); 
          free(major_revision);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int config_reg_val = 10;
          int _len_major_revision0 = 100;
          int * major_revision = (int *) malloc(_len_major_revision0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_major_revision0; _i0++) {
            major_revision[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cw1200_get_hw_type(config_reg_val,major_revision);
          printf("%d\n", benchRet); 
          free(major_revision);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
