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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int u32 ;
struct i2c_client {int flags; int addr; } ;

/* Variables and functions */
 int I2C_CLIENT_TEN ; 

__attribute__((used)) static bool stm32f7_i2c_is_addr_match(struct i2c_client *slave, u32 addcode)
{
	u32 addr;

	if (!slave)
		return false;

	if (slave->flags & I2C_CLIENT_TEN) {
		/*
		 * For 10-bit addr, addcode = 11110XY with
		 * X = Bit 9 of slave address
		 * Y = Bit 8 of slave address
		 */
		addr = slave->addr >> 8;
		addr |= 0x78;
		if (addr == addcode)
			return true;
	} else {
		addr = slave->addr & 0x7f;
		if (addr == addcode)
			return true;
	}

	return false;
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
          int addcode = 100;
          int _len_slave0 = 1;
          struct i2c_client * slave = (struct i2c_client *) malloc(_len_slave0*sizeof(struct i2c_client));
          for(int _i0 = 0; _i0 < _len_slave0; _i0++) {
            slave[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        slave[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stm32f7_i2c_is_addr_match(slave,addcode);
          printf("%d\n", benchRet); 
          free(slave);
        
        break;
    }
    // big-arr
    case 1:
    {
          int addcode = 255;
          int _len_slave0 = 65025;
          struct i2c_client * slave = (struct i2c_client *) malloc(_len_slave0*sizeof(struct i2c_client));
          for(int _i0 = 0; _i0 < _len_slave0; _i0++) {
            slave[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        slave[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stm32f7_i2c_is_addr_match(slave,addcode);
          printf("%d\n", benchRet); 
          free(slave);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int addcode = 10;
          int _len_slave0 = 100;
          struct i2c_client * slave = (struct i2c_client *) malloc(_len_slave0*sizeof(struct i2c_client));
          for(int _i0 = 0; _i0 < _len_slave0; _i0++) {
            slave[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        slave[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stm32f7_i2c_is_addr_match(slave,addcode);
          printf("%d\n", benchRet); 
          free(slave);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
