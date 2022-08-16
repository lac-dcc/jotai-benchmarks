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
struct tegra_i2c_dev {scalar_t__ is_dvc; } ;

/* Variables and functions */
 unsigned long I2C_TX_FIFO ; 

__attribute__((used)) static unsigned long tegra_i2c_reg_addr(struct tegra_i2c_dev *i2c_dev,
	unsigned long reg)
{
	if (i2c_dev->is_dvc)
		reg += (reg >= I2C_TX_FIFO) ? 0x10 : 0x40;
	return reg;
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
          unsigned long reg = 100;
          int _len_i2c_dev0 = 1;
          struct tegra_i2c_dev * i2c_dev = (struct tegra_i2c_dev *) malloc(_len_i2c_dev0*sizeof(struct tegra_i2c_dev));
          for(int _i0 = 0; _i0 < _len_i2c_dev0; _i0++) {
            i2c_dev[_i0].is_dvc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = tegra_i2c_reg_addr(i2c_dev,reg);
          printf("%lu\n", benchRet); 
          free(i2c_dev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long reg = 10;
          int _len_i2c_dev0 = 100;
          struct tegra_i2c_dev * i2c_dev = (struct tegra_i2c_dev *) malloc(_len_i2c_dev0*sizeof(struct tegra_i2c_dev));
          for(int _i0 = 0; _i0 < _len_i2c_dev0; _i0++) {
            i2c_dev[_i0].is_dvc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = tegra_i2c_reg_addr(i2c_dev,reg);
          printf("%lu\n", benchRet); 
          free(i2c_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
