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
struct regulator_dev {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 unsigned int WM831X_BUCKV_MAX_SELECTOR ; 

__attribute__((used)) static int wm831x_buckv_list_voltage(struct regulator_dev *rdev,
				      unsigned selector)
{
	if (selector <= 0x8)
		return 600000;
	if (selector <= WM831X_BUCKV_MAX_SELECTOR)
		return 600000 + ((selector - 0x8) * 12500);
	return -EINVAL;
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
          unsigned int selector = 100;
          int _len_rdev0 = 1;
          struct regulator_dev * rdev = (struct regulator_dev *) malloc(_len_rdev0*sizeof(struct regulator_dev));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wm831x_buckv_list_voltage(rdev,selector);
          printf("%d\n", benchRet); 
          free(rdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int selector = 255;
          int _len_rdev0 = 65025;
          struct regulator_dev * rdev = (struct regulator_dev *) malloc(_len_rdev0*sizeof(struct regulator_dev));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wm831x_buckv_list_voltage(rdev,selector);
          printf("%d\n", benchRet); 
          free(rdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int selector = 10;
          int _len_rdev0 = 100;
          struct regulator_dev * rdev = (struct regulator_dev *) malloc(_len_rdev0*sizeof(struct regulator_dev));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wm831x_buckv_list_voltage(rdev,selector);
          printf("%d\n", benchRet); 
          free(rdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
