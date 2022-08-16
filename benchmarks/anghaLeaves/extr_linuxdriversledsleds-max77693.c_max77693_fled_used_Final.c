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
typedef  int u8 ;
struct max77693_led_device {int fled_mask; } ;

/* Variables and functions */
 int FLED1 ; 
 int FLED1_IOUT ; 
 int FLED2_IOUT ; 

__attribute__((used)) static inline bool max77693_fled_used(struct max77693_led_device *led,
					 int fled_id)
{
	u8 fled_bit = (fled_id == FLED1) ? FLED1_IOUT : FLED2_IOUT;

	return led->fled_mask & fled_bit;
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
          int fled_id = 100;
          int _len_led0 = 1;
          struct max77693_led_device * led = (struct max77693_led_device *) malloc(_len_led0*sizeof(struct max77693_led_device));
          for(int _i0 = 0; _i0 < _len_led0; _i0++) {
            led[_i0].fled_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = max77693_fled_used(led,fled_id);
          printf("%d\n", benchRet); 
          free(led);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int fled_id = 10;
          int _len_led0 = 100;
          struct max77693_led_device * led = (struct max77693_led_device *) malloc(_len_led0*sizeof(struct max77693_led_device));
          for(int _i0 = 0; _i0 < _len_led0; _i0++) {
            led[_i0].fled_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = max77693_fled_used(led,fled_id);
          printf("%d\n", benchRet); 
          free(led);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
