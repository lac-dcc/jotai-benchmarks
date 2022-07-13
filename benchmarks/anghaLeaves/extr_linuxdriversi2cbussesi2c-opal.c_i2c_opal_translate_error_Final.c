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

/* Variables and functions */
 int EAGAIN ; 
 int EBUSY ; 
 int EINVAL ; 
 int EIO ; 
 int ENOMEM ; 
 int ENXIO ; 
 int ETIMEDOUT ; 
#define  OPAL_I2C_ARBT_LOST 133 
#define  OPAL_I2C_NACK_RCVD 132 
#define  OPAL_I2C_STOP_ERR 131 
#define  OPAL_I2C_TIMEOUT 130 
#define  OPAL_NO_MEM 129 
#define  OPAL_PARAMETER 128 

__attribute__((used)) static int i2c_opal_translate_error(int rc)
{
	switch (rc) {
	case OPAL_NO_MEM:
		return -ENOMEM;
	case OPAL_PARAMETER:
		return -EINVAL;
	case OPAL_I2C_ARBT_LOST:
		return -EAGAIN;
	case OPAL_I2C_TIMEOUT:
		return -ETIMEDOUT;
	case OPAL_I2C_NACK_RCVD:
		return -ENXIO;
	case OPAL_I2C_STOP_ERR:
		return -EBUSY;
	default:
		return -EIO;
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

    // int-bounds
    case 0:
    {
          int rc = 100;
          int benchRet = i2c_opal_translate_error(rc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int rc = 255;
          int benchRet = i2c_opal_translate_error(rc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int rc = 10;
          int benchRet = i2c_opal_translate_error(rc);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
