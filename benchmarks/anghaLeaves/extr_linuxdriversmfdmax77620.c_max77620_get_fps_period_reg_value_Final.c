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
struct max77620_chip {int chip_id; } ;

/* Variables and functions */
 int EINVAL ; 
#define  MAX20024 129 
 int MAX20024_FPS_PERIOD_MIN_US ; 
#define  MAX77620 128 
 int MAX77620_FPS_PERIOD_MIN_US ; 

__attribute__((used)) static int max77620_get_fps_period_reg_value(struct max77620_chip *chip,
					     int tperiod)
{
	int fps_min_period;
	int i;

	switch (chip->chip_id) {
	case MAX20024:
		fps_min_period = MAX20024_FPS_PERIOD_MIN_US;
		break;
	case MAX77620:
		fps_min_period = MAX77620_FPS_PERIOD_MIN_US;
		break;
	default:
		return -EINVAL;
	}

	for (i = 0; i < 7; i++) {
		if (fps_min_period >= tperiod)
			return i;
		fps_min_period *= 2;
	}

	return i;
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
          int tperiod = 100;
          int _len_chip0 = 1;
          struct max77620_chip * chip = (struct max77620_chip *) malloc(_len_chip0*sizeof(struct max77620_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].chip_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = max77620_get_fps_period_reg_value(chip,tperiod);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int tperiod = 10;
          int _len_chip0 = 100;
          struct max77620_chip * chip = (struct max77620_chip *) malloc(_len_chip0*sizeof(struct max77620_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].chip_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = max77620_get_fps_period_reg_value(chip,tperiod);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
