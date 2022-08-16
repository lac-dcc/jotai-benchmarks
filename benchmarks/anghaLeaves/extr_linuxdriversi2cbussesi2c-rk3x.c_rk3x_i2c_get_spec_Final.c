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
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct i2c_spec_values {int dummy; } ;

/* Variables and functions */
 struct i2c_spec_values const fast_mode_plus_spec ; 
 struct i2c_spec_values const fast_mode_spec ; 
 struct i2c_spec_values const standard_mode_spec ; 

__attribute__((used)) static const struct i2c_spec_values *rk3x_i2c_get_spec(unsigned int speed)
{
	if (speed <= 100000)
		return &standard_mode_spec;
	else if (speed <= 400000)
		return &fast_mode_spec;
	else
		return &fast_mode_plus_spec;
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
          unsigned int speed = 100;
          const struct i2c_spec_values * benchRet = rk3x_i2c_get_spec(speed);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int speed = 255;
          const struct i2c_spec_values * benchRet = rk3x_i2c_get_spec(speed);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int speed = 10;
          const struct i2c_spec_values * benchRet = rk3x_i2c_get_spec(speed);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
