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
typedef  int u16 ;

/* Variables and functions */
 int EINVAL ; 
 int I2C_M_IGNORE_NAK ; 
 int I2C_M_NOSTART ; 
 int I2C_M_NO_RD_ACK ; 
 int I2C_M_RD ; 
 int I2C_M_RECV_LEN ; 
 int I2C_M_REV_DIR_ADDR ; 
 int I2C_M_STOP ; 
 int I2C_M_TEN ; 
 int SERIALI2C_IGNORE_NAK ; 
 int SERIALI2C_NOSTART ; 
 int SERIALI2C_NO_RD_ACK ; 
 int SERIALI2C_RD ; 
 int SERIALI2C_RECV_LEN ; 
 int SERIALI2C_REV_DIR_ADDR ; 
 int SERIALI2C_STOP ; 
 int SERIALI2C_TEN ; 

__attribute__((used)) static int tegra_bpmp_xlate_flags(u16 flags, u16 *out)
{
	if (flags & I2C_M_TEN) {
		*out |= SERIALI2C_TEN;
		flags &= ~I2C_M_TEN;
	}

	if (flags & I2C_M_RD) {
		*out |= SERIALI2C_RD;
		flags &= ~I2C_M_RD;
	}

	if (flags & I2C_M_STOP) {
		*out |= SERIALI2C_STOP;
		flags &= ~I2C_M_STOP;
	}

	if (flags & I2C_M_NOSTART) {
		*out |= SERIALI2C_NOSTART;
		flags &= ~I2C_M_NOSTART;
	}

	if (flags & I2C_M_REV_DIR_ADDR) {
		*out |= SERIALI2C_REV_DIR_ADDR;
		flags &= ~I2C_M_REV_DIR_ADDR;
	}

	if (flags & I2C_M_IGNORE_NAK) {
		*out |= SERIALI2C_IGNORE_NAK;
		flags &= ~I2C_M_IGNORE_NAK;
	}

	if (flags & I2C_M_NO_RD_ACK) {
		*out |= SERIALI2C_NO_RD_ACK;
		flags &= ~I2C_M_NO_RD_ACK;
	}

	if (flags & I2C_M_RECV_LEN) {
		*out |= SERIALI2C_RECV_LEN;
		flags &= ~I2C_M_RECV_LEN;
	}

	return (flags != 0) ? -EINVAL : 0;
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
          int flags = 100;
          int _len_out0 = 1;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tegra_bpmp_xlate_flags(flags,out);
          printf("%d\n", benchRet); 
          free(out);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int flags = 10;
          int _len_out0 = 100;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tegra_bpmp_xlate_flags(flags,out);
          printf("%d\n", benchRet); 
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
