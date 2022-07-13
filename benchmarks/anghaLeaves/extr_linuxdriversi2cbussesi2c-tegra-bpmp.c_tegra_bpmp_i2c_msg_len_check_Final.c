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
       1            big-arr-10x\n\
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
struct i2c_msg {int flags; scalar_t__ len; } ;

/* Variables and functions */
 int EINVAL ; 
 int I2C_M_RD ; 
 scalar_t__ SERIALI2C_HDR_SIZE ; 
 size_t TEGRA_I2C_IPC_MAX_IN_BUF_SIZE ; 
 size_t TEGRA_I2C_IPC_MAX_OUT_BUF_SIZE ; 

__attribute__((used)) static int tegra_bpmp_i2c_msg_len_check(struct i2c_msg *msgs, unsigned int num)
{
	size_t tx_len = 0, rx_len = 0;
	unsigned int i;

	for (i = 0; i < num; i++)
		if (!(msgs[i].flags & I2C_M_RD))
			tx_len += SERIALI2C_HDR_SIZE + msgs[i].len;

	if (tx_len > TEGRA_I2C_IPC_MAX_IN_BUF_SIZE)
		return -EINVAL;

	for (i = 0; i < num; i++)
		if ((msgs[i].flags & I2C_M_RD))
			rx_len += msgs[i].len;

	if (rx_len > TEGRA_I2C_IPC_MAX_OUT_BUF_SIZE)
		return -EINVAL;

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

    // big-arr
    case 0:
    {
          unsigned int num = 255;
          int _len_msgs0 = 65025;
          struct i2c_msg * msgs = (struct i2c_msg *) malloc(_len_msgs0*sizeof(struct i2c_msg));
          for(int _i0 = 0; _i0 < _len_msgs0; _i0++) {
            msgs[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        msgs[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tegra_bpmp_i2c_msg_len_check(msgs,num);
          printf("%d\n", benchRet); 
          free(msgs);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int num = 10;
          int _len_msgs0 = 100;
          struct i2c_msg * msgs = (struct i2c_msg *) malloc(_len_msgs0*sizeof(struct i2c_msg));
          for(int _i0 = 0; _i0 < _len_msgs0; _i0++) {
            msgs[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        msgs[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tegra_bpmp_i2c_msg_len_check(msgs,num);
          printf("%d\n", benchRet); 
          free(msgs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
