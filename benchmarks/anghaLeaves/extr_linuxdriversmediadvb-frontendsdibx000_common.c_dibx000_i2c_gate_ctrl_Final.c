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
typedef  int u8 ;
typedef  int u16 ;
struct dibx000_i2c_master {scalar_t__ device_rev; int base_reg; } ;

/* Variables and functions */
 scalar_t__ DIB7000 ; 

__attribute__((used)) static int dibx000_i2c_gate_ctrl(struct dibx000_i2c_master *mst, u8 tx[4],
				 u8 addr, int onoff)
{
	u16 val;


	if (onoff)
		val = addr << 8;	// bit 7 = use master or not, if 0, the gate is open
	else
		val = 1 << 7;

	if (mst->device_rev > DIB7000)
		val <<= 1;

	tx[0] = (((mst->base_reg + 1) >> 8) & 0xff);
	tx[1] = ((mst->base_reg + 1) & 0xff);
	tx[2] = val >> 8;
	tx[3] = val & 0xff;

	return 0;
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
          int addr = 100;
          int onoff = 100;
          int _len_mst0 = 1;
          struct dibx000_i2c_master * mst = (struct dibx000_i2c_master *) malloc(_len_mst0*sizeof(struct dibx000_i2c_master));
          for(int _i0 = 0; _i0 < _len_mst0; _i0++) {
            mst[_i0].device_rev = ((-2 * (next_i()%2)) + 1) * next_i();
        mst[_i0].base_reg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tx0 = 4;
          int * tx = (int *) malloc(_len_tx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx0; _i0++) {
            tx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dibx000_i2c_gate_ctrl(mst,tx,addr,onoff);
          printf("%d\n", benchRet); 
          free(mst);
          free(tx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
