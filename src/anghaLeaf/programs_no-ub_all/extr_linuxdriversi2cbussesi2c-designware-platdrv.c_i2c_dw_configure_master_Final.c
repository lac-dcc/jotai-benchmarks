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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct i2c_timings {int bus_freq_hz; } ;
struct dw_i2c_dev {int functionality; int master_cfg; int /*<<< orphan*/  mode; struct i2c_timings timings; } ;

/* Variables and functions */
 int DW_IC_CON_MASTER ; 
 int DW_IC_CON_RESTART_EN ; 
 int DW_IC_CON_SLAVE_DISABLE ; 
 int DW_IC_CON_SPEED_FAST ; 
 int DW_IC_CON_SPEED_HIGH ; 
 int DW_IC_CON_SPEED_STD ; 
 int DW_IC_DEFAULT_FUNCTIONALITY ; 
 int /*<<< orphan*/  DW_IC_MASTER ; 
 int I2C_FUNC_10BIT_ADDR ; 

__attribute__((used)) static void i2c_dw_configure_master(struct dw_i2c_dev *dev)
{
	struct i2c_timings *t = &dev->timings;

	dev->functionality = I2C_FUNC_10BIT_ADDR | DW_IC_DEFAULT_FUNCTIONALITY;

	dev->master_cfg = DW_IC_CON_MASTER | DW_IC_CON_SLAVE_DISABLE |
			  DW_IC_CON_RESTART_EN;

	dev->mode = DW_IC_MASTER;

	switch (t->bus_freq_hz) {
	case 100000:
		dev->master_cfg |= DW_IC_CON_SPEED_STD;
		break;
	case 3400000:
		dev->master_cfg |= DW_IC_CON_SPEED_HIGH;
		break;
	default:
		dev->master_cfg |= DW_IC_CON_SPEED_FAST;
	}
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

    // big-arr
    case 0:
    {
          int _len_dev0 = 1;
          struct dw_i2c_dev * dev = (struct dw_i2c_dev *) malloc(_len_dev0*sizeof(struct dw_i2c_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev->functionality = ((-2 * (next_i()%2)) + 1) * next_i();
        dev->master_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        dev->mode = ((-2 * (next_i()%2)) + 1) * next_i();
        dev->timings.bus_freq_hz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i2c_dw_configure_master(dev);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
