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
typedef  enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;

/* Variables and functions */
 int EINVAL ; 
 int GPIOD_FLAGS_BIT_DIR_OUT ; 
 int GPIOD_FLAGS_BIT_DIR_SET ; 
 int GPIOD_FLAGS_BIT_DIR_VAL ; 

__attribute__((used)) static int
__acpi_gpio_update_gpiod_flags(enum gpiod_flags *flags, enum gpiod_flags update)
{
	int ret = 0;

	/*
	 * Check if the BIOS has IoRestriction with explicitly set direction
	 * and update @flags accordingly. Otherwise use whatever caller asked
	 * for.
	 */
	if (update & GPIOD_FLAGS_BIT_DIR_SET) {
		enum gpiod_flags diff = *flags ^ update;

		/*
		 * Check if caller supplied incompatible GPIO initialization
		 * flags.
		 *
		 * Return %-EINVAL to notify that firmware has different
		 * settings and we are going to use them.
		 */
		if (((*flags & GPIOD_FLAGS_BIT_DIR_SET) && (diff & GPIOD_FLAGS_BIT_DIR_OUT)) ||
		    ((*flags & GPIOD_FLAGS_BIT_DIR_OUT) && (diff & GPIOD_FLAGS_BIT_DIR_VAL)))
			ret = -EINVAL;
		*flags = update;
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
          enum gpiod_flags update = 0;
          int _len_flags0 = 1;
          enum gpiod_flags * flags = (enum gpiod_flags *) malloc(_len_flags0*sizeof(enum gpiod_flags));
          for(int _i0 = 0; _i0 < _len_flags0; _i0++) {
            flags[_i0] = 0;
          }
          int benchRet = __acpi_gpio_update_gpiod_flags(flags,update);
          printf("%d\n", benchRet); 
          free(flags);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum gpiod_flags update = 0;
          int _len_flags0 = 100;
          enum gpiod_flags * flags = (enum gpiod_flags *) malloc(_len_flags0*sizeof(enum gpiod_flags));
          for(int _i0 = 0; _i0 < _len_flags0; _i0++) {
            flags[_i0] = 0;
          }
          int benchRet = __acpi_gpio_update_gpiod_flags(flags,update);
          printf("%d\n", benchRet); 
          free(flags);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
