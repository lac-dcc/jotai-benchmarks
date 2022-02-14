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
typedef  scalar_t__ u8 ;
struct lp855x {int chip_id; } ;

/* Variables and functions */
#define  LP8550 134 
#define  LP8551 133 
#define  LP8552 132 
#define  LP8553 131 
#define  LP8555 130 
 scalar_t__ LP8555_EPROM_END ; 
 scalar_t__ LP8555_EPROM_START ; 
#define  LP8556 129 
 scalar_t__ LP8556_EPROM_END ; 
 scalar_t__ LP8556_EPROM_START ; 
#define  LP8557 128 
 scalar_t__ LP8557_EPROM_END ; 
 scalar_t__ LP8557_EPROM_START ; 
 scalar_t__ LP855X_EEPROM_END ; 
 scalar_t__ LP855X_EEPROM_START ; 

__attribute__((used)) static bool lp855x_is_valid_rom_area(struct lp855x *lp, u8 addr)
{
	u8 start, end;

	switch (lp->chip_id) {
	case LP8550:
	case LP8551:
	case LP8552:
	case LP8553:
		start = LP855X_EEPROM_START;
		end = LP855X_EEPROM_END;
		break;
	case LP8556:
		start = LP8556_EPROM_START;
		end = LP8556_EPROM_END;
		break;
	case LP8555:
		start = LP8555_EPROM_START;
		end = LP8555_EPROM_END;
		break;
	case LP8557:
		start = LP8557_EPROM_START;
		end = LP8557_EPROM_END;
		break;
	default:
		return false;
	}

	return addr >= start && addr <= end;
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
          long addr = 255;
          int _len_lp0 = 1;
          struct lp855x * lp = (struct lp855x *) malloc(_len_lp0*sizeof(struct lp855x));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp->chip_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lp855x_is_valid_rom_area(lp,addr);
          printf("%d\n", benchRet); 
          free(lp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
