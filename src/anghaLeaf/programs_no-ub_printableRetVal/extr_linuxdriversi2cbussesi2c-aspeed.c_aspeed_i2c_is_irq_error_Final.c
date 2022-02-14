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
typedef  int u32 ;

/* Variables and functions */
 int ASPEED_I2CD_INTR_ABNORMAL ; 
 int ASPEED_I2CD_INTR_ARBIT_LOSS ; 
 int ASPEED_I2CD_INTR_SCL_TIMEOUT ; 
 int ASPEED_I2CD_INTR_SDA_DL_TIMEOUT ; 
 int EAGAIN ; 
 int EBUSY ; 
 int EPROTO ; 

__attribute__((used)) static int aspeed_i2c_is_irq_error(u32 irq_status)
{
	if (irq_status & ASPEED_I2CD_INTR_ARBIT_LOSS)
		return -EAGAIN;
	if (irq_status & (ASPEED_I2CD_INTR_SDA_DL_TIMEOUT |
			  ASPEED_I2CD_INTR_SCL_TIMEOUT))
		return -EBUSY;
	if (irq_status & (ASPEED_I2CD_INTR_ABNORMAL))
		return -EPROTO;

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
          int irq_status = 255;
          int benchRet = aspeed_i2c_is_irq_error(irq_status);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
