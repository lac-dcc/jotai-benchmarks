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
struct i2c_client {int dummy; } ;

/* Variables and functions */
 int ENODATA ; 
#define  PMBUS_VOUT_MODE 128 

__attribute__((used)) static int ltc3815_read_byte_data(struct i2c_client *client, int page, int reg)
{
	int ret;

	switch (reg) {
	case PMBUS_VOUT_MODE:
		/*
		 * The chip returns 0x3e, suggesting VID mode with manufacturer
		 * specific VID codes. Since the output voltage is reported
		 * with a LSB of 0.5mV, override and report direct mode with
		 * appropriate coefficients.
		 */
		ret = 0x40;
		break;
	default:
		ret = -ENODATA;
		break;
	}
	return ret;
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
          int page = 100;
          int reg = 100;
          int _len_client0 = 1;
          struct i2c_client * client = (struct i2c_client *) malloc(_len_client0*sizeof(struct i2c_client));
          for(int _i0 = 0; _i0 < _len_client0; _i0++) {
            client[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ltc3815_read_byte_data(client,page,reg);
          printf("%d\n", benchRet); 
          free(client);
        
        break;
    }
    // big-arr
    case 1:
    {
          int page = 255;
          int reg = 255;
          int _len_client0 = 65025;
          struct i2c_client * client = (struct i2c_client *) malloc(_len_client0*sizeof(struct i2c_client));
          for(int _i0 = 0; _i0 < _len_client0; _i0++) {
            client[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ltc3815_read_byte_data(client,page,reg);
          printf("%d\n", benchRet); 
          free(client);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int page = 10;
          int reg = 10;
          int _len_client0 = 100;
          struct i2c_client * client = (struct i2c_client *) malloc(_len_client0*sizeof(struct i2c_client));
          for(int _i0 = 0; _i0 < _len_client0; _i0++) {
            client[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ltc3815_read_byte_data(client,page,reg);
          printf("%d\n", benchRet); 
          free(client);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
